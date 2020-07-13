#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponFireModeMgr
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponFireModeMgr"));
	}

	template <typename T = uintptr_t> static T& mInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& mFireModeControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateWeaponFireMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x4C49F00))(0);
	}
	template <typename T = uintptr_t> static T get_FireModeControl() {
		return ((T (*)(void *))(Il2CppBase() + 0x4C4A05C))(0);
	}
	template <typename T = uintptr_t> T CreateWeaponFireMode() {
		return ((T (*)(WeaponFireModeMgr*))(Il2CppBase() + 0x4C4A1A4))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(WeaponFireModeMgr*))(Il2CppBase() + 0x4C4A4C4))(this);
	}

};

}
