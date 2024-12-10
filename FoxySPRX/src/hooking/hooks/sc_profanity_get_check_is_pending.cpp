#include "hooking/hooking.h"

void hooks::scProfanityGetCheckIsPending(rage::scrNativeCallContext* ctx) {
	ctx->Return->Int = 0;
}