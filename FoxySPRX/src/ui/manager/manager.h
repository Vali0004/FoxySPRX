#pragma once
#include "include.h"
#include "ui/classes.h"
#include "ui/types/submenu.h"
#include "ui/math.h"
#include "common/timer.h"

namespace gui {
	extern bool g_isOpen;
	namespace keys {
		extern input g_open;
		extern input g_enter;
		extern input g_back;
		extern input g_up;
		extern input g_down;
		extern input g_left;
		extern input g_right;
		extern void set();
		extern void reset();
	}
	extern bool g_pushMenu;
	extern stack<submenu> g_menus;
	extern submenu g_menu;
	namespace menu {
		#define HTML_CODE(c) "~s~&#" STRINGIFY(c) ";"
		#define CURRENT_MENU g_menus.top()
		#define MAX_VISIBLE_OPTIONS 13
		#define OPTIONS CURRENT_MENU.m_options
		#define OPTION_INDEX CURRENT_MENU.m_current
		#define OPTION_COUNT OPTIONS.size()
		#define VALID_OPTION OPTION_COUNT && OPTIONS[OPTION_INDEX]
		#define CURRENT_OPTION static_cast<abstractOption&>(*OPTIONS[OPTION_INDEX])
		#define IS_STACK_VALID !g_menus.empty()
		extern void push(submenu sub);
		extern void pop();
	}
	namespace drawing {
		namespace math {
			extern void set();
			extern Vector2 resolution();
			extern fp textHeight(s32 font, fp size);
			extern fp textWidth(ccp text, s32 font, fp size);
			extern s32 lineCount(ccp text, Vector2 pos, s32 font, fp size);
			extern Vector2 imageScale(fp size);
		}
		extern void rectangle(Vector2 pos, Vector2 size, rgba color);
		extern void image(sprite sprite, Vector2 pos, Vector2 size, rgba color);
		enum class eJustify {
			Left,
			Right,
			Center
		};
		extern void text(ccp str, Vector2 position, rgba color, fp size, s32 font, bool shadow = false, bool outline = false, eJustify justify = eJustify::Left);
		extern void draw();
	}
	namespace handlers {
		namespace sounds {
			extern soundData g_open;
			extern soundData g_close;
			extern soundData g_enter;
			extern soundData g_back;
			extern soundData g_left;
			extern soundData g_right;
			extern soundData g_up;
			extern soundData g_down;
			extern void set();
			extern void queue(soundData& sound);
		}
		namespace key {
			extern void press(input* key);
			extern void check();
			extern void actions();
		}
	}
}