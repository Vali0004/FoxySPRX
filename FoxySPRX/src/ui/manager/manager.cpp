#include "ui/manager/manager.h"
#include "ui/types/option.h"
#include "logger/logger.h"

gui::tooltip g_tooltip{};
gui::header g_header{};
gui::subtitle g_subtitle{};
gui::options g_options{};
gui::footer g_footer{};
gui::description g_description{};
float g_width{};
Vector2 g_pos{};
float g_base{};
namespace gui {
	void tooltip::draw() {
		if (!m_enabled)
			return;
		drawing::text(
			m_text,
			{ 0.5f, 0.09f },
			m_txtColor,
			m_txtSize,
			m_font,
			false,
			true,
			drawing::eJustify::Center
		);
	}
	void header::draw() {
		if (!m_enabled)
			return;
		drawing::rectangle({ g_pos.x, g_base + (m_size / 2.f) }, { g_width, m_size }, m_color);
		if (m_txtEnabled) {
			drawing::text(
				m_text,
				{ g_pos.x - (g_width / 2.1f), g_base + (m_size / 2.f) - (drawing::math::textHeight(m_font, m_txtSize) / 2.f) },
				m_txtColor,
				m_txtSize,
				m_font,
				false,
				false
			);
		}
		g_base += m_size;
	}
	void subtitle::draw() {
		if (!m_enabled)
			return;
		if (m_text != CURRENT_MENU.m_name)
			m_text = CURRENT_MENU.m_name;
		drawing::rectangle({ g_pos.x, g_base + (m_size / 2.f) }, { g_width, m_size }, m_color);
		if (m_txtEnabled) {
			drawing::text(
				m_text,
				{ g_pos.x - (g_width / m_padding), g_base + (m_size / 2.f) - (drawing::math::textHeight(m_font, m_txtSize) / 1.5f) },
				m_txtColor,
				m_txtSize,
				m_font,
				false,
				true
			);
			char optionCount[20];
			snprintf(optionCount, sizeof(optionCount), "%i %s %i", OPTION_INDEX + 1, HTML_CODE(8226), OPTION_COUNT);
			drawing::text(
				optionCount,
				{ g_pos.x + (g_width / m_padding), g_base + (m_size / 2.f) - (drawing::math::textHeight(m_font, m_txtSize) / 1.5f) },
				m_txtColor,
				m_txtSize,
				m_font,
				false,
				true,
				drawing::eJustify::Right
			);
		}
		g_base += m_size;
	}
	void options::draw() {
		CURRENT_MENU.handle([] {
			CURRENT_MENU.add(option("~c~~italic~No options."));
		});
	}
	void footer::draw() {
		if (!m_enabled)
			return;
		drawing::rectangle({ g_pos.x, g_base + (m_size / 2.f) }, { g_width, m_size }, m_color);
		if (m_spriteEnabled) {
			fp size{ m_spriteSize };
			if (IS_STACK_VALID && usingDefaultSprite()) {
				if (OPTION_INDEX == 0) {
					m_sprite.m_texture = "arrowright";
					m_sprite.m_rotation = 90.f;
					size *= 0.8f;
				}
				else if (OPTION_INDEX + 1 == OPTION_COUNT) {
					m_sprite.m_texture = "arrowright";
					m_sprite.m_rotation = 270.f;
					size *= 0.8f;
				}
				else {
					m_sprite.m_texture = "shop_arrows_upanddown";
					m_sprite.m_rotation = 0.f;
					size *= 1.f;
				}
			}
			drawing::image(m_sprite, { g_pos.x, g_base + (m_size / 2.f) }, drawing::math::imageScale(size), m_spriteColor);
		}
		g_base += m_size;
	}
	void description::draw() {
		if (!m_enabled)
			return;
		if (VALID_OPTION)
			m_text = CURRENT_OPTION.m_description;
		if (!m_text || m_text == "")
			return;
		g_base += m_height;
		s32 lines{ drawing::math::lineCount(m_text, { g_pos.x, g_base + (m_size / 2.f) }, m_font, m_txtSize) };
		fp size{ (lines * drawing::math::textHeight(m_font, m_txtSize)) + (0.005f * lines) + 0.005f };
		drawing::rectangle({ g_pos.x, g_base + (size / 2.f) }, { g_width, size }, m_color);
		if (m_txtEnabled) {
			UI::SET_TEXT_WRAP(g_pos.x - (g_width / m_padding), g_pos.x + (g_width / m_padding));
			drawing::text(
				m_text,
				{ g_pos.x - (g_width / m_padding), g_base + (m_size / 2.f) - (drawing::math::textHeight(m_font, m_txtSize) / 1.5f) },
				m_txtColor,
				m_txtSize,
				m_font,
				false,
				false
			);
		}
		g_base += size;
	}
	bool g_isOpen{};
	namespace keys {
		input g_open{};
		input g_enter{};
		input g_back{};
		input g_up{};
		input g_down{};
		input g_left{};
		input g_right{};
		void set() {
			//Why can't default initialization just work?
			g_open.m_delay = 20;
			g_open.m_nativeKey = ControlFrontendRright;
			g_open.m_secondaryNativeKey = ControlFrontendCancel;

			g_enter.m_delay = 20;
			g_enter.m_nativeKey = ControlFrontendLb;
			g_enter.m_secondaryNativeKey = ControlInputEmpty;

			g_back.m_delay = 10;
			g_back.m_nativeKey = ControlFrontendRup;
			g_back.m_secondaryNativeKey = ControlInputEmpty;

			g_up.m_delay = 10;
			g_up.m_nativeKey = ControlFrontendPause;
			g_up.m_secondaryNativeKey = ControlInputEmpty;

			g_down.m_delay = 10;
			g_down.m_nativeKey = ControlSelectWeaponSmg;
			g_down.m_secondaryNativeKey = ControlInputEmpty;

			g_left.m_delay = 10;
			g_left.m_nativeKey = ControlFrontendAccept;
			g_left.m_secondaryNativeKey = ControlInputEmpty;

			g_right.m_delay = 10;
			g_right.m_nativeKey = ControlFrontendCancel;
			g_right.m_secondaryNativeKey = ControlInputEmpty;
		}
		void reset() {
			g_open.m_pressed = false;
			g_enter.m_pressed = false;
			g_back.m_pressed = false;
			g_up.m_pressed = false;
			g_down.m_pressed = false;
			g_left.m_pressed = false;
			g_right.m_pressed = false;
		}
	}
	bool g_pushMenu{ true };
	stack<submenu> g_menus{};
	submenu g_menu{};
	namespace menu {
		void push(submenu sub) {
			g_menu = sub;
			g_pushMenu = true;
		}
		void pop() {
			if (g_menus.size() > 1 && g_menus.top().m_name != "Home")
				g_menus.pop();
			else
				g_isOpen = false;
		}
	}
	namespace drawing {
		namespace math {
			void set() {
				g_tooltip = { true, "RB + RIGHT\nFoxySPRX", 0, 0.4f, { 0, 186, 255, 255 }, true };
				g_header = { true, "Foxy", 0.1f, { 0, 186, 255, 255 }, 7, 1.f, { 255, 255, 255, 255 }, true };
				g_subtitle = { true, "", 0.04f, 2.1f, { 0, 0, 0, 220 }, 0, 0.4f, { 255, 255, 255, 255 }, true };
				g_options = { 0.04f, 2.1f, { 0, 0, 0, 160 }, { 255, 255, 255, 255 }, 0, 0.35f, { 255, 255, 255, 255 }, { 10, 10, 10, 255 }, { "commonmenu", "arrowright" }, { 255, 255, 255, 255 }, { 0, 0, 0, 255 }, { 0.015f, 0.022f }, { "commonmenu", "common_medal" }, { 200, 25, 80, 255 }, { 130, 214, 157, 255 }, { 0.018f, 0.028f } };
				g_footer = { true, { "commonmenu", "shop_arrows_upanddown" }, 0.04f, { 10, 10, 10, 200 }, 0.03f, { 255, 255, 255, 255 }, true };
				g_description = { true, "", 0.033f, 0.01f, 2.1f, { 0, 0, 0, 120 }, 0, 0.28f, { 255, 255, 255, 255 }, true };
				g_width = { 0.24f };
				g_pos = { 0.8f, 0.1f };
				g_base = 0.f;
			}
			Vector2 resolution() {
				return { 1280.f, 720.f };
			}
			fp textHeight(s32 font, fp size) {
				return UI::GET_RENDERED_CHARACTER_HEIGHT(size, font);
			}
			fp textWidth(ccp text, s32 font, fp size) {
				UI::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("STRING");
				UI::SET_TEXT_FONT(font);
				UI::SET_TEXT_SCALE(size, size);
				UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(text);
				return UI::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
			}
			s32 lineCount(ccp text, Vector2 pos, s32 font, fp size) {
				UI::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING("STRING");
				UI::SET_TEXT_FONT(font);
				UI::SET_TEXT_SCALE(0.f, size);
				UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(text);
				return UI::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(pos.x, pos.y);
			}
			Vector2 imageScale(fp size) {
				auto res = resolution();
				return { (res.y / res.x) * size, size };
			}
		}
		void rectangle(Vector2 pos, Vector2 size, rgba color) {
			GRAPHICS::DRAW_RECT(pos.x, pos.y, size.x, size.y, color.r, color.g, color.b, color.a);
		}
		void image(sprite sprite, Vector2 pos, Vector2 size, rgba color) {
			if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sprite.m_dictionary)) {
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sprite.m_dictionary, false);
				return;
			}
			GRAPHICS::DRAW_SPRITE(sprite.m_dictionary, sprite.m_texture, pos.x, pos.y, size.x, size.y, sprite.m_rotation, color.r, color.g, color.b, color.a);
		}
		void text(ccp str, Vector2 position, rgba color, fp size, s32 font, bool shadow, bool outline, eJustify justify) {
			UI::SET_TEXT_FONT(font);
			UI::SET_TEXT_SCALE(size, size);
			UI::SET_TEXT_COLOUR(color.r, color.g, color.b, color.a);
			if (outline)
				UI::SET_TEXT_OUTLINE();
			if (shadow)
				UI::SET_TEXT_DROP_SHADOW();
			switch (justify) {
			case eJustify::Left: {

			} break;
			case eJustify::Right: {
				UI::SET_TEXT_RIGHT_JUSTIFY(true);
				UI::SET_TEXT_WRAP(0.f, position.x);
			} break;
			case eJustify::Center: {
				UI::SET_TEXT_CENTRE(true);
			} break;
			}
			UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(str);
			UI::END_TEXT_COMMAND_DISPLAY_TEXT(position.x, position.y);
		}
		void draw() {
			handlers::key::check();
			if (IS_STACK_VALID) {
				handlers::key::actions();
				if (g_isOpen) {
					g_base = g_pos.y;
					g_header.draw();
					g_subtitle.draw();
					g_options.draw();
					g_footer.draw();
					g_description.draw();
				}
				else {
					g_tooltip.draw();
				}
				keys::reset();
			}
			if (g_pushMenu) {
				g_menus.push(g_menu);
				g_pushMenu = false;
			}
		}
	}
	namespace handlers {
		namespace sounds {
			soundData g_open{};
			soundData g_close{};
			soundData g_enter{};
			soundData g_back{};
			soundData g_left{};
			soundData g_right{};
			soundData g_up{};
			soundData g_down{};
			void set() {
				g_open = { true, "SELECT" };
				g_close = { true, "BACK" };
				g_enter = { true, "SELECT" };
				g_back = { true, "BACK" };
				g_left = { true, "NAV_LEFT_RIGHT" };
				g_right = { true, "NAV_LEFT_RIGHT" };
				g_up = { true, "NAV_UP_DOWN" };
				g_down = { true, "NAV_UP_DOWN" };
			}
			void queue(soundData& sound) {
				if (sound.m_active) {
					AUDIO::PLAY_SOUND_FRONTEND(-1, sound.m_id, sound.m_set);
				}
			}
		}
		namespace key {
			void press(input* key) {
				u32 gameTimer{ MISC::GET_GAME_TIMER() }; //There's a syscall for this somewhere, but it's incredibly complicated.
				static timer t{};
				t.start(gameTimer, (key->m_delay * 10) * 1000);
				if (t.ready(gameTimer)) {
					if (key->m_secondaryNativeKey == ControlInputEmpty) {
						if (CONTROLS::IS_CONTROL_JUST_PRESSED(0, key->m_nativeKey)) {
							key->m_pressed = true;
						}
					}
					else {
						if (CONTROLS::IS_CONTROL_PRESSED(0, key->m_nativeKey)) {
							if (CONTROLS::IS_CONTROL_JUST_PRESSED(0, key->m_secondaryNativeKey)) {
								key->m_pressed = true;
							}
						}
					}
				}
				else {
					t.reset();
				}
			}
			void check() {
				press(&keys::g_open);
				press(&keys::g_enter);
				press(&keys::g_back);
				press(&keys::g_up);
				press(&keys::g_down);
				press(&keys::g_left);
				press(&keys::g_right);
			}
			void actions() {
				if (keys::g_open.m_pressed) {
					sounds::queue(g_isOpen ? sounds::g_open : sounds::g_close);
					g_isOpen ^= true;
				}
				if (g_isOpen) {
					if (keys::g_enter) {
						sounds::queue(sounds::g_enter);
						CURRENT_MENU.action(at_Enter);
					}
					if (keys::g_back) {
						sounds::queue(sounds::g_back);
						menu::pop();
					}
					if (keys::g_up) {
						sounds::queue(sounds::g_up);
						CURRENT_MENU.action(at_Up);
					}
					if (keys::g_down) {
						sounds::queue(sounds::g_down);
						CURRENT_MENU.action(at_Down);
					}
					if (keys::g_left) {
						sounds::queue(sounds::g_left);
						CURRENT_MENU.action(at_Left);
					}
					if (keys::g_right) {
						sounds::queue(sounds::g_right);
						CURRENT_MENU.action(at_Right);
					}
				}
			}
		}
	}
}