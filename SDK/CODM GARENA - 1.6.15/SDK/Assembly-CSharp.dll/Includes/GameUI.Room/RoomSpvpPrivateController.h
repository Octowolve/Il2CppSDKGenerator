#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomSpvpPrivateController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomSpvpPrivateController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& m_SpvpPlaylistSelectorCtr() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& m_playlistBubble() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& mRoomIDBuilder() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& downloadBtnTimer() {
		return *(T*)((uintptr_t)this + 0xF0);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshView() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_InitRoomUIToDefault() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleRoomSettingChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleRoomDataStore_Virtual() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnLoadoutClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLadderType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowObserversView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsOtherPlayersInRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnPlaylistClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnBtnRecuritClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSettingButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeRoomUIState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnBubbleClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshDownloadBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshGenericBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshDynamicBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartCheckDownloadState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDynamicDownloadBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}

	template <typename T = void> T Init() {
		return ((T (*)(RoomSpvpPrivateController*))(Il2CppBase() + 0x212D76C))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(RoomSpvpPrivateController*))(Il2CppBase() + 0x212DA04))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(RoomSpvpPrivateController*))(Il2CppBase() + 0x212DAA8))(this);
	}
	template <typename T = void> T RefreshView() {
		return ((T (*)(RoomSpvpPrivateController*))(Il2CppBase() + 0x212DC74))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(RoomSpvpPrivateController*))(Il2CppBase() + 0x212DDD0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(RoomSpvpPrivateController*))(Il2CppBase() + 0x212E2D8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(RoomSpvpPrivateController*))(Il2CppBase() + 0x212E54C))(this);
	}
	template <typename T = void> T InitRoomUIToDefault(bool bPreCreate) {
		return ((T (*)(RoomSpvpPrivateController*, bool))(Il2CppBase() + 0x212E77C))(this, bPreCreate);
	}
	template <typename T = void> T HandleRoomSettingChange() {
		return ((T (*)(RoomSpvpPrivateController*))(Il2CppBase() + 0x212EDBC))(this);
	}
	template <typename T = void> T HandleRoomDataStore_Virtual() {
		return ((T (*)(RoomSpvpPrivateController*))(Il2CppBase() + 0x212F680))(this);
	}
	template <typename T = void> T OnBtnLoadoutClick() {
		return ((T (*)(RoomSpvpPrivateController*))(Il2CppBase() + 0x212F810))(this);
	}
	template <typename T = uintptr_t> T GetLadderType() {
		return ((T (*)(RoomSpvpPrivateController*))(Il2CppBase() + 0x212F8C4))(this);
	}
	template <typename T = void> T ShowObserversView(bool enableSpectating) {
		return ((T (*)(RoomSpvpPrivateController*, bool))(Il2CppBase() + 0x212F964))(this, enableSpectating);
	}
	template <typename T = bool> T IsOtherPlayersInRoom() {
		return ((T (*)(RoomSpvpPrivateController*))(Il2CppBase() + 0x212FAC8))(this);
	}
	template <typename T = void> T OnBtnPlaylistClick() {
		return ((T (*)(RoomSpvpPrivateController*))(Il2CppBase() + 0x212FBF4))(this);
	}
	template <typename T = void> T _OnBtnRecuritClick() {
		return ((T (*)(RoomSpvpPrivateController*))(Il2CppBase() + 0x212FDB8))(this);
	}
	template <typename T = void> T OnSettingButtonClick() {
		return ((T (*)(RoomSpvpPrivateController*))(Il2CppBase() + 0x212FED4))(this);
	}
	template <typename T = void> T ChangeRoomUIState(uintptr_t state) {
		return ((T (*)(RoomSpvpPrivateController*, uintptr_t))(Il2CppBase() + 0x21300D8))(this, state);
	}
	template <typename T = void> T OnBtnBubbleClick() {
		return ((T (*)(RoomSpvpPrivateController*))(Il2CppBase() + 0x21301FC))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(RoomSpvpPrivateController*))(Il2CppBase() + 0x21304F0))(this);
	}
	template <typename T = void> T RefreshDownloadBtnState() {
		return ((T (*)(RoomSpvpPrivateController*))(Il2CppBase() + 0x212E098))(this);
	}
	template <typename T = void> T RefreshGenericBtnState() {
		return ((T (*)(RoomSpvpPrivateController*))(Il2CppBase() + 0x21305AC))(this);
	}
	template <typename T = void> T RefreshDynamicBtnState() {
		return ((T (*)(RoomSpvpPrivateController*))(Il2CppBase() + 0x2130B90))(this);
	}
	template <typename T = void> T StartCheckDownloadState() {
		return ((T (*)(RoomSpvpPrivateController*))(Il2CppBase() + 0x212E1B0))(this);
	}
	template <typename T = void> T OnDynamicDownloadBtnClick() {
		return ((T (*)(RoomSpvpPrivateController*))(Il2CppBase() + 0x21310BC))(this);
	}
	template <typename T = void> T WillShowm__0() {
		return ((T (*)(RoomSpvpPrivateController*))(Il2CppBase() + 0x2131238))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(RoomSpvpPrivateController*))(Il2CppBase() + 0x2131F74))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(RoomSpvpPrivateController*))(Il2CppBase() + 0x2131F78))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(RoomSpvpPrivateController*))(Il2CppBase() + 0x2131F80))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(RoomSpvpPrivateController*))(Il2CppBase() + 0x2131F88))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(RoomSpvpPrivateController*))(Il2CppBase() + 0x2131F8C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(RoomSpvpPrivateController*))(Il2CppBase() + 0x2131F90))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitRoomUIToDefault(bool P0) {
		return ((T (*)(RoomSpvpPrivateController*, bool))(Il2CppBase() + 0x2131F94))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_HandleRoomSettingChange() {
		return ((T (*)(RoomSpvpPrivateController*))(Il2CppBase() + 0x2131F98))(this);
	}
	template <typename T = void> T xLuaBaseProxy_HandleRoomDataStore_Virtual() {
		return ((T (*)(RoomSpvpPrivateController*))(Il2CppBase() + 0x2131F9C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnBtnLoadoutClick() {
		return ((T (*)(RoomSpvpPrivateController*))(Il2CppBase() + 0x2131FA0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetLadderType() {
		return ((T (*)(RoomSpvpPrivateController*))(Il2CppBase() + 0x2131FA8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShowObserversView(bool P0) {
		return ((T (*)(RoomSpvpPrivateController*, bool))(Il2CppBase() + 0x2131FB0))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_IsOtherPlayersInRoom() {
		return ((T (*)(RoomSpvpPrivateController*))(Il2CppBase() + 0x2131FB8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnBtnPlaylistClick() {
		return ((T (*)(RoomSpvpPrivateController*))(Il2CppBase() + 0x2131FC0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ChangeRoomUIState(uintptr_t P0) {
		return ((T (*)(RoomSpvpPrivateController*, uintptr_t))(Il2CppBase() + 0x2131FC4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnBtnBubbleClick() {
		return ((T (*)(RoomSpvpPrivateController*))(Il2CppBase() + 0x2131FCC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(RoomSpvpPrivateController*))(Il2CppBase() + 0x2131FD0))(this);
	}

};

}
