#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomBaseController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomBaseController"));
	}

	template <typename T = uintptr_t> T& m_BaseView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& m_IsQuitShow() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_MessageBoxCtr() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_RefreshTimer() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& m_RoomArrayIndex() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_MatchServiceType() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& m_bWithFriendsTip() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& m_MinPlayerNum() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_PlaylistTimer() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uint32_t> T& m_LastRoomId() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& m_ObserverCtr() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& m_ChatBroadCastCtr() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& m_LobbyVoiceCtr() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& m_RoomInviteMoreCtr() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& m_RoomInviteLessCtr() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& m_FacePicturePopupCtr() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& m_SettingCtr() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppVector3> static T& EnableSafeBoxMapDownloadAndSoldierReturnPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppVector3> static T& DisableSafeBoxMapDownloadAndSoldierReturnPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> T& m_RoomDS() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_FriendDS() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_LoadoutReddotDS() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& m_HasMicWindowShowed() {
		return *(T*)((uintptr_t)this + 0x8C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshPlaylist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBubble() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleDataStoreUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__HandleRoomDataStore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleRoomSettingChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleRoomMemberChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleRoomMatchServiceChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleRoomDataStore_Virtual() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleRoomBtnReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HidePlaylist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryToEnterVoiceRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyTimeoutItemUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyNotTurnOnMic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMergeCodLiveOpsActivityDescFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOpenAnimatorName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNeedSetWithFriendsTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFriendOnline() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadWithFriendsInfoLocal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshWithFriendsTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeTopBarBackCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBackBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyCloseSpvpPlaylist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RunCloseSpvpPlaylistAnimator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyCloseSpvpPlaylistDetail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyOpenSpvpPlaylistDetail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyRoomBasePopupFace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyRoomBaseCloseFace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FakeRefreshPlaylistAnimator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenSpvpPlaylistDetail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RunCloseSpvpPlaylistDetailAnimator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsOtherPlayersInRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQuitRoomCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseNavigation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitRoomUIToDefault() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNeedVoice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowChatBroadCast() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowLobbyVoice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeRoomUIState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitRoomInviteView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckMicWindowShouldShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLadderType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowQuitConfirmWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnPlayClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCheckLobbyRESFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLadderMapNotDownloadQuestIDS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginPlayEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnPlayBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveLastMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnLoadoutClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnPlaylistClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnBubbleClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSoldierReturnBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnReadyClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnCancelReadyClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeToPvpLoadout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeToBrLoadout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeToPveLoadout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnInviteMoreClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_OnPlayBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyFriendPanelDrawed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyFriendPanelExtended() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowObserversView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryChangeSeat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendGameStartRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTopBarShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__HandleFriendDataStore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBrMemberSetting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRestrictPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlaylistInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitSoldierReturnAndDownloadPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetSoldierReturnActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RepositionMapDownloadAndSoldierReturnTable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x164);
	}

	template <typename T = uintptr_t> T get_RoomDS() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CE26AC))(this);
	}
	template <typename T = uintptr_t> T get_FriendDS() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CE275C))(this);
	}
	template <typename T = uintptr_t> T get_LoadoutReddotDS() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CE280C))(this);
	}
	template <typename T = uintptr_t> T get_RelationInvitationDS() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CE28BC))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CE2958))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CE2A28))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CE2EA0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CE38EC))(this);
	}
	template <typename T = void> T RefreshRoom() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CE3F60))(this);
	}
	template <typename T = void> T RefreshPlaylist() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CE4460))(this);
	}
	template <typename T = void> T RefreshBubble() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CE4540))(this);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(RoomBaseController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x2CE4608))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T HandleDataStoreUpdate(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(RoomBaseController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x2CE4720))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T _HandleRoomDataStore(bool bPre) {
		return ((T (*)(RoomBaseController*, bool))(Il2CppBase() + 0x2CE4038))(this, bPre);
	}
	template <typename T = void> T HandleRoomSettingChange() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CE4A18))(this);
	}
	template <typename T = void> T HandleRoomMemberChange() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CE4B84))(this);
	}
	template <typename T = void> T HandleRoomMatchServiceChange() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CE5484))(this);
	}
	template <typename T = void> T HandleRoomDataStore_Virtual() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CE554C))(this);
	}
	template <typename T = void> T HandleRoomBtnReddot() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CE5BEC))(this);
	}
	template <typename T = void> T HidePlaylist() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CE5D94))(this);
	}
	template <typename T = void> T TryToEnterVoiceRoom() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CE5E5C))(this);
	}
	template <typename T = void> T OnNotifyTimeoutItemUpdate(uintptr_t message) {
		return ((T (*)(RoomBaseController*, uintptr_t))(Il2CppBase() + 0x2CE6208))(this, message);
	}
	template <typename T = void> T OnNotifyNotTurnOnMic(uintptr_t message) {
		return ((T (*)(RoomBaseController*, uintptr_t))(Il2CppBase() + 0x2CE62F0))(this, message);
	}
	template <typename T = void> T OnMergeCodLiveOpsActivityDescFinish(uintptr_t message) {
		return ((T (*)(RoomBaseController*, uintptr_t))(Il2CppBase() + 0x2CE6630))(this, message);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CE6920))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CE7084))(this);
	}
	template <typename T = Il2CppString*> T GetOpenAnimatorName() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CE71C0))(this);
	}
	template <typename T = bool> T IsNeedSetWithFriendsTip() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CE72E0))(this);
	}
	template <typename T = bool> T IsFriendOnline() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CE7420))(this);
	}
	template <typename T = void> T ReadWithFriendsInfoLocal() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CE7510))(this);
	}
	template <typename T = void> T RefreshWithFriendsTip() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CE52A4))(this);
	}
	template <typename T = void> T ChangeTopBarBackCallback() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CE75D8))(this);
	}
	template <typename T = void> T OnBackBtnClick(uintptr_t Msg) {
		return ((T (*)(RoomBaseController*, uintptr_t))(Il2CppBase() + 0x2CE7798))(this, Msg);
	}
	template <typename T = void> T OnNotifyCloseSpvpPlaylist(uintptr_t message) {
		return ((T (*)(RoomBaseController*, uintptr_t))(Il2CppBase() + 0x2CE7B2C))(this, message);
	}
	template <typename T = void> T RunCloseSpvpPlaylistAnimator() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CE7C14))(this);
	}
	template <typename T = void> T OnNotifyCloseSpvpPlaylistDetail(uintptr_t message) {
		return ((T (*)(RoomBaseController*, uintptr_t))(Il2CppBase() + 0x2CE7CDC))(this, message);
	}
	template <typename T = void> T OnNotifyOpenSpvpPlaylistDetail(uintptr_t message) {
		return ((T (*)(RoomBaseController*, uintptr_t))(Il2CppBase() + 0x2CE7DC4))(this, message);
	}
	template <typename T = void> T OnNotifyRoomBasePopupFace(uintptr_t message) {
		return ((T (*)(RoomBaseController*, uintptr_t))(Il2CppBase() + 0x2CE7F28))(this, message);
	}
	template <typename T = void> T OnNotifyRoomBaseCloseFace(uintptr_t message) {
		return ((T (*)(RoomBaseController*, uintptr_t))(Il2CppBase() + 0x2CE8C48))(this, message);
	}
	template <typename T = void> T FakeRefreshPlaylistAnimator() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CE89F4))(this);
	}
	template <typename T = void> T OpenSpvpPlaylistDetail(int32_t detailType) {
		return ((T (*)(RoomBaseController*, int32_t))(Il2CppBase() + 0x2CE8D5C))(this, detailType);
	}
	template <typename T = void> T RunCloseSpvpPlaylistDetailAnimator() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CE8E2C))(this);
	}
	template <typename T = bool> T IsOtherPlayersInRoom() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CE8EF4))(this);
	}
	template <typename T = void> T OnQuitRoomCallback(uintptr_t result, int32_t userContext) {
		return ((T (*)(RoomBaseController*, uintptr_t, int32_t))(Il2CppBase() + 0x2CE9160))(this, result, userContext);
	}
	template <typename T = void> T CloseNavigation() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CE7994))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CE9260))(this);
	}
	template <typename T = void> T InitRoomUIToDefault(bool bPreCreate) {
		return ((T (*)(RoomBaseController*, bool))(Il2CppBase() + 0x2CE934C))(this, bPreCreate);
	}
	template <typename T = void> T CreateComponent() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CE95B4))(this);
	}
	template <typename T = bool> T IsNeedVoice() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CE99B4))(this);
	}
	template <typename T = void> T ShowChatBroadCast() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CE9A84))(this);
	}
	template <typename T = void> T ShowLobbyVoice() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CE9730))(this);
	}
	template <typename T = void> T ChangeRoomUIState(uintptr_t state) {
		return ((T (*)(RoomBaseController*, uintptr_t))(Il2CppBase() + 0x2CE9CCC))(this, state);
	}
	template <typename T = void> T InitRoomInviteView() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CEA0C0))(this);
	}
	template <typename T = void> T CheckMicWindowShouldShow() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CE5A04))(this);
	}
	template <typename T = uintptr_t> T GetLadderType() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CEA324))(this);
	}
	template <typename T = void> T CloseRoom() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CEA3F4))(this);
	}
	template <typename T = void> T ShowQuitConfirmWindow() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CEA4C8))(this);
	}
	template <typename T = void> T OnBtnPlayClick() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CEAA04))(this);
	}
	template <typename T = void> T OnCheckLobbyRESFinish(uintptr_t result, int32_t userContext) {
		return ((T (*)(RoomBaseController*, uintptr_t, int32_t))(Il2CppBase() + 0x2CEB5F8))(this, result, userContext);
	}
	template <typename T = Il2CppList<int32_t>*> T GetLadderMapNotDownloadQuestIDS() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CEAD30))(this);
	}
	template <typename T = void> T BeginPlayEvent() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CEB2D0))(this);
	}
	template <typename T = void> T _OnPlayBtnClick(uintptr_t result, int32_t userContext) {
		return ((T (*)(RoomBaseController*, uintptr_t, int32_t))(Il2CppBase() + 0x2CEB908))(this, result, userContext);
	}
	template <typename T = void> T SaveLastMode() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CEBF64))(this);
	}
	template <typename T = void> T OnBtnLoadoutClick() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CEC50C))(this);
	}
	template <typename T = void> T OnBtnPlaylistClick() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CEC5D4))(this);
	}
	template <typename T = void> T OnBtnBubbleClick() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CEC69C))(this);
	}
	template <typename T = void> T OnSoldierReturnBtnClicked() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CEC764))(this);
	}
	template <typename T = void> T OnBtnReadyClick() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CEC91C))(this);
	}
	template <typename T = void> T OnBtnCancelReadyClick() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CECA74))(this);
	}
	template <typename T = void> T ChangeToPvpLoadout() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CECBCC))(this);
	}
	template <typename T = void> T ChangeToBrLoadout() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CECD0C))(this);
	}
	template <typename T = void> T ChangeToPveLoadout() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CECE4C))(this);
	}
	template <typename T = void> T OnBtnInviteMoreClick() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CECF8C))(this);
	}
	template <typename T = void> T T_OnPlayBtnClick() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CEBDA0))(this);
	}
	template <typename T = void> T OnNotifyFriendPanelDrawed(uintptr_t message) {
		return ((T (*)(RoomBaseController*, uintptr_t))(Il2CppBase() + 0x2CED230))(this, message);
	}
	template <typename T = void> T OnNotifyFriendPanelExtended(uintptr_t message) {
		return ((T (*)(RoomBaseController*, uintptr_t))(Il2CppBase() + 0x2CED36C))(this, message);
	}
	template <typename T = void> T ShowObserversView(bool enableSpectating) {
		return ((T (*)(RoomBaseController*, bool))(Il2CppBase() + 0x2CED678))(this, enableSpectating);
	}
	template <typename T = void> T TryChangeSeat(uintptr_t message) {
		return ((T (*)(RoomBaseController*, uintptr_t))(Il2CppBase() + 0x2CED748))(this, message);
	}
	template <typename T = void> T SendGameStartRequest() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CEBC68))(this);
	}
	template <typename T = void> T OnTopBarShow(uintptr_t Msg) {
		return ((T (*)(RoomBaseController*, uintptr_t))(Il2CppBase() + 0x2CEDEE4))(this, Msg);
	}
	template <typename T = void> T _HandleFriendDataStore() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CEE0AC))(this);
	}
	template <typename T = void> T OnNotifyBrMemberSetting(uintptr_t msg) {
		return ((T (*)(RoomBaseController*, uintptr_t))(Il2CppBase() + 0x2CEE308))(this, msg);
	}
	template <typename T = void> T GetRestrictPosition(uintptr_t topLeftVec, uintptr_t topRightVec, uintptr_t bottomLeftVec, uintptr_t bottomRightVec) {
		return ((T (*)(RoomBaseController*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2CEEAA0))(this, topLeftVec, topRightVec, bottomLeftVec, bottomRightVec);
	}
	template <typename T = void> T SetPlaylistInfo() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CEEB90))(this);
	}
	template <typename T = void> T InitSoldierReturnAndDownloadPosition() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CEED50))(this);
	}
	template <typename T = void> T ResetSoldierReturnActive() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CE670C))(this);
	}
	template <typename T = void> T RepositionMapDownloadAndSoldierReturnTable() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CEEFB0))(this);
	}
	template <typename T = void> T ShowQuitConfirmWindowm__0(uintptr_t result, int32_t userContext) {
		return ((T (*)(RoomBaseController*, uintptr_t, int32_t))(Il2CppBase() + 0x2CEF268))(this, result, userContext);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CEF3EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CEF3F4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CEF3FC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CEF404))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CEF40C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CEF414))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(RoomBaseController*))(Il2CppBase() + 0x2CEF41C))(this);
	}

};

}
