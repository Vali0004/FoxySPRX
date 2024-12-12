#include "syscalls.h"
#include <cell/fs/cell_fs_file_api.h>

s32 sys_map_path(char** paths, char** new_paths, s32 num)
{
    system_call_4(SC_COBRA_SYSCALL8, SYSCALL8_OPCODE_MAP_PATHS, (u64)(u32)paths, (u64)(u32)new_paths, (u64)num);
    return_to_user_prog(s32);
}

s32 cobra_load_vsh_plugin(u32 slot, char* path, void* arg, u32 arg_size)
{
    system_call_5(SC_COBRA_SYSCALL8, SYSCALL8_OPCODE_LOAD_VSH_PLUGIN, (u64)slot, (u64)(u32)path, (u64)arg, arg_size);
    return_to_user_prog(s32);
}

s32 cobra_unload_vsh_plugin(u32 slot)
{
    system_call_2(SC_COBRA_SYSCALL8, SYSCALL8_OPCODE_UNLOAD_VSH_PLUGIN, slot);
    return_to_user_prog(s32);
}

s32 ps3mapi_get_core_version()
{
    system_call_2(SC_COBRA_SYSCALL8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_GET_CORE_VERSION);
    return_to_user_prog(s32);
}

s32 ps3mapi_get_core_minversion()
{
    system_call_2(SC_COBRA_SYSCALL8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_GET_CORE_MINVERSION);
    return_to_user_prog(s32);
}

s32 ps3mapi_get_fw_type(char* fw)
{
    system_call_3(SC_COBRA_SYSCALL8, (u64)SYSCALL8_OPCODE_PS3MAPI, (u64)PS3MAPI_OPCODE_GET_FW_TYPE, (u64)((u32)fw));
    return_to_user_prog(s32);
}

s32 ps3mapi_get_fw_version()
{
    system_call_2(SC_COBRA_SYSCALL8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_GET_FW_VERSION);
    return_to_user_prog(s32);
}

s32 ps3mapi_get_all_process_modules_prx_id(sys_pid_t pid, sys_prx_id_t* prx_id_list)
{
    system_call_4(SC_COBRA_SYSCALL8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_GET_ALL_PROC_MODULE_PID, (u64)pid, (u64)prx_id_list);
    return_to_user_prog(s32);
}

s32 ps3mapi_get_process_module_name_by_prx_id(sys_pid_t pid, sys_prx_id_t prx_id, char* name)
{
    system_call_5(SC_COBRA_SYSCALL8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_GET_PROC_MODULE_NAME, (u64)pid, (u64)prx_id, (u64)name);
    return_to_user_prog(s32);
}

s32 ps3mapi_get_process_module_filename_by_prx_id(sys_pid_t pid, sys_prx_id_t prx_id, char* filename)
{
    system_call_5(SC_COBRA_SYSCALL8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_GET_PROC_MODULE_FILENAME, (u64)pid, (u64)prx_id, (u64)filename);
    return_to_user_prog(s32);
}

s32 ps3mapi_load_process_modules(sys_pid_t pid, char* path, void* arg, u32 arg_size)
{
    system_call_6(SC_COBRA_SYSCALL8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_LOAD_PROC_MODULE, (u64)pid, (u64)((u32)path), (u64)((u32)arg), (u64)arg_size);
    return_to_user_prog(s32);
}

s32 ps3mapi_unload_process_modules(sys_pid_t pid, sys_prx_id_t prx_id)
{
    system_call_4(SC_COBRA_SYSCALL8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_UNLOAD_PROC_MODULE, (u64)pid, (u64)prx_id);
    return_to_user_prog(s32);
}

s32 ps3mapi_unload_vsh_plugin(char* name)
{
    system_call_3(SC_COBRA_SYSCALL8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_UNLOAD_VSH_PLUGIN, (u64)((u32)name));
    return_to_user_prog(s32);
}

s32 ps3mapi_get_vsh_plugin_info(u32 slot, char* name, char* filename)
{
    system_call_5(SC_COBRA_SYSCALL8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_GET_VSH_PLUGIN_INFO, (u64)slot, (u64)((u32)name), (u64)((u32)filename));
    return_to_user_prog(s32);
}

s32 ps3mapi_load_kernel_plugin(u8* payload, s32 size)
{
    system_call_3(SC_COBRA_SYSCALL8, SYSCALL8_OPCODE_RUN_PAYLOAD, (u64)payload, size);
    return_to_user_prog(u32);
}

s32 ps3mapi_load_dynamic_kernel_plugin(u8* payload, s32 size, u64* residence)
{
    system_call_4(SC_COBRA_SYSCALL8, SYSCALL8_OPCODE_RUN_PAYLOAD_DYNAMIC, (u64)payload, size, (u64)residence);
    return_to_user_prog(u32);
}

s32 ps3mapi_unload_dynamic_kernel_plugin(u64 residence)
{
    system_call_2(SC_COBRA_SYSCALL8, SYSCALL8_OPCODE_UNLOAD_PAYLOAD_DYNAMIC, residence);
    return_to_user_prog(u32);
}

s32 ps3mapi_get_is_hen()
{
    system_call_1(SC_COBRA_SYSCALL8, SYSCALL8_OPCODE_IS_HEN);
    return_to_user_prog(s32);
}

s32 ps3mapi_get_hen_rev()
{
    system_call_1(SC_COBRA_SYSCALL8, SYSCALL8_OPCODE_HEN_REV);
    return_to_user_prog(s32);
}

s32 ps3mapi_poke_hen(u64 address, u64 value)
{
    system_call_3(SC_COBRA_SYSCALL8, SYSCALL8_OPCODE_POKE_LV2, address, value);
    return_to_user_prog(s32);
}

s32 ps3mapi_process_page_allocate(sys_pid_t pid, u64 size, u64 page_size, u64 flags, u64 is_executable, u64* page_address)
{
    system_call_8(SC_COBRA_SYSCALL8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_PROC_PAGE_ALLOCATE, (u64)pid, (u64)size, (u64)page_size, (u64)flags, (u64)is_executable, (u64)page_address);
    return_to_user_prog(s32);
}

s32 ps3mapi_get_process_module_segments(sys_pid_t pid, sys_prx_id_t prx_id, sys_prx_module_info_t* info)
{
    system_call_5(SC_COBRA_SYSCALL8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_GET_PROC_MODULE_SEGMENTS, (u64)pid, (u64)prx_id, (u64)info);
    return_to_user_prog(s32);
}

s32 ps3mapi_create_process_thread(sys_pid_t pid, thread_t* thread, void* entry, u64 arg, s32 prio, u64 stacksize, const char* threadname)
{
    system_call_8(SC_COBRA_SYSCALL8, SYSCALL8_OPCODE_PROC_CREATE_THREAD, (u64)pid, (u64)thread, (u64)entry, (u64)arg, (u64)prio, (u64)stacksize, (u64)threadname);
    return_to_user_prog(s32);
}

s32 ps3mapi_get_all_processes_pid(u32* pid_list)
{
    system_call_3(SC_COBRA_SYSCALL8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_GET_ALL_PROC_PID, (u64)((u32)pid_list));
    return_to_user_prog(s32);
}

s32 ps3mapi_get_process_name_by_pid(u32 pid, char* pid_name)
{
    system_call_4(SC_COBRA_SYSCALL8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_GET_PROC_NAME_BY_PID, (u64)((u32)pid), (u64)((u32)pid_name));
    return_to_user_prog(s32);
}

s32 ps3mapi_get_process_by_pid(u32 pid, process_t process)
{
    system_call_4(SC_COBRA_SYSCALL8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_GET_PROC_BY_PID, (u64)pid, (u64)((u32)process));
    return_to_user_prog(s32);
}

s32 ps3mapi_get_current_process_critical(process_t process)
{
    system_call_3(SC_COBRA_SYSCALL8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_GET_CURRENT_PROC_CRIT, (u64)((u32)process));
    return_to_user_prog(s32);
}

s32 ps3mapi_get_current_process(process_t process)
{
    system_call_3(SC_COBRA_SYSCALL8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_GET_CURRENT_PROC, (u64)((u32)process));
    return_to_user_prog(s32);
}

s32 ps3mapi_check_syscall(s32 num)
{
    system_call_3(SC_COBRA_SYSCALL8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_CHECK_SYSCALL, (u64)num);
    return_to_user_prog(s32);
}

s32 ps3mapi_disable_syscall(s32 num)
{
    system_call_3(SC_COBRA_SYSCALL8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_DISABLE_SYSCALL, (u64)num);
    return_to_user_prog(s32);
}

s32 ps3mapi_pdisable_syscall8(s32 mode)
{
    system_call_3(SC_COBRA_SYSCALL8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_PDISABLE_SYSCALL8, (u64)mode);
    return_to_user_prog(s32);
}

s32 ps3mapi_pcheck_syscall8()
{
    system_call_2(SC_COBRA_SYSCALL8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_PCHECK_SYSCALL8);
    return_to_user_prog(s32);
}

s32 ps3mapi_get_idps(u64* idps)
{
    system_call_3(SC_COBRA_SYSCALL8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_GET_IDPS, (u64)((u32)idps));
    return_to_user_prog(s32);
}

s32 ps3mapi_set_idps(u64 part1, u64 part2)
{
    system_call_4(SC_COBRA_SYSCALL8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_SET_IDPS, (u64)part1, (u64)part2);
    return_to_user_prog(s32);
}

s32 ps3mapi_get_psid(u64* psid)
{
    system_call_3(SC_COBRA_SYSCALL8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_GET_PSID, (u64)((u32)psid));
    return_to_user_prog(s32);
}

s32 ps3mapi_set_psid(u64 part1, u64 part2)
{
    system_call_4(SC_COBRA_SYSCALL8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_SET_PSID, (u64)part1, (u64)part2);
    return_to_user_prog(s32);
}

s32 ps3mapi_remove_hook(void)
{
    system_call_2(SC_COBRA_SYSCALL8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_REMOVE_HOOK);
    return_to_user_prog(s32);
}

s32 ps3mapi_enable_access_syscall8(u64 key)
{
    system_call_3(SC_COBRA_SYSCALL8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_REQUEST_ACCESS, key);
    return_to_user_prog(s32);
}

s32 ps3mapi_disable_access_syscall8(u64 key)
{
    system_call_3(SC_COBRA_SYSCALL8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_SET_ACCESS_KEY, key);
    return_to_user_prog(s32);
}

s32 sys_get_mamba()
{
    system_call_1(SC_COBRA_SYSCALL8, SYSCALL8_OPCODE_GET_MAMBA);
    return_to_user_prog(s32);
}

s32 sys_get_version(u32* version)
{
    system_call_2(8, SYSCALL8_OPCODE_GET_VERSION, (u64)(u32)version);
    return_to_user_prog(s32);
}

s32 sys_get_version2(u16* version)
{
    system_call_2(8, SYSCALL8_OPCODE_GET_VERSION2, (u64)(u32)version);
    return_to_user_prog(s32);
}

u64 ps3mapi_lv1_peek(u64 addr)
{
    system_call_3(SC_COBRA_SYSCALL8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_LV1_PEEK, (u64)addr);
    return_to_user_prog(u64);
}

u64 ps3mapi_lv1_poke(u64 addr, u64 value)
{
    system_call_4(SC_COBRA_SYSCALL8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_LV1_POKE, (u64)addr, (u64)value);
    return_to_user_prog(u64);
}

u64 ps3mapi_lv2_peek(u64 addr)
{
    system_call_3(SC_COBRA_SYSCALL8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_LV2_PEEK, (u64)addr);
    return_to_user_prog(u64);
}

u64 ps3mapi_lv2_poke(u64 addr, u64 value)
{
    system_call_4(SC_COBRA_SYSCALL8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_LV2_POKE, (u64)addr, (u64)value);
    return_to_user_prog(u64);
}

s32 PS3MAPIGetMemory(sys_pid_t pid, void* destination, void* source, u32 size)
{
    system_call_6(SC_COBRA_SYSCALL8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_GET_PROC_MEM, (u64)pid, (u64)destination, (u64)source, size);
    return_to_user_prog(s32);
}

s32 PS3MAPISetMemory(sys_pid_t pid, void* destination, const void* source, u32 size)
{
    system_call_6(SC_COBRA_SYSCALL8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_SET_PROC_MEM, (u64)pid, (u64)destination, (u64)source, (u64)size);
    return_to_user_prog(s32);
}

u64 PeekLv1(u64 addr)
{
    system_call_1(8, (u64)addr);
    return_to_user_prog(u64);
}

void PokeLv1(u64 addr, u64 value)
{
    system_call_2(9, (u64)addr, (u64)value);
}

u64 PeekLv2(u64 address)
{
    system_call_1(6, (u64)address);
    return_to_user_prog(u64);
}

void PokeLv2(u64 addr, u64 val)
{
    system_call_2(7, (u64)addr, (u64)val);
}

bool PeekChunkLV1(u64 start, u64* buffer, u64 size)
{
    if (PeekLv1(start) == 0xFFFFFFFF80010003)
        return false;

    for (u64 offset = 0; offset < size; offset += 8)
        *(buffer++) = PeekLv1(start + offset);

    return true;
}

bool PeekChunkLV2(u64 start, u64* buffer, u64 size)
{
    if (PeekLv2(start) == 0xFFFFFFFF80010003)
        return false;

    for (u64 offset = 0; offset < size; offset += 8)
        *(buffer++) = PeekLv2(start + offset);

    return true;
}

u64 lv2_lv1_call(u64 syscallnum, u64 arg1, u64 arg2, u64 arg3, u64 arg4, u64 arg5, u64 arg6, u64 arg7)
{
    system_call_8(10, (u64)arg1, (u64)arg2, (u64)arg3, (u64)arg4, (u64)arg5, (u64)arg6, (u64)arg7, (u64)syscallnum);
    return_to_user_prog(u64);
}

u64 lv2_func_call(u64 addr, u64 arg1, u64 arg2, u64 arg3, u64 arg4, u64 arg5, u64 arg6, u64 arg7)
{
    system_call_8(15, (u64)arg1, (u64)arg2, (u64)arg3, (u64)arg4, (u64)arg5, (u64)arg6, (u64)arg7, (u64)addr);
    return_to_user_prog(u64);
}

s32 sys_dbg_read_process_memory(sys_pid_t pid, void* destination, void* source, u32 size)
{
    system_call_4(904, (u64)pid, (u64)destination, size, (u64)source);
    return_to_user_prog(s32);
}

s32 sys_dbg_write_process_memory(sys_pid_t pid, void* destination, const void* source, u32 size)
{
    system_call_4(905, (u64)pid, (u64)destination, size, (u64)source);
    return_to_user_prog(s32);
}

s32 sys_storage_get_device_info(u64 device, device_info_t* device_info)
{
    system_call_2(SYS_STORAGE_GET_DEVICE_INFO, device, (u64)device_info);
    return_to_user_prog(s32);
}

s32 sys_storage_open(u64 id, s32* fd)
{
    system_call_4(SC_STORAGE_OPEN, id, 0, (u64)fd, 0);
    return_to_user_prog(s32);
}

s32 sys_storage_close(s32 fd)
{
    system_call_1(SC_STORAGE_CLOSE, fd);
    return_to_user_prog(s32);
}

s32 sys_storage_read(s32 fd, u32 start_sector, u32 sectors, u8* bounce_buf, u32* sectors_read)
{
    system_call_7(SYS_STORAGE_READ, fd, 0, start_sector, sectors, (u64)bounce_buf, (u64)sectors_read, 0);
    return_to_user_prog(s32);
}

s32 sys_storage_read_with_flags(s32 fd, u32 start_sector, u32 sectors, u8* bounce_buf, u32* sectors_read, u32 flags)
{
    system_call_7(SYS_STORAGE_READ, fd, 0, start_sector, sectors, (u64)bounce_buf, (u64)sectors_read, flags);
    return_to_user_prog(s32);
}

s32 sys_storage_write(s32 fd, u64 start_sector, u64 sectors, u8* buf, u32* sectors_written, u64 flags)
{
    system_call_7(SYS_STORAGE_WRITE, fd, 0, start_sector, sectors, (u64)buf, (u64)sectors_written, flags);
    return_to_user_prog(s32);
}

s32 sys_storage_get_cache_of_flash_ext_flag(u8* flag)
{
    system_call_1(874, (u64)flag);
    return_to_user_prog(s32);
}

bool is_nor()
{
    u8 vf_flag;
    sys_storage_get_cache_of_flash_ext_flag(&vf_flag);
    return !(vf_flag & 0x1);
}

s32 lv2_get_platform_info(platform_info_t* info)
{
    system_call_1(387, (u64)info);
    return_to_user_prog(s32);
}

s32 get_target_type(u64* type) // 1-CEX, 2-DEX, 3-DECR/RefTool
{
    system_call_3(985, (u64)type, 0, 0);
    return_to_user_prog(s32);
}

bool IsConsoleCex()
{
    u64 type;
    get_target_type(&type);
    return type == 1;
}

bool IsConsoleDex()
{
    u64 type;
    get_target_type(&type);
    return type == 2;
}

bool IsConsoleDeh()
{
    u64 type;
    get_target_type(&type);
    return type == 3;
}

bool IsConsoleHen()
{
    return ps3mapi_get_is_hen() == 0x1337;
}

bool IsConsoleMamba()
{
    return sys_get_mamba() == 0x666;
}

bool IsConsoleCobra()
{
    u32 version = 0x99999999;
    if (sys_get_version(&version) < 0)
        return false;

    if (version != 0x99999999) // If value changed, it is cobra
        return true;

    return false;
}

u16 GetPayloadVersion()
{
    u16 payloadVersion = 0;
    if (IsConsoleHen())
        payloadVersion = ps3mapi_get_hen_rev();
    else
        sys_get_version2(&payloadVersion);

    return payloadVersion;
}

bool DoesConsoleHaveCCAPI()
{
    CellFsStat sb;
    return (cellFsStat("/dev_flash/sys/s32ernal/sys_plugin.sprx", &sb) == CELL_FS_SUCCEEDED);
}

bool DoesConsoleHaveWebman()
{
    CellFsStat sb;
    if (cellFsStat("/dev_hdd0/plugins/webftp_server.sprx", &sb) == CELL_FS_SUCCEEDED
        || cellFsStat("/dev_hdd0/plugins/webftp_server_noncobra.sprx", &sb) == CELL_FS_SUCCEEDED
        || cellFsStat("/dev_hdd0/plugins/webftp_server_cobra_ps3mapi.sprx", &sb) == CELL_FS_SUCCEEDED)
        return true;

    return false;
}

s32 update_mgr_write_eprom(u64 flag_offset, u64 value)
{
    system_call_7(SC_UPDATE_MANAGER_IF, UPDATE_MGR_PACKET_ID_WRITE_EPROM, flag_offset, value, 0, 0, 0, 0);
    return_to_user_prog(s32);
}

s32 update_mgr_read_eprom(u64* flag_offset, u64 value)
{
    system_call_7(SC_UPDATE_MANAGER_IF, UPDATE_MGR_PACKET_ID_READ_EPROM, (u64)flag_offset, value, 0, 0, 0, 0);
    return_to_user_prog(s32);
}

s32 set_recovery_mode()
{
    return update_mgr_write_eprom(RECOVER_MODE_FLAG_OFFSET, 0x00);
}

s32 sys_net_eurus_etherAddr(u8* etherAddr)
{
    system_call_3(SYS_NET_EURUS_POST_COMMAND, CMD_GET_MAC_ADDRESS, (u64)(u32)etherAddr, 0x13);
    return_to_user_prog(s32);
}

s32 sys_ss_appliance_info_manager(u32 packet_id, u8* out)
{
    system_call_8(SC_APPLIANCE_INFO_MANAGER, packet_id, (u64)out, 0, 0, 0, 0, 0, 0);
    return_to_user_prog(s32);
}

void get_idps_info_manager()
{
    u8 idps[16];
    sys_ss_appliance_info_manager(PACKET_ID_GET_DEVICE_ID, idps);
    // 0x00 0x00 0x00 0x01 0x00 0x89 0x00 0x0B 0x14 0x00 0xEF 0xDD 0xCA 0x25 0x52 0x66
}

s32 GetGameID(char titleId[])
{
    system_call_1(986, (u64)titleId);
    return_to_user_prog(s32);
}

s32 ps3_led(u64 color, u64 mode)
{
    system_call_2(386, (u64)color, (u64)mode);
    return_to_user_prog(s32);
}

s32 ring_buzzer_simple(void)
{
    system_call_3(SC_RING_BUZZER, 0x1004, 0x4, 0x6);
    return_to_user_prog(s32);
}

s32 ring_buzzer_double(void)
{
    system_call_3(SC_RING_BUZZER, 0x1004, 0x7, 0x36);
    return_to_user_prog(s32);
}

s32 ring_buzzer_triple(void)
{
    system_call_3(SC_RING_BUZZER, 0x1004, 0xa, 0x1b6);
    return_to_user_prog(s32);
}

CellFsErrno sys_fs_chmod(const char* path, CellFsMode mode)
{
    system_call_2(834, (u64)path, (u64)mode);
    return_to_user_prog(CellFsErrno);
}

s32 sys_fs_chown(const char* path, s32 uid, s32 gid)
{
    system_call_3(835, (u64)path, (u64)(u32)uid, (u64)(u32)gid);
    return_to_user_prog(s32);
}

s32 sys_fs_mount(const char* device_path, const char* device_name, const char* file_system)
{
    system_call_8(837, (u64)device_name, (u64)file_system, (u64)device_path, 0, 0, 0, 0, 0);
    return_to_user_prog(s32);
}

s32 sys_fs_unmount(const char* device_path)
{
    system_call_3(838, (u64)device_path, 0, 1);
    return_to_user_prog(s32);
}

void del_turnoff(u8 beeps)
{
    cellFsUnlink("/dev_hdd0/tmp/turnoff");  // to avoid bad shutdown

    if (beeps == 1) { ring_buzzer_simple(); }
    if (beeps == 2) { ring_buzzer_double(); }
}

s32 ps3_shutdown(void)
{
    del_turnoff(1);
    system_call_4(SC_SYS_POWER, SYS_SHUTDOWN, 0, 0, 0);
    return_to_user_prog(s32);
}

s32 ps3_hard_restart(void)
{
    del_turnoff(2);
    system_call_3(SC_SYS_POWER, SYS_HARD_REBOOT, NULL, 0);  // hard reboot
    return_to_user_prog(s32);
}

s32 ps3_quick_restart(void)
{
    del_turnoff(2);
    system_call_3(SC_SYS_POWER, SYS_REBOOT, NULL, 0);  //Load LPAR id 1
    return_to_user_prog(s32);
}

s32 ps3_soft_restart(void)
{
    del_turnoff(2);
    system_call_3(SC_SYS_POWER, SYS_SOFT_REBOOT, NULL, 0);
    return_to_user_prog(s32);
}

void ps3_exit_xmb()
{
    sys_fs_unmount("/dev_flash");
}

void enable_dev_blind()
{
    sys_fs_mount("/dev_blind", "CELL_FS_IOS:BUILTIN_FLSH1", "CELL_FS_FAT");
}

void disable_dev_blind()
{
    sys_fs_unmount("/dev_blind");
}

s32 sys_dbg_get_thread_list(sys_pid_t pid, sys_ppu_thread_t* ids, u64* ids_num, u64* all_ids_num)
{
    system_call_4(909, (u64)pid, (u64)ids, (u64)ids_num, (u64)all_ids_num);
    return_to_user_prog(s32);
}

s32 sys_game_get_temperature(u32 _dev, u32* temperature)
{
    system_call_2(383, (u64)_dev, (u64)((u32)temperature));
    return_to_user_prog(s32);
}

s32 get_temperature_celcius(u32& cpu_temp, u32& rsx_temp)
{
    s32 ret = sys_game_get_temperature(0, &cpu_temp);
    sys_game_get_temperature(1, &rsx_temp);
    cpu_temp = cpu_temp >> 24;
    rsx_temp = rsx_temp >> 24;
    return ret;
}

s32 sys_sm_set_fan_policy(u8 arg0, u8 arg1, u8 arg2)
{
    system_call_3(SC_SET_FAN_POLICY, (u64)arg0, (u64)arg1, (u64)arg2);
    return_to_user_prog(s32);
}

s32 sys_sm_get_fan_policy(u8 id, u8* st, u8* mode, u8* speed, u8* unknown)
{
    system_call_5(SC_GET_FAN_POLICY, (u64)id, (u64)(u32)st, (u64)(u32)mode, (u64)(u32)speed, (u64)(u32)unknown);
    return_to_user_prog(s32);
}

void ps3_set_recovery_mode()
{
    sys_timer_sleep(1);
    set_recovery_mode();
    ps3_hard_restart();
}

s32 _sys_prx_unload_module(sys_prx_id_t id, sys_prx_flags_t flags, const sys_prx_unload_module_option_t* pOpt)
{
    system_call_3(_SYS_PRX_UNLOAD_MODULE, (u64)id, (u64)flags, (u64)pOpt);
    return_to_user_prog(s32);
}

s32 _sys_prx_stop_module(sys_prx_id_t id, u64 args, void* argp, s32* modres, sys_prx_flags_t flags, sys_prx_stop_module_option_t* pOpt)
{
    system_call_6(_SYS_PRX_STOP_MODULE, (u64)id, (u64)args, (u64)argp, (u64)modres, (u64)flags, (u64)pOpt);
    return_to_user_prog(s32);
}

sys_prx_id_t _sys_prx_get_module_id_by_name(const char* name, sys_prx_flags_t flags, sys_prx_get_module_id_by_name_option_t* pOpt)
{
    system_call_3(_SYS_PRX_GET_MODULE_ID_BY_NAME, (u64)name, (u64)flags, (u64)pOpt);
    return_to_user_prog(sys_prx_id_t);
}

sys_prx_id_t _sys_prx_get_module_id_by_address(void* addr)
{
    system_call_1(_SYS_PRX_GET_MODULE_ID_BY_ADDRESS, (u64)addr);
    return_to_user_prog(sys_prx_id_t);
}

sys_prx_id_t _sys_prx_get_my_module_id()
{
    return _sys_prx_get_module_id_by_address((void*)_sys_prx_get_my_module_id);
}

void _sys_ppu_thread_exit(u64 val)
{
    system_call_1(SC_PPU_THREAD_EXIT, val);
}