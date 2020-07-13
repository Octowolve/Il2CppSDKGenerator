#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class AimIKSolverComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "AimIKSolverComponent"));
	}

	template <typename T = uintptr_t> T& m_IKSolverComponent() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_AnimatorStateController() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_CurrentWeaponCategory() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_LeftHandHoldType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_Spine() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector3> T& Axis() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& AimAxis() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& MaxIterations() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& Tolerance() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& m_Iterations() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& AimTransform() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& RightHandBones() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& IkPositionWeight() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& IkAimDistance() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& MainCameraIkAimDistance() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppVector3> T& TargetDirection() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& DebugAimTarget() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& CheckAnimatorTransitionTime() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& IkTransitionStep() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& CalcHandFixedRotation() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& LeftHandBones() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& LeftHandIKPositionWeight() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& LeftHandIKRotationWeight() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& LeftHandForeTwistRotationWeight() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& LeftHandIKHoldTarget() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& LeftHandIKHoldCenter() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& LeftForeTwist() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppVector3> T& LeftHandIKHoldCenterOffset() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& maintainRotationWeight() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = float> T& m_BendModifierWeight() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppVector3> T& LeftHandIKPosition() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppQuaternion> T& LeftHandIKRotation() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppVector3> T& bendNormal() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppQuaternion> T& LeftHandHoldPointToHandRotation() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& RightHandWeaponHoldPointList() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = Il2CppVector3> T& RightHandWeaponGripHoldPoint() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& m_LeftHandBone1() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& m_LeftHandBone2() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& m_LeftHandBone3() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = bool> T& m_IsLeftBoneInit() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = Il2CppQuaternion> T& defaultRootRotation() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = Il2CppQuaternion> T& parentDefaultRotation() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = Il2CppQuaternion> T& bone3RotationBeforeSolve() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = Il2CppQuaternion> T& maintainRotation() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = Il2CppQuaternion> T& bone3DefaultRotation() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = Il2CppVector3> T& m_BendNormal() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = Il2CppVector3> T& m_AnimationNormal() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = float> T& TransitionStartIKWeight() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = float> T& TransitionTargetIKWeight() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = float> T& CurrentIKWeight() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = float> T& CurrentLeftHandIKWeight() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = float> T& CurrentRightHandIKWeight() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = float> T& m_Step() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> T& m_Animator() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = float> T& HoldGripMaxLength() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = bool> T& m_IsLeftHandGrip() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = bool> T& m_ForceStop() {
		return *(T*)((uintptr_t)this + 0x185);
	}
	template <typename T = bool> T& m_StopTransitionToPause() {
		return *(T*)((uintptr_t)this + 0x186);
	}
	template <typename T = Il2CppVector3> T& m_IKPosition() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = int32_t> T& m_LastGetIKPositionFrame() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = bool> T& m_IsStart() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = bool> T& m_IsAimIKRunning() {
		return *(T*)((uintptr_t)this + 0x199);
	}
	template <typename T = bool> T& m_IsRunning() {
		return *(T*)((uintptr_t)this + 0x19A);
	}
	template <typename T = float> T& m_StartAccumulateTime() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = float> T& m_IKTransitionTime() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = float> T& m_IKTransitionAddStep() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = float> T& m_IKTransitionSubStep() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = float> T& m_IKRightHandTransitionAddStep() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = float> T& m_IKRightHandTransitionSubStep() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = bool> T& IsRuningLeftHandIK() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = float> T& m_LeftHandCurrentWeight() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = bool> T& m_IsRunningRightHandAimIK() {
		return *(T*)((uintptr_t)this + 0x1BC);
	}
	template <typename T = float> T& m_RightHandCurrentWeight() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = bool> T& IsRunningStateLeftHandIK() {
		return *(T*)((uintptr_t)this + 0x1C4);
	}
	template <typename T = float> T& m_RunningTickTime() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = float> T& m_RunningTransitionTime() {
		return *(T*)((uintptr_t)this + 0x1CC);
	}
	template <typename T = float> T& m_RunningTransitionDefaultTime() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = int32_t> T& m_ForceUpdateIKFrame() {
		return *(T*)((uintptr_t)this + 0x1D4);
	}
	template <typename T = bool> T& InputIsIKRunning() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = bool> T& InputIsStopTransitionIfStop() {
		return *(T*)((uintptr_t)this + 0x1D9);
	}
	template <typename T = bool> T& InputIsInTranstion() {
		return *(T*)((uintptr_t)this + 0x1DA);
	}
	template <typename T = float> T& InputNormalizeTime() {
		return *(T*)((uintptr_t)this + 0x1DC);
	}
	template <typename T = float> T& InputDurationTime() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = bool> T& m_ShouldCheckRunningState() {
		return *(T*)((uintptr_t)this + 0x1E4);
	}
	template <typename T = bool> T& m_IsCurrentInTranstion() {
		return *(T*)((uintptr_t)this + 0x1E5);
	}
	template <typename T = bool> T& m_IsRotationChanged() {
		return *(T*)((uintptr_t)this + 0x1E6);
	}
	template <typename T = bool> T& UseRotationChanged() {
		return *(T*)((uintptr_t)this + 0x1E7);
	}
	template <typename T = bool> T& UseLeftHandHoldTarget() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = uintptr_t> T& m_WeaponHoldPoint() {
		return *(T*)((uintptr_t)this + 0x1EC);
	}
	template <typename T = Il2CppVector3> T& m_HoldPointOffset() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = Il2CppVector3> T& m_GripHoldPointOffset() {
		return *(T*)((uintptr_t)this + 0x1FC);
	}
	template <typename T = Il2CppVector3> T& m_XPR50HoldOffset() {
		return *(T*)((uintptr_t)this + 0x208);
	}
	template <typename T = Il2CppVector3> T& m_ChicomHoldOffset() {
		return *(T*)((uintptr_t)this + 0x214);
	}
	template <typename T = Il2CppVector3> T& m_NornalHoldOffset() {
		return *(T*)((uintptr_t)this + 0x220);
	}
	template <typename T = Il2CppVector3> T& m_PistolHoldOffset() {
		return *(T*)((uintptr_t)this + 0x22C);
	}
	template <typename T = Il2CppVector3> T& m_PurifierHoldOffset() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = int32_t> T& m_ChicomWeaponId() {
		return *(T*)((uintptr_t)this + 0x244);
	}
	template <typename T = int32_t> T& m_XPR50WeaponId() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessRightHandAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessLeftHand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceUpdateIKWeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetIKRunning() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRunningState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentAimRunning() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAnimatorControllerIKStates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Solve() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RotateToTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitLeftHandBones() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInitiateVirtual() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpdateVirtual() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBendDirection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLeftHandBones() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckTickHoldPointPose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TestSetIK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetWeaponHoldPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetHoldPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DumpInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}

	template <typename T = uintptr_t> T get_LeftHandHoldType() {
		return ((T (*)(AimIKSolverComponent*))(Il2CppBase() + 0x3B684F8))(this);
	}
	template <typename T = void> T set_ForceStop(bool value) {
		return ((T (*)(AimIKSolverComponent*, bool))(Il2CppBase() + 0x3B68500))(this, value);
	}
	template <typename T = bool> T get_ForceStop() {
		return ((T (*)(AimIKSolverComponent*))(Il2CppBase() + 0x3B68508))(this);
	}
	template <typename T = void> T set_StopTransitionToPause(bool value) {
		return ((T (*)(AimIKSolverComponent*, bool))(Il2CppBase() + 0x3B68510))(this, value);
	}
	template <typename T = Il2CppVector3> T get_IKPosition() {
		return ((T (*)(AimIKSolverComponent*))(Il2CppBase() + 0x3B68518))(this);
	}
	template <typename T = Il2CppVector3> T get_TransformAxis() {
		return ((T (*)(AimIKSolverComponent*))(Il2CppBase() + 0x3B68788))(this);
	}
	template <typename T = void> T Init(uintptr_t IkSolverComonent) {
		return ((T (*)(AimIKSolverComponent*, uintptr_t))(Il2CppBase() + 0x3B688E4))(this, IkSolverComonent);
	}
	template <typename T = void> T ProcessRightHandAim() {
		return ((T (*)(AimIKSolverComponent*))(Il2CppBase() + 0x3B68A14))(this);
	}
	template <typename T = void> T ProcessLeftHand() {
		return ((T (*)(AimIKSolverComponent*))(Il2CppBase() + 0x3B69164))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(AimIKSolverComponent*))(Il2CppBase() + 0x3B6999C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(AimIKSolverComponent*))(Il2CppBase() + 0x3B69A40))(this);
	}
	template <typename T = void> T ForceUpdateIKWeight() {
		return ((T (*)(AimIKSolverComponent*))(Il2CppBase() + 0x3B6A278))(this);
	}
	template <typename T = void> T SetIKRunning(bool isRunning, uintptr_t leftHandHoldType, bool isStopTransitionIfStop, bool inTranstion, float normalizeTime, float durationTime) {
		return ((T (*)(AimIKSolverComponent*, bool, uintptr_t, bool, bool, float, float))(Il2CppBase() + 0x3B6A354))(this, isRunning, leftHandHoldType, isStopTransitionIfStop, inTranstion, normalizeTime, durationTime);
	}
	template <typename T = void> T CheckRunningState() {
		return ((T (*)(AimIKSolverComponent*))(Il2CppBase() + 0x3B6A4C4))(this);
	}
	template <typename T = void> T SetCurrentAimRunning(bool isRunning) {
		return ((T (*)(AimIKSolverComponent*, bool))(Il2CppBase() + 0x3B6A698))(this, isRunning);
	}
	template <typename T = void> T CheckAnimatorControllerIKStates() {
		return ((T (*)(AimIKSolverComponent*))(Il2CppBase() + 0x3B6A770))(this);
	}
	template <typename T = void> T OnSwitchAnimatorController() {
		return ((T (*)(AimIKSolverComponent*))(Il2CppBase() + 0x3B6A93C))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(AimIKSolverComponent*))(Il2CppBase() + 0x3B6AA54))(this);
	}
	template <typename T = void> T Solve(Il2CppArray<uintptr_t>* Bones) {
		return ((T (*)(AimIKSolverComponent*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3B68B70))(this, Bones);
	}
	template <typename T = void> T RotateToTarget(Il2CppVector3 targetPosition, uintptr_t bone, float weight) {
		return ((T (*)(AimIKSolverComponent*, Il2CppVector3, uintptr_t, float))(Il2CppBase() + 0x3B6AF10))(this, targetPosition, bone, weight);
	}
	template <typename T = void> T InitLeftHandBones() {
		return ((T (*)(AimIKSolverComponent*))(Il2CppBase() + 0x3B69C60))(this);
	}
	template <typename T = void> T OnInitiateVirtual() {
		return ((T (*)(AimIKSolverComponent*))(Il2CppBase() + 0x3B6B248))(this);
	}
	template <typename T = void> T OnUpdateVirtual() {
		return ((T (*)(AimIKSolverComponent*))(Il2CppBase() + 0x3B6B5F8))(this);
	}
	template <typename T = Il2CppVector3> T GetBendDirection(Il2CppVector3 IKPosition, Il2CppVector3 bendNormal) {
		return ((T (*)(AimIKSolverComponent*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x3B6B7C4))(this, IKPosition, bendNormal);
	}
	template <typename T = void> T UpdateLeftHandBones() {
		return ((T (*)(AimIKSolverComponent*))(Il2CppBase() + 0x3B69218))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(AimIKSolverComponent*))(Il2CppBase() + 0x3B6C004))(this);
	}
	template <typename T = bool> T CheckTickHoldPointPose() {
		return ((T (*)(AimIKSolverComponent*))(Il2CppBase() + 0x3B6BB10))(this);
	}
	template <typename T = void> T TestSetIK(int32_t weapoinId, bool isNeedHold, bool isGripHold, uintptr_t weaponMesh) {
		return ((T (*)(AimIKSolverComponent*, int32_t, bool, bool, uintptr_t))(Il2CppBase() + 0x3B6C0A8))(this, weapoinId, isNeedHold, isGripHold, weaponMesh);
	}
	template <typename T = void> T ResetWeaponHoldPoint() {
		return ((T (*)(AimIKSolverComponent*))(Il2CppBase() + 0x3B6C4F0))(this);
	}
	template <typename T = void> T OnWeaponChanged(int32_t weapoinId, uintptr_t weaponName, uintptr_t weaponCategory, bool isHold, bool isGripHold, uintptr_t weaponMesh) {
		return ((T (*)(AimIKSolverComponent*, int32_t, uintptr_t, uintptr_t, bool, bool, uintptr_t))(Il2CppBase() + 0x3B6C594))(this, weapoinId, weaponName, weaponCategory, isHold, isGripHold, weaponMesh);
	}
	template <typename T = void> T ResetHoldPoint() {
		return ((T (*)(AimIKSolverComponent*))(Il2CppBase() + 0x3B6CAC4))(this);
	}
	template <typename T = void> T DumpInfo() {
		return ((T (*)(AimIKSolverComponent*))(Il2CppBase() + 0x3B6CB5C))(this);
	}

};

}
