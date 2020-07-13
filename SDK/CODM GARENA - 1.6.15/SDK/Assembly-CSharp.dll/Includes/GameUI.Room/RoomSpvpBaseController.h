#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomSpvpBaseController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomSpvpBaseController"));
	}

	template <typename T = uintptr_t> T& m_SpvpBaseView() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& m_playlistBubble() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& m_PlaylistTimer() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& m_SpvpPlaylistDetailCtr() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& m_SpvpPlaylistSelectorCtr() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& m_CloseSpvpPlaylistTimer() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& m_OpenSpvpPlaylistTimer() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& clickEntrance() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& m_SpvpDS() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& m_GlobalDS() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& m_LocalPlayerDS() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleRoomDataStore_Virtual() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitRoomUIToDefault() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RunCloseSpvpPlaylistAnimator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleRoomBtnReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HidePlaylist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBubble() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnBubbleClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsRoomSettingSameWithBubbleInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnScoreStreakClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnPlaylistClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelUICollider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseSpvpPlaylist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RunCloseSpvpPlaylistDetailAnimator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenSpvpPlaylistDetail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBottomRightPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = uintptr_t> T get_SpvpDS() {
		return ((T (*)(RoomSpvpBaseController*))(Il2CppBase() + 0x2107BF4))(this);
	}
	template <typename T = uintptr_t> T get_GlobalDS() {
		return ((T (*)(RoomSpvpBaseController*))(Il2CppBase() + 0x2107CA4))(this);
	}
	template <typename T = uintptr_t> T get_LocalPlayerDS() {
		return ((T (*)(RoomSpvpBaseController*))(Il2CppBase() + 0x2107D54))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(RoomSpvpBaseController*))(Il2CppBase() + 0x2107E04))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(RoomSpvpBaseController*))(Il2CppBase() + 0x21083A0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(RoomSpvpBaseController*))(Il2CppBase() + 0x21086F4))(this);
	}
	template <typename T = void> T HandleRoomDataStore_Virtual() {
		return ((T (*)(RoomSpvpBaseController*))(Il2CppBase() + 0x2108984))(this);
	}
	template <typename T = void> T InitRoomUIToDefault(bool bPreCreate) {
		return ((T (*)(RoomSpvpBaseController*, bool))(Il2CppBase() + 0x2108A2C))(this, bPreCreate);
	}
	template <typename T = void> T RunCloseSpvpPlaylistAnimator() {
		return ((T (*)(RoomSpvpBaseController*))(Il2CppBase() + 0x2108BF4))(this);
	}
	template <typename T = void> T HandleRoomBtnReddot() {
		return ((T (*)(RoomSpvpBaseController*))(Il2CppBase() + 0x2108D60))(this);
	}
	template <typename T = void> T HidePlaylist() {
		return ((T (*)(RoomSpvpBaseController*))(Il2CppBase() + 0x2108EE8))(this);
	}
	template <typename T = void> T RefreshBubble() {
		return ((T (*)(RoomSpvpBaseController*))(Il2CppBase() + 0x2108FF4))(this);
	}
	template <typename T = void> T OnBtnBubbleClick() {
		return ((T (*)(RoomSpvpBaseController*))(Il2CppBase() + 0x2109AE0))(this);
	}
	template <typename T = bool> T IsRoomSettingSameWithBubbleInfo(uintptr_t mapIds) {
		return ((T (*)(RoomSpvpBaseController*, uintptr_t))(Il2CppBase() + 0x2109614))(this, mapIds);
	}
	template <typename T = void> T OnBtnScoreStreakClick() {
		return ((T (*)(RoomSpvpBaseController*))(Il2CppBase() + 0x2109FB8))(this);
	}
	template <typename T = void> T OnBtnPlaylistClick() {
		return ((T (*)(RoomSpvpBaseController*))(Il2CppBase() + 0x210A1E8))(this);
	}
	template <typename T = void> T CancelUICollider() {
		return ((T (*)(RoomSpvpBaseController*))(Il2CppBase() + 0x210A698))(this);
	}
	template <typename T = void> T CloseSpvpPlaylist() {
		return ((T (*)(RoomSpvpBaseController*))(Il2CppBase() + 0x210A75C))(this);
	}
	template <typename T = void> T RunCloseSpvpPlaylistDetailAnimator() {
		return ((T (*)(RoomSpvpBaseController*))(Il2CppBase() + 0x210A864))(this);
	}
	template <typename T = void> T OpenSpvpPlaylistDetail(int32_t detailType) {
		return ((T (*)(RoomSpvpBaseController*, int32_t))(Il2CppBase() + 0x210A938))(this, detailType);
	}
	template <typename T = void> T RefreshBottomRightPos() {
		return ((T (*)(RoomSpvpBaseController*))(Il2CppBase() + 0x210AD10))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(RoomSpvpBaseController*))(Il2CppBase() + 0x210B3E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(RoomSpvpBaseController*))(Il2CppBase() + 0x210B3E4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(RoomSpvpBaseController*))(Il2CppBase() + 0x210B3E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_HandleRoomDataStore_Virtual() {
		return ((T (*)(RoomSpvpBaseController*))(Il2CppBase() + 0x210B3EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitRoomUIToDefault(bool P0) {
		return ((T (*)(RoomSpvpBaseController*, bool))(Il2CppBase() + 0x210B3F4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_RunCloseSpvpPlaylistAnimator() {
		return ((T (*)(RoomSpvpBaseController*))(Il2CppBase() + 0x210B3F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_HandleRoomBtnReddot() {
		return ((T (*)(RoomSpvpBaseController*))(Il2CppBase() + 0x210B400))(this);
	}
	template <typename T = void> T xLuaBaseProxy_HidePlaylist() {
		return ((T (*)(RoomSpvpBaseController*))(Il2CppBase() + 0x210B408))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshBubble() {
		return ((T (*)(RoomSpvpBaseController*))(Il2CppBase() + 0x210B410))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnBtnBubbleClick() {
		return ((T (*)(RoomSpvpBaseController*))(Il2CppBase() + 0x210B418))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnBtnPlaylistClick() {
		return ((T (*)(RoomSpvpBaseController*))(Il2CppBase() + 0x210B420))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RunCloseSpvpPlaylistDetailAnimator() {
		return ((T (*)(RoomSpvpBaseController*))(Il2CppBase() + 0x210B428))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OpenSpvpPlaylistDetail(int32_t P0) {
		return ((T (*)(RoomSpvpBaseController*, int32_t))(Il2CppBase() + 0x210B430))(this, P0);
	}

};

}
