#include "hooking/hooking.h"

ccp getGamerTagFromCNetGamePlayer(u64* netGamePlayer) {
	if (!netGamePlayer) {
		return "Someone";
	}
	u64* playerInfo{ (u64*)netGamePlayer[0x78] };
	if (!playerInfo) {
		return "Someone";
	}
	return (ccp)(playerInfo[0x10]);
}
u32 hooks::handleCloneSync(u64* _This, u64* sender, u64* receiver, u16 syncType, u32 objectId, u64 syncData, u32 sequenceId, s32 timestamp) {
	u64 syncTree{ memory::call<u64>((u32)pointers::g_getSyncTreeForType, _This, syncType) };
	if (!syncTree) {
		if (sender) {
			ccp senderName{ getGamerTagFromCNetGamePlayer(sender) };
			g_logger.send("Session", "%s tried to freeze you.", senderName);
			NETWORK::NETWORK_SESSION_KICK_PLAYER((u8)sender[0x29]);
		}
	}
	RET_CALL(handleCloneSync, _This, sender, receiver, syncType, objectId, syncData, sequenceId, timestamp);
}