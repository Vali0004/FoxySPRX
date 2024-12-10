#include "core/core.h"
#include "rage/natives/invoker/invoker.h"
#include "hooking/hooking.h"
#include "logger/logger.h"
#include "ui/manager/manager.h"
#include "memory/pointers/pointers.h"

namespace core {
	ppu_thr_t threadId{ SYS_PPU_THREAD_ID_INVALID };
	void preinit() {
		g_logger.create("log.txt");
		pointers::scan();
	}
	void init() {
		g_hooking = new hooking();
		g_hooking->enable();
	}
	void uninit() {
		g_hooking->disable();
		SLEEP(1);
		delete g_hooking;
		gui::g_menus.clear();
		g_logger.destroy();
	}
	void entry(u64 a) {
		preinit();
		SLEEP(35);
		init();
		sys_ppu_thread_exit(0);
	}
	namespace sys {
		void thread::create(ppu_thr_t& id, fnptr<void(u64)> entry, s32 stackSize, ccp name) {
			sys_ppu_thread_create(&id, entry, NULL, 1450, stackSize, SYS_PPU_THREAD_CREATE_JOINABLE, name);
		}
		void thread::join(ppu_thr_t& id, u64& v) {
			sys_ppu_thread_join(id, &v);
		}
		namespace prx {
			int dummy() {
				return SYS_PRX_RESIDENT;
			}
			int start() {
				sys::thread::create(threadId, entry, 0x8000, "FoxySPRX");
				return SYS_PRX_START_OK;
			}
			int stop() {
				uninit();
				u64 v{};
				sys::thread::join(threadId, v);
				return SYS_PRX_STOP_OK;
			}
		}
	}
}