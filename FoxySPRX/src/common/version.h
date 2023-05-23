#pragma once
#define THROW_COMPILER_ERROR(msg) static_assert(false, msg);
#define VERSION 1
#define INVALID_VERSION_DEFINED_ERROR "Invalid version defined!"
#define NO_VERSION_DEFINED_ERROR "No version defined!"

#ifndef VERSION //We want to ensure it's defined
	#define NO_VERSION
	#define ADDRESS_SHIFT 0
#else
	#if VERSION == 0
		#define IS_BUES
		#define ADDRESS_SHIFT 0x20400
	#elif VERSION == 1
		#define IS_BLUS
		#define ADDRESS_SHIFT 0
	#else
		#define INVALID_VERSION
		#define ADDRESS_SHIFT 0
	#endif
#endif

#ifdef INVALID_VERSION
	THROW_COMPILER_ERROR(INVALID_VERSION_DEFINED_ERROR)
#elif defined(NO_VERSION)
	THROW_COMPILER_ERROR(NO_VERSION_DEFINED_ERROR)
#endif

#define SHIFT_ADDRESS(a) a - ADDRESS_SHIFT