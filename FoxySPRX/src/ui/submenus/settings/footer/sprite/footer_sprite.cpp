#include "footer_sprite.h"

namespace footr {
	sprite::sprite() : submenu("Sprite", [](submenu& submenu) {
		submenu.add(toggleOption("Enabled", g_footer.m_spriteEnabled));
		submenu.add(numberOption<fp>("Size", g_footer.m_spriteSize, 0.f, 1.f, 0.01f));
		submenu.add(numberOption<fp>("Rotation", g_footer.m_sprite.m_rotation, 0.f, 360.f, 1.f));
		submenu.add(numberOption<u8>("R", g_footer.m_spriteColor.r, 0, 255, 1));
		submenu.add(numberOption<u8>("G", g_footer.m_spriteColor.g, 0, 255, 1));
		submenu.add(numberOption<u8>("B", g_footer.m_spriteColor.b, 0, 255, 1));
		submenu.add(numberOption<u8>("A", g_footer.m_spriteColor.a, 0, 255, 1));
	}) {}
}