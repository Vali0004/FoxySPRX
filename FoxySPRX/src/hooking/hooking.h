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
	static void getControlValue(rage::scrNativeCallContext* ctx);
	static void getControlNormal(rage::scrNativeCallContext* ctx);
	static void getDisabledControlNormal(rage::scrNativeCallContext* ctx);
	static void getDisabledControlUnboundNormal(rage::scrNativeCallContext* ctx);
	static void networkIsSignedIn(rage::scrNativeCallContext* ctx);
	static void networkAreSocialClubPoliciesCurrent(rage::scrNativeCallContext* ctx);
	static void networkHaveCommunicationPrivileges(rage::scrNativeCallContext* ctx);
	static void scProfanityGetCheckIsPending(rage::scrNativeCallContext* ctx);
	static void scProfanityGetCheckIsValid(rage::scrNativeCallContext* ctx);
	static void scProfanityGetStringStatus(rage::scrNativeCallContext* ctx);
	static void areOnlinePoliciesUpToDate(rage::scrNativeCallContext* ctx);
	static void forceCloudMpStatsDownloadAndOverwriteLocalSave(rage::scrNativeCallContext* ctx);
	static void dlcCheckCloudDataCorrect(rage::scrNativeCallContext* ctx);
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
	nativeHook m_getControlValue{};
	nativeHook m_getControlNormal{};
	nativeHook m_getDisabledControlNormal{};
	nativeHook m_getDisabledControlUnboundNormal{};
	nativeHook m_networkIsSignedIn{};
	nativeHook m_networkAreSocialClubPoliciesCurrent{};
	nativeHook m_networkHaveCommunicationPrivileges{};
	nativeHook m_scProfanityGetCheckIsPending{};
	nativeHook m_scProfanityGetCheckIsValid{};
	nativeHook m_scProfanityGetStringStatus{};
	nativeHook m_areOnlinePoliciesUpToDate{};
	nativeHook m_forceCloudMpStatsDownloadAndOverwriteLocalSave{};
	nativeHook m_dlcCheckCloudDataCorrect{};
};
extern hooking* g_hooking;