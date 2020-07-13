#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PlayerPawn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PlayerPawn"));
	}

	template <typename T = int32_t> T& m_isFemale() {
		return *(T*)((uintptr_t)this + 0x9AC);
	}
	template <typename T = bool> T& m_isPlayLadderSound() {
		return *(T*)((uintptr_t)this + 0x9B0);
	}
	template <typename T = float> static T& m_MinMoveDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_OptimizeMaxDistance() {
		return *(T*)((uintptr_t)this + 0x9B4);
	}
	template <typename T = float> T& m_PredictTime() {
		return *(T*)((uintptr_t)this + 0x9B8);
	}
	template <typename T = Il2CppVector3> T& m_AnimationVelocity() {
		return *(T*)((uintptr_t)this + 0x9BC);
	}
	template <typename T = float> T& m_PredictPercentPerFrame() {
		return *(T*)((uintptr_t)this + 0x9C8);
	}
	template <typename T = float> T& m_MaxPredictPing() {
		return *(T*)((uintptr_t)this + 0x9CC);
	}
	template <typename T = float> T& m_MinPredictPing() {
		return *(T*)((uintptr_t)this + 0x9D0);
	}
	template <typename T = float> T& m_MaxPredictScale() {
		return *(T*)((uintptr_t)this + 0x9D4);
	}
	template <typename T = bool> T& m_bHasMoveToTarget() {
		return *(T*)((uintptr_t)this + 0x9D8);
	}
	template <typename T = bool> T& m_IsSimulatedJumping() {
		return *(T*)((uintptr_t)this + 0x9D9);
	}
	template <typename T = float> T& m_SimulatedJumpingSpeedScale() {
		return *(T*)((uintptr_t)this + 0x9DC);
	}
	template <typename T = float> static T& MaxSimulatedJumpingSpeedScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_StuckTimes() {
		return *(T*)((uintptr_t)this + 0x9E0);
	}
	template <typename T = Il2CppVector3> T& m_LastSimulatedDirection() {
		return *(T*)((uintptr_t)this + 0x9E4);
	}
	template <typename T = Il2CppVector3> T& m_TargetSimulateDirection() {
		return *(T*)((uintptr_t)this + 0x9F0);
	}
	template <typename T = float> T& m_SimulatedStartFallingTime() {
		return *(T*)((uintptr_t)this + 0x9FC);
	}
	template <typename T = uintptr_t> T& m_WeaponSyncModule() {
		return *(T*)((uintptr_t)this + 0xA00);
	}
	template <typename T = uintptr_t> T& m_MoveHelper() {
		return *(T*)((uintptr_t)this + 0xA04);
	}
	template <typename T = bool> T& m_bBeginPredict() {
		return *(T*)((uintptr_t)this + 0xA08);
	}
	template <typename T = uintptr_t> T& PredictMoveData() {
		return *(T*)((uintptr_t)this + 0xA0C);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& m_LastSimulatedVelocityList() {
		return *(T*)((uintptr_t)this + 0xA4C);
	}
	template <typename T = Il2CppVector3> T& m_SumOfSimulatedVelocity() {
		return *(T*)((uintptr_t)this + 0xA50);
	}
	template <typename T = int32_t> static T& SmoothSimulatedVelocityCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_StartedFire() {
		return *(T*)((uintptr_t)this + 0xA5C);
	}
	template <typename T = float> T& m_HeightFromGrounWhenDead() {
		return *(T*)((uintptr_t)this + 0xA60);
	}
	template <typename T = uintptr_t> T& m_MoveSyncModule() {
		return *(T*)((uintptr_t)this + 0xA64);
	}
	template <typename T = uintptr_t> T& m_SpineBone() {
		return *(T*)((uintptr_t)this + 0xA68);
	}
	template <typename T = Il2CppVector2> T& m_SimulatedAimRotationXLimitation() {
		return *(T*)((uintptr_t)this + 0xA6C);
	}
	template <typename T = bool> T& m_EnableSprintInterrupt() {
		return *(T*)((uintptr_t)this + 0xA74);
	}
	template <typename T = bool> T& m_DetectSprintInterrupt() {
		return *(T*)((uintptr_t)this + 0xA75);
	}
	template <typename T = Il2CppVector3> T& CurrentSimulateVelocity() {
		return *(T*)((uintptr_t)this + 0xA78);
	}
	template <typename T = bool> T& IgnoreSyncDirection() {
		return *(T*)((uintptr_t)this + 0xA84);
	}
	template <typename T = bool> T& IgnoreSyncSimulate() {
		return *(T*)((uintptr_t)this + 0xA85);
	}
	template <typename T = Il2CppQuaternion> T& m_DestnationRotation() {
		return *(T*)((uintptr_t)this + 0xA88);
	}
	template <typename T = float> T& m_RotationAngle() {
		return *(T*)((uintptr_t)this + 0xA98);
	}
	template <typename T = float> T& m_CurrentSlerpTime() {
		return *(T*)((uintptr_t)this + 0xA9C);
	}
	template <typename T = uintptr_t> T& m_FirstSocketTran() {
		return *(T*)((uintptr_t)this + 0xAA0);
	}
	template <typename T = float> static T& SyncDirectionRotationDeltaMin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_UseFastRot() {
		return *(T*)((uintptr_t)this + 0xAA4);
	}
	template <typename T = float> static T& m_RotationSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppVector3> T& m_LastPositionForIgnoreSimulate() {
		return *(T*)((uintptr_t)this + 0xAA8);
	}
	template <typename T = bool> static T& DropAllMoveDataInDead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> static T& IsUseNewTickSimualte() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5);
	}
	template <typename T = Il2CppString*> T& m_ChangeClipStartStr() {
		return *(T*)((uintptr_t)this + 0xAB4);
	}
	template <typename T = Il2CppString*> T& m_ChangeClipLoopStr() {
		return *(T*)((uintptr_t)this + 0xAB8);
	}
	template <typename T = Il2CppString*> T& m_ChangeClipEndStr() {
		return *(T*)((uintptr_t)this + 0xABC);
	}
	template <typename T = Il2CppVector3> T& m_NextSlideTacklePos() {
		return *(T*)((uintptr_t)this + 0xAC0);
	}
	template <typename T = Il2CppVector3> T& m_NextRollPos() {
		return *(T*)((uintptr_t)this + 0xACC);
	}
	template <typename T = Il2CppVector3> T& serverFightOffPosDiff() {
		return *(T*)((uintptr_t)this + 0xAD8);
	}
	template <typename T = Il2CppString*> T& m_LastDeadAnimName() {
		return *(T*)((uintptr_t)this + 0xAE4);
	}
	template <typename T = int32_t> T& m_LastDeadAnimFrame() {
		return *(T*)((uintptr_t)this + 0xAE8);
	}
	template <typename T = Il2CppString*> T& CustomDieAnim() {
		return *(T*)((uintptr_t)this + 0xAEC);
	}
	template <typename T = float> static T& TPPawnMoveAnimationSpeedMinSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = float> static T& TPPawnMoveAnimationSpeedMaxSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = float> static T& TPPawnAimMaxMovementParameter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = bool> T& m_MovementLastMove() {
		return *(T*)((uintptr_t)this + 0xAF0);
	}
	template <typename T = float> static T& InCocussionMoveAnimationParameter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = bool> T& DebugMoveStateMoveSpeed() {
		return *(T*)((uintptr_t)this + 0xAF1);
	}
	template <typename T = int32_t> T& m_LastMoveFrame() {
		return *(T*)((uintptr_t)this + 0xAF4);
	}
	template <typename T = int32_t> static T& MoveToStopCDFrameCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = float> T& PawnWalkMoveSpeed() {
		return *(T*)((uintptr_t)this + 0xAF8);
	}
	template <typename T = float> static T& SimualteMoveAnimationMaxSpeedFactor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = float> static T& AISimualteMoveAnimationMaxSpeedFactor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = bool> static T& UseNewSetWalkAnimMoveSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = float> T& CurrentSimualteMoveAnimationMaxSpeedFactor() {
		return *(T*)((uintptr_t)this + 0xAFC);
	}
	template <typename T = bool> T& m_HiddenByDieEffect() {
		return *(T*)((uintptr_t)this + 0xB00);
	}
	template <typename T = uintptr_t> T& m_OcclusionEffectAssetID() {
		return *(T*)((uintptr_t)this + 0xB04);
	}
	template <typename T = uintptr_t> T& m_PerspectiveEffectAssetID() {
		return *(T*)((uintptr_t)this + 0xB08);
	}
	template <typename T = int32_t> T& m_LastCheckHandTestFrame() {
		return *(T*)((uintptr_t)this + 0xB0C);
	}
	template <typename T = float> static T& SimulateFallingAnimationParameterLerper() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = float> static T& FixFallingSpeedMinDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = float> static T& SimulateFallingUseSimulateSpeedMinDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = float> static T& SimulateFallingCalcVelocityMinTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = float> static T& SimulateFallingMaxSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = float> static T& SimulateFallingPingLatercy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = float> static T& SimualteFallintHorizontalLerpFactor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = bool> static T& IsIfxSimulateFallingSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = Il2CppVector3> T& m_NextFountianFallingPos() {
		return *(T*)((uintptr_t)this + 0xB10);
	}
	template <typename T = bool> T& m_IsInSimulateAiming() {
		return *(T*)((uintptr_t)this + 0xB1C);
	}
	template <typename T = Il2CppVector3> T& m_SimulatedLadderTargetPos() {
		return *(T*)((uintptr_t)this + 0xB20);
	}
	template <typename T = float> T& m_SimulatedLadderSpeedY() {
		return *(T*)((uintptr_t)this + 0xB2C);
	}
	template <typename T = bool> T& m_SimulatedInLadder() {
		return *(T*)((uintptr_t)this + 0xB30);
	}
	template <typename T = float> T& m_TargetRotationYAngle() {
		return *(T*)((uintptr_t)this + 0xB34);
	}
	template <typename T = float> T& m_LastTargetRotationYAngle() {
		return *(T*)((uintptr_t)this + 0xB38);
	}
	template <typename T = float> T& m_InputRotationYAngle() {
		return *(T*)((uintptr_t)this + 0xB3C);
	}
	template <typename T = float> T& m_LastStartRotateAngleTime() {
		return *(T*)((uintptr_t)this + 0xB40);
	}
	template <typename T = bool> T& m_RotateRecord() {
		return *(T*)((uintptr_t)this + 0xB44);
	}
	template <typename T = bool> T& m_StopInputYAngle() {
		return *(T*)((uintptr_t)this + 0xB45);
	}
	template <typename T = bool> T& m_IsInRotate() {
		return *(T*)((uintptr_t)this + 0xB46);
	}
	template <typename T = bool> T& m_IsSprintLean() {
		return *(T*)((uintptr_t)this + 0xB47);
	}
	template <typename T = float> T& m_SprintLeanValue() {
		return *(T*)((uintptr_t)this + 0xB48);
	}
	template <typename T = float> T& m_CurrentSprintLean() {
		return *(T*)((uintptr_t)this + 0xB4C);
	}
	template <typename T = float> T& m_TargetSprintLean() {
		return *(T*)((uintptr_t)this + 0xB50);
	}
	template <typename T = float> static T& m_LeanThreshold() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_CurrentSprintWeight() {
		return *(T*)((uintptr_t)this + 0xB54);
	}
	template <typename T = float> T& m_CurrnetSprintWeightSpeed() {
		return *(T*)((uintptr_t)this + 0xB58);
	}
	template <typename T = float> T& TrunRoatateTotalTime() {
		return *(T*)((uintptr_t)this + 0xB5C);
	}
	template <typename T = float> T& SetForceMinYAngle() {
		return *(T*)((uintptr_t)this + 0xB60);
	}
	template <typename T = float> T& RotationMinAddSpeedThrehold() {
		return *(T*)((uintptr_t)this + 0xB64);
	}
	template <typename T = float> T& RotationMaxAddSpeedThrehold() {
		return *(T*)((uintptr_t)this + 0xB68);
	}
	template <typename T = float> T& RotationMaxAddSpeed() {
		return *(T*)((uintptr_t)this + 0xB6C);
	}
	template <typename T = float> T& RotationMaxAngleToForceSet() {
		return *(T*)((uintptr_t)this + 0xB70);
	}
	template <typename T = float> T& RotationOverMaxAngleSpeedScale() {
		return *(T*)((uintptr_t)this + 0xB74);
	}
	template <typename T = int32_t> T& ContinueInputAngleCount() {
		return *(T*)((uintptr_t)this + 0xB78);
	}
	template <typename T = float> T& RotationSprintSpeed() {
		return *(T*)((uintptr_t)this + 0xB7C);
	}
	template <typename T = float> T& RotationSprintAddPercent() {
		return *(T*)((uintptr_t)this + 0xB80);
	}
	template <typename T = float> T& RotationSprintPercentModeMinAngle() {
		return *(T*)((uintptr_t)this + 0xB84);
	}
	template <typename T = float> T& RotationSprintPercentModeMaxAngle() {
		return *(T*)((uintptr_t)this + 0xB88);
	}
	template <typename T = float> T& RotationSprintForceSetMaxAngle() {
		return *(T*)((uintptr_t)this + 0xB8C);
	}
	template <typename T = bool> T& IsUseSprintPecent() {
		return *(T*)((uintptr_t)this + 0xB90);
	}
	template <typename T = float> T& m_CurrentMaxAngleTurnRightDelta() {
		return *(T*)((uintptr_t)this + 0xB94);
	}
	template <typename T = float> T& m_CurrentMaxAngleTurnLeftDelta() {
		return *(T*)((uintptr_t)this + 0xB98);
	}
	template <typename T = float> T& m_CurrentAngleDiff() {
		return *(T*)((uintptr_t)this + 0xB9C);
	}
	template <typename T = float> T& m_CurrentTurnRotationValue() {
		return *(T*)((uintptr_t)this + 0xBA0);
	}
	template <typename T = float> T& TurnRotationValueGrowPercent() {
		return *(T*)((uintptr_t)this + 0xBA4);
	}
	template <typename T = float> T& TurnRotationValueShrinkPercent() {
		return *(T*)((uintptr_t)this + 0xBA8);
	}
	template <typename T = float> T& TurnRotationAngleDiffThreshold() {
		return *(T*)((uintptr_t)this + 0xBAC);
	}
	template <typename T = float> T& m_CurrentSprintLeanValue() {
		return *(T*)((uintptr_t)this + 0xBB0);
	}
	template <typename T = float> T& SprintLeanValueAddPercent() {
		return *(T*)((uintptr_t)this + 0xBB4);
	}
	template <typename T = float> T& SprintLeanValueFastAddPercent() {
		return *(T*)((uintptr_t)this + 0xBB8);
	}
	template <typename T = float> T& SprintLeanValueResetPercent() {
		return *(T*)((uintptr_t)this + 0xBBC);
	}
	template <typename T = float> T& SprintLeanValueAngle() {
		return *(T*)((uintptr_t)this + 0xBC0);
	}
	template <typename T = float> T& SprintAngleThreshold() {
		return *(T*)((uintptr_t)this + 0xBC4);
	}
	template <typename T = bool> T& m_RecoverToTarget() {
		return *(T*)((uintptr_t)this + 0xBC8);
	}
	template <typename T = bool> T& ForceRotateInLocal() {
		return *(T*)((uintptr_t)this + 0xBC9);
	}
	template <typename T = bool> T& NeedRotationLog() {
		return *(T*)((uintptr_t)this + 0xBCA);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LocalUseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigAnimComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAvatarLoadCompleted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponAttachmentLoadComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanUseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAllStateWhenStartAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedFireStopSprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoChangeClip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartSecondaryFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyMeshInDestroyPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitEventProcessor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPawnEventProcessor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickReplicationData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRespawnProtection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessStandaloneMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DetectSprintInterrupt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessSprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessServerMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestChangeMoveState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartSprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ServerStartSprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ServerStopSprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisableForceServerPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeToStandalone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSimulateDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReCalcSimulateWalkingVelocity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePawnTransitionType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessSimulateStand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSimulatedNeedCheckCollision() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedWalking() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedGravitySpikes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedDoGravitySpikesJump() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedDoGravitySpikesLand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPhysicsVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatePhysDriving() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateSkydivingStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateSkyFlyStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateSkydiving() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateUnRecentlySkydiving() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateSkydivingEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateUpwardLaunchToSkyFly() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateStartSwimming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateStopSwimming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateSwimming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateZiplineStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateZiplineTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateZiplineEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateStartBRClimb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatePhysBRClimb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatePhysBRClimbBaseTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimualtePhysBRClimbEndTransition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncDirection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDirLerpRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncDirectionTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceSyncMovement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PredictMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSimulatedAimRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateUnRecentlyRendered() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickSimulate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceSyncZiplineMovement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceSyncSkydivingMovement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceSyncUpwardLaunchMovement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x164);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceUpdateUAVPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_staticGetMeshAssetID_1P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x16C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDefaultMeshAssetID_3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_staticGetMeshAssetID_3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x174);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Female() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMeshAssetID_1P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x17C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMeshAssetID_3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTakeDamageComponentType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x184);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCrouchComponentType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetColliderOnDead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x194);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Die() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSoundEmitterType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x19C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFootstepAuditionRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFemale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnterWater() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LeaveWater() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndClimbLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedStartCrouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedEndCrouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedStartProne() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoJump() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PhysFalling() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFlashBangExplode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReSpawnPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInitAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1DC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDiscardWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedUpdateAimRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncAnimation3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1EC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndSwitchRole() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateSlideTackle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateEndSlideTackle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateRoll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1FC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateEndRoll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x200);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateStartSprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x204);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateSprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x208);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateEndSprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOCCVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x210);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoFightOffMovement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x214);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PhysFightOff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x218);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedFightOff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x21C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetForReconnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x220);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelPreparing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x224);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSimulateStartSprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x228);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSimulateStopSprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x22C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDeadHitDirection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x230);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SelectRandomAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x234);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetThrowWeaponAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x238);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDieAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x23C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRePlayDeadAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x240);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CallBackFastThrow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x244);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedPlayThrowWeaponAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x248);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateSyncUnequipWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateSyncEquipWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x250);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimualteSyncHoldWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x254);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDefaultStateName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x258);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMoveAnimationSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x25C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateForceMovementAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x260);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateForceSwimAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x264);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitCurrentSimualteMoveAnimationMaxSpeedFactor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x268);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWalkAnimMoveSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x26C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMovementAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x270);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateDeadReplayMovementAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x274);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsHiddenByDieEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x278);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHiddenByDieEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x27C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddBurnOutEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x280);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddIceEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x284);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddVampireEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x288);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddBlackHaloEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddSandEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x290);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddMeltEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x294);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddOcclusionEffectWithAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x298);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateOcclustionEffectAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x29C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddOcclusionEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveOcclusionEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPerspectiveEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ShowPerspectiveEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HidePerspectiveEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowFreeViewOcclustionEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshRenderState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSpectatingStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSpectatingEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponActivate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponDeactive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponAttachmentDeactive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBagWeaponActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRendererChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2D4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickSimulate_PhysFalling() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2D8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimualtePhysFallingToNewPhysState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2DC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedFalling() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2E0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsWaitJumpLand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2E4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimualtePhysFallingToPhysWalking() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2E8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitSimulateFallingAnimationParameter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2EC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessSimulateFallingAnimationParameter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2F0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcSimulatedFallingHorizontalVelocity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2F4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSimulateFallingDelayLanded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2F8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedDoLand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2FC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedFallingDoLand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x300);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateLimitJump() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x304);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitSimulateJumpOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x308);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedDoJump() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSimulatedJumpingSpeedScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x310);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedClimbOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x314);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedFalling_ClimbOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x318);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedFalling_Fountian() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x31C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickSimulate_PhysWalking() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x320);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimualtePhysWalkingToNewPhysState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x324);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedPhysWalkingToPhysFalling() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x328);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedPhysWalkingToPhysGravitySpikes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x32C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSimulateAimming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x330);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SynSimulationAimming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x334);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceTickSimulate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x338);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickPlayerPawnSimualte() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x33C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickSimulateFPRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x340);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickSimulatePhysics() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x344);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickSimulate_CommonChangePhysicsState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x348);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickSimulate_PhysDriving() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickSimulate_PhysWalkingVehiclePlateform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x350);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickSimulate_PhysBoarding() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x354);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickSimulate_PhysNavMeshMoving() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x358);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickSimulate_PhysLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x35C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickSimulate_PhysRemoteControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x360);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickSimulate_PhysClimb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x364);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickSimulate_PhysFollowPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x368);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickSimulate_PhysSkydiving() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x36C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickSimulate_PhysSwimming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x370);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickSimulate_PhysGrapRush() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x374);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickSimulate_PhysUpwardLaunch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x378);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickSimulate_PhysSlideTackle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x37C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickSimulate_PhysRoll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x380);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickSimulate_PhysSprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x384);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickSimulate_PhysFightOff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x388);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickSimulate_PhysZipline() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickSimulate_PhysGravitySpikes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x390);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimualtePhysGravitySpikesToPhysWalking() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x394);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPhysGravitySpikesChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x398);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedStartLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x39C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryEndLadderInTickSimulate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedEndLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedPhysLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceSyncLadderMovement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitTargetRotationYAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceSetSprintLean() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartTickRotateToAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndTickRotateAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncDirection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceResetRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSimulateRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSimulateRotationDirectyly() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalUpdateSprintBlend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3D4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalUpdateSimulateSetRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3D8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRecoverToTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3DC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldRotate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3E0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCurrentMaxTurnAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3E4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRotationRecoverSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3E8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRotationDirectly() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3EC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePawnRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3F0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSprintLean() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3F4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalUpdateSprintLean() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3F8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalTickTurnRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3FC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalUpdateSetRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x400);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCalcInputRotate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x404);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalCalclateRotateAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x408);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalTickSprintRotate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40C);
	}

	template <typename T = int32_t> T get_mIsFemale() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16E6C98))(this);
	}
	template <typename T = void> T set_mIsFemale(int32_t value) {
		return ((T (*)(PlayerPawn*, int32_t))(Il2CppBase() + 0x16E6CA0))(this, value);
	}
	template <typename T = uintptr_t> T get_mSoundEmitter() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16E6CA8))(this);
	}
	template <typename T = float> T get_MinMoveDistance() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16C0B0C))(this);
	}
	template <typename T = float> T get_OptimizeMaxDistance() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16C3884))(this);
	}
	template <typename T = float> T get_PredictTime() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16C388C))(this);
	}
	template <typename T = void> T set_PredictTime(float value) {
		return ((T (*)(PlayerPawn*, float))(Il2CppBase() + 0x16C3894))(this, value);
	}
	template <typename T = bool> T get_IsSimulatedJumping() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16E6D74))(this);
	}
	template <typename T = bool> T get_ShowParryEffectWhenHitted() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16E6D7C))(this);
	}
	template <typename T = uintptr_t> T get_SkillMgr() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16E6D84))(this);
	}
	template <typename T = void> T set_SkillMgr(uintptr_t value) {
		return ((T (*)(PlayerPawn*, uintptr_t))(Il2CppBase() + 0x16E6D9C))(this, value);
	}
	template <typename T = uintptr_t> T get_WeaponSyncModule() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16E6DB0))(this);
	}
	template <typename T = bool> T get_StartedFire() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16E6EC0))(this);
	}
	template <typename T = void> T set_StartedFire(bool value) {
		return ((T (*)(PlayerPawn*, bool))(Il2CppBase() + 0x16E6EC8))(this, value);
	}
	template <typename T = bool> T get_CanQuickSwitchWeapon() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16E6ED0))(this);
	}
	template <typename T = uintptr_t> T get_MoveSyncModule() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16C2E64))(this);
	}
	template <typename T = Il2CppVector3> T get_RadarPosition() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16E6ED8))(this);
	}
	template <typename T = Il2CppVector2> T get_SimulatedAimRotationXLimitation() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16E712C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16E7140))(this);
	}
	template <typename T = void> T LocalUseItem(uint64_t InItemID, int32_t useItemType, float extendTime) {
		return ((T (*)(PlayerPawn*, uint64_t, int32_t, float))(Il2CppBase() + 0x16E72C0))(this, InItemID, useItemType, extendTime);
	}
	template <typename T = bool> T get_CanLockedByRPG() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16E73D4))(this);
	}
	template <typename T = void> T ConfigAnimComponent() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16E7420))(this);
	}
	template <typename T = void> T OnAvatarLoadCompleted() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16E7510))(this);
	}
	template <typename T = void> T InitMesh(uintptr_t model) {
		return ((T (*)(PlayerPawn*, uintptr_t))(Il2CppBase() + 0x16E7768))(this, model);
	}
	template <typename T = void> T OnWeaponAttachmentLoadComplete() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16E78C8))(this);
	}
	template <typename T = bool> T CanUseItem(uint64_t InItemID) {
		return ((T (*)(PlayerPawn*, uint64_t))(Il2CppBase() + 0x16E79B8))(this, InItemID);
	}
	template <typename T = bool> T GetItem(uint64_t InItemID, bool PersonalItem) {
		return ((T (*)(PlayerPawn*, uint64_t, bool))(Il2CppBase() + 0x16E7AF4))(this, InItemID, PersonalItem);
	}
	template <typename T = void> T InitPawn(uintptr_t info) {
		return ((T (*)(PlayerPawn*, uintptr_t))(Il2CppBase() + 0x16E7C04))(this, info);
	}
	template <typename T = void> T StopAllStateWhenStartAim() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16E80EC))(this);
	}
	template <typename T = bool> T NeedFireStopSprint() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16E82DC))(this);
	}
	template <typename T = void> T StartFire() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16E84C0))(this);
	}
	template <typename T = void> T DoChangeClip() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16E8790))(this);
	}
	template <typename T = void> T StartSecondaryFire() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16E8894))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16E8970))(this);
	}
	template <typename T = void> T DestroyMeshInDestroyPawn(uintptr_t meshGO) {
		return ((T (*)(PlayerPawn*, uintptr_t))(Il2CppBase() + 0x16E8AB8))(this, meshGO);
	}
	template <typename T = void> T DestroyPawn() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16E8CA4))(this);
	}
	template <typename T = void> T InitEventProcessor() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16E8E04))(this);
	}
	template <typename T = uintptr_t> T GetPawnEventProcessor() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16E8EFC))(this);
	}
	template <typename T = void> T TickReplicationData(float deltaTime) {
		return ((T (*)(PlayerPawn*, float))(Il2CppBase() + 0x16E9020))(this, deltaTime);
	}
	template <typename T = void> T CheckRespawnProtection() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16E9268))(this);
	}
	template <typename T = void> T ProcessStandaloneMove(float deltaTime) {
		return ((T (*)(PlayerPawn*, float))(Il2CppBase() + 0x16E9684))(this, deltaTime);
	}
	template <typename T = void> T DetectSprintInterrupt(bool inputSprint, bool hasMove) {
		return ((T (*)(PlayerPawn*, bool, bool))(Il2CppBase() + 0x16E9974))(this, inputSprint, hasMove);
	}
	template <typename T = void> T ProcessSprint(float deltaTime) {
		return ((T (*)(PlayerPawn*, float))(Il2CppBase() + 0x16E9AD4))(this, deltaTime);
	}
	template <typename T = void> T ProcessServerMove(float deltaTime) {
		return ((T (*)(PlayerPawn*, float))(Il2CppBase() + 0x16E9EA0))(this, deltaTime);
	}
	template <typename T = void> T RequestChangeMoveState() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16E9FE4))(this);
	}
	template <typename T = void> T StartSprint() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16EA0F8))(this);
	}
	template <typename T = void> T ServerStartSprint() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16E9888))(this);
	}
	template <typename T = void> T ServerStopSprint() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16E81F0))(this);
	}
	template <typename T = void> T StopMove() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16EA214))(this);
	}
	template <typename T = void> T DisableForceServerPosition(float duration) {
		return ((T (*)(PlayerPawn*, float))(Il2CppBase() + 0x16EA358))(this, duration);
	}
	template <typename T = void> T ChangeToStandalone() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16EA464))(this);
	}
	template <typename T = float> T GetSimulateDistance() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16EA6A8))(this);
	}
	template <typename T = void> T ReCalcSimulateWalkingVelocity(float deltaTime) {
		return ((T (*)(PlayerPawn*, float))(Il2CppBase() + 0x16EA7D4))(this, deltaTime);
	}
	template <typename T = void> T UpdatePawnTransitionType() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16EA8A4))(this);
	}
	template <typename T = void> T ProcessSimulateStand(uintptr_t moveData) {
		return ((T (*)(PlayerPawn*, uintptr_t))(Il2CppBase() + 0x16EAA14))(this, moveData);
	}
	template <typename T = bool> T IsSimulatedNeedCheckCollision() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16EAD94))(this);
	}
	template <typename T = bool> T SimulatedWalking(float deltaTime) {
		return ((T (*)(PlayerPawn*, float))(Il2CppBase() + 0x16EAF74))(this, deltaTime);
	}
	template <typename T = void> T SimulatedGravitySpikes(float deltaTime) {
		return ((T (*)(PlayerPawn*, float))(Il2CppBase() + 0x16EBADC))(this, deltaTime);
	}
	template <typename T = void> T SimulatedDoGravitySpikesJump(uintptr_t jumpMoveData) {
		return ((T (*)(PlayerPawn*, uintptr_t))(Il2CppBase() + 0x16EC4D8))(this, jumpMoveData);
	}
	template <typename T = void> T SimulatedDoGravitySpikesLand() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16ECD2C))(this);
	}
	template <typename T = void> T SetPhysicsVolume(uintptr_t volume, bool bEnter) {
		return ((T (*)(PlayerPawn*, uintptr_t, bool))(Il2CppBase() + 0x16ECEF4))(this, volume, bEnter);
	}
	template <typename T = void> T SimulatePhysDriving(float deltaTime) {
		return ((T (*)(PlayerPawn*, float))(Il2CppBase() + 0x16ED1F0))(this, deltaTime);
	}
	template <typename T = void> T SimulateSkydivingStart(uintptr_t moveData) {
		return ((T (*)(PlayerPawn*, uintptr_t))(Il2CppBase() + 0x16ED4F4))(this, moveData);
	}
	template <typename T = void> T SimulateSkyFlyStart(uintptr_t moveData) {
		return ((T (*)(PlayerPawn*, uintptr_t))(Il2CppBase() + 0x16ED64C))(this, moveData);
	}
	template <typename T = void> T SimulateSkydiving(uintptr_t moveData, float deltaTime) {
		return ((T (*)(PlayerPawn*, uintptr_t, float))(Il2CppBase() + 0x16ED7A4))(this, moveData, deltaTime);
	}
	template <typename T = void> T SimulateUnRecentlySkydiving(uintptr_t moveData) {
		return ((T (*)(PlayerPawn*, uintptr_t))(Il2CppBase() + 0x16ED900))(this, moveData);
	}
	template <typename T = void> T SimulateSkydivingEnd(uintptr_t moveData) {
		return ((T (*)(PlayerPawn*, uintptr_t))(Il2CppBase() + 0x16EDA58))(this, moveData);
	}
	template <typename T = void> T SimulateUpwardLaunchToSkyFly(uintptr_t moveData) {
		return ((T (*)(PlayerPawn*, uintptr_t))(Il2CppBase() + 0x16EDBB0))(this, moveData);
	}
	template <typename T = void> T SimulateStartSwimming(uintptr_t moveData) {
		return ((T (*)(PlayerPawn*, uintptr_t))(Il2CppBase() + 0x16EDD08))(this, moveData);
	}
	template <typename T = void> T SimulateStopSwimming(uintptr_t moveData) {
		return ((T (*)(PlayerPawn*, uintptr_t))(Il2CppBase() + 0x16EDE60))(this, moveData);
	}
	template <typename T = void> T SimulateSwimming(uintptr_t moveData, float deltaTime) {
		return ((T (*)(PlayerPawn*, uintptr_t, float))(Il2CppBase() + 0x16EDFB8))(this, moveData, deltaTime);
	}
	template <typename T = void> T SimulateZiplineStart(uintptr_t moveData) {
		return ((T (*)(PlayerPawn*, uintptr_t))(Il2CppBase() + 0x16EE114))(this, moveData);
	}
	template <typename T = void> T SimulateZiplineTick(uintptr_t moveData) {
		return ((T (*)(PlayerPawn*, uintptr_t))(Il2CppBase() + 0x16EE26C))(this, moveData);
	}
	template <typename T = void> T SimulateZiplineEnd(uintptr_t moveData) {
		return ((T (*)(PlayerPawn*, uintptr_t))(Il2CppBase() + 0x16EE3C4))(this, moveData);
	}
	template <typename T = void> T SimulateStartBRClimb(uintptr_t moveData, float deltaTime) {
		return ((T (*)(PlayerPawn*, uintptr_t, float))(Il2CppBase() + 0x16EE51C))(this, moveData, deltaTime);
	}
	template <typename T = void> T SimulatePhysBRClimb(uintptr_t moveData, float deltaTime) {
		return ((T (*)(PlayerPawn*, uintptr_t, float))(Il2CppBase() + 0x16EE678))(this, moveData, deltaTime);
	}
	template <typename T = void> T SimulatePhysBRClimbBaseTick() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16EE7E8))(this);
	}
	template <typename T = void> T SimualtePhysBRClimbEndTransition(uintptr_t moveData, float deltaTime, uintptr_t result) {
		return ((T (*)(PlayerPawn*, uintptr_t, float, uintptr_t))(Il2CppBase() + 0x16EE8B0))(this, moveData, deltaTime, result);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(PlayerPawn*, float))(Il2CppBase() + 0x16EEA1C))(this, deltaTime);
	}
	template <typename T = Il2CppQuaternion> T get_DestnationRotation() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16EEB44))(this);
	}
	template <typename T = void> T set_DestnationRotation(Il2CppQuaternion value) {
		return ((T (*)(PlayerPawn*, Il2CppQuaternion))(Il2CppBase() + 0x16EEB58))(this, value);
	}
	template <typename T = void> T SyncDirection(Il2CppVector3 SimulateDirection, bool bForceSync) {
		return ((T (*)(PlayerPawn*, Il2CppVector3, bool))(Il2CppBase() + 0x16EEB70))(this, SimulateDirection, bForceSync);
	}
	template <typename T = float> T GetDirLerpRate() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16EF380))(this);
	}
	template <typename T = void> T SyncDirectionTick() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16EF450))(this);
	}
	template <typename T = void> T ForceSyncMovement(uintptr_t moveData) {
		return ((T (*)(PlayerPawn*, uintptr_t))(Il2CppBase() + 0x16C2F7C))(this, moveData);
	}
	template <typename T = void> T PredictMove() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16EB750))(this);
	}
	template <typename T = void> T UpdateSimulatedAimRotation() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16EFD10))(this);
	}
	template <typename T = void> T SimulateUnRecentlyRendered(int32_t SimulateDataCount, uintptr_t moveSyncModule, float deltaTime) {
		return ((T (*)(PlayerPawn*, int32_t, uintptr_t, float))(Il2CppBase() + 0x16EFF30))(this, SimulateDataCount, moveSyncModule, deltaTime);
	}
	template <typename T = void> T TickSimulate(float deltaTime) {
		return ((T (*)(PlayerPawn*, float))(Il2CppBase() + 0x16F0518))(this, deltaTime);
	}
	template <typename T = Il2CppString*> T get_ChangeClipStartStr() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16F0EB0))(this);
	}
	template <typename T = Il2CppString*> T get_ChangeClipLoopStr() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16F0FD0))(this);
	}
	template <typename T = Il2CppString*> T get_ChangeClipEndStr() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16F10F0))(this);
	}
	template <typename T = void> T ForceSyncZiplineMovement(Il2CppVector3 pos) {
		return ((T (*)(PlayerPawn*, Il2CppVector3))(Il2CppBase() + 0x16F1210))(this, pos);
	}
	template <typename T = void> T ForceSyncSkydivingMovement(Il2CppVector3 pos) {
		return ((T (*)(PlayerPawn*, Il2CppVector3))(Il2CppBase() + 0x16F12FC))(this, pos);
	}
	template <typename T = void> T ForceSyncUpwardLaunchMovement(Il2CppVector3 pos) {
		return ((T (*)(PlayerPawn*, Il2CppVector3))(Il2CppBase() + 0x16F13E8))(this, pos);
	}
	template <typename T = void> T ForceUpdateUAVPosition() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16E7D90))(this);
	}
	template <typename T = int32_t> static T staticGetMeshAssetID_1P(uint64_t RoleID, uintptr_t Camp) {
		return ((T (*)(void *, uint64_t, uintptr_t))(Il2CppBase() + 0x16F14D4))(0, RoleID, Camp);
	}
	template <typename T = int32_t> static T GetDefaultMeshAssetID_3P(uintptr_t Camp) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x16F1658))(0, Camp);
	}
	template <typename T = int32_t> static T staticGetMeshAssetID_3P(uint64_t RoleID, uintptr_t Camp) {
		return ((T (*)(void *, uint64_t, uintptr_t))(Il2CppBase() + 0x16F172C))(0, RoleID, Camp);
	}
	template <typename T = bool> T Female() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16F18E0))(this);
	}
	template <typename T = int32_t> T GetMeshAssetID_1P() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16F1AFC))(this);
	}
	template <typename T = int32_t> T GetMeshAssetID_3P() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16F1D18))(this);
	}
	template <typename T = uintptr_t> T GetTakeDamageComponentType() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16F1F28))(this);
	}
	template <typename T = uintptr_t> T GetCrouchComponentType() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16F2054))(this);
	}
	template <typename T = void> T ResetPlayer() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16F2180))(this);
	}
	template <typename T = void> T ResetModel() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16F243C))(this);
	}
	template <typename T = void> T SetColliderOnDead() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16F2504))(this);
	}
	template <typename T = void> T Die(bool isHeadShot, uintptr_t damageType) {
		return ((T (*)(PlayerPawn*, bool, uintptr_t))(Il2CppBase() + 0x16F27A4))(this, isHeadShot, damageType);
	}
	template <typename T = uintptr_t> T GetSoundEmitterType() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16F3078))(this);
	}
	template <typename T = float> T GetFootstepAuditionRange() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16F31A4))(this);
	}
	template <typename T = bool> T IsFemale() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16F3468))(this);
	}
	template <typename T = void> T EnterWater(uintptr_t water) {
		return ((T (*)(PlayerPawn*, uintptr_t))(Il2CppBase() + 0x16F3574))(this, water);
	}
	template <typename T = void> T LeaveWater(uintptr_t water) {
		return ((T (*)(PlayerPawn*, uintptr_t))(Il2CppBase() + 0x16F3654))(this, water);
	}
	template <typename T = void> T EndClimbLadder(uintptr_t ladder) {
		return ((T (*)(PlayerPawn*, uintptr_t))(Il2CppBase() + 0x16F3734))(this, ladder);
	}
	template <typename T = void> T SimulatedStartCrouch() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16E7618))(this);
	}
	template <typename T = void> T SimulatedEndCrouch(bool immediately) {
		return ((T (*)(PlayerPawn*, bool))(Il2CppBase() + 0x16EAC60))(this, immediately);
	}
	template <typename T = void> T SimulatedStartProne() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16F381C))(this);
	}
	template <typename T = void> T BeginDestroy() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16F3928))(this);
	}
	template <typename T = void> T DoJump() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16F3B18))(this);
	}
	template <typename T = void> T PhysFalling(float deltaTime) {
		return ((T (*)(PlayerPawn*, float))(Il2CppBase() + 0x16F3D98))(this, deltaTime);
	}
	template <typename T = void> T OnFlashBangExplode(int32_t weaponItemID, float lifespanScale, float intensity) {
		return ((T (*)(PlayerPawn*, int32_t, float, float))(Il2CppBase() + 0x16F3F4C))(this, weaponItemID, lifespanScale, intensity);
	}
	template <typename T = void> T OnReSpawnPlayer() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16F4414))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16F490C))(this);
	}
	template <typename T = void> T ResetMove() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16F4A78))(this);
	}
	template <typename T = void> T PostInitAnim() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16F4BA4))(this);
	}
	template <typename T = void> T OnDiscardWeapon(int32_t inWeaponItemID, unsigned char inWeaponSlot, int32_t actorId) {
		return ((T (*)(PlayerPawn*, int32_t, unsigned char, int32_t))(Il2CppBase() + 0x16F4F28))(this, inWeaponItemID, inWeaponSlot, actorId);
	}
	template <typename T = void> T SimulatedUpdateAimRotation() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16F510C))(this);
	}
	template <typename T = void> T OnSyncAnimation3P(uintptr_t animName, float animLength, float Param1) {
		return ((T (*)(PlayerPawn*, uintptr_t, float, float))(Il2CppBase() + 0x16F5388))(this, animName, animLength, Param1);
	}
	template <typename T = bool> T get_InterstedInOriginShift() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16F5494))(this);
	}
	template <typename T = void> T ApplyShift(Il2CppVector3 shift) {
		return ((T (*)(PlayerPawn*, Il2CppVector3))(Il2CppBase() + 0x16F549C))(this, shift);
	}
	template <typename T = void> T EndSwitchRole() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16F5608))(this);
	}
	template <typename T = void> T SimulateSlideTackle(uintptr_t moveData, float deltaTime) {
		return ((T (*)(PlayerPawn*, uintptr_t, float))(Il2CppBase() + 0x16F5884))(this, moveData, deltaTime);
	}
	template <typename T = void> T SimulateEndSlideTackle(uintptr_t newPhysicsState) {
		return ((T (*)(PlayerPawn*, uintptr_t))(Il2CppBase() + 0x16F5AF4))(this, newPhysicsState);
	}
	template <typename T = void> T SimulateRoll(uintptr_t moveData, float deltaTime) {
		return ((T (*)(PlayerPawn*, uintptr_t, float))(Il2CppBase() + 0x16F5C08))(this, moveData, deltaTime);
	}
	template <typename T = void> T SimulateEndRoll(uintptr_t newPhysicsState) {
		return ((T (*)(PlayerPawn*, uintptr_t))(Il2CppBase() + 0x16F5E78))(this, newPhysicsState);
	}
	template <typename T = void> T SimulateStartSprint(uintptr_t moveData) {
		return ((T (*)(PlayerPawn*, uintptr_t))(Il2CppBase() + 0x16F5F8C))(this, moveData);
	}
	template <typename T = void> T SimulateSprint(float deltaTime) {
		return ((T (*)(PlayerPawn*, float))(Il2CppBase() + 0x16F6154))(this, deltaTime);
	}
	template <typename T = void> T SimulateEndSprint(uintptr_t newPhysicsState) {
		return ((T (*)(PlayerPawn*, uintptr_t))(Il2CppBase() + 0x16F674C))(this, newPhysicsState);
	}
	template <typename T = void> T SetOCCVisible(bool occVisible) {
		return ((T (*)(PlayerPawn*, bool))(Il2CppBase() + 0x16F684C))(this, occVisible);
	}
	template <typename T = bool> T DoFightOffMovement(float deltaTime) {
		return ((T (*)(PlayerPawn*, float))(Il2CppBase() + 0x16F6950))(this, deltaTime);
	}
	template <typename T = void> T PhysFightOff(float deltaTime) {
		return ((T (*)(PlayerPawn*, float))(Il2CppBase() + 0x16F6CA0))(this, deltaTime);
	}
	template <typename T = void> T SimulatedFightOff(float deltaTime) {
		return ((T (*)(PlayerPawn*, float))(Il2CppBase() + 0x16F6E1C))(this, deltaTime);
	}
	template <typename T = void> T ResetForReconnect() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16F73DC))(this);
	}
	template <typename T = void> T CancelPreparing() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16F77AC))(this);
	}
	template <typename T = Il2CppString*> T get_CustomDieAnim() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16F78F8))(this);
	}
	template <typename T = void> T set_CustomDieAnim(Il2CppString* value) {
		return ((T (*)(PlayerPawn*, Il2CppString*))(Il2CppBase() + 0x16F7900))(this, value);
	}
	template <typename T = void> T OnSimulateStartSprint() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16F7908))(this);
	}
	template <typename T = void> T OnSimulateStopSprint() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16F79DC))(this);
	}
	template <typename T = unsigned char> T GetDeadHitDirection() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16F7AB0))(this);
	}
	template <typename T = void> T SelectRandomAnim(Il2CppArray<uintptr_t>* animArray, uintptr_t animName) {
		return ((T (*)(PlayerPawn*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x16F8064))(this, animArray, animName);
	}
	template <typename T = void> T ResetThrowWeaponAnimation() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16F81A0))(this);
	}
	template <typename T = void> T PlayDieAnim(bool isHeadShot) {
		return ((T (*)(PlayerPawn*, bool))(Il2CppBase() + 0x16F84B0))(this, isHeadShot);
	}
	template <typename T = void> T OnRePlayDeadAnim() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16F8624))(this);
	}
	template <typename T = void> T CallBackFastThrow() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16F86F8))(this);
	}
	template <typename T = void> T SimulatedPlayThrowWeaponAnim(uintptr_t throwWeaponData) {
		return ((T (*)(PlayerPawn*, uintptr_t))(Il2CppBase() + 0x16F889C))(this, throwWeaponData);
	}
	template <typename T = void> T SimulateSyncUnequipWeapon(uintptr_t syncData) {
		return ((T (*)(PlayerPawn*, uintptr_t))(Il2CppBase() + 0x16F91A0))(this, syncData);
	}
	template <typename T = void> T SimulateSyncEquipWeapon(uintptr_t syncData) {
		return ((T (*)(PlayerPawn*, uintptr_t))(Il2CppBase() + 0x16F93DC))(this, syncData);
	}
	template <typename T = void> T SimualteSyncHoldWeapon(uintptr_t syncData) {
		return ((T (*)(PlayerPawn*, uintptr_t))(Il2CppBase() + 0x16F9634))(this, syncData);
	}
	template <typename T = Il2CppString*> T GetDefaultStateName() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16F9804))(this);
	}
	template <typename T = void> T UpdateMoveAnimationSpeed(uintptr_t moveDelta, float deltaTime, bool isWalk) {
		return ((T (*)(PlayerPawn*, uintptr_t, float, bool))(Il2CppBase() + 0x16F9A2C))(this, moveDelta, deltaTime, isWalk);
	}
	template <typename T = void> T UpdateForceMovementAnimation(uintptr_t moveData, Il2CppVector3 LastPos) {
		return ((T (*)(PlayerPawn*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x16F9EEC))(this, moveData, LastPos);
	}
	template <typename T = void> T UpdateForceSwimAnimation(uintptr_t moveData, Il2CppVector3 LastPos) {
		return ((T (*)(PlayerPawn*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x16FA2F8))(this, moveData, LastPos);
	}
	template <typename T = void> T InitCurrentSimualteMoveAnimationMaxSpeedFactor() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16E7F54))(this);
	}
	template <typename T = void> T SetWalkAnimMoveSpeed(float currMaxSpeed) {
		return ((T (*)(PlayerPawn*, float))(Il2CppBase() + 0x16FA754))(this, currMaxSpeed);
	}
	template <typename T = void> T UpdateMovementAnimation(float deltaTime, Il2CppVector3 LastPos, bool useSpeed) {
		return ((T (*)(PlayerPawn*, float, Il2CppVector3, bool))(Il2CppBase() + 0x16FA974))(this, deltaTime, LastPos, useSpeed);
	}
	template <typename T = void> T UpdateDeadReplayMovementAnimation(float deltaTime, Il2CppVector3 LastPos) {
		return ((T (*)(PlayerPawn*, float, Il2CppVector3))(Il2CppBase() + 0x16FB600))(this, deltaTime, LastPos);
	}
	template <typename T = bool> T IsHiddenByDieEffect() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16FBDE4))(this);
	}
	template <typename T = void> T SetHiddenByDieEffect(bool value) {
		return ((T (*)(PlayerPawn*, bool))(Il2CppBase() + 0x16FBEBC))(this, value);
	}
	template <typename T = void> T AddBurnOutEffect(int32_t materialId, float duration) {
		return ((T (*)(PlayerPawn*, int32_t, float))(Il2CppBase() + 0x16A8A7C))(this, materialId, duration);
	}
	template <typename T = void> T AddIceEffect(int32_t materialId, float duration, bool inheritTexture) {
		return ((T (*)(PlayerPawn*, int32_t, float, bool))(Il2CppBase() + 0x16A8BDC))(this, materialId, duration, inheritTexture);
	}
	template <typename T = void> T AddVampireEffect(int32_t materialId, float duration, bool inheritTexture) {
		return ((T (*)(PlayerPawn*, int32_t, float, bool))(Il2CppBase() + 0x16A8D48))(this, materialId, duration, inheritTexture);
	}
	template <typename T = void> T AddBlackHaloEffect(int32_t materialId, float duration, bool inheritTexture) {
		return ((T (*)(PlayerPawn*, int32_t, float, bool))(Il2CppBase() + 0x16A8EB4))(this, materialId, duration, inheritTexture);
	}
	template <typename T = void> T AddSandEffect(int32_t materialId, float duration, bool inheritTexture) {
		return ((T (*)(PlayerPawn*, int32_t, float, bool))(Il2CppBase() + 0x16A9020))(this, materialId, duration, inheritTexture);
	}
	template <typename T = void> T AddMeltEffect(int32_t materialId, float duration, bool inheritTexture) {
		return ((T (*)(PlayerPawn*, int32_t, float, bool))(Il2CppBase() + 0x16A918C))(this, materialId, duration, inheritTexture);
	}
	template <typename T = void> T AddOcclusionEffectWithAssetID(uintptr_t assetID, Il2CppArray<uintptr_t>* excludeObj) {
		return ((T (*)(PlayerPawn*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x16FBF94))(this, assetID, excludeObj);
	}
	template <typename T = void> T UpdateOcclustionEffectAlpha(float alpha) {
		return ((T (*)(PlayerPawn*, float))(Il2CppBase() + 0x16FC148))(this, alpha);
	}
	template <typename T = void> T AddOcclusionEffect() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16FC218))(this);
	}
	template <typename T = void> T RemoveOcclusionEffect() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16F2F68))(this);
	}
	template <typename T = void> T ShowPerspectiveEffect(uintptr_t assetID, float duration) {
		return ((T (*)(PlayerPawn*, uintptr_t, float))(Il2CppBase() + 0x16FC324))(this, assetID, duration);
	}
	template <typename T = void> T ShowPerspectiveEffect_1(uintptr_t assetID) {
		return ((T (*)(PlayerPawn*, uintptr_t))(Il2CppBase() + 0x16FC43C))(this, assetID);
	}
	template <typename T = void> T HidePerspectiveEffect() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16E7E64))(this);
	}
	template <typename T = void> T ShowFreeViewOcclustionEffect(bool spectatingEnd) {
		return ((T (*)(PlayerPawn*, bool))(Il2CppBase() + 0x16F45D4))(this, spectatingEnd);
	}
	template <typename T = void> T RefreshRenderState() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16FC53C))(this);
	}
	template <typename T = void> T OnSpectatingStart() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16FC628))(this);
	}
	template <typename T = void> T OnSpectatingEnd() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16FC718))(this);
	}
	template <typename T = void> T OnWeaponActivate() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16FC80C))(this);
	}
	template <typename T = void> T OnWeaponDeactive(uintptr_t mesh) {
		return ((T (*)(PlayerPawn*, uintptr_t))(Il2CppBase() + 0x16FC8F4))(this, mesh);
	}
	template <typename T = void> T OnWeaponAttachmentDeactive(uintptr_t mesh) {
		return ((T (*)(PlayerPawn*, uintptr_t))(Il2CppBase() + 0x16FC9D4))(this, mesh);
	}
	template <typename T = void> T OnBagWeaponActive() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16FCAB0))(this);
	}
	template <typename T = void> T OnRendererChange() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16FCB98))(this);
	}
	template <typename T = void> T TickSimulate_PhysFalling(float deltaTime, bool isNewMoveData, uintptr_t moveData) {
		return ((T (*)(PlayerPawn*, float, bool, uintptr_t))(Il2CppBase() + 0x16FCC74))(this, deltaTime, isNewMoveData, moveData);
	}
	template <typename T = void> T SimualtePhysFallingToNewPhysState(float deltaTime, uintptr_t moveData) {
		return ((T (*)(PlayerPawn*, float, uintptr_t))(Il2CppBase() + 0x16FCEE0))(this, deltaTime, moveData);
	}
	template <typename T = void> T SimulatedFalling(float deltaTime, bool isDelayed) {
		return ((T (*)(PlayerPawn*, float, bool))(Il2CppBase() + 0x16FD1A4))(this, deltaTime, isDelayed);
	}
	template <typename T = bool> T IsWaitJumpLand() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16FE75C))(this);
	}
	template <typename T = void> T SimualtePhysFallingToPhysWalking(float deltaTime, uintptr_t moveData) {
		return ((T (*)(PlayerPawn*, float, uintptr_t))(Il2CppBase() + 0x16FE890))(this, deltaTime, moveData);
	}
	template <typename T = void> T InitSimulateFallingAnimationParameter(uintptr_t moveData) {
		return ((T (*)(PlayerPawn*, uintptr_t))(Il2CppBase() + 0x16FED84))(this, moveData);
	}
	template <typename T = void> T ProcessSimulateFallingAnimationParameter(float deltaTime) {
		return ((T (*)(PlayerPawn*, float))(Il2CppBase() + 0x16FF010))(this, deltaTime);
	}
	template <typename T = void> T CalcSimulatedFallingHorizontalVelocity(float deltaTime) {
		return ((T (*)(PlayerPawn*, float))(Il2CppBase() + 0x16FDE28))(this, deltaTime);
	}
	template <typename T = bool> T CheckSimulateFallingDelayLanded(bool isDelayed) {
		return ((T (*)(PlayerPawn*, bool))(Il2CppBase() + 0x16FE524))(this, isDelayed);
	}
	template <typename T = void> T SimulatedDoLand() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16FF3A0))(this);
	}
	template <typename T = void> T SimulatedFallingDoLand() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16FF638))(this);
	}
	template <typename T = void> T SimulateLimitJump() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16FF834))(this);
	}
	template <typename T = void> T InitSimulateJumpOver(uintptr_t jumpMoveData) {
		return ((T (*)(PlayerPawn*, uintptr_t))(Il2CppBase() + 0x16FF918))(this, jumpMoveData);
	}
	template <typename T = void> T SimulatedDoJump(uintptr_t jumpMoveData) {
		return ((T (*)(PlayerPawn*, uintptr_t))(Il2CppBase() + 0x16FFD00))(this, jumpMoveData);
	}
	template <typename T = float> T GetSimulatedJumpingSpeedScale() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16EC870))(this);
	}
	template <typename T = void> T SimulatedClimbOver(float deltaTime) {
		return ((T (*)(PlayerPawn*, float))(Il2CppBase() + 0x17007AC))(this, deltaTime);
	}
	template <typename T = void> T SimulatedFalling_ClimbOver(float deltaTime) {
		return ((T (*)(PlayerPawn*, float))(Il2CppBase() + 0x1700A80))(this, deltaTime);
	}
	template <typename T = void> T SimulatedFalling_Fountian(float deltaTime) {
		return ((T (*)(PlayerPawn*, float))(Il2CppBase() + 0x16FDB5C))(this, deltaTime);
	}
	template <typename T = void> T TickSimulate_PhysWalking(float deltaTime, bool isNewMoveData, uintptr_t moveData) {
		return ((T (*)(PlayerPawn*, float, bool, uintptr_t))(Il2CppBase() + 0x1700DD0))(this, deltaTime, isNewMoveData, moveData);
	}
	template <typename T = void> T SimualtePhysWalkingToNewPhysState(float deltaTime, uintptr_t moveData) {
		return ((T (*)(PlayerPawn*, float, uintptr_t))(Il2CppBase() + 0x17011A0))(this, deltaTime, moveData);
	}
	template <typename T = void> T SimulatedPhysWalkingToPhysFalling(float deltaTime, uintptr_t moveData) {
		return ((T (*)(PlayerPawn*, float, uintptr_t))(Il2CppBase() + 0x17013AC))(this, deltaTime, moveData);
	}
	template <typename T = void> T SimulatedPhysWalkingToPhysGravitySpikes(float deltaTime, uintptr_t moveData) {
		return ((T (*)(PlayerPawn*, float, uintptr_t))(Il2CppBase() + 0x1701834))(this, deltaTime, moveData);
	}
	template <typename T = bool> T IsSimulateAimming() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x1701CB8))(this);
	}
	template <typename T = void> T SynSimulationAimming(bool isAimming) {
		return ((T (*)(PlayerPawn*, bool))(Il2CppBase() + 0x16F2CDC))(this, isAimming);
	}
	template <typename T = bool> T ForceTickSimulate() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x1701D90))(this);
	}
	template <typename T = void> T TickPlayerPawnSimualte(float deltaTime) {
		return ((T (*)(PlayerPawn*, float))(Il2CppBase() + 0x16F0628))(this, deltaTime);
	}
	template <typename T = void> T TickSimulateFPRotation() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16F0D20))(this);
	}
	template <typename T = void> T TickSimulatePhysics(float deltaTime, bool isNewMoveData, uintptr_t moveData) {
		return ((T (*)(PlayerPawn*, float, bool, uintptr_t))(Il2CppBase() + 0x1701FE8))(this, deltaTime, isNewMoveData, moveData);
	}
	template <typename T = void> T TickSimulate_CommonChangePhysicsState(float deltaTime, uintptr_t newPhysicsState, uintptr_t moveData) {
		return ((T (*)(PlayerPawn*, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x1702534))(this, deltaTime, newPhysicsState, moveData);
	}
	template <typename T = void> T TickSimulate_PhysDriving(float deltaTime, bool isNewMoveData, uintptr_t moveData) {
		return ((T (*)(PlayerPawn*, float, bool, uintptr_t))(Il2CppBase() + 0x1703570))(this, deltaTime, isNewMoveData, moveData);
	}
	template <typename T = void> T TickSimulate_PhysWalkingVehiclePlateform(float deltaTime, bool isNewMoveData, uintptr_t moveData) {
		return ((T (*)(PlayerPawn*, float, bool, uintptr_t))(Il2CppBase() + 0x1703778))(this, deltaTime, isNewMoveData, moveData);
	}
	template <typename T = void> T TickSimulate_PhysBoarding(float deltaTime, bool isNewMoveData, uintptr_t moveData) {
		return ((T (*)(PlayerPawn*, float, bool, uintptr_t))(Il2CppBase() + 0x17038D8))(this, deltaTime, isNewMoveData, moveData);
	}
	template <typename T = void> T TickSimulate_PhysNavMeshMoving(float deltaTime, bool isNewMoveData, uintptr_t moveData) {
		return ((T (*)(PlayerPawn*, float, bool, uintptr_t))(Il2CppBase() + 0x1703A38))(this, deltaTime, isNewMoveData, moveData);
	}
	template <typename T = void> T TickSimulate_PhysLadder(float deltaTime, bool isNewMoveData, uintptr_t moveData) {
		return ((T (*)(PlayerPawn*, float, bool, uintptr_t))(Il2CppBase() + 0x1703B98))(this, deltaTime, isNewMoveData, moveData);
	}
	template <typename T = void> T TickSimulate_PhysRemoteControl(float deltaTime, bool isNewMoveData, uintptr_t moveData) {
		return ((T (*)(PlayerPawn*, float, bool, uintptr_t))(Il2CppBase() + 0x1703F98))(this, deltaTime, isNewMoveData, moveData);
	}
	template <typename T = void> T TickSimulate_PhysClimb(float deltaTime, bool isNewMoveData, uintptr_t moveData) {
		return ((T (*)(PlayerPawn*, float, bool, uintptr_t))(Il2CppBase() + 0x17040F8))(this, deltaTime, isNewMoveData, moveData);
	}
	template <typename T = void> T TickSimulate_PhysFollowPath(float deltaTime, bool isNewMoveData, uintptr_t moveData) {
		return ((T (*)(PlayerPawn*, float, bool, uintptr_t))(Il2CppBase() + 0x1704418))(this, deltaTime, isNewMoveData, moveData);
	}
	template <typename T = void> T TickSimulate_PhysSkydiving(float deltaTime, bool isNewMoveData, uintptr_t moveData) {
		return ((T (*)(PlayerPawn*, float, bool, uintptr_t))(Il2CppBase() + 0x1704578))(this, deltaTime, isNewMoveData, moveData);
	}
	template <typename T = void> T TickSimulate_PhysSwimming(float deltaTime, bool isNewMoveData, uintptr_t moveData) {
		return ((T (*)(PlayerPawn*, float, bool, uintptr_t))(Il2CppBase() + 0x170479C))(this, deltaTime, isNewMoveData, moveData);
	}
	template <typename T = void> T TickSimulate_PhysGrapRush(float deltaTime, bool isNewMoveData, uintptr_t moveData) {
		return ((T (*)(PlayerPawn*, float, bool, uintptr_t))(Il2CppBase() + 0x1704A98))(this, deltaTime, isNewMoveData, moveData);
	}
	template <typename T = void> T TickSimulate_PhysUpwardLaunch(float deltaTime, bool isNewMoveData, uintptr_t moveData) {
		return ((T (*)(PlayerPawn*, float, bool, uintptr_t))(Il2CppBase() + 0x1704D28))(this, deltaTime, isNewMoveData, moveData);
	}
	template <typename T = void> T TickSimulate_PhysSlideTackle(float deltaTime, bool isNewMoveData, uintptr_t moveData) {
		return ((T (*)(PlayerPawn*, float, bool, uintptr_t))(Il2CppBase() + 0x1704F90))(this, deltaTime, isNewMoveData, moveData);
	}
	template <typename T = void> T TickSimulate_PhysRoll(float deltaTime, bool isNewMoveData, uintptr_t moveData) {
		return ((T (*)(PlayerPawn*, float, bool, uintptr_t))(Il2CppBase() + 0x170528C))(this, deltaTime, isNewMoveData, moveData);
	}
	template <typename T = void> T TickSimulate_PhysSprint(float deltaTime, bool isNewMoveData, uintptr_t moveData) {
		return ((T (*)(PlayerPawn*, float, bool, uintptr_t))(Il2CppBase() + 0x1705588))(this, deltaTime, isNewMoveData, moveData);
	}
	template <typename T = void> T TickSimulate_PhysFightOff(float deltaTime, bool isNewMoveData, uintptr_t moveData) {
		return ((T (*)(PlayerPawn*, float, bool, uintptr_t))(Il2CppBase() + 0x17057F8))(this, deltaTime, isNewMoveData, moveData);
	}
	template <typename T = void> T TickSimulate_PhysZipline(float deltaTime, bool isNewMoveData, uintptr_t moveData) {
		return ((T (*)(PlayerPawn*, float, bool, uintptr_t))(Il2CppBase() + 0x17059D0))(this, deltaTime, isNewMoveData, moveData);
	}
	template <typename T = void> T TickSimulate_PhysGravitySpikes(float deltaTime, bool isNewMoveData, uintptr_t moveData) {
		return ((T (*)(PlayerPawn*, float, bool, uintptr_t))(Il2CppBase() + 0x1705D00))(this, deltaTime, isNewMoveData, moveData);
	}
	template <typename T = void> T SimualtePhysGravitySpikesToPhysWalking(float deltaTime, uintptr_t moveData) {
		return ((T (*)(PlayerPawn*, float, uintptr_t))(Il2CppBase() + 0x1705F94))(this, deltaTime, moveData);
	}
	template <typename T = void> T OnPhysGravitySpikesChanged(uintptr_t preState, uintptr_t curState) {
		return ((T (*)(PlayerPawn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1706474))(this, preState, curState);
	}
	template <typename T = void> T SimulatedStartLadder() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x170347C))(this);
	}
	template <typename T = bool> T TryEndLadderInTickSimulate(float deltaTime) {
		return ((T (*)(PlayerPawn*, float))(Il2CppBase() + 0x170336C))(this, deltaTime);
	}
	template <typename T = void> T SimulatedEndLadder() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16EFA68))(this);
	}
	template <typename T = void> T SimulatedPhysLadder(float deltaTime) {
		return ((T (*)(PlayerPawn*, float))(Il2CppBase() + 0x1703D2C))(this, deltaTime);
	}
	template <typename T = void> T ForceSyncLadderMovement(uintptr_t moveData) {
		return ((T (*)(PlayerPawn*, uintptr_t))(Il2CppBase() + 0x16EFB5C))(this, moveData);
	}
	template <typename T = float> T get_TargetRotationYAngle() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x170661C))(this);
	}
	template <typename T = void> T set_TargetRotationYAngle(float value) {
		return ((T (*)(PlayerPawn*, float))(Il2CppBase() + 0x16EFA58))(this, value);
	}
	template <typename T = void> T InitTargetRotationYAngle(float y) {
		return ((T (*)(PlayerPawn*, float))(Il2CppBase() + 0x1706624))(this, y);
	}
	template <typename T = void> T ForceSetSprintLean(float leanValue) {
		return ((T (*)(PlayerPawn*, float))(Il2CppBase() + 0x1706710))(this, leanValue);
	}
	template <typename T = void> T StartTickRotateToAngle() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x17067FC))(this);
	}
	template <typename T = void> T EndTickRotateAngle() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x16F57A4))(this);
	}
	template <typename T = void> T OnSyncDirection(Il2CppVector3 SimulateDirection, bool bForceSync) {
		return ((T (*)(PlayerPawn*, Il2CppVector3, bool))(Il2CppBase() + 0x16EF240))(this, SimulateDirection, bForceSync);
	}
	template <typename T = void> T ForceResetRotation() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x17068E8))(this);
	}
	template <typename T = void> T SetSimulateRotation(float yAngle, float inputAngle) {
		return ((T (*)(PlayerPawn*, float, float))(Il2CppBase() + 0x16EF808))(this, yAngle, inputAngle);
	}
	template <typename T = void> T SetSimulateRotationDirectyly(Il2CppVector3 angle) {
		return ((T (*)(PlayerPawn*, Il2CppVector3))(Il2CppBase() + 0x16EF910))(this, angle);
	}
	template <typename T = void> T SetRotation(float yAngle, float inputYAngle) {
		return ((T (*)(PlayerPawn*, float, float))(Il2CppBase() + 0x1706AC8))(this, yAngle, inputYAngle);
	}
	template <typename T = void> T InternalUpdateSprintBlend(float deltaTime) {
		return ((T (*)(PlayerPawn*, float))(Il2CppBase() + 0x1706C74))(this, deltaTime);
	}
	template <typename T = void> T InternalUpdateSimulateSetRotation(float deltaTime) {
		return ((T (*)(PlayerPawn*, float))(Il2CppBase() + 0x17023F4))(this, deltaTime);
	}
	template <typename T = void> T CheckRecoverToTarget(bool isMax) {
		return ((T (*)(PlayerPawn*, bool))(Il2CppBase() + 0x1706E7C))(this, isMax);
	}
	template <typename T = bool> T ShouldRotate(float diffAbs, uintptr_t isMax, uintptr_t maxDelta, uintptr_t forceReset) {
		return ((T (*)(PlayerPawn*, float, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1706FFC))(this, diffAbs, isMax, maxDelta, forceReset);
	}
	template <typename T = void> T UpdateCurrentMaxTurnAngle() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x1707290))(this);
	}
	template <typename T = float> T GetRotationRecoverSpeed(float angleDiffAbs) {
		return ((T (*)(PlayerPawn*, float))(Il2CppBase() + 0x1707418))(this, angleDiffAbs);
	}
	template <typename T = bool> T SetRotationDirectly(float angleDiffAbs) {
		return ((T (*)(PlayerPawn*, float))(Il2CppBase() + 0x1707618))(this, angleDiffAbs);
	}
	template <typename T = void> T UpdatePawnRotation(bool isRotation) {
		return ((T (*)(PlayerPawn*, bool))(Il2CppBase() + 0x170774C))(this, isRotation);
	}
	template <typename T = void> T UpdateSprintLean(bool isLean, float leanValue) {
		return ((T (*)(PlayerPawn*, bool, float))(Il2CppBase() + 0x1707890))(this, isLean, leanValue);
	}
	template <typename T = void> T InternalUpdateSprintLean(float angleDiff, float deltaTime) {
		return ((T (*)(PlayerPawn*, float, float))(Il2CppBase() + 0x17079A4))(this, angleDiff, deltaTime);
	}
	template <typename T = void> T InternalTickTurnRotation(float deltaTime, float angleDiff) {
		return ((T (*)(PlayerPawn*, float, float))(Il2CppBase() + 0x1707D54))(this, deltaTime, angleDiff);
	}
	template <typename T = void> T InternalUpdateSetRotation(float deltaTime) {
		return ((T (*)(PlayerPawn*, float))(Il2CppBase() + 0x1708074))(this, deltaTime);
	}
	template <typename T = bool> T CheckCalcInputRotate(bool isMax, float maxDelta, float angleDiffAbs, uintptr_t currentYAngle, uintptr_t calcAngle) {
		return ((T (*)(PlayerPawn*, bool, float, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x17088B0))(this, isMax, maxDelta, angleDiffAbs, currentYAngle, calcAngle);
	}
	template <typename T = void> T InternalCalclateRotateAngle(float deltaTime, uintptr_t currentYAngle, uintptr_t angleDiff, uintptr_t angleDiffAbs, uintptr_t addDelta, bool isMax, float maxDelta, uintptr_t calcAngle) {
		return ((T (*)(PlayerPawn*, float, uintptr_t, uintptr_t, uintptr_t, uintptr_t, bool, float, uintptr_t))(Il2CppBase() + 0x170853C))(this, deltaTime, currentYAngle, angleDiff, angleDiffAbs, addDelta, isMax, maxDelta, calcAngle);
	}
	template <typename T = void> T InternalTickSprintRotate(float deltaTime, uintptr_t currentYAngle, uintptr_t angleDiff, uintptr_t angleDiffAbs, uintptr_t addDelta, uintptr_t calcAngle) {
		return ((T (*)(PlayerPawn*, float, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1708C18))(this, deltaTime, currentYAngle, angleDiff, angleDiffAbs, addDelta, calcAngle);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x17093A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_LocalUseItem(uint64_t P0, int32_t P1, float P2) {
		return ((T (*)(PlayerPawn*, uint64_t, int32_t, float))(Il2CppBase() + 0x17093A8))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_ConfigAnimComponent() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x17093D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnAvatarLoadCompleted() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x17093D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitMesh(uintptr_t P0) {
		return ((T (*)(PlayerPawn*, uintptr_t))(Il2CppBase() + 0x17093D8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnWeaponAttachmentLoadComplete() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x17093DC))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CanUseItem(uint64_t P0) {
		return ((T (*)(PlayerPawn*, uint64_t))(Il2CppBase() + 0x17093E0))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_GetItem(uint64_t P0, bool P1) {
		return ((T (*)(PlayerPawn*, uint64_t, bool))(Il2CppBase() + 0x17093F8))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_InitPawn(uintptr_t P0) {
		return ((T (*)(PlayerPawn*, uintptr_t))(Il2CppBase() + 0x1709418))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_StopAllStateWhenStartAim() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x170941C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartFire() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x1709420))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DoChangeClip() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x1709424))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartSecondaryFire() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x1709428))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x170942C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DestroyPawn() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x1709430))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitEventProcessor() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x1709434))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TickReplicationData(float P0) {
		return ((T (*)(PlayerPawn*, float))(Il2CppBase() + 0x170943C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_CheckRespawnProtection() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x1709444))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ProcessStandaloneMove(float P0) {
		return ((T (*)(PlayerPawn*, float))(Il2CppBase() + 0x1709448))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ProcessSprint(float P0) {
		return ((T (*)(PlayerPawn*, float))(Il2CppBase() + 0x170944C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ProcessServerMove(float P0) {
		return ((T (*)(PlayerPawn*, float))(Il2CppBase() + 0x1709450))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_RequestChangeMoveState() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x1709454))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartSprint() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x1709458))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopMove() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x170945C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DisableForceServerPosition(float P0) {
		return ((T (*)(PlayerPawn*, float))(Il2CppBase() + 0x1709460))(this, P0);
	}
	template <typename T = float> T xLuaBaseProxy_GetSimulateDistance() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x1709464))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetPhysicsVolume(uintptr_t P0, bool P1) {
		return ((T (*)(PlayerPawn*, uintptr_t, bool))(Il2CppBase() + 0x1709468))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(PlayerPawn*, float))(Il2CppBase() + 0x170946C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SyncDirection(Il2CppVector3 P0, bool P1) {
		return ((T (*)(PlayerPawn*, Il2CppVector3, bool))(Il2CppBase() + 0x1709470))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_TickSimulate(float P0) {
		return ((T (*)(PlayerPawn*, float))(Il2CppBase() + 0x1709490))(this, P0);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetMeshAssetID_1P() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x1709494))(this);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetMeshAssetID_3P() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x1709498))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetTakeDamageComponentType() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x170949C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetCrouchComponentType() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x17094A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ResetPlayer() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x17094A4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Die(bool P0, uintptr_t P1) {
		return ((T (*)(PlayerPawn*, bool, uintptr_t))(Il2CppBase() + 0x17094A8))(this, P0, P1);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetSoundEmitterType() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x17094AC))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetFootstepAuditionRange() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x17094B0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EnterWater(uintptr_t P0) {
		return ((T (*)(PlayerPawn*, uintptr_t))(Il2CppBase() + 0x17094B4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_LeaveWater(uintptr_t P0) {
		return ((T (*)(PlayerPawn*, uintptr_t))(Il2CppBase() + 0x17094B8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_EndClimbLadder(uintptr_t P0) {
		return ((T (*)(PlayerPawn*, uintptr_t))(Il2CppBase() + 0x17094BC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SimulatedStartProne() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x17094C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginDestroy() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x17094C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DoJump() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x17094C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PhysFalling(float P0) {
		return ((T (*)(PlayerPawn*, float))(Il2CppBase() + 0x17094CC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnFlashBangExplode(int32_t P0, float P1, float P2) {
		return ((T (*)(PlayerPawn*, int32_t, float, float))(Il2CppBase() + 0x17094D0))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_OnReSpawnPlayer() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x17094E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x17094EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ResetMove() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x17094F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PostInitAnim() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x17094F4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDiscardWeapon(int32_t P0, unsigned char P1, int32_t P2) {
		return ((T (*)(PlayerPawn*, int32_t, unsigned char, int32_t))(Il2CppBase() + 0x17094F8))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncAnimation3P(uintptr_t P0, float P1, float P2) {
		return ((T (*)(PlayerPawn*, uintptr_t, float, float))(Il2CppBase() + 0x1709510))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_ApplyShift(Il2CppVector3 P0) {
		return ((T (*)(PlayerPawn*, Il2CppVector3))(Il2CppBase() + 0x1709528))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_EndSwitchRole() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x1709548))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetOCCVisible(bool P0) {
		return ((T (*)(PlayerPawn*, bool))(Il2CppBase() + 0x170954C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PhysFightOff(float P0) {
		return ((T (*)(PlayerPawn*, float))(Il2CppBase() + 0x1709550))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ResetForReconnect() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x1709554))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CancelPreparing() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x1709558))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnSimulateStartSprint() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x170955C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnSimulateStopSprint() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x1709560))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayDieAnim(bool P0) {
		return ((T (*)(PlayerPawn*, bool))(Il2CppBase() + 0x1709564))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnRePlayDeadAnim() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x1709568))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetDefaultStateName() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x170956C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsHiddenByDieEffect() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x1709570))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetHiddenByDieEffect(bool P0) {
		return ((T (*)(PlayerPawn*, bool))(Il2CppBase() + 0x1709574))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnSpectatingStart() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x1709578))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnSpectatingEnd() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x170957C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnWeaponActivate() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x1709580))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnWeaponDeactive(uintptr_t P0) {
		return ((T (*)(PlayerPawn*, uintptr_t))(Il2CppBase() + 0x1709584))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnWeaponAttachmentDeactive(uintptr_t P0) {
		return ((T (*)(PlayerPawn*, uintptr_t))(Il2CppBase() + 0x1709588))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnRendererChange() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x170958C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsSimulateAimming() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x1709590))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnPhysGravitySpikesChanged(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(PlayerPawn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1709594))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_InitTargetRotationYAngle(float P0) {
		return ((T (*)(PlayerPawn*, float))(Il2CppBase() + 0x1709598))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ForceResetRotation() {
		return ((T (*)(PlayerPawn*))(Il2CppBase() + 0x170959C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetRotation(float P0, float P1) {
		return ((T (*)(PlayerPawn*, float, float))(Il2CppBase() + 0x17095A0))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateSprintLean(bool P0, float P1) {
		return ((T (*)(PlayerPawn*, bool, float))(Il2CppBase() + 0x17095A4))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_InternalUpdateSetRotation(float P0) {
		return ((T (*)(PlayerPawn*, float))(Il2CppBase() + 0x17095A8))(this, P0);
	}

};

}
