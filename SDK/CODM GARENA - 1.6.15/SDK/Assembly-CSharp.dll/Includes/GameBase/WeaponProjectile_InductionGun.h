#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponProjectileInductionGun
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponProjectile_InductionGun"));
	}

	template <typename T = float> T& ScanRange() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = float> T& ContinuousTime() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = bool> T& m_CanShareWithTeammate() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = float> T& m_AfterImageContinuousTime() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = float> T& m_DistanceToShowAfterImage() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& InductionArrowGO() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = Il2CppVector3> T& m_StickNormalLocal() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = bool> T& m_IsOpened() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& Actor() {
		return *(T*)((uintptr_t)this + 0x14C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Open() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Explode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroySelf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyProj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Destroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddStickInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateOnSpawned() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateAfterOpenEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateSpreadEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateAfterImage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckInArrangePawnList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSiumlateStick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostSticked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddOcclusionEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = uintptr_t> T GetActor() {
		return ((T (*)(WeaponProjectileInductionGun*))(Il2CppBase() + 0x3A63E0C))(this);
	}
	template <typename T = void> T InitializeProjParms(Il2CppVector3 InitLocation, Il2CppVector3 InitVelocity, uintptr_t data, int32_t weaponID, uint32_t skinID, uint32_t SpawnOwnerID, int32_t SpawnProjectileID) {
		return ((T (*)(WeaponProjectileInductionGun*, Il2CppVector3, Il2CppVector3, uintptr_t, int32_t, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x3A63EAC))(this, InitLocation, InitVelocity, data, weaponID, skinID, SpawnOwnerID, SpawnProjectileID);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponProjectileInductionGun*, float))(Il2CppBase() + 0x3A64368))(this, DeltaTime);
	}
	template <typename T = void> T Open() {
		return ((T (*)(WeaponProjectileInductionGun*))(Il2CppBase() + 0x3A64890))(this);
	}
	template <typename T = void> T Explode(Il2CppVector3 ExplodeLocation, bool bCauseDamage, uintptr_t hitTarget) {
		return ((T (*)(WeaponProjectileInductionGun*, Il2CppVector3, bool, uintptr_t))(Il2CppBase() + 0x3A64CA0))(this, ExplodeLocation, bCauseDamage, hitTarget);
	}
	template <typename T = void> T DestroySelf() {
		return ((T (*)(WeaponProjectileInductionGun*))(Il2CppBase() + 0x3A64EB4))(this);
	}
	template <typename T = void> T DestroyProj() {
		return ((T (*)(WeaponProjectileInductionGun*))(Il2CppBase() + 0x3A65078))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(WeaponProjectileInductionGun*))(Il2CppBase() + 0x3A653C0))(this);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(WeaponProjectileInductionGun*))(Il2CppBase() + 0x3A654DC))(this);
	}
	template <typename T = void> T AddStickInfo(uintptr_t attachTransform, Il2CppVector3 relativePosition, Il2CppVector3 pos) {
		return ((T (*)(WeaponProjectileInductionGun*, uintptr_t, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x3A655F8))(this, attachTransform, relativePosition, pos);
	}
	template <typename T = void> T SimulateOnSpawned(bool isHoldProjectile) {
		return ((T (*)(WeaponProjectileInductionGun*, bool))(Il2CppBase() + 0x3A65A40))(this, isHoldProjectile);
	}
	template <typename T = void> T CreateAfterOpenEffect() {
		return ((T (*)(WeaponProjectileInductionGun*))(Il2CppBase() + 0x3A64BF4))(this);
	}
	template <typename T = void> T CreateSpreadEffect() {
		return ((T (*)(WeaponProjectileInductionGun*))(Il2CppBase() + 0x3A65B60))(this);
	}
	template <typename T = void> T CreateAfterImage() {
		return ((T (*)(WeaponProjectileInductionGun*))(Il2CppBase() + 0x3A65DA8))(this);
	}
	template <typename T = void> T CheckInArrangePawnList(uintptr_t pawnList) {
		return ((T (*)(WeaponProjectileInductionGun*, uintptr_t))(Il2CppBase() + 0x3A6641C))(this, pawnList);
	}
	template <typename T = void> T OnSiumlateStick(bool isNtf, int32_t actroid, uintptr_t hostType, uint32_t hostID, Il2CppVector3 pos, Il2CppVector3 dir, unsigned char parts, uint32_t ownerID) {
		return ((T (*)(WeaponProjectileInductionGun*, bool, int32_t, uintptr_t, uint32_t, Il2CppVector3, Il2CppVector3, unsigned char, uint32_t))(Il2CppBase() + 0x3A668D8))(this, isNtf, actroid, hostType, hostID, pos, dir, parts, ownerID);
	}
	template <typename T = void> T PostSticked(Il2CppVector3 stickNormal) {
		return ((T (*)(WeaponProjectileInductionGun*, Il2CppVector3))(Il2CppBase() + 0x3A67080))(this, stickNormal);
	}
	template <typename T = bool> T get_SupportOcclusion() {
		return ((T (*)(WeaponProjectileInductionGun*))(Il2CppBase() + 0x3A673E0))(this);
	}
	template <typename T = void> T AddOcclusionEffect() {
		return ((T (*)(WeaponProjectileInductionGun*))(Il2CppBase() + 0x3A673E8))(this);
	}
	template <typename T = bool> T AddStickInfom__0(uintptr_t v) {
		return ((T (*)(WeaponProjectileInductionGun*, uintptr_t))(Il2CppBase() + 0x3A674D4))(this, v);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetActor() {
		return ((T (*)(WeaponProjectileInductionGun*))(Il2CppBase() + 0x3A67510))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitializeProjParms(Il2CppVector3 P0, Il2CppVector3 P1, uintptr_t P2, int32_t P3, uint32_t P4, uint32_t P5, int32_t P6) {
		return ((T (*)(WeaponProjectileInductionGun*, Il2CppVector3, Il2CppVector3, uintptr_t, int32_t, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x3A67518))(this, P0, P1, P2, P3, P4, P5, P6);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponProjectileInductionGun*, float))(Il2CppBase() + 0x3A6756C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Explode(Il2CppVector3 P0, bool P1, uintptr_t P2) {
		return ((T (*)(WeaponProjectileInductionGun*, Il2CppVector3, bool, uintptr_t))(Il2CppBase() + 0x3A67570))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_DestroySelf() {
		return ((T (*)(WeaponProjectileInductionGun*))(Il2CppBase() + 0x3A6759C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DestroyProj() {
		return ((T (*)(WeaponProjectileInductionGun*))(Il2CppBase() + 0x3A675A4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(WeaponProjectileInductionGun*))(Il2CppBase() + 0x3A675A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Destroy() {
		return ((T (*)(WeaponProjectileInductionGun*))(Il2CppBase() + 0x3A675B0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SimulateOnSpawned(bool P0) {
		return ((T (*)(WeaponProjectileInductionGun*, bool))(Il2CppBase() + 0x3A675B8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnSiumlateStick(bool P0, int32_t P1, uintptr_t P2, uint32_t P3, Il2CppVector3 P4, Il2CppVector3 P5, unsigned char P6, uint32_t P7) {
		return ((T (*)(WeaponProjectileInductionGun*, bool, int32_t, uintptr_t, uint32_t, Il2CppVector3, Il2CppVector3, unsigned char, uint32_t))(Il2CppBase() + 0x3A675C0))(this, P0, P1, P2, P3, P4, P5, P6, P7);
	}
	template <typename T = void> T xLuaBaseProxy_PostSticked(Il2CppVector3 P0) {
		return ((T (*)(WeaponProjectileInductionGun*, Il2CppVector3))(Il2CppBase() + 0x3A67618))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_AddOcclusionEffect() {
		return ((T (*)(WeaponProjectileInductionGun*))(Il2CppBase() + 0x3A67630))(this);
	}

};

}
