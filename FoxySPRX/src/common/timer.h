#pragma once
#include "defines.h"
#include "templates.h"

class timer {
public:
	void start(s32 current_tick, u32 ticks, bool use_ms = false) {
		if (m_tick) {
			m_ready_at = current_tick + (use_ms ? MICROS_TO_MS(ticks) : ticks);
			m_tick = false;
		}
	}
	bool ready(s32 current_tick) {
		return current_tick > m_ready_at;
	}
	void reset() {
		m_tick = true;
	}
private:
	u64 m_ready_at;
	bool m_tick;
};