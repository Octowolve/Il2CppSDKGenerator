#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.TrainingGame {

class WeaponProjectileTrainingTargetFly
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.TrainingGame", "WeaponProjectile_TrainingTargetFly"));
	}

	template <typename T = uintptr_t> T& Actor() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeProjParms() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Explode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T get_EffectLoadPriority() {
		return ((T (*)(WeaponProjectileTrainingTargetFly*))(Il2CppBase() + 0x3D935D8))(this);
	}
	template <typename T = uintptr_t> T GetActor() {
		return ((T (*)(WeaponProjectileTrainingTargetFly*))(Il2CppBase() + 0x3D935E0))(this);
	}
	template <typename T = void> T InitializeProjParms(Il2CppVector3 InitLocation, Il2CppVector3 InitVelocity, uintptr_t data, int32_t weaponID, uint32_t skinID, uint32_t SpawnOwnerID, int32_t SpawnProjectileID) {
		return ((T (*)(WeaponProjectileTrainingTargetFly*, Il2CppVector3, Il2CppVector3, uintptr_t, int32_t, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x3D93680))(this, InitLocation, InitVelocity, data, weaponID, skinID, SpawnOwnerID, SpawnProjectileID);
	}
	template <typename T = void> T Explode(Il2CppVector3 ExplodeLocation, bool bCauseDamage, uintptr_t hitTarget) {
		return ((T (*)(WeaponProjectileTrainingTargetFly*, Il2CppVector3, bool, uintptr_t))(Il2CppBase() + 0x3D937F4))(this, ExplodeLocation, bCauseDamage, hitTarget);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetActor() {
		return ((T (*)(WeaponProjectileTrainingTargetFly*))(Il2CppBase() + 0x3D93994))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitializeProjParms(Il2CppVector3 P0, Il2CppVector3 P1, uintptr_t P2, int32_t P3, uint32_t P4, uint32_t P5, int32_t P6) {
		return ((T (*)(WeaponProjectileTrainingTargetFly*, Il2CppVector3, Il2CppVector3, uintptr_t, int32_t, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x3D9399C))(this, P0, P1, P2, P3, P4, P5, P6);
	}
	template <typename T = void> T xLuaBaseProxy_Explode(Il2CppVector3 P0, bool P1, uintptr_t P2) {
		return ((T (*)(WeaponProjectileTrainingTargetFly*, Il2CppVector3, bool, uintptr_t))(Il2CppBase() + 0x3D939F4))(this, P0, P1, P2);
	}

};

}
