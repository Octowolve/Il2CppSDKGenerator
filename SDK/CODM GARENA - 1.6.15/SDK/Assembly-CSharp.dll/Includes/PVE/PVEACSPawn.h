#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class PVEACSPawn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "PVEACSPawn"));
	}

	template <typename T = float> T& walkSpeedScale() {
		return *(T*)((uintptr_t)this + 0xB04);
	}
	template <typename T = uintptr_t> T& _moveSpeedType() {
		return *(T*)((uintptr_t)this + 0xB08);
	}
	template <typename T = bool> T& raiseGun() {
		return *(T*)((uintptr_t)this + 0xB0C);
	}
	template <typename T = bool> T& lockHealth() {
		return *(T*)((uintptr_t)this + 0xB0D);
	}
	template <typename T = uintptr_t> T& m_ACSExternalFSM() {
		return *(T*)((uintptr_t)this + 0xB10);
	}
	template <typename T = uintptr_t> T& m_RootMotionComponent() {
		return *(T*)((uintptr_t)this + 0xB14);
	}
	template <typename T = Il2CppString*> T& dieAnimStateName() {
		return *(T*)((uintptr_t)this + 0xB18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMeshAssetID_3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMaxSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPhysicsStateChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAvatarLoadCompleted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigActorRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitFSM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GiveWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PerformStartFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PerformStopFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAnimatorPara() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDieAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigAnimComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessStandaloneMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStartMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStopMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPutUpWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPutDownWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEndMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Die() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSwitchRoleComponentType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSoundEmitterType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}

	template <typename T = uintptr_t> T get_moveSpeedType() {
		return ((T (*)(PVEACSPawn*))(Il2CppBase() + 0x436935C))(this);
	}
	template <typename T = void> T set_moveSpeedType(uintptr_t value) {
		return ((T (*)(PVEACSPawn*, uintptr_t))(Il2CppBase() + 0x4369364))(this, value);
	}
	template <typename T = bool> T get_raiseGun() {
		return ((T (*)(PVEACSPawn*))(Il2CppBase() + 0x436936C))(this);
	}
	template <typename T = void> T set_raiseGun(bool value) {
		return ((T (*)(PVEACSPawn*, bool))(Il2CppBase() + 0x4369374))(this, value);
	}
	template <typename T = bool> T get_lockHealth() {
		return ((T (*)(PVEACSPawn*))(Il2CppBase() + 0x436937C))(this);
	}
	template <typename T = void> T set_lockHealth(bool value) {
		return ((T (*)(PVEACSPawn*, bool))(Il2CppBase() + 0x4369384))(this, value);
	}
	template <typename T = uintptr_t> T get_DefaultPhysState() {
		return ((T (*)(PVEACSPawn*))(Il2CppBase() + 0x436938C))(this);
	}
	template <typename T = bool> T get_CalcWeaponAccuracy() {
		return ((T (*)(PVEACSPawn*))(Il2CppBase() + 0x4369394))(this);
	}
	template <typename T = bool> T get_UseFixedWeaponAccuracy() {
		return ((T (*)(PVEACSPawn*))(Il2CppBase() + 0x436939C))(this);
	}
	template <typename T = void> T set_ACSExternalFSM(uintptr_t value) {
		return ((T (*)(PVEACSPawn*, uintptr_t))(Il2CppBase() + 0x43693A4))(this, value);
	}
	template <typename T = uintptr_t> T get_CachedFSM() {
		return ((T (*)(PVEACSPawn*))(Il2CppBase() + 0x43693AC))(this);
	}
	template <typename T = uintptr_t> T get_RootMotionComponent() {
		return ((T (*)(PVEACSPawn*))(Il2CppBase() + 0x43693B4))(this);
	}
	template <typename T = void> T set_RootMotionComponent(uintptr_t value) {
		return ((T (*)(PVEACSPawn*, uintptr_t))(Il2CppBase() + 0x43693BC))(this, value);
	}
	template <typename T = int32_t> T GetMeshAssetID_3P() {
		return ((T (*)(PVEACSPawn*))(Il2CppBase() + 0x43693C4))(this);
	}
	template <typename T = void> T set_corpseLifeTime(float value) {
		return ((T (*)(PVEACSPawn*, float))(Il2CppBase() + 0x4369464))(this, value);
	}
	template <typename T = void> T InitPawn(uintptr_t info) {
		return ((T (*)(PVEACSPawn*, uintptr_t))(Il2CppBase() + 0x436946C))(this, info);
	}
	template <typename T = float> T GetMaxSpeed() {
		return ((T (*)(PVEACSPawn*))(Il2CppBase() + 0x43695D0))(this);
	}
	template <typename T = void> T OnPhysicsStateChanged(uintptr_t preState, uintptr_t curState) {
		return ((T (*)(PVEACSPawn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4369798))(this, preState, curState);
	}
	template <typename T = void> T OnAvatarLoadCompleted() {
		return ((T (*)(PVEACSPawn*))(Il2CppBase() + 0x4369A5C))(this);
	}
	template <typename T = void> T ConfigActorRoot() {
		return ((T (*)(PVEACSPawn*))(Il2CppBase() + 0x4369F90))(this);
	}
	template <typename T = void> T InitFSM() {
		return ((T (*)(PVEACSPawn*))(Il2CppBase() + 0x436A028))(this);
	}
	template <typename T = void> T GiveWeapon() {
		return ((T (*)(PVEACSPawn*))(Il2CppBase() + 0x436A0C0))(this);
	}
	template <typename T = bool> T CanAttack(uintptr_t InTarget, int32_t AttackMode) {
		return ((T (*)(PVEACSPawn*, uintptr_t, int32_t))(Il2CppBase() + 0x436A1AC))(this, InTarget, AttackMode);
	}
	template <typename T = void> T PerformStartFire() {
		return ((T (*)(PVEACSPawn*))(Il2CppBase() + 0x436A574))(this);
	}
	template <typename T = void> T PerformStopFire() {
		return ((T (*)(PVEACSPawn*))(Il2CppBase() + 0x436A62C))(this);
	}
	template <typename T = void> T SwitchAnimatorController(uintptr_t controller, bool firstPersonAnimator) {
		return ((T (*)(PVEACSPawn*, uintptr_t, bool))(Il2CppBase() + 0x436A6E4))(this, controller, firstPersonAnimator);
	}
	template <typename T = void> T SetAnimatorPara(float deltaTime) {
		return ((T (*)(PVEACSPawn*, float))(Il2CppBase() + 0x436A82C))(this, deltaTime);
	}
	template <typename T = void> T PlayDieAnim(bool isHeadShot) {
		return ((T (*)(PVEACSPawn*, bool))(Il2CppBase() + 0x436AC80))(this, isHeadShot);
	}
	template <typename T = void> T ConfigAnimComponent() {
		return ((T (*)(PVEACSPawn*))(Il2CppBase() + 0x436AE94))(this);
	}
	template <typename T = void> T ProcessStandaloneMove(float deltaTime) {
		return ((T (*)(PVEACSPawn*, float))(Il2CppBase() + 0x436AF54))(this, deltaTime);
	}
	template <typename T = void> T OnStartMove() {
		return ((T (*)(PVEACSPawn*))(Il2CppBase() + 0x436AFF4))(this);
	}
	template <typename T = void> T OnStopMove() {
		return ((T (*)(PVEACSPawn*))(Il2CppBase() + 0x436B140))(this);
	}
	template <typename T = void> T OnPutUpWeapon() {
		return ((T (*)(PVEACSPawn*))(Il2CppBase() + 0x436B284))(this);
	}
	template <typename T = void> T OnPutDownWeapon() {
		return ((T (*)(PVEACSPawn*))(Il2CppBase() + 0x436B384))(this);
	}
	template <typename T = void> T OnEndMatch() {
		return ((T (*)(PVEACSPawn*))(Il2CppBase() + 0x436B484))(this);
	}
	template <typename T = void> T Die(bool isHeadShot, uintptr_t damageType) {
		return ((T (*)(PVEACSPawn*, bool, uintptr_t))(Il2CppBase() + 0x436B5DC))(this, isHeadShot, damageType);
	}
	template <typename T = uintptr_t> T GetSwitchRoleComponentType() {
		return ((T (*)(PVEACSPawn*))(Il2CppBase() + 0x436B9E4))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(PVEACSPawn*))(Il2CppBase() + 0x436BAE0))(this);
	}
	template <typename T = void> T AdjustDamage(uintptr_t damageInfo) {
		return ((T (*)(PVEACSPawn*, uintptr_t))(Il2CppBase() + 0x436BC6C))(this, damageInfo);
	}
	template <typename T = uintptr_t> T GetSoundEmitterType() {
		return ((T (*)(PVEACSPawn*))(Il2CppBase() + 0x436BDFC))(this);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetMeshAssetID_3P() {
		return ((T (*)(PVEACSPawn*))(Il2CppBase() + 0x436BEF8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitPawn(uintptr_t P0) {
		return ((T (*)(PVEACSPawn*, uintptr_t))(Il2CppBase() + 0x436BF00))(this, P0);
	}
	template <typename T = float> T xLuaBaseProxy_GetMaxSpeed() {
		return ((T (*)(PVEACSPawn*))(Il2CppBase() + 0x436BF08))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnPhysicsStateChanged(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(PVEACSPawn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x436BF0C))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnAvatarLoadCompleted() {
		return ((T (*)(PVEACSPawn*))(Il2CppBase() + 0x436C054))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ConfigActorRoot() {
		return ((T (*)(PVEACSPawn*))(Il2CppBase() + 0x436C058))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitFSM() {
		return ((T (*)(PVEACSPawn*))(Il2CppBase() + 0x436C1B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_GiveWeapon() {
		return ((T (*)(PVEACSPawn*))(Il2CppBase() + 0x436C1BC))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CanAttack(uintptr_t P0, int32_t P1) {
		return ((T (*)(PVEACSPawn*, uintptr_t, int32_t))(Il2CppBase() + 0x436C1C4))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_PerformStartFire() {
		return ((T (*)(PVEACSPawn*))(Il2CppBase() + 0x436C1CC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PerformStopFire() {
		return ((T (*)(PVEACSPawn*))(Il2CppBase() + 0x436C1D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SwitchAnimatorController(uintptr_t P0, bool P1) {
		return ((T (*)(PVEACSPawn*, uintptr_t, bool))(Il2CppBase() + 0x436C1DC))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_SetAnimatorPara(float P0) {
		return ((T (*)(PVEACSPawn*, float))(Il2CppBase() + 0x436C1E4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayDieAnim(bool P0) {
		return ((T (*)(PVEACSPawn*, bool))(Il2CppBase() + 0x436C1EC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ConfigAnimComponent() {
		return ((T (*)(PVEACSPawn*))(Il2CppBase() + 0x436C1F4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ProcessStandaloneMove(float P0) {
		return ((T (*)(PVEACSPawn*, float))(Il2CppBase() + 0x436C1FC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnStartMove() {
		return ((T (*)(PVEACSPawn*))(Il2CppBase() + 0x436C204))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnStopMove() {
		return ((T (*)(PVEACSPawn*))(Il2CppBase() + 0x436C2D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnPutUpWeapon() {
		return ((T (*)(PVEACSPawn*))(Il2CppBase() + 0x436C39C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnPutDownWeapon() {
		return ((T (*)(PVEACSPawn*))(Il2CppBase() + 0x436C468))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEndMatch() {
		return ((T (*)(PVEACSPawn*))(Il2CppBase() + 0x436C534))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Die(bool P0, uintptr_t P1) {
		return ((T (*)(PVEACSPawn*, bool, uintptr_t))(Il2CppBase() + 0x436C53C))(this, P0, P1);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetSwitchRoleComponentType() {
		return ((T (*)(PVEACSPawn*))(Il2CppBase() + 0x436C544))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(PVEACSPawn*))(Il2CppBase() + 0x436C54C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_AdjustDamage(uintptr_t P0) {
		return ((T (*)(PVEACSPawn*, uintptr_t))(Il2CppBase() + 0x436C550))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetSoundEmitterType() {
		return ((T (*)(PVEACSPawn*))(Il2CppBase() + 0x436C558))(this);
	}

};

}
