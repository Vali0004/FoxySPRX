#pragma once
#include "include.h"

extern sys_prx_id_t GetModuleHandle(ccp moduleName);
extern sys_prx_module_info_t GetModuleInfo(sys_prx_id_t handle);
extern ccp GetModuleFilePath(ccp moduleName);
extern ccp RemoveBaseNameFromPath(ccp filePath);
extern ccp GetFileName(ccp path);
extern ccp GetCurrentDir();