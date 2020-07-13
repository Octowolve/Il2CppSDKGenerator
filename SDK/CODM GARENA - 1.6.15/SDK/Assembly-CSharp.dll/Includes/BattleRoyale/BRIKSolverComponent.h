#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRIKSolverComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRIKSolverComponent"));
	}

	template <typename T = uintptr_t> T& m_BRPawn() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& m_BRAnimationBlender() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = float> static T& MaxAimAngleOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& ProneAimAngleMaxX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldForceStopIK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickByPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEulerAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStartSprinting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStopSprinting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAniStopIK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAniStartIK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPreSwitchAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAnimationBlender() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAimStartPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CorrectRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcAimPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponHoldPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLeftHandHoldTargetSocket() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = bool> T get_IsRunning() {
		return ((T (*)(BRIKSolverComponent*))(Il2CppBase() + 0x1943368))(this);
	}
	template <typename T = void> T set_IsRunning(bool value) {
		return ((T (*)(BRIKSolverComponent*, bool))(Il2CppBase() + 0x1943370))(this, value);
	}
	template <typename T = void> T Init(uintptr_t pawn) {
		return ((T (*)(BRIKSolverComponent*, uintptr_t))(Il2CppBase() + 0x1943450))(this, pawn);
	}
	template <typename T = void> T InitMesh(uintptr_t model) {
		return ((T (*)(BRIKSolverComponent*, uintptr_t))(Il2CppBase() + 0x1943668))(this, model);
	}
	template <typename T = bool> T ShouldForceStopIK() {
		return ((T (*)(BRIKSolverComponent*))(Il2CppBase() + 0x19438D0))(this);
	}
	template <typename T = void> T TickByPawn(float deltaTime) {
		return ((T (*)(BRIKSolverComponent*, float))(Il2CppBase() + 0x1943AD4))(this, deltaTime);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(BRIKSolverComponent*, float))(Il2CppBase() + 0x1943CA0))(this, deltaTime);
	}
	template <typename T = Il2CppVector3> T GetEulerAngle() {
		return ((T (*)(BRIKSolverComponent*))(Il2CppBase() + 0x1943DB0))(this);
	}
	template <typename T = void> T OnStartSprinting() {
		return ((T (*)(BRIKSolverComponent*))(Il2CppBase() + 0x1944248))(this);
	}
	template <typename T = void> T OnStopSprinting() {
		return ((T (*)(BRIKSolverComponent*))(Il2CppBase() + 0x194438C))(this);
	}
	template <typename T = void> T OnAniStopIK(float stopTime) {
		return ((T (*)(BRIKSolverComponent*, float))(Il2CppBase() + 0x19444D0))(this, stopTime);
	}
	template <typename T = void> T OnAniStartIK(float transitionTime) {
		return ((T (*)(BRIKSolverComponent*, float))(Il2CppBase() + 0x19448A8))(this, transitionTime);
	}
	template <typename T = void> T OnPreSwitchAnimatorController() {
		return ((T (*)(BRIKSolverComponent*))(Il2CppBase() + 0x1944A50))(this);
	}
	template <typename T = void> T StopAnimationBlender() {
		return ((T (*)(BRIKSolverComponent*))(Il2CppBase() + 0x1944B60))(this);
	}
	template <typename T = Il2CppVector3> T GetAimStartPos() {
		return ((T (*)(BRIKSolverComponent*))(Il2CppBase() + 0x1944CA4))(this);
	}
	template <typename T = void> T CorrectRotation(uintptr_t rotation) {
		return ((T (*)(BRIKSolverComponent*, uintptr_t))(Il2CppBase() + 0x1944EA0))(this, rotation);
	}
	template <typename T = void> T CalcAimPos(float rayDistance, uintptr_t ikPosition, float clampDistance) {
		return ((T (*)(BRIKSolverComponent*, float, uintptr_t, float))(Il2CppBase() + 0x1945404))(this, rayDistance, ikPosition, clampDistance);
	}
	template <typename T = void> T SetWeaponHoldPoint(Il2CppVector3 holdPoint, Il2CppVector3 gripHoldPoint) {
		return ((T (*)(BRIKSolverComponent*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x1945BB0))(this, holdPoint, gripHoldPoint);
	}
	template <typename T = uintptr_t> T GetLeftHandHoldTargetSocket(uintptr_t holdType) {
		return ((T (*)(BRIKSolverComponent*, uintptr_t))(Il2CppBase() + 0x1945DC0))(this, holdType);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(BRIKSolverComponent*, uintptr_t))(Il2CppBase() + 0x1945F5C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_InitMesh(uintptr_t P0) {
		return ((T (*)(BRIKSolverComponent*, uintptr_t))(Il2CppBase() + 0x1945F64))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRIKSolverComponent*, float))(Il2CppBase() + 0x1945F6C))(this, P0);
	}
	template <typename T = Il2CppVector3> T xLuaBaseProxy_GetEulerAngle() {
		return ((T (*)(BRIKSolverComponent*))(Il2CppBase() + 0x1945F74))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnStartSprinting() {
		return ((T (*)(BRIKSolverComponent*))(Il2CppBase() + 0x1945F88))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnStopSprinting() {
		return ((T (*)(BRIKSolverComponent*))(Il2CppBase() + 0x1945F90))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnAniStopIK(float P0) {
		return ((T (*)(BRIKSolverComponent*, float))(Il2CppBase() + 0x1945F98))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnAniStartIK(float P0) {
		return ((T (*)(BRIKSolverComponent*, float))(Il2CppBase() + 0x1945FA0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnPreSwitchAnimatorController() {
		return ((T (*)(BRIKSolverComponent*))(Il2CppBase() + 0x1945FA8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CalcAimPos(float P0, uintptr_t P1, float P2) {
		return ((T (*)(BRIKSolverComponent*, float, uintptr_t, float))(Il2CppBase() + 0x1945FB0))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetLeftHandHoldTargetSocket(uintptr_t P0) {
		return ((T (*)(BRIKSolverComponent*, uintptr_t))(Il2CppBase() + 0x1945FD0))(this, P0);
	}

};

}
