#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomBrNewModeController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomBrNewModeController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x90);
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
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitMember() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleRoomSettingChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsOtherPlayersInRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTPPBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFPPBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T Init() {
		return ((T (*)(RoomBrNewModeController*))(Il2CppBase() + 0x2CF4624))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(RoomBrNewModeController*))(Il2CppBase() + 0x2CF4844))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(RoomBrNewModeController*))(Il2CppBase() + 0x2CF48E8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(RoomBrNewModeController*))(Il2CppBase() + 0x2CF4A80))(this);
	}
	template <typename T = void> T InitMember() {
		return ((T (*)(RoomBrNewModeController*))(Il2CppBase() + 0x2CF4734))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(RoomBrNewModeController*))(Il2CppBase() + 0x2CF5224))(this);
	}
	template <typename T = void> T HandleRoomSettingChange() {
		return ((T (*)(RoomBrNewModeController*))(Il2CppBase() + 0x2CF52C8))(this);
	}
	template <typename T = bool> T IsOtherPlayersInRoom() {
		return ((T (*)(RoomBrNewModeController*))(Il2CppBase() + 0x2CF57A0))(this);
	}
	template <typename T = void> T OnTPPBtnClick() {
		return ((T (*)(RoomBrNewModeController*))(Il2CppBase() + 0x2CF58AC))(this);
	}
	template <typename T = void> T OnFPPBtnClick() {
		return ((T (*)(RoomBrNewModeController*))(Il2CppBase() + 0x2CF5BA0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(RoomBrNewModeController*))(Il2CppBase() + 0x2CF5E94))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(RoomBrNewModeController*))(Il2CppBase() + 0x2CF5E98))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(RoomBrNewModeController*))(Il2CppBase() + 0x2CF5E9C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(RoomBrNewModeController*))(Il2CppBase() + 0x2CF5EA0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(RoomBrNewModeController*))(Il2CppBase() + 0x2CF5EA4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_HandleRoomSettingChange() {
		return ((T (*)(RoomBrNewModeController*))(Il2CppBase() + 0x2CF5EA8))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsOtherPlayersInRoom() {
		return ((T (*)(RoomBrNewModeController*))(Il2CppBase() + 0x2CF5EAC))(this);
	}

};

}
