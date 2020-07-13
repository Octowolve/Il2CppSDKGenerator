#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AIWeaponWithRemoteAttackBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AIWeaponWithRemoteAttackBase"));
	}

	template <typename T = uintptr_t> T& ProjectileType() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& ProjFlightAssetID() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& ProjExplosionAssetID() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& m_SocketLaunchProj() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& RemoteAttackRange() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& ProjMaxSpeed() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& ProjGravity() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& MaxAttackAngle() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = float> T& MinDamagePercent() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& ProjDamageRange() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = bool> T& IsGrenade() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> T& GrenadeExplodeTime() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = float> static T& EstimateReachTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ValidateOwner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsRemoteWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanReachTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanDoRemoteAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LaunchProj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalInitVelocityForProj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalInitVelocityForProjByAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CalInitVelocityForProjByAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalInitVelocityForProjBySpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_CalInitVelocityForProjByAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBeginAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = bool> T ValidateOwner() {
		return ((T (*)(AIWeaponWithRemoteAttackBase*))(Il2CppBase() + 0x49BA1C4))(this);
	}
	template <typename T = bool> T IsRemoteWeapon() {
		return ((T (*)(AIWeaponWithRemoteAttackBase*))(Il2CppBase() + 0x49BA37C))(this);
	}
	template <typename T = void> T InitWeapon() {
		return ((T (*)(AIWeaponWithRemoteAttackBase*))(Il2CppBase() + 0x49BA44C))(this);
	}
	template <typename T = bool> T CanAttack(uintptr_t InTarget, int32_t Mode) {
		return ((T (*)(AIWeaponWithRemoteAttackBase*, uintptr_t, int32_t))(Il2CppBase() + 0x49BA55C))(this, InTarget, Mode);
	}
	template <typename T = bool> T CanReachTarget(float Dist, int32_t Mode) {
		return ((T (*)(AIWeaponWithRemoteAttackBase*, float, int32_t))(Il2CppBase() + 0x49BA680))(this, Dist, Mode);
	}
	template <typename T = bool> T CanDoRemoteAttack(uintptr_t InTarget) {
		return ((T (*)(AIWeaponWithRemoteAttackBase*, uintptr_t))(Il2CppBase() + 0x49BA7C0))(this, InTarget);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T LaunchProj(Il2CppVector3 TargetPos) {
		return ((T (*)(AIWeaponWithRemoteAttackBase*, Il2CppVector3))(Il2CppBase() + 0x49BA898))(this, TargetPos);
	}
	template <typename T = Il2CppVector3> T CalInitVelocityForProj(Il2CppVector3 TargetPos, float ProjGravity) {
		return ((T (*)(AIWeaponWithRemoteAttackBase*, Il2CppVector3, float))(Il2CppBase() + 0x49BAB8C))(this, TargetPos, ProjGravity);
	}
	template <typename T = Il2CppVector3> static T CalInitVelocityForProjByAngle(Il2CppVector3 TargetPos, uintptr_t LaunchSocketTran, float ProjGravity, float AngleInDeg) {
		return ((T (*)(void *, Il2CppVector3, uintptr_t, float, float))(Il2CppBase() + 0x49BACB8))(0, TargetPos, LaunchSocketTran, ProjGravity, AngleInDeg);
	}
	template <typename T = Il2CppVector3> static T CalInitVelocityForProjByAngle_1(Il2CppVector3 TargetPos, Il2CppVector3 LaunchPos, float ProjGravity, float AngleInDeg) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float, float))(Il2CppBase() + 0x49BAE44))(0, TargetPos, LaunchPos, ProjGravity, AngleInDeg);
	}
	template <typename T = Il2CppVector3> static T CalInitVelocityForProjBySpeed(Il2CppVector3 TargetPos, Il2CppVector3 LaunchPos, float ProjGravity, float speed) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float, float))(Il2CppBase() + 0x49BB27C))(0, TargetPos, LaunchPos, ProjGravity, speed);
	}
	template <typename T = Il2CppVector3> T CalInitVelocityForProjByAngle_2(Il2CppVector3 TargetPos, float ProjGravity, float AngleInDeg) {
		return ((T (*)(AIWeaponWithRemoteAttackBase*, Il2CppVector3, float, float))(Il2CppBase() + 0x49BB4CC))(this, TargetPos, ProjGravity, AngleInDeg);
	}
	template <typename T = void> T OnBeginAttack(int32_t Mode) {
		return ((T (*)(AIWeaponWithRemoteAttackBase*, int32_t))(Il2CppBase() + 0x49BB624))(this, Mode);
	}
	template <typename T = bool> T xLuaBaseProxy_ValidateOwner() {
		return ((T (*)(AIWeaponWithRemoteAttackBase*))(Il2CppBase() + 0x49BB70C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsRemoteWeapon() {
		return ((T (*)(AIWeaponWithRemoteAttackBase*))(Il2CppBase() + 0x49BB710))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitWeapon() {
		return ((T (*)(AIWeaponWithRemoteAttackBase*))(Il2CppBase() + 0x49BB714))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CanAttack(uintptr_t P0, int32_t P1) {
		return ((T (*)(AIWeaponWithRemoteAttackBase*, uintptr_t, int32_t))(Il2CppBase() + 0x49BB718))(this, P0, P1);
	}
	template <typename T = bool> T xLuaBaseProxy_CanReachTarget(float P0, int32_t P1) {
		return ((T (*)(AIWeaponWithRemoteAttackBase*, float, int32_t))(Il2CppBase() + 0x49BB71C))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnBeginAttack(int32_t P0) {
		return ((T (*)(AIWeaponWithRemoteAttackBase*, int32_t))(Il2CppBase() + 0x49BB720))(this, P0);
	}

};

}
