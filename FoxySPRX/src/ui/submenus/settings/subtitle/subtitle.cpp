#include "subtitle.h"
#include "background/subtitle_background.h"
#include "text/subtitle_text.h"

subtitle::subtitle() : submenu("Subtitle", [](submenu& submenu) {
	submenu.add(submenuOption("Background", background::getInstance()));
	submenu.add(submenuOption("Text", text::getInstance()));
	submenu.add(toggleOption("Enabled", g_subtitle.m_enabled));
	submenu.add(numberOption<fp>("Size", g_subtitle.m_size, 0.f, 1.f, 0.01f));
}) {}