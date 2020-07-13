#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PawnData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PawnData"));
	}

	template <typename T = float> T& PeripheralVision() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& SightRadius() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Gravity() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& AirSteering() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& InitialVerticalSpeed() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& InitialMaxJumpHeight() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& JumpLimitTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& JumpLimitMinJumpHeight() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& JumpLimitDecreaseRate() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& JumpMagicNumber() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& UseJumpLimit() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& MaxAcceleration() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& WalkAnimBaseSpeed() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& MaxSpeed() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& BackwardMaxSpeed() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& HorizontalMaxSpeed() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& HorizontalMaxCosValue() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& LadderSpeed() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& Friction() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& WalkingSpeedAddPercent() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& VerticalRoationLimitMin() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& VerticalRoationLimitMax() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& AngleLimitXDownProne() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& AngleLimitXUpProne() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& HorizontalRoationLimitMin() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& HorizontalRoationLimitMax() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& MaxAngleTurnRightDeltaProne() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& MaxAngleTurnLeftDeltaProne() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& HitScoreIntervalTime() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& ClimbUpHeight() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& EmptyHandSprintMaxAngle() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& ProneAnimSpeedMul() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& BackwardConsineThresholdValue() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = float> T& StandMoveToCrouchTransitionTime() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& CrouchMoveToStandTransitionTime() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = float> T& AnimationSprintForwardLerpSpeed() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> T& AnimationSprintLateralLerpSpeed() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = float> T& AnimationCrouchForwardLerpSpeed() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = float> T& AnimationCrouchLateralLerpSpeed() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = float> T& AnimationRunForwardLerpSpeed() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& AnimationRunSimulateSpeed() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = float> T& AnimationRunLateralLerpSpeed() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& AnimationSwimForwardLerpSpeed() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = float> T& AnimationSwimLateralLerpSpeed() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> T& AnimationTPSwimForwardLerpSpeed() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = float> T& AnimationTPSwimLateralLerpSpeed() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = float> T& AnimationProneForwardLerpSpeed() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = float> T& AnimationProneLateralLerpSpeed() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = float> T& AnimationDyingForwardLerpSpeed() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> T& AnimationDyingLateralLerpSpeed() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> T& WalkingToFallingHeight() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = float> T& SlideTackleToFallingHeight() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = float> T& WalkingToSkydivingHeight() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = float> T& WalkingToSkydivingHeightFromVehicle() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = float> T& EasyWalkingToSkydivingHeight() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = float> T& MaxAngleTurnLeftDelta() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = float> T& MaxAngleTurnRightDelta() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = float> T& MaxAnglePessnagerTurnDelta() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = float> T& MaxAngleMoveTurnDelta() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = float> T& SwimmingMaxSpeed() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = float> T& UnderwaterSwimmingMaxSpeed() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = float> T& FloatingMaxSpeed() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = float> T& SwimmingSprintMaxSpeed() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = float> T& UnderwaterSwimmingSprintMaxSpeed() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = float> T& DivingMaxSpeed() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = float> T& TotalOxygen() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = float> T& OxygenRecoverSpeed() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = float> T& OxygenAttenuateSpeed() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = float> T& StartSwimmingHeight() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = float> T& DeepWaterHeight() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = float> T& SprintingWaterHeight() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = float> T& SprintMaxCliffAngle() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = float> T& RecoverRotationSpeed() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = float> T& RecoverMoveRotationSpeed() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = float> T& RecoverSprintRotationSpeed() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = float> T& CliffAngle() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = float> T& SlopeLimit() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = float> T& FallingLandTime() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = float> T& DropDownTime() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = float> T& LandHardStandTime() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = float> T& CrouchingEyeHeight() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = float> T& Prone1PTransitionTime() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = float> T& Prone1PMidStopTime() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = float> T& SwimmingAimingFireSpeedScale() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = float> T& SwimmingFireSpeedScale() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = float> T& GuideMoveCheckAngle() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = float> T& GuideMoveCheckSpeed() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = float> T& GuideMoveCheckTime() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = float> T& ProneToStandAcceleration() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = float> T& IndividuationTPSCameraDistance() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = float> T& IndividuationTPSCameraYOffset() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = float> T& PlayHitCDTime() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = float> T& StandingEyeHeight() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = float> T& ProneingEyeHeight() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = float> T& ConcussionMovementScale() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = float> T& FallingHorizontalObstrutAngle() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = float> T& ValidFallingRayDistance() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = float> T& SwimPutWeaponTime() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = float> T& SwimGetWeaponTime() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = float> T& SwimLeftHandLimitUpwardAngle() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = float> T& StepOffset() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = float> T& MaxClimbClientForceMoveDistance() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = float> T& SetRotationDirectlyAngleThreshold() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = float> T& JumpLandHeight() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = float> T& WalkingToFallingVerticalSpeedLimit() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = float> T& DoJumpVerticalSpeedLimit() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = float> T& AutoSlideSpeed() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = float> T& MaxVerticalMoveDeltaSpeed() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = float> T& MaxClimbFallingSpeed() {
		return *(T*)((uintptr_t)this + 0x1BC);
	}
	template <typename T = float> T& JumpUpLimitTime() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = float> T& ReachTargetTime() {
		return *(T*)((uintptr_t)this + 0x1C4);
	}
	template <typename T = float> T& MaxForceSimulateDistance() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = float> T& FaceWallJumpMinCosValue() {
		return *(T*)((uintptr_t)this + 0x1CC);
	}
	template <typename T = float> T& JumpMeleeMinHeight() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = float> T& MaxWalkingSlopeVerticalVelocity() {
		return *(T*)((uintptr_t)this + 0x1D4);
	}
	template <typename T = float> T& SimulateAnimMoveScale() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = float> T& ProneValidXAngle() {
		return *(T*)((uintptr_t)this + 0x1DC);
	}
	template <typename T = float> T& ProneValidBodyLength() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = float> T& ProneValidPhysicsCastRadius() {
		return *(T*)((uintptr_t)this + 0x1E4);
	}
	template <typename T = float> T& MaxForceSimulateFallingDistance() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = float> T& LadderClimbTopTime() {
		return *(T*)((uintptr_t)this + 0x1EC);
	}
	template <typename T = float> T& FPPickupFadeTime() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = bool> T& AllowDownToLadder() {
		return *(T*)((uintptr_t)this + 0x1F4);
	}
	template <typename T = float> T& MoveAnimationSpeed() {
		return *(T*)((uintptr_t)this + 0x1F8);
	}
	template <typename T = float> T& MoveWalkSpeedForAnimation() {
		return *(T*)((uintptr_t)this + 0x1FC);
	}
	template <typename T = float> T& CrouchMoveAnimationSpeed() {
		return *(T*)((uintptr_t)this + 0x200);
	}
	template <typename T = float> T& LadderEnterFromTopTime() {
		return *(T*)((uintptr_t)this + 0x204);
	}
	template <typename T = float> T& LadderClimbFromTopTime() {
		return *(T*)((uintptr_t)this + 0x208);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position, uintptr_t targetType, uintptr_t mask, uintptr_t index, uintptr_t interrupt) {
		return ((T (*)(PawnData*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F01968))(this, bytes, position, targetType, mask, index, interrupt);
	}
	template <typename T = void> T xLuaBaseProxy_Deserialize(Il2CppArray<uintptr_t>* P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4, uintptr_t P5) {
		return ((T (*)(PawnData*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F0510C))(this, P0, P1, P2, P3, P4, P5);
	}

};

}
