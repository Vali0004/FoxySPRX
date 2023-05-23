#include "core/core.h"
#include "common/memory/addresses.h"
#include "rage/natives/invoker/invoker.h"
#include "hooking/hooking.h"
#include "logger/logger.h"
#include "ui/manager/manager.h"

void createAddressTable() {
	g_addresses.add("RT", SHIFT_ADDRESS(0x1DC7FB0));
	g_logger.send("Debug", "Address to RT: 0x%llX", g_addresses.get("RT"));
}
void setPointers() {
	g_registrationTable = g_addresses.ptr<rage::scrNativeRegistration**>("RT");
}
namespace core {
	ppu_thr_t threadId{ SYS_PPU_THREAD_ID_INVALID };
	void preinit() {
		g_logger.create("log.txt");
		createAddressTable();
		setPointers();
	}
	void init() {
		g_hooking = new hooking();
		g_hooking->enable();
	}
	void uninit() {
		g_hooking->disable();
		delete g_hooking;
		g_addresses.destory();
		gui::g_menus.clear();
	}
	void entry(u64 a) {
		preinit();
		SLEEP(35);
		init();
		sys_ppu_thread_exit(0);
	}
	namespace sys {
		void thread::create(ppu_thr_t& id, fnptr<void(u64)> entry, s32 stackSize, ccp name) {
			sys_ppu_thread_create(&id, entry, NULL, 1450, stackSize * 5, SYS_PPU_THREAD_CREATE_JOINABLE, name);
		}
		void thread::join(ppu_thr_t& id, u64& v) {
			sys_ppu_thread_join(id, &v);
		}
		namespace prx {
			int dummy() {
				return SYS_PRX_RESIDENT;
			}
			int start() {
				sys::thread::create(threadId, entry, 4096, "FoxySPRX");
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