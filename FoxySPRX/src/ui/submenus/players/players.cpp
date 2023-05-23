#include "players.h"
#include "ui/types/player_option.h"

players::players() : submenu("Players", [](submenu& submenu) {
	if (NETWORK::NETWORK_IS_SESSION_ACTIVE()) {
		for (u32 i{}; i != NETWORK::NETWORK_GET_NUM_CONNECTED_PLAYERS(); ++i) {
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(i))) {
				submenu.add(playerOption(i));
			}
		}
	}
	else {
		submenu.add(playerOption(0));
	}
}) {}