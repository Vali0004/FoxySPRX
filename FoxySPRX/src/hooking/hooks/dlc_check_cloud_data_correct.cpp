#include "hooking/hooking.h"

void hooks::dlcCheckCloudDataCorrect(rage::scrNativeCallContext* ctx) {
	ctx->Return->Int = 1;
}