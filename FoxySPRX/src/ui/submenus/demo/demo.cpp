#include "demo.h"
#include "logger/logger.h"

bool testBool{};
s32 int32Test{ 69 };
s64 int64Test{ 420 };
fp floatTest{ 6.9f };
demo::demo() : submenu("Demo", [](submenu& submenu) {
	submenu.add(option("Option", "A description.", [] {
		g_logger.send("Info", "You pressed the test option");
	}));
	submenu.add(toggleOption("Toggle", testBool));
	submenu.add(numberOption<s32>("Int32", int32Test, 0, 100));
	submenu.add(numberOption<s64>("Int64", int64Test, 0, 1000, 10));
	submenu.add(numberOption<fp>("Float", floatTest, 0.f, 10.f, 0.1f));
}) {}