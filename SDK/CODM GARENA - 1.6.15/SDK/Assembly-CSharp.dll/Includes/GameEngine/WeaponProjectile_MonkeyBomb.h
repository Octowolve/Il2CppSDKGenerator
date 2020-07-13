#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponProjectileMonkeyBomb
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponProjectile_MonkeyBomb"));
	}

	template <typename T = uintptr_t> T& Animator() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& ShineParticle() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& SharkParticle() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = bool> T& m_isShowActor() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = bool> T& m_ShouldEnterMusicState() {
		return *(T*)((uintptr_t)this + 0xF1);
	}
	template <typename T = bool> T& m_CanPlayMusic() {
		return *(T*)((uintptr_t)this + 0xF2);
	}
	template <typename T = uintptr_t> T& m_MonkeyBombProjectileSimulator() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = int32_t> T& m_OutOfMapEffectID() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = bool> T& m_PlayedBGM() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& m_BRMonkeyBombAudio() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& m_AttackablekActor() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateSimulator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeProjParms() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyProj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroySelf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Destroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Explode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetIdleState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMusicState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnterMusicState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayActiveParticleEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = uintptr_t> T GetActor() {
		return ((T (*)(WeaponProjectileMonkeyBomb*))(Il2CppBase() + 0x243A310))(this);
	}
	template <typename T = uintptr_t> T CreateSimulator(uintptr_t data, Il2CppVector3 inInitLoc, Il2CppVector3 inInitVel, uintptr_t inHandler) {
		return ((T (*)(WeaponProjectileMonkeyBomb*, uintptr_t, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x243A3B0))(this, data, inInitLoc, inInitVel, inHandler);
	}
	template <typename T = void> T InitializeProjParms(Il2CppVector3 InitLocation, Il2CppVector3 InitVelocity, uintptr_t data, int32_t weaponID, uint32_t skinID, uint32_t SpawnOwnerID, int32_t SpawnProjectileID) {
		return ((T (*)(WeaponProjectileMonkeyBomb*, Il2CppVector3, Il2CppVector3, uintptr_t, int32_t, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x243A504))(this, InitLocation, InitVelocity, data, weaponID, skinID, SpawnOwnerID, SpawnProjectileID);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponProjectileMonkeyBomb*, float))(Il2CppBase() + 0x243AB94))(this, DeltaTime);
	}
	template <typename T = void> T ShowActor(bool isShow) {
		return ((T (*)(WeaponProjectileMonkeyBomb*, bool))(Il2CppBase() + 0x243A6C4))(this, isShow);
	}
	template <typename T = void> T DestroyProj() {
		return ((T (*)(WeaponProjectileMonkeyBomb*))(Il2CppBase() + 0x243B174))(this);
	}
	template <typename T = void> T DestroySelf() {
		return ((T (*)(WeaponProjectileMonkeyBomb*))(Il2CppBase() + 0x243B2C0))(this);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(WeaponProjectileMonkeyBomb*))(Il2CppBase() + 0x243B59C))(this);
	}
	template <typename T = void> T Explode(Il2CppVector3 ExplodeLocation, bool bCauseDamage, uintptr_t hitTarget) {
		return ((T (*)(WeaponProjectileMonkeyBomb*, Il2CppVector3, bool, uintptr_t))(Il2CppBase() + 0x243B824))(this, ExplodeLocation, bCauseDamage, hitTarget);
	}
	template <typename T = void> T SetIdleState() {
		return ((T (*)(WeaponProjectileMonkeyBomb*))(Il2CppBase() + 0x243BC14))(this);
	}
	template <typename T = void> T SetMusicState() {
		return ((T (*)(WeaponProjectileMonkeyBomb*))(Il2CppBase() + 0x243BCAC))(this);
	}
	template <typename T = void> T EnterMusicState() {
		return ((T (*)(WeaponProjectileMonkeyBomb*))(Il2CppBase() + 0x243AD7C))(this);
	}
	template <typename T = void> T PlayActiveParticleEffect() {
		return ((T (*)(WeaponProjectileMonkeyBomb*))(Il2CppBase() + 0x243BDB4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetActor() {
		return ((T (*)(WeaponProjectileMonkeyBomb*))(Il2CppBase() + 0x243BF2C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_CreateSimulator(uintptr_t P0, Il2CppVector3 P1, Il2CppVector3 P2, uintptr_t P3) {
		return ((T (*)(WeaponProjectileMonkeyBomb*, uintptr_t, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x243BF30))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T xLuaBaseProxy_InitializeProjParms(Il2CppVector3 P0, Il2CppVector3 P1, uintptr_t P2, int32_t P3, uint32_t P4, uint32_t P5, int32_t P6) {
		return ((T (*)(WeaponProjectileMonkeyBomb*, Il2CppVector3, Il2CppVector3, uintptr_t, int32_t, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x243BF6C))(this, P0, P1, P2, P3, P4, P5, P6);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponProjectileMonkeyBomb*, float))(Il2CppBase() + 0x243BFC0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_DestroyProj() {
		return ((T (*)(WeaponProjectileMonkeyBomb*))(Il2CppBase() + 0x243BFC4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DestroySelf() {
		return ((T (*)(WeaponProjectileMonkeyBomb*))(Il2CppBase() + 0x243BFC8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Destroy() {
		return ((T (*)(WeaponProjectileMonkeyBomb*))(Il2CppBase() + 0x243BFCC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Explode(Il2CppVector3 P0, bool P1, uintptr_t P2) {
		return ((T (*)(WeaponProjectileMonkeyBomb*, Il2CppVector3, bool, uintptr_t))(Il2CppBase() + 0x243BFD0))(this, P0, P1, P2);
	}

};

}
