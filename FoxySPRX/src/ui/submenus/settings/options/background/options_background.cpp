#include "options_background.h"
#include "selected/options_bg_selected.h"

namespace opt {
	background::background() : submenu("Background", [](submenu& submenu) {
		submenu.add(submenuOption("Selected", opt::bg::selected::getInstance()));
		submenu.add(numberOption<u8>("R", g_options.m_color.r, 0, 255, 1));
		submenu.add(numberOption<u8>("G", g_options.m_color.g, 0, 255, 1));
		submenu.add(numberOption<u8>("B", g_options.m_color.b, 0, 255, 1));
		submenu.add(numberOption<u8>("A", g_options.m_color.a, 0, 255, 1));
	}) {}
}