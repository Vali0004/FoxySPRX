#include "hooking/hooking.h"

void hooks::networkHaveCommunicationPrivileges(rage::scrNativeCallContext* ctx) {
	if (ctx->Args[2].Int == PLAYER::PLAYER_ID()) {
		ctx->Return->Int = 1;
	}
}