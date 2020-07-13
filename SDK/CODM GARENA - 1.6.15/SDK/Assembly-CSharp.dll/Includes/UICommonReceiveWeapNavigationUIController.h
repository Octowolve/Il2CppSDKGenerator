#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UICommonReceiveWeapNavigationUIController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UICommonReceiveWeapNavigationUIController"));
	}

	template <typename T = uintptr_t> T& m_ChangeController() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowWeaponSpecialScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBackgroundTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEnableCameraClear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationShowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationWillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(UICommonReceiveWeapNavigationUIController*))(Il2CppBase() + 0x39CE4FC))(this);
	}
	template <typename T = bool> T IsShowWeapon() {
		return ((T (*)(UICommonReceiveWeapNavigationUIController*))(Il2CppBase() + 0x39CE59C))(this);
	}
	template <typename T = bool> T IsShowWeaponSpecialScene() {
		return ((T (*)(UICommonReceiveWeapNavigationUIController*))(Il2CppBase() + 0x39CE63C))(this);
	}
	template <typename T = Il2CppString*> T GetBackgroundTexture() {
		return ((T (*)(UICommonReceiveWeapNavigationUIController*))(Il2CppBase() + 0x39CE6DC))(this);
	}
	template <typename T = bool> T IsEnableCameraClear() {
		return ((T (*)(UICommonReceiveWeapNavigationUIController*))(Il2CppBase() + 0x39CE794))(this);
	}
	template <typename T = void> T OnNavigationShowed(uintptr_t data, uintptr_t lastData) {
		return ((T (*)(UICommonReceiveWeapNavigationUIController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x39CE834))(this, data, lastData);
	}
	template <typename T = void> T OnNavigationWillClose(uintptr_t data, uintptr_t nextData) {
		return ((T (*)(UICommonReceiveWeapNavigationUIController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x39CECA8))(this, data, nextData);
	}
	template <typename T = void> T StopAnim() {
		return ((T (*)(UICommonReceiveWeapNavigationUIController*))(Il2CppBase() + 0x39CEEE8))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(UICommonReceiveWeapNavigationUIController*))(Il2CppBase() + 0x39CF10C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsShowWeapon() {
		return ((T (*)(UICommonReceiveWeapNavigationUIController*))(Il2CppBase() + 0x39CF114))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsShowWeaponSpecialScene() {
		return ((T (*)(UICommonReceiveWeapNavigationUIController*))(Il2CppBase() + 0x39CF11C))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetBackgroundTexture() {
		return ((T (*)(UICommonReceiveWeapNavigationUIController*))(Il2CppBase() + 0x39CF124))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsEnableCameraClear() {
		return ((T (*)(UICommonReceiveWeapNavigationUIController*))(Il2CppBase() + 0x39CF12C))(this);
	}

};

}
