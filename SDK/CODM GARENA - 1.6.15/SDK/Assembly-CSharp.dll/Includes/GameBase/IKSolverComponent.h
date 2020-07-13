#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class IKSolverComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "IKSolverComponent"));
	}

	template <typename T = uintptr_t> T& m_PawnAnimationComponent() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_AimIkSoverComponent() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& m_InSpectated() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& m_IsLocalPlayer() {
		return *(T*)((uintptr_t)this + 0x1D);
	}
	template <typename T = float> T& AimMaxAngleXUp() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& AimMaxAngleXDown() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& SimualteAimMaxAngleXUp() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& SImulateAImMaxAngleXDown() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_CurrentXPercent() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_TargetXPercent() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& RotateXSpeed() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_CurrentYPercent() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_TargetYPercent() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& RotateYSpeed() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& m_NeedTransitionTickTime() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& m_CheckAniStopIK() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& m_StopRotationEndTime() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& m_TickRoationtEndTime() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& maxAngleLeftY() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& maxAngleRightY() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& m_CurrentMaxAngleLeftY() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& m_CurrentMaxAngleRightY() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& m_CurrentMaxToTargetMoveStep() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& maxAngleXUp() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& maxAngleXDown() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& m_FallingMaxAngleY() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = bool> T& m_IsLeftHandGestrue() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& m_IsIKChanged() {
		return *(T*)((uintptr_t)this + 0x79);
	}
	template <typename T = float> T& LerpSpeed() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& MaxLerpSpeed() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& DirectionYMaxDelta() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& m_StopIKTime() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppDictionary<int32_t, int32_t>*> T& m_CurrentIKSolverLeftHandPose() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& m_ShouldTickSetLeftHandWeight() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& m_PreLeftHandWeight() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& m_LastLeftHandPose() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> T& m_LastLeftHandPoseValue() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = bool> T& m_IsLogicRuningIK() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& m_IsRunning() {
		return *(T*)((uintptr_t)this + 0xA1);
	}
	template <typename T = int32_t> T& m_LimitFrameCount() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = int32_t> T& m_MaxLimitFrame() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& m_IsInLowSetting() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = bool> T& m_CacheIsVeryLow() {
		return *(T*)((uintptr_t)this + 0xAD);
	}
	template <typename T = bool> T& m_OpenLeftHandWeight() {
		return *(T*)((uintptr_t)this + 0xAE);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLogicRuningIK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitIKSoverComponentTickFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldTickSolverComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshAimIkSoverComponentEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitMaxXAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetClientRelevant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSpectatingStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSpectatingEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetIKStates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEulerAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAimEulerAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcAimPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAniStopIK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAniStartIK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStartAirCraft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetWeaponGripHoldState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCacheIsVeryLow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInVeryLow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateIsInVeryLow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponPartForChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TestSetIK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLeftHandPose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStartSprinting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStopSprinting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceUpdateIKWeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PauseIK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceResetIK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPreSwitchAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPostSwitchAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitIKSolverLeftHandPose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetIKSolverLeftHandPose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickLeftHandLayerWeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLeftHandHoldTargetSocket() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}

	template <typename T = bool> T get_IsLocalOrViewTargetPawn() {
		return ((T (*)(IKSolverComponent*))(Il2CppBase() + 0x1EEFAA8))(this);
	}
	template <typename T = Il2CppString*> T get_OwnerName() {
		return ((T (*)(IKSolverComponent*))(Il2CppBase() + 0x1EEFABC))(this);
	}
	template <typename T = void> T SetLogicRuningIK(bool isRunning) {
		return ((T (*)(IKSolverComponent*, bool))(Il2CppBase() + 0x1EEFC7C))(this, isRunning);
	}
	template <typename T = bool> T get_IsRunning() {
		return ((T (*)(IKSolverComponent*))(Il2CppBase() + 0x1EEFE88))(this);
	}
	template <typename T = void> T set_IsRunning(bool value) {
		return ((T (*)(IKSolverComponent*, bool))(Il2CppBase() + 0x1EEFEAC))(this, value);
	}
	template <typename T = void> T InitIKSoverComponentTickFlag() {
		return ((T (*)(IKSolverComponent*))(Il2CppBase() + 0x1EEFEB4))(this);
	}
	template <typename T = bool> T ShouldTickSolverComponent() {
		return ((T (*)(IKSolverComponent*))(Il2CppBase() + 0x1EEFFB8))(this);
	}
	template <typename T = void> T RefreshAimIkSoverComponentEnable() {
		return ((T (*)(IKSolverComponent*))(Il2CppBase() + 0x1EEFD2C))(this);
	}
	template <typename T = void> T Init(uintptr_t pawn) {
		return ((T (*)(IKSolverComponent*, uintptr_t))(Il2CppBase() + 0x1EF009C))(this, pawn);
	}
	template <typename T = void> T InitMaxXAngle() {
		return ((T (*)(IKSolverComponent*))(Il2CppBase() + 0x1EF036C))(this);
	}
	template <typename T = void> T SetClientRelevant(bool isRelevant) {
		return ((T (*)(IKSolverComponent*, bool))(Il2CppBase() + 0x1EF0448))(this, isRelevant);
	}
	template <typename T = void> T OnSpectatingStart() {
		return ((T (*)(IKSolverComponent*))(Il2CppBase() + 0x1EF059C))(this);
	}
	template <typename T = void> T OnSpectatingEnd() {
		return ((T (*)(IKSolverComponent*))(Il2CppBase() + 0x1EF0640))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(IKSolverComponent*))(Il2CppBase() + 0x1EF06E4))(this);
	}
	template <typename T = void> T ResetIKStates() {
		return ((T (*)(IKSolverComponent*))(Il2CppBase() + 0x1EF0794))(this);
	}
	template <typename T = void> T InitMesh(uintptr_t model) {
		return ((T (*)(IKSolverComponent*, uintptr_t))(Il2CppBase() + 0x1EF08A8))(this, model);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(IKSolverComponent*, float))(Il2CppBase() + 0x1EF0B1C))(this, deltaTime);
	}
	template <typename T = Il2CppVector3> T GetEulerAngle() {
		return ((T (*)(IKSolverComponent*))(Il2CppBase() + 0x1EF1008))(this);
	}
	template <typename T = Il2CppVector3> T GetAimEulerAngle() {
		return ((T (*)(IKSolverComponent*))(Il2CppBase() + 0x1EF110C))(this);
	}
	template <typename T = void> T TickRotation(float deltaTime) {
		return ((T (*)(IKSolverComponent*, float))(Il2CppBase() + 0x1EF129C))(this, deltaTime);
	}
	template <typename T = void> T CalcAimPos(float rayDistance, uintptr_t ikPosition, float clampDistance) {
		return ((T (*)(IKSolverComponent*, float, uintptr_t, float))(Il2CppBase() + 0x1EF1920))(this, rayDistance, ikPosition, clampDistance);
	}
	template <typename T = void> T OnAniStopIK(float stopTime) {
		return ((T (*)(IKSolverComponent*, float))(Il2CppBase() + 0x1EF1C78))(this, stopTime);
	}
	template <typename T = void> T OnAniStartIK(float transitionTime) {
		return ((T (*)(IKSolverComponent*, float))(Il2CppBase() + 0x1EF1D18))(this, transitionTime);
	}
	template <typename T = void> T OnStartAirCraft() {
		return ((T (*)(IKSolverComponent*))(Il2CppBase() + 0x1EF1DB8))(this);
	}
	template <typename T = void> T ResetWeaponGripHoldState() {
		return ((T (*)(IKSolverComponent*))(Il2CppBase() + 0x1EF1E5C))(this);
	}
	template <typename T = bool> T GetCacheIsVeryLow() {
		return ((T (*)(IKSolverComponent*))(Il2CppBase() + 0x1EF21EC))(this);
	}
	template <typename T = bool> T IsInVeryLow() {
		return ((T (*)(IKSolverComponent*))(Il2CppBase() + 0x1EF2294))(this);
	}
	template <typename T = void> T UpdateIsInVeryLow() {
		return ((T (*)(IKSolverComponent*))(Il2CppBase() + 0x1EF02C4))(this);
	}
	template <typename T = void> T OnWeaponPartForChanged(bool isGripHold) {
		return ((T (*)(IKSolverComponent*, bool))(Il2CppBase() + 0x1EF238C))(this, isGripHold);
	}
	template <typename T = void> T OnWeaponChanged() {
		return ((T (*)(IKSolverComponent*))(Il2CppBase() + 0x1EF2A10))(this);
	}
	template <typename T = void> T TestSetIK(bool isOpenIk, bool isGripHold) {
		return ((T (*)(IKSolverComponent*, bool, bool))(Il2CppBase() + 0x1EF3130))(this, isOpenIk, isGripHold);
	}
	template <typename T = void> T SetLeftHandPose(uintptr_t weaponCategory, bool isGripHold) {
		return ((T (*)(IKSolverComponent*, uintptr_t, bool))(Il2CppBase() + 0x1EF3554))(this, weaponCategory, isGripHold);
	}
	template <typename T = void> T OnStartSprinting() {
		return ((T (*)(IKSolverComponent*))(Il2CppBase() + 0x1EF3B20))(this);
	}
	template <typename T = void> T OnStopSprinting() {
		return ((T (*)(IKSolverComponent*))(Il2CppBase() + 0x1EF3BB8))(this);
	}
	template <typename T = void> T ForceUpdateIKWeight() {
		return ((T (*)(IKSolverComponent*))(Il2CppBase() + 0x1EF3C50))(this);
	}
	template <typename T = void> T set_StopTransitionToPause(bool value) {
		return ((T (*)(IKSolverComponent*, bool))(Il2CppBase() + 0x1EF3D64))(this, value);
	}
	template <typename T = void> T PauseIK(float time, bool isOverride, bool forceStop) {
		return ((T (*)(IKSolverComponent*, float, bool, bool))(Il2CppBase() + 0x1EF3E44))(this, time, isOverride, forceStop);
	}
	template <typename T = void> T ForceResetIK() {
		return ((T (*)(IKSolverComponent*))(Il2CppBase() + 0x1EF4008))(this);
	}
	template <typename T = void> T OnPreSwitchAnimatorController() {
		return ((T (*)(IKSolverComponent*))(Il2CppBase() + 0x1EF40B8))(this);
	}
	template <typename T = void> T OnPostSwitchAnimatorController() {
		return ((T (*)(IKSolverComponent*))(Il2CppBase() + 0x1EF4150))(this);
	}
	template <typename T = void> T InitIKSolverLeftHandPose() {
		return ((T (*)(IKSolverComponent*))(Il2CppBase() + 0x1EF01A4))(this);
	}
	template <typename T = void> T SetIKSolverLeftHandPose(uintptr_t lefthandPose, uintptr_t priority) {
		return ((T (*)(IKSolverComponent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1EF3734))(this, lefthandPose, priority);
	}
	template <typename T = void> T TickLeftHandLayerWeight() {
		return ((T (*)(IKSolverComponent*))(Il2CppBase() + 0x1EF0DC4))(this);
	}
	template <typename T = uintptr_t> T GetLeftHandHoldTargetSocket(uintptr_t holdType) {
		return ((T (*)(IKSolverComponent*, uintptr_t))(Il2CppBase() + 0x1EF43D0))(this, holdType);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(IKSolverComponent*, uintptr_t))(Il2CppBase() + 0x1EF4478))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SetClientRelevant(bool P0) {
		return ((T (*)(IKSolverComponent*, bool))(Il2CppBase() + 0x1EF4480))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnSpectatingStart() {
		return ((T (*)(IKSolverComponent*))(Il2CppBase() + 0x1EF4488))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnSpectatingEnd() {
		return ((T (*)(IKSolverComponent*))(Il2CppBase() + 0x1EF4490))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(IKSolverComponent*))(Il2CppBase() + 0x1EF4498))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(IKSolverComponent*, float))(Il2CppBase() + 0x1EF44A0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnStartAirCraft() {
		return ((T (*)(IKSolverComponent*))(Il2CppBase() + 0x1EF44A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnWeaponChanged() {
		return ((T (*)(IKSolverComponent*))(Il2CppBase() + 0x1EF44B0))(this);
	}

};

}
