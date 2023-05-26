#include "header.h"
#include "background/header_background.h"
#include "text/header_text.h"

header::header() : submenu("Header", [](submenu& submenu) {
	submenu.add(submenuOption("Background", hdr::background::getInstance()));
	submenu.add(submenuOption("Text", hdr::text::getInstance()));
	submenu.add(toggleOption("Enabled", g_header.m_enabled));
	submenu.add(numberOption<fp>("Size", g_header.m_size, 0.f, 1.f, 0.01f));
}) {}