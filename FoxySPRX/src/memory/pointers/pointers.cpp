#include "pointers.h"
#define SCAN(p, n, a, ...) p = memory::scanner(n, a).get()__VA_ARGS__.as<decltype(p)>();

namespace pointers {
	types::getSyncTreeForType g_getSyncTreeForType{};
	types::handleCloneSync g_handleCloneSync{};

	rage::scrNativeRegistration** g_registrationTable{};
	CPedFactory** g_pedFactory{};
	rage::scrValue** g_globals{};
	u32 g_scrProgramTable{};
	void scan() {
		SCAN(g_getSyncTreeForType, "GSTFT", "54 84 04 3E 3C 60 02 ? 2C 84 00");
		SCAN(g_handleCloneSync, "HCS", "7C 08 02 A6 48 ? ? ? F8 21 FF ? F8 01 00 ? ? D9 04");

		SCAN(g_pedFactory, "PF", "3C 60 ? ? 80 63 ? ? 80 63 00 04 ? 80 00 20", .ripClass(0xE));
		SCAN(g_registrationTable, "RT", "3C 60 ? ? 3C C0 ? ? 38 80 00 00 30 63 ? ? 38 A0 01 00 ? ? ? ? 7C A9 03 A6 ? ? ? ? ? ? ? ? 30 63 00 04 ? ? ? ? 4E 80 00 20", .ripClass(0xE));
		SCAN(g_globals, "G", "3C A0 ? ? 39 00 00 00 3C 80 ? ? 30 A5 ? ? 61 06 00 00 30 84", .ripClass(0xE));
		SCAN(g_scrProgramTable, "SPT", "3C 60 01 ? 63 A4 00 00 30 63 ? ? ? ? ? ? 48 00 00 3C", .ripClass(0xA));
		g_logger.send("Info", "Address after rip for PF: 0x%lX", g_pedFactory);
		g_logger.send("Info", "Address after rip for RT: 0x%lX", g_registrationTable);
		g_logger.send("Info", "Address after rip for G: 0x%lX", g_globals);
		g_logger.send("Info", "Address after rip for SPT: 0x%lX", g_scrProgramTable);
	}
}