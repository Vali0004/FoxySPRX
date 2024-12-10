#include "hooking/hooking.h"

void hooks::areOnlinePoliciesUpToDate(rage::scrNativeCallContext* ctx) {
	ctx->Return->Int = 1;
}