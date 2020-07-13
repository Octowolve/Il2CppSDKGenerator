#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponProjectileHiveStick
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponProjectile_HiveStick"));
	}

	template <typename T = uintptr_t> T& m_HiveStickEffect() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& m_StickTransform() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppVector3> T& m_StickRelativePos() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = Il2CppVector3> T& m_StickNormalLocal() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& Actor() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> static T& CreateCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& DestoryCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> T& m_AudioPlayer() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = float> T& m_fProjFlightAniTime() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = float> T& m_fProjFlightRealAniTime() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = Il2CppVector3> T& m_fTransScale() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = Il2CppString*> T& TrailName() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& m_TrailGameObject() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& m_TrailGameObjectRenderer() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = bool> T& m_IsOpened() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeProjParms() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroySelf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyProj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateProjFlightTrailInFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayProjFlightAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSimulatorPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Explode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeadReplayCommonDestory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AttackTargetPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Open() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateOnSpawned() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostSticked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHiveStickEffectAssetIDByCampOfLocalPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadHiveStickEffectFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayHiveStickSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayHiveEndSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessHitInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindHitPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSiumlateStick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_OnSiumlateStick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSiumlateStickInSyncContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSiumlateStickInNtfContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnProjectileStick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddOcclusionEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}

	template <typename T = uintptr_t> T get_HiveStickEffect() {
		return ((T (*)(WeaponProjectileHiveStick*))(Il2CppBase() + 0x24337B8))(this);
	}
	template <typename T = uintptr_t> T GetActor() {
		return ((T (*)(WeaponProjectileHiveStick*))(Il2CppBase() + 0x24337C0))(this);
	}
	template <typename T = void> T InitializeProjParms(Il2CppVector3 InitLocation, Il2CppVector3 InitVelocity, uintptr_t data, int32_t weaponID, uint32_t skinID, uint32_t SpawnOwnerID, int32_t SpawnProjectileID) {
		return ((T (*)(WeaponProjectileHiveStick*, Il2CppVector3, Il2CppVector3, uintptr_t, int32_t, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x2433890))(this, InitLocation, InitVelocity, data, weaponID, skinID, SpawnOwnerID, SpawnProjectileID);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(WeaponProjectileHiveStick*))(Il2CppBase() + 0x2433C94))(this);
	}
	template <typename T = void> T DestroySelf() {
		return ((T (*)(WeaponProjectileHiveStick*))(Il2CppBase() + 0x2433D7C))(this);
	}
	template <typename T = void> T DestroyProj() {
		return ((T (*)(WeaponProjectileHiveStick*))(Il2CppBase() + 0x2434224))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponProjectileHiveStick*, float))(Il2CppBase() + 0x24344E8))(this, DeltaTime);
	}
	template <typename T = void> T UpdateProjFlightTrailInFire() {
		return ((T (*)(WeaponProjectileHiveStick*))(Il2CppBase() + 0x24347AC))(this);
	}
	template <typename T = void> T PlayProjFlightAnimation(float fDeltaTime) {
		return ((T (*)(WeaponProjectileHiveStick*, float))(Il2CppBase() + 0x2434B64))(this, fDeltaTime);
	}
	template <typename T = Il2CppVector3> T GetSimulatorPosition() {
		return ((T (*)(WeaponProjectileHiveStick*))(Il2CppBase() + 0x2434DD8))(this);
	}
	template <typename T = void> T Explode(Il2CppVector3 ExplodeLocation, bool bCauseDamage, uintptr_t hitTarget) {
		return ((T (*)(WeaponProjectileHiveStick*, Il2CppVector3, bool, uintptr_t))(Il2CppBase() + 0x2434F88))(this, ExplodeLocation, bCauseDamage, hitTarget);
	}
	template <typename T = void> static T DeadReplayCommonDestory(uint32_t actorID) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x24351F0))(0, actorID);
	}
	template <typename T = void> T AttackTargetPlayer(uint32_t uTargetID, float fDesiredReachTime) {
		return ((T (*)(WeaponProjectileHiveStick*, uint32_t, float))(Il2CppBase() + 0x24353DC))(this, uTargetID, fDesiredReachTime);
	}
	template <typename T = void> T Open() {
		return ((T (*)(WeaponProjectileHiveStick*))(Il2CppBase() + 0x24356AC))(this);
	}
	template <typename T = void> T SimulateOnSpawned(bool isHoldProjectile) {
		return ((T (*)(WeaponProjectileHiveStick*, bool))(Il2CppBase() + 0x243591C))(this, isHoldProjectile);
	}
	template <typename T = void> T PostSticked(Il2CppVector3 stickNormal) {
		return ((T (*)(WeaponProjectileHiveStick*, Il2CppVector3))(Il2CppBase() + 0x2435A3C))(this, stickNormal);
	}
	template <typename T = int32_t> T GetHiveStickEffectAssetIDByCampOfLocalPawn() {
		return ((T (*)(WeaponProjectileHiveStick*))(Il2CppBase() + 0x2435E4C))(this);
	}
	template <typename T = void> T OnLoadHiveStickEffectFinish(Il2CppVector3 stickNormal) {
		return ((T (*)(WeaponProjectileHiveStick*, Il2CppVector3))(Il2CppBase() + 0x2436410))(this, stickNormal);
	}
	template <typename T = void> T PlayHiveStickSound() {
		return ((T (*)(WeaponProjectileHiveStick*))(Il2CppBase() + 0x2436180))(this);
	}
	template <typename T = void> T PlayHiveEndSound() {
		return ((T (*)(WeaponProjectileHiveStick*))(Il2CppBase() + 0x2433F94))(this);
	}
	template <typename T = void> T ProcessHitInfo(uintptr_t info) {
		return ((T (*)(WeaponProjectileHiveStick*, uintptr_t))(Il2CppBase() + 0x2436744))(this, info);
	}
	template <typename T = uintptr_t> T FindHitPart(uintptr_t pawn, uintptr_t group) {
		return ((T (*)(WeaponProjectileHiveStick*, uintptr_t, uintptr_t))(Il2CppBase() + 0x24375F8))(this, pawn, group);
	}
	template <typename T = void> T OnSiumlateStick(uintptr_t msg) {
		return ((T (*)(WeaponProjectileHiveStick*, uintptr_t))(Il2CppBase() + 0x24377A8))(this, msg);
	}
	template <typename T = void> T OnSiumlateStick_1(uintptr_t msg) {
		return ((T (*)(WeaponProjectileHiveStick*, uintptr_t))(Il2CppBase() + 0x2437F50))(this, msg);
	}
	template <typename T = void> T OnSiumlateStickInSyncContent(uintptr_t msg) {
		return ((T (*)(WeaponProjectileHiveStick*, uintptr_t))(Il2CppBase() + 0x2438050))(this, msg);
	}
	template <typename T = void> T OnSiumlateStickInNtfContent(uintptr_t msg) {
		return ((T (*)(WeaponProjectileHiveStick*, uintptr_t))(Il2CppBase() + 0x24378A8))(this, msg);
	}
	template <typename T = void> T OnProjectileStick(bool confirmed) {
		return ((T (*)(WeaponProjectileHiveStick*, bool))(Il2CppBase() + 0x24385C0))(this, confirmed);
	}
	template <typename T = bool> T get_SupportOcclusion() {
		return ((T (*)(WeaponProjectileHiveStick*))(Il2CppBase() + 0x24386B8))(this);
	}
	template <typename T = void> T AddOcclusionEffect() {
		return ((T (*)(WeaponProjectileHiveStick*))(Il2CppBase() + 0x24386C0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetActor() {
		return ((T (*)(WeaponProjectileHiveStick*))(Il2CppBase() + 0x24387E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitializeProjParms(Il2CppVector3 P0, Il2CppVector3 P1, uintptr_t P2, int32_t P3, uint32_t P4, uint32_t P5, int32_t P6) {
		return ((T (*)(WeaponProjectileHiveStick*, Il2CppVector3, Il2CppVector3, uintptr_t, int32_t, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x24387E4))(this, P0, P1, P2, P3, P4, P5, P6);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(WeaponProjectileHiveStick*))(Il2CppBase() + 0x2438838))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DestroySelf() {
		return ((T (*)(WeaponProjectileHiveStick*))(Il2CppBase() + 0x243883C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DestroyProj() {
		return ((T (*)(WeaponProjectileHiveStick*))(Il2CppBase() + 0x2438840))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponProjectileHiveStick*, float))(Il2CppBase() + 0x2438844))(this, P0);
	}
	template <typename T = Il2CppVector3> T xLuaBaseProxy_GetSimulatorPosition() {
		return ((T (*)(WeaponProjectileHiveStick*))(Il2CppBase() + 0x2438848))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Explode(Il2CppVector3 P0, bool P1, uintptr_t P2) {
		return ((T (*)(WeaponProjectileHiveStick*, Il2CppVector3, bool, uintptr_t))(Il2CppBase() + 0x2438858))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_SimulateOnSpawned(bool P0) {
		return ((T (*)(WeaponProjectileHiveStick*, bool))(Il2CppBase() + 0x243887C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ProcessHitInfo(uintptr_t P0) {
		return ((T (*)(WeaponProjectileHiveStick*, uintptr_t))(Il2CppBase() + 0x2438880))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_AddOcclusionEffect() {
		return ((T (*)(WeaponProjectileHiveStick*))(Il2CppBase() + 0x2438884))(this);
	}

};

}
