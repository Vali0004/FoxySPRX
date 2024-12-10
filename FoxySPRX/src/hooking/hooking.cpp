#include "hooking.h"

hooking* g_hooking{};

hooking::hooking() {
	m_handleCloneSync.createHook((u32)pointers::g_handleCloneSync, (u64)&hooks::handleCloneSync);
	m_networkIsSignedOnline.create(0x6E5BDCE2);
}
hooking::~hooking() {
	m_handleCloneSync.removeHook();
	m_networkIsSignedOnline.destroy();
}

void hooking::enable() {
	m_networkIsSignedOnline.enable((u32)hooks::networkIsSignedOnline);
}
void hooking::disable() {
	m_networkIsSignedOnline.disable();
}