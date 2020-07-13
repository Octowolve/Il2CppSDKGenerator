#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class RoomBRLadderController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "RoomBRLadderController"));
	}

	template <typename T = bool> T& m_FirstEnterBRLobby() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& RankMatchTimer() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = bool> T& bLadderTime() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& m_cpSafeBoxThumbnailCtr() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& m_BrLadderDS() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& lastInvatation() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& clickEntrance() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& downloadBtnTimer() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_RoomBRRankController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_HighlightFPSTPSToggles() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOpenAnimatorName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRankInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleRoomBtnReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateDeviceWarning() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetDeviceWarning() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTutorialBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPrototypeBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAIPlaygroundBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnIsolatedBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnPlayClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAutoFillEmptyClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAutoFillSelectClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLadderStatBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Create20vs20() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCreateRoomBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnCreate20vs20Click() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnSniperChallengeClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleDataStoreUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleRoomDataStore_Virtual() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSetting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomFull() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConfirmRoomFull() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InviteFriendAgain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTestBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TestShowAllAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnLoadoutClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpdateReddotDate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpdateDeviceWarning() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEAvatarViewType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLadderType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBpTaskTipsBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBattlePassEntrance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEventRewardTipsBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetActivityRewardNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMatchServiceList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleRoomSettingChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadWithFriendsInfoLocal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAutoFillShown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBubbleShown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartCheckDownloadState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshDownloadBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshGenericBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshDynamicBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDynamicDownloadBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}

	template <typename T = void> T T_RoomBRRankController() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D69240))(this);
	}
	template <typename T = void> T T_HighlightFPSTPSToggles(uintptr_t Msg) {
		return ((T (*)(RoomBRLadderController*, uintptr_t))(Il2CppBase() + 0x3D69444))(this, Msg);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D69664))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D69708))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D69B38))(this);
	}
	template <typename T = uintptr_t> T get_BrLadderDS() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D6A3AC))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D6A45C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D6ACD4))(this);
	}
	template <typename T = bool> T IsShowAvatar() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D6B3C8))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D6B468))(this);
	}
	template <typename T = Il2CppString*> T GetOpenAnimatorName() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D6BEB8))(this);
	}
	template <typename T = void> T SetRankInfo() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D6B550))(this);
	}
	template <typename T = void> T HandleRoomBtnReddot() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D6C82C))(this);
	}
	template <typename T = void> T UpdateDeviceWarning() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D6BA10))(this);
	}
	template <typename T = void> T ResetDeviceWarning() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D6C9A8))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D6CB44))(this);
	}
	template <typename T = void> T OnTutorialBtnClick() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D6CBF4))(this);
	}
	template <typename T = void> T OnPrototypeBtnClick() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D6CCE4))(this);
	}
	template <typename T = void> T OnAIPlaygroundBtnClick() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D6CFD0))(this);
	}
	template <typename T = void> T OnIsolatedBtnClick() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D6D2BC))(this);
	}
	template <typename T = void> T OnBtnPlayClick() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D6D5A8))(this);
	}
	template <typename T = void> T OnAutoFillEmptyClick() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D6D650))(this);
	}
	template <typename T = void> T OnAutoFillSelectClick() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D6D938))(this);
	}
	template <typename T = void> T OnLadderStatBtnClick() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D6DCE0))(this);
	}
	template <typename T = void> T CreateRoom(uintptr_t result, int32_t userContext) {
		return ((T (*)(RoomBRLadderController*, uintptr_t, int32_t))(Il2CppBase() + 0x3D6E1D8))(this, result, userContext);
	}
	template <typename T = void> T Create20vs20(uintptr_t result, int32_t userContext) {
		return ((T (*)(RoomBRLadderController*, uintptr_t, int32_t))(Il2CppBase() + 0x3D6E420))(this, result, userContext);
	}
	template <typename T = void> T OnCreateRoomBtnClick() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D6E668))(this);
	}
	template <typename T = void> T OnBtnCreate20vs20Click() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D6E928))(this);
	}
	template <typename T = void> T OnBtnSniperChallengeClick() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D6EBE8))(this);
	}
	template <typename T = void> T HandleDataStoreUpdate(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(RoomBRLadderController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x3D6EC80))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T HandleRoomDataStore_Virtual() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D6EF6C))(this);
	}
	template <typename T = void> T SetSetting() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D6EDE8))(this);
	}
	template <typename T = void> T OnRoomFull(uintptr_t Msg) {
		return ((T (*)(RoomBRLadderController*, uintptr_t))(Il2CppBase() + 0x3D6F23C))(this, Msg);
	}
	template <typename T = void> T OnConfirmRoomFull(uintptr_t result, int32_t userContext) {
		return ((T (*)(RoomBRLadderController*, uintptr_t, int32_t))(Il2CppBase() + 0x3D6F630))(this, result, userContext);
	}
	template <typename T = void> T InviteFriendAgain() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D6FB50))(this);
	}
	template <typename T = void> T OnTestBtnClick() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D6FCD4))(this);
	}
	template <typename T = void> T TestShowAllAvatar() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D6FD78))(this);
	}
	template <typename T = void> T OnBtnLoadoutClick() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D6FEE0))(this);
	}
	template <typename T = void> T OnUpdateReddotDate(uintptr_t obj) {
		return ((T (*)(RoomBRLadderController*, uintptr_t))(Il2CppBase() + 0x3D70070))(this, obj);
	}
	template <typename T = void> T OnUpdateDeviceWarning(uintptr_t msg) {
		return ((T (*)(RoomBRLadderController*, uintptr_t))(Il2CppBase() + 0x3D70128))(this, msg);
	}
	template <typename T = uintptr_t> T GetEAvatarViewType() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D701D4))(this);
	}
	template <typename T = uintptr_t> T GetLadderType() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D70274))(this);
	}
	template <typename T = void> T OnBpTaskTipsBtnClick() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D70314))(this);
	}
	template <typename T = void> T UpdateBattlePassEntrance() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D6B608))(this);
	}
	template <typename T = void> T OnEventRewardTipsBtnClick() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D7088C))(this);
	}
	template <typename T = void> T GetActivityRewardNum() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D6BC90))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T GetMatchServiceList() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D70CEC))(this);
	}
	template <typename T = void> T HandleRoomSettingChange() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D70E14))(this);
	}
	template <typename T = void> T ReadWithFriendsInfoLocal() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D710AC))(this);
	}
	template <typename T = bool> T IsAutoFillShown() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D71170))(this);
	}
	template <typename T = bool> T IsBubbleShown() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D71234))(this);
	}
	template <typename T = void> T StartCheckDownloadState() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D6A284))(this);
	}
	template <typename T = void> T RefreshDownloadBtnState() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D6A16C))(this);
	}
	template <typename T = void> T RefreshGenericBtnState() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D712F8))(this);
	}
	template <typename T = void> T RefreshDynamicBtnState() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D71998))(this);
	}
	template <typename T = void> T OnDynamicDownloadBtnClick() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D71F78))(this);
	}
	template <typename T = void> T T_HighlightFPSTPSTogglesm__0() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D72258))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D72340))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D72348))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D72350))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D72358))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D72360))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsShowAvatar() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D72368))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D72370))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetOpenAnimatorName() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D72378))(this);
	}
	template <typename T = void> T xLuaBaseProxy_HandleRoomBtnReddot() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D72380))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D72388))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnBtnPlayClick() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D72390))(this);
	}
	template <typename T = void> T xLuaBaseProxy_HandleDataStoreUpdate(uintptr_t P0, Il2CppString* P1, int32_t P2) {
		return ((T (*)(RoomBRLadderController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x3D72398))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_HandleRoomDataStore_Virtual() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D723B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnBtnLoadoutClick() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D723C0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetEAvatarViewType() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D723C8))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetLadderType() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D723D0))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T xLuaBaseProxy_GetMatchServiceList() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D723D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_HandleRoomSettingChange() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D723E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ReadWithFriendsInfoLocal() {
		return ((T (*)(RoomBRLadderController*))(Il2CppBase() + 0x3D723E8))(this);
	}

};

}
