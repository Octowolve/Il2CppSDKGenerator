#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class WeaponProjectileDemonSeed
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "WeaponProjectile_DemonSeed"));
	}

	template <typename T = uintptr_t> T& Actor() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& glowEffectRoot() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& trailEffect() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& glowEffect() {
		return *(T*)((uintptr_t)this + 0xF4);
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
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyProj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayFlightEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessHitInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T GetActor() {
		return ((T (*)(WeaponProjectileDemonSeed*))(Il2CppBase() + 0x435DE98))(this);
	}
	template <typename T = void> T InitializeProjParms(Il2CppVector3 InitLocation, Il2CppVector3 InitVelocity, uintptr_t InputConfig, int32_t weaponID, uint32_t skinID, uint32_t SpawnOwnerID, int32_t SpawnProjectileID) {
		return ((T (*)(WeaponProjectileDemonSeed*, Il2CppVector3, Il2CppVector3, uintptr_t, int32_t, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x435DF38))(this, InitLocation, InitVelocity, InputConfig, weaponID, skinID, SpawnOwnerID, SpawnProjectileID);
	}
	template <typename T = void> T Explode(Il2CppVector3 ExplodeLocation, bool bCauseDamage, uintptr_t hitTarget) {
		return ((T (*)(WeaponProjectileDemonSeed*, Il2CppVector3, bool, uintptr_t))(Il2CppBase() + 0x435E0B8))(this, ExplodeLocation, bCauseDamage, hitTarget);
	}
	template <typename T = void> T DestroyProj() {
		return ((T (*)(WeaponProjectileDemonSeed*))(Il2CppBase() + 0x435E1C4))(this);
	}
	template <typename T = void> T PlayFlightEffect() {
		return ((T (*)(WeaponProjectileDemonSeed*))(Il2CppBase() + 0x435E3CC))(this);
	}
	template <typename T = void> T ProcessHitInfo(uintptr_t info) {
		return ((T (*)(WeaponProjectileDemonSeed*, uintptr_t))(Il2CppBase() + 0x435EA18))(this, info);
	}
	template <typename T = uintptr_t> T AdjustRotation() {
		return ((T (*)(WeaponProjectileDemonSeed*))(Il2CppBase() + 0x435EE90))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetActor() {
		return ((T (*)(WeaponProjectileDemonSeed*))(Il2CppBase() + 0x435EF78))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitializeProjParms(Il2CppVector3 P0, Il2CppVector3 P1, uintptr_t P2, int32_t P3, uint32_t P4, uint32_t P5, int32_t P6) {
		return ((T (*)(WeaponProjectileDemonSeed*, Il2CppVector3, Il2CppVector3, uintptr_t, int32_t, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x435EF80))(this, P0, P1, P2, P3, P4, P5, P6);
	}
	template <typename T = void> T xLuaBaseProxy_Explode(Il2CppVector3 P0, bool P1, uintptr_t P2) {
		return ((T (*)(WeaponProjectileDemonSeed*, Il2CppVector3, bool, uintptr_t))(Il2CppBase() + 0x435EFD8))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_DestroyProj() {
		return ((T (*)(WeaponProjectileDemonSeed*))(Il2CppBase() + 0x435F004))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayFlightEffect() {
		return ((T (*)(WeaponProjectileDemonSeed*))(Il2CppBase() + 0x435F00C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ProcessHitInfo(uintptr_t P0) {
		return ((T (*)(WeaponProjectileDemonSeed*, uintptr_t))(Il2CppBase() + 0x435F014))(this, P0);
	}

};

}
