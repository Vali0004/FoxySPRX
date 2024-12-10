#include "hooking/hooking.h"

void hooks::networkIsSignedIn(rage::scrNativeCallContext* ctx) {
	ctx->Return->Int = NETWORK::NETWORK_IS_SIGNED_IN();
}