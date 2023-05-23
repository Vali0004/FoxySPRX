#include "filesystem.h"
#include <sys/prx.h>

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
ccp GetModuleFilePath(ccp moduleName) {
    sys_prx_id_t moduleHandle{ GetModuleHandle(moduleName) };
    return GetModuleInfo(moduleHandle).filename;
}
ccp RemoveBaseNameFromPath(ccp filePath) {
    s32 lastpath{ find_last_of(filePath, '/') };
    if (lastpath == -1) {
        return filePath;
    }
    return substr(filePath, 0, lastpath);
}
ccp GetFileName(ccp path) {
    s32 lastslash{ find_last_of(path, '/') };
    if (lastslash == -1) {
        return path;
    }
    return substr(path, lastslash + 1, lenstr(path));
}
ccp GetCurrentDir() {
    static ccp cachedModulePath{};
    if (cachedModulePath) {
        buf_t path{ (buf_t)RemoveBaseNameFromPath(GetModuleFilePath(NULL)) };
        strncat(path, "/", lenstr(path));
        cachedModulePath = path;
    }
    return cachedModulePath;
}