#pragma once
#include "base_option.h"
#include "ui/types/submenu.h"

class submenuOption : public baseOption {
public:
	submenuOption(ccp name, ccp description, submenu sub, fnptr<void()> action = nullptr) : baseOption(name, description, action), m_submenu(sub) {}
	submenuOption(ccp name, submenu sub, fnptr<void()> action = nullptr) : submenuOption(name, ccp(), sub, action) {}
public:
	void draw(bool selected) override {
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(8);
		gui::drawing::image(
			g_options.m_arrow,
			{ g_pos.x + (g_width / g_options.m_padding), g_base + (g_options.m_size / 2.f) },
			g_options.m_arrowSize,
			g_options.arrow(selected)
		);
		baseOption::draw(selected);
	}
	uint32_t type() override {
		return eOptionTypes::Regular;
	}
	void action(eActionType type) override {
		switch (type) {
		case at_Enter: {
			gui::menu::push(m_submenu);
		} break;
		}
		baseOption::action(type);
	}
private:
	submenu m_submenu;
};