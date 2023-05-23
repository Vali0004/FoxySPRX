#include "invoker.h"
#include "common/memory/addresses.h"

invoker g_invoker{};

rage::scrCmd get_handler(rage::scrNativeHash hash) {
	for (rage::scrNativeRegistration* entry = g_registrationTable[hash & 0xFF]; entry; entry = entry->get_next_registration()) {
		for (uint32_t i{}, end{ entry->get_num_entries() }; i < end; ++i) {
			uint32_t entry_hash = entry->get_hash(i);
			if (entry_hash == hash) {
				return entry->m_handlers[i];
			}
		}
	}
	return nullptr;
}

void invoker::begin() {
	m_context.reset();
}
void invoker::end(rage::scrNativeHash hash) {
	rage::scrCmd cmd{ get_handler(hash) };
	if (!cmd) {
		return;
	}
	cmd(&m_context);
}