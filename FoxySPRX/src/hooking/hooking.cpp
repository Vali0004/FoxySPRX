#include "hooking.h"

hooking* g_hooking{};

hooking::hooking() {
	m_handleCloneSync.createHook((u32)pointers::g_handleCloneSync, (u64)&hooks::handleCloneSync);
	m_networkIsSignedOnline.create(0x6E5BDCE2);
	m_getControlValue.create(0xC526F3C6);
	m_getControlNormal.create(0x5DE226A5);
	m_getDisabledControlNormal.create(0xC49343BB);
	m_getDisabledControlUnboundNormal.create(0xF2A65A4C);
	//m_networkIsSignedIn.create(0xADD0B40F);
	m_networkAreSocialClubPoliciesCurrent.create(0x358D1D77);
	m_networkHaveCommunicationPrivileges.create(0x2D817A5E);
	m_scProfanityGetCheckIsPending.create(0xA796D7A7);
	m_scProfanityGetCheckIsValid.create(0xFFED3676);
	m_scProfanityGetStringStatus.create(0x4D8A6521);
	//m_areOnlinePoliciesUpToDate.create(0x850690FF);
	//m_forceCloudMpStatsDownloadAndOverwriteLocalSave.create(0x3B4EF322);
	//m_dlcCheckCloudDataCorrect.create(0x881B1FDB);
}
hooking::~hooking() {
	m_handleCloneSync.removeHook();
	m_networkIsSignedOnline.destroy();
	m_getControlValue.destroy();
	m_getControlNormal.destroy();
	m_getDisabledControlNormal.destroy();
	m_getDisabledControlUnboundNormal.destroy();
	//m_networkIsSignedIn.destroy();
	m_networkAreSocialClubPoliciesCurrent.destroy();
	m_networkHaveCommunicationPrivileges.destroy();
	m_scProfanityGetCheckIsPending.destroy();
	m_scProfanityGetCheckIsValid.destroy();
	m_scProfanityGetStringStatus.destroy();
	//m_areOnlinePoliciesUpToDate.destroy();
	//m_forceCloudMpStatsDownloadAndOverwriteLocalSave.destroy();
	//m_dlcCheckCloudDataCorrect.destroy();
}

void hooking::enable() {
	m_networkIsSignedOnline.enable((u32)hooks::networkIsSignedOnline);
	m_getControlValue.enable((u32)hooks::getControlValue);
	m_getControlNormal.enable((u32)hooks::getControlNormal);
	m_getDisabledControlNormal.enable((u32)hooks::getDisabledControlNormal);
	m_getDisabledControlUnboundNormal.enable((u32)hooks::getDisabledControlUnboundNormal);
	//m_networkIsSignedIn.enable((u32)hooks::networkIsSignedIn);
	m_networkAreSocialClubPoliciesCurrent.enable((u32)hooks::networkAreSocialClubPoliciesCurrent);
	m_networkHaveCommunicationPrivileges.enable((u32)hooks::networkHaveCommunicationPrivileges);
	m_scProfanityGetCheckIsPending.enable((u32)hooks::scProfanityGetCheckIsPending);
	m_scProfanityGetCheckIsValid.enable((u32)hooks::scProfanityGetCheckIsValid);
	m_scProfanityGetStringStatus.enable((u32)hooks::scProfanityGetStringStatus);
	//m_areOnlinePoliciesUpToDate.enable((u32)hooks::areOnlinePoliciesUpToDate);
	//m_forceCloudMpStatsDownloadAndOverwriteLocalSave.enable((u32)hooks::forceCloudMpStatsDownloadAndOverwriteLocalSave);
	//m_dlcCheckCloudDataCorrect.enable((u32)hooks::dlcCheckCloudDataCorrect);
}
void hooking::disable() {
	m_networkIsSignedOnline.disable();
	m_getControlValue.disable();
	m_getControlNormal.disable();
	m_getDisabledControlNormal.disable();
	m_getDisabledControlUnboundNormal.disable();
	//m_networkIsSignedIn.disable();
	m_networkAreSocialClubPoliciesCurrent.disable();
	m_networkHaveCommunicationPrivileges.disable();
	m_scProfanityGetCheckIsPending.disable();
	m_scProfanityGetCheckIsValid.disable();
	m_scProfanityGetStringStatus.disable();
	//m_areOnlinePoliciesUpToDate.disable();
	//m_forceCloudMpStatsDownloadAndOverwriteLocalSave.disable();
	//m_dlcCheckCloudDataCorrect.disable();
}