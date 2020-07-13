#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Home {

class HomeZombieNavigationUIController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Home", "HomeZombieNavigationUIController"));
	}

	template <typename T = uintptr_t> T& m_Controller() {
		return *(T*)((uintptr_t)this + 0x48);
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
		return ((T (*)(HomeZombieNavigationUIController*))(Il2CppBase() + 0x2326590))(this);
	}
	template <typename T = bool> T IsShowNone() {
		return ((T (*)(HomeZombieNavigationUIController*))(Il2CppBase() + 0x2326630))(this);
	}
	template <typename T = bool> T IsShowSquad() {
		return ((T (*)(HomeZombieNavigationUIController*))(Il2CppBase() + 0x23266D0))(this);
	}
	template <typename T = void> T OnNavigationShowed(uintptr_t data, uintptr_t lastData) {
		return ((T (*)(HomeZombieNavigationUIController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2326770))(this, data, lastData);
	}
	template <typename T = void> T OnNavigationWillClose(uintptr_t data, uintptr_t nextData) {
		return ((T (*)(HomeZombieNavigationUIController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x23268AC))(this, data, nextData);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(HomeZombieNavigationUIController*))(Il2CppBase() + 0x2326990))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsShowNone() {
		return ((T (*)(HomeZombieNavigationUIController*))(Il2CppBase() + 0x2326998))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsShowSquad() {
		return ((T (*)(HomeZombieNavigationUIController*))(Il2CppBase() + 0x23269A0))(this);
	}

};

}
