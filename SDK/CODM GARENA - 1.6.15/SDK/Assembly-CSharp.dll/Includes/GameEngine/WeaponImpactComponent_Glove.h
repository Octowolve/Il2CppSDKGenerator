#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponImpactComponentGlove
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponImpactComponent_Glove"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitImpactEffects() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnImpactDecal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T InitImpactEffects() {
		return ((T (*)(WeaponImpactComponentGlove*))(Il2CppBase() + 0x2408918))(this);
	}
	template <typename T = uintptr_t> T SpawnImpactDecal(uintptr_t DecalResID, Il2CppVector3 HitLocation, Il2CppVector3 OutLocation, Il2CppVector3 HitNormal, uintptr_t parent) {
		return ((T (*)(WeaponImpactComponentGlove*, uintptr_t, Il2CppVector3, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x2408D8C))(this, DecalResID, HitLocation, OutLocation, HitNormal, parent);
	}
	template <typename T = void> T xLuaBaseProxy_InitImpactEffects() {
		return ((T (*)(WeaponImpactComponentGlove*))(Il2CppBase() + 0x24091EC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_SpawnImpactDecal(uintptr_t P0, Il2CppVector3 P1, Il2CppVector3 P2, Il2CppVector3 P3, uintptr_t P4) {
		return ((T (*)(WeaponImpactComponentGlove*, uintptr_t, Il2CppVector3, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x2409808))(this, P0, P1, P2, P3, P4);
	}

};

}
