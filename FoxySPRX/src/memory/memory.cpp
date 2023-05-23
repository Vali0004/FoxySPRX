#include "memory.h"

u32 GetCurrentToc() {
    u32* entry_pos32{ *reinterpret_cast<u32**>(0x1001C) }; //ElfHeader->e_entry 
    return entry_pos32[1];
}
s32 WriteProcessMemory(u32 pid, void* address, const void* data, size_t size) {
    static bool useHenSyscalls{};
    if (!useHenSyscalls) {
        s32 canWrite{ sys_dbg_write_process_memory(pid, address, data, size) };
        if (canWrite == SUCCEEDED) {
            return canWrite;
        }
    }
    useHenSyscalls = true;
    return PS3MAPISetMemory(pid, address, data, size);
}
s32 ReadProcessMemory(u32 pid, void* address, void* data, size_t size) {
    static bool useHenSyscalls{};
    if (!useHenSyscalls) {
        s32 canRead = sys_dbg_read_process_memory(pid, address, data, size);
        if (canRead == SUCCEEDED) {
            return canRead;
        }
    }
    useHenSyscalls = true;
    return PS3MAPIGetMemory(pid, address, data, size);
}