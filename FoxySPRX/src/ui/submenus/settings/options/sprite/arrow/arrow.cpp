#include "arrow.h"
#include "selected/arrow_selected.h"

arrow::arrow() : submenu("Arrow", [](submenu& submenu) {
	submenu.add(submenuOption("Selected", opt::arrw::selected()));
	submenu.add(numberOption<fp>("Width", g_options.m_arrowSize.x, 0.f, 1.f, 0.01f));
	submenu.add(numberOption<fp>("Height", g_options.m_arrowSize.y, 0.f, 1.f, 0.01f));
	submenu.add(numberOption<fp>("Rotation", g_options.m_arrow.m_rotation, 0.f, 360.f, 1.f));
	submenu.add(numberOption<u8>("R", g_options.m_arrowColor.r, 0, 255, 1));
	submenu.add(numberOption<u8>("G", g_options.m_arrowColor.g, 0, 255, 1));
	submenu.add(numberOption<u8>("B", g_options.m_arrowColor.b, 0, 255, 1));
	submenu.add(numberOption<u8>("A", g_options.m_arrowColor.a, 0, 255, 1));
}) {}