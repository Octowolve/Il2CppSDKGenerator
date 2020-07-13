#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponSelfAniComponentScythe
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponSelfAniComponent_Scythe"));
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
		return ((T (*)(WeaponSelfAniComponentScythe*))(Il2CppBase() + 0x33A5DA8))(this);
	}
	template <typename T = bool> T ThirdPersonStopFireHasSelfImplementation() {
		return ((T (*)(WeaponSelfAniComponentScythe*))(Il2CppBase() + 0x33A5E48))(this);
	}
	template <typename T = void> T InitWeaponSelfAnimatorController() {
		return ((T (*)(WeaponSelfAniComponentScythe*))(Il2CppBase() + 0x33A5EE8))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(WeaponSelfAniComponentScythe*, float))(Il2CppBase() + 0x33A5F8C))(this, deltaTime);
	}
	template <typename T = bool> T xLuaBaseProxy_ThirdPersonStartFireHasSelfImplmentation() {
		return ((T (*)(WeaponSelfAniComponentScythe*))(Il2CppBase() + 0x33A603C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_ThirdPersonStopFireHasSelfImplementation() {
		return ((T (*)(WeaponSelfAniComponentScythe*))(Il2CppBase() + 0x33A6040))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitWeaponSelfAnimatorController() {
		return ((T (*)(WeaponSelfAniComponentScythe*))(Il2CppBase() + 0x33A6044))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponSelfAniComponentScythe*, float))(Il2CppBase() + 0x33A6048))(this, P0);
	}

};

}
