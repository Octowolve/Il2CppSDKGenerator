#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponProjectileSparrowStick
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponProjectile_SparrowStick"));
	}

	template <typename T = float> T& ScanRange() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = float> T& ContinuousTime() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& ArrowheadGO() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& m_StickTransform() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = Il2CppVector3> T& m_StickRelativePos() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = Il2CppVector3> T& m_StickNormalLocal() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& Actor() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = bool> T& m_IsOpened() {
		return *(T*)((uintptr_t)this + 0x118);
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
	template <typename T = uintptr_t> static T& __Hotfix0_DestroySelf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyProj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddStickInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSimulatorPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Explode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Open() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateOnSpawned() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostSticked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessHitInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindHitPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSiumlateStick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_OnSiumlateStick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnProjectileStick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddOcclusionEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = uintptr_t> T GetActor() {
		return ((T (*)(WeaponProjectileSparrowStick*))(Il2CppBase() + 0x3396034))(this);
	}
	template <typename T = void> T InitializeProjParms(Il2CppVector3 InitLocation, Il2CppVector3 InitVelocity, uintptr_t data, int32_t weaponID, uint32_t skinID, uint32_t SpawnOwnerID, int32_t SpawnProjectileID) {
		return ((T (*)(WeaponProjectileSparrowStick*, Il2CppVector3, Il2CppVector3, uintptr_t, int32_t, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x33960D4))(this, InitLocation, InitVelocity, data, weaponID, skinID, SpawnOwnerID, SpawnProjectileID);
	}
	template <typename T = void> T DestroySelf() {
		return ((T (*)(WeaponProjectileSparrowStick*))(Il2CppBase() + 0x3396304))(this);
	}
	template <typename T = void> T DestroyProj() {
		return ((T (*)(WeaponProjectileSparrowStick*))(Il2CppBase() + 0x3396454))(this);
	}
	template <typename T = void> T AddStickInfo(uintptr_t aTarget, Il2CppVector3 pos) {
		return ((T (*)(WeaponProjectileSparrowStick*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x339660C))(this, aTarget, pos);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponProjectileSparrowStick*, float))(Il2CppBase() + 0x339689C))(this, DeltaTime);
	}
	template <typename T = Il2CppVector3> T GetSimulatorPosition() {
		return ((T (*)(WeaponProjectileSparrowStick*))(Il2CppBase() + 0x3396B2C))(this);
	}
	template <typename T = void> T Explode(Il2CppVector3 ExplodeLocation, bool bCauseDamage, uintptr_t hitTarget) {
		return ((T (*)(WeaponProjectileSparrowStick*, Il2CppVector3, bool, uintptr_t))(Il2CppBase() + 0x3396CAC))(this, ExplodeLocation, bCauseDamage, hitTarget);
	}
	template <typename T = void> T Open() {
		return ((T (*)(WeaponProjectileSparrowStick*))(Il2CppBase() + 0x3396E34))(this);
	}
	template <typename T = void> T SimulateOnSpawned(bool isHoldProjectile) {
		return ((T (*)(WeaponProjectileSparrowStick*, bool))(Il2CppBase() + 0x33970EC))(this, isHoldProjectile);
	}
	template <typename T = void> T PostSticked(Il2CppVector3 stickNormal) {
		return ((T (*)(WeaponProjectileSparrowStick*, Il2CppVector3))(Il2CppBase() + 0x339721C))(this, stickNormal);
	}
	template <typename T = void> T ProcessHitInfo(uintptr_t info) {
		return ((T (*)(WeaponProjectileSparrowStick*, uintptr_t))(Il2CppBase() + 0x3397528))(this, info);
	}
	template <typename T = uintptr_t> T FindHitPart(uintptr_t pawn, uintptr_t group) {
		return ((T (*)(WeaponProjectileSparrowStick*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3398284))(this, pawn, group);
	}
	template <typename T = void> T OnSiumlateStick(uintptr_t msg) {
		return ((T (*)(WeaponProjectileSparrowStick*, uintptr_t))(Il2CppBase() + 0x3398404))(this, msg);
	}
	template <typename T = void> T OnSiumlateStick_1(uintptr_t msg) {
		return ((T (*)(WeaponProjectileSparrowStick*, uintptr_t))(Il2CppBase() + 0x3398DE0))(this, msg);
	}
	template <typename T = void> T OnProjectileStick(bool confirmed) {
		return ((T (*)(WeaponProjectileSparrowStick*, bool))(Il2CppBase() + 0x33993C0))(this, confirmed);
	}
	template <typename T = bool> T get_SupportOcclusion() {
		return ((T (*)(WeaponProjectileSparrowStick*))(Il2CppBase() + 0x3399484))(this);
	}
	template <typename T = void> T AddOcclusionEffect() {
		return ((T (*)(WeaponProjectileSparrowStick*))(Il2CppBase() + 0x339948C))(this);
	}
	template <typename T = bool> T AddStickInfom__0(uintptr_t v) {
		return ((T (*)(WeaponProjectileSparrowStick*, uintptr_t))(Il2CppBase() + 0x3399578))(this, v);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetActor() {
		return ((T (*)(WeaponProjectileSparrowStick*))(Il2CppBase() + 0x33995B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitializeProjParms(Il2CppVector3 P0, Il2CppVector3 P1, uintptr_t P2, int32_t P3, uint32_t P4, uint32_t P5, int32_t P6) {
		return ((T (*)(WeaponProjectileSparrowStick*, Il2CppVector3, Il2CppVector3, uintptr_t, int32_t, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x33995BC))(this, P0, P1, P2, P3, P4, P5, P6);
	}
	template <typename T = void> T xLuaBaseProxy_DestroySelf() {
		return ((T (*)(WeaponProjectileSparrowStick*))(Il2CppBase() + 0x3399614))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DestroyProj() {
		return ((T (*)(WeaponProjectileSparrowStick*))(Il2CppBase() + 0x339961C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponProjectileSparrowStick*, float))(Il2CppBase() + 0x3399624))(this, P0);
	}
	template <typename T = Il2CppVector3> T xLuaBaseProxy_GetSimulatorPosition() {
		return ((T (*)(WeaponProjectileSparrowStick*))(Il2CppBase() + 0x339962C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Explode(Il2CppVector3 P0, bool P1, uintptr_t P2) {
		return ((T (*)(WeaponProjectileSparrowStick*, Il2CppVector3, bool, uintptr_t))(Il2CppBase() + 0x3399640))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_SimulateOnSpawned(bool P0) {
		return ((T (*)(WeaponProjectileSparrowStick*, bool))(Il2CppBase() + 0x339966C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ProcessHitInfo(uintptr_t P0) {
		return ((T (*)(WeaponProjectileSparrowStick*, uintptr_t))(Il2CppBase() + 0x3399674))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_AddOcclusionEffect() {
		return ((T (*)(WeaponProjectileSparrowStick*))(Il2CppBase() + 0x339967C))(this);
	}

};

}
