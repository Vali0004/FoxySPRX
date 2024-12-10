#pragma once
#include "include.h"
#include "memory/scanner.h"
#include "rage/scr_native_registration.h"
#include "rage/scr_value.h"
#include "rage/ped_factory.h"

namespace pointers {
	namespace types {
		using getSyncTreeForType = u64(*)(u64* _This, u16 syncType);
		using handleCloneSync = u32(*)(u64* _This, u64* sender, u64* receiver, u16 syncType, u32 objectId, u64 syncData, u32 sequenceId, s32 timestamp);
	}
	extern void scan();
	extern types::getSyncTreeForType g_getSyncTreeForType;
	extern types::handleCloneSync g_handleCloneSync;

	extern rage::scrNativeRegistration** g_registrationTable;
	extern CPedFactory** g_pedFactory;
	extern rage::scrValue** g_globals;
	extern u32 g_scrProgramTable;
}