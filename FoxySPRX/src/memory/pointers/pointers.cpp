#include "pointers.h"
#define SCAN(p, n, a, ...) p = memory::scanner(n, a).get()__VA_ARGS__.as<decltype(p)>();

namespace pointers {
	rage::scrNativeRegistration** g_registrationTable{};
	rage::scrValue** g_globals{};
	void scan() {
		SCAN(g_registrationTable, "RT", "3C 60 ? ? 3C C0 ? ? 38 80 00 00 30 63 ? ? 38 A0 01 00 ? ? ? ? 7C A9 03 A6 ? ? ? ? ? ? ? ? 30 63 00 04 ? ? ? ? 4E 80 00 20", .ripClass(0xE));
		SCAN(g_globals, "G", "3C A0 ? ? 39 00 00 00 3C 80 ? ? 30 A5 ? ? 61 06 00 00 30 84 ? ?", .ripClass(0xE));
	}
}