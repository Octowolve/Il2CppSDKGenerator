#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponData"));
	}

	template <typename T = bool> T& CanFireInChangeClip() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& BRClimbAnimTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& BRBagHangPointOffsetPos_L() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector3> T& BRBagHangPointOffsetAngle_L() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector3> T& BRBagHangPointOffsetPos_R() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppVector3> T& BRBagHangPointOffsetAngle_R() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppVector3> T& BRBagHangPointOffsetPos_L_Female() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppVector3> T& BRBagHangPointOffsetAngle_L_Female() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppVector3> T& BRBagHangPointOffsetPos_R_Female() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppVector3> T& BRBagHangPointOffsetAngle_R_Female() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppString*> T& ActorType() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppString*> T& ActorType_3P() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppString*> T& AttachmentSocketName() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppString*> T& AttachmentSocketName_L() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppString*> T& StateMachineType() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppString*> T& FireComponentType() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppString*> T& ImpactComponentType() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppString*> T& SecondaryImpactComponentType() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppString*> T& FireSoundLogicType() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppString*> T& SecondaryFireComponentType() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& SecondaryFireNeedsSwitch() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppString*> T& ThirdFireComponentType() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppString*> T& ThirdImpactComponentType() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& MuzzleFlashSocketName() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& MuzzleFlashChargingAssetID1P() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = int32_t> T& MuzzleFlashAssetID1P() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& MuzzleFlashAssetID3P() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = int32_t> T& MuzzleFlashToHipAssetID1P() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = int32_t> T& MuzzleFlashToHipAssetID3P() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = int32_t> T& SpecialUnAimingEffectAssetID1P() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppString*> T& ShellDropSocketName() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = int32_t> T& ShellDropAssetID1P() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = int32_t> T& ShellDropAssetID3P() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = int32_t> T& MeshAssetID1P() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = int32_t> T& MeshAssetID3P() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = int32_t> T& MeshAssetID3P_L() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = int32_t> T& FemaleMeshAssetID3P() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = int32_t> T& FemaleMeshAssetID3P_L() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = bool> T& UseBigCrossHair() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = bool> T& UseBigCrossHair_3D() {
		return *(T*)((uintptr_t)this + 0xED);
	}
	template <typename T = bool> T& UseVTOLCrossHair() {
		return *(T*)((uintptr_t)this + 0xEE);
	}
	template <typename T = bool> T& UseGrappleGunCrossHair() {
		return *(T*)((uintptr_t)this + 0xEF);
	}
	template <typename T = bool> T& UseSparrowCrossHair() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = bool> T& UseTempestCrossHair() {
		return *(T*)((uintptr_t)this + 0xF1);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SkinID_Sight() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SkinID_Sto() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SkinID_Iro() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SkinID_Rai() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SkinID_Grip() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SkinID_Muzzle() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SkinID_Mag() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SkinID_MainWeaponRoot() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& UnuseModeAttachment() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = float> T& BasicBulletTrackThickness() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = float> T& BulletTrackInterval() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = int32_t> T& BulletTrackAssetID() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = int32_t> T& BulletTrack3PAssetID() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = bool> T& BulletFlyTrack() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = bool> T& IsCameraShake() {
		return *(T*)((uintptr_t)this + 0x129);
	}
	template <typename T = bool> T& ForceSetFireAnimSpeed() {
		return *(T*)((uintptr_t)this + 0x12A);
	}
	template <typename T = float> T& UnequipHideTimeRate() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = float> T& StopMoveCameraShakeSoftTime() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = bool> T& AutoThrowWeaponAfterFire() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = bool> T& CanAutoSwitchWeaponConfig() {
		return *(T*)((uintptr_t)this + 0x135);
	}
	template <typename T = float> T& SwimLeftHandTranstionTime() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = float> T& DoChangeClipTimeRate() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = bool> T& IdleStateEnable() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = int32_t> T& WeaponShakeRecoilID() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = int32_t> T& WeaponShakeRecoilClose() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = float> T& SwimZoomOffset() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = bool> T& IsHoldingAssitance() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = bool> T& AllowSpecailUnAiming() {
		return *(T*)((uintptr_t)this + 0x151);
	}
	template <typename T = bool> T& PlayUnAimingFireAfterFireAiming() {
		return *(T*)((uintptr_t)this + 0x152);
	}
	template <typename T = bool> T& ForceSpecailUnAiming() {
		return *(T*)((uintptr_t)this + 0x153);
	}
	template <typename T = float> T& FatalBlowProbability() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = float> T& FatalBlowAddHP() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = bool> T& HoldDoubleClickAim() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = bool> T& SupportAimedFire() {
		return *(T*)((uintptr_t)this + 0x15D);
	}
	template <typename T = bool> T& SupportHipFire() {
		return *(T*)((uintptr_t)this + 0x15E);
	}
	template <typename T = float> T& DelaySprintFire() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = bool> T& SwichLastWeapon() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = float> T& AimAssitanceDelay() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = bool> T& UsePlayTricky() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = bool> T& SpeedThrowWithNoEquip() {
		return *(T*)((uintptr_t)this + 0x16D);
	}
	template <typename T = bool> T& SwimFireLeftHandHoldWeapon() {
		return *(T*)((uintptr_t)this + 0x16E);
	}
	template <typename T = bool> T& IsCloseAimAfterSingleFire() {
		return *(T*)((uintptr_t)this + 0x16F);
	}
	template <typename T = bool> T& CanAutoFire() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = float> T& RecoilScaleWeaponShake() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = float> T& CameraFOV() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = float> T& SwitchTime() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = float> T& GetReadyTime() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = float> T& UnAimingTime() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = float> T& AimingTime() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = float> T& MaxHotValue() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = float> T& CoolDownSpeed() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = float> T& HotSpeed() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = float> T& CoolDownCDTime() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = float> T& OverHotCDTime() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = float> T& Deceleration() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = float> T& DecelerationDuration() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = Il2CppString*> T& WeaponIconName() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = Il2CppString*> T& WeaponKillIconName() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = Il2CppString*> T& WeaponLineIconName() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = Il2CppString*> T& FireButtonIconName() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = bool> T& IgnoreSyncServer() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = float> T& DblclickDelay() {
		return *(T*)((uintptr_t)this + 0x1BC);
	}
	template <typename T = float> T& DblclickAnimTime() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = float> T& AimingWorldFOV() {
		return *(T*)((uintptr_t)this + 0x1C4);
	}
	template <typename T = float> T& AimingWorldFOVOpenTime() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = float> T& AimingCameraAddRotateRate() {
		return *(T*)((uintptr_t)this + 0x1CC);
	}
	template <typename T = float> T& AimingToFireInterval() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = float> T& MovementScale() {
		return *(T*)((uintptr_t)this + 0x1D4);
	}
	template <typename T = float> T& SprintMovementScale() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = float> T& CrouchingSprintSpeedScale() {
		return *(T*)((uintptr_t)this + 0x1DC);
	}
	template <typename T = float> T& CrouchingSpeedScale() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = float> T& ProneSpeedScale() {
		return *(T*)((uintptr_t)this + 0x1E4);
	}
	template <typename T = float> T& DyingSpeedScale() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = float> T& AimingMovementScale() {
		return *(T*)((uintptr_t)this + 0x1EC);
	}
	template <typename T = float> T& AimingCrouchMovementScale() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = float> T& PenetrationValue() {
		return *(T*)((uintptr_t)this + 0x1F4);
	}
	template <typename T = float> T& CrosshairLength() {
		return *(T*)((uintptr_t)this + 0x1F8);
	}
	template <typename T = float> T& CrosshairSize() {
		return *(T*)((uintptr_t)this + 0x1FC);
	}
	template <typename T = bool> T& EnableAimingCrosshair() {
		return *(T*)((uintptr_t)this + 0x200);
	}
	template <typename T = float> T& AimingCrosshairLengthRatio() {
		return *(T*)((uintptr_t)this + 0x204);
	}
	template <typename T = float> T& AimingCrosshairSizeRatio() {
		return *(T*)((uintptr_t)this + 0x208);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& BOT_BasicAccuracyRange() {
		return *(T*)((uintptr_t)this + 0x20C);
	}
	template <typename T = Il2CppVector2> T& BOT_AdditionalFire() {
		return *(T*)((uintptr_t)this + 0x210);
	}
	template <typename T = float> T& BOT_AimSpeed() {
		return *(T*)((uintptr_t)this + 0x218);
	}
	template <typename T = Il2CppVector2> T& BOT_WaitForShootingTime() {
		return *(T*)((uintptr_t)this + 0x21C);
	}
	template <typename T = Il2CppVector2> T& BOT_FireDuration() {
		return *(T*)((uintptr_t)this + 0x224);
	}
	template <typename T = float> T& BOT_HeadShotRatio() {
		return *(T*)((uintptr_t)this + 0x22C);
	}
	template <typename T = float> T& BOT_TraceRangeMin() {
		return *(T*)((uintptr_t)this + 0x230);
	}
	template <typename T = float> T& BOT_TraceRangeMax() {
		return *(T*)((uintptr_t)this + 0x234);
	}
	template <typename T = Il2CppVector2> T& BOT_ZM_WaitForShootingTime() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = Il2CppVector2> T& BOT_ZM_FireDuration() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = float> T& BOT_ZM_HeadShotRatio() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = float> T& WeaponBobRate() {
		return *(T*)((uintptr_t)this + 0x24C);
	}
	template <typename T = float> T& WeaponBobRange() {
		return *(T*)((uintptr_t)this + 0x250);
	}
	template <typename T = float> T& StartFireInterval() {
		return *(T*)((uintptr_t)this + 0x254);
	}
	template <typename T = float> T& StopFireInterval() {
		return *(T*)((uintptr_t)this + 0x258);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& HitBuffs() {
		return *(T*)((uintptr_t)this + 0x25C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& PawnBuffs() {
		return *(T*)((uintptr_t)this + 0x260);
	}
	template <typename T = int32_t> T& ParentItemId() {
		return *(T*)((uintptr_t)this + 0x264);
	}
	template <typename T = bool> T& UseInUlt() {
		return *(T*)((uintptr_t)this + 0x268);
	}
	template <typename T = float> T& AutoFireDistance() {
		return *(T*)((uintptr_t)this + 0x26C);
	}
	template <typename T = bool> T& HasOpticsAvatarChange() {
		return *(T*)((uintptr_t)this + 0x270);
	}
	template <typename T = float> T& ChangePercent_1PMode_Open() {
		return *(T*)((uintptr_t)this + 0x274);
	}
	template <typename T = float> T& ChangePercent_1PMode_Close() {
		return *(T*)((uintptr_t)this + 0x278);
	}
	template <typename T = float> T& WeaponAimModifyPercent() {
		return *(T*)((uintptr_t)this + 0x27C);
	}
	template <typename T = float> T& AimingFireAnimPercent() {
		return *(T*)((uintptr_t)this + 0x280);
	}
	template <typename T = bool> T& IsOpenPVEAssistAimRotateTimeAiming() {
		return *(T*)((uintptr_t)this + 0x284);
	}
	template <typename T = float> T& AutoAssistAimRatesAiming() {
		return *(T*)((uintptr_t)this + 0x288);
	}
	template <typename T = float> T& AutoLockTime() {
		return *(T*)((uintptr_t)this + 0x28C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& AutoAssistAimRates_Controller() {
		return *(T*)((uintptr_t)this + 0x290);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& AutoAssistAimRates() {
		return *(T*)((uintptr_t)this + 0x294);
	}
	template <typename T = float> T& MagAssitAimOffDis() {
		return *(T*)((uintptr_t)this + 0x298);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& AutoAssistAimRanges_Controller() {
		return *(T*)((uintptr_t)this + 0x29C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& AutoAssistAimRanges() {
		return *(T*)((uintptr_t)this + 0x2A0);
	}
	template <typename T = bool> T& Nonlinearity() {
		return *(T*)((uintptr_t)this + 0x2A4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& FireRadiusDis_Controller() {
		return *(T*)((uintptr_t)this + 0x2A8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& FireRadiusDis() {
		return *(T*)((uintptr_t)this + 0x2AC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& FireRadiusLength_Controller() {
		return *(T*)((uintptr_t)this + 0x2B0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& FireRadiusLength() {
		return *(T*)((uintptr_t)this + 0x2B4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& FireRadiusWidth_Controller() {
		return *(T*)((uintptr_t)this + 0x2B8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& FireRadiusWidth() {
		return *(T*)((uintptr_t)this + 0x2BC);
	}
	template <typename T = float> T& AimTargetOffset() {
		return *(T*)((uintptr_t)this + 0x2C0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& DampAssitAimRateFactor_Controller() {
		return *(T*)((uintptr_t)this + 0x2C4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& DampAssitAimRateFactor() {
		return *(T*)((uintptr_t)this + 0x2C8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& MinDampAssitAimRateFactor() {
		return *(T*)((uintptr_t)this + 0x2CC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& MaxDampAssitAimRateFactor() {
		return *(T*)((uintptr_t)this + 0x2D0);
	}
	template <typename T = bool> T& IsDampAssitAimRateNonlinearity() {
		return *(T*)((uintptr_t)this + 0x2D4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& AssistAimRotateTime_Controller() {
		return *(T*)((uintptr_t)this + 0x2D8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& AssistAimRotateTime() {
		return *(T*)((uintptr_t)this + 0x2DC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& MagnAssitAimRateFactor_Controller() {
		return *(T*)((uintptr_t)this + 0x2E0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& MagnAssitAimRateFactor() {
		return *(T*)((uintptr_t)this + 0x2E4);
	}
	template <typename T = Il2CppString*> T& WeaponShakeAroundPointParent() {
		return *(T*)((uintptr_t)this + 0x2E8);
	}
	template <typename T = Il2CppVector3> T& WeaponShakeAroundPointOffset() {
		return *(T*)((uintptr_t)this + 0x2EC);
	}
	template <typename T = Il2CppVector3> T& WeaponShakeVerticalAroundPointOffset() {
		return *(T*)((uintptr_t)this + 0x2F8);
	}
	template <typename T = Il2CppString*> T& WeaponShakeAroundAimPointParent() {
		return *(T*)((uintptr_t)this + 0x304);
	}
	template <typename T = Il2CppVector3> T& WeaponShakeAroundAimPointOffset() {
		return *(T*)((uintptr_t)this + 0x308);
	}
	template <typename T = Il2CppVector3> T& WeaponShakeVerticalAimAroundPointOffset() {
		return *(T*)((uintptr_t)this + 0x314);
	}
	template <typename T = bool> T& PVEWeaponSingleHud() {
		return *(T*)((uintptr_t)this + 0x320);
	}
	template <typename T = bool> T& InfiniteWeaponAmmo() {
		return *(T*)((uintptr_t)this + 0x321);
	}
	template <typename T = Il2CppString*> T& WeaponSelfAniComponentType() {
		return *(T*)((uintptr_t)this + 0x324);
	}
	template <typename T = bool> T& UseHandOffsetPose() {
		return *(T*)((uintptr_t)this + 0x328);
	}
	template <typename T = bool> T& HasSecondaryFireAnim() {
		return *(T*)((uintptr_t)this + 0x329);
	}
	template <typename T = bool> T& IsNeedAdsFire() {
		return *(T*)((uintptr_t)this + 0x32A);
	}
	template <typename T = float> T& DelayHideThrowLine() {
		return *(T*)((uintptr_t)this + 0x32C);
	}
	template <typename T = float> T& DelayHideFastThrowLine() {
		return *(T*)((uintptr_t)this + 0x330);
	}
	template <typename T = float> T& DelayFastFireElapseScale() {
		return *(T*)((uintptr_t)this + 0x334);
	}
	template <typename T = float> T& DelayFireElapseScale1P() {
		return *(T*)((uintptr_t)this + 0x338);
	}
	template <typename T = float> T& DelayFireElapseScale3P() {
		return *(T*)((uintptr_t)this + 0x33C);
	}
	template <typename T = bool> T& IsShowHoldLine() {
		return *(T*)((uintptr_t)this + 0x340);
	}
	template <typename T = bool> T& IsNeedFastThrow() {
		return *(T*)((uintptr_t)this + 0x341);
	}
	template <typename T = bool> T& UseSlowWalk() {
		return *(T*)((uintptr_t)this + 0x342);
	}
	template <typename T = bool> T& UseMeleeSingleFire() {
		return *(T*)((uintptr_t)this + 0x343);
	}
	template <typename T = float> T& FireAimLayerWeight() {
		return *(T*)((uintptr_t)this + 0x344);
	}
	template <typename T = bool> T& UseInVehicle() {
		return *(T*)((uintptr_t)this + 0x348);
	}
	template <typename T = bool> T& NeedToCheckMuzzleFireEffectRelevance() {
		return *(T*)((uintptr_t)this + 0x349);
	}
	template <typename T = bool> T& NeedToCheckBulletTraceEffectRelevance() {
		return *(T*)((uintptr_t)this + 0x34A);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position, uintptr_t targetType, uintptr_t mask, uintptr_t index, uintptr_t interrupt) {
		return ((T (*)(WeaponData*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x48942C0))(this, bytes, position, targetType, mask, index, interrupt);
	}
	template <typename T = void> T xLuaBaseProxy_Deserialize(Il2CppArray<uintptr_t>* P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4, uintptr_t P5) {
		return ((T (*)(WeaponData*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x489A08C))(this, P0, P1, P2, P3, P4, P5);
	}

};

}
