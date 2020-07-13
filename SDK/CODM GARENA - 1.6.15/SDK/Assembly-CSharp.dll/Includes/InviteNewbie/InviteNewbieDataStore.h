#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace InviteNewbie {

class InviteNewbieDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "InviteNewbie", "InviteNewbieDataStore"));
	}

	template <typename T = int32_t> T& m_ActivityID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_InviteNewbieActive() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_InviteNewbieActiveAwardCount() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& m_InviteNewbieCode() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_InviteNewbieActiveAwardList() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_InviteNewbieLevelAwardList() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_InviteNewbiePlayerList() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_InviteNewbieBindAwardList() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& m_InviteNewBieStartTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint32_t> T& m_InviteNewBieEndTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_MyInviter() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& m_InviteNewbieCodeLevel() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& m_InviteNewbiePlayerMaxCount() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& m_ShowRewardTips() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& IsJustReceiveBindReward() {
		return *(T*)((uintptr_t)this + 0x41);
	}
	template <typename T = uint64_t> T& MyInviterId() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& m_FromWorldChat() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& m_InviteCodeCopied() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppString*> T& m_LeftPic() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& m_CheckTutorialRedPointFlag() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& m_AwardRedPointFlag() {
		return *(T*)((uintptr_t)this + 0x5D);
	}
	template <typename T = bool> T& m_TutorialRedPointFlag() {
		return *(T*)((uintptr_t)this + 0x5E);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeDataStore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestInvitationInfoReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInvitationInfoResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestInvitationCodeReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInvitationCodeResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestInvitationBindReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInvitationBindResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestInvitationLevelAwardReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInvitationLevelAwardResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestInviteNewbieConf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInviteNewbieTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckInviteNewBieOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMyInviterBindedInCurActivity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInviteNewbiePlayerForShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CompareInviteNewbiePlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSortWeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAwardRedPointFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTutorialRedPointFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCheckTutorialRedPointFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRedPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAwardRedPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCodeRedPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanGetInvitorAward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}

	template <typename T = int32_t> T get_ActivityID() {
		return ((T (*)(InviteNewbieDataStore*))(Il2CppBase() + 0x317F650))(this);
	}
	template <typename T = int32_t> T get_InviteNewbieActive() {
		return ((T (*)(InviteNewbieDataStore*))(Il2CppBase() + 0x317F658))(this);
	}
	template <typename T = int32_t> T get_InviteNewbieActiveAwardCount() {
		return ((T (*)(InviteNewbieDataStore*))(Il2CppBase() + 0x317F660))(this);
	}
	template <typename T = Il2CppString*> T get_InviteNewbieCode() {
		return ((T (*)(InviteNewbieDataStore*))(Il2CppBase() + 0x317F668))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_InviteNewbieActiveAwardList() {
		return ((T (*)(InviteNewbieDataStore*))(Il2CppBase() + 0x317F670))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_InviteNewbieLevelAwardList() {
		return ((T (*)(InviteNewbieDataStore*))(Il2CppBase() + 0x317F678))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_InviteNewbiePlayerList() {
		return ((T (*)(InviteNewbieDataStore*))(Il2CppBase() + 0x317F680))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_InviteNewbieBindAwardList() {
		return ((T (*)(InviteNewbieDataStore*))(Il2CppBase() + 0x317F688))(this);
	}
	template <typename T = uint32_t> T get_InviteNewBieStartTime() {
		return ((T (*)(InviteNewbieDataStore*))(Il2CppBase() + 0x317F690))(this);
	}
	template <typename T = uint32_t> T get_InviteNewBieEndTime() {
		return ((T (*)(InviteNewbieDataStore*))(Il2CppBase() + 0x317F698))(this);
	}
	template <typename T = uintptr_t> T get_MyInviter() {
		return ((T (*)(InviteNewbieDataStore*))(Il2CppBase() + 0x317F6A0))(this);
	}
	template <typename T = int32_t> T get_InviteNewbieCodeLevel() {
		return ((T (*)(InviteNewbieDataStore*))(Il2CppBase() + 0x317F6A8))(this);
	}
	template <typename T = int32_t> T get_InviteNewbiePlayerMaxCount() {
		return ((T (*)(InviteNewbieDataStore*))(Il2CppBase() + 0x317F6B0))(this);
	}
	template <typename T = bool> T get_ShowRewardTips() {
		return ((T (*)(InviteNewbieDataStore*))(Il2CppBase() + 0x317F6B8))(this);
	}
	template <typename T = void> T set_ShowRewardTips(bool value) {
		return ((T (*)(InviteNewbieDataStore*, bool))(Il2CppBase() + 0x317F6C0))(this, value);
	}
	template <typename T = bool> T get_FromWorldChat() {
		return ((T (*)(InviteNewbieDataStore*))(Il2CppBase() + 0x317F6C8))(this);
	}
	template <typename T = void> T set_FromWorldChat(bool value) {
		return ((T (*)(InviteNewbieDataStore*, bool))(Il2CppBase() + 0x317F6D0))(this, value);
	}
	template <typename T = Il2CppString*> T get_InviteCodeCopied() {
		return ((T (*)(InviteNewbieDataStore*))(Il2CppBase() + 0x317F6D8))(this);
	}
	template <typename T = void> T set_InviteCodeCopied(Il2CppString* value) {
		return ((T (*)(InviteNewbieDataStore*, Il2CppString*))(Il2CppBase() + 0x317F6E0))(this, value);
	}
	template <typename T = Il2CppString*> T get_LeftPic() {
		return ((T (*)(InviteNewbieDataStore*))(Il2CppBase() + 0x317F6E8))(this);
	}
	template <typename T = void> T ReLogin() {
		return ((T (*)(InviteNewbieDataStore*))(Il2CppBase() + 0x317F6F0))(this);
	}
	template <typename T = void> T InitializeDataStore() {
		return ((T (*)(InviteNewbieDataStore*))(Il2CppBase() + 0x317F9A8))(this);
	}
	template <typename T = void> T ResetData() {
		return ((T (*)(InviteNewbieDataStore*))(Il2CppBase() + 0x317F794))(this);
	}
	template <typename T = void> T RequestInvitationInfoReq() {
		return ((T (*)(InviteNewbieDataStore*))(Il2CppBase() + 0x317FA58))(this);
	}
	template <typename T = void> T OnInvitationInfoResponse(uintptr_t response) {
		return ((T (*)(InviteNewbieDataStore*, uintptr_t))(Il2CppBase() + 0x317FCBC))(this, response);
	}
	template <typename T = void> T RequestInvitationCodeReq() {
		return ((T (*)(InviteNewbieDataStore*))(Il2CppBase() + 0x3180D3C))(this);
	}
	template <typename T = void> T OnInvitationCodeResponse(uintptr_t response) {
		return ((T (*)(InviteNewbieDataStore*, uintptr_t))(Il2CppBase() + 0x3180E4C))(this, response);
	}
	template <typename T = void> T RequestInvitationBindReq(Il2CppString* code) {
		return ((T (*)(InviteNewbieDataStore*, Il2CppString*))(Il2CppBase() + 0x31815A4))(this, code);
	}
	template <typename T = void> T OnInvitationBindResponse(uintptr_t response) {
		return ((T (*)(InviteNewbieDataStore*, uintptr_t))(Il2CppBase() + 0x31816E0))(this, response);
	}
	template <typename T = void> T RequestInvitationLevelAwardReq(uint64_t playerid) {
		return ((T (*)(InviteNewbieDataStore*, uint64_t))(Il2CppBase() + 0x3181D50))(this, playerid);
	}
	template <typename T = void> T OnInvitationLevelAwardResponse(uintptr_t response) {
		return ((T (*)(InviteNewbieDataStore*, uintptr_t))(Il2CppBase() + 0x3181EB0))(this, response);
	}
	template <typename T = void> T RequestInviteNewbieConf() {
		return ((T (*)(InviteNewbieDataStore*))(Il2CppBase() + 0x318220C))(this);
	}
	template <typename T = void> T SetInviteNewbieTime(uint32_t start_time, uint32_t end_time) {
		return ((T (*)(InviteNewbieDataStore*, uint32_t, uint32_t))(Il2CppBase() + 0x318230C))(this, start_time, end_time);
	}
	template <typename T = bool> T CheckInviteNewBieOpen() {
		return ((T (*)(InviteNewbieDataStore*))(Il2CppBase() + 0x317FB68))(this);
	}
	template <typename T = bool> T IsMyInviterBindedInCurActivity() {
		return ((T (*)(InviteNewbieDataStore*))(Il2CppBase() + 0x31823D0))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetInviteNewbiePlayerForShow() {
		return ((T (*)(InviteNewbieDataStore*))(Il2CppBase() + 0x31824A0))(this);
	}
	template <typename T = int32_t> T CompareInviteNewbiePlayer(uintptr_t a, uintptr_t b) {
		return ((T (*)(InviteNewbieDataStore*, uintptr_t, uintptr_t))(Il2CppBase() + 0x31825D4))(this, a, b);
	}
	template <typename T = int32_t> T GetSortWeight(uintptr_t player) {
		return ((T (*)(InviteNewbieDataStore*, uintptr_t))(Il2CppBase() + 0x3182730))(this, player);
	}
	template <typename T = void> T SetAwardRedPointFlag(bool flag) {
		return ((T (*)(InviteNewbieDataStore*, bool))(Il2CppBase() + 0x31829E0))(this, flag);
	}
	template <typename T = void> T SetTutorialRedPointFlag(bool flag) {
		return ((T (*)(InviteNewbieDataStore*, bool))(Il2CppBase() + 0x3182A9C))(this, flag);
	}
	template <typename T = void> T SetCheckTutorialRedPointFlag(bool flag) {
		return ((T (*)(InviteNewbieDataStore*, bool))(Il2CppBase() + 0x3182B58))(this, flag);
	}
	template <typename T = bool> T CheckRedPoint() {
		return ((T (*)(InviteNewbieDataStore*))(Il2CppBase() + 0x3182C00))(this);
	}
	template <typename T = bool> T CheckAwardRedPoint() {
		return ((T (*)(InviteNewbieDataStore*))(Il2CppBase() + 0x3182DF4))(this);
	}
	template <typename T = bool> T CheckCodeRedPoint() {
		return ((T (*)(InviteNewbieDataStore*))(Il2CppBase() + 0x3183054))(this);
	}
	template <typename T = bool> T CanGetInvitorAward(uintptr_t player) {
		return ((T (*)(InviteNewbieDataStore*, uintptr_t))(Il2CppBase() + 0x3182840))(this, player);
	}
	template <typename T = void> T xLuaBaseProxy_ReLogin() {
		return ((T (*)(InviteNewbieDataStore*))(Il2CppBase() + 0x31830FC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitializeDataStore() {
		return ((T (*)(InviteNewbieDataStore*))(Il2CppBase() + 0x3183104))(this);
	}

};

}
