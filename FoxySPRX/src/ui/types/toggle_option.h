#pragma once
#include "include.h"

struct toggleOption : public baseOption {
	toggleOption(ccp name, ccp description, bool& toggle, fnptr<void()> action = nullptr) : baseOption(name, description, action), m_toggle(&toggle) {}
	toggleOption(ccp name, bool& toggle, fnptr<void()> action = nullptr) : toggleOption(name, ccp(), toggle, action) {}

	void draw(bool selected) override {
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(8);
		gui::drawing::image(
			g_options.m_toggle,
			{ g_pos.x + (g_width / g_options.m_padding), g_base + (g_options.m_size / 2.f) },
			g_options.m_toggleSize,
			g_options.toggle(*m_toggle)
		);
		baseOption::draw(selected);
	}
	uint32_t type() override {
		return eOptionTypes::Regular;
	}
	void action(eActionType type) override {
		switch (type) {
		case at_Enter: {
			*m_toggle ^= true;
		} break;
		}
		baseOption::action(type);
	}
	bool* m_toggle{};
};