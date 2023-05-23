#pragma once
#include "rage/scr_native_registration.h"
#include "rage/natives/call_context.h"
#include "rage/natives/types.h"

extern rage::scrNativeRegistration** g_registrationTable;

extern rage::scrCmd get_handler(rage::scrNativeHash hash);

struct invoker {
	void begin();
	void end(rage::scrNativeHash hash);
	template <typename t>
	void push(t&& value) {
		m_context.push(static_cast<t&&>(value));
	}
	template <typename t>
	t getRet() {
		return m_context.getRetVal<t>();
	}
	callContext m_context{};
};
extern invoker g_invoker;