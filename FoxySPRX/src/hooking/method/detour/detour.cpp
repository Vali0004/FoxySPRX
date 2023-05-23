#include "detour.h"
#include "memory/memory.h"
#include "filesystem/filesystem.h"

uint8_t detour::m_trampoline[TRAMPOLINE_PAGE_SIZE]{};
size_t detour::m_trampolineSize{};

detour::detour(uint64_t address, uint64_t callback) {
	createHook(address, callback);
}
detour::~detour() {
	removeHook();
}

void detour::createHook(uint64_t address, uint64_t callback, uint64_t tocOverride) {
    m_functionAddress = reinterpret_cast<void*>(address);
    m_targetAddress = reinterpret_cast<void*>(*(uint64_t*)callback);
    //Get the size of the hook without hooking
    size_t size{ getHookSize(m_targetAddress, false, false) };
    //Store the orginial instructions and size
    WriteProcessMemory(sys_process_getpid(), m_instructions, m_functionAddress, size);
    m_instructionBufferSize = size;
    //Create trampoline and copy instructions
    m_trampolineAddress = &m_trampoline[m_trampolineSize];
    for (size_t i{}; i != (size / sizeof(uint32_t)); i++) {
        uint32_t* insAddr = reinterpret_cast<uint32_t*>((uint32_t)m_functionAddress + (i * sizeof(uint32_t)));
        m_trampolineSize += relocateCode((uint32_t*)&m_trampoline[m_trampolineSize], insAddr);
    }
    //Trampoline branches back to the original function after the branch we hooked
    void* afterBranchAddr = reinterpret_cast<void*>((uint32_t)m_functionAddress + size);
    m_trampolineSize += jump(&m_trampoline[m_trampolineSize], afterBranchAddr, false, true);
    //Finally, we write the branch to the function we wish to hook
    jump(m_functionAddress, m_targetAddress, false, false);
    m_trampolineOpd[0] = reinterpret_cast<uint32_t>(m_trampolineAddress);
    m_trampolineOpd[1] = tocOverride  ? tocOverride : GetCurrentToc();
}
bool detour::removeHook() {
    if (m_functionAddress && m_instructionBufferSize) {
        WriteProcessMemory(sys_process_getpid(), m_functionAddress, m_instructions, m_instructionBufferSize);
        m_instructionBufferSize = NULL;
        m_functionAddress = nullptr;
        return true;
    }
    return false;
}

size_t detour::jump(void* destination, const void* branchTarget, bool linked, bool preserveRegister) {
    return jumpWithOptions(destination, branchTarget, linked, preserveRegister, POWERPC_BRANCH_OPTIONS_ALWAYS, 0, POWERPC_REGISTERINDEX_R0);
}
size_t detour::jumpWithOptions(void* destination, const void* branchTarget, bool linked, bool preserveRegister, uint32_t branchOptions, uint8_t conditionRegisterBit, uint8_t registerIndex) {
    uint32_t branchFarAsm[]{
        POWERPC_LIS(registerIndex, POWERPC_HI((uint32_t)branchTarget)),                     // lis   %rX, branchTarget@hi
        POWERPC_ORI(registerIndex, registerIndex, POWERPC_LO((uint32_t)branchTarget)),      // ori   %rX, %rX, branchTarget@lo
        POWERPC_MTCTR(registerIndex),                                                       // mtctr %rX
        POWERPC_BCCTR(branchOptions, conditionRegisterBit, linked)                          // bcctr (bcctr 20, 0 == bctr)
    };
    uint32_t branchFarAsmPreserve[]{
        POWERPC_STD(registerIndex, -0x30, POWERPC_REGISTERINDEX_R1),                        // std   %rX, -0x30(%r1)
        POWERPC_LIS(registerIndex, POWERPC_HI((uint32_t)branchTarget)),                     // lis   %rX, branchTarget@hi
        POWERPC_ORI(registerIndex, registerIndex, POWERPC_LO((uint32_t)branchTarget)),      // ori   %rX, %rX, branchTarget@lo
        POWERPC_MTCTR(registerIndex),                                                       // mtctr %rX
        POWERPC_LD(registerIndex, -0x30, POWERPC_REGISTERINDEX_R1),                         // ld    %rX, -0x30(%r1)
        POWERPC_BCCTR(branchOptions, conditionRegisterBit, linked)                          // bcctr (bcctr 20, 0 == bctr)
    };
    uint32_t* assembly{ preserveRegister ? branchFarAsmPreserve : branchFarAsm };
    size_t size{ preserveRegister ? sizeof(branchFarAsmPreserve) : sizeof(branchFarAsm) };
    if (destination) {
        WriteProcessMemory(sys_process_getpid(), destination, assembly, size);
    }
    return size;
}

size_t detour::relocateBranch(uint32_t* destination, uint32_t* source) {
    uint32_t ins{ *source };
    uint32_t insAddr{ (uint32_t)source };
    int32_t branchOffsetBitSize{};
    int32_t branchOffsetBitBase{};
    uint32_t branchOptions{};
    uint8_t conditionRegisterBit{};
    //Absolute branches dont need to be handled
    if (ins & POWERPC_BRANCH_ABSOLUTE) {
        WriteProcessMemory(sys_process_getpid(), destination, &ins, sizeof(ins));
        return sizeof(ins);
    }
    switch (ins & POWERPC_OPCODE_MASK) {
    case POWERPC_OPCODE_B:
        branchOffsetBitSize = 24;
        branchOffsetBitBase = 2;
        branchOptions = POWERPC_BRANCH_OPTIONS_ALWAYS;
        conditionRegisterBit = 0;
        break;
    case POWERPC_OPCODE_BC:
        branchOffsetBitSize = 14;
        branchOffsetBitBase = 2;
        branchOptions = (ins >> POWERPC_BIT32(10)) & MASK_N_BITS(5);
        conditionRegisterBit = (ins >> POWERPC_BIT32(15)) & MASK_N_BITS(5);
        break;
    }
    // Even though the address part of the instruction begins from bit 29 in the case of bc and b.
    // The value of the first bit is 4 as all addresses are aligned to for 4 for code therefore,
    // the branch offset can be caluclated by anding in place and removing any suffix bits such as the 
    // link register or absolute flags
    int32_t branchOffset{ ins & (MASK_N_BITS(branchOffsetBitSize) << branchOffsetBitBase) };
    //Check if the MSB of the offset is set
    if (branchOffset >> ((branchOffsetBitSize + branchOffsetBitBase) - 1)) {
        branchOffset |= ~MASK_N_BITS(branchOffsetBitSize + branchOffsetBitBase);
    }
    void* branchAddr{ reinterpret_cast<void*>(insAddr + branchOffset) };
    return jumpWithOptions(destination, branchAddr, ins & POWERPC_BRANCH_LINKED, true, branchOptions, conditionRegisterBit, POWERPC_REGISTERINDEX_R0);
}
size_t detour::relocateCode(uint32_t* destination, uint32_t* source) {
    uint32_t ins{ *source };
    switch (ins & POWERPC_OPCODE_MASK) {
    case POWERPC_OPCODE_B:
    case POWERPC_OPCODE_BC:
        return relocateBranch(destination, source);
    default:
        WriteProcessMemory(sys_process_getpid(), destination, &ins, sizeof(ins));
        return sizeof(ins);
    }
}

size_t detour::getHookSize(const void* branchTarget, bool linked, bool preserveRegister) {
	return jumpWithOptions(nullptr, branchTarget, linked, preserveRegister, POWERPC_BRANCH_OPTIONS_ALWAYS, 0, POWERPC_REGISTERINDEX_R0);
}

bool detour::getHookInfo(uint64_t address, hookInformation& info) {
    uint32_t firstSecond[2]{};
    WriteProcessMemory(sys_process_getpid(), firstSecond, (const void*)address, sizeof(firstSecond));
    //Check if the function is already hooked
    if (((firstSecond[0] & POWERPC_OPCODE_MASK) == POWERPC_OPCODE_LIS) && ((firstSecond[1] & POWERPC_OPCODE_MASK) == POWERPC_OPCODE_ORI)) {
        //Fast check if function is hooked (safety check)
        if (!(&info.moduleInfo)) {
            return true;
        }
        WriteProcessMemory(sys_process_getpid(), info.bytes, (const void*)address, sizeof(info.bytes));
        uint16_t lowFirstInstruction{ static_cast<uint16_t>(info.bytes[0]) }; //First instruction
        uint16_t lowSecondInstruction{ static_cast<uint16_t>(info.bytes[1]) }; //Second instruction
        int32_t hookAddr{ (lowFirstInstruction << 16) | lowSecondInstruction };
        sys_prx_id_t prxId{ sys_prx_get_module_id_by_address((void*)hookAddr) };
        if (!prxId) {
            return false;
        }
        sys_prx_module_info_t prxInfo = GetModuleInfo(prxId);
        _sys_memcpy((void*)&info.moduleInfo, (const void*)&prxInfo, sizeof(prxInfo));
        return true;
    }
    return false;
}