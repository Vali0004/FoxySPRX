#include "arrow_selected.h"

namespace opt {
	namespace arrw {
		selected::selected() : submenu("Selected", [](submenu& submenu) {
			submenu.add(numberOption<u8>("R", g_options.m_arrowSelectedColor.r, 0, 255, 1));
			submenu.add(numberOption<u8>("G", g_options.m_arrowSelectedColor.g, 0, 255, 1));
			submenu.add(numberOption<u8>("B", g_options.m_arrowSelectedColor.b, 0, 255, 1));
			submenu.add(numberOption<u8>("A", g_options.m_arrowSelectedColor.a, 0, 255, 1));
		}) {}
	}
}