#include "hooking/hooking.h"

void hooks::scProfanityGetStringStatus(rage::scrNativeCallContext* ctx) {
	ctx->Return->Int = 0;
}