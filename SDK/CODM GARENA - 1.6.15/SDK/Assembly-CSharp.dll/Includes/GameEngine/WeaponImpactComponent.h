#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponImpactComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponImpactComponent"));
	}

	template <typename T = uintptr_t> T& m_Weapon() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ImpactEffects() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& m_HitLocation() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_MaterialType() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_LastPlayTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& HasRecycle() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Destroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Create() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateByName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetShotFired() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponINIPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInited() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitImpactEffects() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadParamsFromConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnFireImpact() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SpawnFireImpact() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayImpact() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnImpactEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnImpactDecal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEffectDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecycle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = void> static T Destroy(uintptr_t comp) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2405D98))(0, comp);
	}
	template <typename T = uintptr_t> static T Create(uintptr_t type, uintptr_t owner) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2405E98))(0, type, owner);
	}
	template <typename T = uintptr_t> static T CreateByName(Il2CppString* typeName, uintptr_t owner) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x240610C))(0, typeName, owner);
	}
	template <typename T = int32_t> T GetShotFired() {
		return ((T (*)(WeaponImpactComponent*))(Il2CppBase() + 0x2406204))(this);
	}
	template <typename T = Il2CppString*> T GetWeaponINIPath() {
		return ((T (*)(WeaponImpactComponent*))(Il2CppBase() + 0x2406330))(this);
	}
	template <typename T = bool> T IsInited() {
		return ((T (*)(WeaponImpactComponent*))(Il2CppBase() + 0x240603C))(this);
	}
	template <typename T = void> T InitImpactEffects() {
		return ((T (*)(WeaponImpactComponent*))(Il2CppBase() + 0x240645C))(this);
	}
	template <typename T = void> T ReadParamsFromConfig() {
		return ((T (*)(WeaponImpactComponent*))(Il2CppBase() + 0x2406B98))(this);
	}
	template <typename T = void> T SpawnFireImpact(uintptr_t impactInfo, bool firstPerson) {
		return ((T (*)(WeaponImpactComponent*, uintptr_t, bool))(Il2CppBase() + 0x2406C30))(this, impactInfo, firstPerson);
	}
	template <typename T = uintptr_t> T SpawnFireImpact_1(Il2CppVector3 HitLocation, Il2CppVector3 OutLocation, Il2CppVector3 HitNormal, uintptr_t HitMaterial, uintptr_t parent, bool bPlayDecal) {
		return ((T (*)(WeaponImpactComponent*, Il2CppVector3, Il2CppVector3, Il2CppVector3, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x2407054))(this, HitLocation, OutLocation, HitNormal, HitMaterial, parent, bPlayDecal);
	}
	template <typename T = void> T PlayImpact(float interval, bool isForce) {
		return ((T (*)(WeaponImpactComponent*, float, bool))(Il2CppBase() + 0x24073CC))(this, interval, isForce);
	}
	template <typename T = uintptr_t> T SpawnImpactEffect(uintptr_t EffectResID, Il2CppVector3 HitLocation, Il2CppVector3 HitNormal, uintptr_t parent) {
		return ((T (*)(WeaponImpactComponent*, uintptr_t, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x24075FC))(this, EffectResID, HitLocation, HitNormal, parent);
	}
	template <typename T = uintptr_t> T SpawnImpactDecal(uintptr_t DecalResID, Il2CppVector3 HitLocation, Il2CppVector3 OutLocation, Il2CppVector3 HitNormal, uintptr_t parent) {
		return ((T (*)(WeaponImpactComponent*, uintptr_t, Il2CppVector3, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x2407A54))(this, DecalResID, HitLocation, OutLocation, HitNormal, parent);
	}
	template <typename T = void> T OnEffectDestroy(uintptr_t go) {
		return ((T (*)(WeaponImpactComponent*, uintptr_t))(Il2CppBase() + 0x2407F68))(this, go);
	}
	template <typename T = bool> T get_HasRecycle() {
		return ((T (*)(WeaponImpactComponent*))(Il2CppBase() + 0x24080E8))(this);
	}
	template <typename T = void> T set_HasRecycle(bool value) {
		return ((T (*)(WeaponImpactComponent*, bool))(Il2CppBase() + 0x24080F0))(this, value);
	}
	template <typename T = void> T OnRecycle() {
		return ((T (*)(WeaponImpactComponent*))(Il2CppBase() + 0x24080F8))(this);
	}

};

}
