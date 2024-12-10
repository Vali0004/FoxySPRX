#pragma once
#include "include.h"
#include "src/memory/pointers/pointers.h"
#include <rage/scr_program.h>
#define VALID_ADDR(x) ((u32)(x) > 0x10000)

//1.27
/*sub_9B397C+2B0                              loc_9B3C2C:                             # CODE XREF: sub_9B397C+1C4↑j
sub_9B397C+2B0  3C 60 01 E7                             lis       r3, byte_1E6FB8C@ha
sub_9B397C+2B4  63 A4 00 00                             mr        r4, r29
sub_9B397C+2B8  30 63 FB 8C                             addic     r3, r3, byte_1E6FB8C@l
sub_9B397C+2BC  48 C8 CB 79                             bl        sub_16407B0
sub_9B397C+2C0  48 00 00 3C                             b         loc_9B3C78
sub_9B397C+2C4                              # ---------------------------------------------------------------------------*/
//3C 60 01 E7 63 A4 00 00 30 63 FB 8C 48 C8 CB 79 48 00 00 3C
//1.12
/*sub_981C2C+2B0                              loc_981EDC:                             # CODE XREF: sub_981C2C+1C4↑j
sub_981C2C+2B0  3C 60 01 DC                             lis       r3, byte_1DC7C04@ha
sub_981C2C+2B4  63 A4 00 00                             mr        r4, r29
sub_981C2C+2B8  30 63 7C 04                             addic     r3, r3, byte_1DC7C04@l
sub_981C2C+2BC  48 C2 36 59                             bl        sub_15A5540
sub_981C2C+2C0  48 00 00 3C                             b         loc_981F28
sub_981C2C+2C4                              # ---------------------------------------------------------------------------*/
//3C 60 01 DC 63 A4 00 00 30 63 7C 04 48 C2 36 59 48 00 00 3C
//3C 60 01 ? 63 A4 00 00 30 63 ? ? ? ? ? ? 48 00 00 3C

namespace script {
	extern s32 startCallback(ccp name, s32 stackSize);
	extern void terminate(s32 id, ccp name);
	extern bool running(ccp name);
	extern s32 getIdForScript(ccp name, s32 stackSize);
	extern rage::scrProgram* getScrProgram(u32 nameHash);
	extern u32 readValueFromFile(ccp file, u32 rsc7, u32 pos, bool pointer = false);
	struct cscContainer {
		u32 Magic{};
		u32 CodePointerList{};
		u32 EncryptionKey{};
		u32 OpcodeSize{};
		u32 OpcodePageList{};
		u32 StaticSize{};
		u32 NativeSize{};
		u32 Statics{};
		u32* StaticBytes{};
		u32 GlobalSize{};
		u32 ArgStructSize{};
		u32 Natives{};
		vectorr<u32> NativeOPDs{};
		u32 StringHeapSize{};
		u32 StringHeap{};
		vectorr<pair<u32, u32*>> CodePages{};
		vectorr<pair<u32, u32*>> StringHeaps{};
		bool securityHeader() {
			return Magic == 0x52534337u;
		}
		u32 getRsc() {
			return securityHeader() ? 0x10 : 0;
		}
		void correctSizes(bool flip = false) {
			if (flip) {
				OpcodeSize *= rage::scrPageSize;
				StringHeapSize *= rage::scrStringSize;
				OpcodeSize -= 1;
				StringHeapSize -= 1;
			}
			else {
				OpcodeSize /= rage::scrPageSize;
				StringHeapSize /= rage::scrStringSize;
				OpcodeSize += 1;
				StringHeapSize += 1;
			}
		}
	};
	class csc {
	public:
		csc(ccp name, ccp replacement, bool running) : m_scriptName(name), m_script(replacement), m_running(running) {}
		~csc() {}

		void create();
		bool replace();
		bool& running();
	private:
		cscContainer m_container{};
		bool m_created{};
		ccp m_scriptName{};
		ccp m_script{}; //Script to replace
		bool m_running{};
		s32 m_rsc7{};
	};
	class cscManager {
	public:
		void setActiveCsc(ccp name);
		bool load(s32 stackSize);
		void unload();
	private:
		ccp m_replacementCsc{ "fm_deathmatch_creator" };
		csc* m_csc{};
		s32 m_lastId{};
		s32 m_id{};
	};
	extern cscManager g_cscManager;
}