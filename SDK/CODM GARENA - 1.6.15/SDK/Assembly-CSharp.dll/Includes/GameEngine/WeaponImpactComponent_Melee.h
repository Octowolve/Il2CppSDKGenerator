#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponImpactComponentMelee
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponImpactComponent_Melee"));
	}

	template <typename T = float> T& m_WeaponDecalScale() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_DecalRotation_1() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_DecalRotation_2() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitImpactEffects() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadParamsFromConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnImpactDecal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponImpactComponentMelee*, uintptr_t, bool))(Il2CppBase() + 0x240AB54))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponImpactComponentMelee*))(Il2CppBase() + 0x240AC38))(this);
	}
	template <typename T = void> T InitImpactEffects() {
		return ((T (*)(WeaponImpactComponentMelee*))(Il2CppBase() + 0x24091F0))(this);
	}
	template <typename T = void> T ReadParamsFromConfig() {
		return ((T (*)(WeaponImpactComponentMelee*))(Il2CppBase() + 0x240ACF4))(this);
	}
	template <typename T = uintptr_t> T SpawnImpactDecal(uintptr_t DecalResID, Il2CppVector3 HitLocation, Il2CppVector3 OutLocation, Il2CppVector3 HitNormal, uintptr_t parent) {
		return ((T (*)(WeaponImpactComponentMelee*, uintptr_t, Il2CppVector3, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x240985C))(this, DecalResID, HitLocation, OutLocation, HitNormal, parent);
	}
	template <typename T = void> T xLuaBaseProxy_InitImpactEffects() {
		return ((T (*)(WeaponImpactComponentMelee*))(Il2CppBase() + 0x240AE1C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ReadParamsFromConfig() {
		return ((T (*)(WeaponImpactComponentMelee*))(Il2CppBase() + 0x240AE20))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_SpawnImpactDecal(uintptr_t P0, Il2CppVector3 P1, Il2CppVector3 P2, Il2CppVector3 P3, uintptr_t P4) {
		return ((T (*)(WeaponImpactComponentMelee*, uintptr_t, Il2CppVector3, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x240AE24))(this, P0, P1, P2, P3, P4);
	}

};

}
