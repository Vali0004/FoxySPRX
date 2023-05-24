#pragma once
#include "include.h"
#include "hooking/method/detour/detour.h"
#include "hooking/method/native/native.h"
#include "rage/scr_native_call_context.h"

struct hooks {
	static void networkIsSignedOnline(rage::scrNativeCallContext* ctx);
};

class hooking {
	friend hooks;
public:
	hooking();
	~hooking();
public:
	void enable();
	void disable();
public:
	nativeHook m_networkIsSignedOnline{};
};
extern hooking* g_hooking;