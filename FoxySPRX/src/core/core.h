#pragma once
#include "include.h"

namespace core {
	extern ppu_thr_t threadId;
	extern void preinit();
	extern void init();
	extern void uninit();
	extern void entry(u64 a);
	namespace sys {
		namespace thread {
			extern void create(ppu_thr_t& id, fnptr<void(u64)> entry, s32 stackSize, ccp name);
			extern void join(ppu_thr_t& id, u64& v);
		}
		namespace prx {
			extern int dummy();
			extern int start();
			extern int stop();
		}
	}
	
}
global bool unload() {
	return !core::sys::prx::stop();
}