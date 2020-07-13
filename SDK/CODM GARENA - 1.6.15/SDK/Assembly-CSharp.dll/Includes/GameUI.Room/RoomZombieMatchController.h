#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomZombieMatchController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomZombieMatchController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& m_ZombiePlaylistSelectorCtr() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& m_ZombieMatchRewardsCtr() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& m_cpSafeBoxThumbnailCtr() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& m_ZombieMpDrops() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& m_RefreshDropsTimer() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& m_RefreshDropsParticleTimer() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = int32_t> T& m_LastInstanceId() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = bool> T& m_IsNumChange() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& m_ZombieDS() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& m_GlobalDS() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& downloadBtnTimer() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_RoomZombieMatchController_Go() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HidePlaylist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleDataStoreUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitRoomUIToDefault() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnAutoFillClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnCancelAutoFillClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnPlaylistClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnDropRewardsClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPVETutorialBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEAvatarViewType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleRoomDataStore_Virtual() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleRoomSettingChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnLoadoutClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeRoomUIState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyCloseZombiePlaylist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyCloseZombieMatchReward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyOpenDownloadMgrWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleDrops() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshDropsAvailables() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshDropsParticle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadWithFriendsInfoLocal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeakPromptArrow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDynamicDownloadBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartCheckDownloadState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshDownloadBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshGenericBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshDynamicBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBottomRight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}

	template <typename T = void> T T_RoomZombieMatchController_Go() {
		return ((T (*)(RoomZombieMatchController*))(Il2CppBase() + 0x213ADC0))(this);
	}
	template <typename T = uintptr_t> T get_ZombieDS() {
		return ((T (*)(RoomZombieMatchController*))(Il2CppBase() + 0x213AF00))(this);
	}
	template <typename T = uintptr_t> T get_GlobalDS() {
		return ((T (*)(RoomZombieMatchController*))(Il2CppBase() + 0x213AFB0))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(RoomZombieMatchController*))(Il2CppBase() + 0x213B060))(this);
	}
	template <typename T = void> T HidePlaylist() {
		return ((T (*)(RoomZombieMatchController*))(Il2CppBase() + 0x213B2BC))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(RoomZombieMatchController*))(Il2CppBase() + 0x213B3C8))(this);
	}
	template <typename T = bool> T IsShowAvatar() {
		return ((T (*)(RoomZombieMatchController*))(Il2CppBase() + 0x213BC4C))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(RoomZombieMatchController*))(Il2CppBase() + 0x213BCEC))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(RoomZombieMatchController*))(Il2CppBase() + 0x213BD90))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(RoomZombieMatchController*))(Il2CppBase() + 0x213C264))(this);
	}
	template <typename T = void> T HandleDataStoreUpdate(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(RoomZombieMatchController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x213C65C))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(RoomZombieMatchController*))(Il2CppBase() + 0x213CA14))(this);
	}
	template <typename T = void> T InitRoomUIToDefault(bool bPreCreate) {
		return ((T (*)(RoomZombieMatchController*, bool))(Il2CppBase() + 0x213CD08))(this, bPreCreate);
	}
	template <typename T = void> T OnBtnAutoFillClick() {
		return ((T (*)(RoomZombieMatchController*))(Il2CppBase() + 0x213CEE8))(this);
	}
	template <typename T = void> T OnBtnCancelAutoFillClick() {
		return ((T (*)(RoomZombieMatchController*))(Il2CppBase() + 0x213D1D0))(this);
	}
	template <typename T = void> T OnBtnPlaylistClick() {
		return ((T (*)(RoomZombieMatchController*))(Il2CppBase() + 0x213D4B8))(this);
	}
	template <typename T = void> T OnBtnDropRewardsClick() {
		return ((T (*)(RoomZombieMatchController*))(Il2CppBase() + 0x213D828))(this);
	}
	template <typename T = void> T OnPVETutorialBtnClick() {
		return ((T (*)(RoomZombieMatchController*))(Il2CppBase() + 0x213D9BC))(this);
	}
	template <typename T = uintptr_t> T GetEAvatarViewType() {
		return ((T (*)(RoomZombieMatchController*))(Il2CppBase() + 0x213DAAC))(this);
	}
	template <typename T = void> T HandleRoomDataStore_Virtual() {
		return ((T (*)(RoomZombieMatchController*))(Il2CppBase() + 0x213DB4C))(this);
	}
	template <typename T = void> T HandleRoomSettingChange() {
		return ((T (*)(RoomZombieMatchController*))(Il2CppBase() + 0x213E110))(this);
	}
	template <typename T = void> T OnBtnLoadoutClick() {
		return ((T (*)(RoomZombieMatchController*))(Il2CppBase() + 0x213E1B4))(this);
	}
	template <typename T = void> T ChangeRoomUIState(uintptr_t state) {
		return ((T (*)(RoomZombieMatchController*, uintptr_t))(Il2CppBase() + 0x213E25C))(this, state);
	}
	template <typename T = void> T OnNotifyCloseZombiePlaylist(uintptr_t message) {
		return ((T (*)(RoomZombieMatchController*, uintptr_t))(Il2CppBase() + 0x213E414))(this, message);
	}
	template <typename T = void> T OnNotifyCloseZombieMatchReward(uintptr_t message) {
		return ((T (*)(RoomZombieMatchController*, uintptr_t))(Il2CppBase() + 0x213E4F0))(this, message);
	}
	template <typename T = void> T OnNotifyOpenDownloadMgrWindow(uintptr_t message) {
		return ((T (*)(RoomZombieMatchController*, uintptr_t))(Il2CppBase() + 0x213E5CC))(this, message);
	}
	template <typename T = void> T HandleDrops() {
		return ((T (*)(RoomZombieMatchController*))(Il2CppBase() + 0x213E7F4))(this);
	}
	template <typename T = void> T RefreshDropsAvailables() {
		return ((T (*)(RoomZombieMatchController*))(Il2CppBase() + 0x213C79C))(this);
	}
	template <typename T = void> T RefreshDropsParticle(uintptr_t data, uintptr_t zombieMpConfig) {
		return ((T (*)(RoomZombieMatchController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x213F260))(this, data, zombieMpConfig);
	}
	template <typename T = void> T ReadWithFriendsInfoLocal() {
		return ((T (*)(RoomZombieMatchController*))(Il2CppBase() + 0x213F658))(this);
	}
	template <typename T = void> T SetWeakPromptArrow() {
		return ((T (*)(RoomZombieMatchController*))(Il2CppBase() + 0x213CB30))(this);
	}
	template <typename T = void> T OnDynamicDownloadBtnClick() {
		return ((T (*)(RoomZombieMatchController*))(Il2CppBase() + 0x213E678))(this);
	}
	template <typename T = void> T StartCheckDownloadState() {
		return ((T (*)(RoomZombieMatchController*))(Il2CppBase() + 0x213BB24))(this);
	}
	template <typename T = void> T RefreshDownloadBtnState() {
		return ((T (*)(RoomZombieMatchController*))(Il2CppBase() + 0x213BA0C))(this);
	}
	template <typename T = void> T RefreshGenericBtnState() {
		return ((T (*)(RoomZombieMatchController*))(Il2CppBase() + 0x213F71C))(this);
	}
	template <typename T = void> T RefreshDynamicBtnState() {
		return ((T (*)(RoomZombieMatchController*))(Il2CppBase() + 0x213FCA4))(this);
	}
	template <typename T = void> T RefreshBottomRight() {
		return ((T (*)(RoomZombieMatchController*))(Il2CppBase() + 0x21401D0))(this);
	}
	template <typename T = void> T RegisterDelegatesm__0() {
		return ((T (*)(RoomZombieMatchController*))(Il2CppBase() + 0x2140868))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(RoomZombieMatchController*))(Il2CppBase() + 0x214086C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_HidePlaylist() {
		return ((T (*)(RoomZombieMatchController*))(Il2CppBase() + 0x2140870))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(RoomZombieMatchController*))(Il2CppBase() + 0x2140878))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsShowAvatar() {
		return ((T (*)(RoomZombieMatchController*))(Il2CppBase() + 0x214087C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(RoomZombieMatchController*))(Il2CppBase() + 0x2140880))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(RoomZombieMatchController*))(Il2CppBase() + 0x2140888))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(RoomZombieMatchController*))(Il2CppBase() + 0x214088C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_HandleDataStoreUpdate(uintptr_t P0, Il2CppString* P1, int32_t P2) {
		return ((T (*)(RoomZombieMatchController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x2140890))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(RoomZombieMatchController*))(Il2CppBase() + 0x21408B0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitRoomUIToDefault(bool P0) {
		return ((T (*)(RoomZombieMatchController*, bool))(Il2CppBase() + 0x21408B8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnBtnPlaylistClick() {
		return ((T (*)(RoomZombieMatchController*))(Il2CppBase() + 0x21408BC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetEAvatarViewType() {
		return ((T (*)(RoomZombieMatchController*))(Il2CppBase() + 0x21408C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_HandleRoomDataStore_Virtual() {
		return ((T (*)(RoomZombieMatchController*))(Il2CppBase() + 0x21408C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_HandleRoomSettingChange() {
		return ((T (*)(RoomZombieMatchController*))(Il2CppBase() + 0x21408D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnBtnLoadoutClick() {
		return ((T (*)(RoomZombieMatchController*))(Il2CppBase() + 0x21408D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ChangeRoomUIState(uintptr_t P0) {
		return ((T (*)(RoomZombieMatchController*, uintptr_t))(Il2CppBase() + 0x21408DC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ReadWithFriendsInfoLocal() {
		return ((T (*)(RoomZombieMatchController*))(Il2CppBase() + 0x21408E4))(this);
	}

};

}
