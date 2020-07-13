#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PawnLadderComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PawnLadderComponent"));
	}

	template <typename T = uintptr_t> T& m_CurrentLadder() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_AnimationComponent() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_CurrentLadderStage() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_CurrentSyncStage() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_StartLadderTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& m_StopReTriggerEnterLadder() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_LadderCheckPawnRadius() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& m_IsLocalPlayer() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& m_CheckInVolumeFrame() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& m_CheckVolumeFrameLimit() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_LastJumpFromLadder() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_JumpFromLadderCDTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& m_LadderStartYAngle() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& m_LadderForceYAngle() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& m_IsLadderClimbUp() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& m_IsClimbEnterLadder() {
		return *(T*)((uintptr_t)this + 0x4D);
	}
	template <typename T = bool> T& m_IsClimbCrossWindow() {
		return *(T*)((uintptr_t)this + 0x4E);
	}
	template <typename T = float> T& m_CurrentLaderHeight() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& m_LeaveLadderGap() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& m_LadderTopLeaveDistance() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppVector3> T& m_CurrentLadderCenterPos() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppVector3> T& m_CurrentLadderPos() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& m_LowerStepHeight() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& m_HighestStepHeight() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& m_Step() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& m_HandHoldHeight() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& m_IsLaddering() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& m_NextClimbHeight() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& m_ClimbLadderSpeedScale() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppVector3> T& m_TopToLadderTransitionStartPos() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppVector3> T& m_TopToLadderTransitionDestPos() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppVector3> T& m_UpDownTransitionDir() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& m_TopToLadderTransitionTime_TP() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = float> T& m_TopToLadderTransitionTimeCount() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> T& m_TopToLadderTransitionTime_FP() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = float> T& m_ValidEnterAngle() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = bool> T& m_InEnterInput() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = Il2CppVector3> T& m_BottomToLadderStartPos() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppVector3> T& m_BottomToLadderDestPos() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = float> T& m_BottomToLadderTime() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& m_FPEnteringCoroutine() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& m_LeavingFromTopMover() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& m_EnterToLadderMover() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = float> T& m_LeaveTimeCount() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = Il2CppVector3> T& m_MeshPositionOffset() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = float> T& m_EnteringTime() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = float> T& m_ClimbUpAngle() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = float> T& m_LastSimulationLeavingTime() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = float> T& m_LastEnterLadderTime() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& m_IsChangeToMelee() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = float> T& m_NextStepSoundTime() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = float> T& m_StepSoundTime() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = Il2CppString*> T& LADDER_STEP_SOUND_EVENT() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = float> T& m_LadderSpeed() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_CheckPawnInLadderResults() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = float> T& WaterEnterLadderHeight() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = float> T& mDeltaTime() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = float> static T& OverlapCapsuleNonAllocRadius() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_InLeaveZone() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = Il2CppVector3> T& m_LeaveLeftDir() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = Il2CppVector3> T& m_LeaveRightDir() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = float> T& m_MinLeaveZoneHeight() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = Il2CppVector3> T& m_LeaveMoveDirection() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = float> T& m_StartLeaveZoneTime() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = float> T& m_LeaveZoneTime() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = float> T& m_LeaveMoveDistance() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = Il2CppVector3> T& m_MoveVelocity() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = float> T& m_SimulateTopLeaveGap() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = uintptr_t> T& m_SimulateSyncStage() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = Il2CppVector3> T& m_SimulatedLadderTargetPos() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = float> T& m_SimulatedLadderSpeedY() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = bool> T& HasSimualateMoveData() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = bool> T& m_IsServerStoped() {
		return *(T*)((uintptr_t)this + 0x18D);
	}
	template <typename T = Il2CppVector3> T& m_SimulateVelocity() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = float> static T& SimulateLeaveLadderAnimSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsClimbUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInLadderStageLeaving() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnterLadderFromInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnterLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LeaveLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEndLadderState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceEndLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndLadderFromJump() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckPawnInLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCanDownToLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCanEnterLadderInWater() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCanLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckHeightAndDir() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessWeaponBeforeLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_resetWeaponState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_hideWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcEnterLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcEnterLadderFromBottom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryStartLader() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckValidEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryEnterLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEndSwithRoleToStartLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckInLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTickEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickPhysLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldStopInUpCeiling() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldStopInStandOnPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessPhysLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckLeaveLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShieldStopMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckStopMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayLadderStepSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcDeltaMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessClimbLadderInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSimulateEnterLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSimulateLeaveLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSimulateLadderBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSimualteLadderAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchRoleOrView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchRole() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetClientRelevant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetServerRelevant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LeaveLadderFromTop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcClimbStepHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcNextClimbHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LeavingLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DownToLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnteringLadderFromTop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimualtePlayEnteringAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEnteringAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnteringLadderFromButtom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideOtherFPPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideFPPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLeaveZone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckLeaveZone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessClimbLeaveZone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateToLeaveZone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickSimualte_StageLeaveFromVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckIfNeedClimb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitSimulateLadderVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateStartLadderInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateStartLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateEndLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryEndLadderInTickSimulate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcSimulateNextClimbHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSimualateMoveData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickSimulateLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickSimualte_StageEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateEnterLadderFromTop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLeaveTopHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickSimualte_StageLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateLeaveFromTop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickSimualte_StageLeaving() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(PawnLadderComponent*, uintptr_t, bool))(Il2CppBase() + 0x16B1BC4))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(PawnLadderComponent*))(Il2CppBase() + 0x16B1CD0))(this);
	}
	template <typename T = uintptr_t> T get_CurrentLadder() {
		return ((T (*)(PawnLadderComponent*))(Il2CppBase() + 0x16B1D8C))(this);
	}
	template <typename T = void> T set_CurrentLadder(uintptr_t value) {
		return ((T (*)(PawnLadderComponent*, uintptr_t))(Il2CppBase() + 0x16B1D94))(this, value);
	}
	template <typename T = bool> T get_IsLadderClimbUp() {
		return ((T (*)(PawnLadderComponent*))(Il2CppBase() + 0x16B1EE0))(this);
	}
	template <typename T = float> T get_m_HighestFootStep() {
		return ((T (*)(PawnLadderComponent*))(Il2CppBase() + 0x16B1EE8))(this);
	}
	template <typename T = bool> T get_InSimulationLeaving() {
		return ((T (*)(PawnLadderComponent*))(Il2CppBase() + 0x16B1EFC))(this);
	}
	template <typename T = void> T Init(uintptr_t pawn) {
		return ((T (*)(PawnLadderComponent*, uintptr_t))(Il2CppBase() + 0x16B1F3C))(this, pawn);
	}
	template <typename T = unsigned char> T GetCurrentState() {
		return ((T (*)(PawnLadderComponent*))(Il2CppBase() + 0x169534C))(this);
	}
	template <typename T = bool> T IsClimbUp(uintptr_t currentLadder) {
		return ((T (*)(PawnLadderComponent*, uintptr_t))(Il2CppBase() + 0x16B2054))(this, currentLadder);
	}
	template <typename T = void> T InitLadder() {
		return ((T (*)(PawnLadderComponent*))(Il2CppBase() + 0x16B2358))(this);
	}
	template <typename T = bool> T IsInLadderStageLeaving() {
		return ((T (*)(PawnLadderComponent*))(Il2CppBase() + 0x16B26E0))(this);
	}
	template <typename T = void> T EnterLadderFromInput(uintptr_t ladder) {
		return ((T (*)(PawnLadderComponent*, uintptr_t))(Il2CppBase() + 0x16B27C0))(this, ladder);
	}
	template <typename T = void> T EnterLadder(uintptr_t ladder) {
		return ((T (*)(PawnLadderComponent*, uintptr_t))(Il2CppBase() + 0x16B2914))(this, ladder);
	}
	template <typename T = void> T LeaveLadder(uintptr_t ladder) {
		return ((T (*)(PawnLadderComponent*, uintptr_t))(Il2CppBase() + 0x16B31B0))(this, ladder);
	}
	template <typename T = void> T EndLadder(bool playAnim) {
		return ((T (*)(PawnLadderComponent*, bool))(Il2CppBase() + 0x16B33A8))(this, playAnim);
	}
	template <typename T = void> T OnEndLadderState() {
		return ((T (*)(PawnLadderComponent*))(Il2CppBase() + 0x168FEA4))(this);
	}
	template <typename T = void> T ForceEndLadder() {
		return ((T (*)(PawnLadderComponent*))(Il2CppBase() + 0x166D5AC))(this);
	}
	template <typename T = void> T EndLadderFromJump() {
		return ((T (*)(PawnLadderComponent*))(Il2CppBase() + 0x16B3A54))(this);
	}
	template <typename T = void> T OnDead() {
		return ((T (*)(PawnLadderComponent*))(Il2CppBase() + 0x165D41C))(this);
	}
	template <typename T = bool> T CheckPawnInLadder() {
		return ((T (*)(PawnLadderComponent*))(Il2CppBase() + 0x16B3CB0))(this);
	}
	template <typename T = bool> T CheckCanDownToLadder(uintptr_t inLadderVolume) {
		return ((T (*)(PawnLadderComponent*, uintptr_t))(Il2CppBase() + 0x16B4390))(this, inLadderVolume);
	}
	template <typename T = bool> T CheckCanEnterLadderInWater() {
		return ((T (*)(PawnLadderComponent*))(Il2CppBase() + 0x16B44F4))(this);
	}
	template <typename T = bool> T CheckCanLadder() {
		return ((T (*)(PawnLadderComponent*))(Il2CppBase() + 0x16B46C4))(this);
	}
	template <typename T = bool> T CheckHeightAndDir(uintptr_t inLadderVolume) {
		return ((T (*)(PawnLadderComponent*, uintptr_t))(Il2CppBase() + 0x16B4C84))(this, inLadderVolume);
	}
	template <typename T = void> T ProcessWeaponBeforeLadder() {
		return ((T (*)(PawnLadderComponent*))(Il2CppBase() + 0x16B510C))(this);
	}
	template <typename T = void> T resetWeaponState(int32_t actorID) {
		return ((T (*)(PawnLadderComponent*, int32_t))(Il2CppBase() + 0x16B5370))(this, actorID);
	}
	template <typename T = void> T hideWeapon(bool inHide) {
		return ((T (*)(PawnLadderComponent*, bool))(Il2CppBase() + 0x16B3580))(this, inHide);
	}
	template <typename T = void> T CalcAngle() {
		return ((T (*)(PawnLadderComponent*))(Il2CppBase() + 0x16B5674))(this);
	}
	template <typename T = void> T CalcEnterLadder(uintptr_t enterVolue) {
		return ((T (*)(PawnLadderComponent*, uintptr_t))(Il2CppBase() + 0x16B588C))(this, enterVolue);
	}
	template <typename T = void> T CalcEnterLadderFromBottom() {
		return ((T (*)(PawnLadderComponent*))(Il2CppBase() + 0x16B5CC4))(this);
	}
	template <typename T = bool> T TryStartLader() {
		return ((T (*)(PawnLadderComponent*))(Il2CppBase() + 0x16B2C3C))(this);
	}
	template <typename T = bool> T CheckValidEnter(uintptr_t enterVolue) {
		return ((T (*)(PawnLadderComponent*, uintptr_t))(Il2CppBase() + 0x16B6200))(this, enterVolue);
	}
	template <typename T = void> T TryEnterLadder(uintptr_t enterVolue) {
		return ((T (*)(PawnLadderComponent*, uintptr_t))(Il2CppBase() + 0x16B63F8))(this, enterVolue);
	}
	template <typename T = void> T OnEndSwithRoleToStartLadder() {
		return ((T (*)(PawnLadderComponent*))(Il2CppBase() + 0x16B6A34))(this);
	}
	template <typename T = bool> T CheckInLadder() {
		return ((T (*)(PawnLadderComponent*))(Il2CppBase() + 0x16B6F08))(this);
	}
	template <typename T = void> T UpdateTickEnable() {
		return ((T (*)(PawnLadderComponent*))(Il2CppBase() + 0x16B1D9C))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(PawnLadderComponent*, float))(Il2CppBase() + 0x16B72D4))(this, deltaTime);
	}
	template <typename T = void> T TickPhysLadder(float deltaTime) {
		return ((T (*)(PawnLadderComponent*, float))(Il2CppBase() + 0x16B7960))(this, deltaTime);
	}
	template <typename T = bool> T ShouldStopInUpCeiling() {
		return ((T (*)(PawnLadderComponent*))(Il2CppBase() + 0x16B8FA0))(this);
	}
	template <typename T = bool> T ShouldStopInStandOnPawn() {
		return ((T (*)(PawnLadderComponent*))(Il2CppBase() + 0x16B9070))(this);
	}
	template <typename T = void> T ProcessPhysLadder(float deltaTime) {
		return ((T (*)(PawnLadderComponent*, float))(Il2CppBase() + 0x16B85D4))(this, deltaTime);
	}
	template <typename T = void> T CheckLeaveLadder() {
		return ((T (*)(PawnLadderComponent*))(Il2CppBase() + 0x16BA090))(this);
	}
	template <typename T = bool> T CheckShieldStopMove(Il2CppVector3 deltaMove, Il2CppVector3 oldPos) {
		return ((T (*)(PawnLadderComponent*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x16BAE5C))(this, deltaMove, oldPos);
	}
	template <typename T = void> T CheckStopMove(Il2CppVector3 deltaMove, Il2CppVector3 oldPos) {
		return ((T (*)(PawnLadderComponent*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x16B99B8))(this, deltaMove, oldPos);
	}
	template <typename T = void> T PlayLadderStepSound(Il2CppVector3 deltaMove) {
		return ((T (*)(PawnLadderComponent*, Il2CppVector3))(Il2CppBase() + 0x16B9E24))(this, deltaMove);
	}
	template <typename T = Il2CppVector3> T CalcDeltaMove(float deltaTime, bool hasInput) {
		return ((T (*)(PawnLadderComponent*, float, bool))(Il2CppBase() + 0x16B9808))(this, deltaTime, hasInput);
	}
	template <typename T = void> T ProcessClimbLadderInput(uintptr_t isClimb, uintptr_t hasInput) {
		return ((T (*)(PawnLadderComponent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x16B9568))(this, isClimb, hasInput);
	}
	template <typename T = void> T OnSimulateEnterLadder(uintptr_t ladderVolume) {
		return ((T (*)(PawnLadderComponent*, uintptr_t))(Il2CppBase() + 0x16BB3B4))(this, ladderVolume);
	}
	template <typename T = void> T OnSimulateLeaveLadder(uintptr_t ladderVolume) {
		return ((T (*)(PawnLadderComponent*, uintptr_t))(Il2CppBase() + 0x16BB5DC))(this, ladderVolume);
	}
	template <typename T = void> T OnSimulateLadderBuffer(uintptr_t synBuffer) {
		return ((T (*)(PawnLadderComponent*, uintptr_t))(Il2CppBase() + 0x16BB798))(this, synBuffer);
	}
	template <typename T = void> T SetSimualteLadderAnimation(float ySpeed) {
		return ((T (*)(PawnLadderComponent*, float))(Il2CppBase() + 0x16BB990))(this, ySpeed);
	}
	template <typename T = void> T OnSwitchAnimatorController() {
		return ((T (*)(PawnLadderComponent*))(Il2CppBase() + 0x167E8D0))(this);
	}
	template <typename T = void> T OnSwitchRoleOrView() {
		return ((T (*)(PawnLadderComponent*))(Il2CppBase() + 0x16BBA60))(this);
	}
	template <typename T = void> T OnSwitchRole() {
		return ((T (*)(PawnLadderComponent*))(Il2CppBase() + 0x16BBE18))(this);
	}
	template <typename T = void> T OnSwitchView() {
		return ((T (*)(PawnLadderComponent*))(Il2CppBase() + 0x16BC12C))(this);
	}
	template <typename T = void> T OnWeaponChanged() {
		return ((T (*)(PawnLadderComponent*))(Il2CppBase() + 0x16BC200))(this);
	}
	template <typename T = void> T SetClientRelevant(bool isRelevant) {
		return ((T (*)(PawnLadderComponent*, bool))(Il2CppBase() + 0x16BC2FC))(this, isRelevant);
	}
	template <typename T = void> T SetServerRelevant(bool isRelevant) {
		return ((T (*)(PawnLadderComponent*, bool))(Il2CppBase() + 0x16BC428))(this, isRelevant);
	}
	template <typename T = void> T LeaveLadderFromTop() {
		return ((T (*)(PawnLadderComponent*))(Il2CppBase() + 0x16BA288))(this);
	}
	template <typename T = float> T CalcClimbStepHeight(float height, bool isClimbUp) {
		return ((T (*)(PawnLadderComponent*, float, bool))(Il2CppBase() + 0x16B5EF0))(this, height, isClimbUp);
	}
	template <typename T = void> T CalcNextClimbHeight() {
		return ((T (*)(PawnLadderComponent*))(Il2CppBase() + 0x16B6064))(this);
	}
	template <typename T = void> T LeavingLadder(float deltaTime) {
		return ((T (*)(PawnLadderComponent*, float))(Il2CppBase() + 0x16B8E40))(this, deltaTime);
	}
	template <typename T = void> T DownToLadder(float deltaTime) {
		return ((T (*)(PawnLadderComponent*, float))(Il2CppBase() + 0x16BCAB0))(this, deltaTime);
	}
	template <typename T = void> T EnteringLadderFromTop(float deltaTime) {
		return ((T (*)(PawnLadderComponent*, float))(Il2CppBase() + 0x16B8400))(this, deltaTime);
	}
	template <typename T = void> T SimualtePlayEnteringAnimation() {
		return ((T (*)(PawnLadderComponent*))(Il2CppBase() + 0x16BCC1C))(this);
	}
	template <typename T = void> T PlayEnteringAnimation() {
		return ((T (*)(PawnLadderComponent*))(Il2CppBase() + 0x16B7D74))(this);
	}
	template <typename T = void> T EnteringLadderFromButtom(float deltaTime) {
		return ((T (*)(PawnLadderComponent*, float))(Il2CppBase() + 0x16B8094))(this, deltaTime);
	}
	template <typename T = uintptr_t> T HideOtherFPPawn() {
		return ((T (*)(PawnLadderComponent*))(Il2CppBase() + 0x16BBD08))(this);
	}
	template <typename T = uintptr_t> T HideFPPawn() {
		return ((T (*)(PawnLadderComponent*))(Il2CppBase() + 0x16B5260))(this);
	}
	template <typename T = void> T SetLeaveZone(bool isInZone, float minLeaveHeight, Il2CppVector3 leftDir, Il2CppVector3 rightDir) {
		return ((T (*)(PawnLadderComponent*, bool, float, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x16BCEC0))(this, isInZone, minLeaveHeight, leftDir, rightDir);
	}
	template <typename T = bool> T CheckLeaveZone(float deltaTime) {
		return ((T (*)(PawnLadderComponent*, float))(Il2CppBase() + 0x16B9140))(this, deltaTime);
	}
	template <typename T = void> T ProcessClimbLeaveZone(float deltaTime) {
		return ((T (*)(PawnLadderComponent*, float))(Il2CppBase() + 0x16B8C64))(this, deltaTime);
	}
	template <typename T = void> T SimulateToLeaveZone() {
		return ((T (*)(PawnLadderComponent*))(Il2CppBase() + 0x16BCFF4))(this);
	}
	template <typename T = void> T TickSimualte_StageLeaveFromVolume(float deltaTime) {
		return ((T (*)(PawnLadderComponent*, float))(Il2CppBase() + 0x16BD218))(this, deltaTime);
	}
	template <typename T = bool> T CheckIfNeedClimb() {
		return ((T (*)(PawnLadderComponent*))(Il2CppBase() + 0x16BD3F4))(this);
	}
	template <typename T = void> T InitSimulateLadderVolume() {
		return ((T (*)(PawnLadderComponent*))(Il2CppBase() + 0x16BD708))(this);
	}
	template <typename T = void> T SimulateStartLadderInit() {
		return ((T (*)(PawnLadderComponent*))(Il2CppBase() + 0x16BDA50))(this);
	}
	template <typename T = void> T SimulateStartLadder(bool forceInLadder) {
		return ((T (*)(PawnLadderComponent*, bool))(Il2CppBase() + 0x16BBF44))(this, forceInLadder);
	}
	template <typename T = void> T SimulateEndLadder() {
		return ((T (*)(PawnLadderComponent*))(Il2CppBase() + 0x16BDCC0))(this);
	}
	template <typename T = bool> T TryEndLadderInTickSimulate(float deltaTime) {
		return ((T (*)(PawnLadderComponent*, float))(Il2CppBase() + 0x16BE05C))(this, deltaTime);
	}
	template <typename T = void> T CalcSimulateNextClimbHeight() {
		return ((T (*)(PawnLadderComponent*))(Il2CppBase() + 0x16BE29C))(this);
	}
	template <typename T = void> T SetSimualateMoveData(uintptr_t moveData) {
		return ((T (*)(PawnLadderComponent*, uintptr_t))(Il2CppBase() + 0x16BE404))(this, moveData);
	}
	template <typename T = void> T TickSimulateLadder(float deltaTime) {
		return ((T (*)(PawnLadderComponent*, float))(Il2CppBase() + 0x16BE15C))(this, deltaTime);
	}
	template <typename T = void> T TickSimualte_StageEnter(float deltaTime) {
		return ((T (*)(PawnLadderComponent*, float))(Il2CppBase() + 0x16BE7A0))(this, deltaTime);
	}
	template <typename T = void> T SimulateEnterLadderFromTop(float deltaTime) {
		return ((T (*)(PawnLadderComponent*, float))(Il2CppBase() + 0x16BEFE0))(this, deltaTime);
	}
	template <typename T = float> T GetLeaveTopHeight() {
		return ((T (*)(PawnLadderComponent*))(Il2CppBase() + 0x16BE6BC))(this);
	}
	template <typename T = void> T TickSimualte_StageLadder(float deltaTime) {
		return ((T (*)(PawnLadderComponent*, float))(Il2CppBase() + 0x16BE89C))(this, deltaTime);
	}
	template <typename T = void> T SimulateLeaveFromTop() {
		return ((T (*)(PawnLadderComponent*))(Il2CppBase() + 0x16BF230))(this);
	}
	template <typename T = void> T TickSimualte_StageLeaving(float deltaTime) {
		return ((T (*)(PawnLadderComponent*, float))(Il2CppBase() + 0x16BEE88))(this, deltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(PawnLadderComponent*, uintptr_t))(Il2CppBase() + 0x16BF43C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(PawnLadderComponent*, float))(Il2CppBase() + 0x16BF444))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnSwitchRole() {
		return ((T (*)(PawnLadderComponent*))(Il2CppBase() + 0x16BF44C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnSwitchView() {
		return ((T (*)(PawnLadderComponent*))(Il2CppBase() + 0x16BF454))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnWeaponChanged() {
		return ((T (*)(PawnLadderComponent*))(Il2CppBase() + 0x16BF45C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetClientRelevant(bool P0) {
		return ((T (*)(PawnLadderComponent*, bool))(Il2CppBase() + 0x16BF464))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SetServerRelevant(bool P0) {
		return ((T (*)(PawnLadderComponent*, bool))(Il2CppBase() + 0x16BF46C))(this, P0);
	}

};

}
