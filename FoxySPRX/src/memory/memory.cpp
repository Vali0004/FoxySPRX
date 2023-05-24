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
sys_prx_id_t GetModuleHandle(ccp moduleName) {
    if (moduleName)
        return sys_prx_get_module_id_by_name(moduleName, 0, nullptr);
    return sys_prx_get_my_module_id();
}
sys_prx_module_info_t GetModuleInfo(sys_prx_id_t handle) {
    sys_prx_module_info_t info{};
    static sys_prx_segment_info_t segments[10]{};
    static char filename[SYS_PRX_MODULE_FILENAME_SIZE]{};
    info.size = sizeof(info);
    info.segments = segments;
    info.segments_num = sizeof(segments) / sizeof(sys_prx_segment_info_t);
    info.filename = filename;
    info.filename_size = sizeof(filename);
    sys_prx_get_module_info(handle, 0, &info);
    return info;
}