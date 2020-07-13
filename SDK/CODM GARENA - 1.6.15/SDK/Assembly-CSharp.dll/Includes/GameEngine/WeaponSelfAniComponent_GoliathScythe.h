#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponSelfAniComponentGoliathScythe
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponSelfAniComponent_GoliathScythe"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ThirdPersonStartFireHasSelfImplmentation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ThirdPersonStopFireHasSelfImplementation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitWeaponSelfAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = bool> T ThirdPersonStartFireHasSelfImplmentation() {
		return ((T (*)(WeaponSelfAniComponentGoliathScythe*))(Il2CppBase() + 0x33A5A64))(this);
	}
	template <typename T = bool> T ThirdPersonStopFireHasSelfImplementation() {
		return ((T (*)(WeaponSelfAniComponentGoliathScythe*))(Il2CppBase() + 0x33A5B04))(this);
	}
	template <typename T = void> T InitWeaponSelfAnimatorController() {
		return ((T (*)(WeaponSelfAniComponentGoliathScythe*))(Il2CppBase() + 0x33A5BA4))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(WeaponSelfAniComponentGoliathScythe*, float))(Il2CppBase() + 0x33A5C48))(this, deltaTime);
	}
	template <typename T = bool> T xLuaBaseProxy_ThirdPersonStartFireHasSelfImplmentation() {
		return ((T (*)(WeaponSelfAniComponentGoliathScythe*))(Il2CppBase() + 0x33A5CF8))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_ThirdPersonStopFireHasSelfImplementation() {
		return ((T (*)(WeaponSelfAniComponentGoliathScythe*))(Il2CppBase() + 0x33A5CFC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitWeaponSelfAnimatorController() {
		return ((T (*)(WeaponSelfAniComponentGoliathScythe*))(Il2CppBase() + 0x33A5D00))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponSelfAniComponentGoliathScythe*, float))(Il2CppBase() + 0x33A5D04))(this, P0);
	}

};

}
