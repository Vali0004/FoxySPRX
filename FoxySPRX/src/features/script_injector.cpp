#include "script_injector.h"
#include "rage/natives/natives.h"

namespace script {
	cscManager g_cscManager{};
	s32 startCallback(ccp name, s32 stackSize) {
		if (SCRIPT::HAS_SCRIPT_LOADED(name)) {
			s32 id{ SYSTEM::START_NEW_SCRIPT(name, stackSize) };
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(name);
			return id;
		}
		return NULL;
	}
	void terminate(s32 id, ccp name) {
		if (SCRIPT::DOES_SCRIPT_EXIST(name)) {
			MISC::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME(name);
			if (id) {
				SCRIPT::TERMINATE_THREAD(id);
			}
		}
	}
	bool running(ccp name) {
		return SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(rage::atComputeHash(name)) > 0;
	}
	s32 getIdForScript(ccp name, s32 stackSize) {
		if (SCRIPT::DOES_SCRIPT_EXIST(name)) {
			SCRIPT::REQUEST_SCRIPT(name);
			s32 id{};
			for (s32 i{}; !id && i != 100; ++i) {
				id = startCallback(name, stackSize);
			}
			return id;
		}
		else {
			return NULL;
		}
	}
	rage::scrProgram* getScrProgram(u32 nameHash) {
		u32 programTableAddr{ (u32)pointers::g_scrProgramTable };
		u32 programTable{ (programTableAddr + (nameHash & 0x1F) + 1) };
		u32 offset{ (programTable % 4) };
		u32 tableAddr{ *(u32*)(programTable - offset) };
		u32* table{ &tableAddr };
		u32 value{ table[offset] };
		u32 addr{};
		while (true) {
			programTableAddr += (value << 2);
			addr = *(u32*)(programTableAddr + 0xA4);
			if (VALID_ADDR(addr)) {
				u32 hashFromTable{ *(u32*)(addr + 0x38) };
				if (nameHash == hashFromTable) {
					return reinterpret_cast<rage::scrProgram*>(addr);
				}
			}
			u32 nextProgram{ programTableAddr + (value + 0x21) };
			offset = nextProgram % 4;
			u32 nextProgramAddr{ *(u32*)(nextProgram - offset) };
			value = (&nextProgramAddr)[offset];
			if (!value) {
				return nullptr;
			}
		}
		return nullptr;
	}
	u32 readValueFromFile(ccp file, u32 rsc7, u32 pos, bool pointer) {
		u32 offset{ pos + rsc7 };
		char buf[4]{};
		readFile(file, buf, 4, offset);
		if (pointer && buf[0] == 0x50) {
			buf[0] = 0x0;
		}
		return *(u32*)((s32)buf);
	}
	u32* readBytes(ccp file, u32 rsc7, u32 pos, s32 length) {
		char buffer[0x4000 + 0x1000]; //0x4000 is the max read... (Then why the fuck is it 0x5000?)
		readFile(file, buffer, length, pos + rsc7);
		return (u32*)buffer;
	}
	void csc::create() {
		ccp scriptNameWithExt{ string_combine(m_scriptName, ".csc")};
		g_logger.send("CSC", "Current CSC: %s", scriptNameWithExt);
		ccp path{ string_combine("/dev_hdd0/tmp/Foxy/CSC/", scriptNameWithExt) };
		g_logger.send("CSC", "Full path: %s", path);
		m_container.Magic = readValueFromFile(path, m_rsc7, 0x0);
		if (m_container.Magic) {
			g_logger.send("CSC", "Parsed magic (0x%lX)", m_container.Magic);
			m_rsc7 = m_container.getRsc();
		}
		m_container.OpcodePageList = readValueFromFile(path, m_rsc7, 0x8, true);
		m_container.OpcodeSize = readValueFromFile(path, m_rsc7, 0x10);
		m_container.StaticSize = readValueFromFile(path, m_rsc7, 0x18);
		m_container.NativeSize = readValueFromFile(path, m_rsc7, 0x20, true);
		m_container.Statics = readValueFromFile(path, m_rsc7, 0x24, true);
		m_container.StaticBytes = readBytes(path, m_rsc7, m_container.Statics, (int)m_container.StaticSize * 4);
		m_container.Natives = readValueFromFile(path, m_rsc7, 0x2C, true);
		for (u32 i{}; i != m_container.NativeSize; ++i) {
			m_container.NativeOPDs.push_back((u32)get_handler(readValueFromFile(path, m_rsc7, m_container.Natives + (i * 4), false))); //what the fuck is this?
		}
		m_container.StringHeap = readValueFromFile(path, m_rsc7, 0x44);
		m_container.StringHeapSize = readValueFromFile(path, m_rsc7, 0x48);
		m_container.correctSizes();
		u32 correctedOpcodeSize{ m_container.OpcodeSize };
		u32 correctedStringHeapSize{ m_container.StringHeapSize };
		m_container.correctSizes(true); //De-correct sizes for file reading
		for (u32 i{}; i != correctedOpcodeSize; ++i) {
			u32 pointer{ readValueFromFile(path, m_rsc7, m_container.OpcodePageList + (i * 4), true) };
			u32 size{ i == (correctedOpcodeSize - 1) ? m_container.OpcodeSize % 0x4000 : 0x4000 };
			m_container.StringHeaps.push_back({ pointer, readBytes(path, m_rsc7, pointer, size) });
		}
		for (u32 i{}; i != correctedStringHeapSize; ++i) {
			u32 pointer{ readValueFromFile(path, m_rsc7, m_container.StringHeap + (i * 4), true) };
			u32 size{ i == (correctedStringHeapSize - 1) ? m_container.StringHeapSize % 0x4000 : 0x4000 };
			m_container.StringHeaps.push_back({ pointer, readBytes(path, m_rsc7, pointer, size) });
		}
		m_created = true;
	}
	bool csc::replace() {
		u32 scriptHash{ rage::atComputeHash(m_script) };
		rage::scrProgram* program{ getScrProgram(scriptHash) };
		if (!VALID_ADDR(program)) {
			return false;
		}
		if (program->HashCode != scriptHash) {
			return false;
		}
		if (!m_created) {
			create();
		}
		if (program->NativeSize < m_container.Natives) { //For now, we will just not allocate new natives. Something todo later.
			return false;
		}
		program->OpcodeSize = m_container.OpcodeSize;
		program->StaticSize = m_container.StaticSize;
		program->StringHeapSize = m_container.StringHeapSize;
		for (u32 i{}; i != m_container.NativeSize; ++i) {
			//TODO: Test program->Natives[i]
			*reinterpret_cast<u32*>((u32)program->Natives + (i * 4)) = m_container.NativeOPDs[i];
		}
		//program->Natives = (u32*)m_container.Natives; - Manually set all OPDs
		m_container.correctSizes();
		u32 correctedOpcodeSize{ m_container.OpcodeSize };
		u32 correctedStringHeapSize{ m_container.StringHeapSize };
		m_container.correctSizes(true); //De-correct sizes for file reading
		for (u32 i{}; i != m_container.CodePages.size(); ++i) {
			pair<u32, u32*> pair{ m_container.CodePages[i] };
			u32 pointer{ pair.first };
			u32* bytes{ pair.second };
			u32 size{ i == (correctedOpcodeSize - 1) ? m_container.OpcodeSize % 0x4000 : 0x4000 };
			u32* gamePointer{ reinterpret_cast<u32*>(*reinterpret_cast<u32*>(program->Statics + (i * 4))) };
			mcpy(gamePointer, bytes, size);
		}
		for (u32 i{}; i != correctedStringHeapSize; ++i) {
			pair<u32, u32*> pair{ m_container.StringHeaps[i] };
			u32 pointer{ pair.first };
			u32* bytes{ pair.second };
			u32 size{ i == (correctedStringHeapSize - 1) ? m_container.StringHeapSize % 0x4000 : 0x4000 };
			u32* gamePointer{ reinterpret_cast<u32*>(*reinterpret_cast<u32*>(program->StringHeaps + (i * 4))) };
			mcpy(gamePointer, bytes, size);
		}
		program->Statics = (rage::scrValue*)m_container.Statics;
		return true;
	}
	bool& csc::running() {
		return m_running;
	}

	void cscManager::setActiveCsc(ccp name) {
		m_lastId = m_id;
		m_csc = new csc(name, m_replacementCsc, true);
		m_csc->create();
		m_id = NULL;
	}
	bool cscManager::load(s32 stackSize) {
		terminate(m_lastId, m_replacementCsc);
		m_id = getIdForScript(m_replacementCsc, stackSize);
		if (SCRIPT::HAS_SCRIPT_LOADED(m_replacementCsc)) {
			return m_csc->replace();
		}
		else {
			SCRIPT::REQUEST_SCRIPT(m_replacementCsc);
		}
		return false;
	}
	void cscManager::unload() {
		terminate(m_id, m_replacementCsc);
		delete m_csc;
	}
}