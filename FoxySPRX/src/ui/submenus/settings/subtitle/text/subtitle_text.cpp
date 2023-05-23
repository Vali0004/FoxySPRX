#include "subtitle_text.h"

text::text() : submenu("Text", [](submenu& submenu) {
	submenu.add(toggleOption("Enabled", g_subtitle.m_txtEnabled));
	submenu.add(numberOption<s32>("Font", g_subtitle.m_font, 0, 7, 1));
	submenu.add(numberOption<fp>("Size", g_subtitle.m_txtSize, 0.f, 1.f, 0.01f));
	submenu.add(numberOption<u8>("R", g_subtitle.m_txtColor.r, 0, 255, 1));
	submenu.add(numberOption<u8>("G", g_subtitle.m_txtColor.g, 0, 255, 1));
	submenu.add(numberOption<u8>("B", g_subtitle.m_txtColor.b, 0, 255, 1));
	submenu.add(numberOption<u8>("A", g_subtitle.m_txtColor.a, 0, 255, 1));
}) {}