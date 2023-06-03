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
		rage::scrValue* Pointer{ *(volatile int*)((pointers::g_globals) + (((Index / 0x40000) & 0x3F) * 4)) };
		if (Pointer)
			return (rage::scrValue*)(Pointer + ((Index % 0x40000) * 4));
		return nullptr
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
