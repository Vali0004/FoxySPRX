#pragma once
#include "include.h"
#include "rage/scr_native_registration.h"

struct nativeHook {
	void create(uint32_t native);
	void destroy();
	void enable(uint32_t replacementAddr);
	void disable();
	template <typename t>
	t read(int offset = 0) {
		return *(t*)(address + offset);
	}
	template <typename t>
	void set(t val) {
		*(t*)address = val;
	}
	uint32_t address{};
	uint32_t toc{};
	uint64_t opd{};
	bool enabled{};
};