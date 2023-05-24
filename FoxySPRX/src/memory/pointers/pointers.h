#pragma once
#include "include.h"
#include "memory/scanner.h"
#include "rage/scr_native_registration.h"
#include "rage/scr_value.h"

namespace pointers {
	extern void scan();
	extern rage::scrNativeRegistration** g_registrationTable;
	extern rage::scrValue** g_globals;
}