#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Home {

class HomeMainNavigationUIController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Home", "HomeMainNavigationUIController"));
	}

	template <typename T = uintptr_t> T& m_Controller() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_Controller3_3() {
		return *(T*)((uintptr_t)this + 0x4C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowNone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationShowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationWillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEnableCameraClear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T get_Controller() {
		return ((T (*)(HomeMainNavigationUIController*))(Il2CppBase() + 0x2323BEC))(this);
	}
	template <typename T = uintptr_t> T get_Controller3_3() {
		return ((T (*)(HomeMainNavigationUIController*))(Il2CppBase() + 0x2323BF4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(HomeMainNavigationUIController*))(Il2CppBase() + 0x2323BFC))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(HomeMainNavigationUIController*))(Il2CppBase() + 0x2323CA4))(this);
	}
	template <typename T = bool> T IsShowNone() {
		return ((T (*)(HomeMainNavigationUIController*))(Il2CppBase() + 0x2323D44))(this);
	}
	template <typename T = bool> T IsShowAvatar() {
		return ((T (*)(HomeMainNavigationUIController*))(Il2CppBase() + 0x2323DE4))(this);
	}
	template <typename T = void> T OnNavigationShowed(uintptr_t data, uintptr_t lastData) {
		return ((T (*)(HomeMainNavigationUIController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2323E84))(this, data, lastData);
	}
	template <typename T = void> T OnNavigationWillClose(uintptr_t data, uintptr_t nextData) {
		return ((T (*)(HomeMainNavigationUIController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2324108))(this, data, nextData);
	}
	template <typename T = bool> T IsEnableCameraClear() {
		return ((T (*)(HomeMainNavigationUIController*))(Il2CppBase() + 0x23242DC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(HomeMainNavigationUIController*))(Il2CppBase() + 0x232437C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(HomeMainNavigationUIController*))(Il2CppBase() + 0x2324384))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsShowNone() {
		return ((T (*)(HomeMainNavigationUIController*))(Il2CppBase() + 0x232438C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsShowAvatar() {
		return ((T (*)(HomeMainNavigationUIController*))(Il2CppBase() + 0x2324394))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsEnableCameraClear() {
		return ((T (*)(HomeMainNavigationUIController*))(Il2CppBase() + 0x232439C))(this);
	}

};

}
