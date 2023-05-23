#include "native.h"
#include "rage/natives/invoker/invoker.h"

void nativeHook::create(uint32_t native) {
	address = (uint32_t)get_handler(native);
	toc = read<uint32_t>(4);
}
void nativeHook::destroy() {
	if (enabled) {
		disable();
	}
	address = NULL;
	toc = NULL;
	opd = NULL;
}

void nativeHook::enable(uint32_t replacementAddr) {
	enabled = true;
	opd = read<uint64_t>();
	set<uint64_t>(*(uint64_t*)(replacementAddr));
}
void nativeHook::disable() {
	enabled = false;
	set(opd);
}