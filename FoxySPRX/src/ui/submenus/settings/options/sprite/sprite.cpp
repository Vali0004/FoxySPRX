#include "sprite.h"
#include "arrow/arrow.h"
#include "toggle/toggle.h"

namespace opt {
	sprite::sprite() : submenu("Sprite", [](submenu& submenu) {
		submenu.add(submenuOption("Arrow", arrow()));
		submenu.add(submenuOption("Toggle", toggle()));
	}) {}
}