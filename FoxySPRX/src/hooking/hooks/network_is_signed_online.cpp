#include "hooking/hooking.h"
#include "ui/script/script.h"
#include "logger/logger.h"
#include "rage/natives/natives.h"
#include <ui/manager/manager.h>

s32 frameCount{};
bool once{};
void hooks::networkIsSignedOnline(rage::scrNativeCallContext* ctx) {
	ctx->Return->Int = 1;
	if (frameCount != MISC::GET_FRAME_COUNT()) {
		frameCount = MISC::GET_FRAME_COUNT();
		if (!once) {
			script::create();
			once = true;
		}
		script::tick();
	}
}