#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SystemSwitch
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SystemSwitch"));
	}

	template <typename T = bool> static T& IsReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& RunWithAssetBundle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1);
	}
	template <typename T = bool> static T& allowLoadAllAssetInEditor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = bool> static T get_RunWithAssetBundle() {
		return ((T (*)(void *))(Il2CppBase() + 0x3F3D734))(0);
	}
	template <typename T = void> static T set_RunWithAssetBundle(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x3F3D7E4))(0, value);
	}
	template <typename T = bool> static T get_AllowLoadAllAssetInEditor() {
		return ((T (*)(void *))(Il2CppBase() + 0x3F3D898))(0);
	}
	template <typename T = void> static T set_AllowLoadAllAssetInEditor(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x3F3D948))(0, value);
	}
	template <typename T = void> static T Reset() {
		return ((T (*)(void *))(Il2CppBase() + 0x3F3D9FC))(0);
	}
	template <typename T = void> static T Shutdown() {
		return ((T (*)(void *))(Il2CppBase() + 0x3F3E250))(0);
	}
	template <typename T = void> static T Init() {
		return ((T (*)(void *))(Il2CppBase() + 0x3F3DB68))(0);
	}

};

}
