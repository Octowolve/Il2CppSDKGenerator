#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponImpactComponentZombieMelee
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponImpactComponent_ZombieMelee"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitImpactEffects() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnFireImpact() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T InitImpactEffects() {
		return ((T (*)(WeaponImpactComponentZombieMelee*))(Il2CppBase() + 0x240AF18))(this);
	}
	template <typename T = uintptr_t> T SpawnFireImpact(Il2CppVector3 HitLocation, Il2CppVector3 OutLocation, Il2CppVector3 HitNormal, uintptr_t HitMaterial, uintptr_t parent, bool bPlayDecal) {
		return ((T (*)(WeaponImpactComponentZombieMelee*, Il2CppVector3, Il2CppVector3, Il2CppVector3, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x240B0C0))(this, HitLocation, OutLocation, HitNormal, HitMaterial, parent, bPlayDecal);
	}
	template <typename T = void> T xLuaBaseProxy_InitImpactEffects() {
		return ((T (*)(WeaponImpactComponentZombieMelee*))(Il2CppBase() + 0x240B300))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_SpawnFireImpact(Il2CppVector3 P0, Il2CppVector3 P1, Il2CppVector3 P2, uintptr_t P3, uintptr_t P4, bool P5) {
		return ((T (*)(WeaponImpactComponentZombieMelee*, Il2CppVector3, Il2CppVector3, Il2CppVector3, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x240B304))(this, P0, P1, P2, P3, P4, P5);
	}

};

}
