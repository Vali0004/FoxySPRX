#include "options_bg_selected.h"

namespace opt {
	namespace bg {
		selected::selected() : submenu("Selected", [](submenu& submenu) {
			submenu.add(numberOption<u8>("R", g_options.m_selectedColor.r, 0, 255, 1));
			submenu.add(numberOption<u8>("G", g_options.m_selectedColor.g, 0, 255, 1));
			submenu.add(numberOption<u8>("B", g_options.m_selectedColor.b, 0, 255, 1));
			submenu.add(numberOption<u8>("A", g_options.m_selectedColor.a, 0, 255, 1));
		}) {}
	}
}