#include "text_selected.h"

namespace opt {
	namespace txt {
		selected::selected() : submenu("Selected", [](submenu& submenu) {
			submenu.add(numberOption<u8>("R", g_options.m_txtSelectedColor.r, 0, 255, 1));
			submenu.add(numberOption<u8>("G", g_options.m_txtSelectedColor.g, 0, 255, 1));
			submenu.add(numberOption<u8>("B", g_options.m_txtSelectedColor.b, 0, 255, 1));
			submenu.add(numberOption<u8>("A", g_options.m_txtSelectedColor.a, 0, 255, 1));
		}) {}
	}
}