#pragma once
#include "base_option.h"

struct option : public baseOption {
	option(ccp name, ccp description, fnptr<void()> action = nullptr) : baseOption(name, description, action) {}
	option(ccp name, fnptr<void()> action = nullptr) : option(name, nullptr, action) {}

	u32 type() override {
		return eOptionTypes::Regular;
	}
};