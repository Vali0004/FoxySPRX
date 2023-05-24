#include "selected_player.h"

selectedPlayer::selectedPlayer() : submenu("InvalidPlayer", [](submenu& submenu) {
	submenu.add(option("Placeholder"));
}) {}