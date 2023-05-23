#include "footer_background.h"

namespace footr {
	background::background() : submenu("Background", [](submenu& submenu) {
		submenu.add(numberOption<u8>("R", g_footer.m_color.r, 0, 255, 1));
		submenu.add(numberOption<u8>("G", g_footer.m_color.g, 0, 255, 1));
		submenu.add(numberOption<u8>("B", g_footer.m_color.b, 0, 255, 1));
		submenu.add(numberOption<u8>("A", g_footer.m_color.a, 0, 255, 1));
	}) {}
}