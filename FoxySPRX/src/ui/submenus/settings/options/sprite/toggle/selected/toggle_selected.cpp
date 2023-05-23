#include "toggle_selected.h"

namespace opt {
	namespace tog {
		selected::selected() : submenu("Selected", [](submenu& submenu) {
			submenu.add(numberOption<u8>("R", g_options.m_toggleSelectedColor.r, 0, 255, 1));
			submenu.add(numberOption<u8>("G", g_options.m_toggleSelectedColor.g, 0, 255, 1));
			submenu.add(numberOption<u8>("B", g_options.m_toggleSelectedColor.b, 0, 255, 1));
			submenu.add(numberOption<u8>("A", g_options.m_toggleSelectedColor.a, 0, 255, 1));
		}) {}
	}
}