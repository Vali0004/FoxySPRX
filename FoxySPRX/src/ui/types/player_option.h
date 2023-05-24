#pragma once
#include "submenu_option.h"
#include "ui/submenus/players/selected_player/selected_player.h"

class playerOption : public baseOption {
public:
	playerOption(Player p) : baseOption(PLAYER::GET_PLAYER_NAME(p), {}, {}), m_submenu(selectedPlayer()), m_player(p) {}
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
			m_submenu.m_name = PLAYER::GET_PLAYER_NAME(m_player);
			gui::menu::push(m_submenu);
		} break;
		}
		baseOption::action(type);
	}
private:
	submenu m_submenu{};
	Player m_player{};
};