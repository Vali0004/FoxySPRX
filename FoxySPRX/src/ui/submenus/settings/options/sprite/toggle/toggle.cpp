#include "toggle.h"
#include "selected/toggle_selected.h"

toggle::toggle() : submenu("Toggle", [](submenu& submenu) {
	submenu.add(submenuOption("Selected", opt::tog::selected()));
	submenu.add(numberOption<fp>("Width", g_options.m_toggleSize.x, 0.f, 1.f, 0.01f));
	submenu.add(numberOption<fp>("Height", g_options.m_toggleSize.y, 0.f, 1.f, 0.01f));
	submenu.add(numberOption<fp>("Rotation", g_options.m_toggle.m_rotation, 0.f, 360.f, 1.f));
	submenu.add(numberOption<u8>("R", g_options.m_toggleColor.r, 0, 255, 1));
	submenu.add(numberOption<u8>("G", g_options.m_toggleColor.g, 0, 255, 1));
	submenu.add(numberOption<u8>("B", g_options.m_toggleColor.b, 0, 255, 1));
	submenu.add(numberOption<u8>("A", g_options.m_toggleColor.a, 0, 255, 1));
}) {}