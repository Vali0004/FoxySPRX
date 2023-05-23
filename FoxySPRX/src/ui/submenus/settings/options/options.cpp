#include "options.h"
#include "background/options_background.h"
#include "sprite/sprite.h"
#include "text/options_text.h"

options::options() : submenu("Options", [](submenu& submenu) {
	submenu.add(submenuOption("Background", opt::background()));
	submenu.add(submenuOption("Sprite", opt::sprite()));
	submenu.add(submenuOption("Text", opt::text()));
	submenu.add(numberOption<fp>("Size", g_options.m_size, 0.f, 1.f, 0.01f));
	submenu.add(numberOption<fp>("Padding", g_options.m_padding, 0.f, 1.f, 0.01f));
}) {}