#pragma once
#include "pch/pch.h"
#include "common/templates.h"
#include "common/enums.h"
#include "rage/vectors.h"

namespace gui {
	struct rgba {
		rgba(u8 r, u8 g, u8 b, u8 a) : r(r), g(g), b(b), a(a) {}
		rgba(u8 r, u8 g, u8 b) : rgba(r, g, b, 255) {}
		rgba() : rgba(0, 0, 0) {}
		u8 r{};
		u8 g{};
		u8 b{};
		u8 a{};
	};
	struct sprite {
		sprite(ccp dictionary, ccp texture, float rotation) : m_dictionary(dictionary), m_texture(texture), m_rotation(rotation) {}
		sprite(ccp dictionary, ccp texture) : sprite(dictionary, texture, 0.f) {}
		sprite() : sprite(NULL, NULL) {}
		ccp m_dictionary{};
		ccp m_texture{};
		float m_rotation{};
	};
	struct soundData {
		soundData(bool active, ccp id) : m_active(active), m_id(id) {}
		soundData() : soundData(false, "") {}
		bool m_active{};
		ccp m_id{};
		ccp m_set{ "HUD_FRONTEND_DEFAULT_SOUNDSET" };
	};
	struct input {
		input(u64 delay, eButtons nativeKey, eButtons secondaryNativeKey) :
			m_delay(delay),
			m_nativeKey(nativeKey), m_secondaryNativeKey(secondaryNativeKey)
		{}
		input(u64 delay, eButtons nativeKey) : input(delay, nativeKey, BUTTON_EMPTY) {}
		input(eButtons nativeKey, eButtons secondaryNativeKey) : input(10, nativeKey, secondaryNativeKey) {}
		input(eButtons nativeKey) : input(nativeKey, BUTTON_EMPTY) {}
		input() : input(BUTTON_EMPTY) {}

		u64 m_delay{};
		bool m_pressed{};
		eButtons m_nativeKey{};
		eButtons m_secondaryNativeKey{};
		operator bool() {
			return m_pressed;
		}
	};
	struct tooltip {
		tooltip(bool enabled, cc* text, s32 font, fp txtSize, rgba txtColor, bool txtEnabled) : m_enabled(enabled), m_text(text), m_font(font), m_txtSize(txtSize), m_txtColor(txtColor), m_txtEnabled(txtEnabled) {}
		tooltip() = default;
		bool m_enabled{};
		bool m_txtEnabled{};
		cc* m_text{};
		s32 m_font{};
		fp m_txtSize{};
		rgba m_txtColor{};

		void draw();
	};
	struct header {
		header(bool enabled, cc* text, fp size, rgba color, s32 font, fp txtSize, rgba txtColor, bool txtEnabled) : m_enabled(enabled), m_text(text), m_size(size), m_color(color), m_font(font), m_txtSize(txtSize), m_txtColor(txtColor), m_txtEnabled(txtEnabled) {}
		header() = default;
		bool m_enabled{};
		bool m_txtEnabled{};
		cc* m_text{};
		fp m_size{};
		rgba m_color{};
		s32 m_font{};
		fp m_txtSize{};
		rgba m_txtColor{};

		void draw();
	};
	struct subtitle {
		subtitle(bool enabled, cc* text, fp size, fp padding, rgba color, s32 font, fp txtSize, rgba txtColor, bool txtEnabled) : m_enabled(enabled), m_text(text), m_size(size), m_padding(padding), m_color(color), m_font(font), m_txtSize(txtSize), m_txtColor(txtColor), m_txtEnabled(txtEnabled) {}
		subtitle() = default;
		bool m_enabled{};
		bool m_txtEnabled{};
		cc* m_text{};
		fp m_size{};
		fp m_padding{};
		rgba m_color{};
		s32 m_font{};
		fp m_txtSize{};
		rgba m_txtColor{};

		void draw();
	};
	struct options {
		options(fp size, fp padding,
			rgba color, rgba selectedColor,
			s32 font, fp txtSize, rgba txtColor, rgba txtSelectedColor,
			sprite arrow, rgba arrowColor, rgba arrowSelectedColor, Vector2 arrowSize,
			sprite toggle, rgba toggleColor, rgba toggleSelectedColor, Vector2 toggleSize) :
			m_size(size), m_padding(padding),
			m_color(color), m_selectedColor(selectedColor),
			m_font(font), m_txtSize(txtSize), m_txtColor(txtColor), m_txtSelectedColor(txtSelectedColor),
			m_arrow(arrow), m_arrowColor(arrowColor), m_arrowSelectedColor(arrowSelectedColor), m_arrowSize(arrowSize),
			m_toggle(toggle), m_toggleColor(toggleColor), m_toggleSelectedColor(toggleSelectedColor), m_toggleSize(toggleSize)
		{}
		options() = default;
		fp m_size{};
		fp m_padding{};
		rgba m_color{};
		rgba m_selectedColor{};
		s32 m_font{};
		fp m_txtSize{};
		rgba m_txtColor{};
		rgba m_txtSelectedColor{};
		sprite m_arrow{};
		rgba m_arrowColor{};
		rgba m_arrowSelectedColor{};
		Vector2 m_arrowSize{};
		sprite m_toggle{};
		rgba m_toggleColor{};
		rgba m_toggleSelectedColor{};
		Vector2 m_toggleSize{};

		rgba rect(bool selected) {
			return selected ? m_selectedColor : m_color;
		}
		rgba text(bool selected) {
			return selected ? m_txtSelectedColor : m_txtColor;
		}
		rgba arrow(bool selected) {
			return selected ? m_arrowSelectedColor : m_arrowColor;
		}
		rgba toggle(bool selected) {
			return selected ? m_toggleSelectedColor : m_toggleColor;
		}
		void draw();
	};
	struct footer {
		footer(bool enabled, sprite sprite, fp size, rgba color, fp spriteSize, rgba spriteColor, bool spriteEnabled) : m_enabled(enabled), m_sprite(sprite), m_size(size), m_color(color), m_spriteSize(spriteSize), m_spriteColor(spriteColor), m_spriteEnabled(spriteEnabled) {}
		footer() = default;
		bool m_enabled{};
		bool m_spriteEnabled{};
		sprite m_sprite{};
		fp m_size{};
		rgba m_color{};
		fp m_spriteSize{};
		rgba m_spriteColor{};

		bool usingDefaultSprite() {
			if (m_sprite.m_dictionary == "commonmenu") {
				if (m_sprite.m_texture == "shop_arrows_upanddown" || m_sprite.m_texture == "arrowright") {
					return true;
				}
			}
			return false;
		}
		void draw();
	};
	struct description {
		description(bool enabled, cc* text, fp size, fp height, fp padding, rgba color, s32 font, fp txtSize, rgba txtColor, bool txtEnabled) : m_enabled(enabled), m_text(text), m_size(size), m_height(height), m_padding(padding), m_color(color), m_font(font), m_txtSize(txtSize), m_txtColor(txtColor), m_txtEnabled(txtEnabled) {}
		description() = default;
		bool m_enabled{};
		bool m_txtEnabled{};
		cc* m_text{};
		fp m_size{};
		fp m_height{};
		fp m_padding{};
		rgba m_color{};
		s32 m_font{};
		fp m_txtSize{};
		rgba m_txtColor{};

		void draw();
	};
}