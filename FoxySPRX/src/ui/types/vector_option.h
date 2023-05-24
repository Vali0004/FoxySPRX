#pragma once
#include "include.h"
#include "base_option.h"

template <typename t>
class vectorOption : public baseOption {
public:
	vectorOption(ccp name, ccp description, vectorr<t> value, s64& pos, fnptr<void()> action = nullptr) : baseOption(name, description, action), m_value(value), m_pos(&pos) {}
	vectorOption(ccp name, vectorr<t> value, s64& pos, fnptr<void()> action = nullptr) : vectorOption(name, ccp(), value, pos, action) {}
public:
	void draw(bool selected) override {
		const string str{ ftos(*m_value) };
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(8);
		gui::drawing::text(
			str.str(),
			{ g_pos.x + (g_width / g_options.m_padding), g_base + (g_options.m_size / 2.f) - (gui::drawing::math::textHeight(g_options.m_font, g_options.m_txtSize) / 1.5f) },
			g_options.text(selected),
			g_options.m_txtSize,
			g_options.m_font,
			false,
			false,
			gui::drawing::eJustify::Right
		);
		baseOption::draw(selected);
	}
	uint32_t type() override {
		return eOptionTypes::Regular;
	}
	void action(eActionType type) override {
		switch (type) {
		case at_Left: {
			if (*m_value > m_min)
				*m_value -= m_step;
			else
				*m_value = m_max;
		} break;
		case at_Right: {
			if (*m_value < m_max)
				*m_value += m_step;
			else
				*m_value = m_min;
		} break;
		}
		baseOption::action(type);
	}
private:
	vectorr<t> m_value{};
	s64* m_pos{};
};