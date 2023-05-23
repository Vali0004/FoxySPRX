#include "script/script.h"
#include "logger/logger.h"
#include "ui/manager/manager.h"
#include "ui/submenus/demo/demo.h"
#include "ui/submenus/players/players.h"
#include "ui/submenus/settings/settings.h"

namespace script {
	void create() {
		gui::drawing::math::set();
		gui::handlers::sounds::set();
		gui::keys::set();
		gui::g_menu = submenu("Home", [](submenu& submenu) {
			submenu.add(submenuOption("Demo", demo()));
			submenu.add(submenuOption("Players", players()));
			submenu.add(submenuOption("Settings", settings()));
		});
	}
	void tick() {
		//Disable/enable phone
		if (gui::g_isOpen)
			CONTROLS::DISABLE_CONTROL_ACTION(0, ControlPhone);
		else if (!CONTROLS::IS_CONTROL_ENABLED(0, ControlPhone))
			CONTROLS::ENABLE_CONTROL_ACTION(0, ControlPhone);		
		//Allow HUD elements to draw when the game is paused
		UI::DISPLAY_HUD_WHEN_PAUSED_THIS_FRAME();
		//Allows us to draw in the pause menu
		GRAPHICS::FORCE_RENDER_IN_GAME_UI(TRUE);
		//Allows us to draw above the pause menu
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(8);
		//Allows rendering of paused elements
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(TRUE);
		//Draw behind (actually, if set the GFX order to 8, it's more of a way to draw in transition)
		GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(TRUE);
		/*//Grabs pausemenu ownership to avoid pausing (not currently possible to stop pausing in story)
		GRAPHICS::GRAB_PAUSEMENU_OWNERSHIP();
		//Read above
		MISC::SET_GAME_PAUSED(FALSE);
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(FALSE);
		*/
		gui::drawing::draw();
	}
}