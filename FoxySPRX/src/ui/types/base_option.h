#pragma once
#include "abstract_option.h"
#include "rage/natives/natives.h"
#include "ui/manager/manager.h"

class baseOption : public abstractOption {
public:
	baseOption(ccp name, ccp description, fnptr<void()> action) : abstractOption(name, description), m_action(action) {}
public:
	void draw(bool selected) override {
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
		gui::drawing::rectangle({ g_pos.x, g_base + (g_options.m_size / 2.f) }, { g_width, g_options.m_size }, g_options.rect(selected));
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(8);
		gui::drawing::text(
			m_name,
			{ g_pos.x - (g_width / g_options.m_padding), g_base + (g_options.m_size / 2.f) - (gui::drawing::math::textHeight(g_options.m_font, g_options.m_txtSize) / 1.5f) },
			g_options.text(selected),
			g_options.m_txtSize,
			g_options.m_font
		);
		g_base += g_options.m_size;
	}
	void action(eActionType type) override {
		switch (type) {
		case at_Enter: {
			if (m_action)
				m_action();
		} break;
		}
	}
private:
	fnptr<void()> m_action{};
};