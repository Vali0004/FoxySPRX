#include "hooking.h"

hooking* g_hooking{};

hooking::hooking() {
	m_networkIsSignedOnline.create(0x6E5BDCE2);
}
hooking::~hooking() {
	m_networkIsSignedOnline.destroy();
}

void hooking::enable() {
	m_networkIsSignedOnline.enable((uint32_t)hooks::networkIsSignedOnline);
}
void hooking::disable() {
	m_networkIsSignedOnline.disable();
}