#include "filesystem.h"
#include "memory/memory.h"

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
    return substr(path, lastslash + 1, strlen(path));
}
ccp GetCurrentDir() {
    static ccp cachedModulePath{};
    if (cachedModulePath) {
        buf_t path{ (buf_t)RemoveBaseNameFromPath(GetModuleFilePath(NULL)) };
        strncat(path, "/", strlen(path));
        cachedModulePath = path;
    }
    return cachedModulePath;
}