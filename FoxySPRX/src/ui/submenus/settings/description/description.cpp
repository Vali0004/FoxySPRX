#include "description.h"
#include "background/description_background.h"
#include "text/description_text.h"

description::description() : submenu("Description", [](submenu& submenu) {
	submenu.add(submenuOption("Background", desc::background()));
	submenu.add(submenuOption("Text", desc::text()));
	submenu.add(toggleOption("Enabled", g_description.m_enabled));
	submenu.add(numberOption<fp>("Size", g_description.m_size, 0.f, 1.f, 0.01f));
	submenu.add(numberOption<fp>("Height", g_description.m_height, 0.f, 1.f, 0.01f));
	submenu.add(numberOption<fp>("Padding", g_description.m_padding, 0.f, 1.f, 0.01f));
}) {}