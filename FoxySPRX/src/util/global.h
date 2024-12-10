#pragma once
#include "include.h"
#include "memory/pointers/pointers.h"

class global {
public:
	global Add(u64 Value) {
		return { Index + Value };
	}
	global Add(u64 Array, u64 Size) {
		return { Index + Array * Size };
	}
	rage::scrValue* Value() {
		//PPC moment
		rage::scrValue* ptr{ *reinterpret_cast<rage::scrValue**>((pointers::g_globals - 4) + (((Index / 0x40000) & 0x3F) * 4)) };
		return ptr + ((Index % 0x40000) * 4);
	}
public:
	u64 Index;
};
class local {
public:
	local Add(u64 Value) {
		return { Index + Value };
	}
	local Add(u64 Array, u64 Size) {
		return { Index + Array * Size };
	}
	rage::scrValue* Value(rage::scrValue* stack) {
		return reinterpret_cast<rage::scrValue*>(uintptr_t(stack) + (Index * 8));
	}
public:
	u64 Index;
};