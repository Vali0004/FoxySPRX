#include "hooking/hooking.h"

void hooks::networkAreSocialClubPoliciesCurrent(rage::scrNativeCallContext* ctx) {
	ctx->Return->Int = 1;
}