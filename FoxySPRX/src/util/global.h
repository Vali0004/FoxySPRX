#pragma once
#include "include.h"

class global {
public:
	global(u64 index) : m_index(index) {}
public:
	global at(u64 index) {
		return { m_index + index };
	}
	global at(u64 index, u64 arrayIndex) {
		return at(index)
	}
private:
	u64 m_index{};
};