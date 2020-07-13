#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class RoomBrPrivateMainController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "RoomBrPrivateMainController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uint64_t> T& m_SelectPlayerId() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = int32_t> T& m_MatchType() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = bool> T& m_bAnchorRight() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& m_AdaptTimer() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& m_SingleCtr() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& m_DoubleCtr() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& m_SquadCtr() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& m_BrModeMapDS() {
		return *(T*)((uintptr_t)this + 0xF8);
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
	template <typename T = uintptr_t> static T& __Hotfix0_ShowObserversView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsOtherPlayersInRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleRoomSettingChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshSettingInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMemberListByMatchType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleRoomMemberChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshPlayerList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleRoomDataStore_Virtual() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncRoomSettingWithDataStore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncRoomPassword() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnPasswordClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnMoreClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnRecuritClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSelectPlayerId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnLoadoutClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMatchServiceList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRestrictPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}

	template <typename T = uintptr_t> T get_BrModeMapDS() {
		return ((T (*)(RoomBrPrivateMainController*))(Il2CppBase() + 0x3D731CC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(RoomBrPrivateMainController*))(Il2CppBase() + 0x3D7327C))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(RoomBrPrivateMainController*))(Il2CppBase() + 0x3D73388))(this);
	}
	template <typename T = bool> T IsNeedVoice() {
		return ((T (*)(RoomBrPrivateMainController*))(Il2CppBase() + 0x3D7342C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(RoomBrPrivateMainController*))(Il2CppBase() + 0x3D734CC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(RoomBrPrivateMainController*))(Il2CppBase() + 0x3D737A0))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(RoomBrPrivateMainController*))(Il2CppBase() + 0x3D739E8))(this);
	}
	template <typename T = void> T HandleRoomBtnReddot() {
		return ((T (*)(RoomBrPrivateMainController*))(Il2CppBase() + 0x3D73B50))(this);
	}
	template <typename T = void> T ShowObserversView(bool enableSpectating) {
		return ((T (*)(RoomBrPrivateMainController*, bool))(Il2CppBase() + 0x3D73C74))(this, enableSpectating);
	}
	template <typename T = bool> T IsOtherPlayersInRoom() {
		return ((T (*)(RoomBrPrivateMainController*))(Il2CppBase() + 0x3D73DD8))(this);
	}
	template <typename T = void> T CloseRoom() {
		return ((T (*)(RoomBrPrivateMainController*))(Il2CppBase() + 0x3D73EDC))(this);
	}
	template <typename T = void> T HandleRoomSettingChange() {
		return ((T (*)(RoomBrPrivateMainController*))(Il2CppBase() + 0x3D74064))(this);
	}
	template <typename T = void> T RefreshSettingInfo() {
		return ((T (*)(RoomBrPrivateMainController*))(Il2CppBase() + 0x3D74774))(this);
	}
	template <typename T = void> T SetMemberListByMatchType() {
		return ((T (*)(RoomBrPrivateMainController*))(Il2CppBase() + 0x3D74158))(this);
	}
	template <typename T = void> T HandleRoomMemberChange() {
		return ((T (*)(RoomBrPrivateMainController*))(Il2CppBase() + 0x3D74E14))(this);
	}
	template <typename T = void> T RefreshPlayerList() {
		return ((T (*)(RoomBrPrivateMainController*))(Il2CppBase() + 0x3D74674))(this);
	}
	template <typename T = void> T HandleRoomDataStore_Virtual() {
		return ((T (*)(RoomBrPrivateMainController*))(Il2CppBase() + 0x3D74ED8))(this);
	}
	template <typename T = void> T SyncRoomSettingWithDataStore() {
		return ((T (*)(RoomBrPrivateMainController*))(Il2CppBase() + 0x3D7504C))(this);
	}
	template <typename T = void> T SyncRoomPassword() {
		return ((T (*)(RoomBrPrivateMainController*))(Il2CppBase() + 0x3D751AC))(this);
	}
	template <typename T = void> T OnBtnPasswordClick() {
		return ((T (*)(RoomBrPrivateMainController*))(Il2CppBase() + 0x3D755BC))(this);
	}
	template <typename T = void> T OnBtnMoreClick() {
		return ((T (*)(RoomBrPrivateMainController*))(Il2CppBase() + 0x3D756D8))(this);
	}
	template <typename T = void> T OnBtnRecuritClick() {
		return ((T (*)(RoomBrPrivateMainController*))(Il2CppBase() + 0x3D757C8))(this);
	}
	template <typename T = void> T SetSelectPlayerId(uint64_t playerId) {
		return ((T (*)(RoomBrPrivateMainController*, uint64_t))(Il2CppBase() + 0x3D73FA0))(this, playerId);
	}
	template <typename T = void> T OnBtnLoadoutClick() {
		return ((T (*)(RoomBrPrivateMainController*))(Il2CppBase() + 0x3D758E4))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T GetMatchServiceList() {
		return ((T (*)(RoomBrPrivateMainController*))(Il2CppBase() + 0x3D7598C))(this);
	}
	template <typename T = void> T GetRestrictPosition(uintptr_t topLeftVec, uintptr_t topRightVec, uintptr_t bottomLeftVec, uintptr_t bottomRightVec) {
		return ((T (*)(RoomBrPrivateMainController*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3D75AA4))(this, topLeftVec, topRightVec, bottomLeftVec, bottomRightVec);
	}
	template <typename T = void> T RegisterDelegatesm__0() {
		return ((T (*)(RoomBrPrivateMainController*))(Il2CppBase() + 0x3D75BB8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(RoomBrPrivateMainController*))(Il2CppBase() + 0x3D75BD0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(RoomBrPrivateMainController*))(Il2CppBase() + 0x3D75BD8))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsNeedVoice() {
		return ((T (*)(RoomBrPrivateMainController*))(Il2CppBase() + 0x3D75BE0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(RoomBrPrivateMainController*))(Il2CppBase() + 0x3D75BE8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(RoomBrPrivateMainController*))(Il2CppBase() + 0x3D75BF0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(RoomBrPrivateMainController*))(Il2CppBase() + 0x3D75BF8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_HandleRoomBtnReddot() {
		return ((T (*)(RoomBrPrivateMainController*))(Il2CppBase() + 0x3D75C00))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShowObserversView(bool P0) {
		return ((T (*)(RoomBrPrivateMainController*, bool))(Il2CppBase() + 0x3D75C08))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_IsOtherPlayersInRoom() {
		return ((T (*)(RoomBrPrivateMainController*))(Il2CppBase() + 0x3D75C10))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CloseRoom() {
		return ((T (*)(RoomBrPrivateMainController*))(Il2CppBase() + 0x3D75C18))(this);
	}
	template <typename T = void> T xLuaBaseProxy_HandleRoomSettingChange() {
		return ((T (*)(RoomBrPrivateMainController*))(Il2CppBase() + 0x3D75C20))(this);
	}
	template <typename T = void> T xLuaBaseProxy_HandleRoomMemberChange() {
		return ((T (*)(RoomBrPrivateMainController*))(Il2CppBase() + 0x3D75C28))(this);
	}
	template <typename T = void> T xLuaBaseProxy_HandleRoomDataStore_Virtual() {
		return ((T (*)(RoomBrPrivateMainController*))(Il2CppBase() + 0x3D75C30))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnBtnLoadoutClick() {
		return ((T (*)(RoomBrPrivateMainController*))(Il2CppBase() + 0x3D75C38))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T xLuaBaseProxy_GetMatchServiceList() {
		return ((T (*)(RoomBrPrivateMainController*))(Il2CppBase() + 0x3D75C40))(this);
	}
	template <typename T = void> T xLuaBaseProxy_GetRestrictPosition(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(RoomBrPrivateMainController*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3D75C48))(this, P0, P1, P2, P3);
	}

};

}
