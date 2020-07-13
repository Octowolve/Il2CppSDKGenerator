#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponProjectileTripMine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponProjectile_TripMine"));
	}

	template <typename T = uintptr_t> T& Actor() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& Animator() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& EffectAnimator() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = float> T& m_BounceTime() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = float> T& m_BounceDistance() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = float> T& m_DetectRange() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = float> T& m_PassRange() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = uintptr_t> static T& CreateCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& DestoryCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = float> T& mHideActorTime() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = float> T& mUpdateAnimatorTime() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = float> static T& sUpdateAnimatorTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = bool> T& islastFriend() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeProjParms() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeadReplayCommonDestory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsDestoryWhenPawnDied() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostSticked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Explode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyProj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayExplosionEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_PlayExplosionEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Open() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAnimator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateOnSpawned() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSiumlateStick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}

	template <typename T = uintptr_t> T GetActor() {
		return ((T (*)(WeaponProjectileTripMine*))(Il2CppBase() + 0x3399840))(this);
	}
	template <typename T = void> T InitializeProjParms(Il2CppVector3 InitLocation, Il2CppVector3 InitVelocity, uintptr_t InputConfig, int32_t weaponID, uint32_t skinID, uint32_t SpawnOwnerID, int32_t SpawnProjectileID) {
		return ((T (*)(WeaponProjectileTripMine*, Il2CppVector3, Il2CppVector3, uintptr_t, int32_t, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x3399910))(this, InitLocation, InitVelocity, InputConfig, weaponID, skinID, SpawnOwnerID, SpawnProjectileID);
	}
	template <typename T = void> static T DeadReplayCommonDestory(uint32_t actorID) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x3399D1C))(0, actorID);
	}
	template <typename T = bool> T IsDestoryWhenPawnDied() {
		return ((T (*)(WeaponProjectileTripMine*))(Il2CppBase() + 0x3399F08))(this);
	}
	template <typename T = void> T ShowActor(bool show) {
		return ((T (*)(WeaponProjectileTripMine*, bool))(Il2CppBase() + 0x3399FD8))(this, show);
	}
	template <typename T = void> T PostSticked(Il2CppVector3 stickNormal) {
		return ((T (*)(WeaponProjectileTripMine*, Il2CppVector3))(Il2CppBase() + 0x339A5A4))(this, stickNormal);
	}
	template <typename T = void> T Explode(Il2CppVector3 ExplodeLocation, bool bCauseDamage, uintptr_t hitTarget) {
		return ((T (*)(WeaponProjectileTripMine*, Il2CppVector3, bool, uintptr_t))(Il2CppBase() + 0x339A9B4))(this, ExplodeLocation, bCauseDamage, hitTarget);
	}
	template <typename T = void> T DestroyProj() {
		return ((T (*)(WeaponProjectileTripMine*))(Il2CppBase() + 0x339AB74))(this);
	}
	template <typename T = void> T PlayExplosionEffect(Il2CppVector3 pos, float atTime) {
		return ((T (*)(WeaponProjectileTripMine*, Il2CppVector3, float))(Il2CppBase() + 0x339AD8C))(this, pos, atTime);
	}
	template <typename T = void> T PlayExplosionEffect_1() {
		return ((T (*)(WeaponProjectileTripMine*))(Il2CppBase() + 0x339B028))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponProjectileTripMine*, float))(Il2CppBase() + 0x339B200))(this, DeltaTime);
	}
	template <typename T = void> T Open() {
		return ((T (*)(WeaponProjectileTripMine*))(Il2CppBase() + 0x339A7B8))(this);
	}
	template <typename T = void> T UpdateAnimator() {
		return ((T (*)(WeaponProjectileTripMine*))(Il2CppBase() + 0x339A10C))(this);
	}
	template <typename T = void> T SimulateOnSpawned(bool isHoldProjectile) {
		return ((T (*)(WeaponProjectileTripMine*, bool))(Il2CppBase() + 0x339B404))(this, isHoldProjectile);
	}
	template <typename T = void> T OnSiumlateStick(uintptr_t msg) {
		return ((T (*)(WeaponProjectileTripMine*, uintptr_t))(Il2CppBase() + 0x339B544))(this, msg);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetActor() {
		return ((T (*)(WeaponProjectileTripMine*))(Il2CppBase() + 0x339B878))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitializeProjParms(Il2CppVector3 P0, Il2CppVector3 P1, uintptr_t P2, int32_t P3, uint32_t P4, uint32_t P5, int32_t P6) {
		return ((T (*)(WeaponProjectileTripMine*, Il2CppVector3, Il2CppVector3, uintptr_t, int32_t, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x339B880))(this, P0, P1, P2, P3, P4, P5, P6);
	}
	template <typename T = bool> T xLuaBaseProxy_IsDestoryWhenPawnDied() {
		return ((T (*)(WeaponProjectileTripMine*))(Il2CppBase() + 0x339B8D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PostSticked(Il2CppVector3 P0) {
		return ((T (*)(WeaponProjectileTripMine*, Il2CppVector3))(Il2CppBase() + 0x339B8E0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Explode(Il2CppVector3 P0, bool P1, uintptr_t P2) {
		return ((T (*)(WeaponProjectileTripMine*, Il2CppVector3, bool, uintptr_t))(Il2CppBase() + 0x339B900))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_DestroyProj() {
		return ((T (*)(WeaponProjectileTripMine*))(Il2CppBase() + 0x339B92C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayExplosionEffect(Il2CppVector3 P0, float P1) {
		return ((T (*)(WeaponProjectileTripMine*, Il2CppVector3, float))(Il2CppBase() + 0x339B934))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_PlayExplosionEffect_1() {
		return ((T (*)(WeaponProjectileTripMine*))(Il2CppBase() + 0x339B95C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponProjectileTripMine*, float))(Il2CppBase() + 0x339B964))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SimulateOnSpawned(bool P0) {
		return ((T (*)(WeaponProjectileTripMine*, bool))(Il2CppBase() + 0x339B96C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnSiumlateStick(uintptr_t P0) {
		return ((T (*)(WeaponProjectileTripMine*, uintptr_t))(Il2CppBase() + 0x339B974))(this, P0);
	}

};

}
