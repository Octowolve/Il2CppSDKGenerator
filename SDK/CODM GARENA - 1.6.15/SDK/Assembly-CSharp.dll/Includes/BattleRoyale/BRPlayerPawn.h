#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRPlayerPawn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRPlayerPawn"));
	}

	template <typename T = uintptr_t> T& m_SkydivingPhys() {
		return *(T*)((uintptr_t)this + 0xBE8);
	}
	template <typename T = uintptr_t> T& m_BRBagWeaponAvatarComponent() {
		return *(T*)((uintptr_t)this + 0xBEC);
	}
	template <typename T = uintptr_t> T& m_BRClimbComponent() {
		return *(T*)((uintptr_t)this + 0xBF0);
	}
	template <typename T = uintptr_t> T& m_BRSwimingComponent() {
		return *(T*)((uintptr_t)this + 0xBF4);
	}
	template <typename T = uintptr_t> T& m_LeanComponent() {
		return *(T*)((uintptr_t)this + 0xBF8);
	}
	template <typename T = uintptr_t> T& m_UseItemComponent() {
		return *(T*)((uintptr_t)this + 0xBFC);
	}
	template <typename T = uintptr_t> T& m_VehicleComponent() {
		return *(T*)((uintptr_t)this + 0xC00);
	}
	template <typename T = uintptr_t> T& m_HoldWeaponComponent() {
		return *(T*)((uintptr_t)this + 0xC04);
	}
	template <typename T = uintptr_t> T& m_CheckInWaterComponent() {
		return *(T*)((uintptr_t)this + 0xC08);
	}
	template <typename T = uintptr_t> T& m_BRUseDogTagComponent() {
		return *(T*)((uintptr_t)this + 0xC0C);
	}
	template <typename T = uintptr_t> T& m_ZiplineComponent() {
		return *(T*)((uintptr_t)this + 0xC10);
	}
	template <typename T = uintptr_t> T& m_SnowTrackPawnComponent() {
		return *(T*)((uintptr_t)this + 0xC14);
	}
	template <typename T = float> T& m_BRMaxSpeed() {
		return *(T*)((uintptr_t)this + 0xC18);
	}
	template <typename T = float> T& m_AnimationSpeedTransitionTime() {
		return *(T*)((uintptr_t)this + 0xC1C);
	}
	template <typename T = float> T& m_AnimationSpeed() {
		return *(T*)((uintptr_t)this + 0xC20);
	}
	template <typename T = float> T& m_LastStartSprintTime() {
		return *(T*)((uintptr_t)this + 0xC24);
	}
	template <typename T = float> T& FastStopSprintTime() {
		return *(T*)((uintptr_t)this + 0xC28);
	}
	template <typename T = float> T& m_LastClimbTime() {
		return *(T*)((uintptr_t)this + 0xC2C);
	}
	template <typename T = float> T& AimMaxAngleXDown() {
		return *(T*)((uintptr_t)this + 0xC30);
	}
	template <typename T = float> T& AimMaxAngleXUp() {
		return *(T*)((uintptr_t)this + 0xC34);
	}
	template <typename T = float> T& m_RandomIdleAccuTime() {
		return *(T*)((uintptr_t)this + 0xC38);
	}
	template <typename T = float> T& m_RandomTimeForNextPlayRandomIdle() {
		return *(T*)((uintptr_t)this + 0xC3C);
	}
	template <typename T = float> T& CheckValidFallingHeightScale() {
		return *(T*)((uintptr_t)this + 0xC40);
	}
	template <typename T = bool> T& m_IsLastProcessGroundHit() {
		return *(T*)((uintptr_t)this + 0xC44);
	}
	template <typename T = bool> T& m_IsHitGround() {
		return *(T*)((uintptr_t)this + 0xC45);
	}
	template <typename T = uintptr_t> T& m_HitGroundHit() {
		return *(T*)((uintptr_t)this + 0xC48);
	}
	template <typename T = float> T& m_SlipSpeed() {
		return *(T*)((uintptr_t)this + 0xC74);
	}
	template <typename T = float> T& m_CurrentWalkingDownOffset() {
		return *(T*)((uintptr_t)this + 0xC78);
	}
	template <typename T = float> T& m_TagetWalkingDownOffset() {
		return *(T*)((uintptr_t)this + 0xC7C);
	}
	template <typename T = int32_t> T& m_LastCheckSprintFrame() {
		return *(T*)((uintptr_t)this + 0xC80);
	}
	template <typename T = int32_t> T& CheckSprintFrame() {
		return *(T*)((uintptr_t)this + 0xC84);
	}
	template <typename T = bool> T& m_IsFaceWall() {
		return *(T*)((uintptr_t)this + 0xC88);
	}
	template <typename T = float> T& TransitionToAliveTime() {
		return *(T*)((uintptr_t)this + 0xC8C);
	}
	template <typename T = uintptr_t> T& m_AsyncLoadingVestAssetID() {
		return *(T*)((uintptr_t)this + 0xC90);
	}
	template <typename T = float> T& m_FaceCliffAngle() {
		return *(T*)((uintptr_t)this + 0xC94);
	}
	template <typename T = float> T& ShowFaceCliffAngle() {
		return *(T*)((uintptr_t)this + 0xC98);
	}
	template <typename T = float> T& m_MaxOxygen() {
		return *(T*)((uintptr_t)this + 0xC9C);
	}
	template <typename T = float> T& m_CurrentOxygen() {
		return *(T*)((uintptr_t)this + 0xCA0);
	}
	template <typename T = Il2CppVector3> T& m_FirstPersonArmSocketInitLocalPos() {
		return *(T*)((uintptr_t)this + 0xCA4);
	}
	template <typename T = Il2CppVector3> T& m_FirstPersonWeaponSocketInitLocalPos() {
		return *(T*)((uintptr_t)this + 0xCB0);
	}
	template <typename T = float> T& m_CameraViewZAngleOffset() {
		return *(T*)((uintptr_t)this + 0xCBC);
	}
	template <typename T = float> T& m_CameraViewPosOffsetX() {
		return *(T*)((uintptr_t)this + 0xCC0);
	}
	template <typename T = Il2CppVector3> T& m_CameraViewAimingPosOffset() {
		return *(T*)((uintptr_t)this + 0xCC4);
	}
	template <typename T = bool> T& m_ShouldShowHeadAttachments() {
		return *(T*)((uintptr_t)this + 0xCD0);
	}
	template <typename T = int32_t> T& m_PendingSwitchWeaponItemID() {
		return *(T*)((uintptr_t)this + 0xCD4);
	}
	template <typename T = int32_t> T& m_PendingSwitchWeaponActorID() {
		return *(T*)((uintptr_t)this + 0xCD8);
	}
	template <typename T = unsigned char> T& m_PendingSwitchWeaponSlotID() {
		return *(T*)((uintptr_t)this + 0xCDC);
	}
	template <typename T = float> T& m_fCurrTickTime() {
		return *(T*)((uintptr_t)this + 0xCE0);
	}
	template <typename T = float> T& m_EndSubWeaponAcitonTime() {
		return *(T*)((uintptr_t)this + 0xCE4);
	}
	template <typename T = bool> T& IsFPSBeforDying() {
		return *(T*)((uintptr_t)this + 0xCE8);
	}
	template <typename T = bool> static T& DoHideInSwitchToFPSFireMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& mIsFPPMode() {
		return *(T*)((uintptr_t)this + 0xCE9);
	}
	template <typename T = bool> static T& PauseWhenBeginAiming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1);
	}
	template <typename T = Il2CppQuaternion> T& m_CacheFromAimRotationLocal() {
		return *(T*)((uintptr_t)this + 0xCEC);
	}
	template <typename T = Il2CppQuaternion> T& m_CacheToAimRotationLocal() {
		return *(T*)((uintptr_t)this + 0xCFC);
	}
	template <typename T = Il2CppQuaternion> T& m_Cache3PCameraRot() {
		return *(T*)((uintptr_t)this + 0xD0C);
	}
	template <typename T = Il2CppQuaternion> T& m_Cache1PCameraRot() {
		return *(T*)((uintptr_t)this + 0xD1C);
	}
	template <typename T = Il2CppString*> static T& m_OneMinusAimingCo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> T& mSwitchRoleCallBack() {
		return *(T*)((uintptr_t)this + 0xD2C);
	}
	template <typename T = uintptr_t> T& m_EndClipChangingByUseGrappleGunCallbackFunc() {
		return *(T*)((uintptr_t)this + 0xD30);
	}
	template <typename T = uintptr_t> T& m_EndGrappleGunSkillCallbackFunc() {
		return *(T*)((uintptr_t)this + 0xD34);
	}
	template <typename T = bool> T& m_Show1PHitBloodEffect() {
		return *(T*)((uintptr_t)this + 0xD38);
	}
	template <typename T = bool> T& m_IsKeepRunning() {
		return *(T*)((uintptr_t)this + 0xD39);
	}
	template <typename T = bool> T& m_IsPlayingReviveAnim() {
		return *(T*)((uintptr_t)this + 0xD3A);
	}
	template <typename T = float> T& m_DieStartTime() {
		return *(T*)((uintptr_t)this + 0xD3C);
	}
	template <typename T = float> T& m_DieCameraLerpTime() {
		return *(T*)((uintptr_t)this + 0xD40);
	}
	template <typename T = float> T& CrawlMaxAngle() {
		return *(T*)((uintptr_t)this + 0xD44);
	}
	template <typename T = float> T& m_ClawAngle() {
		return *(T*)((uintptr_t)this + 0xD48);
	}
	template <typename T = float> T& BoneRotateXAngle() {
		return *(T*)((uintptr_t)this + 0xD4C);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& m_DefaultActiveWeaponStateMap() {
		return *(T*)((uintptr_t)this + 0xD50);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& m_ActiveWeaponNextStateMap() {
		return *(T*)((uintptr_t)this + 0xD54);
	}
	template <typename T = bool> T& m_IsDelayPlayPickUpWeaponAnim() {
		return *(T*)((uintptr_t)this + 0xD58);
	}
	template <typename T = uintptr_t> T& m_DelayShowWeaponMesh() {
		return *(T*)((uintptr_t)this + 0xD5C);
	}
	template <typename T = int32_t> T& m_DelayPendingActiveBagWeaponActorID() {
		return *(T*)((uintptr_t)this + 0xD60);
	}
	template <typename T = int32_t> T& m_DelayPendingActiveBagWeaponItemID() {
		return *(T*)((uintptr_t)this + 0xD64);
	}
	template <typename T = int32_t> T& m_3PDelayPlayPickUpAnimWeaponActorID() {
		return *(T*)((uintptr_t)this + 0xD68);
	}
	template <typename T = int32_t> T& m_3PDelayPlayPickUpAnimWeaponItemID() {
		return *(T*)((uintptr_t)this + 0xD6C);
	}
	template <typename T = bool> T& bIsTPSCameraPosUseClimbCache() {
		return *(T*)((uintptr_t)this + 0xD70);
	}
	template <typename T = bool> T& m_lastStateIsClimb() {
		return *(T*)((uintptr_t)this + 0xD71);
	}
	template <typename T = float> T& m_MovetoScale() {
		return *(T*)((uintptr_t)this + 0xD74);
	}
	template <typename T = bool> T& m_PreSubWeaponFireOpenAimState() {
		return *(T*)((uintptr_t)this + 0xD78);
	}
	template <typename T = bool> T& m_RapidMove() {
		return *(T*)((uintptr_t)this + 0xD79);
	}
	template <typename T = uintptr_t> T& m_RapidMoveEffect() {
		return *(T*)((uintptr_t)this + 0xD7C);
	}
	template <typename T = Il2CppVector3> T& BeginFallPosition() {
		return *(T*)((uintptr_t)this + 0xD80);
	}
	template <typename T = Il2CppVector3> T& FallMaxHeightPosition() {
		return *(T*)((uintptr_t)this + 0xD8C);
	}
	template <typename T = uint32_t> T& ForwardValidFrameNum() {
		return *(T*)((uintptr_t)this + 0xD98);
	}
	template <typename T = bool> T& m_LastIsPointInSide() {
		return *(T*)((uintptr_t)this + 0xD9C);
	}
	template <typename T = bool> T& m_LastIsSprinting() {
		return *(T*)((uintptr_t)this + 0xD9D);
	}
	template <typename T = int32_t> T& m_LastTouchDoorFrame() {
		return *(T*)((uintptr_t)this + 0xDA0);
	}
	template <typename T = int32_t> T& m_WaitCheckServerPositionStartFrame() {
		return *(T*)((uintptr_t)this + 0xDA4);
	}
	template <typename T = bool> T& m_CheckSetServerPosition() {
		return *(T*)((uintptr_t)this + 0xDA8);
	}
	template <typename T = uintptr_t> T& m_CurrentLocalOrViewTargetPawn() {
		return *(T*)((uintptr_t)this + 0xDAC);
	}
	template <typename T = bool> T& m_HasPlayedSwitchToPsychosisSound1P() {
		return *(T*)((uintptr_t)this + 0xDB0);
	}
	template <typename T = float> T& nextCactusHitTime() {
		return *(T*)((uintptr_t)this + 0xDB4);
	}
	template <typename T = float> T& m_LeftShowingElectricTripWireShockTargetIndicatorItemTime() {
		return *(T*)((uintptr_t)this + 0xDB8);
	}
	template <typename T = float> T& m_LastPickupTime() {
		return *(T*)((uintptr_t)this + 0xDBC);
	}
	template <typename T = float> T& m_LastPickupItemId() {
		return *(T*)((uintptr_t)this + 0xDC0);
	}
	template <typename T = Il2CppString*> T& m_LastPickupAnimName() {
		return *(T*)((uintptr_t)this + 0xDC4);
	}
	template <typename T = Il2CppString*> T& m_LastPickupAnimLayerName() {
		return *(T*)((uintptr_t)this + 0xDC8);
	}
	template <typename T = float> T& m_LastPickupAnimSpeed() {
		return *(T*)((uintptr_t)this + 0xDCC);
	}
	template <typename T = float> T& m_LaskPickupAnimLength() {
		return *(T*)((uintptr_t)this + 0xDD0);
	}
	template <typename T = float> T& m_MaxPickupTime() {
		return *(T*)((uintptr_t)this + 0xDD4);
	}
	template <typename T = float> T& m_DyingEyeHeight() {
		return *(T*)((uintptr_t)this + 0xDD8);
	}
	template <typename T = bool> T& FixLeaveDyingAnime() {
		return *(T*)((uintptr_t)this + 0xDDC);
	}
	template <typename T = bool> T& m_LastTickUpdateCureTeammate() {
		return *(T*)((uintptr_t)this + 0xDDD);
	}
	template <typename T = float> T& lastTickDyingTime() {
		return *(T*)((uintptr_t)this + 0xDE0);
	}
	template <typename T = Il2CppList<uint32_t>*> T& CanCureTeammatesList() {
		return *(T*)((uintptr_t)this + 0xDE4);
	}
	template <typename T = uint32_t> T& m_CurrentAimedCureTeammate() {
		return *(T*)((uintptr_t)this + 0xDE8);
	}
	template <typename T = bool> T& IsSavingTeammate() {
		return *(T*)((uintptr_t)this + 0xDEC);
	}
	template <typename T = uintptr_t> T& saveTargetPawn() {
		return *(T*)((uintptr_t)this + 0xDF0);
	}
	template <typename T = uint32_t> T& m_SaveTargetPlayerId() {
		return *(T*)((uintptr_t)this + 0xDF4);
	}
	template <typename T = Il2CppString*> T& LeftHandFireTrigger() {
		return *(T*)((uintptr_t)this + 0xDF8);
	}
	template <typename T = Il2CppString*> T& LeftHandFlag() {
		return *(T*)((uintptr_t)this + 0xDFC);
	}
	template <typename T = Il2CppString*> T& DualSubWeaponReadyToUse() {
		return *(T*)((uintptr_t)this + 0xE00);
	}
	template <typename T = int32_t> T& m_LastCheckHandTestFrame() {
		return *(T*)((uintptr_t)this + 0xE04);
	}
	template <typename T = float> T& PhysClimbEndToFallingHeight() {
		return *(T*)((uintptr_t)this + 0xE08);
	}
	template <typename T = float> T& m_SwimVerticalSpeed() {
		return *(T*)((uintptr_t)this + 0xE0C);
	}
	template <typename T = uintptr_t> T& m_LastSwimMoveData() {
		return *(T*)((uintptr_t)this + 0xE10);
	}
	template <typename T = Il2CppVector3> T& m_CacheSimulateSwimSpeed() {
		return *(T*)((uintptr_t)this + 0xE50);
	}
	template <typename T = float> T& m_CacheSimulateSwimLerpSpeed() {
		return *(T*)((uintptr_t)this + 0xE5C);
	}
	template <typename T = float> T& m_SimulateSwimMaxSpeedFactor() {
		return *(T*)((uintptr_t)this + 0xE60);
	}
	template <typename T = float> T& m_SmoothSwimVerticalSpeed() {
		return *(T*)((uintptr_t)this + 0xE64);
	}
	template <typename T = float> T& m_SmoothSwimVerticaTransitionlSpeed() {
		return *(T*)((uintptr_t)this + 0xE68);
	}
	template <typename T = float> T& m_SmoothSwimSimulateForward() {
		return *(T*)((uintptr_t)this + 0xE6C);
	}
	template <typename T = float> T& m_SmoothSwimSimulateLateral() {
		return *(T*)((uintptr_t)this + 0xE70);
	}
	template <typename T = float> T& m_SmoothSwimSimulateTransitionlSpeed() {
		return *(T*)((uintptr_t)this + 0xE74);
	}
	template <typename T = int32_t> T& m_SwimmingMoveCount() {
		return *(T*)((uintptr_t)this + 0xE78);
	}
	template <typename T = uint32_t> T& m_SwimmingInvalidMoveCount() {
		return *(T*)((uintptr_t)this + 0xE7C);
	}
	template <typename T = int32_t> T& m_LastSwimMoveFrame() {
		return *(T*)((uintptr_t)this + 0xE80);
	}
	template <typename T = float> T& m_MaxChaseMoveDataSpeed() {
		return *(T*)((uintptr_t)this + 0xE84);
	}
	template <typename T = bool> T& m_SwimmingHasSwitchToMelee() {
		return *(T*)((uintptr_t)this + 0xE88);
	}
	template <typename T = float> T& m_CurrDynamicWaterSurfaceHeight() {
		return *(T*)((uintptr_t)this + 0xE8C);
	}
	template <typename T = int32_t> T& m_LastCharControllerMoveFrame() {
		return *(T*)((uintptr_t)this + 0xE90);
	}
	template <typename T = int32_t> T& CharControllerStandMoveFrameLimit() {
		return *(T*)((uintptr_t)this + 0xE94);
	}
	template <typename T = bool> static T& IsLimitMoveInStatic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = float> T& LastInputAccelerationForwrad() {
		return *(T*)((uintptr_t)this + 0xE98);
	}
	template <typename T = float> T& LastInputAccelerationLaterial() {
		return *(T*)((uintptr_t)this + 0xE9C);
	}
	template <typename T = float> T& LastLateralSpeed() {
		return *(T*)((uintptr_t)this + 0xEA0);
	}
	template <typename T = float> T& LastForwardSpeed() {
		return *(T*)((uintptr_t)this + 0xEA4);
	}
	template <typename T = float> T& CurrentLateralSpeed() {
		return *(T*)((uintptr_t)this + 0xEA8);
	}
	template <typename T = float> T& CurrentForwardSpeed() {
		return *(T*)((uintptr_t)this + 0xEAC);
	}
	template <typename T = float> T& MaintainLastLateralSpeed() {
		return *(T*)((uintptr_t)this + 0xEB0);
	}
	template <typename T = float> T& MaintainLastForwardSpeed() {
		return *(T*)((uintptr_t)this + 0xEB4);
	}
	template <typename T = bool> T& bMaintainLastMoveSpeed() {
		return *(T*)((uintptr_t)this + 0xEB8);
	}
	template <typename T = bool> T& bLastIsMove() {
		return *(T*)((uintptr_t)this + 0xEB9);
	}
	template <typename T = bool> T& bCurrentIsMove() {
		return *(T*)((uintptr_t)this + 0xEBA);
	}
	template <typename T = int32_t> T& m_AnimDefaultStateHash() {
		return *(T*)((uintptr_t)this + 0xEBC);
	}
	template <typename T = Il2CppVector2> T& m_CurrentMoveParameter() {
		return *(T*)((uintptr_t)this + 0xEC0);
	}
	template <typename T = Il2CppVector2> T& m_LastMoveParameter() {
		return *(T*)((uintptr_t)this + 0xEC8);
	}
	template <typename T = float> T& CurrentMoveParameterGrouRate() {
		return *(T*)((uintptr_t)this + 0xED0);
	}
	template <typename T = float> T& CurrentMoveParameterToTargetRate() {
		return *(T*)((uintptr_t)this + 0xED4);
	}
	template <typename T = float> T& CurrentMoveMagnitudeToOneRate() {
		return *(T*)((uintptr_t)this + 0xED8);
	}
	template <typename T = float> static T& AccelerationMaxThreshold() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = float> static T& AccelerationMaxThresholdReciprocal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = bool> static T& UseSpeedAccleration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = bool> static T& AllPhysicsStateChangedLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15);
	}
	template <typename T = int32_t> T& m_LastControllerColliderHitFrame() {
		return *(T*)((uintptr_t)this + 0xEDC);
	}
	template <typename T = int32_t> T& m_LastControllerColliderHitTargetId() {
		return *(T*)((uintptr_t)this + 0xEE0);
	}
	template <typename T = bool> static T& IsSaveNANOnlyInShippingExternal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x16);
	}
	template <typename T = bool> static T& IsFixNAN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x17);
	}
	template <typename T = bool> T& m_StopAimFormClickBtn() {
		return *(T*)((uintptr_t)this + 0xEE4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InfoType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateInventoryManager() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIKSolverComponentType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAvatarRotationComponentType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsHoldWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessInitPhysicsState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitComponentConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateLogicalComponents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TrySpawnSnowTrack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddAvailableVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreloadVehicleAnimator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAnimationTransitionBlend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowBagWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBackWeaponHidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchTo1PView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchTo3PView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanCheckAutoChangeClip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetForReconnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryAddWeaponBeforeSwitchView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToTPSFireMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToFPSFireMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBREndSwitchView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetControlInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchRole() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndSwitchRole() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSetViewType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoOpenAimOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayShowWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoCloseAimOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitEventProcessor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcDeathCam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateSkydivingStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateSkyFlyStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateSkydiving() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateUnRecentlySkydiving() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateSkydivingEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateUpwardLaunchToSkyFly() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMeshAssetID_3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBagAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSkydivingIsFollowChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PhysSkydiving() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PhysZipline() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSwitchRoleComponentType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSpectatorComponentType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSpectatingStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckHasInvisibleManAround() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSpecStartCheckAirCraft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSpectatingEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckInvisibleManSpectaingStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckInvisibleManSpectaingEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSprintFaceWall() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanSprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSimulateStartSprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSimulateStopSprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartSprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopSprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoClimb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoJump() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoJumpFromCliff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanProne() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanCrouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAcceleration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcPhysWalkingMaxSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessSprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessServerMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponAimRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReCalcSimulateWalkingVelocity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckEndSubWeaponActionInJump() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenAimFor3PFireMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustAimRotationForOpenAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustAimRotationForCloseAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseAimFor1PFireMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterSwitchRoleFunc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterSwitchRoleFunc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndClipChangingByUseGrappleGun() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UseGrappleGunAfterEndClipChanging() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndGrappleGunSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x164);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UseEndGrappleGunSkillAfterPlayEquipAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAvatarForGM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x16C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopRiding() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFinishItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x174);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedSimulatedPlayCrouchAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Die() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x17C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDying() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TimerHideDeadBody() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x184);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsTowardDeepWater() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPostSwitchAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetStartPosForFiringTrace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelBRSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x194);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcStandPlaceAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustCrawlRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x19C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddDefaultActiveWeaponState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddActiveWeaponNextState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponBeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponEndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPreWeaponActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GiveWeaponByPickUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UseDefaultKnife() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncAnimation3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedPrePlayGetWeaponAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrePlayGetWeaponAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrePlayUnequipWeaponAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponHiddenState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRendererChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAnimatinSpeedTransition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldStopIK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1DC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldStopRotationAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDyingPhysics() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1EC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedRemoveBagWeaponAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponAttachmentActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PendingActiveBagWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1FC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayPendingActiveBagWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x200);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedPickUpWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x204);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddBagWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x208);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExchangedBagWeaponPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TrySwitchWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x210);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceSwitchWeaponDirectly() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x214);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoShowBagWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x218);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelSwitchWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x21C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnByVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x220);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChangeSeat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x224);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLeaveVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x228);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchVehicleController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x22C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSwitchWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x230);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EquipAttachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x234);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EquipAttachmentByClient() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x238);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnEquipAttachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x23C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnEquipAttachmentByClient() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x240);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatePreUseUltSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x244);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcMaxMoveSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x248);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStartAircraft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBeginStartAircraft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x250);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCameraPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x254);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsTPSCameraPosUseClimbCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x258);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCameraPosition_TPS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x25C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__GetCameraPosition_TPS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x260);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCameraPosition_FirstPerson() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x264);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetFirstPersonSocket() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x268);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpdateFirstPersonSocketInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x26C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanLean() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x270);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopLean() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x274);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckLeanLeft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x278);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckLeanRight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x27C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCached3PAvatarGoAnimator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x280);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBR3PAvataBagWeaponSocketCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x284);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoThrowWeaponUsedOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x288);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoSwitchToLastUsedWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnThrowTypeChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x290);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToMelee() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x294);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOnVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x298);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x29C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOffVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TestReachOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessPassagerReachOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanPassagerReachOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPassengerStateChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceSyncZiplineMovement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceSyncSkydivingMovement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanUseUltSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldResetFirstPersonMoveSpeedMul() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayConcussionSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayExplodeSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStartLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryStopUseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2D4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryStopUseDogTag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2D8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStartIndividuationAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2DC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2E0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetHeadAndVestInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2E4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveVest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2E8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyWearableThingsChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2EC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnVestAssetReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2F0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginBuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2F4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartSubWeaponFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2F8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckStartSubWeaponFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2FC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EquipSubWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x300);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSubWeaponFireState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x304);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLeftHandFPAniParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x308);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLeftMuzzleFlashSocketPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelaySubWeaponFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x310);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSubWeaponDeactivate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x314);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeactivateSubWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x318);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndSubWeaponAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x31C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TacticalRadarMySelfSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x320);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TacticalRadarViewTeammateSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x324);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInNoArrowState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x328);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPawnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x32C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPawnVehicleState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x330);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSpriteThroughTeamSeat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x334);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayRapidMoveEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x338);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopPlayRapidMoveEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x33C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchWeaponAttach() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x340);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckForwardValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x344);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSkyFly() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x348);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSkydivingLeaderInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLeftWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x350);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBagWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x354);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBagWeaponRenderers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x358);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x35C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRayStartPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x360);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndUpwardLaunchAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x364);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AttachPropPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x368);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AirborneControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x36C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPlayGrappleGunFireAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x370);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsThrowMonkeyBomb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x374);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetStartTracePosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x378);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SoundTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x37C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopMeshRotate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x380);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnterTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x384);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLeaveTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x388);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPreTouchDoor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSetServerPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x390);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPsychosisState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x394);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayPsychosisSwitchEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x398);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayPsychosisSwitchSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x39C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopPsychosisSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPsychosisEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HidePsychosisEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshPsychosisEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPsychosisList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BRCheckCanClimb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBagSyncAllProp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReSpawnPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetOnVehicleState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckReSpawnGetOffVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUpArmObjScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshUpArmFXShowOrHide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCactusHit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3D4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNeedResolveWeaponJitter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3D8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnterElectricTripWire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3DC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LeaveElectricTripWire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3E0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowElectricTripWireShockTargetIndicatorItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3E4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideElectricTripWireShockTargetIndicatorItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3E8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateElectricTripWireShockTargetIndicatorItemTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3EC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshAllElectricTripWireEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3F0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshSkydivingPendantRenderer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3F4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CacheSlotItemVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3F8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_VehicleChangeWeaponHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3FC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetVechileAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x400);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceSetAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x404);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPreSwitchAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x408);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDefaultStateName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x410);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchAnimatorControllerCheckPickupAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x414);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x418);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAnimatorBlend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x41C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InInPickupItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x420);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNeedCanclePickUpAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x424);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayPickUpAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x428);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUnEquipAnimationSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x42C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEquipAnimationSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x430);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreResetGetWeaponAnimParameter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x434);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreResetPutWeaponAnimParameter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x438);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToTPPEnterDying() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x43C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleReviveAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x440);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelaySwitchFireMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x444);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndDyingToIdle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x448);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CurrentPlayerEnterDyingState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CommonEnterDying() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x450);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CommonLeaveDying() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x454);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LocalPlayerEnterDying() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x458);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LocalPlayerLeaveDying() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x45C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatePlayerEnterDying() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x460);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimualtePlayerLeaveDying() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x464);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayPlayDyingAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x468);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDyingAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x46C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPostSwitchAnimatorControllerInDying() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x470);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickDying() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x474);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceDyingCheck() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x478);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckDyingTeammates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x47C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindACureTeammate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x480);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CurrentWillCureTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x484);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckDyingTeammate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x488);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanCureMyTeammates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanNotCureTeammates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x490);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginSwimmingDying() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x494);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndSwimmingDying() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x498);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqServerEndCrawl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x49C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanSaveTeammate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSaveTeammateReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTimerSaveTeammateResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSaveTeammateResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginSave() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelSave() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndSave() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckUseLeftHand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanGrabLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLadderRootMotionEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLadderAcceleration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PhysClimb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoFallingFromClimb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRootMotionEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4D4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRootMotionCrossFade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4D8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRootMotionStop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4DC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLeaveClimbState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4E0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAdaptiveRootMotionType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4E4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckClimb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4E8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartBRClimb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4EC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckBRClimbFromSwim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4F0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginRootMotion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4F4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreBeginBRClimbing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4F8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndBRClimbing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4FC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanBRClimb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x500);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanStopBRRootMotion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x504);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedRootMotion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x508);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateStartBRClimb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatePhysBRClimb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x510);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatePhysBRClimbBaseTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x514);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimualtePhysBRClimbEndTransition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x518);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResetSwimmingAnimatorState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x51C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateStartSwimming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x520);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateStopSwimming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x524);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PredictSwimMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x528);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateSwimming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x52C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateSwimming_ForwardMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x530);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateSwimmingPredictMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x534);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcSimulateMoveY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x538);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSimulationSwimmingAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x53C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnterWater() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x540);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LeaveWater() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x544);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStartSwimming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x548);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldSwitchInSwimming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessWeaponEnterSwimState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x550);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnterSwimState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x554);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLeaveSwimState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x558);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEndSwimming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x55C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcSwimSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x560);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcSwimmingSpeedScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x564);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PhysSwimming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x568);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessSwimMoveDelta() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x56C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessSwimAnimationParameter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x570);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsUnderWater() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x574);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceStopSwim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x578);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessWalkingSlideMoveVertical() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x57C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcStandUponPawnSlideVec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x580);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckStandInPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x584);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessFaceWallShaking() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x588);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessFalling() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCharControllerMoveAvoidStuck() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x590);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WalkingCharControllerMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x594);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAnimatorBaseLayerInDefaultState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x598);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetMoveAnimationParameter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x59C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMoveAnimationParameterModeDying() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckWalk() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMoveAnimationParameterModeA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMoveAnimationParameterModeB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPositionChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessMoveAnimationParameter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMovementAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessFallingAnimationParameter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPhysicsStateChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPhysZiplineChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPhysSkydivingChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPhysWalkingChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPhysFallingChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPhysSlideTackleChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5D4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPhysRollChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5D8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPhysSwimmingChagned() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5DC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPhysClimbChagned() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5E0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckJumpFaceWall() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5E4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetJumpComponentType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5E8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckFallingPassThroughWall() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5EC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnControllerColliderHit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5F0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalUpdateSetRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5F4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndCrouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5F8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartProne() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5FC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndProne() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x600);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateZiplineStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x604);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateZiplineTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x608);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateZiplineEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDeltaMoveHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x610);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FallingGround() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x614);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsValidFallingHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x618);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCliff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x61C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckHitGround() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x620);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessGround() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x624);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsUnderWaterSurface() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x628);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndBagWeaponProcessing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x62C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckDeltaEulerIsNAN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x630);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x634);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x638);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x63C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x640);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAllStateWhenStartAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x644);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BROpenAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x648);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanOpenAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenAimFor1PFireMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x650);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseAimFor3PFireMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x654);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x658);
	}

	template <typename T = uintptr_t> T get_LogicType() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1ACCF18))(this);
	}
	template <typename T = uintptr_t> T get_SkydivingPhysics() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AB20BC))(this);
	}
	template <typename T = uintptr_t> T InfoType() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1ACCF20))(this);
	}
	template <typename T = uintptr_t> T get_IKSolverComponent() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1ACD04C))(this);
	}
	template <typename T = uintptr_t> T get_BagWeaponAvatarComponent() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1ACD104))(this);
	}
	template <typename T = uintptr_t> T get_SwimingComponent() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1ACD10C))(this);
	}
	template <typename T = uintptr_t> T get_AvatarRotationComponent() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1ACD114))(this);
	}
	template <typename T = uintptr_t> T get_HoldWeaponComponent() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1ACD1CC))(this);
	}
	template <typename T = uintptr_t> T get_UseItemComponent() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1ACD1D4))(this);
	}
	template <typename T = void> T set_VehicleComponent(uintptr_t value) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1ACD1DC))(this, value);
	}
	template <typename T = uintptr_t> T get_CurrentSeatMode() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1ACD1E4))(this);
	}
	template <typename T = uintptr_t> T get_CheckInWaterComponent() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1ACD2C4))(this);
	}
	template <typename T = uintptr_t> T get_UseDogTagComponent() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1ACD2CC))(this);
	}
	template <typename T = uintptr_t> T get_ZiplineComponent() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1ACBEA0))(this);
	}
	template <typename T = uintptr_t> T get_BRRootMotionComponent() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1ACD2D4))(this);
	}
	template <typename T = float> T get_MaxOxygen() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AC0C5C))(this);
	}
	template <typename T = void> T set_CurrentOxygen(float value) {
		return ((T (*)(BRPlayerPawn*, float))(Il2CppBase() + 0x1ACD38C))(this, value);
	}
	template <typename T = float> T get_CurrentOxygen() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AC0F70))(this);
	}
	template <typename T = float> T get_CameraViewZAngleOffset() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1ACD394))(this);
	}
	template <typename T = void> T set_CameraViewZAngleOffset(float value) {
		return ((T (*)(BRPlayerPawn*, float))(Il2CppBase() + 0x1ACD39C))(this, value);
	}
	template <typename T = float> T get_CameraViewPosOffsetX() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1ACD3A4))(this);
	}
	template <typename T = void> T set_CameraViewPosOffsetX(float value) {
		return ((T (*)(BRPlayerPawn*, float))(Il2CppBase() + 0x1ACD3AC))(this, value);
	}
	template <typename T = void> T set_CameraViewAimingPosOffset(Il2CppVector3 value) {
		return ((T (*)(BRPlayerPawn*, Il2CppVector3))(Il2CppBase() + 0x1ACD3B4))(this, value);
	}
	template <typename T = Il2CppVector3> T get_CameraViewAimingPosOffset() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1ACD3C4))(this);
	}
	template <typename T = float> T get_MaxClientForceMoveDistance() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1ACD3E0))(this);
	}
	template <typename T = float> T get_Health() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1ACD444))(this);
	}
	template <typename T = void> T set_Health(float value) {
		return ((T (*)(BRPlayerPawn*, float))(Il2CppBase() + 0x1ACD44C))(this, value);
	}
	template <typename T = Il2CppVector3> T get_MapShowPosition() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1ACD524))(this);
	}
	template <typename T = void> T CreateInventoryManager() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1ACD690))(this);
	}
	template <typename T = uintptr_t> T GetIKSolverComponentType() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1ACD790))(this);
	}
	template <typename T = uintptr_t> T GetAvatarRotationComponentType() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1ACD8BC))(this);
	}
	template <typename T = bool> T IsHoldWeapon() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1ACD9E8))(this);
	}
	template <typename T = void> T BeginDestroy() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1ACDAD8))(this);
	}
	template <typename T = void> T InitPawn(uintptr_t info) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1ACDC5C))(this, info);
	}
	template <typename T = void> T ProcessInitPhysicsState() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1ACDDAC))(this);
	}
	template <typename T = void> T InitComponentConfig() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1ACDF24))(this);
	}
	template <typename T = void> T InitMesh(uintptr_t model) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1ACE054))(this, model);
	}
	template <typename T = void> T CreateLogicalComponents() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1ACE894))(this);
	}
	template <typename T = void> T TrySpawnSnowTrack(uintptr_t pImpactInfo) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1ACEAC8))(this, pImpactInfo);
	}
	template <typename T = void> T AddAvailableVehicle(uintptr_t vehicle) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1ACEBB4))(this, vehicle);
	}
	template <typename T = void> T PreloadVehicleAnimator(uintptr_t vehicle) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1ACECB8))(this, vehicle);
	}
	template <typename T = void> T StopAnimationTransitionBlend() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1ACEE30))(this);
	}
	template <typename T = void> T ShowBagWeapon(bool bShow) {
		return ((T (*)(BRPlayerPawn*, bool))(Il2CppBase() + 0x1ACEF30))(this, bShow);
	}
	template <typename T = void> T SetBackWeaponHidden(bool isHidden) {
		return ((T (*)(BRPlayerPawn*, bool))(Il2CppBase() + 0x1ACF034))(this, isHidden);
	}
	template <typename T = void> T CloseAim() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1ACF120))(this);
	}
	template <typename T = void> T SwitchTo1PView() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1ACF6DC))(this);
	}
	template <typename T = void> T SwitchTo3PView() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1ACFC74))(this);
	}
	template <typename T = bool> T IsCanCheckAutoChangeClip() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AD0118))(this);
	}
	template <typename T = void> T ResetCamera() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1ACFAD8))(this);
	}
	template <typename T = void> T ResetForReconnect() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AD0200))(this);
	}
	template <typename T = void> T TryAddWeaponBeforeSwitchView(uintptr_t toVIeType) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1AD03D8))(this, toVIeType);
	}
	template <typename T = void> T SwitchToTPSFireMode() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AD04A8))(this);
	}
	template <typename T = void> T SwitchToFPSFireMode() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AD0ED4))(this);
	}
	template <typename T = void> T OnBREndSwitchView() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AD1614))(this);
	}
	template <typename T = void> T ResetControlInput() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AD2090))(this);
	}
	template <typename T = void> T SwitchRole(uintptr_t viewType, bool needToResetPose) {
		return ((T (*)(BRPlayerPawn*, uintptr_t, bool))(Il2CppBase() + 0x1AD2294))(this, viewType, needToResetPose);
	}
	template <typename T = void> T EndSwitchRole() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AD2394))(this);
	}
	template <typename T = void> T CheckSetViewType() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AD24D8))(this);
	}
	template <typename T = void> T DoOpenAimOver() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AD1DB0))(this);
	}
	template <typename T = void> T DelayShowWeapon() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AD27F8))(this);
	}
	template <typename T = void> T DoCloseAimOver() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AD1CB0))(this);
	}
	template <typename T = void> T InitEventProcessor() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AD28DC))(this);
	}
	template <typename T = void> T CalcDeathCam(float delatTime, uintptr_t out_CamLoc, uintptr_t out_CamRot) {
		return ((T (*)(BRPlayerPawn*, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x1AD29D4))(this, delatTime, out_CamLoc, out_CamRot);
	}
	template <typename T = void> T SimulateSkydivingStart(uintptr_t moveData) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1AD2DEC))(this, moveData);
	}
	template <typename T = void> T SimulateSkyFlyStart(uintptr_t moveData) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1AD2F58))(this, moveData);
	}
	template <typename T = void> T SimulateSkydiving(uintptr_t moveData, float deltaTime) {
		return ((T (*)(BRPlayerPawn*, uintptr_t, float))(Il2CppBase() + 0x1AD30C4))(this, moveData, deltaTime);
	}
	template <typename T = void> T SimulateUnRecentlySkydiving(uintptr_t moveData) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1AD3334))(this, moveData);
	}
	template <typename T = void> T SimulateSkydivingEnd(uintptr_t moveData) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1AD34F4))(this, moveData);
	}
	template <typename T = void> T SimulateUpwardLaunchToSkyFly(uintptr_t moveData) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1AD365C))(this, moveData);
	}
	template <typename T = int32_t> T GetMeshAssetID_3P() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AD37D8))(this);
	}
	template <typename T = int32_t> T GetBagAssetID() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AD3A6C))(this);
	}
	template <typename T = bool> T get_ShowFireLocOnRadar() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AD3B40))(this);
	}
	template <typename T = void> T OnSkydivingIsFollowChanged() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1ACAD4C))(this);
	}
	template <typename T = void> T PhysSkydiving(float deltaTime) {
		return ((T (*)(BRPlayerPawn*, float))(Il2CppBase() + 0x1AD3D70))(this, deltaTime);
	}
	template <typename T = void> T PhysZipline(float deltaTime) {
		return ((T (*)(BRPlayerPawn*, float))(Il2CppBase() + 0x1AD40D8))(this, deltaTime);
	}
	template <typename T = uintptr_t> T GetSwitchRoleComponentType() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AD41C4))(this);
	}
	template <typename T = uintptr_t> T GetSpectatorComponentType() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AD42F0))(this);
	}
	template <typename T = void> T OnSpectatingStart() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AD441C))(this);
	}
	template <typename T = void> T CheckHasInvisibleManAround() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AD50E0))(this);
	}
	template <typename T = void> T OnSpecStartCheckAirCraft() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AD499C))(this);
	}
	template <typename T = void> T OnSpectatingEnd() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AD5548))(this);
	}
	template <typename T = void> T CheckInvisibleManSpectaingStart() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AD4F9C))(this);
	}
	template <typename T = void> T CheckInvisibleManSpectaingEnd() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AD605C))(this);
	}
	template <typename T = bool> T CheckSprintFaceWall() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AD6284))(this);
	}
	template <typename T = bool> T CanSprint() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AD6584))(this);
	}
	template <typename T = void> T OnSimulateStartSprint() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AD6740))(this);
	}
	template <typename T = void> T OnSimulateStopSprint() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AD6818))(this);
	}
	template <typename T = void> T StartSprint() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AD68F0))(this);
	}
	template <typename T = void> T StopSprint() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AD6CE0))(this);
	}
	template <typename T = void> T DoClimb() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AD701C))(this);
	}
	template <typename T = void> T DoJump() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AD715C))(this);
	}
	template <typename T = void> T DoJumpFromCliff() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AD72E0))(this);
	}
	template <typename T = bool> T CanProne() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AD76BC))(this);
	}
	template <typename T = bool> T CanCrouch() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AD7904))(this);
	}
	template <typename T = void> T UpdateAcceleration(float forward, float strafe) {
		return ((T (*)(BRPlayerPawn*, float, float))(Il2CppBase() + 0x1AD7A04))(this, forward, strafe);
	}
	template <typename T = float> T CalcPhysWalkingMaxSpeed(float deltaTime, Il2CppVector3 oldVelocity) {
		return ((T (*)(BRPlayerPawn*, float, Il2CppVector3))(Il2CppBase() + 0x1AD82CC))(this, deltaTime, oldVelocity);
	}
	template <typename T = void> T ProcessSprint(float deltaTime) {
		return ((T (*)(BRPlayerPawn*, float))(Il2CppBase() + 0x1AD83E4))(this, deltaTime);
	}
	template <typename T = void> T ProcessServerMove(float deltaTime) {
		return ((T (*)(BRPlayerPawn*, float))(Il2CppBase() + 0x1AD84F0))(this, deltaTime);
	}
	template <typename T = Il2CppQuaternion> T GetWeaponAimRotation() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AD8638))(this);
	}
	template <typename T = void> T ReCalcSimulateWalkingVelocity(float deltaTime) {
		return ((T (*)(BRPlayerPawn*, float))(Il2CppBase() + 0x1AD8740))(this, deltaTime);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(BRPlayerPawn*, float))(Il2CppBase() + 0x1AD89D4))(this, deltaTime);
	}
	template <typename T = void> T CheckEndSubWeaponActionInJump(float deltaTime) {
		return ((T (*)(BRPlayerPawn*, float))(Il2CppBase() + 0x1AD96F8))(this, deltaTime);
	}
	template <typename T = void> T OpenAimFor3PFireMode() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AD9990))(this);
	}
	template <typename T = void> T AdjustAimRotationForOpenAim() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AD9F1C))(this);
	}
	template <typename T = void> T AdjustAimRotationForCloseAim() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1ADA6AC))(this);
	}
	template <typename T = void> T CloseAimFor1PFireMode() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1ACF47C))(this);
	}
	template <typename T = void> T RegisterSwitchRoleFunc(uintptr_t callbackFunc) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1ADAA94))(this, callbackFunc);
	}
	template <typename T = void> T UnRegisterSwitchRoleFunc() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AD1FBC))(this);
	}
	template <typename T = void> T EndClipChangingByUseGrappleGun(uintptr_t callBackfunc) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1ADAB6C))(this, callBackfunc);
	}
	template <typename T = void> T UseGrappleGunAfterEndClipChanging() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1ADAC44))(this);
	}
	template <typename T = void> T EndGrappleGunSkill(uintptr_t callBackfunc) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1ADAD2C))(this, callBackfunc);
	}
	template <typename T = void> T UseEndGrappleGunSkillAfterPlayEquipAnim() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1ADAE04))(this);
	}
	template <typename T = void> T ResetAvatarForGM() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1ADAEEC))(this);
	}
	template <typename T = void> T StopRiding() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1ADB014))(this);
	}
	template <typename T = bool> T get_IsKeepRunning() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1ADB0DC))(this);
	}
	template <typename T = void> T set_IsKeepRunning(bool value) {
		return ((T (*)(BRPlayerPawn*, bool))(Il2CppBase() + 0x1ADB150))(this, value);
	}
	template <typename T = void> T OnFinishItem(Il2CppString* soundName) {
		return ((T (*)(BRPlayerPawn*, Il2CppString*))(Il2CppBase() + 0x1ADB158))(this, soundName);
	}
	template <typename T = bool> T get_IsDying() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1ADB228))(this);
	}
	template <typename T = bool> T NeedSimulatedPlayCrouchAnim() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1ADB260))(this);
	}
	template <typename T = void> T Die(bool isHeadShot, uintptr_t damageType) {
		return ((T (*)(BRPlayerPawn*, bool, uintptr_t))(Il2CppBase() + 0x1ADB378))(this, isHeadShot, damageType);
	}
	template <typename T = void> T PlayDying(bool isHeadShot, uintptr_t damageType) {
		return ((T (*)(BRPlayerPawn*, bool, uintptr_t))(Il2CppBase() + 0x1ADC180))(this, isHeadShot, damageType);
	}
	template <typename T = void> T TimerHideDeadBody() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1ADC6DC))(this);
	}
	template <typename T = bool> T IsTowardDeepWater(Il2CppVector3 deltaMove) {
		return ((T (*)(BRPlayerPawn*, Il2CppVector3))(Il2CppBase() + 0x1ADC93C))(this, deltaMove);
	}
	template <typename T = void> T OnPostSwitchAnimatorController(uintptr_t animatorController, bool isChanged) {
		return ((T (*)(BRPlayerPawn*, uintptr_t, bool))(Il2CppBase() + 0x1ADCE10))(this, animatorController, isChanged);
	}
	template <typename T = Il2CppVector3> T GetStartPosForFiringTrace() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1ADD0E4))(this);
	}
	template <typename T = void> T CancelBRSkill() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1ADD1D0))(this);
	}
	template <typename T = bool> T CalcStandPlaceAngle(uintptr_t StandSlopeAngle, uintptr_t HitPosDir, uintptr_t impactInfo) {
		return ((T (*)(BRPlayerPawn*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1ADD2E4))(this, StandSlopeAngle, HitPosDir, impactInfo);
	}
	template <typename T = void> T AdjustCrawlRotation() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1ADD898))(this);
	}
	template <typename T = void> T AddDefaultActiveWeaponState(int32_t actorID, uintptr_t defaultState) {
		return ((T (*)(BRPlayerPawn*, int32_t, uintptr_t))(Il2CppBase() + 0x1AD0D20))(this, actorID, defaultState);
	}
	template <typename T = void> T AddActiveWeaponNextState(int32_t actorID, uintptr_t defaultState) {
		return ((T (*)(BRPlayerPawn*, int32_t, uintptr_t))(Il2CppBase() + 0x1ADDB00))(this, actorID, defaultState);
	}
	template <typename T = void> T OnWeaponBeginState(uintptr_t newState) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1ADDCB4))(this, newState);
	}
	template <typename T = void> T OnWeaponEndState(uintptr_t stateType) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1ADDDD8))(this, stateType);
	}
	template <typename T = void> T OnPreWeaponActive(uintptr_t activeWeapon) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1ADDF04))(this, activeWeapon);
	}
	template <typename T = void> T OnWeaponChanged() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1ADE218))(this);
	}
	template <typename T = uintptr_t> T GiveWeaponByPickUp(int32_t weaponID, unsigned char slot, bool bAddForce, Il2CppList<uintptr_t>* partInfoList, uint32_t skinID, int32_t actorID, int32_t weaponLevel, int32_t crossHairItemID) {
		return ((T (*)(BRPlayerPawn*, int32_t, unsigned char, bool, Il2CppList<uintptr_t>*, uint32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x1ADECA4))(this, weaponID, slot, bAddForce, partInfoList, skinID, actorID, weaponLevel, crossHairItemID);
	}
	template <typename T = void> T UseDefaultKnife() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1ADEEC0))(this);
	}
	template <typename T = void> T OnSyncAnimation3P(uintptr_t animName, float animLength, float Param1) {
		return ((T (*)(BRPlayerPawn*, uintptr_t, float, float))(Il2CppBase() + 0x1ADEFE8))(this, animName, animLength, Param1);
	}
	template <typename T = void> T SimulatedPrePlayGetWeaponAnim(int32_t actorId, int32_t itemId, float equipTime) {
		return ((T (*)(BRPlayerPawn*, int32_t, int32_t, float))(Il2CppBase() + 0x1ADF50C))(this, actorId, itemId, equipTime);
	}
	template <typename T = void> T PrePlayGetWeaponAnim() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1ADE6D0))(this);
	}
	template <typename T = void> T PrePlayUnequipWeaponAnim(int32_t actorId, int32_t itemId, float unequipTime, float speed) {
		return ((T (*)(BRPlayerPawn*, int32_t, int32_t, float, float))(Il2CppBase() + 0x1ADF73C))(this, actorId, itemId, unequipTime, speed);
	}
	template <typename T = bool> T GetWeaponHiddenState() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1ADFF48))(this);
	}
	template <typename T = void> T OnRendererChange() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AE01A8))(this);
	}
	template <typename T = void> T SetAnimatinSpeedTransition(float transitionTime, float speed) {
		return ((T (*)(BRPlayerPawn*, float, float))(Il2CppBase() + 0x1AE0314))(this, transitionTime, speed);
	}
	template <typename T = bool> T ShouldStopIK() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AE041C))(this);
	}
	template <typename T = bool> T ShouldStopRotationAim() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AE057C))(this);
	}
	template <typename T = void> T SetDyingPhysics() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AE0730))(this);
	}
	template <typename T = void> T OnWeaponDestroy(int32_t actorID, int32_t itemID, unsigned char slot) {
		return ((T (*)(BRPlayerPawn*, int32_t, int32_t, unsigned char))(Il2CppBase() + 0x1AE080C))(this, actorID, itemID, slot);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AE093C))(this);
	}
	template <typename T = void> T PostDestroy() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AE0A9C))(this);
	}
	template <typename T = void> T SimulatedRemoveBagWeaponAvatar(int32_t actorID, int32_t itemID, unsigned char slot) {
		return ((T (*)(BRPlayerPawn*, int32_t, int32_t, unsigned char))(Il2CppBase() + 0x1AE0C04))(this, actorID, itemID, slot);
	}
	template <typename T = void> T OnWeaponAttachmentActive() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AE0D18))(this);
	}
	template <typename T = void> T PendingActiveBagWeapon(int32_t actorID, int32_t itemID) {
		return ((T (*)(BRPlayerPawn*, int32_t, int32_t))(Il2CppBase() + 0x1AE0F94))(this, actorID, itemID);
	}
	template <typename T = void> T DelayPendingActiveBagWeapon() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AE10E4))(this);
	}
	template <typename T = void> T SimulatedPickUpWeapon(int32_t actorID, int32_t itemID) {
		return ((T (*)(BRPlayerPawn*, int32_t, int32_t))(Il2CppBase() + 0x1AE11D4))(this, actorID, itemID);
	}
	template <typename T = void> T AddBagWeapon(int32_t actorID, int32_t itemID, unsigned char slot, int32_t itemLv, uint32_t skinID) {
		return ((T (*)(BRPlayerPawn*, int32_t, int32_t, unsigned char, int32_t, uint32_t))(Il2CppBase() + 0x1AE1378))(this, actorID, itemID, slot, itemLv, skinID);
	}
	template <typename T = void> T ExchangedBagWeaponPos() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AE1508))(this);
	}
	template <typename T = void> T TrySwitchWeapon(int32_t itemId, unsigned char slot, int32_t actorID, int32_t itemLevel, uint32_t skinID, bool isServerData) {
		return ((T (*)(BRPlayerPawn*, int32_t, unsigned char, int32_t, int32_t, uint32_t, bool))(Il2CppBase() + 0x1AE15E8))(this, itemId, slot, actorID, itemLevel, skinID, isServerData);
	}
	template <typename T = void> T ForceSwitchWeaponDirectly(int32_t itemId, unsigned char slot, int32_t actorID, int32_t itemLevel, uint32_t skinID) {
		return ((T (*)(BRPlayerPawn*, int32_t, unsigned char, int32_t, int32_t, uint32_t))(Il2CppBase() + 0x1AE17AC))(this, itemId, slot, actorID, itemLevel, skinID);
	}
	template <typename T = void> T DoShowBagWeapon() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AE19A8))(this);
	}
	template <typename T = bool> T get_SwitchWeaponDirectly() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AE1B6C))(this);
	}
	template <typename T = bool> T CancelSwitchWeapon() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AE1D04))(this);
	}
	template <typename T = void> T OnByVehicle(uintptr_t vehicleType) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1AE1E08))(this, vehicleType);
	}
	template <typename T = void> T OnChangeSeat() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AE1EF4))(this);
	}
	template <typename T = void> T OnLeaveVehicle() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AE20A8))(this);
	}
	template <typename T = void> T SwitchVehicleController(uintptr_t controller, bool firstPersonAnimator) {
		return ((T (*)(BRPlayerPawn*, uintptr_t, bool))(Il2CppBase() + 0x1AE22CC))(this, controller, firstPersonAnimator);
	}
	template <typename T = bool> T CheckSwitchWeapon(bool isServerNtfWeapon) {
		return ((T (*)(BRPlayerPawn*, bool))(Il2CppBase() + 0x1AE23DC))(this, isServerNtfWeapon);
	}
	template <typename T = void> T EquipAttachment(int32_t actorID, int32_t attachmentId, int32_t weaponActorID, int32_t weaponItemId) {
		return ((T (*)(BRPlayerPawn*, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x1AC5570))(this, actorID, attachmentId, weaponActorID, weaponItemId);
	}
	template <typename T = void> T EquipAttachmentByClient(int32_t attachmentId, int32_t weaponActorId) {
		return ((T (*)(BRPlayerPawn*, int32_t, int32_t))(Il2CppBase() + 0x1AC60B4))(this, attachmentId, weaponActorId);
	}
	template <typename T = void> T UnEquipAttachment(int32_t actorID, int32_t attachmentId, int32_t weaponActorID) {
		return ((T (*)(BRPlayerPawn*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x1AC5AC8))(this, actorID, attachmentId, weaponActorID);
	}
	template <typename T = void> T UnEquipAttachmentByClient(int32_t attachmentId, int32_t weaponActorId) {
		return ((T (*)(BRPlayerPawn*, int32_t, int32_t))(Il2CppBase() + 0x1AC6354))(this, attachmentId, weaponActorId);
	}
	template <typename T = void> T SimulatePreUseUltSkill(int16_t UltType) {
		return ((T (*)(BRPlayerPawn*, int16_t))(Il2CppBase() + 0x1AE2914))(this, UltType);
	}
	template <typename T = float> T CalcMaxMoveSpeed() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AE2A5C))(this);
	}
	template <typename T = void> T OnStartAircraft() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AC6718))(this);
	}
	template <typename T = void> T OnBeginStartAircraft(uintptr_t leaderInfo) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1AE2D7C))(this, leaderInfo);
	}
	template <typename T = Il2CppVector3> T GetCameraPosition() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AE2F44))(this);
	}
	template <typename T = bool> T IsTPSCameraPosUseClimbCache() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AE3154))(this);
	}
	template <typename T = Il2CppVector3> T GetCameraPosition_TPS() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AE322C))(this);
	}
	template <typename T = Il2CppVector3> T _GetCameraPosition_TPS() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AE353C))(this);
	}
	template <typename T = Il2CppVector3> T GetCameraPosition_FirstPerson() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AE3788))(this);
	}
	template <typename T = void> T ResetFirstPersonSocket() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AE3A38))(this);
	}
	template <typename T = void> T OnUpdateFirstPersonSocketInit() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AE3EB4))(this);
	}
	template <typename T = bool> T CanLean() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AE411C))(this);
	}
	template <typename T = void> T StopLean() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AD6AF0))(this);
	}
	template <typename T = bool> T get_IsLean() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AE430C))(this);
	}
	template <typename T = void> T CheckLeanLeft() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AC86F4))(this);
	}
	template <typename T = void> T CheckLeanRight() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AC8924))(this);
	}
	template <typename T = uintptr_t> T GetCached3PAvatarGoAnimator() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AE4338))(this);
	}
	template <typename T = uintptr_t> T GetBR3PAvataBagWeaponSocketCache() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AE4464))(this);
	}
	template <typename T = void> T DoThrowWeaponUsedOver() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AE4590))(this);
	}
	template <typename T = void> T DoSwitchToLastUsedWeapon() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AE48A8))(this);
	}
	template <typename T = uintptr_t> T get_GetLastUsedWeapon() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AE4BD0))(this);
	}
	template <typename T = void> T OnThrowTypeChanged(bool isHighThrow) {
		return ((T (*)(BRPlayerPawn*, bool))(Il2CppBase() + 0x1AE4CFC))(this, isHighThrow);
	}
	template <typename T = void> T SwitchToMelee(bool isDirectly) {
		return ((T (*)(BRPlayerPawn*, bool))(Il2CppBase() + 0x1AE4ED0))(this, isDirectly);
	}
	template <typename T = void> T GetOnVehicle(uintptr_t vehicle, uintptr_t seat) {
		return ((T (*)(BRPlayerPawn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1AE5294))(this, vehicle, seat);
	}
	template <typename T = void> T ResetRotation() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AE54F0))(this);
	}
	template <typename T = void> T GetOffVehicle(uintptr_t vehicle) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1AE5768))(this, vehicle);
	}
	template <typename T = bool> T get_IsReachOut() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AE5874))(this);
	}
	template <typename T = bool> T get_IsBackToSeatTransition() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AE58A0))(this);
	}
	template <typename T = bool> T get_IsDriving() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AE58CC))(this);
	}
	template <typename T = bool> T get_IsRide() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AE58F4))(this);
	}
	template <typename T = void> T TestReachOut() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AE591C))(this);
	}
	template <typename T = void> T ProcessPassagerReachOut() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AE5A3C))(this);
	}
	template <typename T = bool> T CanPassagerReachOut() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AE5B5C))(this);
	}
	template <typename T = void> T OnPassengerStateChange(unsigned char infoType) {
		return ((T (*)(BRPlayerPawn*, unsigned char))(Il2CppBase() + 0x1AE5C44))(this, infoType);
	}
	template <typename T = void> T SyncPosition(Il2CppVector3 pos, bool checkColliders) {
		return ((T (*)(BRPlayerPawn*, Il2CppVector3, bool))(Il2CppBase() + 0x1AE5D60))(this, pos, checkColliders);
	}
	template <typename T = void> T ForceSyncZiplineMovement(Il2CppVector3 pos) {
		return ((T (*)(BRPlayerPawn*, Il2CppVector3))(Il2CppBase() + 0x1AE5EE8))(this, pos);
	}
	template <typename T = void> T ForceSyncSkydivingMovement(Il2CppVector3 pos) {
		return ((T (*)(BRPlayerPawn*, Il2CppVector3))(Il2CppBase() + 0x1AE600C))(this, pos);
	}
	template <typename T = bool> T CanUseUltSkill() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AE6130))(this);
	}
	template <typename T = bool> T ShouldResetFirstPersonMoveSpeedMul() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AE6218))(this);
	}
	template <typename T = void> T PlayConcussionSound(bool isPlay) {
		return ((T (*)(BRPlayerPawn*, bool))(Il2CppBase() + 0x1AE6340))(this, isPlay);
	}
	template <typename T = void> T PlayExplodeSound() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AE64B8))(this);
	}
	template <typename T = void> T OnStartLadder() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AE65E8))(this);
	}
	template <typename T = bool> T get_IsUseDogTag() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AB8868))(this);
	}
	template <typename T = bool> T get_IsUseMedicine() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AB8830))(this);
	}
	template <typename T = bool> T get_IsInUseItem() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AE66D4))(this);
	}
	template <typename T = void> T TryStopUseItem() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AE6734))(this);
	}
	template <typename T = void> T TryStopUseDogTag() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1ADEB98))(this);
	}
	template <typename T = void> T OnStartIndividuationAnim() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AE6904))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AE69F0))(this);
	}
	template <typename T = void> T ResetHeadAndVestInfo() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AE6AE4))(this);
	}
	template <typename T = void> T set_ShowVest(bool value) {
		return ((T (*)(BRPlayerPawn*, bool))(Il2CppBase() + 0x1AE6DA4))(this, value);
	}
	template <typename T = void> T RemoveVest() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AE6ED4))(this);
	}
	template <typename T = void> T NotifyWearableThingsChanged() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AE7010))(this);
	}
	template <typename T = void> T OnVestAssetReady(int32_t id, uintptr_t obj) {
		return ((T (*)(BRPlayerPawn*, int32_t, uintptr_t))(Il2CppBase() + 0x1AE75CC))(this, id, obj);
	}
	template <typename T = void> T BeginBuild(uintptr_t info) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1AE7D80))(this, info);
	}
	template <typename T = void> T StartSubWeaponFire(bool isOpenAimState) {
		return ((T (*)(BRPlayerPawn*, bool))(Il2CppBase() + 0x1AE7EE8))(this, isOpenAimState);
	}
	template <typename T = void> T CheckStartSubWeaponFire() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AE8100))(this);
	}
	template <typename T = void> T EquipSubWeapon() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AE8818))(this);
	}
	template <typename T = void> T SetSubWeaponFireState(bool isOpenAimState) {
		return ((T (*)(BRPlayerPawn*, bool))(Il2CppBase() + 0x1AE898C))(this, isOpenAimState);
	}
	template <typename T = void> T SetLeftHandFPAniParam() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AE8424))(this);
	}
	template <typename T = Il2CppVector3> T GetLeftMuzzleFlashSocketPos() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AE8BF4))(this);
	}
	template <typename T = void> T DelaySubWeaponFire() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AE8FA0))(this);
	}
	template <typename T = void> T OnSubWeaponDeactivate(uintptr_t weapon) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1AE9108))(this, weapon);
	}
	template <typename T = void> T DeactivateSubWeapon() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AE91D8))(this);
	}
	template <typename T = void> T EndSubWeaponAction() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AE9414))(this);
	}
	template <typename T = Il2CppString*> T TacticalRadarMySelfSprite(uintptr_t eTacticalPawnState) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1AE9564))(this, eTacticalPawnState);
	}
	template <typename T = Il2CppString*> T TacticalRadarViewTeammateSprite(uintptr_t eTacticalPawnState) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1AE9D8C))(this, eTacticalPawnState);
	}
	template <typename T = bool> T IsInNoArrowState(uintptr_t tacticalPawnState) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1AE9ECC))(this, tacticalPawnState);
	}
	template <typename T = uintptr_t> T GetPawnState() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AE9FB0))(this);
	}
	template <typename T = uintptr_t> T GetPawnVehicleState() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AEA1B0))(this);
	}
	template <typename T = Il2CppString*> T GetSpriteThroughTeamSeat(int32_t teamSeatID, uintptr_t eTacticalPawnState) {
		return ((T (*)(BRPlayerPawn*, int32_t, uintptr_t))(Il2CppBase() + 0x1AE9760))(this, teamSeatID, eTacticalPawnState);
	}
	template <typename T = void> T PlayRapidMoveEffect() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AEA3FC))(this);
	}
	template <typename T = void> T StopPlayRapidMoveEffect() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AEA7A8))(this);
	}
	template <typename T = bool> T SwitchWeaponAttach(bool isHand) {
		return ((T (*)(BRPlayerPawn*, bool))(Il2CppBase() + 0x1AEA94C))(this, isHand);
	}
	template <typename T = bool> T CheckForwardValid(bool CheckStart) {
		return ((T (*)(BRPlayerPawn*, bool))(Il2CppBase() + 0x1AEAD44))(this, CheckStart);
	}
	template <typename T = void> T CheckSkyFly(bool checkValidFall, float distToFloor) {
		return ((T (*)(BRPlayerPawn*, bool, float))(Il2CppBase() + 0x1AEB108))(this, checkValidFall, distToFloor);
	}
	template <typename T = uintptr_t> T GetSkydivingLeaderInfo() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AEB76C))(this);
	}
	template <typename T = bool> T IsLeftWeapon(int32_t actorId) {
		return ((T (*)(BRPlayerPawn*, int32_t))(Il2CppBase() + 0x1AEB8DC))(this, actorId);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetBagWeapon() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AEB9F4))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetBagWeaponRenderers() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AEBADC))(this);
	}
	template <typename T = void> T SetHidden(bool isHidden) {
		return ((T (*)(BRPlayerPawn*, bool))(Il2CppBase() + 0x1AEBF68))(this, isHidden);
	}
	template <typename T = Il2CppVector3> T GetRayStartPos() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AEC064))(this);
	}
	template <typename T = void> T EndUpwardLaunchAction(bool bChangeState) {
		return ((T (*)(BRPlayerPawn*, bool))(Il2CppBase() + 0x1AEC274))(this, bChangeState);
	}
	template <typename T = void> T AttachPropPawn(uintptr_t propPawn, uint32_t uLauncherActorId) {
		return ((T (*)(BRPlayerPawn*, uintptr_t, uint32_t))(Il2CppBase() + 0x1AEC3CC))(this, propPawn, uLauncherActorId);
	}
	template <typename T = void> T AirborneControl(uintptr_t propPawn, uint32_t uLauncherActorId) {
		return ((T (*)(BRPlayerPawn*, uintptr_t, uint32_t))(Il2CppBase() + 0x1AEC5BC))(this, propPawn, uLauncherActorId);
	}
	template <typename T = bool> T IsPlayGrappleGunFireAnimation(int32_t weaponID) {
		return ((T (*)(BRPlayerPawn*, int32_t))(Il2CppBase() + 0x1AEC788))(this, weaponID);
	}
	template <typename T = bool> T IsThrowMonkeyBomb(int32_t weaponID) {
		return ((T (*)(BRPlayerPawn*, int32_t))(Il2CppBase() + 0x1AED524))(this, weaponID);
	}
	template <typename T = Il2CppVector3> T GetStartTracePosition(Il2CppVector3 startBasePos, Il2CppVector3 rayDir) {
		return ((T (*)(BRPlayerPawn*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x1AED9D8))(this, startBasePos, rayDir);
	}
	template <typename T = void> T SoundTick() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AD90F0))(this);
	}
	template <typename T = bool> T get_IsChangingFireModeTransition() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AEDC10))(this);
	}
	template <typename T = bool> T get_ShouldCheckProneInWater() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AEDC48))(this);
	}
	template <typename T = void> T StopMeshRotate() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AE5668))(this);
	}
	template <typename T = void> T OnEnterTrigger(uintptr_t trigger) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1AEDC50))(this, trigger);
	}
	template <typename T = void> T OnLeaveTrigger(uintptr_t trigger) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1AEE48C))(this, trigger);
	}
	template <typename T = void> T OnPreTouchDoor(bool isOpen, float inRotateTime) {
		return ((T (*)(BRPlayerPawn*, bool, float))(Il2CppBase() + 0x1AEE86C))(this, isOpen, inRotateTime);
	}
	template <typename T = bool> T CheckSetServerPosition(Il2CppVector3 serverPostion) {
		return ((T (*)(BRPlayerPawn*, Il2CppVector3))(Il2CppBase() + 0x1AEE994))(this, serverPostion);
	}
	template <typename T = void> T InitPsychosisState() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1ACE588))(this);
	}
	template <typename T = void> T PlayPsychosisSwitchEffect(bool attachToPawn) {
		return ((T (*)(BRPlayerPawn*, bool))(Il2CppBase() + 0x1ADC3E0))(this, attachToPawn);
	}
	template <typename T = void> T PlayPsychosisSwitchSound(bool isDieSound, bool isFirstPersonView) {
		return ((T (*)(BRPlayerPawn*, bool, bool))(Il2CppBase() + 0x1AD5844))(this, isDieSound, isFirstPersonView);
	}
	template <typename T = void> T StopPsychosisSound() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AEF240))(this);
	}
	template <typename T = bool> T get_m_IsShowingPsychosisEffect() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AEF378))(this);
	}
	template <typename T = void> T ShowPsychosisEffect() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AEF0F4))(this);
	}
	template <typename T = void> T HidePsychosisEffect() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AD5B60))(this);
	}
	template <typename T = void> T RefreshPsychosisEffect() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AD4B38))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetPsychosisList() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AD5C5C))(this);
	}
	template <typename T = bool> T BRCheckCanClimb() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AEF3A8))(this);
	}
	template <typename T = void> T OnBagSyncAllProp() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AEF6D0))(this);
	}
	template <typename T = void> T OnReSpawnPlayer() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AEF798))(this);
	}
	template <typename T = void> T ResetOnVehicleState() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AEFBCC))(this);
	}
	template <typename T = void> T CheckReSpawnGetOffVehicle() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AEF9A8))(this);
	}
	template <typename T = void> T ApplyShift(Il2CppVector3 shift) {
		return ((T (*)(BRPlayerPawn*, Il2CppVector3))(Il2CppBase() + 0x1AEFDB4))(this, shift);
	}
	template <typename T = void> T SetUpArmObjScale(float value) {
		return ((T (*)(BRPlayerPawn*, float))(Il2CppBase() + 0x1AEFEE0))(this, value);
	}
	template <typename T = void> T RefreshUpArmFXShowOrHide() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AF019C))(this);
	}
	template <typename T = void> T CheckCactusHit(uintptr_t hit) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1AF02B4))(this, hit);
	}
	template <typename T = bool> T IsNeedResolveWeaponJitter() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AF05BC))(this);
	}
	template <typename T = void> T EnterElectricTripWire(uint32_t ownerPlayerID) {
		return ((T (*)(BRPlayerPawn*, uint32_t))(Il2CppBase() + 0x1AF068C))(this, ownerPlayerID);
	}
	template <typename T = void> T LeaveElectricTripWire(uint32_t ownerPlayerID) {
		return ((T (*)(BRPlayerPawn*, uint32_t))(Il2CppBase() + 0x1AF0990))(this, ownerPlayerID);
	}
	template <typename T = void> T ShowElectricTripWireShockTargetIndicatorItem() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AF07B4))(this);
	}
	template <typename T = void> T HideElectricTripWireShockTargetIndicatorItem() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1ADBFA8))(this);
	}
	template <typename T = void> T UpdateElectricTripWireShockTargetIndicatorItemTime(float deltaTime) {
		return ((T (*)(BRPlayerPawn*, float))(Il2CppBase() + 0x1AD9880))(this, deltaTime);
	}
	template <typename T = void> T RefreshAllElectricTripWireEffect() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AD5460))(this);
	}
	template <typename T = void> T RefreshSkydivingPendantRenderer() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AF0A60))(this);
	}
	template <typename T = uintptr_t> T CacheSlotItemVehicle() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AF0B90))(this);
	}
	template <typename T = bool> T VehicleChangeWeaponHandler(bool needSwitch, bool needCacheWeapon) {
		return ((T (*)(BRPlayerPawn*, bool, bool))(Il2CppBase() + 0x1AF0E64))(this, needSwitch, needCacheWeapon);
	}
	template <typename T = void> T SetVechileAnimatorController(uintptr_t controller) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1AF1200))(this, controller);
	}
	template <typename T = void> T ForceSetAnimatorController(uintptr_t controller, bool firstPersonAnimator) {
		return ((T (*)(BRPlayerPawn*, uintptr_t, bool))(Il2CppBase() + 0x1AF16DC))(this, controller, firstPersonAnimator);
	}
	template <typename T = void> T OnPreSwitchAnimatorController(uintptr_t animatorController, bool animatorControllerChanged) {
		return ((T (*)(BRPlayerPawn*, uintptr_t, bool))(Il2CppBase() + 0x1AF18A0))(this, animatorController, animatorControllerChanged);
	}
	template <typename T = Il2CppString*> T GetDefaultStateName() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AF1A5C))(this);
	}
	template <typename T = void> T OnSwitchAnimatorController(bool isChanged) {
		return ((T (*)(BRPlayerPawn*, bool))(Il2CppBase() + 0x1AF1DF4))(this, isChanged);
	}
	template <typename T = void> T OnSwitchAnimatorControllerCheckPickupAnimation() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AF2734))(this);
	}
	template <typename T = void> T SwitchAnimatorController(uintptr_t controller, bool firstPersonAnimator) {
		return ((T (*)(BRPlayerPawn*, uintptr_t, bool))(Il2CppBase() + 0x1AF2A24))(this, controller, firstPersonAnimator);
	}
	template <typename T = void> T CheckAnimatorBlend(uintptr_t controller) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1AF2FCC))(this, controller);
	}
	template <typename T = bool> T InInPickupItem(int32_t itemId) {
		return ((T (*)(BRPlayerPawn*, int32_t))(Il2CppBase() + 0x1AF33B4))(this, itemId);
	}
	template <typename T = bool> T get_InPickup() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AF34E0))(this);
	}
	template <typename T = bool> T IsNeedCanclePickUpAnim() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AF352C))(this);
	}
	template <typename T = float> T PlayPickUpAnim(int32_t pickItemId, bool isWeapon, bool isPlayForward) {
		return ((T (*)(BRPlayerPawn*, int32_t, bool, bool))(Il2CppBase() + 0x1AF3660))(this, pickItemId, isWeapon, isPlayForward);
	}
	template <typename T = void> T SetUnEquipAnimationSpeed(bool isLeft, float unequipTime) {
		return ((T (*)(BRPlayerPawn*, bool, float))(Il2CppBase() + 0x1ADF99C))(this, isLeft, unequipTime);
	}
	template <typename T = void> T SetEquipAnimationSpeed(bool isLeft, float equipTime) {
		return ((T (*)(BRPlayerPawn*, bool, float))(Il2CppBase() + 0x1AF438C))(this, isLeft, equipTime);
	}
	template <typename T = void> T PreResetGetWeaponAnimParameter() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AF47CC))(this);
	}
	template <typename T = void> T PreResetPutWeaponAnimParameter() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AF4C00))(this);
	}
	template <typename T = void> T SwitchToTPPEnterDying() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AF4FD4))(this);
	}
	template <typename T = void> T HandleReviveAnim() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AF5300))(this);
	}
	template <typename T = void> T DelaySwitchFireMode() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AF551C))(this);
	}
	template <typename T = void> T EndDyingToIdle() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AF58BC))(this);
	}
	template <typename T = void> T CurrentPlayerEnterDyingState(bool isEnterDying, uintptr_t oldState) {
		return ((T (*)(BRPlayerPawn*, bool, uintptr_t))(Il2CppBase() + 0x1ACBC60))(this, isEnterDying, oldState);
	}
	template <typename T = void> T CommonEnterDying() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AF6010))(this);
	}
	template <typename T = void> T CommonLeaveDying() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AF6250))(this);
	}
	template <typename T = void> T LocalPlayerEnterDying() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AF6404))(this);
	}
	template <typename T = void> T LocalPlayerLeaveDying() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AF6AD4))(this);
	}
	template <typename T = void> T SimulatePlayerEnterDying() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AF6EF4))(this);
	}
	template <typename T = void> T SimualtePlayerLeaveDying() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AF7230))(this);
	}
	template <typename T = void> T DelayPlayDyingAnim() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AF51BC))(this);
	}
	template <typename T = void> T PlayDyingAnim() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AF75E8))(this);
	}
	template <typename T = void> T OnPostSwitchAnimatorControllerInDying() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1ADCF38))(this);
	}
	template <typename T = void> T TickDying() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AD8C28))(this);
	}
	template <typename T = void> T ForceDyingCheck() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AF8528))(this);
	}
	template <typename T = void> T CheckDyingTeammates() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AF7CEC))(this);
	}
	template <typename T = bool> T FindACureTeammate() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AF8970))(this);
	}
	template <typename T = uint32_t> T CurrentWillCureTarget() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AF9024))(this);
	}
	template <typename T = void> T CheckDyingTeammate() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1ADBAF4))(this);
	}
	template <typename T = void> T CanCureMyTeammates(uint32_t playerid) {
		return ((T (*)(BRPlayerPawn*, uint32_t))(Il2CppBase() + 0x1AF87FC))(this, playerid);
	}
	template <typename T = void> T CanNotCureTeammates(uint32_t playerid) {
		return ((T (*)(BRPlayerPawn*, uint32_t))(Il2CppBase() + 0x1AF85FC))(this, playerid);
	}
	template <typename T = void> T BeginSwimmingDying() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AF93D4))(this);
	}
	template <typename T = void> T EndSwimmingDying() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AF5E80))(this);
	}
	template <typename T = void> T ReqServerEndCrawl() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AF5F48))(this);
	}
	template <typename T = bool> T CanSaveTeammate() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AF949C))(this);
	}
	template <typename T = void> T OnSaveTeammateReady() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AF9698))(this);
	}
	template <typename T = void> T OnTimerSaveTeammateResult() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AF9824))(this);
	}
	template <typename T = void> T OnSaveTeammateResult() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AF992C))(this);
	}
	template <typename T = bool> T get_IsSavingTeammate() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AB88E8))(this);
	}
	template <typename T = void> T set_IsSavingTeammate(bool value) {
		return ((T (*)(BRPlayerPawn*, bool))(Il2CppBase() + 0x1ACDDA4))(this, value);
	}
	template <typename T = void> T BeginSave(uint32_t targetID) {
		return ((T (*)(BRPlayerPawn*, uint32_t))(Il2CppBase() + 0x1AF9A88))(this, targetID);
	}
	template <typename T = void> T CancelSave() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AFA064))(this);
	}
	template <typename T = void> T EndSave() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AF90F4))(this);
	}
	template <typename T = void> T CheckUseLeftHand() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AFA2C8))(this);
	}
	template <typename T = bool> T CanGrabLadder() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AFA7BC))(this);
	}
	template <typename T = void> T OnLadderRootMotionEnd() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AFA88C))(this);
	}
	template <typename T = void> T UpdateLadderAcceleration(float forward, float strafe) {
		return ((T (*)(BRPlayerPawn*, float, float))(Il2CppBase() + 0x1AFA988))(this, forward, strafe);
	}
	template <typename T = void> T PhysClimb(float deltaTime) {
		return ((T (*)(BRPlayerPawn*, float))(Il2CppBase() + 0x1AFABB0))(this, deltaTime);
	}
	template <typename T = void> T DoFallingFromClimb() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AFAC9C))(this);
	}
	template <typename T = void> T OnRootMotionEnd(bool interrupt) {
		return ((T (*)(BRPlayerPawn*, bool))(Il2CppBase() + 0x1AFAE2C))(this, interrupt);
	}
	template <typename T = void> T OnRootMotionCrossFade() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AFB5FC))(this);
	}
	template <typename T = void> T OnRootMotionStop(bool isClimbOverLandSky) {
		return ((T (*)(BRPlayerPawn*, bool))(Il2CppBase() + 0x1AFB860))(this, isClimbOverLandSky);
	}
	template <typename T = void> T OnLeaveClimbState(uintptr_t curState) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1AFBA50))(this, curState);
	}
	template <typename T = uintptr_t> T GetAdaptiveRootMotionType() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AFBB38))(this);
	}
	template <typename T = bool> T CheckClimb() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AFBC64))(this);
	}
	template <typename T = bool> T StartBRClimb() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AC8190))(this);
	}
	template <typename T = bool> T CheckBRClimbFromSwim() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AFBD5C))(this);
	}
	template <typename T = void> T BeginRootMotion(Il2CppString* animName, Il2CppVector3 highestPos, Il2CppVector3 destPos, float checkDownDistance, float wallWidth, bool isClimbOverLandSky, float startLandSkyTimeScale, float blendTime, float speed) {
		return ((T (*)(BRPlayerPawn*, Il2CppString*, Il2CppVector3, Il2CppVector3, float, float, bool, float, float, float))(Il2CppBase() + 0x1AFBF2C))(this, animName, highestPos, destPos, checkDownDistance, wallWidth, isClimbOverLandSky, startLandSkyTimeScale, blendTime, speed);
	}
	template <typename T = void> T PreBeginBRClimbing(uintptr_t setClimbType, Il2CppVector3 meshLookAtDir) {
		return ((T (*)(BRPlayerPawn*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x1AFC19C))(this, setClimbType, meshLookAtDir);
	}
	template <typename T = void> T EndBRClimbing() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AFB2C4))(this);
	}
	template <typename T = bool> T CanBRClimb() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AEF4CC))(this);
	}
	template <typename T = bool> T CanStopBRRootMotion() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AD80D0))(this);
	}
	template <typename T = void> T SimulatedRootMotion(uintptr_t rootMotionData) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1AFC844))(this, rootMotionData);
	}
	template <typename T = void> T SimulateStartBRClimb(uintptr_t moveData, float deltaTime) {
		return ((T (*)(BRPlayerPawn*, uintptr_t, float))(Il2CppBase() + 0x1AFC930))(this, moveData, deltaTime);
	}
	template <typename T = void> T SimulatePhysBRClimb(uintptr_t moveData, float deltaTime) {
		return ((T (*)(BRPlayerPawn*, uintptr_t, float))(Il2CppBase() + 0x1AFCAA8))(this, moveData, deltaTime);
	}
	template <typename T = void> T SimulatePhysBRClimbBaseTick() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AFCD1C))(this);
	}
	template <typename T = void> T SimualtePhysBRClimbEndTransition(uintptr_t moveData, float deltaTime, uintptr_t result) {
		return ((T (*)(BRPlayerPawn*, uintptr_t, float, uintptr_t))(Il2CppBase() + 0x1AFCDFC))(this, moveData, deltaTime, result);
	}
	template <typename T = bool> T get_IsSwimming() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AFD078))(this);
	}
	template <typename T = float> T get_SwimVerticalSpeed() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AFD09C))(this);
	}
	template <typename T = bool> T get_EnableSwimming() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AFD0A4))(this);
	}
	template <typename T = bool> T get_CanSwimming() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AFD0AC))(this);
	}
	template <typename T = void> T OnResetSwimmingAnimatorState() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AFD300))(this);
	}
	template <typename T = void> T SimulateStartSwimming(uintptr_t moveData) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1AFD3E0))(this, moveData);
	}
	template <typename T = void> T SimulateStopSwimming(uintptr_t moveData) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1AFD7D8))(this, moveData);
	}
	template <typename T = void> T PredictSwimMove() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AFDA9C))(this);
	}
	template <typename T = void> T SimulateSwimming(uintptr_t moveData, float deltaTime) {
		return ((T (*)(BRPlayerPawn*, uintptr_t, float))(Il2CppBase() + 0x1AFDE24))(this, moveData, deltaTime);
	}
	template <typename T = void> T SimulateSwimming_ForwardMove(float deltaTime, float remainingDis, uintptr_t popMoveDataCount) {
		return ((T (*)(BRPlayerPawn*, float, float, uintptr_t))(Il2CppBase() + 0x1AFE81C))(this, deltaTime, remainingDis, popMoveDataCount);
	}
	template <typename T = void> T SimulateSwimmingPredictMove(uintptr_t moveData, float deltaTime) {
		return ((T (*)(BRPlayerPawn*, uintptr_t, float))(Il2CppBase() + 0x1AFEFD4))(this, moveData, deltaTime);
	}
	template <typename T = void> T CalcSimulateMoveY(uintptr_t realDeltaMove, float y) {
		return ((T (*)(BRPlayerPawn*, uintptr_t, float))(Il2CppBase() + 0x1AFEDA4))(this, realDeltaMove, y);
	}
	template <typename T = void> T UpdateSimulationSwimmingAnimation(float deltaTime, Il2CppVector3 lastPos) {
		return ((T (*)(BRPlayerPawn*, float, Il2CppVector3))(Il2CppBase() + 0x1AFF444))(this, deltaTime, lastPos);
	}
	template <typename T = void> T EnterWater(uintptr_t water) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1AFFC1C))(this, water);
	}
	template <typename T = void> T LeaveWater(uintptr_t water) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1AFFCEC))(this, water);
	}
	template <typename T = bool> T get_ShouldSwimSprint() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AFFDBC))(this);
	}
	template <typename T = void> T OnStartSwimming() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AFFE14))(this);
	}
	template <typename T = bool> T ShouldSwitchInSwimming() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AFFF8C))(this);
	}
	template <typename T = void> T ProcessWeaponEnterSwimState() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B001F0))(this);
	}
	template <typename T = void> T OnEnterSwimState(uintptr_t oldState) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1B0034C))(this, oldState);
	}
	template <typename T = void> T OnLeaveSwimState(uintptr_t newState) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1B0085C))(this, newState);
	}
	template <typename T = void> T OnEndSwimming() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B01070))(this);
	}
	template <typename T = float> T CalcSwimSpeed() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0115C))(this);
	}
	template <typename T = float> T CalcSwimmingSpeedScale() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B013F0))(this);
	}
	template <typename T = float> T get_CurrDynamicWaterSurfaceHeight() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B01530))(this);
	}
	template <typename T = void> T PhysSwimming(float deltaTime) {
		return ((T (*)(BRPlayerPawn*, float))(Il2CppBase() + 0x1B01538))(this, deltaTime);
	}
	template <typename T = void> T ProcessSwimMoveDelta(float deltaTime, uintptr_t deltaMove) {
		return ((T (*)(BRPlayerPawn*, float, uintptr_t))(Il2CppBase() + 0x1B01F70))(this, deltaTime, deltaMove);
	}
	template <typename T = void> T ProcessSwimAnimationParameter(float deltaTime) {
		return ((T (*)(BRPlayerPawn*, float))(Il2CppBase() + 0x1B0219C))(this, deltaTime);
	}
	template <typename T = float> T get_CurrentInWaterDepth() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B02A7C))(this);
	}
	template <typename T = bool> T IsUnderWater() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B02AFC))(this);
	}
	template <typename T = void> T ForceStopSwim() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AE2C7C))(this);
	}
	template <typename T = bool> T get_ShouldCheckCollisionWithLocalPlayer() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B02BE8))(this);
	}
	template <typename T = void> T ProcessWalkingSlideMoveVertical(uintptr_t deltaMove) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1B02BF0))(this, deltaMove);
	}
	template <typename T = void> T CalcStandUponPawnSlideVec(float deltaTime, uintptr_t deltaMove, uintptr_t slideVec) {
		return ((T (*)(BRPlayerPawn*, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B02CCC))(this, deltaTime, deltaMove, slideVec);
	}
	template <typename T = bool> T CheckStandInPawn() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B02DB8))(this);
	}
	template <typename T = void> T ProcessFaceWallShaking(float delatTime, uintptr_t deltaMove) {
		return ((T (*)(BRPlayerPawn*, float, uintptr_t))(Il2CppBase() + 0x1B02E88))(this, delatTime, deltaMove);
	}
	template <typename T = bool> T ProcessFalling(Il2CppVector3 oldPos) {
		return ((T (*)(BRPlayerPawn*, Il2CppVector3))(Il2CppBase() + 0x1B03304))(this, oldPos);
	}
	template <typename T = void> T SetCharControllerMoveAvoidStuck(Il2CppVector3 moveDelta) {
		return ((T (*)(BRPlayerPawn*, Il2CppVector3))(Il2CppBase() + 0x1B034FC))(this, moveDelta);
	}
	template <typename T = void> T WalkingCharControllerMove(uintptr_t deltaMove) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1B0364C))(this, deltaMove);
	}
	template <typename T = bool> T IsAnimatorBaseLayerInDefaultState(uintptr_t animator) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1B03804))(this, animator);
	}
	template <typename T = void> T ResetMoveAnimationParameter() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AD02F4))(this);
	}
	template <typename T = void> T SetMoveAnimationParameterModeDying(float deltaTime) {
		return ((T (*)(BRPlayerPawn*, float))(Il2CppBase() + 0x1B039C8))(this, deltaTime);
	}
	template <typename T = void> T CheckWalk() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B03C70))(this);
	}
	template <typename T = void> T SetMoveAnimationParameterModeA(float deltaTime) {
		return ((T (*)(BRPlayerPawn*, float))(Il2CppBase() + 0x1B03DF4))(this, deltaTime);
	}
	template <typename T = void> T SetMoveAnimationParameterModeB(float deltaTime) {
		return ((T (*)(BRPlayerPawn*, float))(Il2CppBase() + 0x1B043C0))(this, deltaTime);
	}
	template <typename T = bool> T IsPositionChange() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B04954))(this);
	}
	template <typename T = void> T ProcessMoveAnimationParameter(float deltaTime) {
		return ((T (*)(BRPlayerPawn*, float))(Il2CppBase() + 0x1B04B50))(this, deltaTime);
	}
	template <typename T = void> T UpdateMovementAnimation(float deltaTime, Il2CppVector3 LastPos, bool useSpeed) {
		return ((T (*)(BRPlayerPawn*, float, Il2CppVector3, bool))(Il2CppBase() + 0x1B05160))(this, deltaTime, LastPos, useSpeed);
	}
	template <typename T = void> T ProcessFallingAnimationParameter(float deltaTime, float deltaMove) {
		return ((T (*)(BRPlayerPawn*, float, float))(Il2CppBase() + 0x1B05B28))(this, deltaTime, deltaMove);
	}
	template <typename T = void> T OnPhysicsStateChanged(uintptr_t preState, uintptr_t curState) {
		return ((T (*)(BRPlayerPawn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B06044))(this, preState, curState);
	}
	template <typename T = void> T OnPhysZiplineChanged(uintptr_t preState, uintptr_t curState) {
		return ((T (*)(BRPlayerPawn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B062E4))(this, preState, curState);
	}
	template <typename T = void> T OnPhysSkydivingChanged(uintptr_t preState, uintptr_t curState) {
		return ((T (*)(BRPlayerPawn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B06538))(this, preState, curState);
	}
	template <typename T = void> T OnPhysWalkingChanged(uintptr_t preState, uintptr_t curState) {
		return ((T (*)(BRPlayerPawn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B06838))(this, preState, curState);
	}
	template <typename T = void> T OnPhysFallingChanged(uintptr_t preState, uintptr_t curState) {
		return ((T (*)(BRPlayerPawn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B06974))(this, preState, curState);
	}
	template <typename T = void> T OnPhysSlideTackleChanged(uintptr_t preState, uintptr_t curState) {
		return ((T (*)(BRPlayerPawn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B06CB0))(this, preState, curState);
	}
	template <typename T = void> T OnPhysRollChanged(uintptr_t preState, uintptr_t curState) {
		return ((T (*)(BRPlayerPawn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B06E14))(this, preState, curState);
	}
	template <typename T = void> T OnPhysSwimmingChagned(uintptr_t preState, uintptr_t curState) {
		return ((T (*)(BRPlayerPawn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B06F74))(this, preState, curState);
	}
	template <typename T = void> T OnPhysClimbChagned(uintptr_t preState, uintptr_t curState) {
		return ((T (*)(BRPlayerPawn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B070F0))(this, preState, curState);
	}
	template <typename T = bool> T CheckJumpFaceWall() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0723C))(this);
	}
	template <typename T = uintptr_t> T GetJumpComponentType() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0730C))(this);
	}
	template <typename T = void> T CheckFallingPassThroughWall(Il2CppVector3 PreLocation) {
		return ((T (*)(BRPlayerPawn*, Il2CppVector3))(Il2CppBase() + 0x1B07438))(this, PreLocation);
	}
	template <typename T = void> T OnControllerColliderHit(uintptr_t hit) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1B07524))(this, hit);
	}
	template <typename T = void> T InternalUpdateSetRotation(float deltaTime) {
		return ((T (*)(BRPlayerPawn*, float))(Il2CppBase() + 0x1B077AC))(this, deltaTime);
	}
	template <typename T = void> T EndCrouch(bool immediately, bool setEyeHeightInImmediately, bool foce) {
		return ((T (*)(BRPlayerPawn*, bool, bool, bool))(Il2CppBase() + 0x1B078D4))(this, immediately, setEyeHeightInImmediately, foce);
	}
	template <typename T = void> T StartProne(bool immediately) {
		return ((T (*)(BRPlayerPawn*, bool))(Il2CppBase() + 0x1B07A24))(this, immediately);
	}
	template <typename T = void> T EndProne(bool immediately, bool setEyeHeightInImmediately, bool needPlayAnim) {
		return ((T (*)(BRPlayerPawn*, bool, bool, bool))(Il2CppBase() + 0x1B07B38))(this, immediately, setEyeHeightInImmediately, needPlayAnim);
	}
	template <typename T = void> T SimulateZiplineStart(uintptr_t moveData) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1B07C74))(this, moveData);
	}
	template <typename T = void> T SimulateZiplineTick(uintptr_t moveData) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1B07E34))(this, moveData);
	}
	template <typename T = void> T SimulateZiplineEnd(uintptr_t moveData) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1B07FF4))(this, moveData);
	}
	template <typename T = float> T GetDeltaMoveHeight(float deltaTime) {
		return ((T (*)(BRPlayerPawn*, float))(Il2CppBase() + 0x1B081CC))(this, deltaTime);
	}
	template <typename T = void> T FallingGround(float deltaTime) {
		return ((T (*)(BRPlayerPawn*, float))(Il2CppBase() + 0x1B08388))(this, deltaTime);
	}
	template <typename T = bool> T IsValidFallingHeight(float fallingHeight, uintptr_t distToFloor) {
		return ((T (*)(BRPlayerPawn*, float, uintptr_t))(Il2CppBase() + 0x1B087E4))(this, fallingHeight, distToFloor);
	}
	template <typename T = bool> T CheckCliff(float maxDistance) {
		return ((T (*)(BRPlayerPawn*, float))(Il2CppBase() + 0x1B086C4))(this, maxDistance);
	}
	template <typename T = bool> T CheckHitGround(float maxDistance) {
		return ((T (*)(BRPlayerPawn*, float))(Il2CppBase() + 0x1B08C24))(this, maxDistance);
	}
	template <typename T = void> T ProcessGround(Il2CppVector3 OldPos, float deltaTime) {
		return ((T (*)(BRPlayerPawn*, Il2CppVector3, float))(Il2CppBase() + 0x1B08F44))(this, OldPos, deltaTime);
	}
	template <typename T = bool> T get_CanCheckRiver() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B09164))(this);
	}
	template <typename T = bool> T IsUnderWaterSurface(float distance) {
		return ((T (*)(BRPlayerPawn*, float))(Il2CppBase() + 0x1B09198))(this, distance);
	}
	template <typename T = float> T get_CurrentWaterSurfaceHeight() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B092D8))(this);
	}
	template <typename T = bool> T get_InWater() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B09304))(this);
	}
	template <typename T = void> T set_InWater(bool value) {
		return ((T (*)(BRPlayerPawn*, bool))(Il2CppBase() + 0x1B0930C))(this, value);
	}
	template <typename T = void> T EndBagWeaponProcessing() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0941C))(this);
	}
	template <typename T = void> T CheckDeltaEulerIsNAN(uintptr_t vector) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1B094FC))(this, vector);
	}
	template <typename T = void> T UpdateRotation(Il2CppVector3 deltaEulerAngles) {
		return ((T (*)(BRPlayerPawn*, Il2CppVector3))(Il2CppBase() + 0x1B09AF4))(this, deltaEulerAngles);
	}
	template <typename T = void> T AddRotation(Il2CppQuaternion deltaRotation) {
		return ((T (*)(BRPlayerPawn*, Il2CppQuaternion))(Il2CppBase() + 0x1B09CD0))(this, deltaRotation);
	}
	template <typename T = void> T StartFire() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B09E38))(this);
	}
	template <typename T = bool> T CanFire() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B09F50))(this);
	}
	template <typename T = void> T StopAllStateWhenStartAim() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0A080))(this);
	}
	template <typename T = void> T BROpenAim() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1AC901C))(this);
	}
	template <typename T = bool> T CanOpenAim() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0A404))(this);
	}
	template <typename T = void> T OpenAimFor1PFireMode() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0A194))(this);
	}
	template <typename T = void> T CloseAimFor3PFireMode() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1ACF268))(this);
	}
	template <typename T = void> T StopAim() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0A538))(this);
	}
	template <typename T = void> T OnVestAssetReadym__0() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0A7E0))(this);
	}
	template <typename T = void> T OnReSpawnPlayerm__1() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0A8C4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_InfoType() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0A8E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CreateInventoryManager() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0A8E8))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetIKSolverComponentType() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0A8F0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetAvatarRotationComponentType() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0A8F8))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsHoldWeapon() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0A900))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginDestroy() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0A908))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitPawn(uintptr_t P0) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1B0A910))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_InitComponentConfig() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0A918))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitMesh(uintptr_t P0) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1B0A920))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_CreateLogicalComponents() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0A928))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TrySpawnSnowTrack(uintptr_t P0) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1B0A930))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_AddAvailableVehicle(uintptr_t P0) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1B0A938))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_StopAnimationTransitionBlend() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0A940))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetBackWeaponHidden(bool P0) {
		return ((T (*)(BRPlayerPawn*, bool))(Il2CppBase() + 0x1B0A948))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_CloseAim() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0A950))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsCanCheckAutoChangeClip() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0A958))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ResetForReconnect() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0A960))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SwitchRole(uintptr_t P0, bool P1) {
		return ((T (*)(BRPlayerPawn*, uintptr_t, bool))(Il2CppBase() + 0x1B0A968))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_EndSwitchRole() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0A970))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitEventProcessor() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0A978))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CalcDeathCam(float P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(BRPlayerPawn*, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B0A980))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_SimulateSkydivingStart(uintptr_t P0) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1B0A9A0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SimulateSkyFlyStart(uintptr_t P0) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1B0AA1C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SimulateSkydiving(uintptr_t P0, float P1) {
		return ((T (*)(BRPlayerPawn*, uintptr_t, float))(Il2CppBase() + 0x1B0AA98))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_SimulateUnRecentlySkydiving(uintptr_t P0) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1B0AB20))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SimulateSkydivingEnd(uintptr_t P0) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1B0AB9C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SimulateUpwardLaunchToSkyFly(uintptr_t P0) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1B0AC18))(this, P0);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetMeshAssetID_3P() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0AC94))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PhysSkydiving(float P0) {
		return ((T (*)(BRPlayerPawn*, float))(Il2CppBase() + 0x1B0AC9C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PhysZipline(float P0) {
		return ((T (*)(BRPlayerPawn*, float))(Il2CppBase() + 0x1B0ACA4))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetSwitchRoleComponentType() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0ACAC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetSpectatorComponentType() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0ACB4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnSpectatingStart() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0ACBC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnSpectatingEnd() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0ACC4))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CanSprint() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0ACCC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnSimulateStartSprint() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0ACD4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnSimulateStopSprint() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0ACDC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartSprint() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0ACE4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopSprint() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0ACEC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DoClimb() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0ACF4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DoJump() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0ACFC))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CanProne() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0AD04))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CanCrouch() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0AD0C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateAcceleration(float P0, float P1) {
		return ((T (*)(BRPlayerPawn*, float, float))(Il2CppBase() + 0x1B0AD14))(this, P0, P1);
	}
	template <typename T = float> T xLuaBaseProxy_CalcPhysWalkingMaxSpeed(float P0, Il2CppVector3 P1) {
		return ((T (*)(BRPlayerPawn*, float, Il2CppVector3))(Il2CppBase() + 0x1B0AD1C))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_ProcessSprint(float P0) {
		return ((T (*)(BRPlayerPawn*, float))(Il2CppBase() + 0x1B0AD40))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ProcessServerMove(float P0) {
		return ((T (*)(BRPlayerPawn*, float))(Il2CppBase() + 0x1B0AD48))(this, P0);
	}
	template <typename T = Il2CppQuaternion> T xLuaBaseProxy_GetWeaponAimRotation() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0AD50))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ReCalcSimulateWalkingVelocity(float P0) {
		return ((T (*)(BRPlayerPawn*, float))(Il2CppBase() + 0x1B0AD64))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRPlayerPawn*, float))(Il2CppBase() + 0x1B0AD6C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnFinishItem(Il2CppString* P0) {
		return ((T (*)(BRPlayerPawn*, Il2CppString*))(Il2CppBase() + 0x1B0AD74))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_NeedSimulatedPlayCrouchAnim() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0AD7C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Die(bool P0, uintptr_t P1) {
		return ((T (*)(BRPlayerPawn*, bool, uintptr_t))(Il2CppBase() + 0x1B0AD84))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_PlayDying(bool P0, uintptr_t P1) {
		return ((T (*)(BRPlayerPawn*, bool, uintptr_t))(Il2CppBase() + 0x1B0AD8C))(this, P0, P1);
	}
	template <typename T = bool> T xLuaBaseProxy_IsTowardDeepWater(Il2CppVector3 P0) {
		return ((T (*)(BRPlayerPawn*, Il2CppVector3))(Il2CppBase() + 0x1B0AD94))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnPostSwitchAnimatorController(uintptr_t P0, bool P1) {
		return ((T (*)(BRPlayerPawn*, uintptr_t, bool))(Il2CppBase() + 0x1B0ADB4))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnWeaponBeginState(uintptr_t P0) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1B0ADBC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnWeaponEndState(uintptr_t P0) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1B0ADC4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnPreWeaponActive(uintptr_t P0) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1B0ADCC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnWeaponChanged() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0ADD4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GiveWeaponByPickUp(int32_t P0, unsigned char P1, bool P2, Il2CppList<uintptr_t>* P3, uint32_t P4, int32_t P5, int32_t P6, int32_t P7) {
		return ((T (*)(BRPlayerPawn*, int32_t, unsigned char, bool, Il2CppList<uintptr_t>*, uint32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x1B0ADDC))(this, P0, P1, P2, P3, P4, P5, P6, P7);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncAnimation3P(uintptr_t P0, float P1, float P2) {
		return ((T (*)(BRPlayerPawn*, uintptr_t, float, float))(Il2CppBase() + 0x1B0AE20))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_SimulatedPrePlayGetWeaponAnim(int32_t P0, int32_t P1, float P2) {
		return ((T (*)(BRPlayerPawn*, int32_t, int32_t, float))(Il2CppBase() + 0x1B0AE40))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_PrePlayUnequipWeaponAnim(int32_t P0, int32_t P1, float P2, float P3) {
		return ((T (*)(BRPlayerPawn*, int32_t, int32_t, float, float))(Il2CppBase() + 0x1B0AE60))(this, P0, P1, P2, P3);
	}
	template <typename T = bool> T xLuaBaseProxy_GetWeaponHiddenState() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0AE88))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRendererChange() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0AE90))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetAnimatinSpeedTransition(float P0, float P1) {
		return ((T (*)(BRPlayerPawn*, float, float))(Il2CppBase() + 0x1B0AE98))(this, P0, P1);
	}
	template <typename T = bool> T xLuaBaseProxy_ShouldStopIK() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0AEA0))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_ShouldStopRotationAim() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0AEA8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetDyingPhysics() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0AEB0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnWeaponDestroy(int32_t P0, int32_t P1, unsigned char P2) {
		return ((T (*)(BRPlayerPawn*, int32_t, int32_t, unsigned char))(Il2CppBase() + 0x1B0AEB8))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0AED8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnWeaponAttachmentActive() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0AEE0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TrySwitchWeapon(int32_t P0, unsigned char P1, int32_t P2, int32_t P3, uint32_t P4, bool P5) {
		return ((T (*)(BRPlayerPawn*, int32_t, unsigned char, int32_t, int32_t, uint32_t, bool))(Il2CppBase() + 0x1B0AEE8))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = void> T xLuaBaseProxy_ForceSwitchWeaponDirectly(int32_t P0, unsigned char P1, int32_t P2, int32_t P3, uint32_t P4) {
		return ((T (*)(BRPlayerPawn*, int32_t, unsigned char, int32_t, int32_t, uint32_t))(Il2CppBase() + 0x1B0AF1C))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = bool> T xLuaBaseProxy_CancelSwitchWeapon() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0AF48))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnByVehicle(uintptr_t P0) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1B0AF50))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnChangeSeat() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0AF58))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnLeaveVehicle() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0AF60))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SwitchVehicleController(uintptr_t P0, bool P1) {
		return ((T (*)(BRPlayerPawn*, uintptr_t, bool))(Il2CppBase() + 0x1B0AF68))(this, P0, P1);
	}
	template <typename T = bool> T xLuaBaseProxy_CheckSwitchWeapon(bool P0) {
		return ((T (*)(BRPlayerPawn*, bool))(Il2CppBase() + 0x1B0AF70))(this, P0);
	}
	template <typename T = float> T xLuaBaseProxy_CalcMaxMoveSpeed() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0AF78))(this);
	}
	template <typename T = Il2CppVector3> T xLuaBaseProxy_GetCameraPosition() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0AF80))(this);
	}
	template <typename T = Il2CppVector3> T xLuaBaseProxy_GetCameraPosition_TPS() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0AF94))(this);
	}
	template <typename T = Il2CppVector3> T xLuaBaseProxy_GetCameraPosition_FirstPerson() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0AFA8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnUpdateFirstPersonSocketInit() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0AFBC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnThrowTypeChanged(bool P0) {
		return ((T (*)(BRPlayerPawn*, bool))(Il2CppBase() + 0x1B0AFC4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SwitchToMelee(bool P0) {
		return ((T (*)(BRPlayerPawn*, bool))(Il2CppBase() + 0x1B0AFCC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_GetOnVehicle(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(BRPlayerPawn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B0AFD4))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_ResetRotation() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0AFDC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_GetOffVehicle(uintptr_t P0) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1B0AFE4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ProcessPassagerReachOut() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0AFEC))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CanPassagerReachOut() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0AFF4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnPassengerStateChange(unsigned char P0) {
		return ((T (*)(BRPlayerPawn*, unsigned char))(Il2CppBase() + 0x1B0AFFC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SyncPosition(Il2CppVector3 P0, bool P1) {
		return ((T (*)(BRPlayerPawn*, Il2CppVector3, bool))(Il2CppBase() + 0x1B0B004))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_ForceSyncZiplineMovement(Il2CppVector3 P0) {
		return ((T (*)(BRPlayerPawn*, Il2CppVector3))(Il2CppBase() + 0x1B0B028))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ForceSyncSkydivingMovement(Il2CppVector3 P0) {
		return ((T (*)(BRPlayerPawn*, Il2CppVector3))(Il2CppBase() + 0x1B0B048))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_CanUseUltSkill() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0B068))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_ShouldResetFirstPersonMoveSpeedMul() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0B070))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayConcussionSound(bool P0) {
		return ((T (*)(BRPlayerPawn*, bool))(Il2CppBase() + 0x1B0B078))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayExplodeSound() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0B080))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnStartLadder() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0B088))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TryStopUseItem() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0B090))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnStartIndividuationAnim() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0B098))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0B0A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_NotifyWearableThingsChanged() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0B0A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginBuild(uintptr_t P0) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1B0B0B0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_StartSubWeaponFire(bool P0) {
		return ((T (*)(BRPlayerPawn*, bool))(Il2CppBase() + 0x1B0B0E4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_CheckStartSubWeaponFire() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0B0EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EquipSubWeapon() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0B0F4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetSubWeaponFireState(bool P0) {
		return ((T (*)(BRPlayerPawn*, bool))(Il2CppBase() + 0x1B0B0FC))(this, P0);
	}
	template <typename T = Il2CppVector3> T xLuaBaseProxy_GetLeftMuzzleFlashSocketPos() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0B104))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnSubWeaponDeactivate(uintptr_t P0) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1B0B118))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_DeactivateSubWeapon() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0B120))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndSubWeaponAction() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0B128))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_TacticalRadarMySelfSprite(uintptr_t P0) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1B0B130))(this, P0);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_TacticalRadarViewTeammateSprite(uintptr_t P0) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1B0B138))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_SwitchWeaponAttach(bool P0) {
		return ((T (*)(BRPlayerPawn*, bool))(Il2CppBase() + 0x1B0B140))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_CheckSkyFly(bool P0, float P1) {
		return ((T (*)(BRPlayerPawn*, bool, float))(Il2CppBase() + 0x1B0B148))(this, P0, P1);
	}
	template <typename T = bool> T xLuaBaseProxy_IsLeftWeapon(int32_t P0) {
		return ((T (*)(BRPlayerPawn*, int32_t))(Il2CppBase() + 0x1B0B150))(this, P0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T xLuaBaseProxy_GetBagWeapon() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0B158))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T xLuaBaseProxy_GetBagWeaponRenderers() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0B160))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetHidden(bool P0) {
		return ((T (*)(BRPlayerPawn*, bool))(Il2CppBase() + 0x1B0B168))(this, P0);
	}
	template <typename T = Il2CppVector3> T xLuaBaseProxy_GetRayStartPos() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0B170))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndUpwardLaunchAction(bool P0) {
		return ((T (*)(BRPlayerPawn*, bool))(Il2CppBase() + 0x1B0B184))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_AttachPropPawn(uintptr_t P0, uint32_t P1) {
		return ((T (*)(BRPlayerPawn*, uintptr_t, uint32_t))(Il2CppBase() + 0x1B0B18C))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnterTrigger(uintptr_t P0) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1B0B194))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnLeaveTrigger(uintptr_t P0) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1B0B19C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnPreTouchDoor(bool P0, float P1) {
		return ((T (*)(BRPlayerPawn*, bool, float))(Il2CppBase() + 0x1B0B1A4))(this, P0, P1);
	}
	template <typename T = bool> T xLuaBaseProxy_CheckSetServerPosition(Il2CppVector3 P0) {
		return ((T (*)(BRPlayerPawn*, Il2CppVector3))(Il2CppBase() + 0x1B0B1AC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnReSpawnPlayer() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0B1CC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ApplyShift(Il2CppVector3 P0) {
		return ((T (*)(BRPlayerPawn*, Il2CppVector3))(Il2CppBase() + 0x1B0B1D4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SetUpArmObjScale(float P0) {
		return ((T (*)(BRPlayerPawn*, float))(Il2CppBase() + 0x1B0B1F4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshUpArmFXShowOrHide() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0B1FC))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsNeedResolveWeaponJitter() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0B204))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshSkydivingPendantRenderer() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0B20C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_CacheSlotItemVehicle() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0B214))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_VehicleChangeWeaponHandler(bool P0, bool P1) {
		return ((T (*)(BRPlayerPawn*, bool, bool))(Il2CppBase() + 0x1B0B21C))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnPreSwitchAnimatorController(uintptr_t P0, bool P1) {
		return ((T (*)(BRPlayerPawn*, uintptr_t, bool))(Il2CppBase() + 0x1B0B224))(this, P0, P1);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetDefaultStateName() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0B22C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnSwitchAnimatorController(bool P0) {
		return ((T (*)(BRPlayerPawn*, bool))(Il2CppBase() + 0x1B0B234))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SwitchAnimatorController(uintptr_t P0, bool P1) {
		return ((T (*)(BRPlayerPawn*, uintptr_t, bool))(Il2CppBase() + 0x1B0B23C))(this, P0, P1);
	}
	template <typename T = bool> T xLuaBaseProxy_InInPickupItem(int32_t P0) {
		return ((T (*)(BRPlayerPawn*, int32_t))(Il2CppBase() + 0x1B0B244))(this, P0);
	}
	template <typename T = float> T xLuaBaseProxy_PlayPickUpAnim(int32_t P0, bool P1, bool P2) {
		return ((T (*)(BRPlayerPawn*, int32_t, bool, bool))(Il2CppBase() + 0x1B0B24C))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_PreResetGetWeaponAnimParameter() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0B26C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PreResetPutWeaponAnimParameter() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0B274))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CancelSave() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0B27C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CheckUseLeftHand() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0B284))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CanGrabLadder() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0B28C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PhysClimb(float P0) {
		return ((T (*)(BRPlayerPawn*, float))(Il2CppBase() + 0x1B0B294))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnRootMotionEnd(bool P0) {
		return ((T (*)(BRPlayerPawn*, bool))(Il2CppBase() + 0x1B0B29C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnRootMotionCrossFade() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0B2A4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRootMotionStop(bool P0) {
		return ((T (*)(BRPlayerPawn*, bool))(Il2CppBase() + 0x1B0B2AC))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetAdaptiveRootMotionType() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0B2B4))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CheckClimb() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0B2BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SimulateStartBRClimb(uintptr_t P0, float P1) {
		return ((T (*)(BRPlayerPawn*, uintptr_t, float))(Il2CppBase() + 0x1B0B2C4))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_SimulatePhysBRClimb(uintptr_t P0, float P1) {
		return ((T (*)(BRPlayerPawn*, uintptr_t, float))(Il2CppBase() + 0x1B0B34C))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_SimulatePhysBRClimbBaseTick() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0B3D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SimualtePhysBRClimbEndTransition(uintptr_t P0, float P1, uintptr_t P2) {
		return ((T (*)(BRPlayerPawn*, uintptr_t, float, uintptr_t))(Il2CppBase() + 0x1B0B3DC))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_OnResetSwimmingAnimatorState() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0B468))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SimulateStartSwimming(uintptr_t P0) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1B0B470))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SimulateStopSwimming(uintptr_t P0) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1B0B4EC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SimulateSwimming(uintptr_t P0, float P1) {
		return ((T (*)(BRPlayerPawn*, uintptr_t, float))(Il2CppBase() + 0x1B0B568))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_EnterWater(uintptr_t P0) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1B0B5F0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_LeaveWater(uintptr_t P0) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1B0B5F8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PhysSwimming(float P0) {
		return ((T (*)(BRPlayerPawn*, float))(Il2CppBase() + 0x1B0B600))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_IsUnderWater() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0B608))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ProcessWalkingSlideMoveVertical(uintptr_t P0) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1B0B610))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_CalcStandUponPawnSlideVec(float P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(BRPlayerPawn*, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B0B618))(this, P0, P1, P2);
	}
	template <typename T = bool> T xLuaBaseProxy_CheckStandInPawn() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0B638))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ProcessFaceWallShaking(float P0, uintptr_t P1) {
		return ((T (*)(BRPlayerPawn*, float, uintptr_t))(Il2CppBase() + 0x1B0B640))(this, P0, P1);
	}
	template <typename T = bool> T xLuaBaseProxy_ProcessFalling(Il2CppVector3 P0) {
		return ((T (*)(BRPlayerPawn*, Il2CppVector3))(Il2CppBase() + 0x1B0B648))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_WalkingCharControllerMove(uintptr_t P0) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1B0B668))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_IsPositionChange() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0B670))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ProcessMoveAnimationParameter(float P0) {
		return ((T (*)(BRPlayerPawn*, float))(Il2CppBase() + 0x1B0B678))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateMovementAnimation(float P0, Il2CppVector3 P1, bool P2) {
		return ((T (*)(BRPlayerPawn*, float, Il2CppVector3, bool))(Il2CppBase() + 0x1B0B680))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_ProcessFallingAnimationParameter(float P0, float P1) {
		return ((T (*)(BRPlayerPawn*, float, float))(Il2CppBase() + 0x1B0B6AC))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnPhysicsStateChanged(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(BRPlayerPawn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B0B6B4))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnPhysWalkingChanged(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(BRPlayerPawn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B0B6BC))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnPhysFallingChanged(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(BRPlayerPawn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B0B6C4))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnPhysSlideTackleChanged(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(BRPlayerPawn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B0B6CC))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnPhysRollChanged(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(BRPlayerPawn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B0B6D4))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnPhysClimbChagned(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(BRPlayerPawn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B0B6DC))(this, P0, P1);
	}
	template <typename T = bool> T xLuaBaseProxy_CheckJumpFaceWall() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0B6E4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetJumpComponentType() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0B6EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CheckFallingPassThroughWall(Il2CppVector3 P0) {
		return ((T (*)(BRPlayerPawn*, Il2CppVector3))(Il2CppBase() + 0x1B0B6F4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnControllerColliderHit(uintptr_t P0) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1B0B714))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_InternalUpdateSetRotation(float P0) {
		return ((T (*)(BRPlayerPawn*, float))(Il2CppBase() + 0x1B0B71C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_EndCrouch(bool P0, bool P1, bool P2) {
		return ((T (*)(BRPlayerPawn*, bool, bool, bool))(Il2CppBase() + 0x1B0B724))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_StartProne(bool P0) {
		return ((T (*)(BRPlayerPawn*, bool))(Il2CppBase() + 0x1B0B744))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_EndProne(bool P0, bool P1, bool P2) {
		return ((T (*)(BRPlayerPawn*, bool, bool, bool))(Il2CppBase() + 0x1B0B74C))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_SimulateZiplineStart(uintptr_t P0) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1B0B76C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SimulateZiplineTick(uintptr_t P0) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1B0B7E8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SimulateZiplineEnd(uintptr_t P0) {
		return ((T (*)(BRPlayerPawn*, uintptr_t))(Il2CppBase() + 0x1B0B864))(this, P0);
	}
	template <typename T = float> T xLuaBaseProxy_GetDeltaMoveHeight(float P0) {
		return ((T (*)(BRPlayerPawn*, float))(Il2CppBase() + 0x1B0B8E0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_FallingGround(float P0) {
		return ((T (*)(BRPlayerPawn*, float))(Il2CppBase() + 0x1B0B8E8))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_IsValidFallingHeight(float P0, uintptr_t P1) {
		return ((T (*)(BRPlayerPawn*, float, uintptr_t))(Il2CppBase() + 0x1B0B8F0))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_ProcessGround(Il2CppVector3 P0, float P1) {
		return ((T (*)(BRPlayerPawn*, Il2CppVector3, float))(Il2CppBase() + 0x1B0B8F8))(this, P0, P1);
	}
	template <typename T = bool> T xLuaBaseProxy_IsUnderWaterSurface(float P0) {
		return ((T (*)(BRPlayerPawn*, float))(Il2CppBase() + 0x1B0B920))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_EndBagWeaponProcessing() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0B928))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateRotation(Il2CppVector3 P0) {
		return ((T (*)(BRPlayerPawn*, Il2CppVector3))(Il2CppBase() + 0x1B0B930))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_AddRotation(Il2CppQuaternion P0) {
		return ((T (*)(BRPlayerPawn*, Il2CppQuaternion))(Il2CppBase() + 0x1B0B950))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_StartFire() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0B974))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CanFire() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0B97C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopAllStateWhenStartAim() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0B984))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CanOpenAim() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0B98C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopAim() {
		return ((T (*)(BRPlayerPawn*))(Il2CppBase() + 0x1B0B994))(this);
	}

};

}
