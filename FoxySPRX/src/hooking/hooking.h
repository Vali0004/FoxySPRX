#pragma once
#include "include.h"
#include "hooking/method/detour/detour.h"
#include "hooking/method/native/native.h"
#include "common/memory/addresses.h"
#include "rage/scr_native_call_context.h"

struct hooks {
	static void networkIsSignedOnline(rage::scrNativeCallContext* ctx);
};

struct hooking {
	friend hooks;
	hooking();
	~hooking();
	void enable();
	void disable();
	nativeHook m_networkIsSignedOnline{};
};
extern hooking* g_hooking;