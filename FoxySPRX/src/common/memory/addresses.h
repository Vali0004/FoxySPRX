#pragma once
#include "common/defines.h"
#include "common/templates.h"
#include "common/map.h"

struct addressTable : public map<u32> {
	uint32_t addr(ccp key) {
		return get(key);
	}
	template <typename t>
	t ptr(ccp key) {
		return getElement(key)->ptr<t>();
	}
};
extern addressTable g_addresses;