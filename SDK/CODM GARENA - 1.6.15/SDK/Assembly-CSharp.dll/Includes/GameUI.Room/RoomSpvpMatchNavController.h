#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomSpvpMatchNavController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomSpvpMatchNavController"));
	}

	template <typename T = uintptr_t> T& m_Controller() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& m_OldFixedDeltaTime() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowNone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowSquad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationShowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationWillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(RoomSpvpMatchNavController*))(Il2CppBase() + 0x211B040))(this);
	}
	template <typename T = bool> T IsShowNone() {
		return ((T (*)(RoomSpvpMatchNavController*))(Il2CppBase() + 0x211B0E0))(this);
	}
	template <typename T = bool> T IsShowSquad() {
		return ((T (*)(RoomSpvpMatchNavController*))(Il2CppBase() + 0x211B180))(this);
	}
	template <typename T = void> T OnNavigationShowed(uintptr_t data, uintptr_t lastData) {
		return ((T (*)(RoomSpvpMatchNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x211B220))(this, data, lastData);
	}
	template <typename T = void> T OnNavigationWillClose(uintptr_t data, uintptr_t nextData) {
		return ((T (*)(RoomSpvpMatchNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x211B39C))(this, data, nextData);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(RoomSpvpMatchNavController*))(Il2CppBase() + 0x211B494))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsShowNone() {
		return ((T (*)(RoomSpvpMatchNavController*))(Il2CppBase() + 0x211B49C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsShowSquad() {
		return ((T (*)(RoomSpvpMatchNavController*))(Il2CppBase() + 0x211B4A4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnNavigationShowed(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(RoomSpvpMatchNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x211B4AC))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnNavigationWillClose(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(RoomSpvpMatchNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x211B4B4))(this, P0, P1);
	}

};

}
