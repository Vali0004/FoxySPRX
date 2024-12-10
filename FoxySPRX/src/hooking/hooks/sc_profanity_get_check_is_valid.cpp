#include "hooking/hooking.h"

void hooks::scProfanityGetCheckIsValid(rage::scrNativeCallContext* ctx) {
	ctx->Return->Int = 1;
}