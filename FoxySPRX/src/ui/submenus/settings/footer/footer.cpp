#include "footer.h"
#include "background/footer_background.h"
#include "sprite/footer_sprite.h"

footer::footer() : submenu("Footer", [](submenu& submenu) {
	submenu.add(submenuOption("Background", footr::background::getInstance()));
	submenu.add(submenuOption("Sprite", footr::sprite::getInstance()));
	submenu.add(toggleOption("Enabled", g_footer.m_enabled));
	submenu.add(numberOption<fp>("Size", g_footer.m_size, 0.f, 1.f, 0.01f));
}) {}