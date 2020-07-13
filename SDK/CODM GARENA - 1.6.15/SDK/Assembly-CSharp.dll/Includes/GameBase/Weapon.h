#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class Weapon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "Weapon"));
	}

	template <typename T = bool> T& m_IsFirstPerson() {
		return *(T*)((uintptr_t)this + 0x5B);
	}
	template <typename T = int32_t> T& m_UsingMeshAssetID3P() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& m_UsingMeshAssetID3P_L() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = unsigned char> T& m_RightOrLeft() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& m_SpringFireGetReady() {
		return *(T*)((uintptr_t)this + 0x65);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T& ProjectileDataDic() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SkillStrengthen() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& PAPLevel() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& m_UsingAimedFireParam() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = bool> T& UseADSInDeadReplay() {
		return *(T*)((uintptr_t)this + 0x75);
	}
	template <typename T = uintptr_t> T& m_MuzzleGameObject() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& m_Mesh() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& m_MeshAssetID() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_PrefabConfig() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_OptimizedModel() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppList<void*>*> T& m_ComposePartAssets() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_MeshRenderers() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = unsigned char> static T& MAX_FIRE_MODE_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_FireComponentList() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_ImpactComponentList() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = unsigned char> T& m_CurrentFireMode() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& m_StateMachineComponent() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& m_IsPendingAim() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = bool> T& m_IsSecondaryAttack() {
		return *(T*)((uintptr_t)this + 0xA5);
	}
	template <typename T = int32_t> T& m_ShotFired() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppString*> static T& AudioRTPCOverHeat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& GripPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MAXPRELOADCOUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MAXPREINSTANTIATEASSETCOUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<int32_t>*> T& m_PreLoadAssetList() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = Il2CppList<int32_t>*> T& m_PreInstantiateAssetList() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& m_PreInstantiateAssetTimer() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = int32_t> T& m_StrongFireState() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& m_PlaySpecailUnAiming() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = float> T& m_AimingChangeStartTime() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = float> T& m_AimingTakeTime() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = int32_t> T& m_iRecentlyRenderedFrameID() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = float> T& m_AimingPercentage() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = int32_t> T& m_iRecentlyRenderedFrameID1() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> T& m_AimingAnimationPrecentage() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = bool> T& IsChangedAimingFOV() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = bool> T& m_IsFired() {
		return *(T*)((uintptr_t)this + 0xD9);
	}
	template <typename T = bool> T& m_IsMeleeDirectFire() {
		return *(T*)((uintptr_t)this + 0xDA);
	}
	template <typename T = float> T& CrossHairOriginSize() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = float> T& CrossHairOriginLength() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppString*> T& m_INIPath() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = bool> T& m_AutoSwitchWeaponState() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = float> T& m_LastUpdateAnimingTargetTime() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = bool> T& m_IsHidden() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_AnimTargetImpactList() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_AssistImpactInfoList() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = float> T& m_BeginFireTime() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = float> T& m_StopFireTime() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = float> T& m_StartFireTime() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = float> T& m_DelayStartFireTime() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = float> T& m_BeginSecondaryFireTime() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = float> T& m_StopSecondaryFireTime() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = float> T& m_DelayStartSecondaryFireTime() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = float> static T& m_FireSoundMinInterval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& FireDamageTime() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& m_WeaponFireSound() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = float> T& m_fireSpeed() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = int32_t> T& m_LastShotCost() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = bool> T& m_IsFiring() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = bool> T& m_IsReleaseToFire() {
		return *(T*)((uintptr_t)this + 0x129);
	}
	template <typename T = bool> T& IsPrepareHold() {
		return *(T*)((uintptr_t)this + 0x12A);
	}
	template <typename T = bool> T& m_IsDoubleFOV() {
		return *(T*)((uintptr_t)this + 0x12B);
	}
	template <typename T = Il2CppString*> T& m_WeaponNickName() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> T& m_LastAimedEnemy() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = float> T& m_AimBeginTime() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& m_WeaponTransformAdjusted() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& m_WeaponPartAssetLoader() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = uintptr_t> T& m_WeaponControllerLoader() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& m_WeaponConfig() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = uintptr_t> T& m_HipWeaponData() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = Il2CppList<int32_t>*> T& m_AsyncLoadAssetList() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = uintptr_t> T& m_WeaponLengthChangeCallBackFunc() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& m_DefaultActivateState() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = uintptr_t> T& m_ActivateNextState() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = bool> T& m_IsActivate() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = bool> static T& ResetAnimationEventComponentInDeactivate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_InDeactivate() {
		return *(T*)((uintptr_t)this + 0x15D);
	}
	template <typename T = bool> static T& MPSimplifyController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1);
	}
	template <typename T = bool> static T& TimerInstantiateAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2);
	}
	template <typename T = int32_t> static T& ms_statFireCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> T& m_CurrentAimingTarget() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& m_CurrentAimingEnemy() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = uintptr_t> T& CurCrossHairType() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = bool> T& IsChangeHairType() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = bool> static T& ResetMeshRenererListInDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = bool> static T& ResetPawnWeaponRenerderListInDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9);
	}
	template <typename T = float> T& m_CurrentHotValue() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = bool> T& m_IsOverHot() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = float> T& m_AddHotTime() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> T& m_OverHotEffect() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = float> T& m_CurCoolingDownValue() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = bool> T& m_IsCoolingDown() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = float> T& refreshHotMatTime() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = float> T& LastPunchAngleByHitTime() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = float> T& PunchAngleHitInterval() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& m_MirrorTransform() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = Il2CppString*> T& m_LeftHandCenterName() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = uintptr_t> T& m_LeftHandCenterTrans() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = float> T& m_AutoFireLastCaptureTargetTime() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& mWunderWaffeElectricManage() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = bool> T& isGetWunderWaffeElectricManage() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = bool> T& m_IsPickUpGrenade() {
		return *(T*)((uintptr_t)this + 0x1A9);
	}
	template <typename T = bool> T& m_IsThrowOutPickUpGrenade() {
		return *(T*)((uintptr_t)this + 0x1AA);
	}
	template <typename T = uintptr_t> T& m_PickUpGrenadeProjectile() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = bool> T& m_IsInBRThrowWeaponFireState() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = bool> T& m_IsThrowWeaponHoldFireEnd() {
		return *(T*)((uintptr_t)this + 0x1B1);
	}
	template <typename T = bool> T& m_IsHoldFireGrenade() {
		return *(T*)((uintptr_t)this + 0x1B2);
	}
	template <typename T = bool> T& m_CancelThrowingWeapon() {
		return *(T*)((uintptr_t)this + 0x1B3);
	}
	template <typename T = bool> static T& EndSwimStopFPIKSoft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA);
	}
	template <typename T = uintptr_t> T& m_CurrentFittingDiaoPaiForceMove() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = float> static T& ResolveShakingScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = bool> T& m_IsTickResetBoneRightHand() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = float> static T& DelayStopResetBoneRightHandTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = float> T& m_TickResetBoneRightHandToStopTime() {
		return *(T*)((uintptr_t)this + 0x1BC);
	}
	template <typename T = bool> static T& DoRefreshInternalBoneRightHandRendererState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = bool> static T& DoRefreshInternalBoneRightHandRendererStateOnlyCheckPVE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15);
	}
	template <typename T = uintptr_t> T& m_CacheBoneRightHand() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = bool> T& m_CanFireInChangeClip() {
		return *(T*)((uintptr_t)this + 0x1C4);
	}
	template <typename T = bool> T& m_ForceAutoChangeClip() {
		return *(T*)((uintptr_t)this + 0x1C5);
	}
	template <typename T = bool> T& IsEnterFireBolt() {
		return *(T*)((uintptr_t)this + 0x1C6);
	}
	template <typename T = float> T& mLeftFireBoltTime() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = float> T& m_lastTime() {
		return *(T*)((uintptr_t)this + 0x1CC);
	}
	template <typename T = bool> T& IsDelayStartFire() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = uintptr_t> T& m_AnimationComponent() {
		return *(T*)((uintptr_t)this + 0x1D4);
	}
	template <typename T = bool> static T& FPModeOpenAimUseFadeTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x16);
	}
	template <typename T = bool> static T& PlayAimingCameraAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x17);
	}
	template <typename T = uintptr_t> T& m_FPAimIKController() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = float> static T& m_AimStopSwimIKSoftTransitionTimeFactor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = float> T& m_SpeedPercentLerp() {
		return *(T*)((uintptr_t)this + 0x1DC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& clipTypeArr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> T& m_CameraAnim() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = uintptr_t> static T& m_DefaultCameraAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> T& m_PrimaryAnimatorController() {
		return *(T*)((uintptr_t)this + 0x1E4);
	}
	template <typename T = uintptr_t> T& m_SecondaryAnimatorController() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = uintptr_t> T& m_CurrentRuntimeAnimatorController() {
		return *(T*)((uintptr_t)this + 0x1EC);
	}
	template <typename T = int32_t> T& m_CurrentWeaponControllerId() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = uintptr_t> T& m_WeaponAnimationEvent() {
		return *(T*)((uintptr_t)this + 0x1F4);
	}
	template <typename T = float> T& m_LastAimingCamStopTime() {
		return *(T*)((uintptr_t)this + 0x1F8);
	}
	template <typename T = float> T& m_MoveCameraAnimationNextCheckTime() {
		return *(T*)((uintptr_t)this + 0x1FC);
	}
	template <typename T = uintptr_t> T& m_PlayingCameraAnimType() {
		return *(T*)((uintptr_t)this + 0x200);
	}
	template <typename T = float> T& m_CurrentCameraAnimPlayEndTime() {
		return *(T*)((uintptr_t)this + 0x204);
	}
	template <typename T = uintptr_t> T& m_WantCameraAnimType() {
		return *(T*)((uintptr_t)this + 0x208);
	}
	template <typename T = float> T& m_WantCameraAnimSpeed() {
		return *(T*)((uintptr_t)this + 0x20C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mPengingCameraShakerList() {
		return *(T*)((uintptr_t)this + 0x210);
	}
	template <typename T = bool> static T& ForceGetWeaponAnimationEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = bool> T& m_AnimationEventCallBackEnable() {
		return *(T*)((uintptr_t)this + 0x214);
	}
	template <typename T = float> T& lastPlayTime() {
		return *(T*)((uintptr_t)this + 0x218);
	}
	template <typename T = float> T& TIME_INTERVALS() {
		return *(T*)((uintptr_t)this + 0x21C);
	}
	template <typename T = float> T& m_BRClimbAnimTime() {
		return *(T*)((uintptr_t)this + 0x220);
	}
	template <typename T = Il2CppVector3> T& m_BRBagHangPointOffsetPos_L() {
		return *(T*)((uintptr_t)this + 0x224);
	}
	template <typename T = Il2CppVector3> T& m_BRBagHangPointOffsetAngle_L() {
		return *(T*)((uintptr_t)this + 0x230);
	}
	template <typename T = Il2CppVector3> T& m_BRBagHangPointOffsetPos_R() {
		return *(T*)((uintptr_t)this + 0x23C);
	}
	template <typename T = Il2CppVector3> T& m_BRBagHangPointOffsetAngle_R() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = Il2CppVector3> T& m_BRBagHangPointOffsetPos_L_Female() {
		return *(T*)((uintptr_t)this + 0x254);
	}
	template <typename T = Il2CppVector3> T& m_BRBagHangPointOffsetAngle_L_Female() {
		return *(T*)((uintptr_t)this + 0x260);
	}
	template <typename T = Il2CppVector3> T& m_BRBagHangPointOffsetPos_R_Female() {
		return *(T*)((uintptr_t)this + 0x26C);
	}
	template <typename T = Il2CppVector3> T& m_BRBagHangPointOffsetAngle_R_Female() {
		return *(T*)((uintptr_t)this + 0x278);
	}
	template <typename T = uintptr_t> T& m_Mesh1P() {
		return *(T*)((uintptr_t)this + 0x284);
	}
	template <typename T = uintptr_t> T& m_Mesh3P() {
		return *(T*)((uintptr_t)this + 0x288);
	}
	template <typename T = uintptr_t> T& m_RuntimeAnimatorController3P() {
		return *(T*)((uintptr_t)this + 0x28C);
	}
	template <typename T = Il2CppString*> T& m_ActorType() {
		return *(T*)((uintptr_t)this + 0x290);
	}
	template <typename T = Il2CppString*> T& m_ActorType_3P() {
		return *(T*)((uintptr_t)this + 0x294);
	}
	template <typename T = Il2CppString*> T& m_AttachmentSocketName() {
		return *(T*)((uintptr_t)this + 0x298);
	}
	template <typename T = Il2CppString*> T& m_AttachmentSocketName_L() {
		return *(T*)((uintptr_t)this + 0x29C);
	}
	template <typename T = uintptr_t> T& m_StateMachineType() {
		return *(T*)((uintptr_t)this + 0x2A0);
	}
	template <typename T = uintptr_t> T& m_FireComponentType() {
		return *(T*)((uintptr_t)this + 0x2A4);
	}
	template <typename T = uintptr_t> T& m_ImpactComponentType() {
		return *(T*)((uintptr_t)this + 0x2A8);
	}
	template <typename T = uintptr_t> T& m_SecondaryImpactComponentType() {
		return *(T*)((uintptr_t)this + 0x2AC);
	}
	template <typename T = uintptr_t> T& m_FireSoundLogicType() {
		return *(T*)((uintptr_t)this + 0x2B0);
	}
	template <typename T = uintptr_t> T& m_SecondaryFireComponentType() {
		return *(T*)((uintptr_t)this + 0x2B4);
	}
	template <typename T = bool> T& m_SecondaryFireNeedsSwitch() {
		return *(T*)((uintptr_t)this + 0x2B8);
	}
	template <typename T = uintptr_t> T& m_ThirdFireComponentType() {
		return *(T*)((uintptr_t)this + 0x2BC);
	}
	template <typename T = uintptr_t> T& m_ThirdImpactComponentType() {
		return *(T*)((uintptr_t)this + 0x2C0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_MuzzleFlashSocketName() {
		return *(T*)((uintptr_t)this + 0x2C4);
	}
	template <typename T = int32_t> T& m_MuzzleFlashChargingAssetID1P() {
		return *(T*)((uintptr_t)this + 0x2C8);
	}
	template <typename T = int32_t> T& m_MuzzleFlashAssetID1P() {
		return *(T*)((uintptr_t)this + 0x2CC);
	}
	template <typename T = int32_t> T& m_MuzzleFlashAssetID3P() {
		return *(T*)((uintptr_t)this + 0x2D0);
	}
	template <typename T = int32_t> T& m_MuzzleFlashToHipAssetID1P() {
		return *(T*)((uintptr_t)this + 0x2D4);
	}
	template <typename T = int32_t> T& m_MuzzleFlashToHipAssetID3P() {
		return *(T*)((uintptr_t)this + 0x2D8);
	}
	template <typename T = int32_t> T& m_SpecialUnAimingEffectAssetID1P() {
		return *(T*)((uintptr_t)this + 0x2DC);
	}
	template <typename T = Il2CppString*> T& m_ShellDropSocketName() {
		return *(T*)((uintptr_t)this + 0x2E0);
	}
	template <typename T = int32_t> T& m_ShellDropAssetID1P() {
		return *(T*)((uintptr_t)this + 0x2E4);
	}
	template <typename T = int32_t> T& m_ShellDropAssetID3P() {
		return *(T*)((uintptr_t)this + 0x2E8);
	}
	template <typename T = int32_t> T& m_MeshAssetID1P() {
		return *(T*)((uintptr_t)this + 0x2EC);
	}
	template <typename T = int32_t> T& m_MeshAssetID3P() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = int32_t> T& m_MeshAssetID3P_L() {
		return *(T*)((uintptr_t)this + 0x2F4);
	}
	template <typename T = int32_t> T& m_FemaleMeshAssetID3P() {
		return *(T*)((uintptr_t)this + 0x2F8);
	}
	template <typename T = int32_t> T& m_FemaleMeshAssetID3P_L() {
		return *(T*)((uintptr_t)this + 0x2FC);
	}
	template <typename T = bool> T& m_UseBigCrossHair() {
		return *(T*)((uintptr_t)this + 0x300);
	}
	template <typename T = bool> T& m_UseBigCrossHair_3D() {
		return *(T*)((uintptr_t)this + 0x301);
	}
	template <typename T = bool> T& m_UseVTOLCrossHair() {
		return *(T*)((uintptr_t)this + 0x302);
	}
	template <typename T = bool> T& m_UseGrappleGunCrossHair() {
		return *(T*)((uintptr_t)this + 0x303);
	}
	template <typename T = bool> T& m_UseSparrowCrossHair() {
		return *(T*)((uintptr_t)this + 0x304);
	}
	template <typename T = bool> T& m_UseTempestCrossHair() {
		return *(T*)((uintptr_t)this + 0x305);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_SkinID_Sight() {
		return *(T*)((uintptr_t)this + 0x308);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_SkinID_Sto() {
		return *(T*)((uintptr_t)this + 0x30C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_SkinID_Iro() {
		return *(T*)((uintptr_t)this + 0x310);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_SkinID_Rai() {
		return *(T*)((uintptr_t)this + 0x314);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_SkinID_Grip() {
		return *(T*)((uintptr_t)this + 0x318);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_SkinID_Muzzle() {
		return *(T*)((uintptr_t)this + 0x31C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_SkinID_Mag() {
		return *(T*)((uintptr_t)this + 0x320);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_SkinID_MainWeaponRoot() {
		return *(T*)((uintptr_t)this + 0x324);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_UnuseModeAttachment() {
		return *(T*)((uintptr_t)this + 0x328);
	}
	template <typename T = float> T& m_BasicBulletTrackThickness() {
		return *(T*)((uintptr_t)this + 0x32C);
	}
	template <typename T = float> T& m_BulletTrackInterval() {
		return *(T*)((uintptr_t)this + 0x330);
	}
	template <typename T = int32_t> T& m_BulletTrackAssetID() {
		return *(T*)((uintptr_t)this + 0x334);
	}
	template <typename T = int32_t> T& m_BulletTrack3PAssetID() {
		return *(T*)((uintptr_t)this + 0x338);
	}
	template <typename T = bool> T& m_BulletFlyTrack() {
		return *(T*)((uintptr_t)this + 0x33C);
	}
	template <typename T = bool> T& m_IsCameraShake() {
		return *(T*)((uintptr_t)this + 0x33D);
	}
	template <typename T = bool> T& m_ForceSetFireAnimSpeed() {
		return *(T*)((uintptr_t)this + 0x33E);
	}
	template <typename T = float> T& m_UnequipHideTimeRate() {
		return *(T*)((uintptr_t)this + 0x340);
	}
	template <typename T = float> T& m_StopMoveCameraShakeSoftTime() {
		return *(T*)((uintptr_t)this + 0x344);
	}
	template <typename T = bool> T& m_AutoThrowWeaponAfterFire() {
		return *(T*)((uintptr_t)this + 0x348);
	}
	template <typename T = bool> T& m_CanAutoSwitchWeaponConfig() {
		return *(T*)((uintptr_t)this + 0x349);
	}
	template <typename T = float> T& m_SwimLeftHandTranstionTime() {
		return *(T*)((uintptr_t)this + 0x34C);
	}
	template <typename T = float> T& m_DoChangeClipTimeRate() {
		return *(T*)((uintptr_t)this + 0x350);
	}
	template <typename T = bool> static T& UseChangeClipTimeRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x25);
	}
	template <typename T = bool> T& m_IdleStateEnable() {
		return *(T*)((uintptr_t)this + 0x354);
	}
	template <typename T = int32_t> T& m_WeaponShakeRecoilID() {
		return *(T*)((uintptr_t)this + 0x358);
	}
	template <typename T = int32_t> T& m_WeaponShakeRecoilClose() {
		return *(T*)((uintptr_t)this + 0x35C);
	}
	template <typename T = float> T& m_SwimZoomOffset() {
		return *(T*)((uintptr_t)this + 0x360);
	}
	template <typename T = bool> T& m_IsHoldingAssitance() {
		return *(T*)((uintptr_t)this + 0x364);
	}
	template <typename T = bool> T& m_AllowSpecailUnAiming() {
		return *(T*)((uintptr_t)this + 0x365);
	}
	template <typename T = bool> T& m_PlayUnAimingFireAfterFireAiming() {
		return *(T*)((uintptr_t)this + 0x366);
	}
	template <typename T = bool> T& m_ForceSpecailUnAiming() {
		return *(T*)((uintptr_t)this + 0x367);
	}
	template <typename T = float> T& m_FatalBlowProbability() {
		return *(T*)((uintptr_t)this + 0x368);
	}
	template <typename T = float> T& m_FatalBlowAddHP() {
		return *(T*)((uintptr_t)this + 0x36C);
	}
	template <typename T = bool> T& m_HoldDoubleClickAim() {
		return *(T*)((uintptr_t)this + 0x370);
	}
	template <typename T = bool> T& m_SupportAimedFire() {
		return *(T*)((uintptr_t)this + 0x371);
	}
	template <typename T = bool> T& m_SupportHipFire() {
		return *(T*)((uintptr_t)this + 0x372);
	}
	template <typename T = float> T& m_DelaySprintFire() {
		return *(T*)((uintptr_t)this + 0x374);
	}
	template <typename T = bool> T& m_SwichLastWeapon() {
		return *(T*)((uintptr_t)this + 0x378);
	}
	template <typename T = float> T& m_AimAssitanceDelay() {
		return *(T*)((uintptr_t)this + 0x37C);
	}
	template <typename T = bool> T& m_UsePlayTricky() {
		return *(T*)((uintptr_t)this + 0x380);
	}
	template <typename T = bool> T& m_SpeedThrowWithNoEquip() {
		return *(T*)((uintptr_t)this + 0x381);
	}
	template <typename T = bool> T& m_SwimFireLeftHandHoldWeapon() {
		return *(T*)((uintptr_t)this + 0x382);
	}
	template <typename T = bool> T& m_IsCloseAimAfterSingleFire() {
		return *(T*)((uintptr_t)this + 0x383);
	}
	template <typename T = bool> T& m_CanAutoFire() {
		return *(T*)((uintptr_t)this + 0x384);
	}
	template <typename T = float> T& m_RecoilScaleWeaponShake() {
		return *(T*)((uintptr_t)this + 0x388);
	}
	template <typename T = float> T& m_CameraFOV() {
		return *(T*)((uintptr_t)this + 0x38C);
	}
	template <typename T = bool> T& IsUseCustonFov() {
		return *(T*)((uintptr_t)this + 0x390);
	}
	template <typename T = float> T& m_SwitchTime() {
		return *(T*)((uintptr_t)this + 0x394);
	}
	template <typename T = float> T& m_GetReadyTime() {
		return *(T*)((uintptr_t)this + 0x398);
	}
	template <typename T = float> T& m_UnAimingTime() {
		return *(T*)((uintptr_t)this + 0x39C);
	}
	template <typename T = float> T& m_AimingTime() {
		return *(T*)((uintptr_t)this + 0x3A0);
	}
	template <typename T = float> T& m_MaxHotValue() {
		return *(T*)((uintptr_t)this + 0x3A4);
	}
	template <typename T = float> T& m_CoolDownSpeed() {
		return *(T*)((uintptr_t)this + 0x3A8);
	}
	template <typename T = float> T& m_HotSpeed() {
		return *(T*)((uintptr_t)this + 0x3AC);
	}
	template <typename T = float> T& m_CoolDownCDTime() {
		return *(T*)((uintptr_t)this + 0x3B0);
	}
	template <typename T = float> T& m_OverHotCDTime() {
		return *(T*)((uintptr_t)this + 0x3B4);
	}
	template <typename T = float> T& m_Deceleration() {
		return *(T*)((uintptr_t)this + 0x3B8);
	}
	template <typename T = float> T& m_DecelerationDuration() {
		return *(T*)((uintptr_t)this + 0x3BC);
	}
	template <typename T = Il2CppString*> T& m_WeaponIconName() {
		return *(T*)((uintptr_t)this + 0x3C0);
	}
	template <typename T = Il2CppString*> T& m_WeaponKillIconName() {
		return *(T*)((uintptr_t)this + 0x3C4);
	}
	template <typename T = Il2CppString*> T& m_WeaponLineIconName() {
		return *(T*)((uintptr_t)this + 0x3C8);
	}
	template <typename T = Il2CppString*> T& m_FireButtonIconName() {
		return *(T*)((uintptr_t)this + 0x3CC);
	}
	template <typename T = bool> T& m_IgnoreSyncServer() {
		return *(T*)((uintptr_t)this + 0x3D0);
	}
	template <typename T = float> T& m_DblclickDelay() {
		return *(T*)((uintptr_t)this + 0x3D4);
	}
	template <typename T = float> T& m_DblclickAnimTime() {
		return *(T*)((uintptr_t)this + 0x3D8);
	}
	template <typename T = float> T& m_AimingWorldFOV() {
		return *(T*)((uintptr_t)this + 0x3DC);
	}
	template <typename T = float> T& m_AimingWorldFOVOpenTime() {
		return *(T*)((uintptr_t)this + 0x3E0);
	}
	template <typename T = float> T& m_AimingCameraAddRotateRate() {
		return *(T*)((uintptr_t)this + 0x3E4);
	}
	template <typename T = float> T& m_AimingToFireInterval() {
		return *(T*)((uintptr_t)this + 0x3E8);
	}
	template <typename T = bool> T& m_IsPlayAiming() {
		return *(T*)((uintptr_t)this + 0x3EC);
	}
	template <typename T = bool> T& m_IsAiming() {
		return *(T*)((uintptr_t)this + 0x3ED);
	}
	template <typename T = float> T& m_MovementScale() {
		return *(T*)((uintptr_t)this + 0x3F0);
	}
	template <typename T = float> T& m_SprintMovementScale() {
		return *(T*)((uintptr_t)this + 0x3F4);
	}
	template <typename T = float> T& m_CrouchingSprintSpeedScale() {
		return *(T*)((uintptr_t)this + 0x3F8);
	}
	template <typename T = float> T& m_CrouchingSpeedScale() {
		return *(T*)((uintptr_t)this + 0x3FC);
	}
	template <typename T = float> T& m_ProneSpeedScale() {
		return *(T*)((uintptr_t)this + 0x400);
	}
	template <typename T = float> T& m_DyingSpeedScale() {
		return *(T*)((uintptr_t)this + 0x404);
	}
	template <typename T = float> T& m_AimingMovementScale() {
		return *(T*)((uintptr_t)this + 0x408);
	}
	template <typename T = float> T& m_AimingCrouchMovementScale() {
		return *(T*)((uintptr_t)this + 0x40C);
	}
	template <typename T = float> T& m_PenetrationValue() {
		return *(T*)((uintptr_t)this + 0x410);
	}
	template <typename T = float> T& m_CrosshairLength() {
		return *(T*)((uintptr_t)this + 0x414);
	}
	template <typename T = float> T& m_CrosshairSize() {
		return *(T*)((uintptr_t)this + 0x418);
	}
	template <typename T = bool> T& m_EnableAimingCrosshair() {
		return *(T*)((uintptr_t)this + 0x41C);
	}
	template <typename T = float> T& m_AimingCrosshairLengthRatio() {
		return *(T*)((uintptr_t)this + 0x420);
	}
	template <typename T = float> T& m_AimingCrosshairSizeRatio() {
		return *(T*)((uintptr_t)this + 0x424);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_BOT_BasicAccuracyRange() {
		return *(T*)((uintptr_t)this + 0x428);
	}
	template <typename T = Il2CppVector2> T& m_BOT_AdditionalFire() {
		return *(T*)((uintptr_t)this + 0x42C);
	}
	template <typename T = float> T& m_BOT_AimSpeed() {
		return *(T*)((uintptr_t)this + 0x434);
	}
	template <typename T = Il2CppVector2> T& m_BOT_WaitForShootingTime() {
		return *(T*)((uintptr_t)this + 0x438);
	}
	template <typename T = Il2CppVector2> T& m_BOT_FireDuration() {
		return *(T*)((uintptr_t)this + 0x440);
	}
	template <typename T = float> T& m_BOT_HeadShotRatio() {
		return *(T*)((uintptr_t)this + 0x448);
	}
	template <typename T = float> T& m_BOT_TraceRangeMin() {
		return *(T*)((uintptr_t)this + 0x44C);
	}
	template <typename T = float> T& m_BOT_TraceRangeMax() {
		return *(T*)((uintptr_t)this + 0x450);
	}
	template <typename T = Il2CppVector2> T& m_BOT_ZM_WaitForShootingTime() {
		return *(T*)((uintptr_t)this + 0x454);
	}
	template <typename T = Il2CppVector2> T& m_BOT_ZM_FireDuration() {
		return *(T*)((uintptr_t)this + 0x45C);
	}
	template <typename T = float> T& m_BOT_ZM_HeadShotRatio() {
		return *(T*)((uintptr_t)this + 0x464);
	}
	template <typename T = float> T& m_WeaponBobRate() {
		return *(T*)((uintptr_t)this + 0x468);
	}
	template <typename T = float> T& m_WeaponBobRange() {
		return *(T*)((uintptr_t)this + 0x46C);
	}
	template <typename T = float> T& m_StartFireInterval() {
		return *(T*)((uintptr_t)this + 0x470);
	}
	template <typename T = float> T& m_StopFireInterval() {
		return *(T*)((uintptr_t)this + 0x474);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_HitBuffs() {
		return *(T*)((uintptr_t)this + 0x478);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_PawnBuffs() {
		return *(T*)((uintptr_t)this + 0x47C);
	}
	template <typename T = int32_t> T& m_ParentItemId() {
		return *(T*)((uintptr_t)this + 0x480);
	}
	template <typename T = bool> T& m_UseInUlt() {
		return *(T*)((uintptr_t)this + 0x484);
	}
	template <typename T = float> T& m_AutoFireDistance() {
		return *(T*)((uintptr_t)this + 0x488);
	}
	template <typename T = bool> T& m_HasOpticsAvatarChange() {
		return *(T*)((uintptr_t)this + 0x48C);
	}
	template <typename T = float> T& m_ChangePercent_1PMode_Open() {
		return *(T*)((uintptr_t)this + 0x490);
	}
	template <typename T = float> T& m_ChangePercent_1PMode_Close() {
		return *(T*)((uintptr_t)this + 0x494);
	}
	template <typename T = float> T& m_WeaponAimModifyPercent() {
		return *(T*)((uintptr_t)this + 0x498);
	}
	template <typename T = float> T& m_AimingFireAnimPercent() {
		return *(T*)((uintptr_t)this + 0x49C);
	}
	template <typename T = bool> T& m_IsOpenPVEAssistAimRotateTimeAiming() {
		return *(T*)((uintptr_t)this + 0x4A0);
	}
	template <typename T = float> T& m_AutoAssistAimRatesAiming() {
		return *(T*)((uintptr_t)this + 0x4A4);
	}
	template <typename T = float> T& m_AutoLockTime() {
		return *(T*)((uintptr_t)this + 0x4A8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_AutoAssistAimRates_Controller() {
		return *(T*)((uintptr_t)this + 0x4AC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_AutoAssistAimRates() {
		return *(T*)((uintptr_t)this + 0x4B0);
	}
	template <typename T = float> T& m_MagAssitAimOffDis() {
		return *(T*)((uintptr_t)this + 0x4B4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_AutoAssistAimRanges_Controller() {
		return *(T*)((uintptr_t)this + 0x4B8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_AutoAssistAimRanges() {
		return *(T*)((uintptr_t)this + 0x4BC);
	}
	template <typename T = bool> T& m_Nonlinearity() {
		return *(T*)((uintptr_t)this + 0x4C0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_FireRadiusDis_Controller() {
		return *(T*)((uintptr_t)this + 0x4C4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_FireRadiusDis() {
		return *(T*)((uintptr_t)this + 0x4C8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_FireRadiusLength_Controller() {
		return *(T*)((uintptr_t)this + 0x4CC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_FireRadiusLength() {
		return *(T*)((uintptr_t)this + 0x4D0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_FireRadiusWidth_Controller() {
		return *(T*)((uintptr_t)this + 0x4D4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_FireRadiusWidth() {
		return *(T*)((uintptr_t)this + 0x4D8);
	}
	template <typename T = float> T& m_AimTargetOffset() {
		return *(T*)((uintptr_t)this + 0x4DC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_DampAssitAimRateFactor_Controller() {
		return *(T*)((uintptr_t)this + 0x4E0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_DampAssitAimRateFactor() {
		return *(T*)((uintptr_t)this + 0x4E4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_MinDampAssitAimRateFactor() {
		return *(T*)((uintptr_t)this + 0x4E8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_MaxDampAssitAimRateFactor() {
		return *(T*)((uintptr_t)this + 0x4EC);
	}
	template <typename T = bool> T& m_IsDampAssitAimRateNonlinearity() {
		return *(T*)((uintptr_t)this + 0x4F0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_AssistAimRotateTime_Controller() {
		return *(T*)((uintptr_t)this + 0x4F4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_AssistAimRotateTime() {
		return *(T*)((uintptr_t)this + 0x4F8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_MagnAssitAimRateFactor_Controller() {
		return *(T*)((uintptr_t)this + 0x4FC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_MagnAssitAimRateFactor() {
		return *(T*)((uintptr_t)this + 0x500);
	}
	template <typename T = Il2CppString*> T& m_WeaponShakeAroundPointParent() {
		return *(T*)((uintptr_t)this + 0x504);
	}
	template <typename T = Il2CppVector3> T& m_WeaponShakeAroundPointOffset() {
		return *(T*)((uintptr_t)this + 0x508);
	}
	template <typename T = Il2CppVector3> T& m_WeaponShakeVerticalAroundPointOffset() {
		return *(T*)((uintptr_t)this + 0x514);
	}
	template <typename T = Il2CppString*> T& m_WeaponShakeAroundAimPointParent() {
		return *(T*)((uintptr_t)this + 0x520);
	}
	template <typename T = Il2CppVector3> T& m_WeaponShakeAroundAimPointOffset() {
		return *(T*)((uintptr_t)this + 0x524);
	}
	template <typename T = Il2CppVector3> T& m_WeaponShakeVerticalAimAroundPointOffset() {
		return *(T*)((uintptr_t)this + 0x530);
	}
	template <typename T = bool> T& m_PVEWeaponSingleHud() {
		return *(T*)((uintptr_t)this + 0x53C);
	}
	template <typename T = bool> T& m_InfiniteWeaponAmmo() {
		return *(T*)((uintptr_t)this + 0x53D);
	}
	template <typename T = Il2CppString*> T& m_WeaponSelfAniComponentType() {
		return *(T*)((uintptr_t)this + 0x540);
	}
	template <typename T = bool> T& m_UseHandOffsetPose() {
		return *(T*)((uintptr_t)this + 0x544);
	}
	template <typename T = bool> T& m_HasSecondaryFireAnim() {
		return *(T*)((uintptr_t)this + 0x545);
	}
	template <typename T = bool> T& m_IsNeedAdsFire() {
		return *(T*)((uintptr_t)this + 0x546);
	}
	template <typename T = float> T& m_DelayHideThrowLine() {
		return *(T*)((uintptr_t)this + 0x548);
	}
	template <typename T = float> T& m_DelayHideFastThrowLine() {
		return *(T*)((uintptr_t)this + 0x54C);
	}
	template <typename T = float> T& m_DelayFastFireElapseScale() {
		return *(T*)((uintptr_t)this + 0x550);
	}
	template <typename T = float> T& m_DelayFireElapseScale1P() {
		return *(T*)((uintptr_t)this + 0x554);
	}
	template <typename T = float> T& m_DelayFireElapseScale3P() {
		return *(T*)((uintptr_t)this + 0x558);
	}
	template <typename T = bool> T& m_IsShowHoldLine() {
		return *(T*)((uintptr_t)this + 0x55C);
	}
	template <typename T = bool> T& m_IsNeedFastThrow() {
		return *(T*)((uintptr_t)this + 0x55D);
	}
	template <typename T = bool> T& m_UseSlowWalk() {
		return *(T*)((uintptr_t)this + 0x55E);
	}
	template <typename T = bool> T& m_UseMeleeSingleFire() {
		return *(T*)((uintptr_t)this + 0x55F);
	}
	template <typename T = float> T& m_FireAimLayerWeight() {
		return *(T*)((uintptr_t)this + 0x560);
	}
	template <typename T = bool> T& m_UseInVehicle() {
		return *(T*)((uintptr_t)this + 0x564);
	}
	template <typename T = bool> T& m_NeedToCheckMuzzleFireEffectRelevance() {
		return *(T*)((uintptr_t)this + 0x565);
	}
	template <typename T = bool> T& m_NeedToCheckBulletTraceEffectRelevance() {
		return *(T*)((uintptr_t)this + 0x566);
	}
	template <typename T = int32_t> T& m_AssetGroupID() {
		return *(T*)((uintptr_t)this + 0x568);
	}
	template <typename T = int32_t> T& m_MuzzleEffectGroupID() {
		return *(T*)((uintptr_t)this + 0x56C);
	}
	template <typename T = bool> T& m_isMuzzleFlashChanged() {
		return *(T*)((uintptr_t)this + 0x570);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_MuzzleFlashSockets() {
		return *(T*)((uintptr_t)this + 0x574);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_MuzzleFlashEffects() {
		return *(T*)((uintptr_t)this + 0x578);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_MuzzleFlashChargingEffects() {
		return *(T*)((uintptr_t)this + 0x57C);
	}
	template <typename T = bool> T& m_IsCheckSpawnEffect() {
		return *(T*)((uintptr_t)this + 0x580);
	}
	template <typename T = int32_t> T& m_MuzzleFlashAssetID1POnSkill() {
		return *(T*)((uintptr_t)this + 0x584);
	}
	template <typename T = int32_t> T& m_MuzzleEffectGroupIDOnSkill() {
		return *(T*)((uintptr_t)this + 0x588);
	}
	template <typename T = uintptr_t> T& m_MuzzleEffectGroupRef() {
		return *(T*)((uintptr_t)this + 0x58C);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppArray<uintptr_t>*>*> T& m_AttachMuzzleFlashEffectMap() {
		return *(T*)((uintptr_t)this + 0x590);
	}
	template <typename T = uintptr_t> T& m_FireIntervalChangedEffect() {
		return *(T*)((uintptr_t)this + 0x594);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_extraEffects() {
		return *(T*)((uintptr_t)this + 0x598);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_EffectLevelCtrls() {
		return *(T*)((uintptr_t)this + 0x59C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_KillCountForLevelEffect() {
		return *(T*)((uintptr_t)this + 0x5A0);
	}
	template <typename T = uintptr_t> T& m_ShellDropEffect_1P() {
		return *(T*)((uintptr_t)this + 0x5A4);
	}
	template <typename T = uintptr_t> T& m_ShellDropEffect_3P() {
		return *(T*)((uintptr_t)this + 0x5A8);
	}
	template <typename T = uintptr_t> T& m_ShellDropSocket() {
		return *(T*)((uintptr_t)this + 0x5AC);
	}
	template <typename T = Il2CppString*> T& m_FireEffectSocketName() {
		return *(T*)((uintptr_t)this + 0x5B0);
	}
	template <typename T = uintptr_t> T& m_FireEffectSocket() {
		return *(T*)((uintptr_t)this + 0x5B4);
	}
	template <typename T = uintptr_t> T& m_CacheWeaponPromotionUnlockData() {
		return *(T*)((uintptr_t)this + 0x5B8);
	}
	template <typename T = float> T& startTime() {
		return *(T*)((uintptr_t)this + 0x5BC);
	}
	template <typename T = uintptr_t> T& m_OpticsAvatarChangeComponent() {
		return *(T*)((uintptr_t)this + 0x5C0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_WeaponPartList() {
		return *(T*)((uintptr_t)this + 0x5C4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_EquippingPartList() {
		return *(T*)((uintptr_t)this + 0x5C8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_UnEquippingPartList() {
		return *(T*)((uintptr_t)this + 0x5CC);
	}
	template <typename T = bool> T& m_WeaponPartChange() {
		return *(T*)((uintptr_t)this + 0x5D0);
	}
	template <typename T = bool> T& m_OpticsPartEquipped() {
		return *(T*)((uintptr_t)this + 0x5D1);
	}
	template <typename T = float> T& m_RevertAttachmentDuration() {
		return *(T*)((uintptr_t)this + 0x5D4);
	}
	template <typename T = int32_t> T& m_CrossHairAssetID() {
		return *(T*)((uintptr_t)this + 0x5D8);
	}
	template <typename T = int32_t> T& m_CrossHairIndex() {
		return *(T*)((uintptr_t)this + 0x5DC);
	}
	template <typename T = int32_t> T& m_CrossHairCustomID() {
		return *(T*)((uintptr_t)this + 0x5E0);
	}
	template <typename T = bool> static T& DoForceHideNormalMeshRenderer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x26);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mUnuseModeAttachmentList() {
		return *(T*)((uintptr_t)this + 0x5E4);
	}
	template <typename T = uintptr_t> T& mAttributeAddtionMgr() {
		return *(T*)((uintptr_t)this + 0x5E8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPAPLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPAPLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyFireParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLoading() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrintLoadingInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAimWhenStopFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRenderers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcAimTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcAimAnimRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOpenAimPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsOpenAimState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAimingPercentage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAimingAnimationPrecentage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetElapsedAimTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAimingChangeEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanChangeAimingFOV() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanAimingFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSingleFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SingleShotStopTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsWeaponReleaseToFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAimingValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurUseWeaponData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurUseWeaponHipData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateComponents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateWeaponFireSoundLogic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AsyncLoadAssets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponControllerLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadWeaponModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMeshRenderers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchWeaponModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterWeaponLengthChangeCallBackFunc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterWeaponLengthChangeCallBackFunc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InvokeWeaponLengthChangeCallBackFunc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRemove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAsyncLoadCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateWeaponFireSoundLogicComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldCreateWeaponShakeAroundPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckWeaponShakeAroundPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateWeaponShakeAroundPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckWeaponPartDefaultSet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDefaultActivateState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActivateNextState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyOtherWeaponChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AttachObjectToSocket() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearDataBeforActivie() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearDataWhenEnterActiveState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearDataWhenEquipingState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInActivate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Activate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GotoActiveState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetWeaponData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitDefaultActivateState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsDirectFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCrossHairType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowCrossHair() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ActiveNextState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFireComponentActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deactivate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetHotValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopBolt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeactivateAttachMuzzleFlashEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopWeaponFireSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopFireSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsIntantFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMeleeFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsProjectileFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPlacingFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetQuickKnifeFireCompIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetQuickKnifeFireComp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedsToSwitchCrossHair() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x164);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasSwitchingState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SecondaryHasAmmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x16C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToSecondFireMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchFireModeByIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x174);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanSwitchWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanSwitchFireMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x17C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchFireMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchFireAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x184);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetFireMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadAssetGroupConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyHipParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyOwnerBeginDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x194);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyWeaponImpactComponents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x19C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GotoIdleState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GotoState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopCurState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateFireInDeadReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBeginTimeSlowDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ThrowWeaponRealBeginFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySecondaryFireAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryAutoSwitchWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginIdle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginAimedIdle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDamageType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcDamageInfoInstantHit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcDamageSpecialFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1DC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyDamageInfoInstantHit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessInstantHit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AmmoCanFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAmmoFree() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1EC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCostAmmoCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConsumeAmmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FullAmmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasAmmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1FC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsTotallyOutOfAmmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x200);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsThrowingAndHasOthers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x204);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddCarriedAmmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x208);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddCurrentAmmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ModifyAmmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x210);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ModifySecondaryAmmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x214);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeClipAmmoCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x218);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanShowAmmoTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x21C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowAmmoTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x220);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetStat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x224);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddFireCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x228);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAdjustedCameraAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x22C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAdjustedWeaponAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x230);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAimingTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x234);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAimingAtEnemy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x238);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcDampAssistAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x23C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindMagnAssistAimTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x240);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindAssistAimTargetForPVE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x244);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindAssistAimTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x248);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAssistAimRotateTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAutoAssistAimRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x250);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFireRadius() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x254);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFireRadius_Normal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x258);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFireRadius_Controller() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x25C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldStartPendingAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x260);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeToNormalCrossHair() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x264);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInHipFireRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x268);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFindAimingToAutoFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x26C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x270);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPostDestroyWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x274);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x278);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponMoveScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x27C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanSprintInWater() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x280);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanSprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x284);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedFireStopSprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x288);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCameraRotateScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplicationPause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x290);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x294);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldPlayNoAmoSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x298);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentHotValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x29C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CoolDownWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayOverHotEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsOverHot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshHotMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddHotValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayOverHotSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUpOverHot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnViewChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldResetFirstPersonMoveSpeedMul() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeFirstPersonCameraFOV() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeGetHitPunchAngleConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangePunchAngleByGetHit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MirrorWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIconByItemID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2D4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableDOF() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2D8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeAimingFOV() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2DC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSensitiveParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2E0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GamepadSensitiveParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2E4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldPlayAimSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2E8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchAimData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2EC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2F0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenDof() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2F4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopDof() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2F8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostOpenAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2FC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x300);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostCloseAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x304);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreEndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x308);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreBeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAimState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x310);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WeaponAttributeAdditionLoadOverCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x314);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UseInWater() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x318);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsUseWeaponCheckFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x31C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAssetMeshPartName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x320);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetReloadingMagActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x324);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetReloadingMag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x328);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLeftHandCenter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x32C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLeftHandCenter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x330);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFireInterval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x334);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAutoFireStopDelayTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x338);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareInputParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x33C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFireButtonViewIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x340);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitWunderWaffeElectricManage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x344);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWunderWaffeElectric() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x348);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanBRClimb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentMeshLocalPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x350);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentMeshLocalEulerAngles() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x354);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAdjustedFireAimRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x358);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPawnDiedClearWeaponState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x35C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyOwnerDied() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x360);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshLevelEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x364);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ThrowWeaponHoldFireEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x368);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelFireSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x36C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayThrowWeaponAnim_BR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x370);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetThrowWeaponFireStateValue_BR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x374);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncBRThrowWeaponAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x378);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyCancelThrowWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x37C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanSetCancelThrowingWeaponValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x380);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCancelThrowingWeaponValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x384);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldCancelThrowingWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x388);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotityMatineeStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotityEndSwitchRole() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x390);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanShowKnife() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x394);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeZoomingFOV() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x398);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPawnSwitchAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x39C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsForbiddenMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStartSwimming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEndSwimming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentActiveStateType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartSwimmingChangeClip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponActorId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BindUseItemSkinnedMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAndAddBone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHiddenExceptSight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanUseLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncSentryGunCanFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNeedShowCancelAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNeedShowCanceInAimMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanSlideTackle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3D4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanRoll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3D8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnActivateSetWeaponPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3DC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDeActivateSetWeaponPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3E0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitComposePartInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3E4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearComposePartInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3E8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpenAimResolveJitter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3EC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseAimResolveJitter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3F0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecoverResolveJitter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3F4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickResetBoneRightHand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3F8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartTickResetBoneRightHand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3FC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopTickResetBoneRightHand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x400);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckInGameMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x404);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPreBeginStateSetBoneRightHand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x408);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetCacheBoneRightHandTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitCacheBoneRightHand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x410);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStateChangeFirstPersonCameraFov() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x414);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsADSAiming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x418);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSpecialAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x41C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanUse3PView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x420);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanUse1PView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x424);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CachePrefabConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x428);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearPrefabConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x42C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFireBoltTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x430);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x434);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x438);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordFireTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x43C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartFireWithLeftInterval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x440);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x444);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsDelayStartFireTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x448);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetFireDataInActiveState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x450);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginFireHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x454);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x458);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x45C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x460);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanFireOrAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x464);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartSecondaryFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x468);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopSecondaryFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x46C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginSecondaryFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x470);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndSecondFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x474);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldEndChangeClip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x478);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanChangeClip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x47C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldAutoChangeClip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x480);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNeedAutoChangeClip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x484);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsKeepAiming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x488);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanProne() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanOpenAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x490);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelFireState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x494);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InSwitchWeaponState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x498);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsForbid3DTouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x49C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsHideADSButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanAuto3Dtouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFireButtonEnabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetResetFireInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAimDownAfterFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCurrenStateCanSwitchWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayChangeClip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySyncChangeClip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEquipAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySpecialEquipAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayClimbAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayUnequipAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySwitchAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayFireGroupEndAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4D4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayFPModeAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4D8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAimAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4DC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableFireLayerAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4E0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySyncAimAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4E4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySyncAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4E8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAnimationResetControllerChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4EC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_PlaySyncAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4F0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4F4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_PlayAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4F8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FadeToAnimState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4FC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_FadeToAnimState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x500);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FadeSyncToAnimState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x504);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAllAnimatorTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x508);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAnimatorTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAnimatorTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x510);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAnimationCull() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x514);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBanChangeAnimSpeedInState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x518);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAnimationValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x51C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetAnimationValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x520);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSyncAnimationValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x524);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlaySpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x528);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetStateSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x52C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcFireAnimationSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x530);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcUnAimmingFireAnimationSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x534);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAimDownFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x538);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayFireAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x53C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMeleeFireAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x540);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldPlayCameraAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x544);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAimingCameraAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x548);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEndFireCameraAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayFireCameraAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x550);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldUpdateFirstPersonMovingAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x554);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFPLeftHandActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x558);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFPSwimLeftHandActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x55C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFPLeftHandVisibleByAni() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x560);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearFPIKScript() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x564);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInitFPIKScript() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x568);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFPLeftHandVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x56C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFPLeftHandFixedToDest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x570);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFPLeftHandToDestDir() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x574);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RunFPIK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x578);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RunIK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x57C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopFPIK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x580);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RunSwimIK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x584);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopSwimIK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x588);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAttachFPAnimationSyncController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AttachFPAnimationSyncController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x590);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DettachFPAnimationSyncController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x594);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ActiviteFPAnimationSyncController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x598);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncFPAniamtion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x59C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SholdShowWeaponInSwim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFireAnimLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayMeleeFireAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayIdleAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayFirstPersonMovingAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSpectatingSetMoveSpeed0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMoveClipSpeedMul() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecoverMoveClipSpeedMul() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetMoveClipSpeedMul() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReInitFPAnimParameter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldRunningIK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentWeaponControllerID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitWeaponControllerAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5D4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTPController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5D8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCameraAnimTypeAndSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5DC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCameraAnimData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5E0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCameraAnimeedStartTransition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5E4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayCameraAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5E8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_PlayCameraAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5EC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayCameraAnimInTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5F0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopCameraAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5F4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsChangeClipCameraAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5F8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickPawnMoveCameraAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5FC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ResetAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x600);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddAnimationClipEvent_3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x604);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddAnimationClipEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x608);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnimaitionEventPutDownCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnimaitionEventEquipCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x610);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnimationEventCallBack_1PCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x614);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnimationEventCallBack_1PRun() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x618);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnimationEventCallBack_1PMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x61C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnimationEventCallBack_1PAimingMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x620);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasEnoughTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x624);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnimationEventCallBack_1PRun_Camera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x628);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnimationEventCallBack_1PMove_Camera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x62C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayBRClimbAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x630);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldCacheWeaponMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x634);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CacheMeshAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x638);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearCacheMeshAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x63C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HadCacheMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x640);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCurrentCloseAimAfterSingleFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x644);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMPMatchObserverFOV() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x648);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCameraFOV() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsDowningProcess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x650);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DampAssitAimRateFactor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x654);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MinDampAssitAimRateFactor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x658);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MaxDampAssitAimRateFactor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x65C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MagnAssitAimRateFactor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x660);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayFireElapseScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x664);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddAssetToPreLoadList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x668);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddAssetToPreInstantiateList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x66C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearPreInstantiateAssetTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x670);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreInstantiateAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x674);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddProjAssetToPreLoadList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x678);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreloadWeaponEffects() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x67C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayFireEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x680);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayMuzzleFlashEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x684);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshMuzzleFlashEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x688);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshExtraEffects() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshEffects() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x690);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayMuzzleFlashChargingEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x694);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMuzzleFlashEffectScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x698);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayShellDropEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x69C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEffectWithSocketName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnLevelEffectWithSocketName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBulletTraceEffectAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanPlayBulletSmokeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBulletSmokeEffectAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayBulletTraceEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayBulletSmokeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopFireEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopMuzzleFlashChargingEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetStartTracePosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayFireIntervalChangedEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopFireIntervalChangedEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSpawnFireEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitShellDropSocket() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6D4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitMuzzleFlashSocket() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6D8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateMuzzleFlashChargingEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6DC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateMuzzleFlashEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6E0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurMuzzleFlashChargingID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6E4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurMuzzleFlashID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6E8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMuzzleFlashIDFromConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6EC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMuzzleFlashIDFromSelf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6F0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAssetGroupConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6F4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMuzzleEffectGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6F8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetZeroOffsetSync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6FC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadSpawnFireEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x700);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurShellDropEffectId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x704);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetShellDropEffectIdFromConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x708);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetMuzzleSocketName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckeMuzzleEffectUseFirstPerson() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x710);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMuzzleEffectHipLayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x714);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideMuzzleFlashEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x718);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySpecialUnAimingEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x71C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnExtraEffects() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x720);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DespawnExtraEffects() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x724);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddExtraEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x728);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveExtraEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x72C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeEffectLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x730);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HighMeshRenderer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x734);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCrossHairCustomID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x738);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitWeaponPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x73C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitOneWeaponPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x740);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyThrowWeaponAmmoCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x744);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitOpticsAvatarWithoutPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x748);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitOpticsAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitOpticsAvatarChangeComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x750);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpticsAvatarChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x754);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetOpticsAvatarChangePercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x758);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CleanOpticsAvatarChangeComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x75C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckDoForceHideNormalMeshRenderer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x760);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoShowWeaponPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x764);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowWeaponPartProcess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x768);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoHideWeaponPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x76C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHideWeaponPartProcess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x770);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowAndHideWeaponPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x774);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EquipAttachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x778);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EquipAttachmentByClient() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x77C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RevertEquippingWeaponPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x780);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnEquipAttachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x784);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnEquipAttachmentByClient() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x788);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RevertUnEquippingWeaponPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponPartDeactivate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x790);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponPartActivate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x794);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOpticsWeaponPartType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x798);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldPlayOpticsAimingAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x79C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetZoomWeaponFOVState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAimingZoomingFov() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeAimingZoomingFOV() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanChangeAimingZoomingFov() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasWeaponPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsHadSilencerWeaponPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsHadOpticsPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearWeaponPartList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsContainerUnuseAttachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddStaticAddition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAdditionByBase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C8);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(Weapon*, uintptr_t, bool))(Il2CppBase() + 0x1BFB62C))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFC544))(this);
	}
	template <typename T = bool> T get_IsFirstPerson() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFC600))(this);
	}
	template <typename T = void> T set_IsFirstPerson(bool value) {
		return ((T (*)(Weapon*, bool))(Il2CppBase() + 0x1BFC608))(this, value);
	}
	template <typename T = unsigned char> T get_RightOrLeft() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFC610))(this);
	}
	template <typename T = void> T set_RightOrLeft(unsigned char value) {
		return ((T (*)(Weapon*, unsigned char))(Il2CppBase() + 0x1BFC618))(this, value);
	}
	template <typename T = bool> T get_SpringFireGetReady() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFC620))(this);
	}
	template <typename T = void> T set_SpringFireGetReady(bool value) {
		return ((T (*)(Weapon*, bool))(Il2CppBase() + 0x1BFC628))(this, value);
	}
	template <typename T = void> T SetPAPLevel(int32_t level) {
		return ((T (*)(Weapon*, int32_t))(Il2CppBase() + 0x1BFC630))(this, level);
	}
	template <typename T = int32_t> T GetPAPLevel() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFC70C))(this);
	}
	template <typename T = void> T ApplyFireParam(bool aimedFire) {
		return ((T (*)(Weapon*, bool))(Il2CppBase() + 0x1BFC7DC))(this, aimedFire);
	}
	template <typename T = bool> T IsLoading() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFC968))(this);
	}
	template <typename T = void> T PrintLoadingInfo() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFCB2C))(this);
	}
	template <typename T = uintptr_t> T GetWeaponRoot() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFCDA0))(this);
	}
	template <typename T = bool> T StopAimWhenStopFire() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFCE78))(this);
	}
	template <typename T = uintptr_t> T get_CurMesh() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFCFF8))(this);
	}
	template <typename T = int32_t> T get_MeshAssetID() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFD000))(this);
	}
	template <typename T = uintptr_t> T get_optimizedModel() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFD008))(this);
	}
	template <typename T = Il2CppList<void*>*> T get_ComposePartAssets() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFD010))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_MeshRenderers() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFD018))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetRenderers(Il2CppList<uintptr_t>* outRenderers) {
		return ((T (*)(Weapon*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1BFD020))(this, outRenderers);
	}
	template <typename T = uintptr_t> T get_ImpactComponent() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFD3AC))(this);
	}
	template <typename T = uintptr_t> T get_FireComponent() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFC92C))(this);
	}
	template <typename T = uintptr_t> T get_SecondaryFireComponent() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFD3E8))(this);
	}
	template <typename T = uintptr_t> T get_ThirdFireComponent() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFD424))(this);
	}
	template <typename T = uintptr_t> T get_CurrentFireComponent() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFD460))(this);
	}
	template <typename T = unsigned char> T get_CurrentFireMode() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFD4A4))(this);
	}
	template <typename T = uintptr_t> T get_StateMachineComponent() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFD4AC))(this);
	}
	template <typename T = void> T set_StrongFireState(int32_t value) {
		return ((T (*)(Weapon*, int32_t))(Il2CppBase() + 0x1BFD4B4))(this, value);
	}
	template <typename T = int32_t> T get_StrongFireState() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFD4BC))(this);
	}
	template <typename T = float> T get_AimingChangeStartTime() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFD4C4))(this);
	}
	template <typename T = float> T get_AimingTakeTime() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFD4CC))(this);
	}
	template <typename T = float> T CalcAimTime(bool open) {
		return ((T (*)(Weapon*, bool))(Il2CppBase() + 0x1BFD4D4))(this, open);
	}
	template <typename T = float> T CalcAimAnimRate(bool open, Il2CppString* stateName, Il2CppString* clipSuffix) {
		return ((T (*)(Weapon*, bool, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1BFD8E8))(this, open, stateName, clipSuffix);
	}
	template <typename T = float> T GetOpenAimPercent() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFDAD4))(this);
	}
	template <typename T = bool> T get_FinishedAim() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFE044))(this);
	}
	template <typename T = bool> T IsOpenAimState() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFDCB0))(this);
	}
	template <typename T = float> T GetAimingPercentage() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFDDA4))(this);
	}
	template <typename T = float> T GetAimingAnimationPrecentage() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFE280))(this);
	}
	template <typename T = float> T GetElapsedAimTime() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFE160))(this);
	}
	template <typename T = bool> T IsAimingChangeEnd() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFE638))(this);
	}
	template <typename T = bool> T CanChangeAimingFOV() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFE724))(this);
	}
	template <typename T = bool> T CanAimingFire() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFE8B8))(this);
	}
	template <typename T = bool> T get_IsFired() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFEAF4))(this);
	}
	template <typename T = void> T set_IsFired(bool value) {
		return ((T (*)(Weapon*, bool))(Il2CppBase() + 0x1BFEAFC))(this, value);
	}
	template <typename T = bool> T get_IsSingleFired() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFEB04))(this);
	}
	template <typename T = Il2CppString*> T get_IconName() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFEB60))(this);
	}
	template <typename T = bool> T get_IsMeleeDirectFire() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFEC28))(this);
	}
	template <typename T = bool> T get_IsWeaponDirectFire() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFEC38))(this);
	}
	template <typename T = bool> T get_IsHidden() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFEC40))(this);
	}
	template <typename T = uintptr_t> T get_WeaponSoundPlayer() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFEC48))(this);
	}
	template <typename T = float> T get_FireSpeed() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFEC50))(this);
	}
	template <typename T = Il2CppString*> T get_WeaponINIPath() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFEC58))(this);
	}
	template <typename T = void> T set_WeaponINIPath(Il2CppString* value) {
		return ((T (*)(Weapon*, Il2CppString*))(Il2CppBase() + 0x1BFED34))(this, value);
	}
	template <typename T = int32_t> T get_ShotFired() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFED3C))(this);
	}
	template <typename T = bool> T get_IsSingleShot() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFEB34))(this);
	}
	template <typename T = bool> T IsSingleFire() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFED44))(this);
	}
	template <typename T = float> T SingleShotStopTime() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFEE70))(this);
	}
	template <typename T = float> T get_ADSModeSingleShotStopTime() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFEFF8))(this);
	}
	template <typename T = bool> T get_ForcePlaySingleFireAnim() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFF024))(this);
	}
	template <typename T = int32_t> T get_ClipAmmoCount() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFF050))(this);
	}
	template <typename T = void> T set_ClipAmmoCount(int32_t value) {
		return ((T (*)(Weapon*, int32_t))(Il2CppBase() + 0x1BFF098))(this, value);
	}
	template <typename T = int32_t> T get_BaseClipAmmoCount() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFF0CC))(this);
	}
	template <typename T = int32_t> T get_CarriedAmmoCount() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFF0F8))(this);
	}
	template <typename T = void> T set_CarriedAmmoCount(int32_t value) {
		return ((T (*)(Weapon*, int32_t))(Il2CppBase() + 0x1BFF140))(this, value);
	}
	template <typename T = int32_t> T get_LastShotCost() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFF188))(this);
	}
	template <typename T = int32_t> T get_ShotCost() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFF190))(this);
	}
	template <typename T = int32_t> T get_AmmoCount() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFD768))(this);
	}
	template <typename T = void> T set_AmmoCount(int32_t value) {
		return ((T (*)(Weapon*, int32_t))(Il2CppBase() + 0x1BFF314))(this, value);
	}
	template <typename T = int32_t> T get_MaxAmmoCount() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFF35C))(this);
	}
	template <typename T = void> T set_MaxAmmoCount(int32_t value) {
		return ((T (*)(Weapon*, int32_t))(Il2CppBase() + 0x1BFF3A4))(this, value);
	}
	template <typename T = float> T get_AimedChangeClipTime() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFF3EC))(this);
	}
	template <typename T = float> T get_ChangeClipTime() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFF418))(this);
	}
	template <typename T = float> T get_ChangeClipStartTime() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFF65C))(this);
	}
	template <typename T = float> T get_ChangeClipLoopTime() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFF7B0))(this);
	}
	template <typename T = float> T get_ChangeClipEndTime() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFF904))(this);
	}
	template <typename T = float> T get_ChangeClipStart02Time() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFFA58))(this);
	}
	template <typename T = float> T get_ChangeClipLoopPreTime() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFFBAC))(this);
	}
	template <typename T = float> T get_EquipTime() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFFD00))(this);
	}
	template <typename T = float> T get_UnequipTime() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFFE84))(this);
	}
	template <typename T = float> T get_EquipAnimRate() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFFFF0))(this);
	}
	template <typename T = float> T get_UnequipAnimRate() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C00214))(this);
	}
	template <typename T = bool> T get_IsFiring() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFEAEC))(this);
	}
	template <typename T = void> T set_IsFiring(bool value) {
		return ((T (*)(Weapon*, bool))(Il2CppBase() + 0x1C0040C))(this, value);
	}
	template <typename T = bool> T get_IsReleaseToFire() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C004EC))(this);
	}
	template <typename T = void> T set_IsReleaseToFire(bool value) {
		return ((T (*)(Weapon*, bool))(Il2CppBase() + 0x1C004F4))(this, value);
	}
	template <typename T = bool> T IsWeaponReleaseToFire() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C004FC))(this);
	}
	template <typename T = bool> T get_IsPrepareHold() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C005E0))(this);
	}
	template <typename T = void> T set_IsPrepareHold(bool value) {
		return ((T (*)(Weapon*, bool))(Il2CppBase() + 0x1C005E8))(this, value);
	}
	template <typename T = bool> T get_AimingEnableCrossHair() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C005F0))(this);
	}
	template <typename T = void> T SetAimingValue(bool value) {
		return ((T (*)(Weapon*, bool))(Il2CppBase() + 0x1C005F8))(this, value);
	}
	template <typename T = bool> T get_IsDoubleFOV() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C00928))(this);
	}
	template <typename T = void> T set_IsDoubleFOV(bool value) {
		return ((T (*)(Weapon*, bool))(Il2CppBase() + 0x1C00930))(this, value);
	}
	template <typename T = float> T get_WeaponRange() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C00938))(this);
	}
	template <typename T = float> T get_BOT_FireRange() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C00964))(this);
	}
	template <typename T = Il2CppString*> T get_WeaponNickName() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C00990))(this);
	}
	template <typename T = uintptr_t> T get_WeaponConfig() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C00A6C))(this);
	}
	template <typename T = void> T set_WeaponConfig(uintptr_t value) {
		return ((T (*)(Weapon*, uintptr_t))(Il2CppBase() + 0x1C00A74))(this, value);
	}
	template <typename T = uintptr_t> T GetCurUseWeaponData() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C00A7C))(this);
	}
	template <typename T = void> T set_HipWeaponData(uintptr_t value) {
		return ((T (*)(Weapon*, uintptr_t))(Il2CppBase() + 0x1C00B4C))(this, value);
	}
	template <typename T = uintptr_t> T get_HipWeaponData() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C00B54))(this);
	}
	template <typename T = uintptr_t> T GetCurUseWeaponHipData() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C00B5C))(this);
	}
	template <typename T = void> T InitWeapon() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C00C2C))(this);
	}
	template <typename T = void> T LoadProperties() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C018B0))(this);
	}
	template <typename T = void> T CreateComponents() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C00D40))(this);
	}
	template <typename T = void> T CreateWeaponFireSoundLogic() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C013DC))(this);
	}
	template <typename T = void> T AsyncLoadAssets(bool isForce) {
		return ((T (*)(Weapon*, bool))(Il2CppBase() + 0x1C0157C))(this, isForce);
	}
	template <typename T = void> T OnLoadComplete(int32_t assetID) {
		return ((T (*)(Weapon*, int32_t))(Il2CppBase() + 0x1C036CC))(this, assetID);
	}
	template <typename T = void> T OnWeaponControllerLoaded(uintptr_t animatorController) {
		return ((T (*)(Weapon*, uintptr_t))(Il2CppBase() + 0x1C0398C))(this, animatorController);
	}
	template <typename T = void> T LoadWeaponModel(Il2CppString* SocketName) {
		return ((T (*)(Weapon*, Il2CppString*))(Il2CppBase() + 0x1C03A64))(this, SocketName);
	}
	template <typename T = void> T SetMeshRenderers() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C05D10))(this);
	}
	template <typename T = void> T SwitchWeaponModel(bool cutAway) {
		return ((T (*)(Weapon*, bool))(Il2CppBase() + 0x1C05E48))(this, cutAway);
	}
	template <typename T = void> T RegisterWeaponLengthChangeCallBackFunc(uintptr_t func) {
		return ((T (*)(Weapon*, uintptr_t))(Il2CppBase() + 0x1C063AC))(this, func);
	}
	template <typename T = void> T UnRegisterWeaponLengthChangeCallBackFunc() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C06484))(this);
	}
	template <typename T = void> T InvokeWeaponLengthChangeCallBackFunc() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C06558))(this);
	}
	template <typename T = void> T OnRemove() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C066C8))(this);
	}
	template <typename T = void> T ClearAsyncLoadCallback() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C0680C))(this);
	}
	template <typename T = void> T CreateWeaponFireSoundLogicComponent() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C05A7C))(this);
	}
	template <typename T = bool> T ShouldCreateWeaponShakeAroundPoint() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C0699C))(this);
	}
	template <typename T = void> T CheckWeaponShakeAroundPoint(uintptr_t inWeaponMesh) {
		return ((T (*)(Weapon*, uintptr_t))(Il2CppBase() + 0x1C06A88))(this, inWeaponMesh);
	}
	template <typename T = void> T CreateWeaponShakeAroundPoint(uintptr_t inWeaponMesh, Il2CppString* aroundName, Il2CppString* aroundParent, Il2CppVector3 aroundOffset, Il2CppString* aroundParentDefault) {
		return ((T (*)(Weapon*, uintptr_t, Il2CppString*, Il2CppString*, Il2CppVector3, Il2CppString*))(Il2CppBase() + 0x1C06FE8))(this, inWeaponMesh, aroundName, aroundParent, aroundOffset, aroundParentDefault);
	}
	template <typename T = void> T CheckWeaponPartDefaultSet(int32_t meshID) {
		return ((T (*)(Weapon*, int32_t))(Il2CppBase() + 0x1C0784C))(this, meshID);
	}
	template <typename T = void> T SetDefaultActivateState(uintptr_t setState) {
		return ((T (*)(Weapon*, uintptr_t))(Il2CppBase() + 0x1C07AC4))(this, setState);
	}
	template <typename T = void> T SetActivateNextState(uintptr_t setState) {
		return ((T (*)(Weapon*, uintptr_t))(Il2CppBase() + 0x1C07B9C))(this, setState);
	}
	template <typename T = void> T NotifyOtherWeaponChange() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C07C74))(this);
	}
	template <typename T = Il2CppString*> T AttachObjectToSocket() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C08654))(this);
	}
	template <typename T = void> T ClearDataBeforActivie() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C08880))(this);
	}
	template <typename T = void> T ClearDataWhenEnterActiveState() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C08AB0))(this);
	}
	template <typename T = void> T ClearDataWhenEquipingState() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C08D48))(this);
	}
	template <typename T = bool> T IsInActivate() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C08E1C))(this);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C08EF4))(this);
	}
	template <typename T = void> T GotoActiveState() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C094B4))(this);
	}
	template <typename T = void> T ResetWeaponData() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C0A8F4))(this);
	}
	template <typename T = void> T InitDefaultActivateState() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C0AB3C))(this);
	}
	template <typename T = bool> T IsDirectFire() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C0AC18))(this);
	}
	template <typename T = uintptr_t> T GetCrossHairType() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C0AD1C))(this);
	}
	template <typename T = bool> T IsShowCrossHair() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C0AE44))(this);
	}
	template <typename T = void> T ActiveNextState() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C0A350))(this);
	}
	template <typename T = void> T OnFireComponentActive(bool active) {
		return ((T (*)(Weapon*, bool))(Il2CppBase() + 0x1C098C8))(this, active);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C0AF14))(this);
	}
	template <typename T = void> T ResetHotValue() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C0CEDC))(this);
	}
	template <typename T = void> T ClearValue() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C0CFC8))(this);
	}
	template <typename T = void> T StopBolt() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C0D0D0))(this);
	}
	template <typename T = void> T DeactivateAttachMuzzleFlashEffect() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C0BB54))(this);
	}
	template <typename T = void> T StopWeaponFireSound(bool isForce) {
		return ((T (*)(Weapon*, bool))(Il2CppBase() + 0x1C0B78C))(this, isForce);
	}
	template <typename T = void> T StopFireSound() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C0D40C))(this);
	}
	template <typename T = void> T PutDown() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C0D4F4))(this);
	}
	template <typename T = void> T GetReady() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C0D67C))(this);
	}
	template <typename T = void> T SetupWeapon(Il2CppString* SocketName) {
		return ((T (*)(Weapon*, Il2CppString*))(Il2CppBase() + 0x1C0D7A4))(this, SocketName);
	}
	template <typename T = bool> T IsIntantFire() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C0DC80))(this);
	}
	template <typename T = bool> T IsMeleeFire() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C0DD90))(this);
	}
	template <typename T = bool> T IsProjectileFire() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C0DEA0))(this);
	}
	template <typename T = bool> T IsPlacingFire() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C0DFB0))(this);
	}
	template <typename T = int32_t> T GetQuickKnifeFireCompIndex() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C0E0C0))(this);
	}
	template <typename T = uintptr_t> T GetQuickKnifeFireComp() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C0E244))(this);
	}
	template <typename T = bool> T get_IsQuickKnife() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C0E368))(this);
	}
	template <typename T = bool> T NeedsToSwitchCrossHair() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C0E3B8))(this);
	}
	template <typename T = bool> T HasSwitchingState() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C0E544))(this);
	}
	template <typename T = bool> T SecondaryHasAmmo() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C0E614))(this);
	}
	template <typename T = void> T SwitchToSecondFireMode() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BF0404))(this);
	}
	template <typename T = void> T SwitchFireModeByIndex(unsigned char index) {
		return ((T (*)(Weapon*, unsigned char))(Il2CppBase() + 0x1C0E6E4))(this, index);
	}
	template <typename T = bool> T CanSwitchWeapon(uintptr_t toWeapon, uintptr_t* failReason) {
		return ((T (*)(Weapon*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x1C0E840))(this, toWeapon, failReason);
	}
	template <typename T = bool> T CanSwitchFireMode() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C0EF1C))(this);
	}
	template <typename T = void> T SwitchFireMode(uintptr_t gotoState) {
		return ((T (*)(Weapon*, uintptr_t))(Il2CppBase() + 0x1C0F010))(this, gotoState);
	}
	template <typename T = void> T SwitchFireAnimatorController(uintptr_t gotoState) {
		return ((T (*)(Weapon*, uintptr_t))(Il2CppBase() + 0x1C0F48C))(this, gotoState);
	}
	template <typename T = void> T ResetFireMode() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C0B5C8))(this);
	}
	template <typename T = void> T LoadAssetGroupConfig() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C0F6C0))(this);
	}
	template <typename T = void> T ApplyHipParam(bool isAim) {
		return ((T (*)(Weapon*, bool))(Il2CppBase() + 0x1C02234))(this, isAim);
	}
	template <typename T = void> T NotifyOwnerBeginDestroy() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C0FA48))(this);
	}
	template <typename T = void> T DestroyComponent() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C0FBB8))(this);
	}
	template <typename T = void> T DestroyWeaponImpactComponents() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C0FCA4))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C0FE1C))(this);
	}
	template <typename T = bool> T HasState(uintptr_t stateType) {
		return ((T (*)(Weapon*, uintptr_t))(Il2CppBase() + 0x1C0FF48))(this, stateType);
	}
	template <typename T = uintptr_t> T get_StateType() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C1003C))(this);
	}
	template <typename T = void> T GotoIdleState() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C1007C))(this);
	}
	template <typename T = bool> T GotoState(uintptr_t stateType) {
		return ((T (*)(Weapon*, uintptr_t))(Il2CppBase() + 0x1C0A7E0))(this, stateType);
	}
	template <typename T = bool> T IsInState(uintptr_t stateType) {
		return ((T (*)(Weapon*, uintptr_t))(Il2CppBase() + 0x1BFE06C))(this, stateType);
	}
	template <typename T = void> T StopCurState() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C10178))(this);
	}
	template <typename T = void> T SimulateFireInDeadReplay() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C10574))(this);
	}
	template <typename T = void> T OnBeginTimeSlowDown() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C10BE8))(this);
	}
	template <typename T = void> T ThrowWeaponRealBeginFire() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C10CC0))(this);
	}
	template <typename T = void> T PlaySecondaryFireAnim() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C111D0))(this);
	}
	template <typename T = void> T TryAutoSwitchWeapon() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C1132C))(this);
	}
	template <typename T = void> T BeginIdle() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C115B0))(this);
	}
	template <typename T = void> T BeginAimedIdle() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C11698))(this);
	}
	template <typename T = uintptr_t> T GetDamageType() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C1183C))(this);
	}
	template <typename T = uintptr_t> T CalcDamageInfoInstantHit(uintptr_t inImpactInfo, unsigned char inFireMode) {
		return ((T (*)(Weapon*, uintptr_t, unsigned char))(Il2CppBase() + 0x1C11944))(this, inImpactInfo, inFireMode);
	}
	template <typename T = unsigned char> T CalcDamageSpecialFlag(uintptr_t impactInfo) {
		return ((T (*)(Weapon*, uintptr_t))(Il2CppBase() + 0x1C123B4))(this, impactInfo);
	}
	template <typename T = void> T ApplyDamageInfoInstantHit(uintptr_t inDamageInfo, uintptr_t inImpactInfo, int32_t inFireMode) {
		return ((T (*)(Weapon*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1C12690))(this, inDamageInfo, inImpactInfo, inFireMode);
	}
	template <typename T = void> T ProcessInstantHit(uintptr_t impactInfo, unsigned char inFireMode) {
		return ((T (*)(Weapon*, uintptr_t, unsigned char))(Il2CppBase() + 0x1C12F48))(this, impactInfo, inFireMode);
	}
	template <typename T = bool> T AmmoCanFire() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFE9E0))(this);
	}
	template <typename T = bool> T IsAmmoFree() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C13074))(this);
	}
	template <typename T = int32_t> T GetCostAmmoCount() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C13200))(this);
	}
	template <typename T = void> T ConsumeAmmo() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C13340))(this);
	}
	template <typename T = void> T FullAmmo() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C13604))(this);
	}
	template <typename T = bool> T HasAmmo() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C0ECC0))(this);
	}
	template <typename T = bool> T IsTotallyOutOfAmmo() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C1376C))(this);
	}
	template <typename T = bool> T IsThrowingAndHasOthers() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C138DC))(this);
	}
	template <typename T = void> T AddCarriedAmmo(int32_t addCount) {
		return ((T (*)(Weapon*, int32_t))(Il2CppBase() + 0x1C13AF8))(this, addCount);
	}
	template <typename T = void> T AddCurrentAmmo(int32_t addCount) {
		return ((T (*)(Weapon*, int32_t))(Il2CppBase() + 0x1C13BFC))(this, addCount);
	}
	template <typename T = void> T ModifyAmmo(int32_t inCurrentAmmo, int32_t inCurrentCarriedAmmo, bool isDiff, int32_t clibNumBase) {
		return ((T (*)(Weapon*, int32_t, int32_t, bool, int32_t))(Il2CppBase() + 0x1C13CF8))(this, inCurrentAmmo, inCurrentCarriedAmmo, isDiff, clibNumBase);
	}
	template <typename T = void> T ModifySecondaryAmmo(int32_t inSecondaryCurrentAmmo, int32_t inSecondaryCurrentCarriedAmmo) {
		return ((T (*)(Weapon*, int32_t, int32_t))(Il2CppBase() + 0x1C13E38))(this, inSecondaryCurrentAmmo, inSecondaryCurrentCarriedAmmo);
	}
	template <typename T = void> T ChangeClipAmmoCount(int32_t addAmmoCount) {
		return ((T (*)(Weapon*, int32_t))(Il2CppBase() + 0x1C13F74))(this, addAmmoCount);
	}
	template <typename T = bool> T CanShowAmmoTip() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C14088))(this);
	}
	template <typename T = bool> T ShowAmmoTip() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C14190))(this);
	}
	template <typename T = int32_t> static T get_StatFireCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C14384))(0);
	}
	template <typename T = void> static T ResetStat() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C14434))(0);
	}
	template <typename T = void> static T AddFireCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C14538))(0);
	}
	template <typename T = Il2CppQuaternion> T GetAdjustedCameraAim(Il2CppQuaternion initialAim) {
		return ((T (*)(Weapon*, Il2CppQuaternion))(Il2CppBase() + 0x1C14640))(this, initialAim);
	}
	template <typename T = Il2CppQuaternion> T GetAdjustedWeaponAim(Il2CppQuaternion initialAim) {
		return ((T (*)(Weapon*, Il2CppQuaternion))(Il2CppBase() + 0x1C14870))(this, initialAim);
	}
	template <typename T = uintptr_t> T get_AimingTarget() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C14AA0))(this);
	}
	template <typename T = uintptr_t> T get_AimingEnemyTarget() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C14AA8))(this);
	}
	template <typename T = void> T UpdateAimingTarget() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C14AB0))(this);
	}
	template <typename T = bool> T IsAimingAtEnemy(uintptr_t* fDistance, uintptr_t* target) {
		return ((T (*)(Weapon*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x1C15D34))(this, fDistance, target);
	}
	template <typename T = Il2CppVector3> T CalcDampAssistAim(uintptr_t aimTarget, Il2CppVector3 aimPos, Il2CppVector3 angle, bool isDeadEye, bool gamepadInput) {
		return ((T (*)(Weapon*, uintptr_t, Il2CppVector3, Il2CppVector3, bool, bool))(Il2CppBase() + 0x1C15FA4))(this, aimTarget, aimPos, angle, isDeadEye, gamepadInput);
	}
	template <typename T = bool> T FindMagnAssistAimTarget(uintptr_t* targetPos, uintptr_t* aimTarget) {
		return ((T (*)(Weapon*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x1C16D3C))(this, targetPos, aimTarget);
	}
	template <typename T = bool> T FindAssistAimTargetForPVE(uintptr_t* targetPos, uintptr_t* aimTarget) {
		return ((T (*)(Weapon*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x1C17224))(this, targetPos, aimTarget);
	}
	template <typename T = bool> T FindAssistAimTarget(uintptr_t* targetPos, uintptr_t* aimTarget, bool useLineTarget) {
		return ((T (*)(Weapon*, uintptr_t*, uintptr_t*, bool))(Il2CppBase() + 0x1C17A8C))(this, targetPos, aimTarget, useLineTarget);
	}
	template <typename T = float> T GetAssistAimRotateTime(float dis, bool gamepadInput) {
		return ((T (*)(Weapon*, float, bool))(Il2CppBase() + 0x1C18A68))(this, dis, gamepadInput);
	}
	template <typename T = float> T GetAutoAssistAimRate(float dist, float toQuasiDist, bool isMPPVE, float aimAngle, bool gamepadInput) {
		return ((T (*)(Weapon*, float, float, bool, float, bool))(Il2CppBase() + 0x1C18EBC))(this, dist, toQuasiDist, isMPPVE, aimAngle, gamepadInput);
	}
	template <typename T = Il2CppVector2> T GetFireRadius(float dis, bool gamepadInput) {
		return ((T (*)(Weapon*, float, bool))(Il2CppBase() + 0x1C19644))(this, dis, gamepadInput);
	}
	template <typename T = Il2CppVector2> T GetFireRadius_Normal(float dis) {
		return ((T (*)(Weapon*, float))(Il2CppBase() + 0x1C199E0))(this, dis);
	}
	template <typename T = Il2CppVector2> T GetFireRadius_Controller(float dis) {
		return ((T (*)(Weapon*, float))(Il2CppBase() + 0x1C1975C))(this, dis);
	}
	template <typename T = bool> T ShouldStartPendingAim() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C19C64))(this);
	}
	template <typename T = void> T ChangeToNormalCrossHair(bool flag) {
		return ((T (*)(Weapon*, bool))(Il2CppBase() + 0x1C19D4C))(this, flag);
	}
	template <typename T = bool> T IsInHipFireRange() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C19FE4))(this);
	}
	template <typename T = bool> T IsFindAimingToAutoFire() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C1A198))(this);
	}
	template <typename T = void> T DestroyWeapon() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C1A2B4))(this);
	}
	template <typename T = void> T OnPostDestroyWeapon(bool isDestroyActiveWeapon) {
		return ((T (*)(Weapon*, bool))(Il2CppBase() + 0x1C1AB38))(this, isDestroyActiveWeapon);
	}
	template <typename T = void> T SetHidden(bool isHidden) {
		return ((T (*)(Weapon*, bool))(Il2CppBase() + 0x1C1AD64))(this, isHidden);
	}
	template <typename T = float> T GetWeaponMoveScale() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C1B4C4))(this);
	}
	template <typename T = bool> T CanSprintInWater() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C1BF24))(this);
	}
	template <typename T = bool> T CanSprint() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C1C0E0))(this);
	}
	template <typename T = bool> T NeedFireStopSprint() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C1C334))(this);
	}
	template <typename T = float> T GetCameraRotateScale() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C1C404))(this);
	}
	template <typename T = void> T OnApplicationPause(bool paused) {
		return ((T (*)(Weapon*, bool))(Il2CppBase() + 0x1C1C54C))(this, paused);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(Weapon*, float))(Il2CppBase() + 0x1C1C640))(this, DeltaTime);
	}
	template <typename T = bool> T ShouldPlayNoAmoSound() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C1D220))(this);
	}
	template <typename T = float> T get_AddHotTime() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C1D3D4))(this);
	}
	template <typename T = float> T get_CurCoolingDownValue() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C1D3DC))(this);
	}
	template <typename T = void> T set_CurCoolingDownValue(float value) {
		return ((T (*)(Weapon*, float))(Il2CppBase() + 0x1C1D3E4))(this, value);
	}
	template <typename T = bool> T get_IsCoolingDown() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C1D3EC))(this);
	}
	template <typename T = void> T set_IsCoolingDown(bool value) {
		return ((T (*)(Weapon*, bool))(Il2CppBase() + 0x1C1D3F4))(this, value);
	}
	template <typename T = float> T get_CurrentHotValue() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C1D3FC))(this);
	}
	template <typename T = void> T set_CurrentHotValue(float value) {
		return ((T (*)(Weapon*, float))(Il2CppBase() + 0x1C0A640))(this, value);
	}
	template <typename T = void> T SetCurrentHotValue(float value) {
		return ((T (*)(Weapon*, float))(Il2CppBase() + 0x1C1D404))(this, value);
	}
	template <typename T = void> T CoolDownWeapon() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C1D628))(this);
	}
	template <typename T = void> T PlayOverHotEffect() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C1D8C8))(this);
	}
	template <typename T = bool> T IsOverHot() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C0A650))(this);
	}
	template <typename T = void> T RefreshHotMaterial(bool isForce) {
		return ((T (*)(Weapon*, bool))(Il2CppBase() + 0x1C1D990))(this, isForce);
	}
	template <typename T = void> T AddHotValue() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C1DD7C))(this);
	}
	template <typename T = void> T PlayOverHotSound() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C1E018))(this);
	}
	template <typename T = void> T SetUpOverHot() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C1E0F8))(this);
	}
	template <typename T = void> T OnViewChanged(bool is1P) {
		return ((T (*)(Weapon*, bool))(Il2CppBase() + 0x1C1E1DC))(this, is1P);
	}
	template <typename T = bool> T ShouldResetFirstPersonMoveSpeedMul() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C1E2AC))(this);
	}
	template <typename T = void> T ChangeFirstPersonCameraFOV() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C1E404))(this);
	}
	template <typename T = void> T ChangeGetHitPunchAngleConfig(float GetHitPunchAngleX, float GetHitPunchAngleXDecreseSpeed) {
		return ((T (*)(Weapon*, float, float))(Il2CppBase() + 0x1C1E86C))(this, GetHitPunchAngleX, GetHitPunchAngleXDecreseSpeed);
	}
	template <typename T = void> T ChangePunchAngleByGetHit() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C1E9A0))(this);
	}
	template <typename T = void> T MirrorWeapon() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C1EB90))(this);
	}
	template <typename T = Il2CppString*> static T GetIconByItemID(int32_t itemID, bool isKillIcon) {
		return ((T (*)(void *, int32_t, bool))(Il2CppBase() + 0x1C1EEA4))(0, itemID, isKillIcon);
	}
	template <typename T = bool> T EnableDOF() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C1F0E0))(this);
	}
	template <typename T = void> T ChangeAimingFOV(bool isAiming) {
		return ((T (*)(Weapon*, bool))(Il2CppBase() + 0x1C1F1F0))(this, isAiming);
	}
	template <typename T = uintptr_t> T GetSensitiveParam() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C1F7C4))(this);
	}
	template <typename T = void> T GamepadSensitiveParam(uintptr_t x, uintptr_t y) {
		return ((T (*)(Weapon*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1C1FA98))(this, x, y);
	}
	template <typename T = bool> T ShouldPlayAimSound() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C1FBFC))(this);
	}
	template <typename T = void> T SwitchAimData(bool isAiming) {
		return ((T (*)(Weapon*, bool))(Il2CppBase() + 0x1C1FD1C))(this, isAiming);
	}
	template <typename T = void> T OpenAim() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C1FE28))(this);
	}
	template <typename T = void> T OpenDof() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C20140))(this);
	}
	template <typename T = void> T StopDof() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C2071C))(this);
	}
	template <typename T = void> T PostOpenAim() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C208A4))(this);
	}
	template <typename T = void> T CloseAim() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C20F64))(this);
	}
	template <typename T = void> T PostCloseAim() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C21AEC))(this);
	}
	template <typename T = void> T PreEndState(uintptr_t eWeaponStateType) {
		return ((T (*)(Weapon*, uintptr_t))(Il2CppBase() + 0x1C21D08))(this, eWeaponStateType);
	}
	template <typename T = void> T PreBeginState(uintptr_t newState, uintptr_t oldState) {
		return ((T (*)(Weapon*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1C21FE0))(this, newState, oldState);
	}
	template <typename T = bool> T IsAimState(uintptr_t type) {
		return ((T (*)(Weapon*, uintptr_t))(Il2CppBase() + 0x1C22A2C))(this, type);
	}
	template <typename T = void> T WeaponAttributeAdditionLoadOverCallback() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C22CCC))(this);
	}
	template <typename T = bool> T UseInWater() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C22E28))(this);
	}
	template <typename T = bool> T IsUseWeaponCheckFire() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C22F38))(this);
	}
	template <typename T = Il2CppString*> static T GetAssetMeshPartName(Il2CppString* assetName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1C23008))(0, assetName);
	}
	template <typename T = void> T SetReloadingMagActive(bool value) {
		return ((T (*)(Weapon*, bool))(Il2CppBase() + 0x1C23144))(this, value);
	}
	template <typename T = uintptr_t> T GetReloadingMag() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C23D40))(this);
	}
	template <typename T = void> T UpdateLeftHandCenter() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C052E4))(this);
	}
	template <typename T = uintptr_t> T GetLeftHandCenter() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C240E0))(this);
	}
	template <typename T = float> T GetFireInterval() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C241B0))(this);
	}
	template <typename T = void> T CheckAutoFireStopDelayTime(uintptr_t res, bool shouldAutoFire) {
		return ((T (*)(Weapon*, uintptr_t, bool))(Il2CppBase() + 0x1C242B0))(this, res, shouldAutoFire);
	}
	template <typename T = void> T PrepareInputParam(uintptr_t param) {
		return ((T (*)(Weapon*, uintptr_t))(Il2CppBase() + 0x1C24520))(this, param);
	}
	template <typename T = Il2CppString*> T GetFireButtonViewIcon(uintptr_t isGray) {
		return ((T (*)(Weapon*, uintptr_t))(Il2CppBase() + 0x1C247A8))(this, isGray);
	}
	template <typename T = void> T InitWunderWaffeElectricManage() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C2497C))(this);
	}
	template <typename T = void> T SetWunderWaffeElectric(int32_t ammoNum) {
		return ((T (*)(Weapon*, int32_t))(Il2CppBase() + 0x1C24B54))(this, ammoNum);
	}
	template <typename T = bool> T CanBRClimb() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C24CB0))(this);
	}
	template <typename T = void> T SetCurrentMeshLocalPosition(Il2CppVector3 localPosition) {
		return ((T (*)(Weapon*, Il2CppVector3))(Il2CppBase() + 0x1C24EA8))(this, localPosition);
	}
	template <typename T = void> T SetCurrentMeshLocalEulerAngles(Il2CppVector3 localEulerAngles) {
		return ((T (*)(Weapon*, Il2CppVector3))(Il2CppBase() + 0x1C25088))(this, localEulerAngles);
	}
	template <typename T = Il2CppQuaternion> T GetAdjustedFireAimRotation(Il2CppQuaternion fireAimRot, uintptr_t* outTargetPos, uintptr_t* outFirePos, Il2CppVector3 infirePos) {
		return ((T (*)(Weapon*, Il2CppQuaternion, uintptr_t*, uintptr_t*, Il2CppVector3))(Il2CppBase() + 0x1C25268))(this, fireAimRot, outTargetPos, outFirePos, infirePos);
	}
	template <typename T = void> T OnPawnDiedClearWeaponState() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C25464))(this);
	}
	template <typename T = void> T NotifyOwnerDied() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C2553C))(this);
	}
	template <typename T = void> T RefreshLevelEffect(bool forceChange, bool playSound) {
		return ((T (*)(Weapon*, bool, bool))(Il2CppBase() + 0x1C25760))(this, forceChange, playSound);
	}
	template <typename T = bool> T get_IsPickUpGrenade() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C25958))(this);
	}
	template <typename T = void> T set_IsPickUpGrenade(bool value) {
		return ((T (*)(Weapon*, bool))(Il2CppBase() + 0x1C0D0C0))(this, value);
	}
	template <typename T = bool> T get_IsThrowOutPickUpGrenade() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C25960))(this);
	}
	template <typename T = void> T set_IsThrowOutPickUpGrenade(bool value) {
		return ((T (*)(Weapon*, bool))(Il2CppBase() + 0x1C0D0C8))(this, value);
	}
	template <typename T = uintptr_t> T get_PickUpGrenadeProjectile() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C25968))(this);
	}
	template <typename T = void> T set_PickUpGrenadeProjectile(uintptr_t value) {
		return ((T (*)(Weapon*, uintptr_t))(Il2CppBase() + 0x1C25970))(this, value);
	}
	template <typename T = bool> T get_IsInBRThrowWeaponFireState() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C25978))(this);
	}
	template <typename T = void> T set_IsThrowWeaponHoldFireEnd(bool value) {
		return ((T (*)(Weapon*, bool))(Il2CppBase() + 0x1C25980))(this, value);
	}
	template <typename T = bool> T get_IsThrowWeaponHoldFireEnd() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C25988))(this);
	}
	template <typename T = void> T set_IsHoldFireGrenade(bool value) {
		return ((T (*)(Weapon*, bool))(Il2CppBase() + 0x1C25990))(this, value);
	}
	template <typename T = bool> T get_IsHoldFireGrenade() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C25998))(this);
	}
	template <typename T = void> T ThrowWeaponHoldFireEnd() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C259A0))(this);
	}
	template <typename T = void> T CancelFireSound() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C25AC0))(this);
	}
	template <typename T = void> T PlayThrowWeaponAnim_BR(uintptr_t animType, float speed) {
		return ((T (*)(Weapon*, uintptr_t, float))(Il2CppBase() + 0x1C25BA0))(this, animType, speed);
	}
	template <typename T = void> T SetThrowWeaponFireStateValue_BR(bool isInFireState) {
		return ((T (*)(Weapon*, bool))(Il2CppBase() + 0x1C25D44))(this, isInFireState);
	}
	template <typename T = void> T SyncBRThrowWeaponAnim(uintptr_t animType, bool isFastThrow) {
		return ((T (*)(Weapon*, uintptr_t, bool))(Il2CppBase() + 0x1C25EEC))(this, animType, isFastThrow);
	}
	template <typename T = void> T NotifyCancelThrowWeapon() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C26088))(this);
	}
	template <typename T = bool> T get_CancelThrowingWeapon() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C26218))(this);
	}
	template <typename T = bool> T CanSetCancelThrowingWeaponValue() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C26220))(this);
	}
	template <typename T = void> T SetCancelThrowingWeaponValue(bool setValue) {
		return ((T (*)(Weapon*, bool))(Il2CppBase() + 0x1C263B8))(this, setValue);
	}
	template <typename T = bool> T ShouldCancelThrowingWeapon() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C26700))(this);
	}
	template <typename T = bool> T get_HasSwimState() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C26A9C))(this);
	}
	template <typename T = bool> T get_InSwimming() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C26B88))(this);
	}
	template <typename T = void> T NotityMatineeStart() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C26C74))(this);
	}
	template <typename T = void> T NotityEndSwitchRole() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C26D54))(this);
	}
	template <typename T = bool> T IsCanShowKnife() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C26E1C))(this);
	}
	template <typename T = void> T ChangeZoomingFOV() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C26FEC))(this);
	}
	template <typename T = void> T OnPawnSwitchAnimatorController() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C270B4))(this);
	}
	template <typename T = bool> T IsForbiddenMove() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C27194))(this);
	}
	template <typename T = void> T OnStartSwimming() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C27440))(this);
	}
	template <typename T = void> T OnEndSwimming() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C279B0))(this);
	}
	template <typename T = uintptr_t> T GetCurrentActiveStateType() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C10484))(this);
	}
	template <typename T = void> T StartSwimmingChangeClip() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C28190))(this);
	}
	template <typename T = int32_t> T GetWeaponActorId() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C282B4))(this);
	}
	template <typename T = void> T BindUseItemSkinnedMesh(uintptr_t itemMesh) {
		return ((T (*)(Weapon*, uintptr_t))(Il2CppBase() + 0x1C2838C))(this, itemMesh);
	}
	template <typename T = uintptr_t> T CheckAndAddBone(Il2CppString* bonePath, uintptr_t isAddNewBone) {
		return ((T (*)(Weapon*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1C2884C))(this, bonePath, isAddNewBone);
	}
	template <typename T = void> T SetHiddenExceptSight() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C28B8C))(this);
	}
	template <typename T = bool> T CanUseLadder() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C28C54))(this);
	}
	template <typename T = void> T SyncSentryGunCanFire(bool canFire) {
		return ((T (*)(Weapon*, bool))(Il2CppBase() + 0x1C28DF0))(this, canFire);
	}
	template <typename T = bool> T IsNeedShowCancelAim() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C28EC0))(this);
	}
	template <typename T = bool> T IsNeedShowCanceInAimMode() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C28FB0))(this);
	}
	template <typename T = bool> T CanSlideTackle() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C29104))(this);
	}
	template <typename T = bool> T CanRoll() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C291F8))(this);
	}
	template <typename T = void> T OnActivateSetWeaponPart() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C095FC))(this);
	}
	template <typename T = void> T OnDeActivateSetWeaponPart() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C0CE08))(this);
	}
	template <typename T = void> T InitComposePartInfo(int32_t actorID, int32_t modelID) {
		return ((T (*)(Weapon*, int32_t, int32_t))(Il2CppBase() + 0x1C04AFC))(this, actorID, modelID);
	}
	template <typename T = void> T ClearComposePartInfo() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C042FC))(this);
	}
	template <typename T = void> T OnOpenAimResolveJitter() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C202F4))(this);
	}
	template <typename T = void> T OnCloseAimResolveJitter() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C217BC))(this);
	}
	template <typename T = void> T OnRecoverResolveJitter() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C0B6B8))(this);
	}
	template <typename T = void> T TickResetBoneRightHand() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C1CEA4))(this);
	}
	template <typename T = void> T StartTickResetBoneRightHand() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C292EC))(this);
	}
	template <typename T = void> T StopTickResetBoneRightHand() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C296E8))(this);
	}
	template <typename T = bool> T CheckInGameMode() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C297B0))(this);
	}
	template <typename T = void> T OnPreBeginStateSetBoneRightHand(uintptr_t newState, uintptr_t oldState) {
		return ((T (*)(Weapon*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1C29988))(this, newState, oldState);
	}
	template <typename T = void> T ResetCacheBoneRightHandTransform() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C04228))(this);
	}
	template <typename T = void> T InitCacheBoneRightHand() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C29494))(this);
	}
	template <typename T = void> T OnStateChangeFirstPersonCameraFov(bool istoAim) {
		return ((T (*)(Weapon*, bool))(Il2CppBase() + 0x1C20D48))(this, istoAim);
	}
	template <typename T = bool> T IsADSAiming() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C29AF4))(this);
	}
	template <typename T = bool> T IsSpecialAim() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C29BD4))(this);
	}
	template <typename T = bool> T IsCanUse3PView() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C29CA4))(this);
	}
	template <typename T = bool> T IsCanUse1PView() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C29D74))(this);
	}
	template <typename T = void> T CachePrefabConfig() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C0555C))(this);
	}
	template <typename T = void> T ClearPrefabConfig() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C04154))(this);
	}
	template <typename T = bool> T get_ForceAutoChangeClip() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C29E44))(this);
	}
	template <typename T = void> T set_ForceAutoChangeClip(bool value) {
		return ((T (*)(Weapon*, bool))(Il2CppBase() + 0x1C29E4C))(this, value);
	}
	template <typename T = float> T get_FireBoltTime() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFEE44))(this);
	}
	template <typename T = float> T GetFireBoltTime() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C29E54))(this);
	}
	template <typename T = void> T set_LeftFireBoltTime(float value) {
		return ((T (*)(Weapon*, float))(Il2CppBase() + 0x1C08C78))(this, value);
	}
	template <typename T = float> T get_LeftFireBoltTime() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C0A7B0))(this);
	}
	template <typename T = void> T StartAim() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C29F4C))(this);
	}
	template <typename T = void> T StopAim() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C2A03C))(this);
	}
	template <typename T = void> T RecordFireTime() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C10EB8))(this);
	}
	template <typename T = void> T StartFireWithLeftInterval(float left) {
		return ((T (*)(Weapon*, float))(Il2CppBase() + 0x1C2A12C))(this, left);
	}
	template <typename T = void> T StartFire() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C2A2C0))(this);
	}
	template <typename T = bool> T IsDelayStartFireTime() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C2A870))(this);
	}
	template <typename T = void> T StopFire(bool isImmidiately) {
		return ((T (*)(Weapon*, bool))(Il2CppBase() + 0x1C2AA00))(this, isImmidiately);
	}
	template <typename T = void> T ResetFireDataInActiveState() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C0A9FC))(this);
	}
	template <typename T = void> T BeginFireHandler() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C10648))(this);
	}
	template <typename T = void> T BeginFire() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C2ADB0))(this);
	}
	template <typename T = void> T EndFire() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C2AF68))(this);
	}
	template <typename T = bool> T CanFire() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C2B438))(this);
	}
	template <typename T = bool> T CanFireOrAim() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C2B848))(this);
	}
	template <typename T = void> T StartSecondaryFire() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C2B940))(this);
	}
	template <typename T = void> T StopSecondaryFire() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C2BCDC))(this);
	}
	template <typename T = void> T BeginSecondaryFire() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C2BE18))(this);
	}
	template <typename T = void> T EndSecondFire() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C2C12C))(this);
	}
	template <typename T = bool> T ShouldEndChangeClip() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C2C200))(this);
	}
	template <typename T = bool> T CanChangeClip() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C2C348))(this);
	}
	template <typename T = bool> T ShouldAutoChangeClip() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C2C5B8))(this);
	}
	template <typename T = bool> T IsNeedAutoChangeClip() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C2C77C))(this);
	}
	template <typename T = bool> T IsKeepAiming() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C2C94C))(this);
	}
	template <typename T = bool> T IsCanProne() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C2CA50))(this);
	}
	template <typename T = bool> T CanOpenAim() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C2CB40))(this);
	}
	template <typename T = void> T CancelFireState() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C2CC84))(this);
	}
	template <typename T = bool> T InSwitchWeaponState() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C24DB4))(this);
	}
	template <typename T = bool> T IsForbid3DTouch() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C2CD64))(this);
	}
	template <typename T = bool> T IsHideADSButton() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C2CE54))(this);
	}
	template <typename T = bool> T IsCanAuto3Dtouch() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C2D0EC))(this);
	}
	template <typename T = bool> T IsFireButtonEnabled() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C2D250))(this);
	}
	template <typename T = void> T SetResetFireInput(bool reset) {
		return ((T (*)(Weapon*, bool))(Il2CppBase() + 0x1C2D320))(this, reset);
	}
	template <typename T = bool> T IsAimDownAfterFire() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C2D4B8))(this);
	}
	template <typename T = bool> T IsCurrenStateCanSwitchWeapon() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C0EDD0))(this);
	}
	template <typename T = uintptr_t> T get_AnimationComponent() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFDACC))(this);
	}
	template <typename T = float> T get_SpecialEquipAnimRate() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C2D6DC))(this);
	}
	template <typename T = void> T set_SpecialEquipAnimRate(float value) {
		return ((T (*)(Weapon*, float))(Il2CppBase() + 0x1C2D830))(this, value);
	}
	template <typename T = void> T PlayChangeClip(uintptr_t animComp, uintptr_t anim) {
		return ((T (*)(Weapon*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1C2D864))(this, animComp, anim);
	}
	template <typename T = void> T PlaySyncChangeClip(uintptr_t anim) {
		return ((T (*)(Weapon*, uintptr_t))(Il2CppBase() + 0x1C2EA58))(this, anim);
	}
	template <typename T = void> T PlayEquipAnim() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C2ECD8))(this);
	}
	template <typename T = void> T PlaySpecialEquipAnim(float baseValue) {
		return ((T (*)(Weapon*, float))(Il2CppBase() + 0x1C2F0E8))(this, baseValue);
	}
	template <typename T = void> T PlayClimbAnim(Il2CppString* ClimbName) {
		return ((T (*)(Weapon*, Il2CppString*))(Il2CppBase() + 0x1C2F324))(this, ClimbName);
	}
	template <typename T = void> T PlayUnequipAnim() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C2F4F8))(this);
	}
	template <typename T = void> T PlaySwitchAnim(bool immediately) {
		return ((T (*)(Weapon*, bool))(Il2CppBase() + 0x1C2F7D4))(this, immediately);
	}
	template <typename T = void> T PlayFireGroupEndAnim() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C2F924))(this);
	}
	template <typename T = void> T PlayFPModeAim(uintptr_t animComp) {
		return ((T (*)(Weapon*, uintptr_t))(Il2CppBase() + 0x1C2FB0C))(this, animComp);
	}
	template <typename T = void> T PlayAimAnim(uintptr_t animComp, uintptr_t anim, float speed) {
		return ((T (*)(Weapon*, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x1C2FD38))(this, animComp, anim, speed);
	}
	template <typename T = void> T EnableFireLayerAnim(bool enable, float time) {
		return ((T (*)(Weapon*, bool, float))(Il2CppBase() + 0x1C30904))(this, enable, time);
	}
	template <typename T = void> T PlaySyncAimAnim(uintptr_t anim, float speed) {
		return ((T (*)(Weapon*, uintptr_t, float))(Il2CppBase() + 0x1C30C2C))(this, anim, speed);
	}
	template <typename T = void> T PlaySyncAnimation(Il2CppString* animName, float speed, bool clearIdle) {
		return ((T (*)(Weapon*, Il2CppString*, float, bool))(Il2CppBase() + 0x1C30D8C))(this, animName, speed, clearIdle);
	}
	template <typename T = void> T PlayAnimationResetControllerChange() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C31230))(this);
	}
	template <typename T = void> T PlaySyncAnimation_1(int32_t animID, float speed, bool clearIdle) {
		return ((T (*)(Weapon*, int32_t, float, bool))(Il2CppBase() + 0x1C31470))(this, animID, speed, clearIdle);
	}
	template <typename T = void> T PlayAnimation(int32_t animID, float speed, bool clearIdle) {
		return ((T (*)(Weapon*, int32_t, float, bool))(Il2CppBase() + 0x1C31690))(this, animID, speed, clearIdle);
	}
	template <typename T = void> T PlayAnimation_1(Il2CppString* animName, float speed, bool clearIdle) {
		return ((T (*)(Weapon*, Il2CppString*, float, bool))(Il2CppBase() + 0x1C30FAC))(this, animName, speed, clearIdle);
	}
	template <typename T = void> T FadeToAnimState(int32_t stateNameID, float fadeTime, int32_t layer, float fixedTime) {
		return ((T (*)(Weapon*, int32_t, float, int32_t, float))(Il2CppBase() + 0x1C318FC))(this, stateNameID, fadeTime, layer, fixedTime);
	}
	template <typename T = void> T FadeToAnimState_1(int32_t stateNameID, float fadeTime) {
		return ((T (*)(Weapon*, int32_t, float))(Il2CppBase() + 0x1C31A88))(this, stateNameID, fadeTime);
	}
	template <typename T = void> T FadeSyncToAnimState(int32_t stateID, float fadeTime) {
		return ((T (*)(Weapon*, int32_t, float))(Il2CppBase() + 0x1C31BF8))(this, stateID, fadeTime);
	}
	template <typename T = void> T ResetAllAnimatorTrigger() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C31DF8))(this);
	}
	template <typename T = void> T ResetAnimatorTrigger(int32_t paramID) {
		return ((T (*)(Weapon*, int32_t))(Il2CppBase() + 0x1C2A6A4))(this, paramID);
	}
	template <typename T = void> T SetAnimatorTrigger(int32_t paramID) {
		return ((T (*)(Weapon*, int32_t))(Il2CppBase() + 0x1C31FB4))(this, paramID);
	}
	template <typename T = void> T UpdateAnimationCull(uintptr_t mode) {
		return ((T (*)(Weapon*, uintptr_t))(Il2CppBase() + 0x1C32198))(this, mode);
	}
	template <typename T = bool> T IsBanChangeAnimSpeedInState() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C322E8))(this);
	}
	template <typename T = void> T SetAnimationValue(int32_t paramID, float inputValue) {
		return ((T (*)(Weapon*, int32_t, float))(Il2CppBase() + 0x1C323C0))(this, paramID, inputValue);
	}
	template <typename T = void> T SetAnimationValue_1(int32_t paramID, bool inputValue) {
		return ((T (*)(Weapon*, int32_t, bool))(Il2CppBase() + 0x1C32538))(this, paramID, inputValue);
	}
	template <typename T = void> T SetSyncAnimationValue(int32_t paramID, bool inputValue) {
		return ((T (*)(Weapon*, int32_t, bool))(Il2CppBase() + 0x1C326B0))(this, paramID, inputValue);
	}
	template <typename T = void> T SetPlaySpeed(float speed) {
		return ((T (*)(Weapon*, float))(Il2CppBase() + 0x1C328C0))(this, speed);
	}
	template <typename T = void> T SetStateSpeed(int32_t layerIndex, Il2CppString* stateName, float speed) {
		return ((T (*)(Weapon*, int32_t, Il2CppString*, float))(Il2CppBase() + 0x1C32A5C))(this, layerIndex, stateName, speed);
	}
	template <typename T = float> T CalcFireAnimationSpeed(Il2CppString* stateName, int32_t layerIndex, Il2CppString* suffix) {
		return ((T (*)(Weapon*, Il2CppString*, int32_t, Il2CppString*))(Il2CppBase() + 0x1C32C20))(this, stateName, layerIndex, suffix);
	}
	template <typename T = float> T CalcUnAimmingFireAnimationSpeed() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C32EC8))(this);
	}
	template <typename T = bool> T IsAimDownFire() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C32F98))(this);
	}
	template <typename T = void> T PlayFireAnim() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C330A0))(this);
	}
	template <typename T = void> T SetMeleeFireAnim(uintptr_t animComp, uintptr_t layerIndex, uintptr_t animName, uintptr_t animID) {
		return ((T (*)(Weapon*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1C33D00))(this, animComp, layerIndex, animName, animID);
	}
	template <typename T = bool> T ShouldPlayCameraAnim() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C34184))(this);
	}
	template <typename T = void> T PlayAimingCameraAnim() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C34360))(this);
	}
	template <typename T = void> T PlayEndFireCameraAim() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C34640))(this);
	}
	template <typename T = void> T PlayFireCameraAnim() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C2AC38))(this);
	}
	template <typename T = bool> T ShouldUpdateFirstPersonMovingAnimation() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C34734))(this);
	}
	template <typename T = void> T SetFPLeftHandActive(bool active) {
		return ((T (*)(Weapon*, bool))(Il2CppBase() + 0x1C34998))(this, active);
	}
	template <typename T = void> T SetFPSwimLeftHandActive(bool active, bool setlayerInstantly, bool stopSoft) {
		return ((T (*)(Weapon*, bool, bool, bool))(Il2CppBase() + 0x1C20B04))(this, active, setlayerInstantly, stopSoft);
	}
	template <typename T = void> T SetFPLeftHandVisibleByAni(bool isHide) {
		return ((T (*)(Weapon*, bool))(Il2CppBase() + 0x1C34B10))(this, isHide);
	}
	template <typename T = void> T ClearFPIKScript() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C043D0))(this);
	}
	template <typename T = void> T OnInitFPIKScript() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C053FC))(this);
	}
	template <typename T = void> T SetFPLeftHandVisible(bool isHide) {
		return ((T (*)(Weapon*, bool))(Il2CppBase() + 0x1C28040))(this, isHide);
	}
	template <typename T = void> T SetFPLeftHandFixedToDest(bool isFixedLeftHandToDest) {
		return ((T (*)(Weapon*, bool))(Il2CppBase() + 0x1C34D18))(this, isFixedLeftHandToDest);
	}
	template <typename T = void> T SetFPLeftHandToDestDir(Il2CppVector3 vLeftHandToDestDir) {
		return ((T (*)(Weapon*, Il2CppVector3))(Il2CppBase() + 0x1C34E68))(this, vLeftHandToDestDir);
	}
	template <typename T = void> T RunFPIK(bool synPosition, bool syncRotation, bool syncRightClav, bool soft) {
		return ((T (*)(Weapon*, bool, bool, bool, bool))(Il2CppBase() + 0x1C276D4))(this, synPosition, syncRotation, syncRightClav, soft);
	}
	template <typename T = void> T RunIK(bool runLeftIk, bool synLeftPos, bool syncLeftRot, bool runRightIk, bool soft, float transitionTime) {
		return ((T (*)(Weapon*, bool, bool, bool, bool, bool, float))(Il2CppBase() + 0x1C34FE0))(this, runLeftIk, synLeftPos, syncLeftRot, runRightIk, soft, transitionTime);
	}
	template <typename T = void> T StopFPIK(bool soft, bool rightHansSoft, float softTransitionTime) {
		return ((T (*)(Weapon*, bool, bool, float))(Il2CppBase() + 0x1C27EC4))(this, soft, rightHansSoft, softTransitionTime);
	}
	template <typename T = void> T RunSwimIK() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C27860))(this);
	}
	template <typename T = void> T StopSwimIK(float softTransitionTime) {
		return ((T (*)(Weapon*, float))(Il2CppBase() + 0x1C27CF0))(this, softTransitionTime);
	}
	template <typename T = void> T CheckAttachFPAnimationSyncController() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3518C))(this);
	}
	template <typename T = void> T AttachFPAnimationSyncController(uintptr_t mesh) {
		return ((T (*)(Weapon*, uintptr_t))(Il2CppBase() + 0x1C05038))(this, mesh);
	}
	template <typename T = void> T DettachFPAnimationSyncController(uintptr_t mesh) {
		return ((T (*)(Weapon*, uintptr_t))(Il2CppBase() + 0x1C352DC))(this, mesh);
	}
	template <typename T = void> T ActiviteFPAnimationSyncController() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C0A4C8))(this);
	}
	template <typename T = void> T SyncFPAniamtion(Il2CppArray<uintptr_t>* cachedTrans) {
		return ((T (*)(Weapon*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1C3558C))(this, cachedTrans);
	}
	template <typename T = bool> T SholdShowWeaponInSwim() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3565C))(this);
	}
	template <typename T = float> T GetFireAnimLength() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C35778))(this);
	}
	template <typename T = void> T PlayMeleeFireAnim() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C36028))(this);
	}
	template <typename T = void> T PlayIdleAnim() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C36458))(this);
	}
	template <typename T = void> T PlayFirstPersonMovingAnimation() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C365A4))(this);
	}
	template <typename T = bool> T IsSpectatingSetMoveSpeed0() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C36A3C))(this);
	}
	template <typename T = void> T SetMoveClipSpeedMul() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C36B0C))(this);
	}
	template <typename T = void> T RecoverMoveClipSpeedMul(uintptr_t moveClipType) {
		return ((T (*)(Weapon*, uintptr_t))(Il2CppBase() + 0x1C36E10))(this, moveClipType);
	}
	template <typename T = void> T ResetMoveClipSpeedMul(uintptr_t moveClipType) {
		return ((T (*)(Weapon*, uintptr_t))(Il2CppBase() + 0x1C370F8))(this, moveClipType);
	}
	template <typename T = void> T ResetAnimatorController() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C37AFC))(this);
	}
	template <typename T = void> T ReInitFPAnimParameter() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C38054))(this);
	}
	template <typename T = bool> T ShouldRunningIK() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C382C4))(this);
	}
	template <typename T = void> T SetCurrentWeaponControllerID() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C02708))(this);
	}
	template <typename T = void> T InitWeaponControllerAsset() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C383D8))(this);
	}
	template <typename T = uintptr_t> T GetTPController() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C38848))(this);
	}
	template <typename T = uintptr_t> T get_CurrentRuntimeAnimatorController() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C38AC0))(this);
	}
	template <typename T = void> T UpdateCameraAnimTypeAndSpeed(uintptr_t moveClipType, float aimClipTime) {
		return ((T (*)(Weapon*, uintptr_t, float))(Il2CppBase() + 0x1C37768))(this, moveClipType, aimClipTime);
	}
	template <typename T = uintptr_t> T GetCameraAnimData(uintptr_t animType) {
		return ((T (*)(Weapon*, uintptr_t))(Il2CppBase() + 0x1C38AC8))(this, animType);
	}
	template <typename T = uintptr_t> T get_CurPlayingCameraAnimType() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C38D28))(this);
	}
	template <typename T = bool> T IsCameraAnimeedStartTransition(uintptr_t animType) {
		return ((T (*)(Weapon*, uintptr_t))(Il2CppBase() + 0x1C38D30))(this, animType);
	}
	template <typename T = void> T PlayCameraAnim(uintptr_t animData, float speed, bool isLoop, uintptr_t camType, uintptr_t inAnimType) {
		return ((T (*)(Weapon*, uintptr_t, float, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x1C38E20))(this, animData, speed, isLoop, camType, inAnimType);
	}
	template <typename T = void> T PlayCameraAnim_1(uintptr_t animType, float speed, bool isLoop, uintptr_t camType) {
		return ((T (*)(Weapon*, uintptr_t, float, bool, uintptr_t))(Il2CppBase() + 0x1C34498))(this, animType, speed, isLoop, camType);
	}
	template <typename T = void> T PlayCameraAnimInTime(uintptr_t animType, float time, bool isLoop, uintptr_t camType) {
		return ((T (*)(Weapon*, uintptr_t, float, bool, uintptr_t))(Il2CppBase() + 0x1C2E7D8))(this, animType, time, isLoop, camType);
	}
	template <typename T = void> T StopCameraAnim(bool soft) {
		return ((T (*)(Weapon*, bool))(Il2CppBase() + 0x1C1AA10))(this, soft);
	}
	template <typename T = bool> T IsChangeClipCameraAnim(uintptr_t animType) {
		return ((T (*)(Weapon*, uintptr_t))(Il2CppBase() + 0x1C39090))(this, animType);
	}
	template <typename T = void> T TickPawnMoveCameraAnimation() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C1CB70))(this);
	}
	template <typename T = void> T ResetAnimatorController_1(uintptr_t controller) {
		return ((T (*)(Weapon*, uintptr_t))(Il2CppBase() + 0x1C3917C))(this, controller);
	}
	template <typename T = void> T AddAnimationClipEvent_3P() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C392A4))(this);
	}
	template <typename T = void> T AddAnimationClipEvent() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C39674))(this);
	}
	template <typename T = void> T AnimaitionEventPutDownCallBack() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3A000))(this);
	}
	template <typename T = void> T AnimaitionEventEquipCallBack() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3A1C4))(this);
	}
	template <typename T = void> T AnimationEventCallBack_1PCamera() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3A2F8))(this);
	}
	template <typename T = void> T set_AnimationEventCallBackEnable(bool value) {
		return ((T (*)(Weapon*, bool))(Il2CppBase() + 0x1C3A404))(this, value);
	}
	template <typename T = void> T AnimationEventCallBack_1PRun() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3A40C))(this);
	}
	template <typename T = void> T AnimationEventCallBack_1PMove() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3A614))(this);
	}
	template <typename T = void> T AnimationEventCallBack_1PAimingMove() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3A884))(this);
	}
	template <typename T = bool> T HasEnoughTime() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3AB08))(this);
	}
	template <typename T = void> T AnimationEventCallBack_1PRun_Camera() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3AC1C))(this);
	}
	template <typename T = void> T AnimationEventCallBack_1PMove_Camera() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3AD1C))(this);
	}
	template <typename T = void> T PlayBRClimbAnim(float normalizedTime) {
		return ((T (*)(Weapon*, float))(Il2CppBase() + 0x1C3AE1C))(this, normalizedTime);
	}
	template <typename T = uintptr_t> T get_Mesh1P() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3B0A0))(this);
	}
	template <typename T = uintptr_t> T get_Mesh3P() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3B0A8))(this);
	}
	template <typename T = bool> T ShouldCacheWeaponMesh() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3B0B0))(this);
	}
	template <typename T = void> T CacheMeshAsset() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C04538))(this);
	}
	template <typename T = void> T ClearCacheMeshAsset() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C0CAF8))(this);
	}
	template <typename T = bool> T HadCacheMesh() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C02ADC))(this);
	}
	template <typename T = uintptr_t> T get_SecondaryFireComponentType() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3B180))(this);
	}
	template <typename T = bool> T get_SecondaryFireNeedsSwitch() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3B188))(this);
	}
	template <typename T = int32_t> T get_MeshAssetID1P() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3B190))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SkinID_Sight() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3B198))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SkinID_Sto() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3B1A0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SkinID_Iro() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3B1A8))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SkinID_Rai() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3B1B0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SkinID_Grip() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3B1B8))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SkinID_Muzzle() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3B1C0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SkinID_Mag() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3B1C8))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_MainWeaponRoot() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3B1D0))(this);
	}
	template <typename T = float> T get_DoChangeClipTimeRate() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3B1D8))(this);
	}
	template <typename T = bool> T get_IdleStateEnable() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3B1E0))(this);
	}
	template <typename T = int32_t> T get_WeaponShakeRecoilID() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3B1E8))(this);
	}
	template <typename T = int32_t> T get_WeaponShakeRecoilClose() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3B1F0))(this);
	}
	template <typename T = float> T get_SwimZoomOffset() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C35184))(this);
	}
	template <typename T = bool> T get_IsHoldingAssitance() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3B1F8))(this);
	}
	template <typename T = bool> T get_HoldDoubleClickAim() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3B200))(this);
	}
	template <typename T = bool> T get_SupportAimedFire() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C2CC7C))(this);
	}
	template <typename T = bool> T get_SupportHipFire() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C0222C))(this);
	}
	template <typename T = float> T get_DelaySprintFire() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3417C))(this);
	}
	template <typename T = bool> T get_SwichLastWeapon() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3B208))(this);
	}
	template <typename T = float> T get_AimAssitanceDelay() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3B210))(this);
	}
	template <typename T = bool> T get_UsePlayTricky() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3B218))(this);
	}
	template <typename T = bool> T get_SpeedThrowWithNoEquip() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3B220))(this);
	}
	template <typename T = bool> T get_SwimFireLeftHandHoldWeapon() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3B228))(this);
	}
	template <typename T = bool> T get_IsCloseAimAfterSingleFire() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3B230))(this);
	}
	template <typename T = bool> T IsCurrentCloseAimAfterSingleFire() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C24634))(this);
	}
	template <typename T = bool> T get_CanAutoFire() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C2D248))(this);
	}
	template <typename T = void> T set_CanAutoFire(bool value) {
		return ((T (*)(Weapon*, bool))(Il2CppBase() + 0x1C3B238))(this, value);
	}
	template <typename T = bool> T get_IsAutoFire() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C34288))(this);
	}
	template <typename T = float> T get_RecoilScaleWeaponShake() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3B240))(this);
	}
	template <typename T = float> T get_CameraFOV() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C1E6DC))(this);
	}
	template <typename T = float> T GetMPMatchObserverFOV() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3B248))(this);
	}
	template <typename T = void> T SetCameraFOV() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C02034))(this);
	}
	template <typename T = float> T get_SwitchTime() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3B3C0))(this);
	}
	template <typename T = float> T get_GetReadyTime() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFD7B0))(this);
	}
	template <typename T = float> T get_UnAimingTime() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3B3C8))(this);
	}
	template <typename T = void> T set_AimminTime(float value) {
		return ((T (*)(Weapon*, float))(Il2CppBase() + 0x1C3B3D0))(this, value);
	}
	template <typename T = float> T get_AimminTime() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3B3D8))(this);
	}
	template <typename T = float> T get_MaxHotValue() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C1D620))(this);
	}
	template <typename T = float> T get_OverHotCDTime() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3B3E0))(this);
	}
	template <typename T = bool> T get_IgnoreSyncServer() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C2AF60))(this);
	}
	template <typename T = void> T set_IgnoreSyncServer(bool value) {
		return ((T (*)(Weapon*, bool))(Il2CppBase() + 0x1BEFAF4))(this, value);
	}
	template <typename T = float> T get_DblclickDelay() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3B3E8))(this);
	}
	template <typename T = float> T get_DblclickAnimTime() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3B3F0))(this);
	}
	template <typename T = float> T get_AimingWorldFov() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C1F7BC))(this);
	}
	template <typename T = void> T set_AimingWorldFov(float value) {
		return ((T (*)(Weapon*, float))(Il2CppBase() + 0x1C3B3F8))(this, value);
	}
	template <typename T = float> T get_AimingWorldFOVOpenTime() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1BFE8B0))(this);
	}
	template <typename T = void> T set_AimingWorldFOVOpenTime(float value) {
		return ((T (*)(Weapon*, float))(Il2CppBase() + 0x1C3B400))(this, value);
	}
	template <typename T = float> T get_AimingCameraAddRotateRate() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3B408))(this);
	}
	template <typename T = void> T set_AimingCameraAddRotateRate(float value) {
		return ((T (*)(Weapon*, float))(Il2CppBase() + 0x1C3B410))(this, value);
	}
	template <typename T = bool> T get_IsPlayAiming() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3B418))(this);
	}
	template <typename T = bool> T get_IsAiming() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3B420))(this);
	}
	template <typename T = bool> T IsDowningProcess() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3B428))(this);
	}
	template <typename T = bool> T get_IsAimingProcess() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3B51C))(this);
	}
	template <typename T = float> T get_MovementScaleBase() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3B568))(this);
	}
	template <typename T = void> T set_MovementScaleBase(float value) {
		return ((T (*)(Weapon*, float))(Il2CppBase() + 0x1C3B570))(this, value);
	}
	template <typename T = float> T get_MovementScale() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C1B770))(this);
	}
	template <typename T = void> T set_SprintMovementScaleBase(float value) {
		return ((T (*)(Weapon*, float))(Il2CppBase() + 0x1C3B578))(this, value);
	}
	template <typename T = float> T get_SprintMovementScaleBase() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3B580))(this);
	}
	template <typename T = void> T set_SprintMovementScale(float value) {
		return ((T (*)(Weapon*, float))(Il2CppBase() + 0x1C3B588))(this, value);
	}
	template <typename T = float> T get_SprintMovementScale() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C1BDDC))(this);
	}
	template <typename T = float> T get_CrouchingSprintSpeedScale() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C1BB6C))(this);
	}
	template <typename T = float> T get_CrouchingSpeedScale() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C1BCA4))(this);
	}
	template <typename T = float> T get_ProneSpeedScale() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C1BA20))(this);
	}
	template <typename T = float> T get_DyingSpeedScale() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C1B778))(this);
	}
	template <typename T = void> T set_AimingMovementScaleBase(float value) {
		return ((T (*)(Weapon*, float))(Il2CppBase() + 0x1C3B590))(this, value);
	}
	template <typename T = float> T get_AimingMovementScaleBase() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3B598))(this);
	}
	template <typename T = void> T set_AimingMovementScale(float value) {
		return ((T (*)(Weapon*, float))(Il2CppBase() + 0x1C3B5A0))(this, value);
	}
	template <typename T = float> T get_AimingMovementScale() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C1B8D0))(this);
	}
	template <typename T = void> T set_AimingCrouchMovementScale(float value) {
		return ((T (*)(Weapon*, float))(Il2CppBase() + 0x1C3B5A8))(this, value);
	}
	template <typename T = float> T get_AimingCrouchMovementScale() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C1B780))(this);
	}
	template <typename T = void> T set_PenetrationValue(float value) {
		return ((T (*)(Weapon*, float))(Il2CppBase() + 0x1C3B5B0))(this, value);
	}
	template <typename T = void> T set_CrosshairLength(float value) {
		return ((T (*)(Weapon*, float))(Il2CppBase() + 0x1C3B5B8))(this, value);
	}
	template <typename T = float> T get_CrosshairLength() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3B5C0))(this);
	}
	template <typename T = void> T set_CrosshairSize(float value) {
		return ((T (*)(Weapon*, float))(Il2CppBase() + 0x1C3B5C8))(this, value);
	}
	template <typename T = float> T get_CrosshairSize() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3B5D0))(this);
	}
	template <typename T = float> T get_AimingCrosshairLengthRatio() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3B5D8))(this);
	}
	template <typename T = void> T set_AimingCrosshairLengthRatio(float value) {
		return ((T (*)(Weapon*, float))(Il2CppBase() + 0x1C3B5E0))(this, value);
	}
	template <typename T = float> T get_AimingCrosshairSizeRatio() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3B5E8))(this);
	}
	template <typename T = void> T set_AimingCrosshairSizeRatio(float value) {
		return ((T (*)(Weapon*, float))(Il2CppBase() + 0x1C3B5F0))(this, value);
	}
	template <typename T = float> T get_StartFireInterval() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3B5F8))(this);
	}
	template <typename T = float> T get_StopFireInterval() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3B600))(this);
	}
	template <typename T = float> T get_WeaponAimModifyPercent() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3B608))(this);
	}
	template <typename T = void> T set_WeaponAimModifyPercent(float value) {
		return ((T (*)(Weapon*, float))(Il2CppBase() + 0x1C3B610))(this, value);
	}
	template <typename T = float> T get_AimingFireAnimPercent() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C33CF8))(this);
	}
	template <typename T = void> T set_AimingFireAnimPercent(float value) {
		return ((T (*)(Weapon*, float))(Il2CppBase() + 0x1C3B618))(this, value);
	}
	template <typename T = bool> T get_IsOpenPVEAssistAimRotateTimeAiming() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3B620))(this);
	}
	template <typename T = float> T get_AutoAssistAimRatesAiming() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3B628))(this);
	}
	template <typename T = float> T get_AutoLockTime() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3B630))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_AutoAssistAimRates() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C19454))(this);
	}
	template <typename T = void> T set_AutoAssistAimRates(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(Weapon*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1C3B638))(this, value);
	}
	template <typename T = bool> T get_IsAutoAssistWay() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3B640))(this);
	}
	template <typename T = bool> T get_IsAutoAssistWay_Controller() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3B68C))(this);
	}
	template <typename T = float> T get_MagAssitAimOffDis() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3B6AC))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_AutoAssistAimRanges() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C18DA4))(this);
	}
	template <typename T = void> T set_AutoAssistAimRanges(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(Weapon*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1C3B6B4))(this, value);
	}
	template <typename T = bool> T get_Nonlinearity() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C1963C))(this);
	}
	template <typename T = float> T get_AimTargetOffset() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3B6BC))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_DampAssistAimRateFactor() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3B6C4))(this);
	}
	template <typename T = float> T DampAssitAimRateFactor(float dis, bool gamepadInput) {
		return ((T (*)(Weapon*, float, bool))(Il2CppBase() + 0x1C16A14))(this, dis, gamepadInput);
	}
	template <typename T = float> T MinDampAssitAimRateFactor(float dis) {
		return ((T (*)(Weapon*, float))(Il2CppBase() + 0x1C1660C))(this, dis);
	}
	template <typename T = float> T MaxDampAssitAimRateFactor(float dis) {
		return ((T (*)(Weapon*, float))(Il2CppBase() + 0x1C16810))(this, dis);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_AssistAimRotateTimes() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C18C8C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_MagnAssitAimRateFactors() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3B7DC))(this);
	}
	template <typename T = float> T MagnAssitAimRateFactor(float dis, bool gamepadInput) {
		return ((T (*)(Weapon*, float, bool))(Il2CppBase() + 0x1C3B8F4))(this, dis, gamepadInput);
	}
	template <typename T = bool> T get_PVEWeaponSingleHud() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3BC28))(this);
	}
	template <typename T = bool> T get_InfiniteWeaponAmmo() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3BC30))(this);
	}
	template <typename T = bool> T get_HasSecondaryFireAnim() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3BC38))(this);
	}
	template <typename T = bool> T get_IsNeedAdsFire() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3BC40))(this);
	}
	template <typename T = float> T get_DelayHideThrowLine() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3BC48))(this);
	}
	template <typename T = float> T get_DelayHideFastThrowLine() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3BC50))(this);
	}
	template <typename T = float> T get_DelayFastFireElapseScale() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3BC58))(this);
	}
	template <typename T = float> T DelayFireElapseScale() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3BC60))(this);
	}
	template <typename T = bool> T get_IsShowHoldLine() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3BE04))(this);
	}
	template <typename T = bool> T get_IsNeedFastThrow() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3BE0C))(this);
	}
	template <typename T = bool> T get_UseInVehicle() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3BE14))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_MuzzleFlashSockets() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3BE1C))(this);
	}
	template <typename T = uintptr_t> T get_MuzzleFlashSocket() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3BE24))(this);
	}
	template <typename T = int32_t> T get_MuzzleFlashAssetID1POnSKill() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3BE58))(this);
	}
	template <typename T = void> T set_MuzzleFlashAssetID1POnSKill(int32_t value) {
		return ((T (*)(Weapon*, int32_t))(Il2CppBase() + 0x1C3BE60))(this, value);
	}
	template <typename T = int32_t> T get_MuzzleEffectGroupIDOnSkill() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3BF74))(this);
	}
	template <typename T = void> T set_MuzzleEffectGroupIDOnSkill(int32_t value) {
		return ((T (*)(Weapon*, int32_t))(Il2CppBase() + 0x1C3BF7C))(this, value);
	}
	template <typename T = uintptr_t> T get_MuzzleEffectGroupRef() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3C06C))(this);
	}
	template <typename T = void> T set_MuzzleEffectGroupRef(uintptr_t value) {
		return ((T (*)(Weapon*, uintptr_t))(Il2CppBase() + 0x1C3C074))(this, value);
	}
	template <typename T = uintptr_t> T get_FireEffectSocket() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3C07C))(this);
	}
	template <typename T = uintptr_t> T get_CacheWeaponPromotionUnlockData() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3C084))(this);
	}
	template <typename T = void> T AddAssetToPreLoadList(int32_t assetId) {
		return ((T (*)(Weapon*, int32_t))(Il2CppBase() + 0x1C3C1B4))(this, assetId);
	}
	template <typename T = void> T AddAssetToPreInstantiateList(int32_t assetId) {
		return ((T (*)(Weapon*, int32_t))(Il2CppBase() + 0x1C3C2CC))(this, assetId);
	}
	template <typename T = void> T ClearPreInstantiateAssetTimer() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C089B8))(this);
	}
	template <typename T = void> T PreInstantiateAsset() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3C438))(this);
	}
	template <typename T = void> T AddProjAssetToPreLoadList(uintptr_t projectileData) {
		return ((T (*)(Weapon*, uintptr_t))(Il2CppBase() + 0x1C3C7D4))(this, projectileData);
	}
	template <typename T = void> T PreloadWeaponEffects() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C02D70))(this);
	}
	template <typename T = void> T PlayFireEffect() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3CDA8))(this);
	}
	template <typename T = void> T PlayMuzzleFlashEffect() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3CF74))(this);
	}
	template <typename T = void> T RefreshMuzzleFlashEffect() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3BE74))(this);
	}
	template <typename T = void> T RefreshExtraEffects() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3D30C))(this);
	}
	template <typename T = void> T RefreshEffects() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3BF90))(this);
	}
	template <typename T = void> T PlayMuzzleFlashChargingEffect() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3D3E8))(this);
	}
	template <typename T = float> T GetMuzzleFlashEffectScale() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3DE7C))(this);
	}
	template <typename T = void> T PlayShellDropEffect() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3E010))(this);
	}
	template <typename T = uintptr_t> T PlayEffectWithSocketName(int32_t effectId, Il2CppString* socketName) {
		return ((T (*)(Weapon*, int32_t, Il2CppString*))(Il2CppBase() + 0x1C3E834))(this, effectId, socketName);
	}
	template <typename T = uintptr_t> T SpawnLevelEffectWithSocketName(int32_t effectId, Il2CppString* socketName) {
		return ((T (*)(Weapon*, int32_t, Il2CppString*))(Il2CppBase() + 0x1C3EBB8))(this, effectId, socketName);
	}
	template <typename T = int32_t> T GetBulletTraceEffectAssetID() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3F4D0))(this);
	}
	template <typename T = bool> T CanPlayBulletSmokeEffect() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3CA98))(this);
	}
	template <typename T = int32_t> T GetBulletSmokeEffectAssetID() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3CBF4))(this);
	}
	template <typename T = void> T PlayBulletTraceEffect(Il2CppVector3 startPos, Il2CppVector3 endPos) {
		return ((T (*)(Weapon*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x1C3F600))(this, startPos, endPos);
	}
	template <typename T = void> T PlayBulletSmokeEffect(Il2CppVector3 startPos, Il2CppVector3 endPos) {
		return ((T (*)(Weapon*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x1C40478))(this, startPos, endPos);
	}
	template <typename T = void> T StopFireEffect() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C40788))(this);
	}
	template <typename T = void> T StopMuzzleFlashChargingEffect() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C409E8))(this);
	}
	template <typename T = Il2CppVector3> T GetStartTracePosition() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C40C48))(this);
	}
	template <typename T = void> T PlayFireIntervalChangedEffect() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C09A08))(this);
	}
	template <typename T = void> T StopFireIntervalChangedEffect() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C0C984))(this);
	}
	template <typename T = void> T CheckSpawnFireEffect() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C40ECC))(this);
	}
	template <typename T = void> T InitShellDropSocket() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C40FD4))(this);
	}
	template <typename T = void> T InitMuzzleFlashSocket() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C410E4))(this);
	}
	template <typename T = void> T CreateMuzzleFlashChargingEffect() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3D5D8))(this);
	}
	template <typename T = void> T CreateMuzzleFlashEffect() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3D1B4))(this);
	}
	template <typename T = int32_t> T GetCurMuzzleFlashChargingID() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C4142C))(this);
	}
	template <typename T = int32_t> T GetCurMuzzleFlashID() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C41770))(this);
	}
	template <typename T = int32_t> T GetMuzzleFlashIDFromConfig(uintptr_t config) {
		return ((T (*)(Weapon*, uintptr_t))(Il2CppBase() + 0x1C423D4))(this, config);
	}
	template <typename T = int32_t> T GetMuzzleFlashIDFromSelf() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C42588))(this);
	}
	template <typename T = uintptr_t> T GetAssetGroupConfig() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C0F918))(this);
	}
	template <typename T = uintptr_t> T GetMuzzleEffectGroup() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3C8D4))(this);
	}
	template <typename T = void> T SetZeroOffsetSync(uintptr_t effect, uintptr_t target) {
		return ((T (*)(Weapon*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1C3E620))(this, effect, target);
	}
	template <typename T = void> T LoadSpawnFireEffect(int32_t muzzleFlashAssetID, Il2CppArray<uintptr_t>* muzzleFlashEffect) {
		return ((T (*)(Weapon*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1C4186C))(this, muzzleFlashAssetID, muzzleFlashEffect);
	}
	template <typename T = int32_t> T GetCurShellDropEffectId() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C3E4A8))(this);
	}
	template <typename T = int32_t> T GetShellDropEffectIdFromConfig(uintptr_t config) {
		return ((T (*)(Weapon*, uintptr_t))(Il2CppBase() + 0x1C426A0))(this, config);
	}
	template <typename T = void> T ResetMuzzleSocketName(Il2CppString* socketName, int32_t MuzzleFlashAssetID1P, int32_t MuzzleFlashAssetID3P, int32_t MuzzleFlashToAimAssetID1P, int32_t MuzzleFlashToAimAssetID3P, uintptr_t MuzzleGameObject, bool ChangeMuzzleFlash) {
		return ((T (*)(Weapon*, Il2CppString*, int32_t, int32_t, int32_t, int32_t, uintptr_t, bool))(Il2CppBase() + 0x1C4281C))(this, socketName, MuzzleFlashAssetID1P, MuzzleFlashAssetID3P, MuzzleFlashToAimAssetID1P, MuzzleFlashToAimAssetID3P, MuzzleGameObject, ChangeMuzzleFlash);
	}
	template <typename T = bool> T CheckeMuzzleEffectUseFirstPerson() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C41584))(this);
	}
	template <typename T = void> T UpdateMuzzleEffectHipLayer() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C42068))(this);
	}
	template <typename T = void> T HideMuzzleFlashEffect() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C42B48))(this);
	}
	template <typename T = void> T PlaySpecialUnAimingEffect() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C214E0))(this);
	}
	template <typename T = void> T SpawnExtraEffects() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C09EC4))(this);
	}
	template <typename T = void> T DespawnExtraEffects() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C0BFE0))(this);
	}
	template <typename T = uintptr_t> T AddExtraEffect(int32_t effectId, Il2CppString* socketName) {
		return ((T (*)(Weapon*, int32_t, Il2CppString*))(Il2CppBase() + 0x1C42ED8))(this, effectId, socketName);
	}
	template <typename T = void> T RemoveExtraEffect(uintptr_t effect) {
		return ((T (*)(Weapon*, uintptr_t))(Il2CppBase() + 0x1C430B8))(this, effect);
	}
	template <typename T = void> T ChangeEffectLevel(int32_t newLevel, bool forceChange, bool playSound) {
		return ((T (*)(Weapon*, int32_t, bool, bool))(Il2CppBase() + 0x1C0B9C8))(this, newLevel, forceChange, playSound);
	}
	template <typename T = uintptr_t> T HighMeshRenderer() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C432E0))(this);
	}
	template <typename T = uintptr_t> T get_OpticsRoot() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C43428))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_WeaponPartList() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C43510))(this);
	}
	template <typename T = int32_t> T get_CrossHairCustomID() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C43518))(this);
	}
	template <typename T = void> T set_CrossHairCustomID(int32_t value) {
		return ((T (*)(Weapon*, int32_t))(Il2CppBase() + 0x1C43520))(this, value);
	}
	template <typename T = int32_t> T GetCrossHairCustomID() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C43528))(this);
	}
	template <typename T = void> T InitWeaponPart(bool isAutoActive) {
		return ((T (*)(Weapon*, bool))(Il2CppBase() + 0x1C435F8))(this, isAutoActive);
	}
	template <typename T = uintptr_t> T InitOneWeaponPart(uintptr_t partInfo, bool isAutoActivate) {
		return ((T (*)(Weapon*, uintptr_t, bool))(Il2CppBase() + 0x1C43A2C))(this, partInfo, isAutoActivate);
	}
	template <typename T = void> T ApplyThrowWeaponAmmoCount() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C438D0))(this);
	}
	template <typename T = void> T InitOpticsAvatarWithoutPart() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C056BC))(this);
	}
	template <typename T = void> T InitOpticsAvatar(uintptr_t component) {
		return ((T (*)(Weapon*, uintptr_t))(Il2CppBase() + 0x1C44328))(this, component);
	}
	template <typename T = void> T InitOpticsAvatarChangeComponent() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C43FF8))(this);
	}
	template <typename T = void> T OpticsAvatarChange(uintptr_t stateType) {
		return ((T (*)(Weapon*, uintptr_t))(Il2CppBase() + 0x1C22434))(this, stateType);
	}
	template <typename T = void> T ResetOpticsAvatarChangePercent(float openPercent, float closePercent, int32_t assetID, int32_t index) {
		return ((T (*)(Weapon*, float, float, int32_t, int32_t))(Il2CppBase() + 0x1C445D8))(this, openPercent, closePercent, assetID, index);
	}
	template <typename T = void> T CleanOpticsAvatarChangeComponent() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C446FC))(this);
	}
	template <typename T = void> T CheckDoForceHideNormalMeshRenderer(uintptr_t newState, uintptr_t oldState) {
		return ((T (*)(Weapon*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1C22B1C))(this, newState, oldState);
	}
	template <typename T = void> T DoShowWeaponPart(int32_t weaponPartCategory) {
		return ((T (*)(Weapon*, int32_t))(Il2CppBase() + 0x1C44848))(this, weaponPartCategory);
	}
	template <typename T = void> static T OnShowWeaponPartProcess(int32_t weaponAssetID, int32_t weaponPartCategory, Il2CppList<void*>* childrenAsset, uintptr_t optimizedModel) {
		return ((T (*)(void *, int32_t, int32_t, Il2CppList<void*>*, uintptr_t))(Il2CppBase() + 0x1C44A64))(0, weaponAssetID, weaponPartCategory, childrenAsset, optimizedModel);
	}
	template <typename T = void> T DoHideWeaponPart(int32_t weaponPartCategory) {
		return ((T (*)(Weapon*, int32_t))(Il2CppBase() + 0x1C44F3C))(this, weaponPartCategory);
	}
	template <typename T = void> static T OnHideWeaponPartProcess(int32_t weaponAssetID, int32_t weaponPartCategory, Il2CppList<void*>* childrenAsset, uintptr_t optimizedModel) {
		return ((T (*)(void *, int32_t, int32_t, Il2CppList<void*>*, uintptr_t))(Il2CppBase() + 0x1C45224))(0, weaponAssetID, weaponPartCategory, childrenAsset, optimizedModel);
	}
	template <typename T = void> static T ShowAndHideWeaponPart(Il2CppList<int32_t>* ShowAssetIDList, Il2CppList<int32_t>* HideAssetIDList, Il2CppList<void*>* childrenAsset, uintptr_t optimizedModel) {
		return ((T (*)(void *, Il2CppList<int32_t>*, Il2CppList<int32_t>*, Il2CppList<void*>*, uintptr_t))(Il2CppBase() + 0x1C236B4))(0, ShowAssetIDList, HideAssetIDList, childrenAsset, optimizedModel);
	}
	template <typename T = void> T EquipAttachment(int32_t actorID, int32_t attachmentID) {
		return ((T (*)(Weapon*, int32_t, int32_t))(Il2CppBase() + 0x1C456EC))(this, actorID, attachmentID);
	}
	template <typename T = void> T EquipAttachmentByClient(int32_t attachmentID) {
		return ((T (*)(Weapon*, int32_t))(Il2CppBase() + 0x1C45FB4))(this, attachmentID);
	}
	template <typename T = void> T RevertEquippingWeaponPart(uintptr_t weaponPart) {
		return ((T (*)(Weapon*, uintptr_t))(Il2CppBase() + 0x1C465B8))(this, weaponPart);
	}
	template <typename T = void> T UnEquipAttachment(int32_t actorID, int32_t attachmentID) {
		return ((T (*)(Weapon*, int32_t, int32_t))(Il2CppBase() + 0x1C46728))(this, actorID, attachmentID);
	}
	template <typename T = void> T UnEquipAttachmentByClient(int32_t attachmentID) {
		return ((T (*)(Weapon*, int32_t))(Il2CppBase() + 0x1C46C94))(this, attachmentID);
	}
	template <typename T = void> T RevertUnEquippingWeaponPart(uintptr_t weaponPart) {
		return ((T (*)(Weapon*, uintptr_t))(Il2CppBase() + 0x1C47098))(this, weaponPart);
	}
	template <typename T = void> T OnWeaponPartDeactivate(uintptr_t weaponPart) {
		return ((T (*)(Weapon*, uintptr_t))(Il2CppBase() + 0x1C47244))(this, weaponPart);
	}
	template <typename T = void> T OnWeaponPartActivate(uintptr_t weaponPart) {
		return ((T (*)(Weapon*, uintptr_t))(Il2CppBase() + 0x1C473A0))(this, weaponPart);
	}
	template <typename T = uintptr_t> T GetOpticsWeaponPartType() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C4753C))(this);
	}
	template <typename T = bool> T ShouldPlayOpticsAimingAnim() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C47780))(this);
	}
	template <typename T = bool> T GetZoomWeaponFOVState() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C47978))(this);
	}
	template <typename T = void> T SetAimingZoomingFov(bool isFov) {
		return ((T (*)(Weapon*, bool))(Il2CppBase() + 0x1C47B68))(this, isFov);
	}
	template <typename T = void> T ChangeAimingZoomingFOV() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C47D74))(this);
	}
	template <typename T = bool> T CanChangeAimingZoomingFov() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C47F78))(this);
	}
	template <typename T = bool> T HasWeaponPart(uintptr_t weaponPartName) {
		return ((T (*)(Weapon*, uintptr_t))(Il2CppBase() + 0x1C48048))(this, weaponPartName);
	}
	template <typename T = bool> T IsHadSilencerWeaponPart() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C48248))(this);
	}
	template <typename T = bool> T IsHadOpticsPart() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C48474))(this);
	}
	template <typename T = void> T ClearWeaponPartList() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C0C378))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_UnuseModeAttachment() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C48640))(this);
	}
	template <typename T = bool> T IsContainerUnuseAttachment(uintptr_t type) {
		return ((T (*)(Weapon*, uintptr_t))(Il2CppBase() + 0x1C487C4))(this, type);
	}
	template <typename T = uintptr_t> T get_AttributeAddtionMgr() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C48940))(this);
	}
	template <typename T = void> T AddStaticAddition(uintptr_t type, uintptr_t valueType, float value) {
		return ((T (*)(Weapon*, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x1C48948))(this, type, valueType, value);
	}
	template <typename T = float> T GetAdditionByBase(uintptr_t weaponAttributeType, float baseValue) {
		return ((T (*)(Weapon*, uintptr_t, float))(Il2CppBase() + 0x1C48C70))(this, weaponAttributeType, baseValue);
	}
	template <typename T = void> T xLuaBaseProxy_CopyProperties(uintptr_t P0, bool P1) {
		return ((T (*)(Weapon*, uintptr_t, bool))(Il2CppBase() + 0x1C48FAC))(this, P0, P1);
	}
	template <typename T = bool> T xLuaBaseProxy_IsLoading() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C48FB4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PrintLoadingInfo() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C48FBC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ClearAsyncLoadCallback() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C48FC4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Activate() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C48FCC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Deactivate() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C48FD4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PutDown() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C48FDC))(this);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetQuickKnifeFireCompIndex() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C48FE4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DestroyComponent() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C48FEC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C48FF4))(this);
	}
	template <typename T = Il2CppQuaternion> T xLuaBaseProxy_GetAdjustedCameraAim(Il2CppQuaternion P0) {
		return ((T (*)(Weapon*, Il2CppQuaternion))(Il2CppBase() + 0x1C48FFC))(this, P0);
	}
	template <typename T = Il2CppQuaternion> T xLuaBaseProxy_GetAdjustedWeaponAim(Il2CppQuaternion P0) {
		return ((T (*)(Weapon*, Il2CppQuaternion))(Il2CppBase() + 0x1C49028))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(Weapon*, float))(Il2CppBase() + 0x1C49054))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ChangePunchAngleByGetHit() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C4905C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartAim() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C49064))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopAim() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C4906C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartFire() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C49074))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopFire(bool P0) {
		return ((T (*)(Weapon*, bool))(Il2CppBase() + 0x1C4907C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_StartSecondaryFire() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C49084))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopSecondaryFire() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C4908C))(this);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetCrossHairCustomID() {
		return ((T (*)(Weapon*))(Il2CppBase() + 0x1C49094))(this);
	}

};

}
