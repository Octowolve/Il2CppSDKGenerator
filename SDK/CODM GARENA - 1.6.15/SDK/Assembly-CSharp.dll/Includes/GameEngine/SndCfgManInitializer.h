#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class SndCfgManInitializer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "SndCfgManInitializer"));
	}

	template <typename T = uintptr_t> static T& WeaponSndMan() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& SceneEnvCfgMan() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& ModeSndMan() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& PickupSndMan() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& AvatarCfgMan() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& MatineeSndCfgMan() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Term() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> static T Init() {
		return ((T (*)(void *))(Il2CppBase() + 0x33F51B0))(0);
	}
	template <typename T = void> static T Term() {
		return ((T (*)(void *))(Il2CppBase() + 0x33F6330))(0);
	}
	template <typename T = uintptr_t> static T get_WeaponSndMan() {
		return ((T (*)(void *))(Il2CppBase() + 0x33F5D98))(0);
	}
	template <typename T = void> static T set_WeaponSndMan(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x33F5E18))(0, value);
	}
	template <typename T = uintptr_t> static T get_SceneEnvCfgMan() {
		return ((T (*)(void *))(Il2CppBase() + 0x33E90F8))(0);
	}
	template <typename T = void> static T set_SceneEnvCfgMan(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x33F60A4))(0, value);
	}
	template <typename T = uintptr_t> static T get_ModeSndMan() {
		return ((T (*)(void *))(Il2CppBase() + 0x33F5E9C))(0);
	}
	template <typename T = void> static T set_ModeSndMan(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x33F5F1C))(0, value);
	}
	template <typename T = uintptr_t> static T get_PickupSndMan() {
		return ((T (*)(void *))(Il2CppBase() + 0x33F5FA0))(0);
	}
	template <typename T = void> static T set_PickupSndMan(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x33F6020))(0, value);
	}
	template <typename T = uintptr_t> static T get_AvatarCfgMan() {
		return ((T (*)(void *))(Il2CppBase() + 0x33F622C))(0);
	}
	template <typename T = void> static T set_AvatarCfgMan(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x33F62AC))(0, value);
	}
	template <typename T = uintptr_t> static T get_MatineeSndCfgMan() {
		return ((T (*)(void *))(Il2CppBase() + 0x33F6128))(0);
	}
	template <typename T = void> static T set_MatineeSndCfgMan(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x33F61A8))(0, value);
	}

};

}
