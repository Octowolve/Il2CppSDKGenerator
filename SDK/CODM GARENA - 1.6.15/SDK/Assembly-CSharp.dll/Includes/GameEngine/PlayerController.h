#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class PlayerController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "PlayerController"));
	}

	template <typename T = float> T& RotationSensity() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_LocalPlayer() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppVector3> T& m_EnemyHitPos() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_DamageDiretion() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& m_BeHit() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& m_AndroidCameraRotateRate() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& m_LastHitEnemyTime() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& m_IsToggleCrouch() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& m_AutoFireDelayTime() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& m_AutoFireStopDelayTime() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& m_IsAimAssistanceStopWhenHitEnemy() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& m_EnableAimAssistance() {
		return *(T*)((uintptr_t)this + 0x61);
	}
	template <typename T = bool> T& m_FindNearestTargetInAimAssistance() {
		return *(T*)((uintptr_t)this + 0x62);
	}
	template <typename T = float> T& m_DurationForEnableAimAssistanceAfterInput() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& m_EnableAimAssistanceForSniper() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& m_SniperPressToZoom() {
		return *(T*)((uintptr_t)this + 0x69);
	}
	template <typename T = bool> T& m_MirrorWeapon() {
		return *(T*)((uintptr_t)this + 0x6A);
	}
	template <typename T = float> T& m_AimAssistanceSpeed() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& m_SprintingTurnAccelerationScale() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& m_InitLoadAimAssistanceSpeed() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& ContinuousPointInfo() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& m_LeftJump() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = bool> T& m_LockRotation() {
		return *(T*)((uintptr_t)this + 0x7D);
	}
	template <typename T = float> T& m_RotateSpeedFactor() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& m_Is1PFireObserveProjectile() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_1PFireWeaponProjectile() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& m_1PFireWeaponProjectile_Target() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& m_AircraftViewTarget() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& IsGuidingMove() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = float> T& GuideMoveRotAngleOffset() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppVector3> T& LastDamageSrcPosWhenGuideMove() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = float> T& GuideReadyTime() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> static T& RTTRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& TotalFastTurnTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& TurnSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_FastTurnTime() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = Il2CppVector3> T& m_RTTSpeed() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& m_RTTTime() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = float> static T& LookForwardSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& AutoLookForward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& LookForwardDelayTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = float> T& m_LookForwardCountDown() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = float> static T& AimAssitanceDelay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& m_EnableInputSprintLean() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = float> static T& m_InputSprintLeanCo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = float> static T& m_InputSprintAngleThreshold() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = float> static T& m_InputSprintLerpSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = float> static T& m_SprintInputAngleLerpSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = bool> static T& m_SprintAngleLinearLerp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = float> T& m_CurrentSprintLeanValue() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = float> T& m_CacheRotationAngleY() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = bool> static T& CheckLeanInputNan() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D);
	}
	template <typename T = float> T& CurrentAutoLockTime() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> static T& s_LockTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = float> T& m_DebugRotationY() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = bool> T& m_EnableDebugRotationY() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = bool> T& m_AssitAimTargetUpdated() {
		return *(T*)((uintptr_t)this + 0xD5);
	}
	template <typename T = Il2CppVector2> T& m_VerticalRoationLimit_3PFireCameraFree() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = bool> static T& ShowThrowLine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = float> T& lastFreezeTime() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppVector3> T& MoveTouchOffset() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = bool> static T& EnableTriggeredKnife() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x25);
	}
	template <typename T = bool> static T& EnableDoubleClickChangeClip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x26);
	}
	template <typename T = bool> T& m_OldIsAiming() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = bool> T& FFF() {
		return *(T*)((uintptr_t)this + 0xF1);
	}
	template <typename T = bool> T& m_IsCameraHold() {
		return *(T*)((uintptr_t)this + 0xF2);
	}
	template <typename T = bool> T& m_IsInRoom() {
		return *(T*)((uintptr_t)this + 0xF3);
	}
	template <typename T = float> T& m_OffsetDist() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = Il2CppVector3> T& m_LastCheckCelilingTargetCameraPos() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = float> T& m_CelilingCheckTime() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& DeadEye_AutoAssistAimRanges() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& DeadEye_AutoAssistAimRates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = float> static T& DeadEye_DampAssitAimRateFactor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = float> static T& DeadEye_MagnAssitAimRateFactor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = bool> T& m_InDeadEye() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& m_LastAssistAimTarget() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = Il2CppVector3> T& m_LastAssistAimTargetPos() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& m_LastMagnAssistAimTarget() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = Il2CppVector3> T& m_LastMagnAssistAimTargetPos() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = float> T& mLastMagnTime() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = bool> T& IsInMissileUI() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& m_ControlledMissile() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uint32_t> T& m_CachePreLocalPlayerID() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = bool> T& m_IsInVTOLController() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = bool> T& m_StartVTOL1PViewChange() {
		return *(T*)((uintptr_t)this + 0x13D);
	}
	template <typename T = int32_t> T& m_CacheLastUsedWeaponActorID() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = int32_t> T& m_CacheLastUsedWeaponItemID() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = unsigned char> T& m_CacheLastUsedWeaponSlotID() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uint32_t> T& m_CacheLastUsedWeaponSkinID() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = uint32_t> T& m_CacheLastUsedWeaponCrossHairID() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_CacheLastUsedWeaponPartList() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = uintptr_t> T& m_CacheCurGameHandle() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = bool> T& m_InRequestUltSkill() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = float> T& m_LastInRequestUltSkillTime() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = float> static T& WaitRequestUltSkillTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppVector3> T& m_CachedUltSkillTargetPosition() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = Il2CppVector3> T& m_CachedUltSkillTargetNormal() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& m_LastPlayerFireModeType() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = uintptr_t> T& m_PlayerFireModeType() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = bool> T& m_Is3PFireMode_Free() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = Il2CppQuaternion> T& m_Old3PFireCameraRot() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = Il2CppQuaternion> T& m_From3PFireCameraRot() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = float> T& m_From3PFireCameraRotLerpTime() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = bool> T& m_Is3PFireModeCameraFadeout() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = float> T& m_3PFireModeCameraFadeoutTimeAdd() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = bool> T& n_IsBROpenAimState() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = uintptr_t> T& m_3PCameraCollider() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = Il2CppQuaternion> T& m_Last3PFireViewTargetCameraRot() {
		return *(T*)((uintptr_t)this + 0x1BC);
	}
	template <typename T = Il2CppVector3> T& m_Last3PFireViewTargetCameraPos() {
		return *(T*)((uintptr_t)this + 0x1CC);
	}
	template <typename T = Il2CppVector3> T& m_cacheTargetPos() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = float> T& m_LookatCheckTime() {
		return *(T*)((uintptr_t)this + 0x1E4);
	}
	template <typename T = bool> T& m_ToWall() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = bool> T& mLastClimb() {
		return *(T*)((uintptr_t)this + 0x1E9);
	}
	template <typename T = float> T& m_WaterCheckTick() {
		return *(T*)((uintptr_t)this + 0x1EC);
	}
	template <typename T = Il2CppQuaternion> T& m_waterRot() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = float> T& mDynamicNearClipDist() {
		return *(T*)((uintptr_t)this + 0x200);
	}
	template <typename T = Il2CppVector3> T& mOldLookat() {
		return *(T*)((uintptr_t)this + 0x204);
	}
	template <typename T = Il2CppVector3> T& mOldWantPos() {
		return *(T*)((uintptr_t)this + 0x210);
	}
	template <typename T = Il2CppVector3> T& mOldToPos() {
		return *(T*)((uintptr_t)this + 0x21C);
	}
	template <typename T = Il2CppVector3> T& mCacheOffset() {
		return *(T*)((uintptr_t)this + 0x228);
	}
	template <typename T = float> T& mCacheDistance() {
		return *(T*)((uintptr_t)this + 0x234);
	}
	template <typename T = float> T& mCheckTime() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = bool> T& mCheckCollider() {
		return *(T*)((uintptr_t)this + 0x23C);
	}
	template <typename T = float> T& ms_3PCameraColliderRadius() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = Il2CppVector3> T& m_LastWantPos() {
		return *(T*)((uintptr_t)this + 0x244);
	}
	template <typename T = Il2CppVector3> T& m_LastLookatPos() {
		return *(T*)((uintptr_t)this + 0x250);
	}
	template <typename T = bool> T& m_isInPhysicsBlock() {
		return *(T*)((uintptr_t)this + 0x25C);
	}
	template <typename T = float> T& m_startRateLerp() {
		return *(T*)((uintptr_t)this + 0x260);
	}
	template <typename T = int32_t> T& m_LastCheckCameraColliderTransformFrame() {
		return *(T*)((uintptr_t)this + 0x264);
	}
	template <typename T = int32_t> T& MaxTickCheckCameraColliderTransformFrame() {
		return *(T*)((uintptr_t)this + 0x268);
	}
	template <typename T = float> T& mLostDistance() {
		return *(T*)((uintptr_t)this + 0x26C);
	}
	template <typename T = float> T& mCameraSpeed() {
		return *(T*)((uintptr_t)this + 0x270);
	}
	template <typename T = float> T& mOldDistance() {
		return *(T*)((uintptr_t)this + 0x274);
	}
	template <typename T = Il2CppVector3> T& mLerpSpeed() {
		return *(T*)((uintptr_t)this + 0x278);
	}
	template <typename T = float> T& mPauseTime() {
		return *(T*)((uintptr_t)this + 0x284);
	}
	template <typename T = uintptr_t> T& m_3PBrFireCameraCollider() {
		return *(T*)((uintptr_t)this + 0x288);
	}
	template <typename T = Il2CppQuaternion> T& m_Last3PBrFireViewTargetCameraRot() {
		return *(T*)((uintptr_t)this + 0x28C);
	}
	template <typename T = Il2CppVector3> T& m_Last3PBrFireViewTargetCameraPos() {
		return *(T*)((uintptr_t)this + 0x29C);
	}
	template <typename T = float> T& m_IndividuationStartTime() {
		return *(T*)((uintptr_t)this + 0x2A8);
	}
	template <typename T = float> T& m_IndividuationPlayTime() {
		return *(T*)((uintptr_t)this + 0x2AC);
	}
	template <typename T = bool> T& m_InIndividuationPlaying() {
		return *(T*)((uintptr_t)this + 0x2B0);
	}
	template <typename T = bool> T& m_IndividuationFadeOut() {
		return *(T*)((uintptr_t)this + 0x2B1);
	}
	template <typename T = float> T& m_Individuation3PCameraColliderDefaultRadius() {
		return *(T*)((uintptr_t)this + 0x2B4);
	}
	template <typename T = float> T& m_FreezePlayerTime() {
		return *(T*)((uintptr_t)this + 0x2B8);
	}
	template <typename T = uintptr_t> T& m_SpectatingTarget() {
		return *(T*)((uintptr_t)this + 0x2BC);
	}
	template <typename T = bool> T& IsSpectating() {
		return *(T*)((uintptr_t)this + 0x2C0);
	}
	template <typename T = uint32_t> T& m_LastSpectatingTargetPlayerID() {
		return *(T*)((uintptr_t)this + 0x2C4);
	}
	template <typename T = bool> T& m_IsWaitLastSpectatingTarget() {
		return *(T*)((uintptr_t)this + 0x2C8);
	}
	template <typename T = float> T& m_MaxWaitLastSpectatingTargetTime() {
		return *(T*)((uintptr_t)this + 0x2CC);
	}
	template <typename T = bool> T& m_NeedObserveFriend() {
		return *(T*)((uintptr_t)this + 0x2D0);
	}
	template <typename T = float> T& m_LastSetSpectatingTime() {
		return *(T*)((uintptr_t)this + 0x2D4);
	}
	template <typename T = uintptr_t> T& m_SpectatingMode() {
		return *(T*)((uintptr_t)this + 0x2D8);
	}
	template <typename T = Il2CppVector3> static T& FreeViewInitialOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OverrideAimAssistanceSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReloadInitAimAssistanceSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__AttachAudioListener() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitEventProcessor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadPropertyFromConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AllowAimAssitance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RotateTowardTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRTT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateFastTurn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInAimAssitanceTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAimAndMagnAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAutoFireTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEnableDebugRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAimTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAssistAimAndAutoTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAimForVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRotationFor3PCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Set3PFireCameraFreeVerticalRoationLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRotationFor3PFireCamera_Free() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAcceleration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFreezing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickThrowLine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartGuideMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopGuideMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanTriggerGuideMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateGuidingMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update3PFireBlockWorldPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLocalPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessDrive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckDoubleClickChangeClip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSwitchGrenade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateFireModeStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSecondaryFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartSpin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartClimb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartJump() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartGravitySpikes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckJump() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckForceSkyfly() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelCheckForceSkyfly() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSlideTackle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCrouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckProne() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRoll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRollForInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShadowBlade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnThrowTypeChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ActiveCameraHold() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CameraHoldClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanFullScreenRotateCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldCalcDeathCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcDeathCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcVehicleCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Cale1PFireProjectileCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcAircraftCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcSkydivingCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewPortPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRightViewPort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewForward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewPortPosition_TPS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewPassengerPosition_TPS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewPortPosition_HeadTPS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewPortPosition_FirstPerson() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCeliling() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewPortPosition_FirstPersonSocket() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x164);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewPortRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDeadEyeAutoAssistAimRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x16C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcAssistAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRotateSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x174);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAssitAimSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBanMagnAssist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x17C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcMagnAssistAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x184);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FireButtonDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x194);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FireButtonUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartSecondaryFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x19C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopSecondaryFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanSwitchFireMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchFireMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEndMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerBagDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerBagInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessPropInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessBagInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPawnDie() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LaunchMissile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ServerAjustMissile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanFireMissile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartMissileControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndMissileControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMissileHadExplode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1DC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMissileExplosed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRotationForMissile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcMissileControlCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchTo1PView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1EC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecoveToLocalPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartVTOLController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndVTOLController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UseUltSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1FC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UseUltSkill_TargetPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x200);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UseUltSkillWithInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x204);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanSwitchToWeaponUltSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x208);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsTPSFireMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFPSFireMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x210);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLastTPSFireMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x214);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsChangedPlayerFireModeType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x218);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchTo3PFireMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x21C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchTo1PFireMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x220);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Close3PFireFreeCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x224);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Change3PFireMode_Free() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x228);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Get3PFireModeFree_Rot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x22C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenAimFor3PFireMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x230);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseAimFor3PFireMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x234);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckLookat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x238);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckClimbModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x23C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoCameraLerp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x240);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClimbCameraMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x244);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FPSCheckWater() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x248);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCameraOffsetFromAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Get3PFireModeCameraTargetPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x250);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Calc3PFireModeCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x254);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckFPSNearClipInSwimming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x258);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckNearClipInSwimming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x25C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHitProjection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x260);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetHitProjection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x264);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckNearClip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x268);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SphereCastCameraPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x26C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSphereHitProjection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x270);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_GetHitProjection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x274);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MoveCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x278);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCameraCollision() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x27C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Calc3PCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x280);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Create3PCameraCollider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x284);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitUpdateCameraColliderTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x288);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateCameraColliderMaxDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCameraColliderTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x290);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Calc3PCamera_Follow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x294);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Calc3PBrFireModeCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x298);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetIsSwimming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x29C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckLean() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInIndividuationPlaying() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInIndividuationPlaying() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckInIndividuationPlaying() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopIndividuation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateIndividuationRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Get3PIndividuationModeFreeRot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcViewTargetIndividuationCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcIndividuationCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFreezePlayerEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSkillChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UseKillStreakSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_isClickingGrappleGunSkillState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SelectBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2D4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLocalInitBagRoleData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2D8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadWeaponAssetsForLocalPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2DC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadWeaponPartAssetsForLocalPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2E0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2E4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentPawnFOVCuveValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2E8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UseSkydivingCommonCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2EC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Possess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2F0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Restart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2F4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSpectatingPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2F8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSpectatingTargetDied() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2FC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartSpectating() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x300);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartSpectatingById() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x304);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndSpectating() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x308);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartObserve() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndObserve() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x310);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartObserve_DeadReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x314);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartObserve_CarePackage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x318);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndObserve_CarePackage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x31C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartObserve_SpecialTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x320);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndObserve_SpecialTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x324);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartObserve_DestructibleSceneObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x328);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndObserve_DestructibleSceneObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x32C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Delay1PFireObserve_Projectile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x330);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Do1PFireObserve_Projectile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x334);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_End1PFireObserve_Projectile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x338);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartObserve_Aircraft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x33C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndObserve_Aircraft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x340);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoStartObserve() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x344);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetObserveFOV() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x348);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFreeViewSpectatingStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFreeViewSpectatingEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x350);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ViewNextPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x354);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ViewPrePlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x358);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ViewLastPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x35C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckViewPlayerById() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x360);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ViewPlayerById() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x364);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ViewNextPlayerWithDir() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x368);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearSpectatingTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x36C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSpectatingTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x370);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanUse3PView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x374);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanUse1PView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x378);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckNewTargetSpectatorMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x37C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReset_Spectating() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x380);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpectatingTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x384);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNeedSpectatingTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x388);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_VerifySpectatingTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_VerifySpectatingListener() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x390);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_VerifySpectating3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x394);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_VerifySpectating1P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x398);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AutoFindSpectateTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x39C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BindLoaclPawnOnFreeView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSetSpectateTargetCD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSpectateTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchSpectatingMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ViewPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanStartSpectating() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSpectatingTargetList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AllowRotateWhenSpectating() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShoudGoToSpectatingAfterDead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcSpectatingDeathCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcSpectatingCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcSpectatingCamera_1P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3CC);
	}

	template <typename T = uintptr_t> T get_ViewTarget() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DB2598))(this);
	}
	template <typename T = uintptr_t> T get_PCEventProcessor() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DB266C))(this);
	}
	template <typename T = float> T get_LastHitEnemyTime() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DB2724))(this);
	}
	template <typename T = void> T set_LastHitEnemyTime(float value) {
		return ((T (*)(PlayerController*, float))(Il2CppBase() + 0x1DB272C))(this, value);
	}
	template <typename T = uintptr_t> T get_Player() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1D85634))(this);
	}
	template <typename T = void> T set_Player(uintptr_t value) {
		return ((T (*)(PlayerController*, uintptr_t))(Il2CppBase() + 0x1DB2734))(this, value);
	}
	template <typename T = bool> T get_IsToggleCrouch() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DB273C))(this);
	}
	template <typename T = float> T get_AutoFireDelayTime() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DB2744))(this);
	}
	template <typename T = float> T get_AutoFireStopDelayTime() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DB274C))(this);
	}
	template <typename T = bool> T get_IsAimAssistanceStopWhenHitEnemy() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DB2754))(this);
	}
	template <typename T = float> T get_DurationForEnableAimAssistanceAfterInput() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DB275C))(this);
	}
	template <typename T = bool> T get_EnableAimAssistanceForSniper() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DB2764))(this);
	}
	template <typename T = void> T set_EnableAimAssistanceForSniper(bool value) {
		return ((T (*)(PlayerController*, bool))(Il2CppBase() + 0x1DB276C))(this, value);
	}
	template <typename T = bool> T get_SniperPressToZoom() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DB2774))(this);
	}
	template <typename T = void> T set_SniperPressToZoom(bool value) {
		return ((T (*)(PlayerController*, bool))(Il2CppBase() + 0x1DB277C))(this, value);
	}
	template <typename T = bool> T get_MirrorWeapon() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DB2784))(this);
	}
	template <typename T = void> T set_MirrorWeapon(bool value) {
		return ((T (*)(PlayerController*, bool))(Il2CppBase() + 0x1DB278C))(this, value);
	}
	template <typename T = float> T get_AimAssistanceSpeed() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DB28C4))(this);
	}
	template <typename T = float> T get_SprintingTurnAccelerationScale() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DB28CC))(this);
	}
	template <typename T = void> T OverrideAimAssistanceSpeed(float newspeed) {
		return ((T (*)(PlayerController*, float))(Il2CppBase() + 0x1DB28D4))(this, newspeed);
	}
	template <typename T = void> T ReloadInitAimAssistanceSpeed() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DB29B0))(this);
	}
	template <typename T = bool> T get_LeftJump() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DB2A84))(this);
	}
	template <typename T = void> T set_LeftJump(bool value) {
		return ((T (*)(PlayerController*, bool))(Il2CppBase() + 0x1DB2A8C))(this, value);
	}
	template <typename T = bool> T get_LockRotation() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DB2A94))(this);
	}
	template <typename T = void> T set_LockRotation(bool value) {
		return ((T (*)(PlayerController*, bool))(Il2CppBase() + 0x1DB2A9C))(this, value);
	}
	template <typename T = float> T get_RotateSpeedFactor() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DB2AA4))(this);
	}
	template <typename T = void> T set_RotateSpeedFactor(float value) {
		return ((T (*)(PlayerController*, float))(Il2CppBase() + 0x1DB2AAC))(this, value);
	}
	template <typename T = bool> T get_Is1PFireObserveProjectile() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DA55A4))(this);
	}
	template <typename T = uintptr_t> T get_AircraftViewTarget() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DA3FB0))(this);
	}
	template <typename T = void> T set_AircraftViewTarget(uintptr_t value) {
		return ((T (*)(PlayerController*, uintptr_t))(Il2CppBase() + 0x1DB2AB4))(this, value);
	}
	template <typename T = bool> T get_IsRidingVehicle() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DB2ABC))(this);
	}
	template <typename T = bool> T get_IsOnPlateformVehicle() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DB2BA0))(this);
	}
	template <typename T = bool> T get_IsForbidShootOnVehicle() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DA42A0))(this);
	}
	template <typename T = bool> T get_IsDrivingVehicle() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1D9FD04))(this);
	}
	template <typename T = bool> T get_IsVehicleUpdateCameraByPhysics() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1D9FEE0))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DB2C84))(this);
	}
	template <typename T = void> T _AttachAudioListener(uintptr_t pTarget) {
		return ((T (*)(PlayerController*, uintptr_t))(Il2CppBase() + 0x1DB2D90))(this, pTarget);
	}
	template <typename T = void> T Start() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DB30A8))(this);
	}
	template <typename T = void> T InitEventProcessor() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DB3350))(this);
	}
	template <typename T = uintptr_t> T get_ControllerSyncModule() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DB3520))(this);
	}
	template <typename T = void> T LoadPropertyFromConfig() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DB3780))(this);
	}
	template <typename T = bool> T AllowAimAssitance() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DB3A78))(this);
	}
	template <typename T = void> T RotateTowardTarget(Il2CppVector3 pos) {
		return ((T (*)(PlayerController*, Il2CppVector3))(Il2CppBase() + 0x1DB3D08))(this, pos);
	}
	template <typename T = void> T UpdateRTT(uintptr_t angle) {
		return ((T (*)(PlayerController*, uintptr_t))(Il2CppBase() + 0x1DB3DF4))(this, angle);
	}
	template <typename T = void> T UpdateFastTurn(uintptr_t angle) {
		return ((T (*)(PlayerController*, uintptr_t))(Il2CppBase() + 0x1DB3F74))(this, angle);
	}
	template <typename T = bool> T IsInAimAssitanceTime(bool gamepadInput) {
		return ((T (*)(PlayerController*, bool))(Il2CppBase() + 0x1DB40A0))(this, gamepadInput);
	}
	template <typename T = Il2CppVector3> T GetAimAndMagnAngle(Il2CppVector3 assistAngle, Il2CppVector3 magnAngle) {
		return ((T (*)(PlayerController*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x1DB43C8))(this, assistAngle, magnAngle);
	}
	template <typename T = void> T UpdateAutoFireTarget(uintptr_t weap, float dt) {
		return ((T (*)(PlayerController*, uintptr_t, float))(Il2CppBase() + 0x1DB4568))(this, weap, dt);
	}
	template <typename T = void> T SetEnableDebugRotation(float input) {
		return ((T (*)(PlayerController*, float))(Il2CppBase() + 0x1DB4FB0))(this, input);
	}
	template <typename T = void> T UpdateAimTarget(uintptr_t weap) {
		return ((T (*)(PlayerController*, uintptr_t))(Il2CppBase() + 0x1DB48C4))(this, weap);
	}
	template <typename T = Il2CppVector3> T UpdateAssistAimAndAutoTarget(Il2CppVector3 angles, float dt) {
		return ((T (*)(PlayerController*, Il2CppVector3, float))(Il2CppBase() + 0x1DB5184))(this, angles, dt);
	}
	template <typename T = void> T UpdateRotation(float dt) {
		return ((T (*)(PlayerController*, float))(Il2CppBase() + 0x1DB69C0))(this, dt);
	}
	template <typename T = void> T UpdateAimForVehicle(Il2CppVector3 angles) {
		return ((T (*)(PlayerController*, Il2CppVector3))(Il2CppBase() + 0x1DB79F8))(this, angles);
	}
	template <typename T = void> T UpdateRotationFor3PCamera() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DB7EF8))(this);
	}
	template <typename T = void> T Set3PFireCameraFreeVerticalRoationLimit(float minValue, float maxValue) {
		return ((T (*)(PlayerController*, float, float))(Il2CppBase() + 0x1DB819C))(this, minValue, maxValue);
	}
	template <typename T = void> T UpdateRotationFor3PFireCamera_Free() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DB7C70))(this);
	}
	template <typename T = void> T UpdateAcceleration() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DB8298))(this);
	}
	template <typename T = bool> T IsFreezing() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DB846C))(this);
	}
	template <typename T = void> T TickThrowLine() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DB85D4))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(PlayerController*, float))(Il2CppBase() + 0x1DB88AC))(this, deltaTime);
	}
	template <typename T = void> T StartGuideMove() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DB9AE8))(this);
	}
	template <typename T = void> T StopGuideMove() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DB9CA4))(this);
	}
	template <typename T = bool> T CanTriggerGuideMove() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DB9D7C))(this);
	}
	template <typename T = void> T UpdateGuidingMove() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DB8FBC))(this);
	}
	template <typename T = void> T Update3PFireBlockWorldPos() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DB9EC8))(this);
	}
	template <typename T = void> T UpdateLocalPawn(float deltaTime) {
		return ((T (*)(PlayerController*, float))(Il2CppBase() + 0x1DBA4D0))(this, deltaTime);
	}
	template <typename T = void> T ProcessDrive() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DBA720))(this);
	}
	template <typename T = void> T CheckDoubleClickChangeClip() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DBAC64))(this);
	}
	template <typename T = void> T CheckSwitchGrenade() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DBAD2C))(this);
	}
	template <typename T = void> T UpdateFireModeStatus(float deltaTime) {
		return ((T (*)(PlayerController*, float))(Il2CppBase() + 0x1DBAF94))(this, deltaTime);
	}
	template <typename T = void> T CheckSecondaryFire() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DBB24C))(this);
	}
	template <typename T = void> T StartSpin() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DBB3BC))(this);
	}
	template <typename T = void> T StartClimb() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DBB4F0))(this);
	}
	template <typename T = void> T StartJump() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DBB664))(this);
	}
	template <typename T = void> T StartGravitySpikes() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DBB7DC))(this);
	}
	template <typename T = void> T CheckJump(bool ClimbNextTime) {
		return ((T (*)(PlayerController*, bool))(Il2CppBase() + 0x1DBB94C))(this, ClimbNextTime);
	}
	template <typename T = void> T CheckForceSkyfly() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DBBBAC))(this);
	}
	template <typename T = void> T CancelCheckForceSkyfly() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DBBD48))(this);
	}
	template <typename T = uintptr_t> T CheckSlideTackle(bool isPressed) {
		return ((T (*)(PlayerController*, bool))(Il2CppBase() + 0x1DBBEE4))(this, isPressed);
	}
	template <typename T = void> T CheckCrouch() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DBC080))(this);
	}
	template <typename T = void> T CheckProne(bool immediately) {
		return ((T (*)(PlayerController*, bool))(Il2CppBase() + 0x1DBC344))(this, immediately);
	}
	template <typename T = void> T CheckRoll(bool isInput) {
		return ((T (*)(PlayerController*, bool))(Il2CppBase() + 0x1DBC5FC))(this, isInput);
	}
	template <typename T = uintptr_t> T CheckRollForInput(bool isPressed) {
		return ((T (*)(PlayerController*, bool))(Il2CppBase() + 0x1DBC878))(this, isPressed);
	}
	template <typename T = bool> T IsShadowBlade() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DBCA14))(this);
	}
	template <typename T = void> T OnThrowTypeChanged(bool isHighThrow) {
		return ((T (*)(PlayerController*, bool))(Il2CppBase() + 0x1DBCB94))(this, isHighThrow);
	}
	template <typename T = bool> T get_IsCameraHold() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DA3528))(this);
	}
	template <typename T = void> T ActiveCameraHold(uintptr_t type, float holdTime) {
		return ((T (*)(PlayerController*, uintptr_t, float))(Il2CppBase() + 0x1DBCD10))(this, type, holdTime);
	}
	template <typename T = uintptr_t> T CameraHoldClose(uintptr_t type, float holdTime) {
		return ((T (*)(PlayerController*, uintptr_t, float))(Il2CppBase() + 0x1DBCE24))(this, type, holdTime);
	}
	template <typename T = bool> T CanFullScreenRotateCamera() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DB99E4))(this);
	}
	template <typename T = bool> T ShouldCalcDeathCamera() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DA5080))(this);
	}
	template <typename T = void> T CalcDeathCamera(uintptr_t out_CamLoc, uintptr_t out_CamRot) {
		return ((T (*)(PlayerController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DA5310))(this, out_CamLoc, out_CamRot);
	}
	template <typename T = void> T CalcVehicleCamera(uintptr_t camera, uintptr_t out_CamLoc, uintptr_t out_CamRot) {
		return ((T (*)(PlayerController*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DA4558))(this, camera, out_CamLoc, out_CamRot);
	}
	template <typename T = void> T Cale1PFireProjectileCamera(uintptr_t out_CamLoc, uintptr_t out_CamRot) {
		return ((T (*)(PlayerController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DA56E0))(this, out_CamLoc, out_CamRot);
	}
	template <typename T = void> T CalcAircraftCamera(uintptr_t out_CamLoc, uintptr_t out_CamRot) {
		return ((T (*)(PlayerController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DBCF70))(this, out_CamLoc, out_CamRot);
	}
	template <typename T = void> T CalcSkydivingCamera(uintptr_t out_CamLoc, uintptr_t out_CamRot) {
		return ((T (*)(PlayerController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DBD054))(this, out_CamLoc, out_CamRot);
	}
	template <typename T = Il2CppVector3> T GetViewPortPosition() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DBD138))(this);
	}
	template <typename T = Il2CppVector3> T GetRightViewPort() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DBD408))(this);
	}
	template <typename T = Il2CppVector3> T GetViewForward() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DBD6D8))(this);
	}
	template <typename T = Il2CppVector3> T GetViewPosition() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DBD9A8))(this);
	}
	template <typename T = Il2CppVector3> T GetViewPortPosition_TPS() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DBDC78))(this);
	}
	template <typename T = Il2CppVector3> T GetViewPassengerPosition_TPS() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DBE034))(this);
	}
	template <typename T = Il2CppVector3> T GetViewPortPosition_HeadTPS() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DBE304))(this);
	}
	template <typename T = Il2CppVector3> T GetViewPortPosition_FirstPerson() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DA8024))(this);
	}
	template <typename T = Il2CppVector3> T get_TPSCameraOffset() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DBE5CC))(this);
	}
	template <typename T = void> T CheckCeliling(Il2CppVector3 targetPos) {
		return ((T (*)(PlayerController*, Il2CppVector3))(Il2CppBase() + 0x1DBE874))(this, targetPos);
	}
	template <typename T = uintptr_t> T GetViewPawn() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DA8768))(this);
	}
	template <typename T = Il2CppVector3> T GetViewPortPosition_FirstPersonSocket() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DBEB8C))(this);
	}
	template <typename T = Il2CppQuaternion> T GetViewPortRotation() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DBEE5C))(this);
	}
	template <typename T = float> T GetDeadEyeAutoAssistAimRate(float dist) {
		return ((T (*)(PlayerController*, float))(Il2CppBase() + 0x1DBF12C))(this, dist);
	}
	template <typename T = uintptr_t> T get_LastAssistAimTarget() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DBF48C))(this);
	}
	template <typename T = Il2CppVector3> T get_LastAssistAimTargetPos() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DBF494))(this);
	}
	template <typename T = Il2CppVector3> T CalcAssistAim(uintptr_t aimTarget, Il2CppVector3 aimTargetPos, bool gamepadInput) {
		return ((T (*)(PlayerController*, uintptr_t, Il2CppVector3, bool))(Il2CppBase() + 0x1DB5E58))(this, aimTarget, aimTargetPos, gamepadInput);
	}
	template <typename T = float> T GetRotateSpeed(float assistDis, float dis, float angle, float rotateTime, bool gamepadInput) {
		return ((T (*)(PlayerController*, float, float, float, float, bool))(Il2CppBase() + 0x1DBF4A8))(this, assistDis, dis, angle, rotateTime, gamepadInput);
	}
	template <typename T = float> T GetAssitAimSpeed(float assistDis, float dis, float angle, bool isMPPVE, bool gamepadInput) {
		return ((T (*)(PlayerController*, float, float, float, bool, bool))(Il2CppBase() + 0x1DBF708))(this, assistDis, dis, angle, isMPPVE, gamepadInput);
	}
	template <typename T = bool> T IsBanMagnAssist() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DBFA48))(this);
	}
	template <typename T = Il2CppVector3> T CalcMagnAssistAim(uintptr_t aimTarget, Il2CppVector3 aimPos, bool gamepadInput) {
		return ((T (*)(PlayerController*, uintptr_t, Il2CppVector3, bool))(Il2CppBase() + 0x1DB56C8))(this, aimTarget, aimPos, gamepadInput);
	}
	template <typename T = void> T StartFire() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DBFC20))(this);
	}
	template <typename T = void> T StopFire() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DBFDE0))(this);
	}
	template <typename T = void> T StartAim() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DBFFA0))(this);
	}
	template <typename T = void> T StopAim() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DC0160))(this);
	}
	template <typename T = void> T FireButtonDown() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DC0320))(this);
	}
	template <typename T = void> T FireButtonUp() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DC0498))(this);
	}
	template <typename T = void> T StartSecondaryFire() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DC0610))(this);
	}
	template <typename T = void> T StopSecondaryFire() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DC0788))(this);
	}
	template <typename T = bool> T CanSwitchFireMode() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DC0944))(this);
	}
	template <typename T = void> T SwitchFireMode() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DC0AC0))(this);
	}
	template <typename T = void> T OnEndMatch() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DC0C38))(this);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T GetPlayerBagDic() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DC0E40))(this);
	}
	template <typename T = uintptr_t> T GetPlayerBagInfo() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DC101C))(this);
	}
	template <typename T = void> T ProcessPropInfo() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DC11F8))(this);
	}
	template <typename T = void> T ProcessBagInfo() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DC1DCC))(this);
	}
	template <typename T = void> T OnPawnDie() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DC4454))(this);
	}
	template <typename T = void> T OnWeaponChanged() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DC452C))(this);
	}
	template <typename T = bool> T get_InMissileControl() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DA3724))(this);
	}
	template <typename T = uintptr_t> T get_ControlledMissile() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DC4658))(this);
	}
	template <typename T = void> T LaunchMissile() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DC4660))(this);
	}
	template <typename T = void> T ServerAjustMissile(uintptr_t flyInfo) {
		return ((T (*)(PlayerController*, uintptr_t))(Il2CppBase() + 0x1DC4804))(this, flyInfo);
	}
	template <typename T = bool> T CanFireMissile() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DC4968))(this);
	}
	template <typename T = void> T StartMissileControl(uintptr_t target) {
		return ((T (*)(PlayerController*, uintptr_t))(Il2CppBase() + 0x1DC4AE8))(this, target);
	}
	template <typename T = void> T EndMissileControl() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DC4E94))(this);
	}
	template <typename T = bool> T IsMissileHadExplode() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DC570C))(this);
	}
	template <typename T = void> T OnMissileExplosed() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DC5868))(this);
	}
	template <typename T = void> T UpdateRotationForMissile() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DB975C))(this);
	}
	template <typename T = void> T CalcMissileControlCamera(uintptr_t out_CamLoc, uintptr_t out_CamRot) {
		return ((T (*)(PlayerController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DA3908))(this, out_CamLoc, out_CamRot);
	}
	template <typename T = bool> T get_IsInVTOLController() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DC5B74))(this);
	}
	template <typename T = bool> T get_StartVTOL1PViewChange() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DC5B7C))(this);
	}
	template <typename T = uintptr_t> T get_CachePreLocalPawn() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DC5B84))(this);
	}
	template <typename T = bool> T SwitchTo1PView(uint32_t SwitchPlayerID) {
		return ((T (*)(PlayerController*, uint32_t))(Il2CppBase() + 0x1DC5C48))(this, SwitchPlayerID);
	}
	template <typename T = void> T RecoveToLocalPlayer() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DC65CC))(this);
	}
	template <typename T = void> T StartVTOLController(uint32_t actorID) {
		return ((T (*)(PlayerController*, uint32_t))(Il2CppBase() + 0x1DC6FD0))(this, actorID);
	}
	template <typename T = void> T EndVTOLController(float RecoverTime) {
		return ((T (*)(PlayerController*, float))(Il2CppBase() + 0x1DC73C8))(this, RecoverTime);
	}
	template <typename T = void> T set_InRequestUltSkill(bool value) {
		return ((T (*)(PlayerController*, bool))(Il2CppBase() + 0x1DC7AB0))(this, value);
	}
	template <typename T = bool> T get_InRequestUltSkill() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DC7AE0))(this);
	}
	template <typename T = bool> T UseUltSkill(uint32_t playerId) {
		return ((T (*)(PlayerController*, uint32_t))(Il2CppBase() + 0x1DC7B30))(this, playerId);
	}
	template <typename T = Il2CppVector3> T get_CachedUltSkillTargetNormal() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DC8188))(this);
	}
	template <typename T = void> T set_CachedUltSkillTargetNormal(Il2CppVector3 value) {
		return ((T (*)(PlayerController*, Il2CppVector3))(Il2CppBase() + 0x1DC819C))(this, value);
	}
	template <typename T = Il2CppVector3> T get_CachedUltSkillTargetPosition() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DC81A8))(this);
	}
	template <typename T = void> T set_CachedUltSkillTargetPosition(Il2CppVector3 value) {
		return ((T (*)(PlayerController*, Il2CppVector3))(Il2CppBase() + 0x1DC81BC))(this, value);
	}
	template <typename T = bool> T UseUltSkill_TargetPoint(uint32_t playerId) {
		return ((T (*)(PlayerController*, uint32_t))(Il2CppBase() + 0x1DC81C8))(this, playerId);
	}
	template <typename T = bool> T UseUltSkillWithInfo(uint32_t playerId) {
		return ((T (*)(PlayerController*, uint32_t))(Il2CppBase() + 0x1DC8444))(this, playerId);
	}
	template <typename T = bool> T CanSwitchToWeaponUltSkill() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DC7FA0))(this);
	}
	template <typename T = bool> T IsTPSFireMode() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DA7D18))(this);
	}
	template <typename T = bool> T IsFPSFireMode() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DC86CC))(this);
	}
	template <typename T = bool> T IsLastTPSFireMode() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DC87A4))(this);
	}
	template <typename T = bool> T IsChangedPlayerFireModeType() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DC8880))(this);
	}
	template <typename T = void> T SwitchTo3PFireMode(uint32_t viewPlayerID) {
		return ((T (*)(PlayerController*, uint32_t))(Il2CppBase() + 0x1DC896C))(this, viewPlayerID);
	}
	template <typename T = void> T SwitchTo1PFireMode() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DC8A58))(this);
	}
	template <typename T = bool> T get_Is3PFireFreeCameraController() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1D8F168))(this);
	}
	template <typename T = void> T Close3PFireFreeCamera() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DC8B34))(this);
	}
	template <typename T = void> T Change3PFireMode_Free(bool bReset) {
		return ((T (*)(PlayerController*, bool))(Il2CppBase() + 0x1DC8C0C))(this, bReset);
	}
	template <typename T = Il2CppQuaternion> T Get3PFireModeFree_Rot(float detlaTime) {
		return ((T (*)(PlayerController*, float))(Il2CppBase() + 0x1DC8F78))(this, detlaTime);
	}
	template <typename T = bool> T get_IsBROpenAimState() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DC916C))(this);
	}
	template <typename T = void> T OpenAimFor3PFireMode() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DC9174))(this);
	}
	template <typename T = void> T CloseAimFor3PFireMode() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DC9250))(this);
	}
	template <typename T = bool> T get_IsJumpingOrFailing() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DC9324))(this);
	}
	template <typename T = void> T CheckLookat(uintptr_t targetPos, Il2CppQuaternion targetRot) {
		return ((T (*)(PlayerController*, uintptr_t, Il2CppQuaternion))(Il2CppBase() + 0x1DC93E0))(this, targetPos, targetRot);
	}
	template <typename T = bool> T CheckClimbModel() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DA7254))(this);
	}
	template <typename T = void> T DoCameraLerp(uintptr_t toState, float inLerpTime, uintptr_t Callback, float inDeadTime) {
		return ((T (*)(PlayerController*, uintptr_t, float, uintptr_t, float))(Il2CppBase() + 0x1DA8BFC))(this, toState, inLerpTime, Callback, inDeadTime);
	}
	template <typename T = bool> T ClimbCameraMove(uintptr_t out_CamLoc, uintptr_t out_CamRot, uintptr_t out_lookatPoint) {
		return ((T (*)(PlayerController*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DA7728))(this, out_CamLoc, out_CamRot, out_lookatPoint);
	}
	template <typename T = void> T FPSCheckWater() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DC9E04))(this);
	}
	template <typename T = void> T UpdateCameraOffsetFromAnimation(float deltaTime, uintptr_t cameraLoc, Il2CppQuaternion cameraRot) {
		return ((T (*)(PlayerController*, float, uintptr_t, Il2CppQuaternion))(Il2CppBase() + 0x1DCA170))(this, deltaTime, cameraLoc, cameraRot);
	}
	template <typename T = Il2CppVector3> T Get3PFireModeCameraTargetPos(Il2CppQuaternion targetRot) {
		return ((T (*)(PlayerController*, Il2CppQuaternion))(Il2CppBase() + 0x1DCA524))(this, targetRot);
	}
	template <typename T = void> T Calc3PFireModeCamera(uintptr_t out_CamLoc, uintptr_t out_CamRot, uintptr_t out_lookatPoint, bool isLerp) {
		return ((T (*)(PlayerController*, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x1DCA744))(this, out_CamLoc, out_CamRot, out_lookatPoint, isLerp);
	}
	template <typename T = void> T CheckFPSNearClipInSwimming(int32_t inLayer, float NearClipAdd) {
		return ((T (*)(PlayerController*, int32_t, float))(Il2CppBase() + 0x1DCA004))(this, inLayer, NearClipAdd);
	}
	template <typename T = void> T CheckNearClipInSwimming(int32_t inLayer, Il2CppVector3 targetPos, float sphereRadius, float NearClipAdd, uintptr_t inFPSHitProjection) {
		return ((T (*)(PlayerController*, int32_t, Il2CppVector3, float, float, uintptr_t))(Il2CppBase() + 0x1DCB1A0))(this, inLayer, targetPos, sphereRadius, NearClipAdd, inFPSHitProjection);
	}
	template <typename T = bool> T GetHitProjection(Il2CppVector3 inLookat, Il2CppVector3 inWantPos, float sphereRadius, bool up) {
		return ((T (*)(PlayerController*, Il2CppVector3, Il2CppVector3, float, bool))(Il2CppBase() + 0x1DCC7A4))(this, inLookat, inWantPos, sphereRadius, up);
	}
	template <typename T = bool> T GetHitProjection_1(Il2CppVector3 inHitPos, Il2CppVector3 inCameraPos, Il2CppVector3 inDir, float inNearClip, float inHeight, bool up) {
		return ((T (*)(PlayerController*, Il2CppVector3, Il2CppVector3, Il2CppVector3, float, float, bool))(Il2CppBase() + 0x1DCCB10))(this, inHitPos, inCameraPos, inDir, inNearClip, inHeight, up);
	}
	template <typename T = bool> T CheckNearClip(int32_t inLayer, Il2CppVector3 targetPos, Il2CppVector3 wantPos, uintptr_t minPos, float sphereRadius, Il2CppVector3 inDir, uintptr_t outNormal) {
		return ((T (*)(PlayerController*, int32_t, Il2CppVector3, Il2CppVector3, uintptr_t, float, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x1DCCEB0))(this, inLayer, targetPos, wantPos, minPos, sphereRadius, inDir, outNormal);
	}
	template <typename T = bool> T SphereCastCameraPos(Il2CppVector3 targetPos, uintptr_t wantPos, float sphereRadius, float maxDistance, uintptr_t outDistance, uintptr_t outOffset) {
		return ((T (*)(PlayerController*, Il2CppVector3, uintptr_t, float, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DCE2E4))(this, targetPos, wantPos, sphereRadius, maxDistance, outDistance, outOffset);
	}
	template <typename T = float> T GetSphereHitProjection(Il2CppVector3 inHitPos, Il2CppVector3 inLookat, Il2CppVector3 inL2WDir, float sphereRadius) {
		return ((T (*)(PlayerController*, Il2CppVector3, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x1DC9B48))(this, inHitPos, inLookat, inL2WDir, sphereRadius);
	}
	template <typename T = bool> T GetHitProjection_2(Il2CppVector3 inHitPos, Il2CppVector3 inHitNol, Il2CppVector3 inLookat, Il2CppVector3 inL2WDir, float sphereRadius, uintptr_t outWantPos, uintptr_t outLenght) {
		return ((T (*)(PlayerController*, Il2CppVector3, Il2CppVector3, Il2CppVector3, Il2CppVector3, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DCE968))(this, inHitPos, inHitNol, inLookat, inL2WDir, sphereRadius, outWantPos, outLenght);
	}
	template <typename T = void> T MoveCamera(uintptr_t out_CamLoc, uintptr_t out_CamRot) {
		return ((T (*)(PlayerController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DA69C4))(this, out_CamLoc, out_CamRot);
	}
	template <typename T = bool> T CheckCameraCollision(Il2CppVector3 inLookat, uintptr_t cameraPos) {
		return ((T (*)(PlayerController*, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x1DCEE58))(this, inLookat, cameraPos);
	}
	template <typename T = bool> T Calc3PCamera(Il2CppVector3 targetPos, Il2CppVector3 cameraOffset, Il2CppQuaternion targetRot, uintptr_t out_CamLoc, uintptr_t out_CamRot, bool forceUpdateTransform, bool checkCollision, Il2CppVector2 inLerpTime) {
		return ((T (*)(PlayerController*, Il2CppVector3, Il2CppVector3, Il2CppQuaternion, uintptr_t, uintptr_t, bool, bool, Il2CppVector2))(Il2CppBase() + 0x1DCF2CC))(this, targetPos, cameraOffset, targetRot, out_CamLoc, out_CamRot, forceUpdateTransform, checkCollision, inLerpTime);
	}
	template <typename T = uintptr_t> T Create3PCameraCollider(Il2CppString* cameraName, Il2CppVector3 initPos, Il2CppQuaternion initRot) {
		return ((T (*)(PlayerController*, Il2CppString*, Il2CppVector3, Il2CppQuaternion))(Il2CppBase() + 0x1DCF7DC))(this, cameraName, initPos, initRot);
	}
	template <typename T = void> T InitUpdateCameraColliderTransform() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DCFBC8))(this);
	}
	template <typename T = float> T CalculateCameraColliderMaxDistance(float cameraOffset) {
		return ((T (*)(PlayerController*, float))(Il2CppBase() + 0x1DCFCD4))(this, cameraOffset);
	}
	template <typename T = bool> T UpdateCameraColliderTransform(uintptr_t cameraCollider, Il2CppVector3 targetPos, Il2CppVector3 cameraOffset, Il2CppQuaternion targetRot, bool forceUpdateTransform, bool checkCollision, Il2CppVector2 inLerpTime) {
		return ((T (*)(PlayerController*, uintptr_t, Il2CppVector3, Il2CppVector3, Il2CppQuaternion, bool, bool, Il2CppVector2))(Il2CppBase() + 0x1DCFDC0))(this, cameraCollider, targetPos, cameraOffset, targetRot, forceUpdateTransform, checkCollision, inLerpTime);
	}
	template <typename T = void> T Calc3PCamera_Follow(Il2CppVector3 targetPos, Il2CppVector3 cameraPos, uintptr_t out_CamLoc) {
		return ((T (*)(PlayerController*, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x1D8F170))(this, targetPos, cameraPos, out_CamLoc);
	}
	template <typename T = void> T Calc3PBrFireModeCamera(uintptr_t out_CamLoc, uintptr_t out_CamRot) {
		return ((T (*)(PlayerController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DD0D34))(this, out_CamLoc, out_CamRot);
	}
	template <typename T = void> T SetIsSwimming(bool isSwimming) {
		return ((T (*)(PlayerController*, bool))(Il2CppBase() + 0x1DD17A8))(this, isSwimming);
	}
	template <typename T = void> T CheckLean() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DD197C))(this);
	}
	template <typename T = bool> T GetInIndividuationPlaying() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DA3BE0))(this);
	}
	template <typename T = void> T SetInIndividuationPlaying(bool isActive, float activeTime) {
		return ((T (*)(PlayerController*, bool, float))(Il2CppBase() + 0x1DD1A44))(this, isActive, activeTime);
	}
	template <typename T = void> T CheckInIndividuationPlaying() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DB9648))(this);
	}
	template <typename T = bool> T get_IndividuationFadeOut() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DD1DF0))(this);
	}
	template <typename T = void> T set_IndividuationFadeOut(bool value) {
		return ((T (*)(PlayerController*, bool))(Il2CppBase() + 0x1DD1DE8))(this, value);
	}
	template <typename T = void> T StopIndividuation() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DD1DF8))(this);
	}
	template <typename T = void> T UpdateIndividuationRotation(float deltaTime) {
		return ((T (*)(PlayerController*, float))(Il2CppBase() + 0x1DBA9B4))(this, deltaTime);
	}
	template <typename T = Il2CppQuaternion> T Get3PIndividuationModeFreeRot() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DD1F20))(this);
	}
	template <typename T = void> T CalcViewTargetIndividuationCamera(uintptr_t out_CamLoc, uintptr_t out_CamRot) {
		return ((T (*)(PlayerController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DD200C))(this, out_CamLoc, out_CamRot);
	}
	template <typename T = void> T CalcIndividuationCamera(uintptr_t out_CamLoc, uintptr_t out_CamRot) {
		return ((T (*)(PlayerController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DD2544))(this, out_CamLoc, out_CamRot);
	}
	template <typename T = float> T get_FreezePlayerTime() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DD29A0))(this);
	}
	template <typename T = void> T set_FreezePlayerTime(float value) {
		return ((T (*)(PlayerController*, float))(Il2CppBase() + 0x1DD29A8))(this, value);
	}
	template <typename T = void> T OnFreezePlayerEnd() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DD2B5C))(this);
	}
	template <typename T = void> T OnSkillChange() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DD2C24))(this);
	}
	template <typename T = void> T UseKillStreakSkill(int32_t weaponID) {
		return ((T (*)(PlayerController*, int32_t))(Il2CppBase() + 0x1DD2D58))(this, weaponID);
	}
	template <typename T = bool> T isClickingGrappleGunSkillState() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DD3848))(this);
	}
	template <typename T = void> T SelectBag(int32_t bagId) {
		return ((T (*)(PlayerController*, int32_t))(Il2CppBase() + 0x1DD3C40))(this, bagId);
	}
	template <typename T = uintptr_t> T GetLocalInitBagRoleData(uint32_t bagid) {
		return ((T (*)(PlayerController*, uint32_t))(Il2CppBase() + 0x1DD3DA8))(this, bagid);
	}
	template <typename T = void> T LoadWeaponAssetsForLocalPlayer(Il2CppList<uintptr_t>* WeaponInfoList) {
		return ((T (*)(PlayerController*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1DC3DCC))(this, WeaponInfoList);
	}
	template <typename T = void> T LoadWeaponPartAssetsForLocalPlayer(Il2CppList<uint64_t>* weaponPartIDList) {
		return ((T (*)(PlayerController*, Il2CppList<uint64_t>*))(Il2CppBase() + 0x1DD401C))(this, weaponPartIDList);
	}
	template <typename T = void> T ApplyShift(Il2CppVector3 shift) {
		return ((T (*)(PlayerController*, Il2CppVector3))(Il2CppBase() + 0x1DD45D4))(this, shift);
	}
	template <typename T = float> T GetCurrentPawnFOVCuveValue() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DA1578))(this);
	}
	template <typename T = bool> T get_RealUseAnimationBasedAiming() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DD48E8))(this);
	}
	template <typename T = void> T set_RealUseAnimationBasedAiming(bool value) {
		return ((T (*)(PlayerController*, bool))(Il2CppBase() + 0x1DD48F0))(this, value);
	}
	template <typename T = bool> T UseSkydivingCommonCamera() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DD48F4))(this);
	}
	template <typename T = void> T Possess(uintptr_t inPawn) {
		return ((T (*)(PlayerController*, uintptr_t))(Il2CppBase() + 0x1DD49C4))(this, inPawn);
	}
	template <typename T = void> T Restart() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DD4B5C))(this);
	}
	template <typename T = uintptr_t> T get_SpectatingTarget() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DAF2B4))(this);
	}
	template <typename T = uintptr_t> T get_SpectatingTargetInfo() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DD4DDC))(this);
	}
	template <typename T = bool> T get_IsSpectating() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DA00C0))(this);
	}
	template <typename T = void> T set_IsSpectating(bool value) {
		return ((T (*)(PlayerController*, bool))(Il2CppBase() + 0x1DD4EBC))(this, value);
	}
	template <typename T = float> T get_LastSetSpectatingTime() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DD4EC4))(this);
	}
	template <typename T = uintptr_t> T get_SpectatingMode() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DAEFB4))(this);
	}
	template <typename T = void> T set_SpectatingMode(uintptr_t value) {
		return ((T (*)(PlayerController*, uintptr_t))(Il2CppBase() + 0x1DD4ECC))(this, value);
	}
	template <typename T = bool> T IsSpectatingPawn(uintptr_t inTarget) {
		return ((T (*)(PlayerController*, uintptr_t))(Il2CppBase() + 0x1DD5378))(this, inTarget);
	}
	template <typename T = void> T OnSpectatingTargetDied() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DD5508))(this);
	}
	template <typename T = void> T StartSpectating() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DD5678))(this);
	}
	template <typename T = void> T StartSpectatingById(uint32_t playerId) {
		return ((T (*)(PlayerController*, uint32_t))(Il2CppBase() + 0x1DD58E8))(this, playerId);
	}
	template <typename T = void> T EndSpectating() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DD59F4))(this);
	}
	template <typename T = void> T StartObserve() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DD5CA8))(this);
	}
	template <typename T = void> T EndObserve() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DD6498))(this);
	}
	template <typename T = void> T StartObserve_DeadReplay() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DD6574))(this);
	}
	template <typename T = void> T StartObserve_CarePackage(uintptr_t target) {
		return ((T (*)(PlayerController*, uintptr_t))(Il2CppBase() + 0x1DD6654))(this, target);
	}
	template <typename T = void> T EndObserve_CarePackage() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DD67E8))(this);
	}
	template <typename T = void> T StartObserve_SpecialTarget(uintptr_t target) {
		return ((T (*)(PlayerController*, uintptr_t))(Il2CppBase() + 0x1DD68C4))(this, target);
	}
	template <typename T = void> T EndObserve_SpecialTarget() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DD6A58))(this);
	}
	template <typename T = void> T StartObserve_DestructibleSceneObject(uintptr_t target) {
		return ((T (*)(PlayerController*, uintptr_t))(Il2CppBase() + 0x1DD6B34))(this, target);
	}
	template <typename T = void> T EndObserve_DestructibleSceneObject() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DD6CC8))(this);
	}
	template <typename T = void> T Delay1PFireObserve_Projectile(uintptr_t projectile) {
		return ((T (*)(PlayerController*, uintptr_t))(Il2CppBase() + 0x1DD6DA4))(this, projectile);
	}
	template <typename T = void> T Do1PFireObserve_Projectile() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DD6EF4))(this);
	}
	template <typename T = void> T End1PFireObserve_Projectile() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DD7478))(this);
	}
	template <typename T = void> T StartObserve_Aircraft(uintptr_t aircraftTrans, Il2CppQuaternion rotation) {
		return ((T (*)(PlayerController*, uintptr_t, Il2CppQuaternion))(Il2CppBase() + 0x1DD7804))(this, aircraftTrans, rotation);
	}
	template <typename T = void> T EndObserve_Aircraft() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DD7930))(this);
	}
	template <typename T = void> T DoStartObserve(uintptr_t inSpectatingMode) {
		return ((T (*)(PlayerController*, uintptr_t))(Il2CppBase() + 0x1DD5DEC))(this, inSpectatingMode);
	}
	template <typename T = void> T SetObserveFOV() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DD7A04))(this);
	}
	template <typename T = void> T OnFreeViewSpectatingStart() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DD50C0))(this);
	}
	template <typename T = void> T OnFreeViewSpectatingEnd() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DD5260))(this);
	}
	template <typename T = void> T ViewNextPlayer() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DD5804))(this);
	}
	template <typename T = void> T ViewPrePlayer() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DD7FA0))(this);
	}
	template <typename T = void> T ViewLastPlayer() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DD7BE0))(this);
	}
	template <typename T = bool> T CheckViewPlayerById(uint32_t playerId, bool checkCD, bool checkTarget) {
		return ((T (*)(PlayerController*, uint32_t, bool, bool))(Il2CppBase() + 0x1DD8084))(this, playerId, checkCD, checkTarget);
	}
	template <typename T = void> T ViewPlayerById(uint32_t playerId, bool checkCD, bool checkTarget) {
		return ((T (*)(PlayerController*, uint32_t, bool, bool))(Il2CppBase() + 0x1DD8418))(this, playerId, checkCD, checkTarget);
	}
	template <typename T = void> T ViewNextPlayerWithDir(int32_t dir) {
		return ((T (*)(PlayerController*, int32_t))(Il2CppBase() + 0x1DD7CE4))(this, dir);
	}
	template <typename T = void> T ClearSpectatingTarget() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DD5BC4))(this);
	}
	template <typename T = void> T SetSpectatingTarget(uintptr_t value) {
		return ((T (*)(PlayerController*, uintptr_t))(Il2CppBase() + 0x1DD88A0))(this, value);
	}
	template <typename T = bool> T IsCanUse3PView(uintptr_t target) {
		return ((T (*)(PlayerController*, uintptr_t))(Il2CppBase() + 0x1DD93D4))(this, target);
	}
	template <typename T = bool> T IsCanUse1PView(uintptr_t target) {
		return ((T (*)(PlayerController*, uintptr_t))(Il2CppBase() + 0x1DD9588))(this, target);
	}
	template <typename T = void> T CheckNewTargetSpectatorMode(uintptr_t newTarget) {
		return ((T (*)(PlayerController*, uintptr_t))(Il2CppBase() + 0x1DD97E8))(this, newTarget);
	}
	template <typename T = void> T OnReset_Spectating() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DD9C04))(this);
	}
	template <typename T = void> T SpectatingTick() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DB8E9C))(this);
	}
	template <typename T = bool> T IsNeedSpectatingTick() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DD9CD8))(this);
	}
	template <typename T = void> T VerifySpectatingTarget() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DDA054))(this);
	}
	template <typename T = void> T VerifySpectatingListener() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DDAA04))(this);
	}
	template <typename T = void> T VerifySpectating3P() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DDA7D4))(this);
	}
	template <typename T = void> T VerifySpectating1P() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DDA638))(this);
	}
	template <typename T = void> T AutoFindSpectateTarget() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DDA4EC))(this);
	}
	template <typename T = void> T BindLoaclPawnOnFreeView() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DDA1E4))(this);
	}
	template <typename T = bool> T CheckSetSpectateTargetCD() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DD830C))(this);
	}
	template <typename T = bool> T CheckSpectateTarget(uintptr_t newTarget, bool checkCd) {
		return ((T (*)(PlayerController*, uintptr_t, bool))(Il2CppBase() + 0x1DD85A8))(this, newTarget, checkCd);
	}
	template <typename T = bool> T SwitchSpectatingMode() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DDAADC))(this);
	}
	template <typename T = void> T ViewPlayer(uint32_t playerID) {
		return ((T (*)(PlayerController*, uint32_t))(Il2CppBase() + 0x1DDACEC))(this, playerID);
	}
	template <typename T = bool> T CanStartSpectating() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DDAFB0))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetSpectatingTargetList() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DDB108))(this);
	}
	template <typename T = bool> T AllowRotateWhenSpectating() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DDB27C))(this);
	}
	template <typename T = bool> T ShoudGoToSpectatingAfterDead() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DDB3D0))(this);
	}
	template <typename T = void> T CalcSpectatingDeathCamera(uintptr_t out_CamLoc, uintptr_t out_CamRot) {
		return ((T (*)(PlayerController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DAF2BC))(this, out_CamLoc, out_CamRot);
	}
	template <typename T = void> T CalcSpectatingCamera(uintptr_t out_CamLoc, uintptr_t out_CamRot) {
		return ((T (*)(PlayerController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DAF9A8))(this, out_CamLoc, out_CamRot);
	}
	template <typename T = void> T CalcSpectatingCamera_1P(bool isWorldCamera, uintptr_t out_CamLoc, uintptr_t out_CamRot) {
		return ((T (*)(PlayerController*, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DAF66C))(this, isWorldCamera, out_CamLoc, out_CamRot);
	}
	template <typename T = bool> static T ProcessBagInfom__0(uintptr_t _inv) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1DDB6EC))(0, _inv);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DDB7B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DDB7C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitEventProcessor() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DDB7C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(PlayerController*, float))(Il2CppBase() + 0x1DDB7D0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnPawnDie() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DDB7D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Possess(uintptr_t P0) {
		return ((T (*)(PlayerController*, uintptr_t))(Il2CppBase() + 0x1DDB7E0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Restart() {
		return ((T (*)(PlayerController*))(Il2CppBase() + 0x1DDB7E8))(this);
	}

};

}
