#pragma once
#include "include.h"
#include "rage/scr_native_call_context.h"
#include "rage/vectors.h"

struct callContext : public rage::scrNativeCallContext {
	callContext() {
		reset();
	}
	void reset() {
		ArgCount = 0;
		Args = &m_arg_data[0];
		Return = &m_ret_data[0];
	}
	template <typename type>
	void push(type value) {
		rage::scrValue data;
		*(type*)(&data) = value;
		m_arg_data[ArgCount++] = data;
	}
	template <typename t>
	t getRetVal() {
		return *reinterpret_cast<t*>((uint64_t)Return);
	}
	rage::scrValue m_ret_data[10]{};
	rage::scrValue m_arg_data[100]{};
};