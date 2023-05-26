#include "options_text.h"
#include "selected/text_selected.h"

namespace opt {
	text::text() : submenu("Text", [](submenu& submenu) {
		submenu.add(submenuOption("Selected", opt::txt::selected::getInstance()));
		submenu.add(numberOption<s32>("Font", g_options.m_font, 0, 7, 1));
		submenu.add(numberOption<fp>("Size", g_options.m_txtSize, 0.f, 1.f, 0.01f));
		submenu.add(numberOption<u8>("R", g_options.m_txtColor.r, 0, 255, 1));
		submenu.add(numberOption<u8>("G", g_options.m_txtColor.g, 0, 255, 1));
		submenu.add(numberOption<u8>("B", g_options.m_txtColor.b, 0, 255, 1));
		submenu.add(numberOption<u8>("A", g_options.m_txtColor.a, 0, 255, 1));
	}) {}
}