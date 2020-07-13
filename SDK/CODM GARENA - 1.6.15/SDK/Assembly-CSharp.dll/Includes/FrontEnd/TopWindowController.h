#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class TopWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "TopWindowController"));
	}

	template <typename T = uintptr_t> T& m_AnnouncementDataStore() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_ItemEquipLogic() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& kRequestSent() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uint64_t> T& friendDeletePlayerID() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_LogUploader() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& mController() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& m_CardController() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& m_ReturnFromGameFlag() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& m_RoomDS() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& m_SpvpDS() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& m_BrDS() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& m_LocalPlayerDS() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& m_SpvpLadderDS() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& PlayAgainTimeOutClock() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& m_WinnerCircleFlowNavData() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& CurrPlayAgainFlow() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = bool> static T& isCheckingPopupWindows() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& f__am$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& f__am$cache4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckEndAndGotoFrontEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowPlayerProfile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLevelUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyServerErrorView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowBuffDetailWindowView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowMedalsWindowView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowRankView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowLightCommonTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowForbidTalkTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCommonMsgBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNearbyPersonInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterChestDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterChestDelagetes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInTutorial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReceiveChestResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowNewReceiveBoxes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowNewReceiveAllItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckNeedPopDecomposeItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowBattlePassReceiveItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareToShowDecomposeAgingItems_TEST() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowNewReceiveAllItems_TEST() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterFriendDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterFriendDelagetes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendFriendAddRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendFriendBlockRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendFriendUnblockRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFriendBlackResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFriendBlackStrangerResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendFriendDeleteRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFriendDeleteResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFriendChat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FriendOnlineNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFriendAuthoritySetResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyLobbyMapLoadedAndReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAndUploadLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterRoomDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterRoomDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomEnterRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckQuickJoinTeam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQuickJoinTeam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomEnterResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomReconnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomInvitationReceived() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRoomInvitationForceShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckBPAwardPopupShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSeasonRankConversionShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLobbyLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomAnswerInvitationNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyChatQuitRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShowAchievementAndSettlement_TEST() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShowBRExpDetail_TEST() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShowSettlementMedal_TEST() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShowGetDropWindow_TEST() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterSettlementDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterSettlementDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopPlayAgainFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFinishWinnerCircleFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetFinishWinnerCircleInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDownWinnercircleAvatarController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearSettlementActvHp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayAgain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReCreatePvpMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReCreatePvpLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReCreatePvpLadder_Random() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReCreatePvpLadder_Single() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReCreatePvpLadder_Multiple() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReCreateBrLadderMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckToShowWindows() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoCheckToShowWindows() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSettlementValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShowWindows() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CallWhenAllWindowsShowEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShowLevelUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShowDrops() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCloseStoreRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckToStoreRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x164);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckHigherAchievement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShowSpvpLadderAllWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x16C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowLuckyBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(TopWindowController*))(Il2CppBase() + 0x386A908))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(TopWindowController*))(Il2CppBase() + 0x386A9D8))(this);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(TopWindowController*))(Il2CppBase() + 0x386AAE4))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(TopWindowController*))(Il2CppBase() + 0x386B318))(this);
	}
	template <typename T = void> T CheckEndAndGotoFrontEnd() {
		return ((T (*)(TopWindowController*))(Il2CppBase() + 0x386B544))(this);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(TopWindowController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x386C26C))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(TopWindowController*))(Il2CppBase() + 0x386C7A8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(TopWindowController*))(Il2CppBase() + 0x386D768))(this);
	}
	template <typename T = void> T OnShowPlayerProfile(uintptr_t Msg) {
		return ((T (*)(TopWindowController*, uintptr_t))(Il2CppBase() + 0x386DE14))(this, Msg);
	}
	template <typename T = void> T OnNotifyLevelUp(uintptr_t Msg) {
		return ((T (*)(TopWindowController*, uintptr_t))(Il2CppBase() + 0x386E670))(this, Msg);
	}
	template <typename T = void> T OnNotifyServerErrorView(uintptr_t Msg) {
		return ((T (*)(TopWindowController*, uintptr_t))(Il2CppBase() + 0x386E90C))(this, Msg);
	}
	template <typename T = void> T OnShowBuffDetailWindowView(uintptr_t Msg) {
		return ((T (*)(TopWindowController*, uintptr_t))(Il2CppBase() + 0x386EEC4))(this, Msg);
	}
	template <typename T = void> T OnShowMedalsWindowView(uintptr_t Msg) {
		return ((T (*)(TopWindowController*, uintptr_t))(Il2CppBase() + 0x386F008))(this, Msg);
	}
	template <typename T = void> T OnShowRankView(uintptr_t Msg) {
		return ((T (*)(TopWindowController*, uintptr_t))(Il2CppBase() + 0x386F14C))(this, Msg);
	}
	template <typename T = void> T ShowLightCommonTips(uintptr_t Msg) {
		return ((T (*)(TopWindowController*, uintptr_t))(Il2CppBase() + 0x386F4B0))(this, Msg);
	}
	template <typename T = void> T ShowForbidTalkTips(uintptr_t Msg) {
		return ((T (*)(TopWindowController*, uintptr_t))(Il2CppBase() + 0x386F704))(this, Msg);
	}
	template <typename T = void> T ShowCommonMsgBox(uintptr_t Msg) {
		return ((T (*)(TopWindowController*, uintptr_t))(Il2CppBase() + 0x386F940))(this, Msg);
	}
	template <typename T = void> T GetNearbyPersonInfo() {
		return ((T (*)(TopWindowController*))(Il2CppBase() + 0x386FB20))(this);
	}
	template <typename T = void> T RegisterChestDelegates() {
		return ((T (*)(TopWindowController*))(Il2CppBase() + 0x386CF48))(this);
	}
	template <typename T = void> T UnRegisterChestDelagetes() {
		return ((T (*)(TopWindowController*))(Il2CppBase() + 0x386DA90))(this);
	}
	template <typename T = bool> T IsInTutorial() {
		return ((T (*)(TopWindowController*))(Il2CppBase() + 0x386FBE8))(this);
	}
	template <typename T = void> T OnReceiveChestResponse(uintptr_t mesg) {
		return ((T (*)(TopWindowController*, uintptr_t))(Il2CppBase() + 0x386FCB8))(this, mesg);
	}
	template <typename T = void> T OnShowNewReceiveBoxes(uintptr_t Msg) {
		return ((T (*)(TopWindowController*, uintptr_t))(Il2CppBase() + 0x3870038))(this, Msg);
	}
	template <typename T = void> T OnShowNewReceiveAllItems(uintptr_t Msg) {
		return ((T (*)(TopWindowController*, uintptr_t))(Il2CppBase() + 0x3870170))(this, Msg);
	}
	template <typename T = bool> T CheckNeedPopDecomposeItem() {
		return ((T (*)(TopWindowController*))(Il2CppBase() + 0x3870998))(this);
	}
	template <typename T = void> T OnShowBattlePassReceiveItems(uintptr_t Msg) {
		return ((T (*)(TopWindowController*, uintptr_t))(Il2CppBase() + 0x3870B18))(this, Msg);
	}
	template <typename T = void> T PrepareToShowDecomposeAgingItems_TEST() {
		return ((T (*)(TopWindowController*))(Il2CppBase() + 0x3871254))(this);
	}
	template <typename T = void> T OnShowNewReceiveAllItems_TEST() {
		return ((T (*)(TopWindowController*))(Il2CppBase() + 0x38714E4))(this);
	}
	template <typename T = void> T RegisterFriendDelegates() {
		return ((T (*)(TopWindowController*))(Il2CppBase() + 0x386CB80))(this);
	}
	template <typename T = void> T UnRegisterFriendDelagetes() {
		return ((T (*)(TopWindowController*))(Il2CppBase() + 0x386D920))(this);
	}
	template <typename T = void> T SendFriendAddRequest(uintptr_t Msg) {
		return ((T (*)(TopWindowController*, uintptr_t))(Il2CppBase() + 0x38715AC))(this, Msg);
	}
	template <typename T = void> T SendFriendBlockRequest(uintptr_t Msg) {
		return ((T (*)(TopWindowController*, uintptr_t))(Il2CppBase() + 0x38717F8))(this, Msg);
	}
	template <typename T = void> T SendFriendUnblockRequest(uintptr_t Msg) {
		return ((T (*)(TopWindowController*, uintptr_t))(Il2CppBase() + 0x3871A9C))(this, Msg);
	}
	template <typename T = void> T OnFriendBlackResponse(uintptr_t message) {
		return ((T (*)(TopWindowController*, uintptr_t))(Il2CppBase() + 0x3871D38))(this, message);
	}
	template <typename T = void> T OnFriendBlackStrangerResponse(uintptr_t message) {
		return ((T (*)(TopWindowController*, uintptr_t))(Il2CppBase() + 0x3871EEC))(this, message);
	}
	template <typename T = void> T SendFriendDeleteRequest(uintptr_t Msg) {
		return ((T (*)(TopWindowController*, uintptr_t))(Il2CppBase() + 0x38720A0))(this, Msg);
	}
	template <typename T = void> T OnFriendDeleteResponse(uintptr_t message) {
		return ((T (*)(TopWindowController*, uintptr_t))(Il2CppBase() + 0x3872294))(this, message);
	}
	template <typename T = void> T OnFriendChat(uintptr_t message) {
		return ((T (*)(TopWindowController*, uintptr_t))(Il2CppBase() + 0x3872580))(this, message);
	}
	template <typename T = void> T FriendOnlineNotify(uintptr_t Msg) {
		return ((T (*)(TopWindowController*, uintptr_t))(Il2CppBase() + 0x38728E8))(this, Msg);
	}
	template <typename T = void> T OnFriendAuthoritySetResponse(uintptr_t message) {
		return ((T (*)(TopWindowController*, uintptr_t))(Il2CppBase() + 0x3872B84))(this, message);
	}
	template <typename T = void> T NotifyLobbyMapLoadedAndReady() {
		return ((T (*)(TopWindowController*))(Il2CppBase() + 0x386C150))(this);
	}
	template <typename T = void> T CheckAndUploadLog() {
		return ((T (*)(TopWindowController*))(Il2CppBase() + 0x3872D38))(this);
	}
	template <typename T = void> T RegisterRoomDelegates() {
		return ((T (*)(TopWindowController*))(Il2CppBase() + 0x386D438))(this);
	}
	template <typename T = void> T UnRegisterRoomDelegates() {
		return ((T (*)(TopWindowController*))(Il2CppBase() + 0x386DCD4))(this);
	}
	template <typename T = void> T OnRoomEnterRequest(uintptr_t message) {
		return ((T (*)(TopWindowController*, uintptr_t))(Il2CppBase() + 0x3872EB0))(this, message);
	}
	template <typename T = void> T CheckQuickJoinTeam() {
		return ((T (*)(TopWindowController*))(Il2CppBase() + 0x386B240))(this);
	}
	template <typename T = void> T OnQuickJoinTeam(uintptr_t msg) {
		return ((T (*)(TopWindowController*, uintptr_t))(Il2CppBase() + 0x3873244))(this, msg);
	}
	template <typename T = void> T OnRoomEnterResponse(uintptr_t message) {
		return ((T (*)(TopWindowController*, uintptr_t))(Il2CppBase() + 0x3873B10))(this, message);
	}
	template <typename T = void> T OnRoomReconnect(uintptr_t message) {
		return ((T (*)(TopWindowController*, uintptr_t))(Il2CppBase() + 0x386ABD8))(this, message);
	}
	template <typename T = void> T OnRoomInvitationReceived(uintptr_t message) {
		return ((T (*)(TopWindowController*, uintptr_t))(Il2CppBase() + 0x3874478))(this, message);
	}
	template <typename T = bool> T CheckRoomInvitationForceShow() {
		return ((T (*)(TopWindowController*))(Il2CppBase() + 0x3874D94))(this);
	}
	template <typename T = bool> T CheckBPAwardPopupShow() {
		return ((T (*)(TopWindowController*))(Il2CppBase() + 0x38749D0))(this);
	}
	template <typename T = bool> T CheckSeasonRankConversionShow() {
		return ((T (*)(TopWindowController*))(Il2CppBase() + 0x3874B90))(this);
	}
	template <typename T = void> T OnLobbyLoaded(uintptr_t message) {
		return ((T (*)(TopWindowController*, uintptr_t))(Il2CppBase() + 0x3874E6C))(this, message);
	}
	template <typename T = void> T OnRoomAnswerInvitationNotify(uintptr_t message) {
		return ((T (*)(TopWindowController*, uintptr_t))(Il2CppBase() + 0x3874F3C))(this, message);
	}
	template <typename T = void> T OnNotifyChatQuitRoom(uintptr_t Msg) {
		return ((T (*)(TopWindowController*, uintptr_t))(Il2CppBase() + 0x38752E8))(this, Msg);
	}
	template <typename T = void> T CheckShowAchievementAndSettlement_TEST() {
		return ((T (*)(TopWindowController*))(Il2CppBase() + 0x38754C8))(this);
	}
	template <typename T = void> T CheckShowBRExpDetail_TEST() {
		return ((T (*)(TopWindowController*))(Il2CppBase() + 0x3875590))(this);
	}
	template <typename T = void> T CheckShowSettlementMedal_TEST() {
		return ((T (*)(TopWindowController*))(Il2CppBase() + 0x3875658))(this);
	}
	template <typename T = void> T CheckShowGetDropWindow_TEST() {
		return ((T (*)(TopWindowController*))(Il2CppBase() + 0x3875720))(this);
	}
	template <typename T = void> T RegisterSettlementDelegates() {
		return ((T (*)(TopWindowController*))(Il2CppBase() + 0x386D180))(this);
	}
	template <typename T = void> T UnRegisterSettlementDelegates() {
		return ((T (*)(TopWindowController*))(Il2CppBase() + 0x386DBA4))(this);
	}
	template <typename T = uintptr_t> T get_RoomDS() {
		return ((T (*)(TopWindowController*))(Il2CppBase() + 0x38757E8))(this);
	}
	template <typename T = uintptr_t> T get_SpvpDS() {
		return ((T (*)(TopWindowController*))(Il2CppBase() + 0x3875898))(this);
	}
	template <typename T = uintptr_t> T get_BrDS() {
		return ((T (*)(TopWindowController*))(Il2CppBase() + 0x3875948))(this);
	}
	template <typename T = uintptr_t> T get_LocalPlayerDS() {
		return ((T (*)(TopWindowController*))(Il2CppBase() + 0x38759F8))(this);
	}
	template <typename T = uintptr_t> T get_SpvpLadderDS() {
		return ((T (*)(TopWindowController*))(Il2CppBase() + 0x3875AA8))(this);
	}
	template <typename T = void> T StopPlayAgainFlow() {
		return ((T (*)(TopWindowController*))(Il2CppBase() + 0x386B3F8))(this);
	}
	template <typename T = void> T OnFinishWinnerCircleFlow(uintptr_t msg) {
		return ((T (*)(TopWindowController*, uintptr_t))(Il2CppBase() + 0x3875B58))(this, msg);
	}
	template <typename T = void> T ResetFinishWinnerCircleInfo() {
		return ((T (*)(TopWindowController*))(Il2CppBase() + 0x3876074))(this);
	}
	template <typename T = void> T ShutDownWinnercircleAvatarController() {
		return ((T (*)(TopWindowController*))(Il2CppBase() + 0x3875EDC))(this);
	}
	template <typename T = void> T ClearSettlementActvHp() {
		return ((T (*)(TopWindowController*))(Il2CppBase() + 0x3876E3C))(this);
	}
	template <typename T = void> T OnPlayAgain(uintptr_t msgs) {
		return ((T (*)(TopWindowController*, uintptr_t))(Il2CppBase() + 0x3876F58))(this, msgs);
	}
	template <typename T = void> T ReCreatePvpMatch(int32_t serverTime, uintptr_t dateTime, int32_t dayOfWeek) {
		return ((T (*)(TopWindowController*, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x3877DFC))(this, serverTime, dateTime, dayOfWeek);
	}
	template <typename T = void> T ReCreatePvpLadder(int32_t serverTime, uintptr_t dateTime, int32_t dayOfWeek) {
		return ((T (*)(TopWindowController*, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x38782BC))(this, serverTime, dateTime, dayOfWeek);
	}
	template <typename T = void> T ReCreatePvpLadder_Random(int32_t serverTime, uintptr_t dateTime, int32_t dayOfWeek) {
		return ((T (*)(TopWindowController*, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x3878A24))(this, serverTime, dateTime, dayOfWeek);
	}
	template <typename T = void> T ReCreatePvpLadder_Single(int32_t serverTime, uintptr_t dateTime, int32_t dayOfWeek) {
		return ((T (*)(TopWindowController*, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x3878C9C))(this, serverTime, dateTime, dayOfWeek);
	}
	template <typename T = void> T ReCreatePvpLadder_Multiple(int32_t serverTime, uintptr_t dateTime, int32_t dayOfWeek) {
		return ((T (*)(TopWindowController*, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x3878F28))(this, serverTime, dateTime, dayOfWeek);
	}
	template <typename T = void> T ReCreateBrLadderMatch(int32_t serverTime, uintptr_t dateTime, int32_t dayOfWeek) {
		return ((T (*)(TopWindowController*, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x38784CC))(this, serverTime, dateTime, dayOfWeek);
	}
	template <typename T = void> T CheckToShowWindows() {
		return ((T (*)(TopWindowController*))(Il2CppBase() + 0x386B0FC))(this);
	}
	template <typename T = void> T DoCheckToShowWindows(uintptr_t ds) {
		return ((T (*)(TopWindowController*, uintptr_t))(Il2CppBase() + 0x38793B0))(this, ds);
	}
	template <typename T = void> T CheckSettlementValid(uintptr_t msg) {
		return ((T (*)(TopWindowController*, uintptr_t))(Il2CppBase() + 0x3879AF4))(this, msg);
	}
	template <typename T = void> T CheckShowWindows(uintptr_t msg) {
		return ((T (*)(TopWindowController*, uintptr_t))(Il2CppBase() + 0x387951C))(this, msg);
	}
	template <typename T = void> T CallWhenAllWindowsShowEnd(uintptr_t Msg) {
		return ((T (*)(TopWindowController*, uintptr_t))(Il2CppBase() + 0x387BA34))(this, Msg);
	}
	template <typename T = void> T CheckShowLevelUp(uintptr_t* levelUp, uintptr_t* apvpRankUp, uintptr_t* spvpRankUp) {
		return ((T (*)(TopWindowController*, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x387A220))(this, levelUp, apvpRankUp, spvpRankUp);
	}
	template <typename T = bool> T CheckShowDrops() {
		return ((T (*)(TopWindowController*))(Il2CppBase() + 0x387A8C4))(this);
	}
	template <typename T = bool> T IsCloseStoreRate() {
		return ((T (*)(TopWindowController*))(Il2CppBase() + 0x387BBFC))(this);
	}
	template <typename T = bool> T CheckToStoreRate(bool enablePop) {
		return ((T (*)(TopWindowController*, bool))(Il2CppBase() + 0x38761D8))(this, enablePop);
	}
	template <typename T = bool> T CheckHigherAchievement() {
		return ((T (*)(TopWindowController*))(Il2CppBase() + 0x387A0E4))(this);
	}
	template <typename T = void> T CheckShowSpvpLadderAllWindow(uintptr_t* spvpLadderScoreChange, uintptr_t* spvpLadderPlacementMatch, uintptr_t* spvpLadderPlacementResult, uintptr_t* spvpLadderPromitionMatch, uintptr_t* spvpLadderPromitionResult) {
		return ((T (*)(TopWindowController*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x387A394))(this, spvpLadderScoreChange, spvpLadderPlacementMatch, spvpLadderPlacementResult, spvpLadderPromitionMatch, spvpLadderPromitionResult);
	}
	template <typename T = void> T ShowLuckyBag() {
		return ((T (*)(TopWindowController*))(Il2CppBase() + 0x3876D28))(this);
	}
	template <typename T = void> static T CheckEndAndGotoFrontEndm__0() {
		return ((T (*)(void *))(Il2CppBase() + 0x387BD24))(0);
	}
	template <typename T = void> static T CheckEndAndGotoFrontEndm__1() {
		return ((T (*)(void *))(Il2CppBase() + 0x387BE60))(0);
	}
	template <typename T = void> static T CheckEndAndGotoFrontEndm__2() {
		return ((T (*)(void *))(Il2CppBase() + 0x387BF2C))(0);
	}
	template <typename T = void> static T CheckEndAndGotoFrontEndm__3() {
		return ((T (*)(void *))(Il2CppBase() + 0x387BFF8))(0);
	}
	template <typename T = void> static T CheckEndAndGotoFrontEndm__4() {
		return ((T (*)(void *))(Il2CppBase() + 0x387C150))(0);
	}
	template <typename T = void> T OnNotifyLevelUpm__5() {
		return ((T (*)(TopWindowController*))(Il2CppBase() + 0x387C21C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(TopWindowController*))(Il2CppBase() + 0x387C450))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TopWindowController*))(Il2CppBase() + 0x387C458))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(TopWindowController*))(Il2CppBase() + 0x387C460))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(TopWindowController*))(Il2CppBase() + 0x387C468))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(TopWindowController*))(Il2CppBase() + 0x387C470))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(TopWindowController*))(Il2CppBase() + 0x387C478))(this);
	}

};

}
