#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomSniperChallengeController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomSniperChallengeController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uint64_t> T& m_SelectPlayerId() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& m_MatchType() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& m_bAnchorRight() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& m_AdpatTimer() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& m_SingleCtr() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& m_DoubleCtr() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& m_SquadCtr() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppList<int32_t>*> T& m_MapList() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& m_BrModeMapDS() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNeedVoice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleRoomBtnReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeRoomUIState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowObserversView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsOtherPlayersInRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleRoomSettingChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshSettingInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMemberListByMatchType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleRoomMemberChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshPlayerList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleRoomDataStore_Virtual() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncRoomSettingWithDataStore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncRoomPassword() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnPasswordClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_Room_IRoomInfoSelectorController_En_DidSelect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_Room_IRoomInfoSelectorController_En_Expand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_Room_IRoomInfoSelectorDataSource_En_CellNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_Room_IRoomInfoSelectorDataSource_En_CellHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_Room_IRoomInfoSelectorDataSource_En_CellData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_Room_IRoomInfoSelectorDataSource_En_OuterGlowHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnOneClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnTwoClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnFourClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangePlayerNumPerTeam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnFppClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnTppClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnMoreClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnRecuritClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSelectPlayerId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnLoadoutClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}

	template <typename T = uintptr_t> T get_BrModeMapDS() {
		return ((T (*)(RoomSniperChallengeController*))(Il2CppBase() + 0x2102D14))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(RoomSniperChallengeController*))(Il2CppBase() + 0x2102DC4))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(RoomSniperChallengeController*))(Il2CppBase() + 0x2103020))(this);
	}
	template <typename T = bool> T IsNeedVoice() {
		return ((T (*)(RoomSniperChallengeController*))(Il2CppBase() + 0x21030C4))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(RoomSniperChallengeController*))(Il2CppBase() + 0x2103164))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(RoomSniperChallengeController*))(Il2CppBase() + 0x2103514))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(RoomSniperChallengeController*))(Il2CppBase() + 0x2103884))(this);
	}
	template <typename T = void> T HandleRoomBtnReddot() {
		return ((T (*)(RoomSniperChallengeController*))(Il2CppBase() + 0x2103B40))(this);
	}
	template <typename T = void> T ChangeRoomUIState(uintptr_t state) {
		return ((T (*)(RoomSniperChallengeController*, uintptr_t))(Il2CppBase() + 0x2103C64))(this, state);
	}
	template <typename T = void> T ShowObserversView(bool enableSpectating) {
		return ((T (*)(RoomSniperChallengeController*, bool))(Il2CppBase() + 0x2103E7C))(this, enableSpectating);
	}
	template <typename T = bool> T IsOtherPlayersInRoom() {
		return ((T (*)(RoomSniperChallengeController*))(Il2CppBase() + 0x2103FE0))(this);
	}
	template <typename T = void> T CloseRoom() {
		return ((T (*)(RoomSniperChallengeController*))(Il2CppBase() + 0x21040E4))(this);
	}
	template <typename T = void> T HandleRoomSettingChange() {
		return ((T (*)(RoomSniperChallengeController*))(Il2CppBase() + 0x210426C))(this);
	}
	template <typename T = void> T RefreshSettingInfo() {
		return ((T (*)(RoomSniperChallengeController*))(Il2CppBase() + 0x2104914))(this);
	}
	template <typename T = void> T SetMemberListByMatchType() {
		return ((T (*)(RoomSniperChallengeController*))(Il2CppBase() + 0x2104360))(this);
	}
	template <typename T = void> T HandleRoomMemberChange() {
		return ((T (*)(RoomSniperChallengeController*))(Il2CppBase() + 0x2104C60))(this);
	}
	template <typename T = void> T RefreshPlayerList() {
		return ((T (*)(RoomSniperChallengeController*))(Il2CppBase() + 0x2104814))(this);
	}
	template <typename T = void> T HandleRoomDataStore_Virtual() {
		return ((T (*)(RoomSniperChallengeController*))(Il2CppBase() + 0x2104D24))(this);
	}
	template <typename T = void> T SyncRoomSettingWithDataStore() {
		return ((T (*)(RoomSniperChallengeController*))(Il2CppBase() + 0x2104E98))(this);
	}
	template <typename T = void> T SyncRoomPassword() {
		return ((T (*)(RoomSniperChallengeController*))(Il2CppBase() + 0x21051C0))(this);
	}
	template <typename T = void> T OnBtnPasswordClick() {
		return ((T (*)(RoomSniperChallengeController*))(Il2CppBase() + 0x2105B78))(this);
	}
	template <typename T = bool> T GameUI_Room_IRoomInfoSelectorController_En_DidSelect(uintptr_t selector, int32_t row) {
		return ((T (*)(RoomSniperChallengeController*, uintptr_t, int32_t))(Il2CppBase() + 0x2105C94))(this, selector, row);
	}
	template <typename T = void> T GameUI_Room_IRoomInfoSelectorController_En_Expand(uintptr_t selector, bool expand) {
		return ((T (*)(RoomSniperChallengeController*, uintptr_t, bool))(Il2CppBase() + 0x2105F80))(this, selector, expand);
	}
	template <typename T = int32_t> T GameUI_Room_IRoomInfoSelectorDataSource_En_CellNumber(uintptr_t selector) {
		return ((T (*)(RoomSniperChallengeController*, uintptr_t))(Il2CppBase() + 0x2106234))(this, selector);
	}
	template <typename T = int32_t> T GameUI_Room_IRoomInfoSelectorDataSource_En_CellHeight(uintptr_t selector) {
		return ((T (*)(RoomSniperChallengeController*, uintptr_t))(Il2CppBase() + 0x21063C8))(this, selector);
	}
	template <typename T = uintptr_t> T GameUI_Room_IRoomInfoSelectorDataSource_En_CellData(uintptr_t selector, int32_t row) {
		return ((T (*)(RoomSniperChallengeController*, uintptr_t, int32_t))(Il2CppBase() + 0x21064DC))(this, selector, row);
	}
	template <typename T = int32_t> T GameUI_Room_IRoomInfoSelectorDataSource_En_OuterGlowHeight(uintptr_t selector) {
		return ((T (*)(RoomSniperChallengeController*, uintptr_t))(Il2CppBase() + 0x21066EC))(this, selector);
	}
	template <typename T = void> T OnBtnOneClick() {
		return ((T (*)(RoomSniperChallengeController*))(Il2CppBase() + 0x2106858))(this);
	}
	template <typename T = void> T OnBtnTwoClick() {
		return ((T (*)(RoomSniperChallengeController*))(Il2CppBase() + 0x2106C14))(this);
	}
	template <typename T = void> T OnBtnFourClick() {
		return ((T (*)(RoomSniperChallengeController*))(Il2CppBase() + 0x2106CEC))(this);
	}
	template <typename T = void> T ChangePlayerNumPerTeam(uintptr_t num) {
		return ((T (*)(RoomSniperChallengeController*, uintptr_t))(Il2CppBase() + 0x2106930))(this, num);
	}
	template <typename T = void> T OnBtnFppClick() {
		return ((T (*)(RoomSniperChallengeController*))(Il2CppBase() + 0x2106DC4))(this);
	}
	template <typename T = void> T OnBtnTppClick() {
		return ((T (*)(RoomSniperChallengeController*))(Il2CppBase() + 0x2106FC4))(this);
	}
	template <typename T = void> T OnBtnMoreClick() {
		return ((T (*)(RoomSniperChallengeController*))(Il2CppBase() + 0x21071C4))(this);
	}
	template <typename T = void> T OnBtnRecuritClick() {
		return ((T (*)(RoomSniperChallengeController*))(Il2CppBase() + 0x21072B4))(this);
	}
	template <typename T = void> T SetSelectPlayerId(uint64_t playerId) {
		return ((T (*)(RoomSniperChallengeController*, uint64_t))(Il2CppBase() + 0x21041A8))(this, playerId);
	}
	template <typename T = void> T OnBtnLoadoutClick() {
		return ((T (*)(RoomSniperChallengeController*))(Il2CppBase() + 0x21073D0))(this);
	}
	template <typename T = void> T WillShowm__0() {
		return ((T (*)(RoomSniperChallengeController*))(Il2CppBase() + 0x2107478))(this);
	}
	template <typename T = bool> T SyncRoomSettingWithDataStorem__1(int32_t it) {
		return ((T (*)(RoomSniperChallengeController*, int32_t))(Il2CppBase() + 0x2107484))(this, it);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(RoomSniperChallengeController*))(Il2CppBase() + 0x21074C8))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(RoomSniperChallengeController*))(Il2CppBase() + 0x21074D0))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsNeedVoice() {
		return ((T (*)(RoomSniperChallengeController*))(Il2CppBase() + 0x21074D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(RoomSniperChallengeController*))(Il2CppBase() + 0x21074E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(RoomSniperChallengeController*))(Il2CppBase() + 0x21074E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(RoomSniperChallengeController*))(Il2CppBase() + 0x21074F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_HandleRoomBtnReddot() {
		return ((T (*)(RoomSniperChallengeController*))(Il2CppBase() + 0x21074F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ChangeRoomUIState(uintptr_t P0) {
		return ((T (*)(RoomSniperChallengeController*, uintptr_t))(Il2CppBase() + 0x2107500))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ShowObserversView(bool P0) {
		return ((T (*)(RoomSniperChallengeController*, bool))(Il2CppBase() + 0x2107508))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_IsOtherPlayersInRoom() {
		return ((T (*)(RoomSniperChallengeController*))(Il2CppBase() + 0x2107510))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CloseRoom() {
		return ((T (*)(RoomSniperChallengeController*))(Il2CppBase() + 0x2107518))(this);
	}
	template <typename T = void> T xLuaBaseProxy_HandleRoomSettingChange() {
		return ((T (*)(RoomSniperChallengeController*))(Il2CppBase() + 0x2107520))(this);
	}
	template <typename T = void> T xLuaBaseProxy_HandleRoomMemberChange() {
		return ((T (*)(RoomSniperChallengeController*))(Il2CppBase() + 0x2107528))(this);
	}
	template <typename T = void> T xLuaBaseProxy_HandleRoomDataStore_Virtual() {
		return ((T (*)(RoomSniperChallengeController*))(Il2CppBase() + 0x2107530))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnBtnLoadoutClick() {
		return ((T (*)(RoomSniperChallengeController*))(Il2CppBase() + 0x2107538))(this);
	}

};

}
