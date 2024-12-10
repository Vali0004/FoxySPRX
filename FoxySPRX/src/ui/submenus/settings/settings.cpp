#include "settings.h"
#include "header/header.h"
#include "subtitle/subtitle.h"
#include "options/options.h"
#include "footer/footer.h"
#include "description/description.h"

settings::settings() : submenu("Settings", [](submenu& submenu) {
	submenu.add(submenuOption("Header", header::getInstance()));
	submenu.add(submenuOption("Subtitle", subtitle::getInstance()));
	submenu.add(submenuOption("Options", options::getInstance()));
	submenu.add(submenuOption("Footer", footer::getInstance()));
	submenu.add(submenuOption("Description", description::getInstance()));
	submenu.add(numberOption<fp>("X Position", g_pos.x, 0.f, 1.f, 0.01f));
	submenu.add(numberOption<fp>("Y Position", g_pos.y, 0.f, 1.f, 0.01f));
	submenu.add(numberOption<fp>("Width", g_width, 0.11f, 0.3f, 0.01f));
	submenu.add(option("Unload", [] {
		unload();
	}));
}) {}