#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UICommonReceiveItemNavigationUIController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UICommonReceiveItemNavigationUIController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_GetBackgroundTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEnableCameraClear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationShowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationWillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(UICommonReceiveItemNavigationUIController*))(Il2CppBase() + 0x39CCC6C))(this);
	}
	template <typename T = bool> T IsShowWeapon() {
		return ((T (*)(UICommonReceiveItemNavigationUIController*))(Il2CppBase() + 0x39CCD0C))(this);
	}
	template <typename T = Il2CppString*> T GetBackgroundTexture() {
		return ((T (*)(UICommonReceiveItemNavigationUIController*))(Il2CppBase() + 0x39CCDAC))(this);
	}
	template <typename T = bool> T IsEnableCameraClear() {
		return ((T (*)(UICommonReceiveItemNavigationUIController*))(Il2CppBase() + 0x39CCE64))(this);
	}
	template <typename T = void> T OnNavigationShowed(uintptr_t data, uintptr_t lastData) {
		return ((T (*)(UICommonReceiveItemNavigationUIController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x39CCF04))(this, data, lastData);
	}
	template <typename T = void> T OnNavigationWillClose(uintptr_t data, uintptr_t nextData) {
		return ((T (*)(UICommonReceiveItemNavigationUIController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x39CD384))(this, data, nextData);
	}
	template <typename T = void> T StopAnim() {
		return ((T (*)(UICommonReceiveItemNavigationUIController*))(Il2CppBase() + 0x39CD4F0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(UICommonReceiveItemNavigationUIController*))(Il2CppBase() + 0x39CD6C8))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsShowWeapon() {
		return ((T (*)(UICommonReceiveItemNavigationUIController*))(Il2CppBase() + 0x39CD6D0))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetBackgroundTexture() {
		return ((T (*)(UICommonReceiveItemNavigationUIController*))(Il2CppBase() + 0x39CD6D8))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsEnableCameraClear() {
		return ((T (*)(UICommonReceiveItemNavigationUIController*))(Il2CppBase() + 0x39CD6E0))(this);
	}

};

}
