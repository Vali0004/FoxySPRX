#include "footer.h"
#include "background/footer_background.h"
#include "sprite/footer_sprite.h"

footer::footer() : submenu("footer", [](submenu& submenu) {
	submenu.add(submenuOption("Background", footr::background()));
	submenu.add(submenuOption("Sprite", footr::sprite()));
	submenu.add(toggleOption("Enabled", g_header.m_enabled));
	submenu.add(numberOption<fp>("Size", g_header.m_size, 0.f, 1.f, 0.01f));
}) {}