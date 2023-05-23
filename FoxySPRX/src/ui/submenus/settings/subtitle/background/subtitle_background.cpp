#include "subtitle_background.h"

background::background() : submenu("Background", [](submenu& submenu) {
	submenu.add(numberOption<u8>("R", g_subtitle.m_color.r, 0, 255, 1));
	submenu.add(numberOption<u8>("G", g_subtitle.m_color.g, 0, 255, 1));
	submenu.add(numberOption<u8>("B", g_subtitle.m_color.b, 0, 255, 1));
	submenu.add(numberOption<u8>("A", g_subtitle.m_color.a, 0, 255, 1));
}) {}