#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponProjectileSmoke
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponProjectile_Smoke"));
	}

	template <typename T = bool> T& EnableMiniMapEffect() {
		return *(T*)((uintptr_t)this + 0xE1);
	}
	template <typename T = float> T& m_MinRange() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = float> T& m_MaxRange() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = float> T& m_SpreadDuration() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = float> T& m_HoldonDuration() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = float> T& m_DisappearDuration() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = float> T& m_SmokeEffectScale() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = bool> T& m_EnableSmoke() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = float> T& m_TimeSinceExplode() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = float> T& m_CurrentRegionSize() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeProjParms() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayExplosionEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_PlayExplosionEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSmokeColliderSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInSmokeRegion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSmokeInMiddle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSmokeInSameSide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDis() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Destroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayDestroyExplosionEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDeadReplayEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = void> T InitializeProjParms(Il2CppVector3 InitLocation, Il2CppVector3 InitVelocity, uintptr_t InputConfig, int32_t weaponID, uint32_t skinID, uint32_t SpawnOwnerID, int32_t SpawnProjectileID) {
		return ((T (*)(WeaponProjectileSmoke*, Il2CppVector3, Il2CppVector3, uintptr_t, int32_t, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x243D9D4))(this, InitLocation, InitVelocity, InputConfig, weaponID, skinID, SpawnOwnerID, SpawnProjectileID);
	}
	template <typename T = void> T PlayExplosionEffect(Il2CppVector3 pos, float atTime) {
		return ((T (*)(WeaponProjectileSmoke*, Il2CppVector3, float))(Il2CppBase() + 0x243DBA4))(this, pos, atTime);
	}
	template <typename T = void> T PlayExplosionEffect_1() {
		return ((T (*)(WeaponProjectileSmoke*))(Il2CppBase() + 0x243DC88))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponProjectileSmoke*, float))(Il2CppBase() + 0x243DEC8))(this, DeltaTime);
	}
	template <typename T = void> T UpdateSmokeColliderSize(float deltaTime) {
		return ((T (*)(WeaponProjectileSmoke*, float))(Il2CppBase() + 0x243DFCC))(this, deltaTime);
	}
	template <typename T = bool> T IsInSmokeRegion(Il2CppVector3 point) {
		return ((T (*)(WeaponProjectileSmoke*, Il2CppVector3))(Il2CppBase() + 0x243E1D8))(this, point);
	}
	template <typename T = bool> T IsSmokeInMiddle(Il2CppVector3 source, Il2CppVector3 target) {
		return ((T (*)(WeaponProjectileSmoke*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x243E398))(this, source, target);
	}
	template <typename T = bool> T IsSmokeInSameSide(Il2CppVector3 source, Il2CppVector3 target) {
		return ((T (*)(WeaponProjectileSmoke*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x243E760))(this, source, target);
	}
	template <typename T = int32_t> T GetDis() {
		return ((T (*)(WeaponProjectileSmoke*))(Il2CppBase() + 0x243E9C0))(this);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(WeaponProjectileSmoke*))(Il2CppBase() + 0x243EC10))(this);
	}
	template <typename T = void> T DelayDestroyExplosionEffect() {
		return ((T (*)(WeaponProjectileSmoke*))(Il2CppBase() + 0x243F268))(this);
	}
	template <typename T = void> T OnDeadReplayEnd() {
		return ((T (*)(WeaponProjectileSmoke*))(Il2CppBase() + 0x243F4BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitializeProjParms(Il2CppVector3 P0, Il2CppVector3 P1, uintptr_t P2, int32_t P3, uint32_t P4, uint32_t P5, int32_t P6) {
		return ((T (*)(WeaponProjectileSmoke*, Il2CppVector3, Il2CppVector3, uintptr_t, int32_t, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x243F6B4))(this, P0, P1, P2, P3, P4, P5, P6);
	}
	template <typename T = void> T xLuaBaseProxy_PlayExplosionEffect(Il2CppVector3 P0, float P1) {
		return ((T (*)(WeaponProjectileSmoke*, Il2CppVector3, float))(Il2CppBase() + 0x243F708))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_PlayExplosionEffect_1() {
		return ((T (*)(WeaponProjectileSmoke*))(Il2CppBase() + 0x243F728))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponProjectileSmoke*, float))(Il2CppBase() + 0x243F72C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Destroy() {
		return ((T (*)(WeaponProjectileSmoke*))(Il2CppBase() + 0x243F730))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDeadReplayEnd() {
		return ((T (*)(WeaponProjectileSmoke*))(Il2CppBase() + 0x243F734))(this);
	}

};

}
