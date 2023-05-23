#include "prx/prx.h"
#include "core/core.h"

SYS_MODULE_INFO(FoxySPRX, 0, 1, 1);
SYS_MODULE_START(PrxStart);
SYS_MODULE_STOP(PrxStop);
SYS_LIB_DECLARE_WITH_STUB(LIBNAME, SYS_LIB_AUTO_EXPORT, STUBNAME);
SYS_LIB_EXPORT(_FoxySPRX_export_function, LIBNAME);

extern "C" {
	int _FoxySPRX_export_function(void) {
		return core::sys::prx::dummy();
	}
	int PrxStart(void) {
		return core::sys::prx::start();
	}
	int PrxStop(void) {
		return core::sys::prx::stop();
	}
}