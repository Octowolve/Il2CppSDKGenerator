#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponFireComponentInstantSpread
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponFireComponent_InstantSpread"));
	}

	template <typename T = int32_t> T& m_OneShotFragNum() {
		return *(T*)((uintptr_t)this + 0x344);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T& m_FirstDamageDictionary() {
		return *(T*)((uintptr_t)this + 0x348);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcWeaponFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreprocessImpactListForPVE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFinalRotataion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FireAmmunition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponFireComponentInstantSpread*, uintptr_t, bool))(Il2CppBase() + 0x23EB664))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponFireComponentInstantSpread*))(Il2CppBase() + 0x23EB784))(this);
	}
	template <typename T = int32_t> T get_OneShotFragNum() {
		return ((T (*)(WeaponFireComponentInstantSpread*))(Il2CppBase() + 0x23EB840))(this);
	}
	template <typename T = bool> T CalcWeaponFire(Il2CppVector3 startPos, Il2CppVector3 dir, uintptr_t impactList, float checkRange, bool resetThroughParams) {
		return ((T (*)(WeaponFireComponentInstantSpread*, Il2CppVector3, Il2CppVector3, uintptr_t, float, bool))(Il2CppBase() + 0x23EB954))(this, startPos, dir, impactList, checkRange, resetThroughParams);
	}
	template <typename T = void> T PreprocessImpactListForPVE(uintptr_t impactList) {
		return ((T (*)(WeaponFireComponentInstantSpread*, uintptr_t))(Il2CppBase() + 0x23EBC3C))(this, impactList);
	}
	template <typename T = Il2CppQuaternion> T GetFinalRotataion(Il2CppQuaternion rot) {
		return ((T (*)(WeaponFireComponentInstantSpread*, Il2CppQuaternion))(Il2CppBase() + 0x23EBF80))(this, rot);
	}
	template <typename T = void> T FireAmmunition() {
		return ((T (*)(WeaponFireComponentInstantSpread*))(Il2CppBase() + 0x23EC064))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CopyProperties(uintptr_t P0, bool P1) {
		return ((T (*)(WeaponFireComponentInstantSpread*, uintptr_t, bool))(Il2CppBase() + 0x23ECD30))(this, P0, P1);
	}
	template <typename T = bool> T xLuaBaseProxy_CalcWeaponFire(Il2CppVector3 P0, Il2CppVector3 P1, uintptr_t P2, float P3, bool P4) {
		return ((T (*)(WeaponFireComponentInstantSpread*, Il2CppVector3, Il2CppVector3, uintptr_t, float, bool))(Il2CppBase() + 0x23ECD34))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T xLuaBaseProxy_FireAmmunition() {
		return ((T (*)(WeaponFireComponentInstantSpread*))(Il2CppBase() + 0x23ECD78))(this);
	}

};

}
