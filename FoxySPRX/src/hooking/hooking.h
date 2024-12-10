#pragma once
#include "include.h"
#include "hooking/method/detour/detour.h"
#include "hooking/method/native/native.h"
#include "rage/natives/natives.h"
#include "rage/scr_native_call_context.h"
#define CALL(hk, ...) g_hooking->m_##hk##.getOg<pointers::types::##hk##>()(__VA_ARGS__)
#define CALL_DECL(hk, ...) g_hooking->m_##hk##.getOg<decltype(&##hk)>()(__VA_ARGS__)
#define RET_CALL(hk, ...) return CALL(hk, __VA_ARGS__);
#define RET_CALL_DECL(hk, ...) return CALL_DECL(hk, __VA_ARGS__);

struct hooks {
	static u32 handleCloneSync(u64* _This, u64* sender, u64* receiver, u16 syncType, u32 objectId, u64 syncData, u32 sequenceId, s32 timestamp);
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
	detour m_handleCloneSync{};
	nativeHook m_networkIsSignedOnline{};
};
extern hooking* g_hooking;