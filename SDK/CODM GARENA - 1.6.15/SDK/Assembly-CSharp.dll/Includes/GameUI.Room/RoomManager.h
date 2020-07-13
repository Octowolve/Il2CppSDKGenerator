#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomManager"));
	}

	template <typename T = uintptr_t> T& m_RoomDS() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEnableCreate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsZMModeAvailable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBrModeAvailable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSpvpPrivateModePlayeNumAvailable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBrPlaylistInfoValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_QuitRoomIfCurrentIsZombieTutorial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSwitchRoomUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PushRoomUINav() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PushPvpMatchAsync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMultiplayAssetLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PushPvpPrivateAsync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMultiplayPrivateAssetLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PushBrMatchAsync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrMatchAssetLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PushBrPrivateAsync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrPrivateAssetLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PushZombieMpAsync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZombieMpAssetLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__IsRoomDataMatchCurrentRoomNav() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRoomUINavType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMainTitleLocIdByRoomUIType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryEnterRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}

	template <typename T = uintptr_t> T get_RoomDS() {
		return ((T (*)(RoomManager*))(Il2CppBase() + 0x20E9E84))(this);
	}
	template <typename T = bool> T IsEnableCreate() {
		return ((T (*)(RoomManager*))(Il2CppBase() + 0x20E9F34))(this);
	}
	template <typename T = bool> T IsZMModeAvailable() {
		return ((T (*)(RoomManager*))(Il2CppBase() + 0x20D3240))(this);
	}
	template <typename T = bool> T IsBrModeAvailable() {
		return ((T (*)(RoomManager*))(Il2CppBase() + 0x20D3124))(this);
	}
	template <typename T = bool> T IsSpvpPrivateModePlayeNumAvailable(int32_t playlistId, Il2CppList<uint32_t>* mapIds) {
		return ((T (*)(RoomManager*, int32_t, Il2CppList<uint32_t>*))(Il2CppBase() + 0x20EA004))(this, playlistId, mapIds);
	}
	template <typename T = bool> T IsBrPlaylistInfoValid(int32_t brPlaylistId, int32_t mapId, bool bIsShowTip) {
		return ((T (*)(RoomManager*, int32_t, int32_t, bool))(Il2CppBase() + 0x20EA354))(this, brPlaylistId, mapId, bIsShowTip);
	}
	template <typename T = bool> T QuitRoomIfCurrentIsZombieTutorial(uintptr_t quitReason) {
		return ((T (*)(RoomManager*, uintptr_t))(Il2CppBase() + 0x20EA750))(this, quitReason);
	}
	template <typename T = void> T CheckSwitchRoomUI(bool forcePush, bool bForceAsync) {
		return ((T (*)(RoomManager*, bool, bool))(Il2CppBase() + 0x20CE19C))(this, forcePush, bForceAsync);
	}
	template <typename T = void> T PushRoomUINav(uintptr_t uiType, bool bForceAsync, bool pre, bool bPopToRoot) {
		return ((T (*)(RoomManager*, uintptr_t, bool, bool, bool))(Il2CppBase() + 0x20EAC3C))(this, uiType, bForceAsync, pre, bPopToRoot);
	}
	template <typename T = void> T PushPvpMatchAsync(uintptr_t navigationData) {
		return ((T (*)(RoomManager*, uintptr_t))(Il2CppBase() + 0x20EB38C))(this, navigationData);
	}
	template <typename T = void> T OnMultiplayAssetLoaded(Il2CppArray<uintptr_t>* id, uintptr_t obj) {
		return ((T (*)(RoomManager*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x20EC2B4))(this, id, obj);
	}
	template <typename T = void> T PushPvpPrivateAsync(uintptr_t navigationData) {
		return ((T (*)(RoomManager*, uintptr_t))(Il2CppBase() + 0x20EB694))(this, navigationData);
	}
	template <typename T = void> T OnMultiplayPrivateAssetLoaded(Il2CppArray<uintptr_t>* ids, uintptr_t obj) {
		return ((T (*)(RoomManager*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x20EC4A4))(this, ids, obj);
	}
	template <typename T = void> T PushBrMatchAsync(uintptr_t navigationData) {
		return ((T (*)(RoomManager*, uintptr_t))(Il2CppBase() + 0x20EB99C))(this, navigationData);
	}
	template <typename T = void> T OnBrMatchAssetLoaded(Il2CppArray<uintptr_t>* ids, uintptr_t obj) {
		return ((T (*)(RoomManager*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x20EC694))(this, ids, obj);
	}
	template <typename T = void> T PushBrPrivateAsync(uintptr_t navigationData) {
		return ((T (*)(RoomManager*, uintptr_t))(Il2CppBase() + 0x20EBCA4))(this, navigationData);
	}
	template <typename T = void> T OnBrPrivateAssetLoaded(Il2CppArray<uintptr_t>* ids, uintptr_t obj) {
		return ((T (*)(RoomManager*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x20EC884))(this, ids, obj);
	}
	template <typename T = void> T PushZombieMpAsync(uintptr_t navigationData) {
		return ((T (*)(RoomManager*, uintptr_t))(Il2CppBase() + 0x20EBFAC))(this, navigationData);
	}
	template <typename T = void> T OnZombieMpAssetLoaded(Il2CppArray<uintptr_t>* ids, uintptr_t obj) {
		return ((T (*)(RoomManager*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x20ECA74))(this, ids, obj);
	}
	template <typename T = bool> T _IsRoomDataMatchCurrentRoomNav(uintptr_t uiType, uintptr_t currentNav) {
		return ((T (*)(RoomManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x20EA9C8))(this, uiType, currentNav);
	}
	template <typename T = uintptr_t> T GetRoomUINavType(uintptr_t uitype) {
		return ((T (*)(RoomManager*, uintptr_t))(Il2CppBase() + 0x20ECC64))(this, uitype);
	}
	template <typename T = Il2CppString*> T GetMainTitleLocIdByRoomUIType(uintptr_t type) {
		return ((T (*)(RoomManager*, uintptr_t))(Il2CppBase() + 0x20EB178))(this, type);
	}
	template <typename T = void> T TryEnterRoom() {
		return ((T (*)(RoomManager*))(Il2CppBase() + 0x20ED114))(this);
	}

};

}
