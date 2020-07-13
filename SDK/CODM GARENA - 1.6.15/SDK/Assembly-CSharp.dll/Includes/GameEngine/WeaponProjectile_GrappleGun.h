#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponProjectileGrappleGun
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponProjectile_GrappleGun"));
	}

	template <typename T = uintptr_t> T& m_LineRenderer() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& m_LineRenderCurve() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& m_NewLineBoneStart() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& m_NewLineBoneHandPos() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = Il2CppVector3> T& LineEndPos() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& m_CurveInitPositionList() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& m_CurveInitPositionExList() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& m_AniUpdateLocalPosList() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& m_AniUpdateWorldPosListByShootDir() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = Il2CppQuaternion> T& m_ShootQuaternion() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = Il2CppVector3> T& m_GrappleRushStartPos() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = bool> T& m_isShowActor() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = bool> T& m_isPlayTakeBack() {
		return *(T*)((uintptr_t)this + 0x12D);
	}
	template <typename T = float> T& m_fRopeLength() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = bool> T& m_IsPawnGrappleRushEnd() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& m_GrappleGunProjectileSimulator() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = bool> T& m_isStickTarget() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateSimulator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeProjParms() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSimulatedEndGrapRush() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ComputeRopeLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLineRenderCurvePos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Bezier() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RandomRotateCurve() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTakeBackAni() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessHitInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessGrapRushTargetPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTakeBackAni() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLineRender() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustDirByShootDir() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSraightLineRenderAni() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLineRenderAni() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLineRenderTakeBackAni() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReInitAniPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSiumlateStick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSiumlateStickMiss() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}

	template <typename T = uintptr_t> T CreateSimulator(uintptr_t data, Il2CppVector3 inInitLoc, Il2CppVector3 inInitVel, uintptr_t inHandler) {
		return ((T (*)(WeaponProjectileGrappleGun*, uintptr_t, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x242F4F4))(this, data, inInitLoc, inInitVel, inHandler);
	}
	template <typename T = void> T InitializeProjParms(Il2CppVector3 InitLocation, Il2CppVector3 InitVelocity, uintptr_t data, int32_t weaponID, uint32_t skinID, uint32_t SpawnOwnerID, int32_t SpawnProjectileID) {
		return ((T (*)(WeaponProjectileGrappleGun*, Il2CppVector3, Il2CppVector3, uintptr_t, int32_t, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x242F648))(this, InitLocation, InitVelocity, data, weaponID, skinID, SpawnOwnerID, SpawnProjectileID);
	}
	template <typename T = void> T OnSimulatedEndGrapRush(uint32_t playerID) {
		return ((T (*)(WeaponProjectileGrappleGun*, uint32_t))(Il2CppBase() + 0x24308F8))(this, playerID);
	}
	template <typename T = void> T ComputeRopeLength() {
		return ((T (*)(WeaponProjectileGrappleGun*))(Il2CppBase() + 0x2430444))(this);
	}
	template <typename T = void> T GetLineRenderCurvePos() {
		return ((T (*)(WeaponProjectileGrappleGun*))(Il2CppBase() + 0x242FAD4))(this);
	}
	template <typename T = Il2CppVector3> T Bezier(Il2CppVector3 p0, Il2CppVector3 p1, Il2CppVector3 p2, float t) {
		return ((T (*)(WeaponProjectileGrappleGun*, Il2CppVector3, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x2430BA0))(this, p0, p1, p2, t);
	}
	template <typename T = void> T RandomRotateCurve() {
		return ((T (*)(WeaponProjectileGrappleGun*))(Il2CppBase() + 0x2430E38))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponProjectileGrappleGun*, float))(Il2CppBase() + 0x2431040))(this, DeltaTime);
	}
	template <typename T = void> T ShowActor(bool isShow) {
		return ((T (*)(WeaponProjectileGrappleGun*, bool))(Il2CppBase() + 0x2430114))(this, isShow);
	}
	template <typename T = void> T ShowTakeBackAni(bool bPlay) {
		return ((T (*)(WeaponProjectileGrappleGun*, bool))(Il2CppBase() + 0x24320D8))(this, bPlay);
	}
	template <typename T = void> T ProcessHitInfo(uintptr_t info) {
		return ((T (*)(WeaponProjectileGrappleGun*, uintptr_t))(Il2CppBase() + 0x2432180))(this, info);
	}
	template <typename T = void> T ProcessGrapRushTargetPosition(Il2CppVector3 vTargetPos) {
		return ((T (*)(WeaponProjectileGrappleGun*, Il2CppVector3))(Il2CppBase() + 0x2432504))(this, vTargetPos);
	}
	template <typename T = void> T UpdateTakeBackAni() {
		return ((T (*)(WeaponProjectileGrappleGun*))(Il2CppBase() + 0x2431170))(this);
	}
	template <typename T = void> T UpdateLineRender() {
		return ((T (*)(WeaponProjectileGrappleGun*))(Il2CppBase() + 0x2431828))(this);
	}
	template <typename T = void> T AdjustDirByShootDir(Il2CppVector3 vStartPos, Il2CppVector3 vEndPos) {
		return ((T (*)(WeaponProjectileGrappleGun*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x2432A30))(this, vStartPos, vEndPos);
	}
	template <typename T = void> T UpdateSraightLineRenderAni(Il2CppVector3 vStartPos, Il2CppVector3 vEndPos) {
		return ((T (*)(WeaponProjectileGrappleGun*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x2432D38))(this, vStartPos, vEndPos);
	}
	template <typename T = void> T UpdateLineRenderAni(Il2CppVector3 vStartPos, Il2CppVector3 vEndPos) {
		return ((T (*)(WeaponProjectileGrappleGun*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x2433020))(this, vStartPos, vEndPos);
	}
	template <typename T = void> T UpdateLineRenderTakeBackAni(Il2CppVector3 vStartPos, Il2CppVector3 vEndPos) {
		return ((T (*)(WeaponProjectileGrappleGun*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x24326C0))(this, vStartPos, vEndPos);
	}
	template <typename T = void> T ReInitAniPosition() {
		return ((T (*)(WeaponProjectileGrappleGun*))(Il2CppBase() + 0x2431F60))(this);
	}
	template <typename T = void> T OnSiumlateStick(uintptr_t InMsg) {
		return ((T (*)(WeaponProjectileGrappleGun*, uintptr_t))(Il2CppBase() + 0x2433374))(this, InMsg);
	}
	template <typename T = void> T OnSiumlateStickMiss() {
		return ((T (*)(WeaponProjectileGrappleGun*))(Il2CppBase() + 0x2433520))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_CreateSimulator(uintptr_t P0, Il2CppVector3 P1, Il2CppVector3 P2, uintptr_t P3) {
		return ((T (*)(WeaponProjectileGrappleGun*, uintptr_t, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x24335C8))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T xLuaBaseProxy_InitializeProjParms(Il2CppVector3 P0, Il2CppVector3 P1, uintptr_t P2, int32_t P3, uint32_t P4, uint32_t P5, int32_t P6) {
		return ((T (*)(WeaponProjectileGrappleGun*, Il2CppVector3, Il2CppVector3, uintptr_t, int32_t, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x2433604))(this, P0, P1, P2, P3, P4, P5, P6);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponProjectileGrappleGun*, float))(Il2CppBase() + 0x2433658))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ProcessHitInfo(uintptr_t P0) {
		return ((T (*)(WeaponProjectileGrappleGun*, uintptr_t))(Il2CppBase() + 0x243365C))(this, P0);
	}

};

}
