#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GameDefine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GameDefine"));
	}

	template <typename T = bool> static T& EnableResolveWeaponJitter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& m_IsInAutoTest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> static T get_IsEditor() {
		return ((T (*)(void *))(Il2CppBase() + 0x2B39A80))(0);
	}
	template <typename T = bool> static T get_IsProduct() {
		return ((T (*)(void *))(Il2CppBase() + 0x2B39A88))(0);
	}
	template <typename T = bool> static T get_IsProductStandalone() {
		return ((T (*)(void *))(Il2CppBase() + 0x2B39A90))(0);
	}
	template <typename T = bool> static T get_IsMobile() {
		return ((T (*)(void *))(Il2CppBase() + 0x2B39A98))(0);
	}
	template <typename T = bool> static T get_IsMobileAndroid() {
		return ((T (*)(void *))(Il2CppBase() + 0x2B39AA0))(0);
	}
	template <typename T = bool> static T get_IsMobileIOS() {
		return ((T (*)(void *))(Il2CppBase() + 0x2B39AA8))(0);
	}
	template <typename T = bool> static T get_IsAndroid() {
		return ((T (*)(void *))(Il2CppBase() + 0x2B39AB0))(0);
	}
	template <typename T = bool> static T get_IsIOS() {
		return ((T (*)(void *))(Il2CppBase() + 0x2B39AB8))(0);
	}
	template <typename T = bool> static T get_IsEditorORStandalone() {
		return ((T (*)(void *))(Il2CppBase() + 0x2B39AC0))(0);
	}
	template <typename T = bool> static T get_IsWindowsStandalone() {
		return ((T (*)(void *))(Il2CppBase() + 0x2B39AC8))(0);
	}
	template <typename T = bool> static T get_IsShippingExternal() {
		return ((T (*)(void *))(Il2CppBase() + 0x2B39AD0))(0);
	}
	template <typename T = bool> static T get_IsIMSDKCN() {
		return ((T (*)(void *))(Il2CppBase() + 0x2B39AD8))(0);
	}
	template <typename T = bool> static T get_IsIMSDK() {
		return ((T (*)(void *))(Il2CppBase() + 0x2B39AE0))(0);
	}
	template <typename T = bool> static T get_IsIMSDKKing() {
		return ((T (*)(void *))(Il2CppBase() + 0x2B39AE8))(0);
	}
	template <typename T = bool> static T get_IsIMSDKGarenaSA() {
		return ((T (*)(void *))(Il2CppBase() + 0x2B39AF0))(0);
	}
	template <typename T = bool> static T get_IsIMSDKKorea() {
		return ((T (*)(void *))(Il2CppBase() + 0x2B39AF8))(0);
	}
	template <typename T = bool> static T get_IsIMSDKVNG() {
		return ((T (*)(void *))(Il2CppBase() + 0x2B39B00))(0);
	}
	template <typename T = bool> static T get_IsGarenaMatch() {
		return ((T (*)(void *))(Il2CppBase() + 0x2B39B08))(0);
	}
	template <typename T = bool> static T get_ShippingNoGM() {
		return ((T (*)(void *))(Il2CppBase() + 0x2B39B10))(0);
	}
	template <typename T = bool> static T get_IsInAutoTest() {
		return ((T (*)(void *))(Il2CppBase() + 0x2B39B18))(0);
	}
	template <typename T = void> static T set_IsInAutoTest(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x2B39B20))(0, value);
	}

};

}
