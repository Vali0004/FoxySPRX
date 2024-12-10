#include "hooking/hooking.h"

void hooks::forceCloudMpStatsDownloadAndOverwriteLocalSave(rage::scrNativeCallContext* ctx) {
	ctx->Return->Int = 0;
}