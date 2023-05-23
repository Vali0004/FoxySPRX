#include "description_background.h"

namespace desc {
	background::background() : submenu("Background", [](submenu& submenu) {
		submenu.add(numberOption<u8>("R", g_description.m_color.r, 0, 255, 1));
		submenu.add(numberOption<u8>("G", g_description.m_color.g, 0, 255, 1));
		submenu.add(numberOption<u8>("B", g_description.m_color.b, 0, 255, 1));
		submenu.add(numberOption<u8>("A", g_description.m_color.a, 0, 255, 1));
	}) {}
}