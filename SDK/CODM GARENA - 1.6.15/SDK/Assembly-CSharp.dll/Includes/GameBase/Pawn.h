#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class Pawn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "Pawn"));
	}

	template <typename T = int32_t> T& ReloadCount() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppString*> T& mParameters() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& m_LastLeaveVehicleTime() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = bool> T& m_IsStartFireInSprint() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& mPendingSwitchWeapon() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppString*> T& m_PawnConfigPath() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> static T& SprintCheckDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& UsingControllableMissile() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& UsingSubWeaponGrappleGun() {
		return *(T*)((uintptr_t)this + 0x8D);
	}
	template <typename T = bool> T& PrepareUsingSubWeaponGrappleGun() {
		return *(T*)((uintptr_t)this + 0x8E);
	}
	template <typename T = bool> T& UsingAirborne() {
		return *(T*)((uintptr_t)this + 0x8F);
	}
	template <typename T = bool> T& m_bIsGrapDestPoint() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppVector3> T& m_vGrappleGunDestPoint() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = bool> T& EnableDrawLatestServerPos() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& m_PawnTransitionType() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = float> T& m_ProneBodyAngle() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& m_FallingHorizontalObstrutCosValue() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = bool> T& m_pinDownToGround() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& InRegionID() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = float> T& m_MaxMoveSpeed() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& mSoundEmitterInternal() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = float> T& m_FixedWeaponAccuracy() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppVector3> static T& DefaultTPSCameraOffSet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppVector3> static T& DefaultTPSLeftCameraOffSet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppVector3> static T& TPSCameraOffset_Prone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppVector3> T& m_TPSCameraOffset() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = Il2CppVector3> T& TPSIndividuationCameraOffSet() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& mFCameraOffsetLerpTick() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = Il2CppVector3> T& m_ToTPSCameraOffset() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = float> T& m_ToTPSCameraOffsetTimer() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = float> T& m_ToTPSCameraOffsetTime() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = Il2CppVector3> T& m_LastTPSCameraOffset() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = Il2CppString*> T& m_localPlayerSpriteName() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = Il2CppString*> T& m_localPlayerGoliathSpriteName() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = float> T& m_ProneTransitionRate() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = bool> T& m_IsTransitionToProneState() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = bool> T& m_IsTransitionFromProneState() {
		return *(T*)((uintptr_t)this + 0x10D);
	}
	template <typename T = bool> T& m_CanSeeSmokeIn() {
		return *(T*)((uintptr_t)this + 0x10E);
	}
	template <typename T = bool> T& CanSeeSmokeIn() {
		return *(T*)((uintptr_t)this + 0x10F);
	}
	template <typename T = bool> T& m_CanSeeStreakFront() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = float> T& ProneCheckHeight() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = int32_t> T& m_FireAnimIndex() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = Il2CppString*> T& m_DebugString() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = Il2CppString*> static T& FirstPersonRootSocketName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& FirstPersonArmSocketName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ThirdPersonModelSocketName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& FirstPersonWeaponSocketName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ThirdPersonWeaponSocketName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& FirstPersonLeftWeaponSocketName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ThirdPersonLeftWeaponSocketName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& FirstPersonCameraSocketName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ThirdPersonHeadCameraSocketName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& WorldCameraSocketName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& WorldCameraSocketName_TPS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ThirdPersonFamilyRootSocketName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ThirdPersonSpine2SocketName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& BR_Sound_SwitchGroupName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& BR_Sound_GroupValueName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& m_LODAnimDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_ForceSyncMove() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& m_InventoryManager() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& m_CurrentWeaponAttachment() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = bool> T& m_bInit() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_WeaponPartInfoList3P() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uint32_t> T& m_WeaponSkinID() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = bool> T& ShowWeapon() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = bool> T& m_InWater() {
		return *(T*)((uintptr_t)this + 0x139);
	}
	template <typename T = Il2CppVector3> T& m_InitialUpperBodyRelativePos() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = uintptr_t> T& m_CachedUpperBodyTransform() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& m_FirstPersonCameraSocketTransform() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = uintptr_t> T& m_ThirdHeadCameraSocketTransform() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& m_WorldCameraSocketTransform() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = uintptr_t> T& m_WorldCameraSocketTransform_TPS() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = float> T& m_StandAnimationTransitionTime() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = float> T& m_StandAnimationTransitionTickTime() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = bool> T& m_IsInStandAnimationTransition() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = bool> T& m_IsInDecelerateStandAnimTransition() {
		return *(T*)((uintptr_t)this + 0x165);
	}
	template <typename T = uintptr_t> T& m_HeadBone() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = bool> static T& m_FixMoveAgainstWallShaking() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_AccelerationInputStrafe() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = Il2CppVector3> T& m_AccelerationReal() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = Il2CppVector3> T& m_Acceleration() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = Il2CppVector3> T& m_Velocity() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& m_remoteControlledVehicle() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = uintptr_t> T& m_CurrentVehicle() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = float> T& LastGetoffVehicleTime() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = uint32_t> T& LastVehicleActorID() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_availableVehicles() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = float> T& m_ENCPenetrationValue() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = Il2CppVector3> T& m_FireBlockWorldPos() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = Il2CppQuaternion> T& m_AimRotation() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = Il2CppQuaternion> T& m_DelayShootAimRotationLocal() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = Il2CppQuaternion> T& m_DelayShootAimRotation() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = Il2CppQuaternion> T& m_AimRotationLocal() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = uintptr_t> T& m_TakeDamageComponent() {
		return *(T*)((uintptr_t)this + 0x1F8);
	}
	template <typename T = uintptr_t> T& m_CrouchComponent() {
		return *(T*)((uintptr_t)this + 0x1FC);
	}
	template <typename T = uintptr_t> T& m_ProneComponent() {
		return *(T*)((uintptr_t)this + 0x200);
	}
	template <typename T = uintptr_t> T& m_IKSolverComponent() {
		return *(T*)((uintptr_t)this + 0x204);
	}
	template <typename T = uintptr_t> T& m_AvatarRotationComponent() {
		return *(T*)((uintptr_t)this + 0x208);
	}
	template <typename T = uintptr_t> T& m_PawnLadderComponent() {
		return *(T*)((uintptr_t)this + 0x20C);
	}
	template <typename T = uintptr_t> T& m_SlideTackleComponent() {
		return *(T*)((uintptr_t)this + 0x210);
	}
	template <typename T = uintptr_t> T& m_RollComponent() {
		return *(T*)((uintptr_t)this + 0x214);
	}
	template <typename T = uintptr_t> T& m_IndividuationComponent() {
		return *(T*)((uintptr_t)this + 0x218);
	}
	template <typename T = uintptr_t> T& m_PawnSocketTransformAdjustComponent() {
		return *(T*)((uintptr_t)this + 0x21C);
	}
	template <typename T = uintptr_t> T& m_DynamicSkinComponent() {
		return *(T*)((uintptr_t)this + 0x220);
	}
	template <typename T = uintptr_t> T& m_SpectatorComponent() {
		return *(T*)((uintptr_t)this + 0x224);
	}
	template <typename T = uintptr_t> T& m_SwitchRoleComponent() {
		return *(T*)((uintptr_t)this + 0x228);
	}
	template <typename T = uintptr_t> T& m_PaintComponent() {
		return *(T*)((uintptr_t)this + 0x22C);
	}
	template <typename T = uintptr_t> T& m_RagdollComponent() {
		return *(T*)((uintptr_t)this + 0x230);
	}
	template <typename T = uintptr_t> T& m_GravitySpikesComponent() {
		return *(T*)((uintptr_t)this + 0x234);
	}
	template <typename T = uintptr_t> T& m_ShadowBladeComponent() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = uintptr_t> T& m_JumpComponent() {
		return *(T*)((uintptr_t)this + 0x23C);
	}
	template <typename T = uintptr_t> T& m_DeadComponent() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = uintptr_t> T& m_TrickyComponent() {
		return *(T*)((uintptr_t)this + 0x244);
	}
	template <typename T = uintptr_t> T& m_PawnSoundComponent() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = uintptr_t> T& m_PawnEffectManager() {
		return *(T*)((uintptr_t)this + 0x24C);
	}
	template <typename T = uintptr_t> T& m_LogicAnimationComponent() {
		return *(T*)((uintptr_t)this + 0x250);
	}
	template <typename T = uintptr_t> T& m_GrapRushComponent() {
		return *(T*)((uintptr_t)this + 0x254);
	}
	template <typename T = uintptr_t> T& m_UpwardLaunchComponent() {
		return *(T*)((uintptr_t)this + 0x258);
	}
	template <typename T = uintptr_t> T& m_InvisibleSkillComponent() {
		return *(T*)((uintptr_t)this + 0x25C);
	}
	template <typename T = Il2CppQuaternion> T& m_SimulatedAimRotation() {
		return *(T*)((uintptr_t)this + 0x260);
	}
	template <typename T = Il2CppVector3> T& m_LastSimulateVelocity() {
		return *(T*)((uintptr_t)this + 0x270);
	}
	template <typename T = float> T& m_LadderForceYAngle() {
		return *(T*)((uintptr_t)this + 0x27C);
	}
	template <typename T = uintptr_t> T& m_PawnReliableSoundData() {
		return *(T*)((uintptr_t)this + 0x280);
	}
	template <typename T = bool> T& m_InElectric() {
		return *(T*)((uintptr_t)this + 0x284);
	}
	template <typename T = bool> T& m_IsInSmoke() {
		return *(T*)((uintptr_t)this + 0x285);
	}
	template <typename T = void*> T& SimulatedEndGrapRushEvent() {
		return *(T*)((uintptr_t)this + 0x288);
	}
	template <typename T = float> T& m_camHeightOffset_3P() {
		return *(T*)((uintptr_t)this + 0x28C);
	}
	template <typename T = float> static T& m_camLineCheckExtent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppVector3> T& m_LastDamageSourcePos() {
		return *(T*)((uintptr_t)this + 0x290);
	}
	template <typename T = float> static T& m_SendMoveFreQuency() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_LastCheckSprintTime() {
		return *(T*)((uintptr_t)this + 0x29C);
	}
	template <typename T = float> T& m_LastSendMoveTime() {
		return *(T*)((uintptr_t)this + 0x2A0);
	}
	template <typename T = float> T& m_SimulateSpeed() {
		return *(T*)((uintptr_t)this + 0x2A4);
	}
	template <typename T = bool> T& m_LastInputSprint() {
		return *(T*)((uintptr_t)this + 0x2A8);
	}
	template <typename T = float> T& m_MaxSimulateTime() {
		return *(T*)((uintptr_t)this + 0x2AC);
	}
	template <typename T = float> T& m_NameDistance() {
		return *(T*)((uintptr_t)this + 0x2B0);
	}
	template <typename T = float> T& m_fWasteTime() {
		return *(T*)((uintptr_t)this + 0x2B4);
	}
	template <typename T = uintptr_t> T& m_PlayerNameLabel() {
		return *(T*)((uintptr_t)this + 0x2B8);
	}
	template <typename T = Il2CppVector3> T& m_LastHeadLoc() {
		return *(T*)((uintptr_t)this + 0x2BC);
	}
	template <typename T = float> T& m_MaxClientForceMoveDistance() {
		return *(T*)((uintptr_t)this + 0x2C8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_pPawnSoundEventHandler() {
		return *(T*)((uintptr_t)this + 0x2CC);
	}
	template <typename T = bool> T& m_CanSwitchWeapon() {
		return *(T*)((uintptr_t)this + 0x2D0);
	}
	template <typename T = bool> T& m_AllowShowHeadName() {
		return *(T*)((uintptr_t)this + 0x2D1);
	}
	template <typename T = uintptr_t> T& m_CurClimbType() {
		return *(T*)((uintptr_t)this + 0x2D4);
	}
	template <typename T = bool> T& m_IsClimbWall() {
		return *(T*)((uintptr_t)this + 0x2D8);
	}
	template <typename T = float> T& m_ClimbMantleWidth() {
		return *(T*)((uintptr_t)this + 0x2DC);
	}
	template <typename T = bool> T& m_IsClimbMantleOver() {
		return *(T*)((uintptr_t)this + 0x2E0);
	}
	template <typename T = Il2CppVector2> T& m_HorizontalRoationLimit() {
		return *(T*)((uintptr_t)this + 0x2E4);
	}
	template <typename T = Il2CppVector2> T& m_CacheVerticalRoationLimit() {
		return *(T*)((uintptr_t)this + 0x2EC);
	}
	template <typename T = Il2CppVector2> T& m_MaxHorizontalTurnDeltaProne() {
		return *(T*)((uintptr_t)this + 0x2F4);
	}
	template <typename T = Il2CppVector2> T& m_VerticalRoationLimitProne() {
		return *(T*)((uintptr_t)this + 0x2FC);
	}
	template <typename T = bool> T& m_EasySkyFly() {
		return *(T*)((uintptr_t)this + 0x304);
	}
	template <typename T = bool> T& m_IsSkyFly() {
		return *(T*)((uintptr_t)this + 0x305);
	}
	template <typename T = bool> T& m_IsJumpingUp() {
		return *(T*)((uintptr_t)this + 0x306);
	}
	template <typename T = bool> T& m_ReachJumpingTop() {
		return *(T*)((uintptr_t)this + 0x307);
	}
	template <typename T = float> T& m_WalkingDuration() {
		return *(T*)((uintptr_t)this + 0x308);
	}
	template <typename T = Il2CppVector3> T& m_HeadOffset() {
		return *(T*)((uintptr_t)this + 0x30C);
	}
	template <typename T = float> T& m_HudHeadOffset() {
		return *(T*)((uintptr_t)this + 0x318);
	}
	template <typename T = float> T& m_GoliathHudHeadOffset() {
		return *(T*)((uintptr_t)this + 0x31C);
	}
	template <typename T = float> T& m_ReachJumpingTopTime() {
		return *(T*)((uintptr_t)this + 0x320);
	}
	template <typename T = float> static T& THETA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& MOVE_THETA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_IsCrouching() {
		return *(T*)((uintptr_t)this + 0x324);
	}
	template <typename T = bool> T& m_IsProneing() {
		return *(T*)((uintptr_t)this + 0x325);
	}
	template <typename T = bool> T& ProneConfirming() {
		return *(T*)((uintptr_t)this + 0x326);
	}
	template <typename T = bool> T& m_IsRotation() {
		return *(T*)((uintptr_t)this + 0x327);
	}
	template <typename T = bool> T& m_isInAirCraft() {
		return *(T*)((uintptr_t)this + 0x328);
	}
	template <typename T = bool> T& m_bIsInNonBattleArea() {
		return *(T*)((uintptr_t)this + 0x329);
	}
	template <typename T = float> T& m_CurrentEyeHeight() {
		return *(T*)((uintptr_t)this + 0x32C);
	}
	template <typename T = bool> T& HasReleaseSkillButton() {
		return *(T*)((uintptr_t)this + 0x330);
	}
	template <typename T = bool> T& m_bLockYRotation() {
		return *(T*)((uintptr_t)this + 0x331);
	}
	template <typename T = float> T& m_HitScoreTime() {
		return *(T*)((uintptr_t)this + 0x334);
	}
	template <typename T = float> T& m_LastPlayBloodEffectTime() {
		return *(T*)((uintptr_t)this + 0x338);
	}
	template <typename T = Il2CppVector3> T& m_JumpBob() {
		return *(T*)((uintptr_t)this + 0x33C);
	}
	template <typename T = float> T& m_JumbBobDropHeight() {
		return *(T*)((uintptr_t)this + 0x348);
	}
	template <typename T = float> T& m_JumbBobUpHeight() {
		return *(T*)((uintptr_t)this + 0x34C);
	}
	template <typename T = float> T& m_JumbBobIncreacement() {
		return *(T*)((uintptr_t)this + 0x350);
	}
	template <typename T = float> T& m_JumbBobDecreasement() {
		return *(T*)((uintptr_t)this + 0x354);
	}
	template <typename T = bool> T& m_ShouldUpdateJumpBob() {
		return *(T*)((uintptr_t)this + 0x358);
	}
	template <typename T = bool> T& m_IsJumbBobIncreasing() {
		return *(T*)((uintptr_t)this + 0x359);
	}
	template <typename T = float> T& m_LandAfterJumpingTime() {
		return *(T*)((uintptr_t)this + 0x35C);
	}
	template <typename T = float> T& m_CacheFallingForwardSpeed() {
		return *(T*)((uintptr_t)this + 0x360);
	}
	template <typename T = float> T& m_CacheFallingLateralSpeed() {
		return *(T*)((uintptr_t)this + 0x364);
	}
	template <typename T = bool> T& m_bEndSubWeaponAciton() {
		return *(T*)((uintptr_t)this + 0x368);
	}
	template <typename T = uintptr_t> T& m_InitLoginPhysicsState() {
		return *(T*)((uintptr_t)this + 0x36C);
	}
	template <typename T = uintptr_t> T& m_PhysicsState() {
		return *(T*)((uintptr_t)this + 0x370);
	}
	template <typename T = uintptr_t> T& m_FollowTarget() {
		return *(T*)((uintptr_t)this + 0x374);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_TouchingVolumes() {
		return *(T*)((uintptr_t)this + 0x378);
	}
	template <typename T = uintptr_t> T& m_PhysicsVolumeInternal() {
		return *(T*)((uintptr_t)this + 0x37C);
	}
	template <typename T = float> T& m_LastSlideVolumeSpeed() {
		return *(T*)((uintptr_t)this + 0x380);
	}
	template <typename T = uintptr_t> T& CurrentLadder() {
		return *(T*)((uintptr_t)this + 0x384);
	}
	template <typename T = uintptr_t> T& m_AnimationComponent() {
		return *(T*)((uintptr_t)this + 0x388);
	}
	template <typename T = uintptr_t> T& m_AnimGraphComponent() {
		return *(T*)((uintptr_t)this + 0x38C);
	}
	template <typename T = uintptr_t> T& m_AdaptiveRootMotion() {
		return *(T*)((uintptr_t)this + 0x390);
	}
	template <typename T = bool> T& m_IsAlive() {
		return *(T*)((uintptr_t)this + 0x394);
	}
	template <typename T = bool> T& m_IsPlayDying() {
		return *(T*)((uintptr_t)this + 0x395);
	}
	template <typename T = bool> T& m_InDeadEye() {
		return *(T*)((uintptr_t)this + 0x396);
	}
	template <typename T = float> T& m_LastBeBulletDamged() {
		return *(T*)((uintptr_t)this + 0x398);
	}
	template <typename T = float> T& m_LastBeExplodeDamged() {
		return *(T*)((uintptr_t)this + 0x39C);
	}
	template <typename T = float> static T& ShowFireTorOnRaderLast() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_TriggerQuickKnife() {
		return *(T*)((uintptr_t)this + 0x3A0);
	}
	template <typename T = float> T& m_LastFireTime() {
		return *(T*)((uintptr_t)this + 0x3A4);
	}
	template <typename T = uintptr_t> T& m_LastFireWeaponName() {
		return *(T*)((uintptr_t)this + 0x3A8);
	}
	template <typename T = float> T& m_LastRespawnTime() {
		return *(T*)((uintptr_t)this + 0x3AC);
	}
	template <typename T = float> static T& m_UAVPosUpdateInterval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_LastUAVPosUpdateTime() {
		return *(T*)((uintptr_t)this + 0x3B0);
	}
	template <typename T = Il2CppVector3> T& m_UAVPos() {
		return *(T*)((uintptr_t)this + 0x3B4);
	}
	template <typename T = Il2CppVector3> T& m_LastFireLoc() {
		return *(T*)((uintptr_t)this + 0x3C0);
	}
	template <typename T = uintptr_t> T& m_PlayerInfo() {
		return *(T*)((uintptr_t)this + 0x3CC);
	}
	template <typename T = Il2CppVector3> T& m_LastPawnPos() {
		return *(T*)((uintptr_t)this + 0x3D0);
	}
	template <typename T = float> T& MoveThreshold() {
		return *(T*)((uintptr_t)this + 0x3DC);
	}
	template <typename T = Il2CppVector3> T& m_LastPawnEulerAngle() {
		return *(T*)((uintptr_t)this + 0x3E0);
	}
	template <typename T = bool> T& IsSwitchViewEnd() {
		return *(T*)((uintptr_t)this + 0x3EC);
	}
	template <typename T = bool> T& IsSwitchRoleEnd() {
		return *(T*)((uintptr_t)this + 0x3ED);
	}
	template <typename T = uintptr_t> T& m_HeadTransform() {
		return *(T*)((uintptr_t)this + 0x3F0);
	}
	template <typename T = bool> T& m_FetchedHeadTransform() {
		return *(T*)((uintptr_t)this + 0x3F4);
	}
	template <typename T = uintptr_t> T& m_Controller() {
		return *(T*)((uintptr_t)this + 0x3F8);
	}
	template <typename T = Il2CppDictionary<uintptr_t, bool>*> T& typeTestDic() {
		return *(T*)((uintptr_t)this + 0x3FC);
	}
	template <typename T = uintptr_t> T& m_ViewType() {
		return *(T*)((uintptr_t)this + 0x400);
	}
	template <typename T = uintptr_t> T& m_Role() {
		return *(T*)((uintptr_t)this + 0x404);
	}
	template <typename T = uintptr_t> T& m_Mesh() {
		return *(T*)((uintptr_t)this + 0x408);
	}
	template <typename T = uintptr_t> T& m_ModelRoot() {
		return *(T*)((uintptr_t)this + 0x40C);
	}
	template <typename T = Il2CppQuaternion> T& MeshForwordRot() {
		return *(T*)((uintptr_t)this + 0x410);
	}
	template <typename T = bool> T& m_FirstTimeRespawn() {
		return *(T*)((uintptr_t)this + 0x420);
	}
	template <typename T = uintptr_t> T& NotifyStopDriving() {
		return *(T*)((uintptr_t)this + 0x424);
	}
	template <typename T = uintptr_t> T& m_ReleventComp() {
		return *(T*)((uintptr_t)this + 0x428);
	}
	template <typename T = bool> static T& bEnableRevelentOPT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = Il2CppVector3> T& m_ActualWalkingVelocity() {
		return *(T*)((uintptr_t)this + 0x42C);
	}
	template <typename T = uintptr_t> T& m_WeaponShakeController() {
		return *(T*)((uintptr_t)this + 0x438);
	}
	template <typename T = Il2CppVector3> T& m_DeltaEulerAngles() {
		return *(T*)((uintptr_t)this + 0x43C);
	}
	template <typename T = void*> T& takeDamageHandler() {
		return *(T*)((uintptr_t)this + 0x448);
	}
	template <typename T = bool> T& checkPassThroughWall() {
		return *(T*)((uintptr_t)this + 0x44C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_LogicalComponents() {
		return *(T*)((uintptr_t)this + 0x450);
	}
	template <typename T = Il2CppVector3> T& m_FirstPersonWeaponSocketLocalPosition_OriginalValue() {
		return *(T*)((uintptr_t)this + 0x454);
	}
	template <typename T = Il2CppVector3> T& m_FirstPersonWeaponSocketlocalEulerAngles_OriginalValue() {
		return *(T*)((uintptr_t)this + 0x460);
	}
	template <typename T = Il2CppVector3> T& m_FirstPersonArmSocketLocalPosition_OriginalValue() {
		return *(T*)((uintptr_t)this + 0x46C);
	}
	template <typename T = Il2CppVector3> T& m_FirstPersonArmSocketlocalEulerAngles_OriginalValue() {
		return *(T*)((uintptr_t)this + 0x478);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_AutoAssistAimRanges() {
		return *(T*)((uintptr_t)this + 0x484);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_AutoAssistAimRates() {
		return *(T*)((uintptr_t)this + 0x488);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_AssistAimRotateTimes() {
		return *(T*)((uintptr_t)this + 0x48C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_DampAssitAimRateFactor() {
		return *(T*)((uintptr_t)this + 0x490);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_MagnAssitAimRateFactor() {
		return *(T*)((uintptr_t)this + 0x494);
	}
	template <typename T = bool> T& m_NeedToResetPose() {
		return *(T*)((uintptr_t)this + 0x498);
	}
	template <typename T = bool> T& m_IsCrouchingWhenSwitchRole() {
		return *(T*)((uintptr_t)this + 0x499);
	}
	template <typename T = bool> T& m_IsProningWhenSwitchRole() {
		return *(T*)((uintptr_t)this + 0x49A);
	}
	template <typename T = bool> T& bVehicleWaitForChangeWeapon() {
		return *(T*)((uintptr_t)this + 0x49B);
	}
	template <typename T = uintptr_t> T& cacheVehicleSwitchTPSModeReasonType() {
		return *(T*)((uintptr_t)this + 0x49C);
	}
	template <typename T = uintptr_t> T& CacheSlotItemBeforeVehicle() {
		return *(T*)((uintptr_t)this + 0x4A0);
	}
	template <typename T = float> T& m_CheckClimbOverAddTime() {
		return *(T*)((uintptr_t)this + 0x4A4);
	}
	template <typename T = Il2CppString*> T& m_CheckClimbOverObjectName() {
		return *(T*)((uintptr_t)this + 0x4A8);
	}
	template <typename T = float> T& m_CheckClimbUpAddTime() {
		return *(T*)((uintptr_t)this + 0x4AC);
	}
	template <typename T = Il2CppString*> T& m_CheckClimbUpObjectName() {
		return *(T*)((uintptr_t)this + 0x4B0);
	}
	template <typename T = Il2CppVector3> T& m_CheckBoxColliderHalfExtents() {
		return *(T*)((uintptr_t)this + 0x4B4);
	}
	template <typename T = bool> T& IsBeginCheckMantle() {
		return *(T*)((uintptr_t)this + 0x4C0);
	}
	template <typename T = float> T& m_FirstPersonCameraOffsetTickTimer() {
		return *(T*)((uintptr_t)this + 0x4C4);
	}
	template <typename T = float> T& m_FirstPersonCameraCurrentOffsetX() {
		return *(T*)((uintptr_t)this + 0x4C8);
	}
	template <typename T = float> T& m_FirstPersonCameraDestOffsetX() {
		return *(T*)((uintptr_t)this + 0x4CC);
	}
	template <typename T = float> T& m_FirstPersonCameraMoveSpeed() {
		return *(T*)((uintptr_t)this + 0x4D0);
	}
	template <typename T = uintptr_t> T& m_CachedMainCamera() {
		return *(T*)((uintptr_t)this + 0x4D4);
	}
	template <typename T = float> T& m_CurrentPassengerAniAngle() {
		return *(T*)((uintptr_t)this + 0x4D8);
	}
	template <typename T = float> T& targetAniAngle() {
		return *(T*)((uintptr_t)this + 0x4DC);
	}
	template <typename T = float> T& InputAccelerationForwrad() {
		return *(T*)((uintptr_t)this + 0x4E0);
	}
	template <typename T = float> T& InputAccelerationLaterial() {
		return *(T*)((uintptr_t)this + 0x4E4);
	}
	template <typename T = bool> T& disableSprint() {
		return *(T*)((uintptr_t)this + 0x4E8);
	}
	template <typename T = bool> T& IsGravitySpikesJumpUp() {
		return *(T*)((uintptr_t)this + 0x4E9);
	}
	template <typename T = bool> T& m_IsShadowBlade() {
		return *(T*)((uintptr_t)this + 0x4EA);
	}
	template <typename T = bool> T& m_CanShadowBladeFire() {
		return *(T*)((uintptr_t)this + 0x4EB);
	}
	template <typename T = float> static T& SwitchToLastUsedWeaponLockTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = bool> static T& ForbidSelectWeaponInDeadState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = Il2CppVector3> T& m_FirstPersonCameraLocalPosition_OriginalValue() {
		return *(T*)((uintptr_t)this + 0x4EC);
	}
	template <typename T = bool> T& IsTPSClimb() {
		return *(T*)((uintptr_t)this + 0x4F8);
	}
	template <typename T = bool> static T& RemoveAllInventoriesInOnSpectatingEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2D);
	}
	template <typename T = uintptr_t> T& m_FirstPersonWeaponSocket() {
		return *(T*)((uintptr_t)this + 0x4FC);
	}
	template <typename T = uintptr_t> T& m_FirstPersonArmSocket() {
		return *(T*)((uintptr_t)this + 0x500);
	}
	template <typename T = uintptr_t> T& m_ThirdPersonModelSocket() {
		return *(T*)((uintptr_t)this + 0x504);
	}
	template <typename T = bool> T& m_ShowOrHideArmFX() {
		return *(T*)((uintptr_t)this + 0x508);
	}
	template <typename T = uintptr_t> T& m_RUpArmObj() {
		return *(T*)((uintptr_t)this + 0x50C);
	}
	template <typename T = uintptr_t> T& m_LUpArmObj() {
		return *(T*)((uintptr_t)this + 0x510);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& m_SocketDic() {
		return *(T*)((uintptr_t)this + 0x514);
	}
	template <typename T = uintptr_t> T& m_CurrentTriggerCarePackage() {
		return *(T*)((uintptr_t)this + 0x518);
	}
	template <typename T = uintptr_t> T& m_CachedAimAssistanceCollider() {
		return *(T*)((uintptr_t)this + 0x51C);
	}
	template <typename T = float> T& m_LeftConcussionTime() {
		return *(T*)((uintptr_t)this + 0x520);
	}
	template <typename T = bool> T& m_NeedToShowWhiteScreenEffect() {
		return *(T*)((uintptr_t)this + 0x524);
	}
	template <typename T = float> T& m_LeftFlashEffectTime() {
		return *(T*)((uintptr_t)this + 0x528);
	}
	template <typename T = float> T& m_LeftEMPEffectTime() {
		return *(T*)((uintptr_t)this + 0x52C);
	}
	template <typename T = bool> T& m_IsInterferedByDrone() {
		return *(T*)((uintptr_t)this + 0x530);
	}
	template <typename T = bool> T& m_HasOcclusionEffect() {
		return *(T*)((uintptr_t)this + 0x531);
	}
	template <typename T = bool> T& m_NeedShowOnMap() {
		return *(T*)((uintptr_t)this + 0x532);
	}
	template <typename T = bool> T& m_IsLEGO() {
		return *(T*)((uintptr_t)this + 0x533);
	}
	template <typename T = uintptr_t> T& mFEyeHeighttLerpTick() {
		return *(T*)((uintptr_t)this + 0x534);
	}
	template <typename T = float> T& m_ToEyeHeightOffset() {
		return *(T*)((uintptr_t)this + 0x538);
	}
	template <typename T = float> T& m_ToEyeHeightTimer() {
		return *(T*)((uintptr_t)this + 0x53C);
	}
	template <typename T = float> T& m_ToEyeHeighttTime() {
		return *(T*)((uintptr_t)this + 0x540);
	}
	template <typename T = float> T& m_LastEyeHeightOffset() {
		return *(T*)((uintptr_t)this + 0x544);
	}
	template <typename T = bool> T& m_IsHighThrowFire() {
		return *(T*)((uintptr_t)this + 0x548);
	}
	template <typename T = bool> T& m_bUsingBRUlt() {
		return *(T*)((uintptr_t)this + 0x549);
	}
	template <typename T = bool> T& m_InSlideTackle() {
		return *(T*)((uintptr_t)this + 0x54A);
	}
	template <typename T = bool> T& m_UseSlideTackleSpeed() {
		return *(T*)((uintptr_t)this + 0x54B);
	}
	template <typename T = bool> T& m_InRoll() {
		return *(T*)((uintptr_t)this + 0x54C);
	}
	template <typename T = bool> T& m_UseRollSpeed() {
		return *(T*)((uintptr_t)this + 0x54D);
	}
	template <typename T = int32_t> static T& m_FloorLayerMask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> T& m_SubWeaponAttachment() {
		return *(T*)((uintptr_t)this + 0x550);
	}
	template <typename T = bool> T& _IsTakingLightingDamage() {
		return *(T*)((uintptr_t)this + 0x554);
	}
	template <typename T = float> T& fightOffTime() {
		return *(T*)((uintptr_t)this + 0x558);
	}
	template <typename T = float> T& fightOffCDTime() {
		return *(T*)((uintptr_t)this + 0x55C);
	}
	template <typename T = bool> static T& UseMoveSpeedAdjustAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> T& m_VehicleThrowWeaponPositionSocket() {
		return *(T*)((uintptr_t)this + 0x560);
	}
	template <typename T = Il2CppQuaternion> T& m_LastProjectileStartPositionOffsetRot() {
		return *(T*)((uintptr_t)this + 0x564);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_IgnoreWeaponWhenEquipList() {
		return *(T*)((uintptr_t)this + 0x574);
	}
	template <typename T = bool> T& m_IsUsingWeaponSkill() {
		return *(T*)((uintptr_t)this + 0x578);
	}
	template <typename T = float> T& m_RotateTime() {
		return *(T*)((uintptr_t)this + 0x57C);
	}
	template <typename T = float> T& m_RotateCheckPoint() {
		return *(T*)((uintptr_t)this + 0x580);
	}
	template <typename T = bool> T& m_IsChangingFireMode() {
		return *(T*)((uintptr_t)this + 0x584);
	}
	template <typename T = uintptr_t> T& m_MedicalStationCuringEffect() {
		return *(T*)((uintptr_t)this + 0x588);
	}
	template <typename T = bool> T& m_IsCuringByMedicalStation() {
		return *(T*)((uintptr_t)this + 0x58C);
	}
	template <typename T = uintptr_t> T& m_UltEffect1P() {
		return *(T*)((uintptr_t)this + 0x590);
	}
	template <typename T = uintptr_t> T& m_UltEffect3P() {
		return *(T*)((uintptr_t)this + 0x594);
	}
	template <typename T = int32_t> T& m_UltScreenEffectID() {
		return *(T*)((uintptr_t)this + 0x598);
	}
	template <typename T = bool> T& m_isPlayingUltEffect() {
		return *(T*)((uintptr_t)this + 0x59C);
	}
	template <typename T = bool> T& _HasMultyThrowWeapon() {
		return *(T*)((uintptr_t)this + 0x59D);
	}
	template <typename T = uintptr_t> T& StandColliderData() {
		return *(T*)((uintptr_t)this + 0x5A0);
	}
	template <typename T = uintptr_t> T& ProneColliderData() {
		return *(T*)((uintptr_t)this + 0x5A4);
	}
	template <typename T = uintptr_t> T& CrouchColliderData() {
		return *(T*)((uintptr_t)this + 0x5A8);
	}
	template <typename T = uintptr_t> T& SwimColliderData() {
		return *(T*)((uintptr_t)this + 0x5AC);
	}
	template <typename T = uintptr_t> T& ClimbColliderData() {
		return *(T*)((uintptr_t)this + 0x5B0);
	}
	template <typename T = uintptr_t> T& SlideTackleColliderData() {
		return *(T*)((uintptr_t)this + 0x5B4);
	}
	template <typename T = uintptr_t> T& RollColliderData() {
		return *(T*)((uintptr_t)this + 0x5B8);
	}
	template <typename T = uintptr_t> T& GoliathColliderData() {
		return *(T*)((uintptr_t)this + 0x5BC);
	}
	template <typename T = uintptr_t> T& m_ModelCollider() {
		return *(T*)((uintptr_t)this + 0x5C0);
	}
	template <typename T = bool> T& m_HasCharacterController() {
		return *(T*)((uintptr_t)this + 0x5C4);
	}
	template <typename T = uintptr_t> T& m_CharacterController() {
		return *(T*)((uintptr_t)this + 0x5C8);
	}
	template <typename T = bool> T& m_HasBodyCharacterController() {
		return *(T*)((uintptr_t)this + 0x5CC);
	}
	template <typename T = uintptr_t> T& m_BodyCharacterController() {
		return *(T*)((uintptr_t)this + 0x5D0);
	}
	template <typename T = uintptr_t> T& m_BodyCharacterControllerObj() {
		return *(T*)((uintptr_t)this + 0x5D4);
	}
	template <typename T = bool> T& m_HasLegCharacterController() {
		return *(T*)((uintptr_t)this + 0x5D8);
	}
	template <typename T = uintptr_t> T& m_LegCharacterController() {
		return *(T*)((uintptr_t)this + 0x5DC);
	}
	template <typename T = uintptr_t> T& m_LegCharacterControllerObj() {
		return *(T*)((uintptr_t)this + 0x5E0);
	}
	template <typename T = float> static T& SkinWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_StandCharControllerHeight() {
		return *(T*)((uintptr_t)this + 0x5E4);
	}
	template <typename T = float> static T& m_StandCharControllerRadius() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_CrouchCharControllerHight() {
		return *(T*)((uintptr_t)this + 0x5E8);
	}
	template <typename T = float> T& m_SlideCharControllerHight() {
		return *(T*)((uintptr_t)this + 0x5EC);
	}
	template <typename T = float> T& m_ProneCharControllerHight() {
		return *(T*)((uintptr_t)this + 0x5F0);
	}
	template <typename T = float> static T& m_ProneCharControllerRadius() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_SwimCharControllerHight() {
		return *(T*)((uintptr_t)this + 0x5F4);
	}
	template <typename T = float> T& m_GrapRushCharControllerHight() {
		return *(T*)((uintptr_t)this + 0x5F8);
	}
	template <typename T = float> T& m_GoliathStandCharControllerHeight() {
		return *(T*)((uintptr_t)this + 0x5FC);
	}
	template <typename T = float> static T& m_GoliathStandCharControllerRadius() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_PeripheralVision() {
		return *(T*)((uintptr_t)this + 0x600);
	}
	template <typename T = float> T& m_SightRadius() {
		return *(T*)((uintptr_t)this + 0x604);
	}
	template <typename T = float> T& m_Gravity() {
		return *(T*)((uintptr_t)this + 0x608);
	}
	template <typename T = float> T& m_AirSteering() {
		return *(T*)((uintptr_t)this + 0x60C);
	}
	template <typename T = float> T& m_InitialVerticalSpeed() {
		return *(T*)((uintptr_t)this + 0x610);
	}
	template <typename T = float> T& m_InitialMaxJumpHeight() {
		return *(T*)((uintptr_t)this + 0x614);
	}
	template <typename T = float> T& m_JumpLimitTime() {
		return *(T*)((uintptr_t)this + 0x618);
	}
	template <typename T = float> T& m_JumpLimitMinJumpHeight() {
		return *(T*)((uintptr_t)this + 0x61C);
	}
	template <typename T = float> T& m_JumpLimitDecreaseRate() {
		return *(T*)((uintptr_t)this + 0x620);
	}
	template <typename T = float> T& m_JumpMagicNumber() {
		return *(T*)((uintptr_t)this + 0x624);
	}
	template <typename T = bool> T& m_UseJumpLimit() {
		return *(T*)((uintptr_t)this + 0x628);
	}
	template <typename T = float> T& m_MaxAcceleration() {
		return *(T*)((uintptr_t)this + 0x62C);
	}
	template <typename T = float> T& m_WalkAnimBaseSpeed() {
		return *(T*)((uintptr_t)this + 0x630);
	}
	template <typename T = float> T& m_MaxSpeed() {
		return *(T*)((uintptr_t)this + 0x634);
	}
	template <typename T = float> T& m_BackwardMaxSpeed() {
		return *(T*)((uintptr_t)this + 0x638);
	}
	template <typename T = float> T& m_HorizontalMaxSpeed() {
		return *(T*)((uintptr_t)this + 0x63C);
	}
	template <typename T = float> T& m_HorizontalMaxCosValue() {
		return *(T*)((uintptr_t)this + 0x640);
	}
	template <typename T = float> T& m_LadderSpeed() {
		return *(T*)((uintptr_t)this + 0x644);
	}
	template <typename T = float> T& m_Friction() {
		return *(T*)((uintptr_t)this + 0x648);
	}
	template <typename T = float> T& m_WalkingSpeedAddPercent() {
		return *(T*)((uintptr_t)this + 0x64C);
	}
	template <typename T = float> T& m_VerticalRoationLimitMin() {
		return *(T*)((uintptr_t)this + 0x650);
	}
	template <typename T = float> T& m_VerticalRoationLimitMax() {
		return *(T*)((uintptr_t)this + 0x654);
	}
	template <typename T = float> T& m_AngleLimitXDownProne() {
		return *(T*)((uintptr_t)this + 0x658);
	}
	template <typename T = float> T& m_AngleLimitXUpProne() {
		return *(T*)((uintptr_t)this + 0x65C);
	}
	template <typename T = float> T& m_HorizontalRoationLimitMin() {
		return *(T*)((uintptr_t)this + 0x660);
	}
	template <typename T = float> T& m_HorizontalRoationLimitMax() {
		return *(T*)((uintptr_t)this + 0x664);
	}
	template <typename T = float> T& m_MaxAngleTurnRightDeltaProne() {
		return *(T*)((uintptr_t)this + 0x668);
	}
	template <typename T = float> T& m_MaxAngleTurnLeftDeltaProne() {
		return *(T*)((uintptr_t)this + 0x66C);
	}
	template <typename T = float> T& m_HitScoreIntervalTime() {
		return *(T*)((uintptr_t)this + 0x670);
	}
	template <typename T = float> T& m_ClimbUpHeight() {
		return *(T*)((uintptr_t)this + 0x674);
	}
	template <typename T = float> T& m_EmptyHandSprintMaxAngle() {
		return *(T*)((uintptr_t)this + 0x678);
	}
	template <typename T = float> T& m_ProneAnimSpeedMul() {
		return *(T*)((uintptr_t)this + 0x67C);
	}
	template <typename T = float> T& m_BackwardConsineThresholdValue() {
		return *(T*)((uintptr_t)this + 0x680);
	}
	template <typename T = float> T& m_StandMoveToCrouchTransitionTime() {
		return *(T*)((uintptr_t)this + 0x684);
	}
	template <typename T = float> T& m_CrouchMoveToStandTransitionTime() {
		return *(T*)((uintptr_t)this + 0x688);
	}
	template <typename T = float> T& m_AnimationSprintForwardLerpSpeed() {
		return *(T*)((uintptr_t)this + 0x68C);
	}
	template <typename T = float> T& m_AnimationSprintLateralLerpSpeed() {
		return *(T*)((uintptr_t)this + 0x690);
	}
	template <typename T = float> T& m_AnimationCrouchForwardLerpSpeed() {
		return *(T*)((uintptr_t)this + 0x694);
	}
	template <typename T = float> T& m_AnimationCrouchLateralLerpSpeed() {
		return *(T*)((uintptr_t)this + 0x698);
	}
	template <typename T = float> T& m_AnimationRunForwardLerpSpeed() {
		return *(T*)((uintptr_t)this + 0x69C);
	}
	template <typename T = float> T& m_AnimationRunSimulateSpeed() {
		return *(T*)((uintptr_t)this + 0x6A0);
	}
	template <typename T = float> T& m_AnimationRunLateralLerpSpeed() {
		return *(T*)((uintptr_t)this + 0x6A4);
	}
	template <typename T = float> T& m_AnimationSwimForwardLerpSpeed() {
		return *(T*)((uintptr_t)this + 0x6A8);
	}
	template <typename T = float> T& m_AnimationSwimLateralLerpSpeed() {
		return *(T*)((uintptr_t)this + 0x6AC);
	}
	template <typename T = float> T& m_AnimationTPSwimForwardLerpSpeed() {
		return *(T*)((uintptr_t)this + 0x6B0);
	}
	template <typename T = float> T& m_AnimationTPSwimLateralLerpSpeed() {
		return *(T*)((uintptr_t)this + 0x6B4);
	}
	template <typename T = float> T& m_AnimationProneForwardLerpSpeed() {
		return *(T*)((uintptr_t)this + 0x6B8);
	}
	template <typename T = float> T& m_AnimationProneLateralLerpSpeed() {
		return *(T*)((uintptr_t)this + 0x6BC);
	}
	template <typename T = float> T& m_AnimationDyingForwardLerpSpeed() {
		return *(T*)((uintptr_t)this + 0x6C0);
	}
	template <typename T = float> T& m_AnimationDyingLateralLerpSpeed() {
		return *(T*)((uintptr_t)this + 0x6C4);
	}
	template <typename T = float> T& m_WalkingToFallingHeight() {
		return *(T*)((uintptr_t)this + 0x6C8);
	}
	template <typename T = float> T& m_SlideTackleToFallingHeight() {
		return *(T*)((uintptr_t)this + 0x6CC);
	}
	template <typename T = float> T& m_WalkingToSkydivingHeight() {
		return *(T*)((uintptr_t)this + 0x6D0);
	}
	template <typename T = float> T& m_WalkingToSkydivingHeightFromVehicle() {
		return *(T*)((uintptr_t)this + 0x6D4);
	}
	template <typename T = float> T& m_EasyWalkingToSkydivingHeight() {
		return *(T*)((uintptr_t)this + 0x6D8);
	}
	template <typename T = float> T& m_MaxAngleTurnLeftDelta() {
		return *(T*)((uintptr_t)this + 0x6DC);
	}
	template <typename T = float> T& m_MaxAngleTurnRightDelta() {
		return *(T*)((uintptr_t)this + 0x6E0);
	}
	template <typename T = float> T& m_MaxAnglePessnagerTurnDelta() {
		return *(T*)((uintptr_t)this + 0x6E4);
	}
	template <typename T = float> T& m_MaxAngleMoveTurnDelta() {
		return *(T*)((uintptr_t)this + 0x6E8);
	}
	template <typename T = float> T& m_SwimmingMaxSpeed() {
		return *(T*)((uintptr_t)this + 0x6EC);
	}
	template <typename T = float> T& m_UnderwaterSwimmingMaxSpeed() {
		return *(T*)((uintptr_t)this + 0x6F0);
	}
	template <typename T = float> T& m_FloatingMaxSpeed() {
		return *(T*)((uintptr_t)this + 0x6F4);
	}
	template <typename T = float> T& m_SwimmingSprintMaxSpeed() {
		return *(T*)((uintptr_t)this + 0x6F8);
	}
	template <typename T = float> T& m_UnderwaterSwimmingSprintMaxSpeed() {
		return *(T*)((uintptr_t)this + 0x6FC);
	}
	template <typename T = float> T& m_DivingMaxSpeed() {
		return *(T*)((uintptr_t)this + 0x700);
	}
	template <typename T = float> T& m_TotalOxygen() {
		return *(T*)((uintptr_t)this + 0x704);
	}
	template <typename T = float> T& m_OxygenRecoverSpeed() {
		return *(T*)((uintptr_t)this + 0x708);
	}
	template <typename T = float> T& m_OxygenAttenuateSpeed() {
		return *(T*)((uintptr_t)this + 0x70C);
	}
	template <typename T = float> T& m_StartSwimmingHeight() {
		return *(T*)((uintptr_t)this + 0x710);
	}
	template <typename T = float> T& m_DeepWaterHeight() {
		return *(T*)((uintptr_t)this + 0x714);
	}
	template <typename T = float> T& m_SprintingWaterHeight() {
		return *(T*)((uintptr_t)this + 0x718);
	}
	template <typename T = float> T& m_SprintMaxCliffAngle() {
		return *(T*)((uintptr_t)this + 0x71C);
	}
	template <typename T = float> T& m_RecoverRotationSpeed() {
		return *(T*)((uintptr_t)this + 0x720);
	}
	template <typename T = float> T& m_RecoverMoveRotationSpeed() {
		return *(T*)((uintptr_t)this + 0x724);
	}
	template <typename T = float> T& m_RecoverSprintRotationSpeed() {
		return *(T*)((uintptr_t)this + 0x728);
	}
	template <typename T = float> T& m_CliffAngle() {
		return *(T*)((uintptr_t)this + 0x72C);
	}
	template <typename T = float> T& m_SlopeLimit() {
		return *(T*)((uintptr_t)this + 0x730);
	}
	template <typename T = float> T& m_FallingLandTime() {
		return *(T*)((uintptr_t)this + 0x734);
	}
	template <typename T = float> T& m_DropDownTime() {
		return *(T*)((uintptr_t)this + 0x738);
	}
	template <typename T = float> T& m_LandHardStandTime() {
		return *(T*)((uintptr_t)this + 0x73C);
	}
	template <typename T = float> T& m_CrouchingEyeHeight() {
		return *(T*)((uintptr_t)this + 0x740);
	}
	template <typename T = float> T& m_Prone1PTransitionTime() {
		return *(T*)((uintptr_t)this + 0x744);
	}
	template <typename T = float> T& m_Prone1PMidStopTime() {
		return *(T*)((uintptr_t)this + 0x748);
	}
	template <typename T = float> T& m_SwimmingAimingFireSpeedScale() {
		return *(T*)((uintptr_t)this + 0x74C);
	}
	template <typename T = float> T& m_SwimmingFireSpeedScale() {
		return *(T*)((uintptr_t)this + 0x750);
	}
	template <typename T = float> T& m_GuideMoveCheckAngle() {
		return *(T*)((uintptr_t)this + 0x754);
	}
	template <typename T = float> T& m_GuideMoveCheckSpeed() {
		return *(T*)((uintptr_t)this + 0x758);
	}
	template <typename T = float> T& m_GuideMoveCheckTime() {
		return *(T*)((uintptr_t)this + 0x75C);
	}
	template <typename T = float> T& m_ProneToStandAcceleration() {
		return *(T*)((uintptr_t)this + 0x760);
	}
	template <typename T = float> T& m_IndividuationTPSCameraDistance() {
		return *(T*)((uintptr_t)this + 0x764);
	}
	template <typename T = float> T& m_IndividuationTPSCameraYOffset() {
		return *(T*)((uintptr_t)this + 0x768);
	}
	template <typename T = float> T& m_PlayHitCDTime() {
		return *(T*)((uintptr_t)this + 0x76C);
	}
	template <typename T = float> T& m_StandingEyeHeight() {
		return *(T*)((uintptr_t)this + 0x770);
	}
	template <typename T = float> T& m_ProneingEyeHeight() {
		return *(T*)((uintptr_t)this + 0x774);
	}
	template <typename T = float> T& m_ConcussionMovementScale() {
		return *(T*)((uintptr_t)this + 0x778);
	}
	template <typename T = float> T& m_FallingHorizontalObstrutAngle() {
		return *(T*)((uintptr_t)this + 0x77C);
	}
	template <typename T = float> T& m_ValidFallingRayDistance() {
		return *(T*)((uintptr_t)this + 0x780);
	}
	template <typename T = float> T& m_SwimPutWeaponTime() {
		return *(T*)((uintptr_t)this + 0x784);
	}
	template <typename T = float> T& m_SwimGetWeaponTime() {
		return *(T*)((uintptr_t)this + 0x788);
	}
	template <typename T = float> T& m_SwimLeftHandLimitUpwardAngle() {
		return *(T*)((uintptr_t)this + 0x78C);
	}
	template <typename T = float> T& m_StepOffset() {
		return *(T*)((uintptr_t)this + 0x790);
	}
	template <typename T = float> T& m_MaxClimbClientForceMoveDistance() {
		return *(T*)((uintptr_t)this + 0x794);
	}
	template <typename T = float> T& m_SetRotationDirectlyAngleThreshold() {
		return *(T*)((uintptr_t)this + 0x798);
	}
	template <typename T = float> T& m_JumpLandHeight() {
		return *(T*)((uintptr_t)this + 0x79C);
	}
	template <typename T = float> T& m_WalkingToFallingVerticalSpeedLimit() {
		return *(T*)((uintptr_t)this + 0x7A0);
	}
	template <typename T = float> T& m_DoJumpVerticalSpeedLimit() {
		return *(T*)((uintptr_t)this + 0x7A4);
	}
	template <typename T = float> T& m_AutoSlideSpeed() {
		return *(T*)((uintptr_t)this + 0x7A8);
	}
	template <typename T = float> T& m_MaxVerticalMoveDeltaSpeed() {
		return *(T*)((uintptr_t)this + 0x7AC);
	}
	template <typename T = float> T& m_MaxClimbFallingSpeed() {
		return *(T*)((uintptr_t)this + 0x7B0);
	}
	template <typename T = float> T& m_JumpUpLimitTime() {
		return *(T*)((uintptr_t)this + 0x7B4);
	}
	template <typename T = float> T& m_ReachTargetTime() {
		return *(T*)((uintptr_t)this + 0x7B8);
	}
	template <typename T = float> T& m_MaxForceSimulateDistance() {
		return *(T*)((uintptr_t)this + 0x7BC);
	}
	template <typename T = float> T& m_FaceWallJumpMinCosValue() {
		return *(T*)((uintptr_t)this + 0x7C0);
	}
	template <typename T = float> T& m_JumpMeleeMinHeight() {
		return *(T*)((uintptr_t)this + 0x7C4);
	}
	template <typename T = float> T& m_MaxWalkingSlopeVerticalVelocity() {
		return *(T*)((uintptr_t)this + 0x7C8);
	}
	template <typename T = float> T& m_SimulateAnimMoveScale() {
		return *(T*)((uintptr_t)this + 0x7CC);
	}
	template <typename T = float> T& m_ProneValidXAngle() {
		return *(T*)((uintptr_t)this + 0x7D0);
	}
	template <typename T = float> T& m_ProneValidBodyLength() {
		return *(T*)((uintptr_t)this + 0x7D4);
	}
	template <typename T = float> T& m_ProneValidPhysicsCastRadius() {
		return *(T*)((uintptr_t)this + 0x7D8);
	}
	template <typename T = float> T& m_MaxForceSimulateFallingDistance() {
		return *(T*)((uintptr_t)this + 0x7DC);
	}
	template <typename T = float> T& m_LadderClimbTopTime() {
		return *(T*)((uintptr_t)this + 0x7E0);
	}
	template <typename T = float> T& m_FPPickupFadeTime() {
		return *(T*)((uintptr_t)this + 0x7E4);
	}
	template <typename T = bool> T& m_AllowDownToLadder() {
		return *(T*)((uintptr_t)this + 0x7E8);
	}
	template <typename T = float> T& m_MoveAnimationSpeed() {
		return *(T*)((uintptr_t)this + 0x7EC);
	}
	template <typename T = float> T& m_MoveWalkSpeedForAnimation() {
		return *(T*)((uintptr_t)this + 0x7F0);
	}
	template <typename T = float> T& m_CrouchMoveAnimationSpeed() {
		return *(T*)((uintptr_t)this + 0x7F4);
	}
	template <typename T = float> T& m_LadderEnterFromTopTime() {
		return *(T*)((uintptr_t)this + 0x7F8);
	}
	template <typename T = float> T& m_LadderClimbFromTopTime() {
		return *(T*)((uintptr_t)this + 0x7FC);
	}
	template <typename T = bool> T& m_UseSlowWalk() {
		return *(T*)((uintptr_t)this + 0x800);
	}
	template <typename T = bool> T& m_IsCurrentAnimationActive() {
		return *(T*)((uintptr_t)this + 0x801);
	}
	template <typename T = float> T& m_LastPlayHitTime() {
		return *(T*)((uintptr_t)this + 0x804);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ClothCacheList() {
		return *(T*)((uintptr_t)this + 0x808);
	}
	template <typename T = bool> T& m_HasCloth() {
		return *(T*)((uintptr_t)this + 0x80C);
	}
	template <typename T = bool> T& m_IsUseCloth() {
		return *(T*)((uintptr_t)this + 0x80D);
	}
	template <typename T = uintptr_t> T& m_ShadowbladeEffectAssetID() {
		return *(T*)((uintptr_t)this + 0x810);
	}
	template <typename T = bool> T& IsWeaponInZeroSocket() {
		return *(T*)((uintptr_t)this + 0x814);
	}
	template <typename T = uintptr_t> T& m_ZeroSocket_FirstPersonCameraTransform() {
		return *(T*)((uintptr_t)this + 0x818);
	}
	template <typename T = uintptr_t> T& m_ZeroSocket_RightWeaponFirstPersonTransform() {
		return *(T*)((uintptr_t)this + 0x81C);
	}
	template <typename T = uintptr_t> T& m_ZeroSocketHandler() {
		return *(T*)((uintptr_t)this + 0x820);
	}
	template <typename T = uintptr_t> T& m_ZeroSocketRoot() {
		return *(T*)((uintptr_t)this + 0x824);
	}
	template <typename T = float> T& m_HorizontalSpeed() {
		return *(T*)((uintptr_t)this + 0x828);
	}
	template <typename T = float> T& m_VerticalSpeed() {
		return *(T*)((uintptr_t)this + 0x82C);
	}
	template <typename T = float> T& m_MaxJumpHeight() {
		return *(T*)((uintptr_t)this + 0x830);
	}
	template <typename T = float> T& m_JumpBeginHeight() {
		return *(T*)((uintptr_t)this + 0x834);
	}
	template <typename T = float> T& m_LastDoJumpTime() {
		return *(T*)((uintptr_t)this + 0x838);
	}
	template <typename T = float> T& m_CurrentDoJumpMaxHeight() {
		return *(T*)((uintptr_t)this + 0x83C);
	}
	template <typename T = float> T& m_StartFallingTime() {
		return *(T*)((uintptr_t)this + 0x840);
	}
	template <typename T = float> static T& CheckJumpFaceWallHitMinHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = float> T& FixLimitJumpHornzontalSpeed() {
		return *(T*)((uintptr_t)this + 0x844);
	}
	template <typename T = bool> T& bFountianFalling() {
		return *(T*)((uintptr_t)this + 0x848);
	}
	template <typename T = float> T& m_AirControl() {
		return *(T*)((uintptr_t)this + 0x84C);
	}
	template <typename T = bool> T& m_CanAirControl() {
		return *(T*)((uintptr_t)this + 0x850);
	}
	template <typename T = float> static T& MinJumpupMoveY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = Il2CppVector3> T& m_ClimbStartPos() {
		return *(T*)((uintptr_t)this + 0x854);
	}
	template <typename T = Il2CppVector3> T& m_ClimbOverInitV() {
		return *(T*)((uintptr_t)this + 0x860);
	}
	template <typename T = float> T& m_ClimbOverCacheCharControllerheight() {
		return *(T*)((uintptr_t)this + 0x86C);
	}
	template <typename T = float> T& m_ClimbOverSetCharControllerheight() {
		return *(T*)((uintptr_t)this + 0x870);
	}
	template <typename T = float> T& m_StartClimbOverTime() {
		return *(T*)((uintptr_t)this + 0x874);
	}
	template <typename T = float> T& m_MaxClimbOverTime() {
		return *(T*)((uintptr_t)this + 0x878);
	}
	template <typename T = float> T& m_ClimbOverGravity() {
		return *(T*)((uintptr_t)this + 0x87C);
	}
	template <typename T = float> T& m_ClimbOverVelocityUp() {
		return *(T*)((uintptr_t)this + 0x880);
	}
	template <typename T = float> T& m_ClimbOverVelocityForward() {
		return *(T*)((uintptr_t)this + 0x884);
	}
	template <typename T = bool> static T& IsLimitMaxSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = float> static T& ClimbMaxYSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = float> static T& SimulateClimbEyeHeightLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = bool> static T& IsSetClimbMantleOverInMaxLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = float> T& m_EndClimbOverMaxHeightMultyply() {
		return *(T*)((uintptr_t)this + 0x888);
	}
	template <typename T = bool> static T& IsProcessWalkingFaceWallMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4D);
	}
	template <typename T = float> static T& ProcessWalkingFaceWallDotValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = float> static T& DefaultCos30() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = bool> T& m_bLastFrameSlopAgainstWallMove() {
		return *(T*)((uintptr_t)this + 0x88C);
	}
	template <typename T = bool> T& IsLastMove() {
		return *(T*)((uintptr_t)this + 0x88D);
	}
	template <typename T = bool> T& m_IsPhysWalkingSlideMove() {
		return *(T*)((uintptr_t)this + 0x88E);
	}
	template <typename T = bool> T& OpenFaceWallFix() {
		return *(T*)((uintptr_t)this + 0x88F);
	}
	template <typename T = bool> T& DoCheckWalkingInFloatNAN() {
		return *(T*)((uintptr_t)this + 0x890);
	}
	template <typename T = float> T& m_lastMoveScale() {
		return *(T*)((uintptr_t)this + 0x894);
	}
	template <typename T = int32_t> T& TickPrintNANLog() {
		return *(T*)((uintptr_t)this + 0x898);
	}
	template <typename T = bool> static T& IgnoreCaclRampRatio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = float> T& m_ProcessWalkingFaceWallMoveRayDownHeight() {
		return *(T*)((uintptr_t)this + 0x89C);
	}
	template <typename T = float> T& m_ProcessWalkingFaceWallMoveRayDownRadius() {
		return *(T*)((uintptr_t)this + 0x8A0);
	}
	template <typename T = int32_t> T& m_LastFrameProcessStandOnPawn() {
		return *(T*)((uintptr_t)this + 0x8A4);
	}
	template <typename T = int32_t> T& m_ContinueProcessStandOnPawnCount() {
		return *(T*)((uintptr_t)this + 0x8A8);
	}
	template <typename T = bool> static T& StaticEnableOptimizeTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x59);
	}
	template <typename T = Il2CppVector3> T& m_LastCCHitNormal() {
		return *(T*)((uintptr_t)this + 0x8AC);
	}
	template <typename T = Il2CppVector3> T& m_LastCCHitPoint() {
		return *(T*)((uintptr_t)this + 0x8B8);
	}
	template <typename T = bool> T& m_LastCCHitBelow() {
		return *(T*)((uintptr_t)this + 0x8C4);
	}
	template <typename T = int32_t> T& m_LastCCHitLayer() {
		return *(T*)((uintptr_t)this + 0x8C8);
	}
	template <typename T = float> T& m_LastCCHitFrame() {
		return *(T*)((uintptr_t)this + 0x8CC);
	}
	template <typename T = bool> T& m_LastCCHitWall() {
		return *(T*)((uintptr_t)this + 0x8D0);
	}
	template <typename T = int32_t> T& m_IsLastHitWallFrame() {
		return *(T*)((uintptr_t)this + 0x8D4);
	}
	template <typename T = Il2CppVector3> T& m_LastCCHitWallNormal() {
		return *(T*)((uintptr_t)this + 0x8D8);
	}
	template <typename T = Il2CppVector3> T& m_LastCCHitWallPoint() {
		return *(T*)((uintptr_t)this + 0x8E4);
	}
	template <typename T = Il2CppVector3> T& m_LastCCHitPawnNormal() {
		return *(T*)((uintptr_t)this + 0x8F0);
	}
	template <typename T = Il2CppVector3> T& m_LastCCHitPawnPoint() {
		return *(T*)((uintptr_t)this + 0x8FC);
	}
	template <typename T = int32_t> T& m_IsLastGroudHitPawnFrame() {
		return *(T*)((uintptr_t)this + 0x908);
	}
	template <typename T = bool> T& m_IsLastGroudHitPawn() {
		return *(T*)((uintptr_t)this + 0x90C);
	}
	template <typename T = bool> T& m_IsLastCCHitVehicle() {
		return *(T*)((uintptr_t)this + 0x90D);
	}
	template <typename T = int32_t> T& m_IsLastCCHitVehicleFrame() {
		return *(T*)((uintptr_t)this + 0x910);
	}
	template <typename T = Il2CppVector3> T& m_LastCCHitVehicleNormal() {
		return *(T*)((uintptr_t)this + 0x914);
	}
	template <typename T = Il2CppVector3> T& m_LastCCHitVehiclePoint() {
		return *(T*)((uintptr_t)this + 0x920);
	}
	template <typename T = float> static T& AutoSlideAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& GroundAutoSlideAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& AutoSlideCCDist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_IsLastHitCeilFrame() {
		return *(T*)((uintptr_t)this + 0x92C);
	}
	template <typename T = bool> T& m_LastCCHitCeil() {
		return *(T*)((uintptr_t)this + 0x930);
	}
	template <typename T = Il2CppVector3> T& m_LastCeilCCHitNormal() {
		return *(T*)((uintptr_t)this + 0x934);
	}
	template <typename T = Il2CppVector3> T& m_LastCeilCCHitPoint() {
		return *(T*)((uintptr_t)this + 0x940);
	}
	template <typename T = Il2CppVector3> T& BeginFallPos() {
		return *(T*)((uintptr_t)this + 0x94C);
	}
	template <typename T = Il2CppVector3> T& FallMaxHeightPos() {
		return *(T*)((uintptr_t)this + 0x958);
	}
	template <typename T = float> static T& EndClimbResetFireInputCDTIme() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = Il2CppVector3> T& lastVehicleLocalPos() {
		return *(T*)((uintptr_t)this + 0x964);
	}
	template <typename T = Il2CppVector3> T& lastVehicleWorldPos() {
		return *(T*)((uintptr_t)this + 0x970);
	}
	template <typename T = Il2CppVector3> T& lastVehicleAngle() {
		return *(T*)((uintptr_t)this + 0x97C);
	}
	template <typename T = bool> T& m_IsSetFromServer() {
		return *(T*)((uintptr_t)this + 0x988);
	}
	template <typename T = Il2CppList<Il2CppList<uintptr_t>*>*> T& m_RendererDict() {
		return *(T*)((uintptr_t)this + 0x98C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& AllRenderers() {
		return *(T*)((uintptr_t)this + 0x990);
	}
	template <typename T = bool> T& IsWeaponSwitching() {
		return *(T*)((uintptr_t)this + 0x994);
	}
	template <typename T = float> static T& TrySwitchWeaponScaleTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> T& cacheDiscardInfo() {
		return *(T*)((uintptr_t)this + 0x998);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& m_ActiveWeaponNextStateMapByItemID() {
		return *(T*)((uintptr_t)this + 0x99C);
	}
	template <typename T = bool> T& m_NeedDelayTriggerADS() {
		return *(T*)((uintptr_t)this + 0x9A0);
	}
	template <typename T = bool> T& m_ResetAimInput() {
		return *(T*)((uintptr_t)this + 0x9A1);
	}
	template <typename T = bool> T& mResetAdsInput() {
		return *(T*)((uintptr_t)this + 0x9A2);
	}
	template <typename T = bool> T& mResetFireInput() {
		return *(T*)((uintptr_t)this + 0x9A3);
	}
	template <typename T = bool> T& IsButtonDown() {
		return *(T*)((uintptr_t)this + 0x9A4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& OnUseItemFinish() {
		return *(T*)((uintptr_t)this + 0x9A8);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& f__mg$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& f__mg$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& f__mg$cache4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& f__mg$cache5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& f__mg$cache6() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache7() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& f__mg$cache8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& f__mg$cache9() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReloadFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FixedUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTPSCameraOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NullAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CameraOffsetLerpTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanStand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTPSCameraOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetTPSCameraOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFirsPesronWeaponSocketName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponSocketName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLeftWeaponSocketName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetReloadingMagActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLeftHandCenter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetReloadingMag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLastVehicleInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSwitchRoleComponentType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTakeDamageComponentType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSpectatorComponentType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCrouchComponentType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSponeComponentType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGrapRushComponentType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUpwardLaunchComponentType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInvisibleSkillComponentType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAdaptiveRootMotionType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIKSolverComponentType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAvatarRotationComponentType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLadderComponentType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetJumpComponentType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPawnDeadComponentType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPawnSoundComponentType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPawnEffectManagerType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitTargetRotationYAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponAimRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedStartProne() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedEndProne() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedEndCrouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedStartGrapRush() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InvokeSimulatedEndGrapRush() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedEndGrapRush() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedGrapRush() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGrapRushParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartGrapRush() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGrappleGunStickMiss() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChangeClip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AttachPropPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DettachPropPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLaunchParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLaunchParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeUpwardLaunchState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedStartLauncherUpRush() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedEndLauncherUpRush() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedLauncherUpRush() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceChangeSkydivingInUpwardLaunchState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x164);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRootTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSnipe2Transform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x16C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFallingStartInHigh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDeactivateSubWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x174);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LockStateInUsingSubWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LockStateInUsingAirborne() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x17C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndSubWeaponAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndUpwardLaunchAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x184);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SubWeaponSpawnFireImpact() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBackward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearIsClimbWall() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RawSetPhysicsState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x194);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InfoType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAttackableInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x19C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSentryGunPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsHelicopterPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSAMTurretPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEmptyHand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLocalPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRealPawnHeadPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsControllerOf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSyncBodyRotationX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMeshRotationX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentMeshRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentMeshLocalPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentMeshLocalRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentMeshLocalEulerAngles() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentMeshRenderer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLogicalComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetLogicalComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1DC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddLogicalComponentImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddLogicalComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickLogicalComponents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_AddLogicalComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1EC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateLogicalComponents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateLocalLogicalComponents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecoverFirstPersonSocketTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1FC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x200);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateInventoryManager() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x204);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitComponents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x208);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSimulateDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisableForceServerPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x210);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetForceMoveDist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x214);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMaxAcceleration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x218);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitVector3Objects() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x21C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCrouchEyeHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x220);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x224);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitRole() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x228);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitRoleCharacterColliderData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x22C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetRoleCharacterColliderData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x230);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayGoliathInitSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x234);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetRolePhysicState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x238);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRespawnProtection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x23C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchRole() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x240);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndSwitchRole() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x244);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSpectatingViewChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x248);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyComponentWeaponChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyComponentSwitchRole() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x250);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyComponentRespawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x254);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyComponentSwitchView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x258);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyComponentClientRelevant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x25C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyComponentSpectatingViewChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x260);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyComponentSpectatingStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x264);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyComponentSpectatingEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x268);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyComponentBeginDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x26C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyComponentDie() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x270);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSwitchingRole() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x274);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSwitchingStep() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x278);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreatePlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x27C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x280);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CacheTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x284);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CacheMeshSocket() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x288);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAsyncLoadCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x290);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x294);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x298);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x29C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyInventory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyCurrentWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddAvailableVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveAvailableVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveAllAvailableVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CacheSlotItemVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_VehicleChangeWeaponHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsForbidVehicleControllWithCurrentWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_VehicleControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_VehicleDrive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_VehicleRide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_VehicleSeatChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_VehicleGetOff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2D4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBestAvailableVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2D8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2DC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckMantleTopPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2E0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckMantleTopWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2E4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckClimbMantle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2E8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateFirstPersonCameraOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2EC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SmoothMoveFirstPersonCameraViewportOffsetX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2F0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFirstPersonCameraOffsetX_OriginalValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2F4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLOD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2F8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyAnimComponentInitialized() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2FC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyWearableThingsChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x300);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigAnimComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x304);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostRenderFor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x308);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanCameraSee() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessSprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x310);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessServerMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x314);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessStandaloneMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x318);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickSimulate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x31C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PossessedBy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x320);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnPossessed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x324);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitMeshRenderers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x328);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x32C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCreateArmObj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x330);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateUpArmObj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x334);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUpArmObjScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x338);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUpArmFXAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x33C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUpArmFXShowOrHide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x340);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshUpArmFXShowOrHide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x344);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNeedDistinguish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x348);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInitialVisibility() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x350);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRelevent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x354);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOCCVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x358);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLocation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x35C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x360);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x364);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x368);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRayStartPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x36C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnByVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x370);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLeaveVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x374);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChangeSeat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x378);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Teleport() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x37C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAimRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x380);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClampRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x384);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x388);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_AddRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38C);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_AddRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x390);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRealRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x394);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalUpdateSetRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x398);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x39C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePassengerRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVehicleSocketRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePassenerAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickPassenerAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshVehicleAimRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateInVehicleRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUpperBodyRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUpperBodyLocalRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateInNonBattleAreaRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCeiling() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckProneRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsProneRotationCollision() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAcceleration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPhysicsVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3D4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InSlideVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3D8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InFountianVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3DC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PerformPhysics() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3E0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SoundEmitterPerformPhysics() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3E4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsHoldWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3E8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcMaxMoveSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3EC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcFinalMoveScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3F0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcFinalMoveVelocity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3F4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOverrideAcceleration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3F8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetJumpScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3FC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentDistToWaterSurface() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x400);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsValidFallingHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x404);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsForbiddenMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x408);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsTowardDeepWater() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPositionChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x410);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPositionSubtleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x414);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPosistionDeltaChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x418);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDebugString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x41C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMaxSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x420);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CouldSprintingInCrounch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x424);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckStopSprintintWithWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x428);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PhysGravitySpikes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x42C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FallingGravitySpikesGround() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x430);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckGravitySpikesDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x434);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceCheckSprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x438);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSprinting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x43C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanSprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x440);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartSprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x444);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopSprintBeforeChangePawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x448);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopSprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x450);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClimbLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x454);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndClimbLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x458);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TogglePhysicsFollowPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x45C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnterWater() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x460);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LeaveWater() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x464);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanGrabLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x468);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanShowLadderHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x46C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStartIndividuationAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x470);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForcePlayIndividuationAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x474);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryStopIndividuationAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x478);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryStopUseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x47C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryStopPickUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x480);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryStopPlayTrick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x484);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanGravitySpikes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x488);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoGravitySpikes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoGravitySpikes1POrSpectator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x490);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanShadowBlade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x494);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoShadowBladeAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x498);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoPhysicSprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x49C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShadowBladeFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetShadowBladeState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsJumpMeleeFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DropDownEyeHeightForCrouching() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecoverEyeHeightForCrouching() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCollisionHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCollisionRadius() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChooseInitThirdPersonCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcThirdPersonCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcBrThirdPersonCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcDeathCam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetUpperBodyRelativePos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartSubWeaponFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSubWeaponFireState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4D4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLeftMuzzleFlashSocketPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4D8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanSwitchFireMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4DC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanSwitchView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4E0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToMelee() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4E4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToLastUsedWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4E8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncAnimation3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4EC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldIgnoreAimTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4F0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncHPChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4F4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPassengerViewPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4F8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCameraPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4FC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWorldCameraSocketTransformPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x500);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCameraPosition_TPS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x504);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCameraPosition_HeadTPS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x508);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCameraPosition_FirstPerson() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFirstPersonSocketPositioin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x510);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCameraLocalPosition_FirstPerson() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x514);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCameraLocalPosition_ThirdPerson() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x518);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCameraLocalPosition_FirstPerson() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x51C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecoveCameraLocalPosition_FirstPerson() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x520);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAimRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x524);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCameraRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x528);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetCameraRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x52C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUpperBodyRotationOnVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x530);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUpperBodyRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x534);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAnimationState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x538);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_PlayAnimationState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x53C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TrySpawnSnowTrack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x540);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryStopChangeClip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x544);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceStopChangeClip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x548);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEventSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFinishItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x550);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMeshAssetID_1P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x554);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMeshAssetID_3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x558);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDefaultAssetID_3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x55C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetStandAnimationTransition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x560);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAnimatinSpeedTransition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x564);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalTickStandAnimationTransition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x568);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMeshVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x56C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSpectatingStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x570);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSpectatingStartSetEyeHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x574);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSpectatingEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x578);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpectatingEndClearPostEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x57C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPawnFirpersonWeaponSocket() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x580);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPawnFirstPersonArmSocket() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x584);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetComponent_FPS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x588);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetComponent_TPS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetComponents_TPS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x590);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpdateFirstPersonSocketInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x594);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnPooledMeshGO() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x598);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DespawnPooledMeshGO() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x59C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitColliders() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetCollidersOnMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAvatarLoadCompleted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedPrePlayGetWeaponAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GiveWeaponSilenced() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GiveWeaponByPickUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GiveWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddAllInventory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Die() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckResetMeshRenderers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDying() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDieAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5D4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDyingPhysics() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5D8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveAllInventories() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5DC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TakeDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5E0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOngoingDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5E4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayTakeDamageEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5E8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBloodEffectAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5EC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayHitBloodEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5F0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportHitByLocalPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5F4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayHitEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5F8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayHurtEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5FC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayPawnEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x600);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindSocket() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x604);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x608);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateTakeDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateSpecialDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x610);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalHitMotionDirection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x614);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetViewType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x618);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopDriving() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x61C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCameraColliderLayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x620);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOnSelfVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x624);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOnVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x628);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x62C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOffVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x630);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPassengerStateChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x634);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUltPickUpState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x638);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUltPickUpCDState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x63C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnterTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x640);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLeaveTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x644);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnProcessCarePackageTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x648);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnterCarePackageTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLeaveCarePackageTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x650);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecycleMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x654);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x658);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSoundEmitterType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x65C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateSoundEmitter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x660);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitAudioComponents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x664);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeInitAudioComponents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x668);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFootstepAuditionRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x66C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnterCustomStepSoundVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x670);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LeaveCustomStepSoundVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x674);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPriority() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x678);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHeightFromGround() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x67C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTargetPosHeightFromGround() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x680);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveWeaponProjectile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x684);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHPChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x688);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCameraRotateRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelUseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x690);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDiscardWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x694);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFlashBangExplode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x698);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRepulseGrenadeExplode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x69C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CouldPlaySound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDie() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MirrorWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FullAmmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncWeaponBulletInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayConcussionSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayExplodeSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginConcussionEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndConcussionEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginFlashEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndFlashEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginEMPEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndEMPEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckBlind() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6D4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndEffectsOnDead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6D8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateEffectTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6DC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInEnemySmoke() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6E0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInAllySmoke() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6E4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEndMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6E8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindMeleeAttackTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6EC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateGrenadeAttackTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6F0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAnimationCull() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6F4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayReviveAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6F8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayRotationAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6FC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopRotationAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x700);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecoverCrossHair() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x704);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProneLockTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x708);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayPickUpAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHorizontalRotationLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x710);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetVerticalRotationLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x714);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BornShowOnRadarForEnemy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x718);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanShowOnRadarForEnemy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x71C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TacticalRadarMySelfSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x720);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPawnSpeaking() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x724);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsGoliath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x728);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseGoliathHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x72C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TacticalRadarViewTeammateSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x730);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TacticalRadarViewEnemySprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x734);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedToShowEnemySpriteOnRadar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x738);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TacticalRadarViewSpriteDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x73C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanBeDamagedBy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x740);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsOnNoneDriveCar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x744);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSameCamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x748);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEyeHeightChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEyeHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x750);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EyeHeightLerpTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x754);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayVibrate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x758);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldUpdateFireBlockPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x75C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAIPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x760);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMotionDirection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x764);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginRootMotion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x768);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_BeginRootMotion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x76C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsRootMotionRuning() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x770);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsRootMotionRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x774);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRootMotionEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x778);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRootMotionCrossFade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x77C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRootMotionStop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x780);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSimulateStartSprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x784);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSimulateStopSprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x788);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsUnderWater() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsUnderWaterSurface() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x790);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOperatorFireModeChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x794);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnThrowTypeChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x798);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponPartChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x79C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanUseUltSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanUseStreak() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldResetFirstPersonMoveSpeedMul() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessPassagerReachOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanPassagerReachOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldStopRotationAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitComponentConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSlideTackle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRoll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldStopIK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetIKWeaponHoldPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PauseIK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopIKTransitionToPause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceResetIK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7D4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreResetGetWeaponAnimParameter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7D8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreResetPutWeaponAnimParameter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7DC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrePlayUnequipWeaponAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7E0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncGetWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7E4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncUnequipWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7E8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncUnequipSubWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7EC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStartLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7F0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7F4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceResetRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7F8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldCalBoundary() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7FC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAnimationTransitionBlend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x800);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPreSwitchAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x804);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPostSwitchAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x808);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanUseKillStreakSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoUseKillStreakSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x810);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginBuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x814);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndBuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x818);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_QuckBuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x81C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelBuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x820);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBuilding() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x824);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPlayingBuildAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x828);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckResetWeaponAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x82C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTPAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x830);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceResetTPAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x834);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceResetDefaultAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x838);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GatherTPAvatarRenderer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x83C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAnimatonInCache3PAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x840);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideCache3PAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x844);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDumpString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x848);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUpbodyAnimationLayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x850);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x854);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanUseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x858);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRemoteUseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x85C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoteUseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x860);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LocalUseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x864);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ServerUseIndividuationItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x868);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUseSpecialWeaponStopIndividualtion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x86C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFloorInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x870);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SubWeaponAttachmentActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x874);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WeaponAttachmentChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x878);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPartListDifferent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x87C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetForReconnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x880);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnKillEnemy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x884);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnKillEnemyCountChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x888);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedSimulatedPlayCrouchAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckInsideVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x890);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PhysFightOff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x894);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PhysZipline() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x898);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginFightOff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x89C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncFPAniamtion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnActiviteFPAnimationSync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EquipSubWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckStartSubWeaponFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckUseLeftHand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetMoveSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RawResetMoveSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetStateSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ResetMoveSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsUsingSpecialWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetThrowWeaponStartPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetProjectileStartPositionOffsetRot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanOpenDoor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchWeaponAttach() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8D4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckClimb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8D8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TestDeadRagdoll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8DC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TestRagdollRevive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8E0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetServerRelevant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8E4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLeftWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8E8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldIgnoreWhenEquip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8EC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddIgnoreWeaponWhenEquip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8F0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LocalPlayerCanUseCurSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8F4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LocalPlayerCanCancelCurSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8F8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPreTouchDoor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8FC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSetServerPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x900);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InInPickupItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x904);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStartAirCraft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x908);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetRootMotion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BRSoundSwitchGroupName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x910);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowMedicalStationCuringEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x914);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideMedicalStationCuringEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x918);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayUltEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x91C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopUltEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x920);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSprintLean() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x924);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetReSpawnPhysicalState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x928);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReSpawnPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x92C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGodFlagChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x930);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelSave() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x934);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanCheckAutoChangeClip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x938);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEyeHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x93C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNearlyObstacle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x940);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNeedResolveWeaponJitter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x944);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPreparation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x948);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDistanceToPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PawnStandOnGroundWhenSpawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x950);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHasMultyThrowWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x954);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshHasMultyThrowWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x958);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanBeStick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x95C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelPreparing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x960);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCanInteractiveLevelObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x964);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IgnoreRadarEdge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x968);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IgnoreFHJCheck() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x96C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPawnColliderData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x970);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetColliderEnabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x974);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckColliderEnabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x978);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitCharacterController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x97C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPawnCharacterController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x980);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCharacterColliderHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x984);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCharacterColliderRadius() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x988);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetCharacterColliderData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMaxForceSimulateDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x990);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetMaxForceSimulateDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x994);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x998);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInitAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x99C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAnimationActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleAnimationActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAnimationStateWithOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FadeToAnimState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_FadeToAnimState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_FadeToAnimState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAnimationInTransition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAnimatorTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAllTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_PlayAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySyncAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAnimationResetTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAnimationResetTriggerInner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9D4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_PlayAnimationResetTriggerInner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9D8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAnimationValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9DC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetAnimationValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9E0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSyncAnimationValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9E4);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_SetAnimationValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9E8);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_SetAnimationValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9EC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnimationParamExist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9F0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldSwitchAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9F4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ShouldSwitchAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9F8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchVehicleController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9FC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDefaultStateName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA00);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RawSwitchAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA04);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA08);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRePlayDeadAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResetSwimmingAnimatorState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InDistanceToMainCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayHitAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasCloth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitUseCloth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsUseCloth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitCloth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRevelentSetCloth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClearCloth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsHiddenByDieEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHiddenByDieEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddShadowbladeEffectSelf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddShadowbladeEffectFriend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddShadowbladeEffectEnemy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveShadowbladeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitZeroSocketRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetZeroSocketRootEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearZeroSocketRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpenAimSolveJitter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopSolveJitter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseAimSolveJitter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckJumpFaceWall() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckStandInPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckJumpInClimb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanJump() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LimitJump() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LimitJumpHornzontalSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoJump() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoFalling() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearHorizontalVelocity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NewFallVelocity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PhysFalling_Fountian() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessAirSteering() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PhysFalling() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSkyFly() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckFallingDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FallingGround() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessFallingAnimationParameter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LimitSimulatedClimbVerticalSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LimitSimualteClimbOverEyeHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoPhysClimbOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEndClimbOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xABC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PhysFalling_ClimbOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetClimbTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanClimb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayClimbAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xACC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoClimbUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoClimb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitClimbOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PushMoveCharController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xADC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WalkingCharControllerMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PhysWalking() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckPositionNAN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CaclRampRatio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcMaxMoveSpeedScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcPhysWalkingMaxMoveSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcPhysWalkingMaxSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMaxSlopeVerticalVelocity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcSlopeVerticalVelocity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB00);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcPhysWalkingVelocity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB04);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CaclPhysWalkingDeltaMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB08);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessFaceWallShaking() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessWalkingSlideMoveVertical() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcStandUponPawnSlideVec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessWalkingFaceWallMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessWalkingSlideMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcWalkingOnSlope() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckProneValidRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProneBackMoveDeltaMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessPhysWalkingDeltaMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TrySlipLowWall() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PhysWalkingFaceWallOptimize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessMoveAnimationParameter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessFalling() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFixContinueStandOnPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessStandOnPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessGround() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDeltaMoveHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoWalkingToFalling() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableOptimizeTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InStaticIdle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsGrounded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSided() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCeiled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsHitPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsHitStaticActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckStandOnPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnControllerColliderHit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckPassThroughWall() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckFallingPassThroughWall() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCliff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStateEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPhysicsStateChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPhysWalkingChangedProcessBodyState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPhysWalkingChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPhysFightOffChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPhysFallingChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPhysGravitySpikesChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPhysSlideTackleChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPhysClimbChagned() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPhysLadderChagned() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPhysGrapRushChagned() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPhysUpwardLaunchChagned() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPhysSprintChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPhysRollChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PhysDriving() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PhysPlateformVehicleMoving() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PhysBoarding() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PhysNavMeshMoving() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PhysSkydiving() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PhysSwimming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PhysRoll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PhysSprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndPhysicSprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PhysFollowPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartRemoteControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndRemoteControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InRemoteControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PhysRemoteControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PhysClimb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PhysGrapRush() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PhysUpwardLaunch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PhysLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC00);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PhysSlideTackle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC04);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CharcontrollerMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC08);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestChangeMoveState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StandUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CrouchForceStopTransition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanCrouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartCrouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanUnCrouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndCrouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ServerStartCrouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetProneStateAndRquest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProneForceStopTransition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeLocalAABB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartProne() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanUnProne() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndProne() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInCrouchProneTransition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanProne() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ServerForceStartProne() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ServerForceEndProne() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ServerForceStartCrouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ServerForceEndCrouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncDirection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSyncExtraByte() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRenderers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC64);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetRenderers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PushInterimRenderer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveRenderer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshAllRenderer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshPawnRenderer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshIndividuationRenderers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBagRenderer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshVestRenderer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshWeaponRenderer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBagWeaponRenderer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshSkydivingPendantRenderer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshRenderer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRendererChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPawnDefaultState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearPawnDefaultState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableGPUSkin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPartVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangePartMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeTempPartMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponAttachmentLoadComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponHiddenState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearCurrentWeaponAttachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateWeaponAttachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBagWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBagWeaponRenderers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBackWeaponHidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshWeaponVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponHidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSubWeaponDeactivate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeactivateSubWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeactivateSubWeaponAttachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsActiveSubWeaponAttachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasWeaponToSwitch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_HasWeaponToSwitch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TrySwitchWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSwitchWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceSwitchWeaponDirectly() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_TrySwitchWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanChangeWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD00);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPreTrySwitchWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD04);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_TrySwitchWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD08);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSwitchWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UltWeaponUsingCheck() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoSwitchWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearPendingAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelSwitchWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PullOutWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GiveWeaponAttachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedCreateWeaponAttachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD28);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GiveWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponChangedGetVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDiscardItemInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ActiveDisCardItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddActiveWeaponNextStateByItemID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPreWeaponActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponAssetLoadComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponAttachmentDeactive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponAttachmentActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponActivate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponDeactive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponBeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponEndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndBagWeaponProcessing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SubWeaponStopFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartSecondaryFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopSecondaryFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ThirdPersonStartFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchFireMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAiming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPlayAiming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAllStateWhenStartAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseAimAndResetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanOpenAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNeedShowCancelAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSimulateAimming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInChangeClip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryChangeClip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoChangeClip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShouldEndChangeClip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckWeaponAimingStateFireReset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DealwithElectric() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FireButtonDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FireButtonUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNeedEnterMoveHipFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAdsState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanAimAssit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LockControlAndSetResetFireInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LockCheck() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPawnSwtichState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLockPawnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLockPawnStateExcept() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LockAllPawnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LockProne_Jump_Crouch_Fire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLockState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE00);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoOnCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE04);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE08);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(Pawn*, uintptr_t, bool))(Il2CppBase() + 0x162B1F0))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162B6EC))(this);
	}
	template <typename T = int32_t> T get_ReloadCount() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162B7A8))(this);
	}
	template <typename T = void> T set_ReloadCount(int32_t value) {
		return ((T (*)(Pawn*, int32_t))(Il2CppBase() + 0x162B7B0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Parameters() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162B7B8))(this);
	}
	template <typename T = void> T set_Parameters(Il2CppString* value) {
		return ((T (*)(Pawn*, Il2CppString*))(Il2CppBase() + 0x162B7C0))(this, value);
	}
	template <typename T = void> T OnReloadFinish() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162B7C8))(this);
	}
	template <typename T = bool> T get_IsStartFireInSprint() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162B890))(this);
	}
	template <typename T = uintptr_t> T get_LogicType() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162B898))(this);
	}
	template <typename T = float> T get_WalkingToSkydivingHeight() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162B8A0))(this);
	}
	template <typename T = uintptr_t> T get_PendingSwitchWeapon() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162B8E4))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162B8EC))(this);
	}
	template <typename T = bool> T get_IsPendingSwitchWeapon() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162BAB0))(this);
	}
	template <typename T = Il2CppString*> T get_PawnConfigPath() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162BB60))(this);
	}
	template <typename T = void> T set_PawnConfigPath(Il2CppString* value) {
		return ((T (*)(Pawn*, Il2CppString*))(Il2CppBase() + 0x162BB68))(this, value);
	}
	template <typename T = bool> T get_IsGrapDestPoint() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162BB70))(this);
	}
	template <typename T = void> T set_IsGrapDestPoint(bool value) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x162BB78))(this, value);
	}
	template <typename T = Il2CppVector3> T get_GrappleGunDestPoint() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162BB80))(this);
	}
	template <typename T = uintptr_t> T get_PawnTransitionType() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162BB94))(this);
	}
	template <typename T = void> T set_PawnTransitionType(uintptr_t value) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x162BB9C))(this, value);
	}
	template <typename T = float> T get_ProneBodyAngle() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162BBA4))(this);
	}
	template <typename T = void> T set_ProneBodyAngle(float value) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x162BBAC))(this, value);
	}
	template <typename T = int32_t> T get_InRegionID() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162BBB4))(this);
	}
	template <typename T = void> T set_InRegionID(int32_t value) {
		return ((T (*)(Pawn*, int32_t))(Il2CppBase() + 0x162BBBC))(this, value);
	}
	template <typename T = float> T get_MaxMoveSpeed() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162BBC4))(this);
	}
	template <typename T = void> T set_MaxMoveSpeed(float value) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x162BBCC))(this, value);
	}
	template <typename T = uintptr_t> T get_SoundEmitter() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162BBD4))(this);
	}
	template <typename T = uintptr_t> T get_WeaponSyncModule() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162BBDC))(this);
	}
	template <typename T = bool> T get_ShouldShowPawnInfoWhenAimedAt() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162BBE4))(this);
	}
	template <typename T = bool> T get_ShouldDisplayHP() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162BBEC))(this);
	}
	template <typename T = bool> T get_CalcWeaponAccuracy() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162BBF4))(this);
	}
	template <typename T = bool> T get_UseFixedWeaponAccuracy() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162BBFC))(this);
	}
	template <typename T = float> T get_FixedWeaponAccuracy() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162BC04))(this);
	}
	template <typename T = void> T set_FixedWeaponAccuracy(float value) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x162BC0C))(this, value);
	}
	template <typename T = void> T SetTPSCameraOffset(Il2CppVector3 setValue, float inLerpTime) {
		return ((T (*)(Pawn*, Il2CppVector3, float))(Il2CppBase() + 0x162BC14))(this, setValue, inLerpTime);
	}
	template <typename T = void> static T NullAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x162C200))(0);
	}
	template <typename T = void> T CameraOffsetLerpTick() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162C2C0))(this);
	}
	template <typename T = void> T set_ProneTransitionRate(float value) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x162C5FC))(this, value);
	}
	template <typename T = void> T set_IsTransitionToProneState(bool value) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x162C604))(this, value);
	}
	template <typename T = void> T set_IsTransitionFromProneState(bool value) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x162C60C))(this, value);
	}
	template <typename T = bool> T get_CanSeeSmokeIn() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162C614))(this);
	}
	template <typename T = void> T set_CanSeeSmokeIn(bool value) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x162C61C))(this, value);
	}
	template <typename T = bool> T get_CanSeeStreakFront() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162C624))(this);
	}
	template <typename T = void> T set_CanSeeStreakFront(bool value) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x162C62C))(this, value);
	}
	template <typename T = Il2CppVector3> T get_MapShowPosition() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162C84C))(this);
	}
	template <typename T = int32_t> T get_AttackAnimIndex() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162C868))(this);
	}
	template <typename T = void> T set_AttackAnimIndex(int32_t value) {
		return ((T (*)(Pawn*, int32_t))(Il2CppBase() + 0x162C870))(this, value);
	}
	template <typename T = bool> T CanStand() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162CCB0))(this);
	}
	template <typename T = Il2CppVector3> T GetTPSCameraOffset() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162CF4C))(this);
	}
	template <typename T = void> T ResetTPSCameraOffset() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162D31C))(this);
	}
	template <typename T = void> T set_ForceSyncMove(bool value) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x162D4EC))(this, value);
	}
	template <typename T = bool> T get_ForceSyncMove() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162D4F8))(this);
	}
	template <typename T = bool> T get_IsMove() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162D500))(this);
	}
	template <typename T = Il2CppString*> T GetFirsPesronWeaponSocketName() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162D614))(this);
	}
	template <typename T = Il2CppString*> T GetWeaponSocketName() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162D6FC))(this);
	}
	template <typename T = Il2CppString*> T GetLeftWeaponSocketName() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162D818))(this);
	}
	template <typename T = uintptr_t> T get_InvManager() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162D934))(this);
	}
	template <typename T = void> T set_InvManager(uintptr_t value) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x162D93C))(this, value);
	}
	template <typename T = bool> T get_ShouldCheckCollisionWithLocalPlayer() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162D944))(this);
	}
	template <typename T = bool> T get_IsAttachKnifeForDropWeapon() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162D94C))(this);
	}
	template <typename T = void> T set_IsAttachKnifeForDropWeapon(bool value) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x162D954))(this, value);
	}
	template <typename T = bool> T get_HasInit() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162D958))(this);
	}
	template <typename T = void> T set_HasInit(bool value) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x162D960))(this, value);
	}
	template <typename T = uintptr_t> T get_CurrentWeaponAttachment() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162D968))(this);
	}
	template <typename T = uintptr_t> T get_CurrentSubWeaponAttachment() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162D970))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_WeaponPartInfoList3P() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162D978))(this);
	}
	template <typename T = uint32_t> T get_WeaponSkinID() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162D980))(this);
	}
	template <typename T = uintptr_t> T get_CurrentWeapon() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162D988))(this);
	}
	template <typename T = uintptr_t> T get_FirstWeapon() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162DA58))(this);
	}
	template <typename T = uintptr_t> T get_SecondWeapon() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162DB28))(this);
	}
	template <typename T = uintptr_t> T get_CurrentSubWeapon() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162DBF8))(this);
	}
	template <typename T = void> T SetReloadingMagActive(bool value) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x162DCC8))(this, value);
	}
	template <typename T = uintptr_t> T GetLeftHandCenter() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162DEA8))(this);
	}
	template <typename T = uintptr_t> T GetReloadingMag() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162E080))(this);
	}
	template <typename T = bool> T get_InWater() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162E258))(this);
	}
	template <typename T = void> T set_InWater(bool value) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x162E260))(this, value);
	}
	template <typename T = float> T get_CurrentWaterSurfaceHeight() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162E268))(this);
	}
	template <typename T = uintptr_t> T get_CachedUpperBodyTransform() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162E270))(this);
	}
	template <typename T = uintptr_t> T get_HeadBone() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162E278))(this);
	}
	template <typename T = uintptr_t> T get_AimTargetForBOT() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162E280))(this);
	}
	template <typename T = uintptr_t> T get_m_CollisionFlags() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162E2A0))(this);
	}
	template <typename T = Il2CppVector3> T get_AccelerationReal() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162E38C))(this);
	}
	template <typename T = Il2CppVector3> T get_Acceleration() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162E3A0))(this);
	}
	template <typename T = void> T set_Acceleration(Il2CppVector3 value) {
		return ((T (*)(Pawn*, Il2CppVector3))(Il2CppBase() + 0x162E3B4))(this, value);
	}
	template <typename T = Il2CppVector3> T get_Velocity() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162E3C0))(this);
	}
	template <typename T = void> T set_Velocity(Il2CppVector3 value) {
		return ((T (*)(Pawn*, Il2CppVector3))(Il2CppBase() + 0x162E3D4))(this, value);
	}
	template <typename T = void> T set_RemoteControlledVehicle(uintptr_t value) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x162E3E0))(this, value);
	}
	template <typename T = uintptr_t> T get_RemoteControlledVehicle() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162E3E8))(this);
	}
	template <typename T = uintptr_t> T get_CurrentVehicle() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162E3F0))(this);
	}
	template <typename T = void> T set_CurrentVehicle(uintptr_t value) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x162E3F8))(this, value);
	}
	template <typename T = void> T SetLastVehicleInfo(float lastGetoffTime, uint32_t vehicleID) {
		return ((T (*)(Pawn*, float, uint32_t))(Il2CppBase() + 0x162E5A0))(this, lastGetoffTime, vehicleID);
	}
	template <typename T = bool> T get_IsRidingVehicle() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162E698))(this);
	}
	template <typename T = bool> T get_IsOnPlateformVehicle() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162E748))(this);
	}
	template <typename T = uintptr_t> T get_CurrentSeatMode() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162E828))(this);
	}
	template <typename T = bool> T get_IsOnForbidShootSeat() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162E90C))(this);
	}
	template <typename T = bool> T get_IsControllingVehicleWeapon() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162E9EC))(this);
	}
	template <typename T = uintptr_t> T get_CurrentVehicleWeaponMode() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162EA10))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_availableVehicles() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162553C))(this);
	}
	template <typename T = float> T get_PenetrationValue() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162EAF4))(this);
	}
	template <typename T = void> T set_PenetrationValue(float value) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x162EAFC))(this, value);
	}
	template <typename T = float> T get_Health() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162EB04))(this);
	}
	template <typename T = void> T set_Health(float value) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x162EB0C))(this, value);
	}
	template <typename T = bool> T get_IsFullHPProgressBar() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162EC08))(this);
	}
	template <typename T = int32_t> T get_AC() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162EC10))(this);
	}
	template <typename T = void> T set_AC(int32_t value) {
		return ((T (*)(Pawn*, int32_t))(Il2CppBase() + 0x162EC4C))(this, value);
	}
	template <typename T = bool> T get_EquipedHeavyArmo() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162ED50))(this);
	}
	template <typename T = int32_t> T get_MaxAC() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162ED7C))(this);
	}
	template <typename T = void> T set_MaxAC(int32_t value) {
		return ((T (*)(Pawn*, int32_t))(Il2CppBase() + 0x162EDB0))(this, value);
	}
	template <typename T = Il2CppVector3> T get_FireBlockWorldPos() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162EDE4))(this);
	}
	template <typename T = void> T set_FireBlockWorldPos(Il2CppVector3 value) {
		return ((T (*)(Pawn*, Il2CppVector3))(Il2CppBase() + 0x162EDF8))(this, value);
	}
	template <typename T = Il2CppQuaternion> T get_AimRotation() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162EE04))(this);
	}
	template <typename T = void> T set_AimRotation(Il2CppQuaternion value) {
		return ((T (*)(Pawn*, Il2CppQuaternion))(Il2CppBase() + 0x162EE48))(this, value);
	}
	template <typename T = Il2CppQuaternion> T get_DelayShootAimRotationLocal() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162EE60))(this);
	}
	template <typename T = void> T set_DelayShootAimRotationLocal(Il2CppQuaternion value) {
		return ((T (*)(Pawn*, Il2CppQuaternion))(Il2CppBase() + 0x162EE70))(this, value);
	}
	template <typename T = Il2CppQuaternion> T get_DelayShootAimRotation() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162EE88))(this);
	}
	template <typename T = void> T set_DelayShootAimRotation(Il2CppQuaternion value) {
		return ((T (*)(Pawn*, Il2CppQuaternion))(Il2CppBase() + 0x162EE98))(this, value);
	}
	template <typename T = Il2CppQuaternion> T get_AimRotationLocal() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162EEB0))(this);
	}
	template <typename T = void> T set_AimRotationLocal(Il2CppQuaternion value) {
		return ((T (*)(Pawn*, Il2CppQuaternion))(Il2CppBase() + 0x162EEC0))(this, value);
	}
	template <typename T = Il2CppVector3> T get_PawnServerMoveAngle() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162EED8))(this);
	}
	template <typename T = bool> T get_InIndividuationPlay() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162F0A4))(this);
	}
	template <typename T = bool> T get_IsInTransition() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162F0CC))(this);
	}
	template <typename T = uintptr_t> T GetSwitchRoleComponentType() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162F120))(this);
	}
	template <typename T = uintptr_t> T GetTakeDamageComponentType() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162F24C))(this);
	}
	template <typename T = uintptr_t> T GetSpectatorComponentType() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162F378))(this);
	}
	template <typename T = uintptr_t> T GetCrouchComponentType() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162F4A4))(this);
	}
	template <typename T = uintptr_t> T GetSponeComponentType() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162F5D0))(this);
	}
	template <typename T = uintptr_t> T GetGrapRushComponentType() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162F6FC))(this);
	}
	template <typename T = uintptr_t> T GetUpwardLaunchComponentType() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162F828))(this);
	}
	template <typename T = uintptr_t> T GetInvisibleSkillComponentType() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162F954))(this);
	}
	template <typename T = uintptr_t> T GetAdaptiveRootMotionType() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162FA80))(this);
	}
	template <typename T = uintptr_t> T GetIKSolverComponentType() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162FBAC))(this);
	}
	template <typename T = uintptr_t> T GetAvatarRotationComponentType() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162FCD8))(this);
	}
	template <typename T = uintptr_t> T GetLadderComponentType() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162FE04))(this);
	}
	template <typename T = uintptr_t> T GetJumpComponentType() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162FF30))(this);
	}
	template <typename T = uintptr_t> T GetPawnDeadComponentType() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163005C))(this);
	}
	template <typename T = uintptr_t> T GetPawnSoundComponentType() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1630188))(this);
	}
	template <typename T = uintptr_t> T GetPawnEffectManagerType() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16302B4))(this);
	}
	template <typename T = uintptr_t> T get_TrickyComponent() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16303E0))(this);
	}
	template <typename T = uintptr_t> T get_JumpComponent() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16303E8))(this);
	}
	template <typename T = uintptr_t> T get_GravitySpikesComponent() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16303F0))(this);
	}
	template <typename T = uintptr_t> T get_ShadowBladeComponent() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16303F8))(this);
	}
	template <typename T = uintptr_t> T get_PawnSlideTackleComponent() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1630400))(this);
	}
	template <typename T = uintptr_t> T get_PawnRollComponent() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1630408))(this);
	}
	template <typename T = uintptr_t> T get_Avatar() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1630410))(this);
	}
	template <typename T = uintptr_t> T get_RagdollComponent() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162B9C8))(this);
	}
	template <typename T = uintptr_t> T get_SpectatorComp() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163043C))(this);
	}
	template <typename T = uintptr_t> T get_DynamicSkinComponent() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1630444))(this);
	}
	template <typename T = uintptr_t> T get_IndividuationComponent() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163044C))(this);
	}
	template <typename T = uintptr_t> T get_LadderComponent() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1630454))(this);
	}
	template <typename T = uintptr_t> T get_GrapRushComp() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163045C))(this);
	}
	template <typename T = uintptr_t> T get_UpwardLaunchComp() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1630464))(this);
	}
	template <typename T = uintptr_t> T get_InvisibleSkillComp() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163046C))(this);
	}
	template <typename T = uintptr_t> T get_PaintComp() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1630474))(this);
	}
	template <typename T = uintptr_t> T get_CurrentIKSolverComponent() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163047C))(this);
	}
	template <typename T = uintptr_t> T get_PawnSoundCom() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1630484))(this);
	}
	template <typename T = uintptr_t> T get_PawnEffectMgr() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163048C))(this);
	}
	template <typename T = Il2CppVector3> T get_LastSimulatedVelocity() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1630494))(this);
	}
	template <typename T = Il2CppQuaternion> T get_SimulatedAimRotation() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16304A8))(this);
	}
	template <typename T = void> T set_SimulatedAimRotation(Il2CppQuaternion value) {
		return ((T (*)(Pawn*, Il2CppQuaternion))(Il2CppBase() + 0x16304B8))(this, value);
	}
	template <typename T = void> T set_LadderForceYAngle(float value) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x16304D0))(this, value);
	}
	template <typename T = float> T get_LadderForceYAngle() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16304D8))(this);
	}
	template <typename T = bool> T get_ShouldForceAngle() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16304E0))(this);
	}
	template <typename T = bool> T get_InLadder() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16304F4))(this);
	}
	template <typename T = uintptr_t> T get_PawnReliableSoundData() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1630508))(this);
	}
	template <typename T = bool> T get_InElectric() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16306A0))(this);
	}
	template <typename T = void> T set_InElectric(bool value) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x16306A8))(this, value);
	}
	template <typename T = bool> T get_IsInSmoke() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16306B0))(this);
	}
	template <typename T = void> T set_IsInSmoke(bool value) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x16306B8))(this, value);
	}
	template <typename T = bool> T get_NeedForceSwitchWeapon() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16306C0))(this);
	}
	template <typename T = void> T InitTargetRotationYAngle(float y) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x16306C8))(this, y);
	}
	template <typename T = Il2CppQuaternion> T GetWeaponAimRotation() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1630798))(this);
	}
	template <typename T = void> T SimulatedStartProne() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16308B0))(this);
	}
	template <typename T = void> T SimulatedEndProne() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16309BC))(this);
	}
	template <typename T = void> T SimulatedEndCrouch() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1630AA0))(this);
	}
	template <typename T = void> T SimulatedStartGrapRush(float deltaTime) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x1630B68))(this, deltaTime);
	}
	template <typename T = void> T InvokeSimulatedEndGrapRush() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1630C54))(this);
	}
	template <typename T = void> T SimulatedEndGrapRush() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1630D68))(this);
	}
	template <typename T = void> T SimulatedGrapRush(float deltaTime) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x1630E48))(this, deltaTime);
	}
	template <typename T = void> T SetGrapRushParam(Il2CppVector3 InPos) {
		return ((T (*)(Pawn*, Il2CppVector3))(Il2CppBase() + 0x1630F34))(this, InPos);
	}
	template <typename T = void> T StartGrapRush(Il2CppVector3 InPos) {
		return ((T (*)(Pawn*, Il2CppVector3))(Il2CppBase() + 0x1631048))(this, InPos);
	}
	template <typename T = void> T OnGrappleGunStickMiss() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1631164))(this);
	}
	template <typename T = void> T OnChangeClip() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16316A4))(this);
	}
	template <typename T = void> T AttachPropPawn(uintptr_t propPawn, uint32_t uLauncherActorId) {
		return ((T (*)(Pawn*, uintptr_t, uint32_t))(Il2CppBase() + 0x163176C))(this, propPawn, uLauncherActorId);
	}
	template <typename T = void> T DettachPropPawn() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16318E4))(this);
	}
	template <typename T = void> T SetLaunchParam(uintptr_t launchParam) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x16319CC))(this, launchParam);
	}
	template <typename T = uintptr_t> T GetLaunchParam() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1631AC0))(this);
	}
	template <typename T = void> T ChangeUpwardLaunchState(uintptr_t state) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x1631BA8))(this, state);
	}
	template <typename T = void> T SimulatedStartLauncherUpRush(float deltaTime) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x1631C94))(this, deltaTime);
	}
	template <typename T = void> T SimulatedEndLauncherUpRush() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1631D80))(this);
	}
	template <typename T = void> T SimulatedLauncherUpRush(float deltaTime) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x1631E64))(this, deltaTime);
	}
	template <typename T = void> T ForceChangeSkydivingInUpwardLaunchState() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1631F50))(this);
	}
	template <typename T = uintptr_t> T GetRootTransform() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1632030))(this);
	}
	template <typename T = uintptr_t> T GetSnipe2Transform() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16321A4))(this);
	}
	template <typename T = void> T SetFallingStartInHigh() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1632310))(this);
	}
	template <typename T = void> T OnDeactivateSubWeapon() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16314A0))(this);
	}
	template <typename T = void> T LockStateInUsingSubWeapon(bool bLock) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x1632668))(this, bLock);
	}
	template <typename T = void> T LockStateInUsingAirborne(bool bLock) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x163279C))(this, bLock);
	}
	template <typename T = void> T EndSubWeaponAction() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16328D0))(this);
	}
	template <typename T = void> T EndUpwardLaunchAction(bool bChangeState) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x1632998))(this, bChangeState);
	}
	template <typename T = void> T SubWeaponSpawnFireImpact(uintptr_t info) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x1632A68))(this, info);
	}
	template <typename T = bool> T get_LastInputSprint() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1632C8C))(this);
	}
	template <typename T = float> T get_HorizontalSpeed() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1632C94))(this);
	}
	template <typename T = void> T set_HorizontalSpeed(float value) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x1632C9C))(this, value);
	}
	template <typename T = float> T get_MaxClientForceMoveDistance() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1632CA4))(this);
	}
	template <typename T = void> T set_CanSwitchWeapon(bool value) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x1632DDC))(this, value);
	}
	template <typename T = float> T get_MaxAcceleration() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1632DE4))(this);
	}
	template <typename T = bool> T get_IsReachOut() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1632E00))(this);
	}
	template <typename T = bool> T get_IsBackToSeatTransition() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1632E08))(this);
	}
	template <typename T = bool> T get_IsDriving() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1632E10))(this);
	}
	template <typename T = bool> T get_IsRide() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1632EC0))(this);
	}
	template <typename T = float> T get_SprintingWaterHeight() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1632EC8))(this);
	}
	template <typename T = void> T set_MaxSpeed(float value) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x1632ED0))(this, value);
	}
	template <typename T = float> T get_MaxSpeed() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1632ED8))(this);
	}
	template <typename T = bool> T IsBackward() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1633044))(this);
	}
	template <typename T = void> T set_ClimbUpHeight(float value) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x16331D0))(this, value);
	}
	template <typename T = float> T get_ClimbUpHeight() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16331D8))(this);
	}
	template <typename T = uintptr_t> T get_CurClimbType() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16331E0))(this);
	}
	template <typename T = void> T set_CurClimbType(uintptr_t value) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x16331E8))(this, value);
	}
	template <typename T = void> T ClearIsClimbWall() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16331F0))(this);
	}
	template <typename T = bool> T get_IsClimbWall() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16332C4))(this);
	}
	template <typename T = void> T set_ClimbMantleWidth(float value) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x16332CC))(this, value);
	}
	template <typename T = float> T get_InitialMaxJumpHeight() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16332EC))(this);
	}
	template <typename T = float> T get_MaxAngleTurnLeftDeltaProne() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1633324))(this);
	}
	template <typename T = float> T get_MaxAngleTurnRightDeltaProne() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163332C))(this);
	}
	template <typename T = Il2CppVector2> T get_HorizontalRoationLimit() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1633334))(this);
	}
	template <typename T = Il2CppVector2> T get_VerticalRoationLimit() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1633350))(this);
	}
	template <typename T = Il2CppVector2> T get_MaxHorizontalTurnDeltaProne() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163336C))(this);
	}
	template <typename T = Il2CppVector2> T get_VerticalRoationLimitProne() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1633388))(this);
	}
	template <typename T = bool> T get_IsClimbing() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16333A4))(this);
	}
	template <typename T = bool> T get_IsLadder() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16333C0))(this);
	}
	template <typename T = bool> T get_IsUsingZipline() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1632DC8))(this);
	}
	template <typename T = bool> T get_IsSkydiving() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16333D4))(this);
	}
	template <typename T = bool> T get_IsAircrftSkydiving() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16333F8))(this);
	}
	template <typename T = void> T set_EasySkyFly(bool value) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x163340C))(this, value);
	}
	template <typename T = bool> T get_EasySkyFly() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1633414))(this);
	}
	template <typename T = bool> T get_IsSkyFly() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163341C))(this);
	}
	template <typename T = bool> T get_IsFalling() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1633430))(this);
	}
	template <typename T = float> T get_ReachJumpingTopTime() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1633444))(this);
	}
	template <typename T = bool> T get_IsJumpingUp() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163344C))(this);
	}
	template <typename T = bool> T get_ReachJumpingTop() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1633454))(this);
	}
	template <typename T = void> T set_IsCrouching(bool value) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x163345C))(this, value);
	}
	template <typename T = bool> T get_IsCrouching() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1633464))(this);
	}
	template <typename T = bool> T get_IsStanding() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163346C))(this);
	}
	template <typename T = void> T set_IsProneing(bool value) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x1633494))(this, value);
	}
	template <typename T = bool> T get_IsProneing() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162D314))(this);
	}
	template <typename T = void> T set_IsRotation(bool value) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x163349C))(this, value);
	}
	template <typename T = bool> T get_IsRotation() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16334A4))(this);
	}
	template <typename T = float> T get_CurrentInWaterDepth() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16334AC))(this);
	}
	template <typename T = bool> T get_IsSwimming() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16334B4))(this);
	}
	template <typename T = bool> T get_IsBlind() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16334BC))(this);
	}
	template <typename T = bool> T get_ShouldSwimSprint() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163357C))(this);
	}
	template <typename T = bool> T get_IsDying() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163358C))(this);
	}
	template <typename T = void> T set_IsInAirCraft(bool value) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x1633594))(this, value);
	}
	template <typename T = bool> T get_IsInAirCraft() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163359C))(this);
	}
	template <typename T = void> T set_IsInNonBattleArea(bool value) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x16335A4))(this, value);
	}
	template <typename T = bool> T get_IsInNonBattleArea() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16335AC))(this);
	}
	template <typename T = bool> T get_LandAfterJumping() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16335B4))(this);
	}
	template <typename T = bool> T get_LockYRotation() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16335CC))(this);
	}
	template <typename T = void> T set_LockYRotation(bool value) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x16335D4))(this, value);
	}
	template <typename T = bool> T get_IsGod() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16335DC))(this);
	}
	template <typename T = uintptr_t> T get_InitLoginPhysicsState() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1633648))(this);
	}
	template <typename T = void> T set_InitLoginPhysicsState(uintptr_t value) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x1633650))(this, value);
	}
	template <typename T = uintptr_t> T get_PhysicsState() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16333B8))(this);
	}
	template <typename T = void> T set_PhysicsState(uintptr_t value) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x1633658))(this, value);
	}
	template <typename T = void> T RawSetPhysicsState(uintptr_t newState) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x16336A0))(this, newState);
	}
	template <typename T = uintptr_t> T get_DefaultPhysState() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1633778))(this);
	}
	template <typename T = uintptr_t> T get_PhysicsVolume() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1633780))(this);
	}
	template <typename T = uintptr_t> T get_AnimationComponent() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162CBAC))(this);
	}
	template <typename T = void> T set_AnimationComponent(uintptr_t value) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x1633788))(this, value);
	}
	template <typename T = uintptr_t> T get_CurrentActiveAnimationComponent() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1633790))(this);
	}
	template <typename T = uintptr_t> T get_PawnAnimGraphComponent() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16338C0))(this);
	}
	template <typename T = void> T set_PawnAnimGraphComponent(uintptr_t value) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x16338C8))(this, value);
	}
	template <typename T = uintptr_t> T get_AdaptiveRootMotionComponent() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16338D0))(this);
	}
	template <typename T = bool> T get_IsAlive() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16338D8))(this);
	}
	template <typename T = bool> T get_IsPlayDying() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16338E0))(this);
	}
	template <typename T = bool> T get_IsFiring() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16269AC))(this);
	}
	template <typename T = bool> T get_InDeadEye() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16338E8))(this);
	}
	template <typename T = void> T set_InDeadEye(bool value) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x16338F0))(this, value);
	}
	template <typename T = void> T set_LastBeBulletDamged(float value) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x16338F8))(this, value);
	}
	template <typename T = void> T set_LastBeExplodeDamged(float value) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x1633900))(this, value);
	}
	template <typename T = bool> T get_ShowFireLocOnRadar() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1633908))(this);
	}
	template <typename T = bool> T get_ShowFaceRotOnRadar() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1633B28))(this);
	}
	template <typename T = bool> T get_ShowBombOnRadar() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1633BD8))(this);
	}
	template <typename T = bool> T get_TriggerQuickKnife() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1633D9C))(this);
	}
	template <typename T = void> T set_TriggerQuickKnife(bool value) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x1633EC4))(this, value);
	}
	template <typename T = float> T get_LastFireTime() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1633ECC))(this);
	}
	template <typename T = void> T set_LastFireTime(float value) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x1633ED4))(this, value);
	}
	template <typename T = void> T set_LastFireWeaponName(uintptr_t value) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x1633EDC))(this, value);
	}
	template <typename T = float> T get_LastRespawnTime() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1633EE4))(this);
	}
	template <typename T = Il2CppVector3> T get_LastFireLoc() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1633EEC))(this);
	}
	template <typename T = void> T set_LastFireLoc(Il2CppVector3 value) {
		return ((T (*)(Pawn*, Il2CppVector3))(Il2CppBase() + 0x1633F00))(this, value);
	}
	template <typename T = Il2CppVector3> T get_RadarPosition() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1633F0C))(this);
	}
	template <typename T = Il2CppVector3> T get_HeadPosition() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1633F88))(this);
	}
	template <typename T = Il2CppVector3> T get_EyePosition() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163402C))(this);
	}
	template <typename T = Il2CppVector3> T get_FirePosition() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16341D0))(this);
	}
	template <typename T = uint32_t> T get_TeamId() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16342CC))(this);
	}
	template <typename T = uint32_t> T get_TeamSeatId() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16342E4))(this);
	}
	template <typename T = uintptr_t> T get_TargetPriority() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16342FC))(this);
	}
	template <typename T = uintptr_t> T InfoType() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1634304))(this);
	}
	template <typename T = uint32_t> T get_PlayerID() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1634430))(this);
	}
	template <typename T = uint32_t> T get_OwnerPlayerID() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1634448))(this);
	}
	template <typename T = uintptr_t> T get_PropertySet() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1634460))(this);
	}
	template <typename T = Il2CppString*> T get_PlayerName() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1634474))(this);
	}
	template <typename T = bool> T get_ShowNameOnTacticalMap() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1634540))(this);
	}
	template <typename T = bool> T get_IsZombie() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1634548))(this);
	}
	template <typename T = uintptr_t> T get_PlayerInfo() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162EC44))(this);
	}
	template <typename T = void> T SetAttackableInfo(uintptr_t info) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x1634550))(this, info);
	}
	template <typename T = bool> T IsSentryGunPawn() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163468C))(this);
	}
	template <typename T = bool> T IsHelicopterPawn() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163475C))(this);
	}
	template <typename T = bool> T IsSAMTurretPawn() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163482C))(this);
	}
	template <typename T = bool> T IsEmptyHand() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16348FC))(this);
	}
	template <typename T = bool> T IsLocalPlayer() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1632434))(this);
	}
	template <typename T = Il2CppVector3> T GetRealPawnHeadPosition() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1634A70))(this);
	}
	template <typename T = uintptr_t> T get_Controller() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1634CC8))(this);
	}
	template <typename T = void> T set_Controller(uintptr_t value) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x1634CD0))(this, value);
	}
	template <typename T = bool> T IsControllerOf() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1B9A61C))(this);
	}
	template <typename T = uintptr_t> T get_CurrentMesh() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163219C))(this);
	}
	template <typename T = void> T set_CurrentMesh(uintptr_t value) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x1634DC8))(this, value);
	}
	template <typename T = uintptr_t> T get_ModelRoot() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1634DD0))(this);
	}
	template <typename T = void> T set_ModelRoot(uintptr_t value) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x1634DD8))(this, value);
	}
	template <typename T = Il2CppQuaternion> T get_CurrentMeshRotation() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1634DE0))(this);
	}
	template <typename T = float> T GetSyncBodyRotationX() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1634EEC))(this);
	}
	template <typename T = float> T GetMeshRotationX() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163503C))(this);
	}
	template <typename T = void> T SetCurrentMeshRotation(Il2CppQuaternion setRot) {
		return ((T (*)(Pawn*, Il2CppQuaternion))(Il2CppBase() + 0x163514C))(this, setRot);
	}
	template <typename T = void> T SetCurrentMeshLocalPosition(Il2CppVector3 localPosition) {
		return ((T (*)(Pawn*, Il2CppVector3))(Il2CppBase() + 0x16352E8))(this, localPosition);
	}
	template <typename T = void> T SetCurrentMeshLocalRotation(Il2CppQuaternion rotation) {
		return ((T (*)(Pawn*, Il2CppQuaternion))(Il2CppBase() + 0x16354A4))(this, rotation);
	}
	template <typename T = void> T SetCurrentMeshLocalEulerAngles(Il2CppVector3 localEulerAngles) {
		return ((T (*)(Pawn*, Il2CppVector3))(Il2CppBase() + 0x1635650))(this, localEulerAngles);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_m_MeshRenderers() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16357F4))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_MeshRenderers() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16357FC))(this);
	}
	template <typename T = bool> T get_BRMeshShow() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1635804))(this);
	}
	template <typename T = void> T SetCurrentMeshRenderer(bool isActive) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x1635818))(this, isActive);
	}
	template <typename T = bool> T get_IsFirstPersonView() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1635AD0))(this);
	}
	template <typename T = bool> T get_IsAutonomouse() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1635AE4))(this);
	}
	template <typename T = uintptr_t> T get_Role() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1635AF8))(this);
	}
	template <typename T = void> T set_Role(uintptr_t value) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x1635B00))(this, value);
	}
	template <typename T = bool> T get_IsOnVehicle() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1625464))(this);
	}
	template <typename T = bool> T get_FirstTimeResapwn() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1635B08))(this);
	}
	template <typename T = void> T set_FirstTimeResapwn(bool value) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x1635B10))(this, value);
	}
	template <typename T = int32_t> T get_GrenadeCount() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1635B18))(this);
	}
	template <typename T = bool> T get_ShouldCheckDetailCollider() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1635B30))(this);
	}
	template <typename T = bool> T get_IsAvatarLoadSync() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1635B38))(this);
	}
	template <typename T = bool> T get_RecentlyRendered() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1635B40))(this);
	}
	template <typename T = bool> T get_LastOccVisible() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1635BF0))(this);
	}
	template <typename T = bool> T get_IsSpectated() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1635CA0))(this);
	}
	template <typename T = Il2CppVector3> T get_ActualWalkingVelocity() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1635E04))(this);
	}
	template <typename T = uintptr_t> T get_WeaponShakeCol() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1635EA4))(this);
	}
	template <typename T = Il2CppVector3> T get_DeltaEulerAngles() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1635EAC))(this);
	}
	template <typename T = float> T get_GuideMoveCheckAngle() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1635EC8))(this);
	}
	template <typename T = float> T get_GuideMoveCheckSpeed() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1635ED0))(this);
	}
	template <typename T = float> T get_GuideMoveCheckTime() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1635ED8))(this);
	}
	template <typename T = uintptr_t> T GetLogicalComponent(uintptr_t inType) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x1635EE0))(this, inType);
	}
	template <typename T = uintptr_t> T GetLogicalComponent_1() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x334CD88))(this);
	}
	template <typename T = uintptr_t> T AddLogicalComponentImpl(uintptr_t type) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x1636088))(this, type);
	}
	template <typename T = uintptr_t> T AddLogicalComponent() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x334C6FC))(this);
	}
	template <typename T = void> T TickLogicalComponents(float deltaTime) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x1636220))(this, deltaTime);
	}
	template <typename T = uintptr_t> T AddLogicalComponent_1(uintptr_t type) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x16363A0))(this, type);
	}
	template <typename T = void> T CreateLogicalComponents() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163648C))(this);
	}
	template <typename T = void> T CreateLocalLogicalComponents() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1636E4C))(this);
	}
	template <typename T = void> T RecoverFirstPersonSocketTransform() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1636F14))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_AutoAssistAimRanges() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163735C))(this);
	}
	template <typename T = void> T set_AutoAssistAimRanges(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(Pawn*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1637364))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_AutoAssistAimRates() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163736C))(this);
	}
	template <typename T = void> T set_AutoAssistAimRates(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(Pawn*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1637374))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_AssistAimRotateTimes() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163737C))(this);
	}
	template <typename T = void> T set_AssistAimRotateTimes(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(Pawn*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1637384))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_DampAssistAimRateFactor() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163738C))(this);
	}
	template <typename T = void> T set_DampAssistAimRateFactor(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(Pawn*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1637394))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_MagnAssitAimRateFactor() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163739C))(this);
	}
	template <typename T = void> T set_MagnAssitAimRateFactor(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(Pawn*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x16373A4))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16373AC))(this);
	}
	template <typename T = void> T PreInit() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1637638))(this);
	}
	template <typename T = void> T CreateInventoryManager() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1637738))(this);
	}
	template <typename T = void> T InitComponents() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1637838))(this);
	}
	template <typename T = float> T GetSimulateDistance() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1637B00))(this);
	}
	template <typename T = void> T DisableForceServerPosition(float duration) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x1637BD0))(this, duration);
	}
	template <typename T = float> T GetForceMoveDist() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1632CF8))(this);
	}
	template <typename T = float> T GetMaxAcceleration() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1637CA0))(this);
	}
	template <typename T = void> T InitVector3Objects() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1637D84))(this);
	}
	template <typename T = float> T GetCrouchEyeHeight() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1637E9C))(this);
	}
	template <typename T = void> T InitPawn(uintptr_t info) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x1637F88))(this, info);
	}
	template <typename T = void> T InitRole() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1639568))(this);
	}
	template <typename T = void> T InitRoleCharacterColliderData() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16396F0))(this);
	}
	template <typename T = void> T ResetRoleCharacterColliderData() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163A0C0))(this);
	}
	template <typename T = void> T PlayGoliathInitSound() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163A1C0))(this);
	}
	template <typename T = void> T ResetRolePhysicState() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163A3E0))(this);
	}
	template <typename T = void> T CheckRespawnProtection() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163A538))(this);
	}
	template <typename T = void> T SwitchRole(uintptr_t viewType, bool needToResetPose) {
		return ((T (*)(Pawn*, uintptr_t, bool))(Il2CppBase() + 0x163A600))(this, viewType, needToResetPose);
	}
	template <typename T = void> T EndSwitchRole() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163A8BC))(this);
	}
	template <typename T = void> T OnSpectatingViewChange(uintptr_t spectatingViewType) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x163AFDC))(this, spectatingViewType);
	}
	template <typename T = void> T NotifyComponentWeaponChanged() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163B360))(this);
	}
	template <typename T = void> T NotifyComponentSwitchRole() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163AE40))(this);
	}
	template <typename T = void> T NotifyComponentRespawn() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163B77C))(this);
	}
	template <typename T = void> T NotifyComponentSwitchView() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163B918))(this);
	}
	template <typename T = void> T NotifyComponentClientRelevant(bool isRelevant) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x163BAB4))(this, isRelevant);
	}
	template <typename T = void> T NotifyComponentSpectatingViewChange(uintptr_t spectatingViewType) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x163B1AC))(this, spectatingViewType);
	}
	template <typename T = void> T NotifyComponentSpectatingStart() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163BC68))(this);
	}
	template <typename T = void> T NotifyComponentSpectatingEnd() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163BE04))(this);
	}
	template <typename T = void> T NotifyComponentBeginDestroy() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163BFA0))(this);
	}
	template <typename T = void> T NotifyComponentDie() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163C13C))(this);
	}
	template <typename T = bool> T IsSwitchingRole() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163C2D8))(this);
	}
	template <typename T = uintptr_t> T GetSwitchingStep() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163C3C8))(this);
	}
	template <typename T = uintptr_t> T CreatePlayerInfo(uint32_t playerID, uint32_t actorID, uintptr_t camp) {
		return ((T (*)(Pawn*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x163C4B0))(this, playerID, actorID, camp);
	}
	template <typename T = void> T InitPlayerInfo(uintptr_t info) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x163C6D4))(this, info);
	}
	template <typename T = void> T CacheTransform() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163C9F4))(this);
	}
	template <typename T = void> T CacheMeshSocket() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163D4A8))(this);
	}
	template <typename T = void> T LoadProperties() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163D614))(this);
	}
	template <typename T = void> T ClearAsyncLoadCallback() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163D8C4))(this);
	}
	template <typename T = void> T DestroyComponent() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163D9A4))(this);
	}
	template <typename T = void> T DestroyPawn() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163DDD8))(this);
	}
	template <typename T = void> T BeginDestroy() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163E040))(this);
	}
	template <typename T = void> T DestroyInventory() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163DB6C))(this);
	}
	template <typename T = void> T DestroyCurrentWeapon() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163E134))(this);
	}
	template <typename T = void> T ResetPlayer() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163E418))(this);
	}
	template <typename T = void> T AddAvailableVehicle(uintptr_t vehicle) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x163E84C))(this, vehicle);
	}
	template <typename T = void> T RemoveAvailableVehicle(uintptr_t vehicle) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x163E978))(this, vehicle);
	}
	template <typename T = void> T RemoveAllAvailableVehicle() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163EAA4))(this);
	}
	template <typename T = uintptr_t> T CacheSlotItemVehicle() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163ECD0))(this);
	}
	template <typename T = bool> T VehicleChangeWeaponHandler(bool needSwitch, bool needCacheWeapon) {
		return ((T (*)(Pawn*, bool, bool))(Il2CppBase() + 0x163EDA0))(this, needSwitch, needCacheWeapon);
	}
	template <typename T = bool> T IsForbidVehicleControllWithCurrentWeapon() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163EE90))(this);
	}
	template <typename T = void> T VehicleControl(uintptr_t type) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x163F158))(this, type);
	}
	template <typename T = void> T VehicleDrive() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163FDC4))(this);
	}
	template <typename T = void> T VehicleRide() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1640338))(this);
	}
	template <typename T = void> T VehicleSeatChange() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1640838))(this);
	}
	template <typename T = void> T VehicleGetOff() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1640B5C))(this);
	}
	template <typename T = uintptr_t> T GetBestAvailableVehicle() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163F784))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x1641690))(this, deltaTime);
	}
	template <typename T = bool> T get_IsBeginCheckMantle() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16420CC))(this);
	}
	template <typename T = void> T set_IsBeginCheckMantle(bool value) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x16420D4))(this, value);
	}
	template <typename T = void> T CheckMantleTopPos(Il2CppVector3 checkPos, int32_t layerMask, uintptr_t retTopPos) {
		return ((T (*)(Pawn*, Il2CppVector3, int32_t, uintptr_t))(Il2CppBase() + 0x16420DC))(this, checkPos, layerMask, retTopPos);
	}
	template <typename T = void> T CheckMantleTopWidth(Il2CppVector3 topMantleRayPos, uintptr_t width, int32_t layerMask) {
		return ((T (*)(Pawn*, Il2CppVector3, uintptr_t, int32_t))(Il2CppBase() + 0x1642488))(this, topMantleRayPos, width, layerMask);
	}
	template <typename T = void> T CheckClimbMantle() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1642848))(this);
	}
	template <typename T = void> T UpdateFirstPersonCameraOffset(float DeltaTime) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x1641D80))(this, DeltaTime);
	}
	template <typename T = void> T SmoothMoveFirstPersonCameraViewportOffsetX(float destLocalOffsetX, float duration) {
		return ((T (*)(Pawn*, float, float))(Il2CppBase() + 0x1643B30))(this, destLocalOffsetX, duration);
	}
	template <typename T = float> T GetFirstPersonCameraOffsetX_OriginalValue() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1643CE4))(this);
	}
	template <typename T = void> T UpdateLOD() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1643DB4))(this);
	}
	template <typename T = void> T NotifyAnimComponentInitialized() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1643EF8))(this);
	}
	template <typename T = void> T NotifyWearableThingsChanged() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1644054))(this);
	}
	template <typename T = void> T ConfigAnimComponent() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x164411C))(this);
	}
	template <typename T = uintptr_t> T get_CachedMainCamera() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16441E4))(this);
	}
	template <typename T = void> T PostRenderFor(float deltaTime) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x16442B8))(this, deltaTime);
	}
	template <typename T = bool> T CanCameraSee(uintptr_t DstCamera) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x1644A30))(this, DstCamera);
	}
	template <typename T = void> T ProcessSprint(float deltaTime) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x1644CA0))(this, deltaTime);
	}
	template <typename T = void> T ProcessServerMove(float deltaTime) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x1644D70))(this, deltaTime);
	}
	template <typename T = void> T ProcessStandaloneMove(float deltaTime) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x1644E40))(this, deltaTime);
	}
	template <typename T = void> T TickSimulate(float deltaTime) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x1644F10))(this, deltaTime);
	}
	template <typename T = void> T PossessedBy(uintptr_t PlayerController) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x1644FE0))(this, PlayerController);
	}
	template <typename T = void> T UnPossessed() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1645160))(this);
	}
	template <typename T = void> T InitMeshRenderers() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1645278))(this);
	}
	template <typename T = void> T InitMesh(uintptr_t model) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x16453B4))(this, model);
	}
	template <typename T = void> T CheckCreateArmObj(uintptr_t model) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x1645FB8))(this, model);
	}
	template <typename T = void> T CreateUpArmObj(uintptr_t model) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x16469AC))(this, model);
	}
	template <typename T = void> T SetUpArmObjScale(float value) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x1646B78))(this, value);
	}
	template <typename T = int32_t> T GetUpArmFXAssetID(bool isLeftArm) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x1646C48))(this, isLeftArm);
	}
	template <typename T = void> T SetUpArmFXShowOrHide(bool value) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x1646E4C))(this, value);
	}
	template <typename T = void> T RefreshUpArmFXShowOrHide() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1647104))(this);
	}
	template <typename T = bool> T IsNeedDistinguish(bool isCreate) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x1647200))(this, isCreate);
	}
	template <typename T = void> T SetInitialVisibility() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1647688))(this);
	}
	template <typename T = void> T SetHidden(bool isHidden) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x16477F4))(this, isHidden);
	}
	template <typename T = bool> T get_IsHide() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1647BFC))(this);
	}
	template <typename T = void> T SetRelevent(bool isRelevent) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x1647C04))(this, isRelevent);
	}
	template <typename T = void> T SetOCCVisible(bool occVisible) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x1647F58))(this, occVisible);
	}
	template <typename T = void> T SetLocation(Il2CppVector3 location) {
		return ((T (*)(Pawn*, Il2CppVector3))(Il2CppBase() + 0x1648290))(this, location);
	}
	template <typename T = void> T SetRotation(Il2CppQuaternion rotation) {
		return ((T (*)(Pawn*, Il2CppQuaternion))(Il2CppBase() + 0x16483B4))(this, rotation);
	}
	template <typename T = void> T SetRotation_1(float yAngle, float inputYAngle) {
		return ((T (*)(Pawn*, float, float))(Il2CppBase() + 0x1648510))(this, yAngle, inputYAngle);
	}
	template <typename T = void> T SyncPosition(Il2CppVector3 pos, bool checkColliders) {
		return ((T (*)(Pawn*, Il2CppVector3, bool))(Il2CppBase() + 0x1648640))(this, pos, checkColliders);
	}
	template <typename T = Il2CppVector3> T GetRayStartPos() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1649078))(this);
	}
	template <typename T = void> T OnByVehicle(uintptr_t vehicleType) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x164930C))(this, vehicleType);
	}
	template <typename T = void> T OnLeaveVehicle() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16493DC))(this);
	}
	template <typename T = void> T OnChangeSeat() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16494A4))(this);
	}
	template <typename T = void> T Teleport(Il2CppVector3 pos, Il2CppQuaternion rot, bool snapToGround) {
		return ((T (*)(Pawn*, Il2CppVector3, Il2CppQuaternion, bool))(Il2CppBase() + 0x164956C))(this, pos, rot, snapToGround);
	}
	template <typename T = void> T SetAimRotation(Il2CppQuaternion rotation) {
		return ((T (*)(Pawn*, Il2CppQuaternion))(Il2CppBase() + 0x1649970))(this, rotation);
	}
	template <typename T = Il2CppVector3> T ClampRotation(Il2CppVector3 eulerAngle) {
		return ((T (*)(Pawn*, Il2CppVector3))(Il2CppBase() + 0x1649CD4))(this, eulerAngle);
	}
	template <typename T = void> T AddRotation(Il2CppVector3 targetPos, bool onlyY) {
		return ((T (*)(Pawn*, Il2CppVector3, bool))(Il2CppBase() + 0x1649FCC))(this, targetPos, onlyY);
	}
	template <typename T = void> T AddRotation_1(Il2CppQuaternion targetRotation, bool onlyY) {
		return ((T (*)(Pawn*, Il2CppQuaternion, bool))(Il2CppBase() + 0x164A1F8))(this, targetRotation, onlyY);
	}
	template <typename T = void> T AddRotation_2(Il2CppQuaternion deltaRotation) {
		return ((T (*)(Pawn*, Il2CppQuaternion))(Il2CppBase() + 0x164A3D8))(this, deltaRotation);
	}
	template <typename T = void> T UpdateRealRotation(float deltaTime) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x164A608))(this, deltaTime);
	}
	template <typename T = void> T InternalUpdateSetRotation(float deltaTime) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x164A6F4))(this, deltaTime);
	}
	template <typename T = void> T UpdateRotation(Il2CppVector3 deltaEulerAngles) {
		return ((T (*)(Pawn*, Il2CppVector3))(Il2CppBase() + 0x164A7C4))(this, deltaEulerAngles);
	}
	template <typename T = void> T UpdatePassengerRotation(Il2CppVector3 angles) {
		return ((T (*)(Pawn*, Il2CppVector3))(Il2CppBase() + 0x164AE48))(this, angles);
	}
	template <typename T = Il2CppQuaternion> T GetVehicleSocketRotation() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x164B590))(this);
	}
	template <typename T = void> T UpdatePassenerAnimation() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x164B250))(this);
	}
	template <typename T = float> T get_CurrentPassengerAniAngle() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x164B784))(this);
	}
	template <typename T = void> T TickPassenerAnimation(float deltaTime) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x164B78C))(this, deltaTime);
	}
	template <typename T = void> T RefreshVehicleAimRotation(bool isForceRotate) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x164BCEC))(this, isForceRotate);
	}
	template <typename T = void> T UpdateInVehicleRotation(Il2CppVector3 eulerAngle) {
		return ((T (*)(Pawn*, Il2CppVector3))(Il2CppBase() + 0x164C5DC))(this, eulerAngle);
	}
	template <typename T = void> T SetUpperBodyRotation(Il2CppQuaternion setRot) {
		return ((T (*)(Pawn*, Il2CppQuaternion))(Il2CppBase() + 0x1649ADC))(this, setRot);
	}
	template <typename T = void> T SetUpperBodyLocalRotation(Il2CppQuaternion setRot) {
		return ((T (*)(Pawn*, Il2CppQuaternion))(Il2CppBase() + 0x164C82C))(this, setRot);
	}
	template <typename T = void> T UpdateInNonBattleAreaRotation(Il2CppVector3 eulerAngle) {
		return ((T (*)(Pawn*, Il2CppVector3))(Il2CppBase() + 0x164C9E4))(this, eulerAngle);
	}
	template <typename T = bool> T CheckCeiling() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x164CB38))(this);
	}
	template <typename T = bool> T CheckProneRotation(bool inLeftOrRight) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x164CD18))(this, inLeftOrRight);
	}
	template <typename T = bool> T IsProneRotationCollision(Il2CppVector3 deltaEulerAngles, Il2CppVector3 aimEulerAngles, Il2CppVector3 curEulerAngles, uintptr_t isSetBodyAngle) {
		return ((T (*)(Pawn*, Il2CppVector3, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x164AC54))(this, deltaEulerAngles, aimEulerAngles, curEulerAngles, isSetBodyAngle);
	}
	template <typename T = void> T UpdateAcceleration(float forward, float strafe) {
		return ((T (*)(Pawn*, float, float))(Il2CppBase() + 0x164D270))(this, forward, strafe);
	}
	template <typename T = void> T SetPhysicsVolume(uintptr_t volume, bool bEnter) {
		return ((T (*)(Pawn*, uintptr_t, bool))(Il2CppBase() + 0x164D9B8))(this, volume, bEnter);
	}
	template <typename T = bool> T InSlideVolume() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x164DF34))(this);
	}
	template <typename T = bool> T InFountianVolume() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x164E0A0))(this);
	}
	template <typename T = void> T PerformPhysics(float deltaTime) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x164E20C))(this, deltaTime);
	}
	template <typename T = void> T SoundEmitterPerformPhysics() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1641BF0))(this);
	}
	template <typename T = bool> T IsHoldWeapon() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x164E4FC))(this);
	}
	template <typename T = float> T CalcMaxMoveSpeed() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x164E5CC))(this);
	}
	template <typename T = float> T CalcFinalMoveScale() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x164E74C))(this);
	}
	template <typename T = Il2CppVector3> T CalcFinalMoveVelocity() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x164EA20))(this);
	}
	template <typename T = Il2CppVector3> T GetOverrideAcceleration() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x164EB48))(this);
	}
	template <typename T = float> T GetJumpScale() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x164EC88))(this);
	}
	template <typename T = float> T GetCurrentDistToWaterSurface() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x164ED58))(this);
	}
	template <typename T = bool> T IsValidFallingHeight(float fallingHeight, uintptr_t distToFloor) {
		return ((T (*)(Pawn*, float, uintptr_t))(Il2CppBase() + 0x164F01C))(this, fallingHeight, distToFloor);
	}
	template <typename T = bool> T IsForbiddenMove() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x164F2E4))(this);
	}
	template <typename T = bool> T IsTowardDeepWater(Il2CppVector3 deltaMove) {
		return ((T (*)(Pawn*, Il2CppVector3))(Il2CppBase() + 0x164F4E8))(this, deltaMove);
	}
	template <typename T = bool> T IsPositionChange() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x164F5E0))(this);
	}
	template <typename T = bool> T IsPositionSubtleChange() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x164F7DC))(this);
	}
	template <typename T = Il2CppVector3> T GetPosistionDeltaChange() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x164F938))(this);
	}
	template <typename T = Il2CppString*> T GetDebugString() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x164FA6C))(this);
	}
	template <typename T = float> T GetMaxSpeed() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x164FB3C))(this);
	}
	template <typename T = bool> T CouldSprintingInCrounch() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x164FCFC))(this);
	}
	template <typename T = bool> T CheckStopSprintintWithWeapon() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x164FDD8))(this);
	}
	template <typename T = void> T PhysGravitySpikes(float deltaTime) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x164FF58))(this, deltaTime);
	}
	template <typename T = void> T FallingGravitySpikesGround(float deltaTime) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x1650AA8))(this, deltaTime);
	}
	template <typename T = void> T CheckGravitySpikesDown(float deltaTime) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x1650D1C))(this, deltaTime);
	}
	template <typename T = void> T ForceCheckSprint() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1650E2C))(this);
	}
	template <typename T = bool> T get_IsInfoSprint() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1650F18))(this);
	}
	template <typename T = bool> T IsSprinting() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1650F40))(this);
	}
	template <typename T = bool> T CanSprint() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1651070))(this);
	}
	template <typename T = void> T StartSprint() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16511E8))(this);
	}
	template <typename T = void> T StopSprintBeforeChangePawn() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16514E0))(this);
	}
	template <typename T = void> T StopSprint() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16515C0))(this);
	}
	template <typename T = void> T StopMove() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16516B0))(this);
	}
	template <typename T = void> T ClimbLadder(uintptr_t ladder) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x1651778))(this, ladder);
	}
	template <typename T = void> T EndClimbLadder(uintptr_t ladder) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x1651870))(this, ladder);
	}
	template <typename T = void> T TogglePhysicsFollowPath(bool enable, uintptr_t followTarget) {
		return ((T (*)(Pawn*, bool, uintptr_t))(Il2CppBase() + 0x165196C))(this, enable, followTarget);
	}
	template <typename T = void> T EnterWater(uintptr_t water) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x1651AD4))(this, water);
	}
	template <typename T = void> T LeaveWater(uintptr_t water) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x1651BC0))(this, water);
	}
	template <typename T = bool> T CanGrabLadder() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1651CAC))(this);
	}
	template <typename T = bool> T CanShowLadderHUD() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1651D94))(this);
	}
	template <typename T = void> T OnStartIndividuationAnim() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1651F20))(this);
	}
	template <typename T = bool> T ForcePlayIndividuationAnim(int32_t itemID, uintptr_t callback) {
		return ((T (*)(Pawn*, int32_t, uintptr_t))(Il2CppBase() + 0x16520A8))(this, itemID, callback);
	}
	template <typename T = void> T TryStopIndividuationAnim() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163B0C4))(this);
	}
	template <typename T = bool> T get_IsInUseItem() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16529D8))(this);
	}
	template <typename T = void> T TryStopUseItem() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16529E0))(this);
	}
	template <typename T = void> T TryStopPickUp() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1652AA8))(this);
	}
	template <typename T = void> T TryStopPlayTrick() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1652BBC))(this);
	}
	template <typename T = bool> T CanGravitySpikes() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1652DAC))(this);
	}
	template <typename T = bool> T DoGravitySpikes() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1652ED4))(this);
	}
	template <typename T = void> T DoGravitySpikes1POrSpectator() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1652FD8))(this);
	}
	template <typename T = bool> T get_IsShadowBlade() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1653258))(this);
	}
	template <typename T = bool> T get_CanShadowBladeFire() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1653260))(this);
	}
	template <typename T = bool> T CanShadowBlade() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1653268))(this);
	}
	template <typename T = bool> T DoShadowBladeAttack() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1653384))(this);
	}
	template <typename T = void> T DoPhysicSprint() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16534A8))(this);
	}
	template <typename T = void> T ShadowBladeFire() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16535C4))(this);
	}
	template <typename T = void> T SetShadowBladeState(bool state, bool setView) {
		return ((T (*)(Pawn*, bool, bool))(Il2CppBase() + 0x1653744))(this, state, setView);
	}
	template <typename T = bool> T IsJumpMeleeFire() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16538D8))(this);
	}
	template <typename T = void> T DropDownEyeHeightForCrouching() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16539DC))(this);
	}
	template <typename T = void> T RecoverEyeHeightForCrouching() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1653AC0))(this);
	}
	template <typename T = float> T GetCollisionHeight() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1653BA4))(this);
	}
	template <typename T = float> T GetCollisionRadius() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1653CA8))(this);
	}
	template <typename T = void> T ChooseInitThirdPersonCamera(float minDist, uintptr_t out_CamRot) {
		return ((T (*)(Pawn*, float, uintptr_t))(Il2CppBase() + 0x1653DAC))(this, minDist, out_CamRot);
	}
	template <typename T = float> T get_SpectateCameraRadiusScale() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1654440))(this);
	}
	template <typename T = void> T CalcThirdPersonCamera(float delatTime, uintptr_t out_CamLoc, uintptr_t out_CamRot) {
		return ((T (*)(Pawn*, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x165444C))(this, delatTime, out_CamLoc, out_CamRot);
	}
	template <typename T = void> T CalcBrThirdPersonCamera(float delatTime, uintptr_t out_CamLoc, uintptr_t out_CamRot) {
		return ((T (*)(Pawn*, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x1654864))(this, delatTime, out_CamLoc, out_CamRot);
	}
	template <typename T = void> T CalcDeathCam(float delatTime, uintptr_t out_CamLoc, uintptr_t out_CamRot) {
		return ((T (*)(Pawn*, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x1654CA0))(this, delatTime, out_CamLoc, out_CamRot);
	}
	template <typename T = void> T ResetUpperBodyRelativePos() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1654FCC))(this);
	}
	template <typename T = void> T StartSubWeaponFire(bool isOpenAimState) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x1655130))(this, isOpenAimState);
	}
	template <typename T = void> T SetSubWeaponFireState(bool isOpenAimState) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x1655200))(this, isOpenAimState);
	}
	template <typename T = Il2CppVector3> T GetLeftMuzzleFlashSocketPos() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16552D0))(this);
	}
	template <typename T = bool> T CanSwitchFireMode() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16553B0))(this);
	}
	template <typename T = bool> T CanSwitchView() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16554AC))(this);
	}
	template <typename T = void> T SwitchToMelee(bool isDirectly) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x1655938))(this, isDirectly);
	}
	template <typename T = void> T SwitchToLastUsedWeapon() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1655B58))(this);
	}
	template <typename T = void> T OnSyncAnimation3P(uintptr_t animName, float animLength, float Param1) {
		return ((T (*)(Pawn*, uintptr_t, float, float))(Il2CppBase() + 0x1655FC4))(this, animName, animLength, Param1);
	}
	template <typename T = bool> T ShouldIgnoreAimTarget(uintptr_t target) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x165618C))(this, target);
	}
	template <typename T = void> T OnSyncHPChange(float newHP, float maxHP) {
		return ((T (*)(Pawn*, float, float))(Il2CppBase() + 0x1656264))(this, newHP, maxHP);
	}
	template <typename T = Il2CppVector3> T GetPassengerViewPosition() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1656468))(this);
	}
	template <typename T = Il2CppVector3> T GetCameraPosition() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16565C4))(this);
	}
	template <typename T = Il2CppVector3> T GetWorldCameraSocketTransformPosition() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16566B0))(this);
	}
	template <typename T = Il2CppVector3> T GetCameraPosition_TPS() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1656854))(this);
	}
	template <typename T = bool> T get_IsTPSClimb() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16569F8))(this);
	}
	template <typename T = void> T set_IsTPSClimb(bool value) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x1656A00))(this, value);
	}
	template <typename T = Il2CppVector3> T GetCameraPosition_HeadTPS() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1656A08))(this);
	}
	template <typename T = Il2CppVector3> T GetCameraPosition_FirstPerson() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1656BCC))(this);
	}
	template <typename T = Il2CppVector3> T GetFirstPersonSocketPositioin() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1656D70))(this);
	}
	template <typename T = Il2CppVector3> T GetCameraLocalPosition_FirstPerson() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1656F14))(this);
	}
	template <typename T = Il2CppVector3> T GetCameraLocalPosition_ThirdPerson() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1657078))(this);
	}
	template <typename T = Il2CppVector3> T get_CameraPosition_ThirdPerson() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16571DC))(this);
	}
	template <typename T = void> T set_CameraPosition_ThirdPerson(Il2CppVector3 value) {
		return ((T (*)(Pawn*, Il2CppVector3))(Il2CppBase() + 0x16572D0))(this, value);
	}
	template <typename T = Il2CppVector3> T get_CameraPosition_FirstPerson() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16573CC))(this);
	}
	template <typename T = void> T set_CameraPosition_FirstPerson(Il2CppVector3 value) {
		return ((T (*)(Pawn*, Il2CppVector3))(Il2CppBase() + 0x16574FC))(this, value);
	}
	template <typename T = void> T SetCameraLocalPosition_FirstPerson(Il2CppVector3 localPos) {
		return ((T (*)(Pawn*, Il2CppVector3))(Il2CppBase() + 0x16575F8))(this, localPos);
	}
	template <typename T = void> T RecoveCameraLocalPosition_FirstPerson() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16577EC))(this);
	}
	template <typename T = Il2CppQuaternion> T GetAimRotation() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16578E8))(this);
	}
	template <typename T = Il2CppQuaternion> T GetCameraRotation(Il2CppQuaternion aimRotation) {
		return ((T (*)(Pawn*, Il2CppQuaternion))(Il2CppBase() + 0x16579C8))(this, aimRotation);
	}
	template <typename T = Il2CppQuaternion> T GetCameraRotation_1() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1657B1C))(this);
	}
	template <typename T = Il2CppQuaternion> T GetUpperBodyRotationOnVehicle(bool isDelayRotate) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x164C434))(this, isDelayRotate);
	}
	template <typename T = Il2CppQuaternion> T GetUpperBodyRotation() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1657C88))(this);
	}
	template <typename T = void> T PlayAnimationState(Il2CppString* stateName) {
		return ((T (*)(Pawn*, Il2CppString*))(Il2CppBase() + 0x1657DF4))(this, stateName);
	}
	template <typename T = void> T PlayAnimationState_1(int32_t stateID) {
		return ((T (*)(Pawn*, int32_t))(Il2CppBase() + 0x1657F44))(this, stateID);
	}
	template <typename T = void> T TrySpawnSnowTrack(uintptr_t pImpactInfo) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x1658094))(this, pImpactInfo);
	}
	template <typename T = void> T TryStopChangeClip() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1658164))(this);
	}
	template <typename T = void> T ForceStopChangeClip() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1658300))(this);
	}
	template <typename T = void> T PlayEventSound(Il2CppString* soundName) {
		return ((T (*)(Pawn*, Il2CppString*))(Il2CppBase() + 0x16586AC))(this, soundName);
	}
	template <typename T = void> T OnFinishItem(Il2CppString* soundName) {
		return ((T (*)(Pawn*, Il2CppString*))(Il2CppBase() + 0x1658988))(this, soundName);
	}
	template <typename T = int32_t> T GetMeshAssetID_1P() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1658A58))(this);
	}
	template <typename T = int32_t> T GetMeshAssetID_3P() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1658B28))(this);
	}
	template <typename T = int32_t> T GetDefaultAssetID_3P() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1658BF8))(this);
	}
	template <typename T = void> T SetStandAnimationTransition(float transitionTime, bool decelerateStand) {
		return ((T (*)(Pawn*, float, bool))(Il2CppBase() + 0x1658E00))(this, transitionTime, decelerateStand);
	}
	template <typename T = void> T SetAnimatinSpeedTransition(float transitionTime, float speed) {
		return ((T (*)(Pawn*, float, float))(Il2CppBase() + 0x1658F70))(this, transitionTime, speed);
	}
	template <typename T = void> T InternalTickStandAnimationTransition(float deltaTime) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x1641ADC))(this, deltaTime);
	}
	template <typename T = void> T SetMeshVisible(bool visible) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x1659054))(this, visible);
	}
	template <typename T = void> T OnSpectatingStart() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16591EC))(this);
	}
	template <typename T = void> T OnSpectatingStartSetEyeHeight() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x165944C))(this);
	}
	template <typename T = void> T OnSpectatingEnd() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1659BC0))(this);
	}
	template <typename T = void> T SpectatingEndClearPostEffect() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1659EF0))(this);
	}
	template <typename T = uintptr_t> T GetPawnFirpersonWeaponSocket() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x165A078))(this);
	}
	template <typename T = uintptr_t> T GetPawnFirstPersonArmSocket() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x165A14C))(this);
	}
	template <typename T = uintptr_t> T get_FirstPersonWeaponSocket() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1637144))(this);
	}
	template <typename T = uintptr_t> T get_FirstPersonArmSocket() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1637250))(this);
	}
	template <typename T = uintptr_t> T get_ThirdPersonModelSocket() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x165A220))(this);
	}
	template <typename T = uintptr_t> T GetComponent_FPS() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x334C8D0))(this);
	}
	template <typename T = uintptr_t> T GetComponent_TPS() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x334CB2C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetComponents_TPS() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x4E423B8))(this);
	}
	template <typename T = void> T OnUpdateFirstPersonSocketInit() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x165A32C))(this);
	}
	template <typename T = uintptr_t> T SpawnPooledMeshGO(uintptr_t socketTrans, int32_t assetID) {
		return ((T (*)(Pawn*, uintptr_t, int32_t))(Il2CppBase() + 0x165A3F4))(this, socketTrans, assetID);
	}
	template <typename T = void> T DespawnPooledMeshGO(uintptr_t meshGO, bool Is3P) {
		return ((T (*)(Pawn*, uintptr_t, bool))(Il2CppBase() + 0x165A588))(this, meshGO, Is3P);
	}
	template <typename T = void> T InitColliders() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x165A9E4))(this);
	}
	template <typename T = void> T ResetCollidersOnMesh() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x165AAEC))(this);
	}
	template <typename T = void> T OnAvatarLoadCompleted() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x165AF44))(this);
	}
	template <typename T = void> T SimulatedPrePlayGetWeaponAnim(int32_t actorId, int32_t itemId, float equipTime) {
		return ((T (*)(Pawn*, int32_t, int32_t, float))(Il2CppBase() + 0x165BA28))(this, actorId, itemId, equipTime);
	}
	template <typename T = uintptr_t> T GiveWeaponSilenced(int32_t weaponID, unsigned char slot, bool bAddForce, Il2CppList<uintptr_t>* partInfoList, uint32_t skinID, int32_t actorID, int32_t weaponLv, int32_t crossHairItemID) {
		return ((T (*)(Pawn*, int32_t, unsigned char, bool, Il2CppList<uintptr_t>*, uint32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x165BB18))(this, weaponID, slot, bAddForce, partInfoList, skinID, actorID, weaponLv, crossHairItemID);
	}
	template <typename T = uintptr_t> T GiveWeaponByPickUp(int32_t weaponID, unsigned char slot, bool bAddForce, Il2CppList<uintptr_t>* partInfoList, uint32_t skinID, int32_t actorID, int32_t weaponLevel, int32_t crossHairItemID) {
		return ((T (*)(Pawn*, int32_t, unsigned char, bool, Il2CppList<uintptr_t>*, uint32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x165BDCC))(this, weaponID, slot, bAddForce, partInfoList, skinID, actorID, weaponLevel, crossHairItemID);
	}
	template <typename T = uintptr_t> T GiveWeapon(int32_t weaponID, unsigned char slot, bool bAddForce, Il2CppList<uintptr_t>* partInfoList, uint32_t skinID, int32_t actorID, int32_t weaponLevel, int32_t crossHairItemID) {
		return ((T (*)(Pawn*, int32_t, unsigned char, bool, Il2CppList<uintptr_t>*, uint32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x165BF20))(this, weaponID, slot, bAddForce, partInfoList, skinID, actorID, weaponLevel, crossHairItemID);
	}
	template <typename T = void> T AddAllInventory() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x165C2D8))(this);
	}
	template <typename T = void> T Die(bool isHeadShot, uintptr_t damageType) {
		return ((T (*)(Pawn*, bool, uintptr_t))(Il2CppBase() + 0x165C5CC))(this, isHeadShot, damageType);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x165E034))(this);
	}
	template <typename T = void> T CheckResetMeshRenderers() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x165E478))(this);
	}
	template <typename T = void> T ResetMove() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x165E6D0))(this);
	}
	template <typename T = void> T PlayDying(bool isHeadShot, uintptr_t damageType) {
		return ((T (*)(Pawn*, bool, uintptr_t))(Il2CppBase() + 0x165E798))(this, isHeadShot, damageType);
	}
	template <typename T = void> T PlayDieAnim(bool isHeadShot) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x165EA54))(this, isHeadShot);
	}
	template <typename T = void> T SetDyingPhysics() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x165EC2C))(this);
	}
	template <typename T = void> T RemoveAllInventories() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x165ED34))(this);
	}
	template <typename T = void> T TakeDamage(uintptr_t damageInfo) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x165EE14))(this, damageInfo);
	}
	template <typename T = void> T SetOngoingDamage(float remainingTime, uintptr_t dps, int32_t assetID) {
		return ((T (*)(Pawn*, float, uintptr_t, int32_t))(Il2CppBase() + 0x165EF0C))(this, remainingTime, dps, assetID);
	}
	template <typename T = void> T PlayTakeDamageEffect(uintptr_t damageInfo) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x165F020))(this, damageInfo);
	}
	template <typename T = int32_t> T GetBloodEffectAsset(uintptr_t info) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x165F118))(this, info);
	}
	template <typename T = void> T PlayHitBloodEffect(Il2CppVector3 pos, uintptr_t info) {
		return ((T (*)(Pawn*, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x165F418))(this, pos, info);
	}
	template <typename T = void> T ReportHitByLocalPlayer(uintptr_t info) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x165F8E8))(this, info);
	}
	template <typename T = void> T PlayHitEffect(uintptr_t hitMotionDir, uintptr_t damageType) {
		return ((T (*)(Pawn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x165F9B8))(this, hitMotionDir, damageType);
	}
	template <typename T = void> T PlayHurtEffect(uintptr_t damageInfo) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x165FAC8))(this, damageInfo);
	}
	template <typename T = void> T PlayPawnEffect(int32_t assetId, Il2CppString* socket) {
		return ((T (*)(Pawn*, int32_t, Il2CppString*))(Il2CppBase() + 0x165FE30))(this, assetId, socket);
	}
	template <typename T = uintptr_t> T FindSocket(Il2CppString* socketName) {
		return ((T (*)(Pawn*, Il2CppString*))(Il2CppBase() + 0x166017C))(this, socketName);
	}
	template <typename T = void> T AdjustDamage(uintptr_t damageInfo) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x16603C8))(this, damageInfo);
	}
	template <typename T = void> T SimulateTakeDamage(uintptr_t damageInfo) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x16604C0))(this, damageInfo);
	}
	template <typename T = void> T SimulateSpecialDamage(uintptr_t damageInfo) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x1660A9C))(this, damageInfo);
	}
	template <typename T = uintptr_t> T CalHitMotionDirection(uintptr_t damageInfo) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x1660B8C))(this, damageInfo);
	}
	template <typename T = void> T SetViewType(uintptr_t viewType) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x1660E08))(this, viewType);
	}
	template <typename T = void> T StopDriving() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16611B4))(this);
	}
	template <typename T = int32_t> T GetCameraColliderLayer() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1661374))(this);
	}
	template <typename T = void> T GetOnSelfVehicle() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1661540))(this);
	}
	template <typename T = void> T GetOnVehicle(uintptr_t vehicle, uintptr_t seat) {
		return ((T (*)(Pawn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1661888))(this, vehicle, seat);
	}
	template <typename T = void> T ResetRotation() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1661A44))(this);
	}
	template <typename T = void> T GetOffVehicle(uintptr_t vehicle) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x1661BAC))(this, vehicle);
	}
	template <typename T = void> T OnPassengerStateChange(unsigned char infoType) {
		return ((T (*)(Pawn*, unsigned char))(Il2CppBase() + 0x1661CA8))(this, infoType);
	}
	template <typename T = bool> T GetUltPickUpState() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1661D78))(this);
	}
	template <typename T = void> T SetUltPickUpCDState() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1661E48))(this);
	}
	template <typename T = void> T OnEnterTrigger(uintptr_t trigger) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x1661F10))(this, trigger);
	}
	template <typename T = void> T OnLeaveTrigger(uintptr_t trigger) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x1662C1C))(this, trigger);
	}
	template <typename T = void> T OnProcessCarePackageTrigger(uintptr_t carePackage, bool isEnter) {
		return ((T (*)(Pawn*, uintptr_t, bool))(Il2CppBase() + 0x1662AAC))(this, carePackage, isEnter);
	}
	template <typename T = void> T OnEnterCarePackageTrigger(uintptr_t carePackage) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x1662F10))(this, carePackage);
	}
	template <typename T = void> T OnLeaveCarePackageTrigger(uintptr_t carePackage) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x1663510))(this, carePackage);
	}
	template <typename T = void> T RecycleMesh() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16637B4))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1663A40))(this);
	}
	template <typename T = uintptr_t> T GetSoundEmitterType() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1663BD0))(this);
	}
	template <typename T = void> T CreateSoundEmitter(uintptr_t info) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x1638910))(this, info);
	}
	template <typename T = void> T InitAudioComponents() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1663CA0))(this);
	}
	template <typename T = void> T DeInitAudioComponents() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1663FA4))(this);
	}
	template <typename T = float> T GetFootstepAuditionRange() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1664134))(this);
	}
	template <typename T = void> T EnterCustomStepSoundVolume(Il2CppString* StepSnd1P, Il2CppString* StepSnd3P) {
		return ((T (*)(Pawn*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1664208))(this, StepSnd1P, StepSnd3P);
	}
	template <typename T = void> T LeaveCustomStepSoundVolume() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16642EC))(this);
	}
	template <typename T = uintptr_t> T GetPriority() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16643B4))(this);
	}
	template <typename T = float> T GetHeightFromGround(bool bCeilZero, float offset) {
		return ((T (*)(Pawn*, bool, float))(Il2CppBase() + 0x1664484))(this, bCeilZero, offset);
	}
	template <typename T = float> T GetTargetPosHeightFromGround(Il2CppVector3 Pos, bool bCeilZero, float offset) {
		return ((T (*)(Pawn*, Il2CppVector3, bool, float))(Il2CppBase() + 0x164972C))(this, Pos, bCeilZero, offset);
	}
	template <typename T = void> T RemoveWeaponProjectile(uintptr_t Projectile) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x16645A8))(this, Projectile);
	}
	template <typename T = void> T OnHPChange() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1664678))(this);
	}
	template <typename T = float> T GetCameraRotateRate() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1664808))(this);
	}
	template <typename T = void> T CancelUseItem(uint64_t itemID) {
		return ((T (*)(Pawn*, uint64_t))(Il2CppBase() + 0x166499C))(this, itemID);
	}
	template <typename T = void> T OnDiscardWeapon(int32_t inWeaponItemID, unsigned char inWeaponSlot, int32_t actorId) {
		return ((T (*)(Pawn*, int32_t, unsigned char, int32_t))(Il2CppBase() + 0x1664A80))(this, inWeaponItemID, inWeaponSlot, actorId);
	}
	template <typename T = void> T OnFlashBangExplode(int32_t weaponItemID, float lifespanScale, float intensity) {
		return ((T (*)(Pawn*, int32_t, float, float))(Il2CppBase() + 0x1664B6C))(this, weaponItemID, lifespanScale, intensity);
	}
	template <typename T = void> T OnRepulseGrenadeExplode(uint64_t instigatorPlayerID, Il2CppVector3 sourcePos, float repulseDuration, float repulseSpeedScale) {
		return ((T (*)(Pawn*, uint64_t, Il2CppVector3, float, float))(Il2CppBase() + 0x1664C5C))(this, instigatorPlayerID, sourcePos, repulseDuration, repulseSpeedScale);
	}
	template <typename T = bool> T CouldPlaySound() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1664D68))(this);
	}
	template <typename T = void> T OnDie(uint32_t inKillerID, uint64_t KillWeaponID) {
		return ((T (*)(Pawn*, uint32_t, uint64_t))(Il2CppBase() + 0x1664E38))(this, inKillerID, KillWeaponID);
	}
	template <typename T = void> T MirrorWeapon() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1664F24))(this);
	}
	template <typename T = void> T FullAmmo() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1665094))(this);
	}
	template <typename T = void> T SyncWeaponBulletInfo(Il2CppArray<uintptr_t>* infoSet, int32_t count) {
		return ((T (*)(Pawn*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x1665174))(this, infoSet, count);
	}
	template <typename T = uintptr_t> T get_CachedAimAssistanceCollider() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1665288))(this);
	}
	template <typename T = float> T get_HitScoreTime() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1665338))(this);
	}
	template <typename T = void> T set_HitScoreTime(float value) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x1665340))(this, value);
	}
	template <typename T = Il2CppVector3> T get_LastDamageSourcePos() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1665348))(this);
	}
	template <typename T = void> T set_LastDamageSourcePos(Il2CppVector3 value) {
		return ((T (*)(Pawn*, Il2CppVector3))(Il2CppBase() + 0x166535C))(this, value);
	}
	template <typename T = float> T get_HitScoreIntervalTime() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1665368))(this);
	}
	template <typename T = void> T set_HitScoreIntervalTime(float value) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x1665370))(this, value);
	}
	template <typename T = float> T get_LastPlayBloodEffectTime() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1665378))(this);
	}
	template <typename T = void> T set_LastPlayBloodEffectTime(float value) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x1665380))(this, value);
	}
	template <typename T = bool> T get_ShouldUpdateJumpBob() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1665388))(this);
	}
	template <typename T = void> T set_ShouldUpdateJumpBob(bool value) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x1665390))(this, value);
	}
	template <typename T = float> T get_CurrentEyeHeight() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1665398))(this);
	}
	template <typename T = void> T set_CurrentEyeHeight(float value) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x16653A0))(this, value);
	}
	template <typename T = float> T get_StandingEyeHeight() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16388E0))(this);
	}
	template <typename T = float> T get_GoliathStandingEyeHeight() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16653A8))(this);
	}
	template <typename T = Il2CppVector3> T get_StandingEyePosition() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16653C4))(this);
	}
	template <typename T = Il2CppVector3> T get_CurrentEyePosition() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x164927C))(this);
	}
	template <typename T = uintptr_t> T get_ViewType() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162CBA4))(this);
	}
	template <typename T = void> T set_ViewType(uintptr_t value) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x166547C))(this, value);
	}
	template <typename T = float> T get_LastSlideVolumeSpeed() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1665484))(this);
	}
	template <typename T = void> T set_LastSlideVolumeSpeed(float value) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x165B7A8))(this, value);
	}
	template <typename T = bool> T get_IsInCocussion() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1633558))(this);
	}
	template <typename T = void> T PlayConcussionSound(bool isPlay) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x166548C))(this, isPlay);
	}
	template <typename T = void> T PlayExplodeSound() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1665674))(this);
	}
	template <typename T = void> T BeginConcussionEffect(float duration, bool needToShowWhiteScreenEffect, float whiteScreenIntensityScale) {
		return ((T (*)(Pawn*, float, bool, float))(Il2CppBase() + 0x1665814))(this, duration, needToShowWhiteScreenEffect, whiteScreenIntensityScale);
	}
	template <typename T = void> T EndConcussionEffect() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1665F90))(this);
	}
	template <typename T = bool> T get_IsInFlashEffect() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1633538))(this);
	}
	template <typename T = void> T BeginFlashEffect(float duration) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x1666130))(this, duration);
	}
	template <typename T = void> T EndFlashEffect() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x166621C))(this);
	}
	template <typename T = bool> T get_IsInEMP() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1633518))(this);
	}
	template <typename T = void> T BeginEMPEffect(float duration, uintptr_t range) {
		return ((T (*)(Pawn*, float, uintptr_t))(Il2CppBase() + 0x16662F8))(this, duration, range);
	}
	template <typename T = void> T EndEMPEffect() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16666C4))(this);
	}
	template <typename T = void> T CheckBlind() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1665DF4))(this);
	}
	template <typename T = bool> T get_IsInterferedByDrone() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1633574))(this);
	}
	template <typename T = void> T set_IsInterferedByDrone(bool value) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x1666930))(this, value);
	}
	template <typename T = void> T EndEffectsOnDead() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x165D758))(this);
	}
	template <typename T = void> T UpdateEffectTime(float dt) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x1641F24))(this, dt);
	}
	template <typename T = bool> T IsInEnemySmoke() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1666938))(this);
	}
	template <typename T = bool> T IsInAllySmoke() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1666AE8))(this);
	}
	template <typename T = bool> T get_HasOcclusionEffect() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1666C98))(this);
	}
	template <typename T = void> T set_HasOcclusionEffect(bool value) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x1666CA0))(this, value);
	}
	template <typename T = void> T OnEndMatch() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1666CA8))(this);
	}
	template <typename T = uintptr_t> T FindMeleeAttackTarget(float rangeFactor) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x1666D90))(this, rangeFactor);
	}
	template <typename T = void> T UpdateGrenadeAttackTarget() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1666FD4))(this);
	}
	template <typename T = void> T UpdateAnimationCull(uintptr_t mode) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x166709C))(this, mode);
	}
	template <typename T = void> T PlayReviveAnim() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16671EC))(this);
	}
	template <typename T = float> T PlayRotationAnim() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1667578))(this);
	}
	template <typename T = float> T StopRotationAnim() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x166782C))(this);
	}
	template <typename T = void> T RecoverCrossHair() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1667968))(this);
	}
	template <typename T = void> T ProneLockTips() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1667B28))(this);
	}
	template <typename T = float> T PlayPickUpAnim(int32_t pickItemId, bool isWeapon, bool isPlayForward) {
		return ((T (*)(Pawn*, int32_t, bool, bool))(Il2CppBase() + 0x1667DC8))(this, pickItemId, isWeapon, isPlayForward);
	}
	template <typename T = void> T SetHorizontalRotationLimit(float YRotationLimitMin, float YRotationLimitMax) {
		return ((T (*)(Pawn*, float, float))(Il2CppBase() + 0x16682C0))(this, YRotationLimitMin, YRotationLimitMax);
	}
	template <typename T = void> T SetVerticalRotationLimit(float XRotationLimitMin, float XRotationLimitMax) {
		return ((T (*)(Pawn*, float, float))(Il2CppBase() + 0x16683C8))(this, XRotationLimitMin, XRotationLimitMax);
	}
	template <typename T = bool> T BornShowOnRadarForEnemy() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16684D0))(this);
	}
	template <typename T = bool> T CanShowOnRadarForEnemy() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16685A0))(this);
	}
	template <typename T = bool> T get_NeedShowOnMap() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x166869C))(this);
	}
	template <typename T = void> T set_NeedShowOnMap(bool value) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x16686A4))(this, value);
	}
	template <typename T = Il2CppString*> T TacticalRadarMySelfSprite(uintptr_t eTacticalPawnState) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x16686AC))(this, eTacticalPawnState);
	}
	template <typename T = bool> T IsPawnSpeaking() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16688B0))(this);
	}
	template <typename T = bool> T IsGoliath() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1634BC8))(this);
	}
	template <typename T = void> T CloseGoliathHUD() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1668A64))(this);
	}
	template <typename T = bool> T get_IsSuit() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1668E1C))(this);
	}
	template <typename T = void> T set_IsSuit(bool value) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x1668E24))(this, value);
	}
	template <typename T = Il2CppString*> T TacticalRadarViewTeammateSprite(uintptr_t eTacticalPawnState) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x1668E54))(this, eTacticalPawnState);
	}
	template <typename T = Il2CppString*> T TacticalRadarViewEnemySprite() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x166902C))(this);
	}
	template <typename T = bool> T NeedToShowEnemySpriteOnRadar() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x166913C))(this);
	}
	template <typename T = int32_t> T TacticalRadarViewSpriteDepth(uintptr_t spriteType) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x166920C))(this, spriteType);
	}
	template <typename T = bool> T CanBeDamagedBy(uintptr_t pawn) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x16692F4))(this, pawn);
	}
	template <typename T = bool> T IsOnNoneDriveCar() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16694B0))(this);
	}
	template <typename T = bool> T IsSameCamp(uintptr_t pawn) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x1669678))(this, pawn);
	}
	template <typename T = uintptr_t> T get_PawnCategoryType() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1669970))(this);
	}
	template <typename T = void> T SetEyeHeightChange(float eyeChangeHeight) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x1669978))(this, eyeChangeHeight);
	}
	template <typename T = void> T SetEyeHeight(float newEyeHeight, float inLerpTime) {
		return ((T (*)(Pawn*, float, float))(Il2CppBase() + 0x1659598))(this, newEyeHeight, inLerpTime);
	}
	template <typename T = void> T EyeHeightLerpTick() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1669B34))(this);
	}
	template <typename T = void> T PlayVibrate() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1669EC8))(this);
	}
	template <typename T = bool> T ShouldUpdateFireBlockPos() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1669F90))(this);
	}
	template <typename T = bool> T IsAIPawn() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x166A188))(this);
	}
	template <typename T = uintptr_t> T GetMotionDirection() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x166A258))(this);
	}
	template <typename T = void> T BeginRootMotion(Il2CppString* animName, Il2CppVector3 destPos, float blendTime, float fixedTime, float speed) {
		return ((T (*)(Pawn*, Il2CppString*, Il2CppVector3, float, float, float))(Il2CppBase() + 0x166A56C))(this, animName, destPos, blendTime, fixedTime, speed);
	}
	template <typename T = void> T BeginRootMotion_1(Il2CppString* animName, Il2CppVector3 destPos, float blendTime, float fixedTime) {
		return ((T (*)(Pawn*, Il2CppString*, Il2CppVector3, float, float))(Il2CppBase() + 0x166A728))(this, animName, destPos, blendTime, fixedTime);
	}
	template <typename T = bool> T IsRootMotionRuning() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x166A86C))(this);
	}
	template <typename T = bool> T IsRootMotionRotation() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x166A9C8))(this);
	}
	template <typename T = void> T OnRootMotionEnd(bool interrupt) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x166AB24))(this, interrupt);
	}
	template <typename T = void> T OnRootMotionCrossFade() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x166ABF4))(this);
	}
	template <typename T = void> T OnRootMotionStop(bool isClimbOverLandSky) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x166ACBC))(this, isClimbOverLandSky);
	}
	template <typename T = void> T OnSimulateStartSprint() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x166AD8C))(this);
	}
	template <typename T = void> T OnSimulateStopSprint() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x166AE80))(this);
	}
	template <typename T = float> T get_SwimVerticalSpeed() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x166AF74))(this);
	}
	template <typename T = bool> T IsUnderWater() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x166AF7C))(this);
	}
	template <typename T = bool> T IsUnderWaterSurface(float distance) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x166B04C))(this, distance);
	}
	template <typename T = void> T OnOperatorFireModeChanged() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x166B128))(this);
	}
	template <typename T = bool> T get_IsHighThrowFire() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x166B26C))(this);
	}
	template <typename T = void> T set_IsHighThrowFire(bool value) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x166B274))(this, value);
	}
	template <typename T = void> T OnThrowTypeChanged(bool isHighThrow) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x166B27C))(this, isHighThrow);
	}
	template <typename T = void> T OnWeaponPartChanged(uintptr_t weapon, int32_t weaponPartCategory, bool isOpen) {
		return ((T (*)(Pawn*, uintptr_t, int32_t, bool))(Il2CppBase() + 0x166B3F0))(this, weapon, weaponPartCategory, isOpen);
	}
	template <typename T = bool> T get_IsUsingBRUlt() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x166B574))(this);
	}
	template <typename T = void> T set_IsUsingBRUlt(bool value) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x166B57C))(this, value);
	}
	template <typename T = bool> T CanUseUltSkill() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x166B708))(this);
	}
	template <typename T = bool> T CanUseStreak() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x166BA20))(this);
	}
	template <typename T = bool> T ShouldResetFirstPersonMoveSpeedMul() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x166BB98))(this);
	}
	template <typename T = void> T ProcessPassagerReachOut() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x166BC68))(this);
	}
	template <typename T = bool> T CanPassagerReachOut() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x166BD30))(this);
	}
	template <typename T = bool> T ShouldStopRotationAim() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x166BE00))(this);
	}
	template <typename T = void> T InitComponentConfig() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x166BF00))(this);
	}
	template <typename T = bool> T get_IsLean() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x166C148))(this);
	}
	template <typename T = void> T set_InSlideTackle(bool value) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x166C150))(this, value);
	}
	template <typename T = bool> T get_InSlideTackle() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x166C158))(this);
	}
	template <typename T = void> T set_UseSlideTackleSpeed(bool value) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x166C160))(this, value);
	}
	template <typename T = bool> T get_UseSlideTackleSpeed() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x166C17C))(this);
	}
	template <typename T = void> T set_InRoll(bool value) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x166C184))(this, value);
	}
	template <typename T = bool> T get_InRoll() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x166C18C))(this);
	}
	template <typename T = void> T set_UseRollSpeed(bool value) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x166C194))(this, value);
	}
	template <typename T = bool> T get_UseRollSpeed() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x166C1B0))(this);
	}
	template <typename T = bool> T CheckSlideTackle(bool isInput) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x166C1B8))(this, isInput);
	}
	template <typename T = bool> T CheckRoll(bool isInput) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x166C3E4))(this, isInput);
	}
	template <typename T = bool> T ShouldStopIK() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x166C5EC))(this);
	}
	template <typename T = void> T ResetIKWeaponHoldPoint() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x166C700))(this);
	}
	template <typename T = void> T PauseIK(float time, bool isOverride, bool forceStop) {
		return ((T (*)(Pawn*, float, bool, bool))(Il2CppBase() + 0x166C7E8))(this, time, isOverride, forceStop);
	}
	template <typename T = void> T StopIKTransitionToPause() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x166C8FC))(this);
	}
	template <typename T = void> T ForceResetIK() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x166C9E0))(this);
	}
	template <typename T = void> T PreResetGetWeaponAnimParameter() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x166CAC8))(this);
	}
	template <typename T = void> T PreResetPutWeaponAnimParameter() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x166CB90))(this);
	}
	template <typename T = void> T PrePlayUnequipWeaponAnim(int32_t actorId, int32_t itemId, float unequipTime, float speed) {
		return ((T (*)(Pawn*, int32_t, int32_t, float, float))(Il2CppBase() + 0x166CC58))(this, actorId, itemId, unequipTime, speed);
	}
	template <typename T = void> T SyncGetWeapon(bool realEquip) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x166CD50))(this, realEquip);
	}
	template <typename T = void> T SyncUnequipWeapon(bool realUnequip) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x166CF48))(this, realUnequip);
	}
	template <typename T = void> T SyncUnequipSubWeapon(bool realUnequip) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x166D1BC))(this, realUnequip);
	}
	template <typename T = bool> T get_EnableSwimming() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x166D3BC))(this);
	}
	template <typename T = bool> T get_CanSwimming() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x166D3C4))(this);
	}
	template <typename T = void> T OnStartLadder() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x166D3CC))(this);
	}
	template <typename T = void> T ResetLadder() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x166D4C4))(this);
	}
	template <typename T = void> T ForceResetRotation() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x166D9D4))(this);
	}
	template <typename T = bool> T ShouldCalBoundary() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x166DA9C))(this);
	}
	template <typename T = void> T StopAnimationTransitionBlend() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x166DB6C))(this);
	}
	template <typename T = void> T OnPreSwitchAnimatorController(uintptr_t animatorController, bool animatorControllerChanged) {
		return ((T (*)(Pawn*, uintptr_t, bool))(Il2CppBase() + 0x166DC34))(this, animatorController, animatorControllerChanged);
	}
	template <typename T = void> T OnPostSwitchAnimatorController(uintptr_t animatorController, bool isChanged) {
		return ((T (*)(Pawn*, uintptr_t, bool))(Il2CppBase() + 0x166DD40))(this, animatorController, isChanged);
	}
	template <typename T = bool> T CanUseKillStreakSkill() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x166DF5C))(this);
	}
	template <typename T = void> T DoUseKillStreakSkill(int32_t itemId) {
		return ((T (*)(Pawn*, int32_t))(Il2CppBase() + 0x166E124))(this, itemId);
	}
	template <typename T = void> T BeginBuild(uintptr_t info) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x166E53C))(this, info);
	}
	template <typename T = void> T EndBuild() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x166E640))(this);
	}
	template <typename T = void> T QuckBuild(uintptr_t info) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x166E708))(this, info);
	}
	template <typename T = void> T CancelBuild() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x166E80C))(this);
	}
	template <typename T = bool> T IsBuilding() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x166E8D4))(this);
	}
	template <typename T = bool> T IsPlayingBuildAnim() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x166E9A4))(this);
	}
	template <typename T = bool> T CheckResetWeaponAnimatorController() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x166EA74))(this);
	}
	template <typename T = uintptr_t> T GetTPAnimatorController() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x166EC60))(this);
	}
	template <typename T = void> T ForceResetTPAnimatorController() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x166EF2C))(this);
	}
	template <typename T = void> T ForceResetDefaultAnimatorController() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x166F138))(this);
	}
	template <typename T = void> T GatherTPAvatarRenderer(uintptr_t list) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x166F390))(this, list);
	}
	template <typename T = void> T PlayAnimatonInCache3PAvatar(uintptr_t animatorController, Il2CppString* animationName) {
		return ((T (*)(Pawn*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x166F47C))(this, animatorController, animationName);
	}
	template <typename T = void> T HideCache3PAvatar() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x166F588))(this);
	}
	template <typename T = Il2CppString*> T GetDumpString() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x166F668))(this);
	}
	template <typename T = void> T SetUpbodyAnimationLayer(bool isOpen) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x166FCC0))(this, isOpen);
	}
	template <typename T = bool> T GetItem(uint64_t InItemID, bool PersonalItem) {
		return ((T (*)(Pawn*, uint64_t, bool))(Il2CppBase() + 0x166FE48))(this, InItemID, PersonalItem);
	}
	template <typename T = void> T UseItem(uint64_t itemID, int32_t useItemType, float extendTime) {
		return ((T (*)(Pawn*, uint64_t, int32_t, float))(Il2CppBase() + 0x166FF3C))(this, itemID, useItemType, extendTime);
	}
	template <typename T = bool> T CanUseItem(uint64_t InItemID) {
		return ((T (*)(Pawn*, uint64_t))(Il2CppBase() + 0x167009C))(this, InItemID);
	}
	template <typename T = void> T OnRemoteUseItem(uint64_t itemId, int32_t useItemType, float extendTime) {
		return ((T (*)(Pawn*, uint64_t, int32_t, float))(Il2CppBase() + 0x167018C))(this, itemId, useItemType, extendTime);
	}
	template <typename T = void> T RemoteUseItem(uint64_t itemId, int32_t useItemType, float extendTime) {
		return ((T (*)(Pawn*, uint64_t, int32_t, float))(Il2CppBase() + 0x16702B8))(this, itemId, useItemType, extendTime);
	}
	template <typename T = void> T LocalUseItem(uint64_t itemId, int32_t useItemType, float extendTime) {
		return ((T (*)(Pawn*, uint64_t, int32_t, float))(Il2CppBase() + 0x16703CC))(this, itemId, useItemType, extendTime);
	}
	template <typename T = void> T ServerUseIndividuationItem(uint32_t itemId, Il2CppVector3 pos, Il2CppVector3 rot) {
		return ((T (*)(Pawn*, uint32_t, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x16704C0))(this, itemId, pos, rot);
	}
	template <typename T = void> T OnUseSpecialWeaponStopIndividualtion() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16709DC))(this);
	}
	template <typename T = int32_t> static T get_FloorLayerMask() {
		return ((T (*)(void *))(Il2CppBase() + 0x1670E90))(0);
	}
	template <typename T = bool> T GetFloorInfo(uintptr_t* floorInfo) {
		return ((T (*)(Pawn*, uintptr_t*))(Il2CppBase() + 0x167102C))(this, floorInfo);
	}
	template <typename T = void> T SubWeaponAttachmentActive(int32_t WeaponItemID, int32_t actorID, uint32_t skinID) {
		return ((T (*)(Pawn*, int32_t, int32_t, uint32_t))(Il2CppBase() + 0x167120C))(this, WeaponItemID, actorID, skinID);
	}
	template <typename T = void> T WeaponAttachmentChange(int32_t WeaponItemID, Il2CppList<uintptr_t>* partInfoList, uint32_t SkinID, int32_t actorID, int32_t slotID, uint32_t crossHairID) {
		return ((T (*)(Pawn*, int32_t, Il2CppList<uintptr_t>*, uint32_t, int32_t, int32_t, uint32_t))(Il2CppBase() + 0x16713C0))(this, WeaponItemID, partInfoList, SkinID, actorID, slotID, crossHairID);
	}
	template <typename T = bool> T IsPartListDifferent(Il2CppList<uintptr_t>* list_A, Il2CppList<uintptr_t>* list_B) {
		return ((T (*)(Pawn*, Il2CppList<uintptr_t>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1671A80))(this, list_A, list_B);
	}
	template <typename T = void> T ResetForReconnect() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1671C88))(this);
	}
	template <typename T = void> T OnKillEnemy(bool isHeadShotKill, int32_t weaponID) {
		return ((T (*)(Pawn*, bool, int32_t))(Il2CppBase() + 0x1671DD0))(this, isHeadShotKill, weaponID);
	}
	template <typename T = void> T OnKillEnemyCountChanged() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1671FB4))(this);
	}
	template <typename T = bool> T get_IsTakingLightingDamage() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1672124))(this);
	}
	template <typename T = void> T set_IsTakingLightingDamage(bool value) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x167212C))(this, value);
	}
	template <typename T = bool> T NeedSimulatedPlayCrouchAnim() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1672200))(this);
	}
	template <typename T = bool> T CheckInsideVehicle(Il2CppVector3 startTrace, Il2CppVector3 direction, float distance, uintptr_t impactInfo) {
		return ((T (*)(Pawn*, Il2CppVector3, Il2CppVector3, float, uintptr_t))(Il2CppBase() + 0x16722D0))(this, startTrace, direction, distance, impactInfo);
	}
	template <typename T = void> T PhysFightOff(float deltaTime) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x16728B4))(this, deltaTime);
	}
	template <typename T = void> T PhysZipline(float deltaTime) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x1672984))(this, deltaTime);
	}
	template <typename T = void> T BeginFightOff(Il2CppVector3 impluse) {
		return ((T (*)(Pawn*, Il2CppVector3))(Il2CppBase() + 0x1672A54))(this, impluse);
	}
	template <typename T = void> T SyncFPAniamtion(Il2CppArray<uintptr_t>* cachedTrans) {
		return ((T (*)(Pawn*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1672C10))(this, cachedTrans);
	}
	template <typename T = void> T OnActiviteFPAnimationSync(bool isActivate) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x1672D60))(this, isActivate);
	}
	template <typename T = void> T EquipSubWeapon() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1672EB0))(this);
	}
	template <typename T = void> T CheckStartSubWeaponFire() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1672F78))(this);
	}
	template <typename T = void> T CheckUseLeftHand() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1673040))(this);
	}
	template <typename T = void> T ResetMoveSpeed() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1673108))(this);
	}
	template <typename T = void> T RawResetMoveSpeed(Il2CppString* stateName, float speed) {
		return ((T (*)(Pawn*, Il2CppString*, float))(Il2CppBase() + 0x1673A9C))(this, stateName, speed);
	}
	template <typename T = float> T GetStateSpeed(Il2CppString* stateName, float animClipTime) {
		return ((T (*)(Pawn*, Il2CppString*, float))(Il2CppBase() + 0x1673C70))(this, stateName, animClipTime);
	}
	template <typename T = void> T ResetMoveSpeed_1(Il2CppString* stateName, float animClipTime) {
		return ((T (*)(Pawn*, Il2CppString*, float))(Il2CppBase() + 0x1673968))(this, stateName, animClipTime);
	}
	template <typename T = bool> T IsUsingSpecialWeapon() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1673E44))(this);
	}
	template <typename T = Il2CppVector3> T GetThrowWeaponStartPosition() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1674044))(this);
	}
	template <typename T = Il2CppQuaternion> T GetProjectileStartPositionOffsetRot() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16741C0))(this);
	}
	template <typename T = bool> T CanOpenDoor() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1674484))(this);
	}
	template <typename T = bool> T SwitchWeaponAttach(bool isHand) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x16746DC))(this, isHand);
	}
	template <typename T = bool> T CheckClimb() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16747B8))(this);
	}
	template <typename T = void> T TestDeadRagdoll() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1674888))(this);
	}
	template <typename T = void> T TestRagdollRevive() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1675B64))(this);
	}
	template <typename T = void> T SetServerRelevant(bool relevant) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x1675D04))(this, relevant);
	}
	template <typename T = bool> T IsLeftWeapon(int32_t actorId) {
		return ((T (*)(Pawn*, int32_t))(Il2CppBase() + 0x1676208))(this, actorId);
	}
	template <typename T = bool> T get_IsChangingFireModeTransition() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16762E0))(this);
	}
	template <typename T = bool> T ShouldIgnoreWhenEquip(int32_t actorID, int32_t weaponID, int32_t slot) {
		return ((T (*)(Pawn*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x16762E8))(this, actorID, weaponID, slot);
	}
	template <typename T = void> T AddIgnoreWeaponWhenEquip(int32_t actorID, int32_t weaponID, int32_t slot) {
		return ((T (*)(Pawn*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x1676540))(this, actorID, weaponID, slot);
	}
	template <typename T = bool> T LocalPlayerCanUseCurSkill() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16768A4))(this);
	}
	template <typename T = bool> T LocalPlayerCanCancelCurSkill() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1676BD4))(this);
	}
	template <typename T = bool> T get_IsUsingWeaponSkill() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1662AA4))(this);
	}
	template <typename T = void> T set_IsUsingWeaponSkill(bool value) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x1676CAC))(this, value);
	}
	template <typename T = void> T OnPreTouchDoor(bool isOpen, float inRotateTime) {
		return ((T (*)(Pawn*, bool, float))(Il2CppBase() + 0x1676E30))(this, isOpen, inRotateTime);
	}
	template <typename T = bool> T get_IsOpenDoor() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1677148))(this);
	}
	template <typename T = void> T set_IsChangingFireMode(bool value) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x1677194))(this, value);
	}
	template <typename T = bool> T get_IsChangingFireMode() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16771AC))(this);
	}
	template <typename T = bool> T CheckSetServerPosition(Il2CppVector3 serverPostion) {
		return ((T (*)(Pawn*, Il2CppVector3))(Il2CppBase() + 0x16771B4))(this, serverPostion);
	}
	template <typename T = bool> T InInPickupItem(int32_t itemId) {
		return ((T (*)(Pawn*, int32_t))(Il2CppBase() + 0x16772AC))(this, itemId);
	}
	template <typename T = bool> T get_InPickup() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1677384))(this);
	}
	template <typename T = void> T OnStartAirCraft() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167738C))(this);
	}
	template <typename T = bool> T get_EnableAnimatorLOD() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1677480))(this);
	}
	template <typename T = bool> T get_IsCanBeQuickKnife() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16774BC))(this);
	}
	template <typename T = bool> T get_ShouldCheckProneInWater() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16774C4))(this);
	}
	template <typename T = void> T ResetRootMotion() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16774CC))(this);
	}
	template <typename T = void> T BRSoundSwitchGroupName(uint32_t teamSeatID) {
		return ((T (*)(Pawn*, uint32_t))(Il2CppBase() + 0x1639100))(this, teamSeatID);
	}
	template <typename T = bool> T get_IsCuringByMedicalStation() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x165DE6C))(this);
	}
	template <typename T = void> T set_IsCuringByMedicalStation(bool value) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x1677618))(this, value);
	}
	template <typename T = void> T ShowMedicalStationCuringEffect() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1677620))(this);
	}
	template <typename T = void> T HideMedicalStationCuringEffect() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x165DE74))(this);
	}
	template <typename T = void> T PlayUltEffect(uintptr_t config) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x167786C))(this, config);
	}
	template <typename T = void> T StopUltEffect() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1678220))(this);
	}
	template <typename T = void> T UpdateSprintLean(bool isLean, float leanValue) {
		return ((T (*)(Pawn*, bool, float))(Il2CppBase() + 0x1678550))(this, isLean, leanValue);
	}
	template <typename T = void> T set_ShowVest(bool value) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x1678660))(this, value);
	}
	template <typename T = void> T ResetReSpawnPhysicalState() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1678664))(this);
	}
	template <typename T = void> T OnReSpawnPlayer() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16787F8))(this);
	}
	template <typename T = void> T OnGodFlagChange(bool newFlag) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x1678B44))(this, newFlag);
	}
	template <typename T = void> T CancelSave() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1678C14))(this);
	}
	template <typename T = bool> T IsCanCheckAutoChangeClip() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1678CDC))(this);
	}
	template <typename T = Il2CppVector3> T GetEyeHeight() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1678DC8))(this);
	}
	template <typename T = bool> T IsNearlyObstacle(float length) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x1679160))(this, length);
	}
	template <typename T = bool> T IsNeedResolveWeaponJitter() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16793CC))(this);
	}
	template <typename T = void> T OnPreparation() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167949C))(this);
	}
	template <typename T = float> T GetDistanceToPawn(uintptr_t targetPos) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x16795F0))(this, targetPos);
	}
	template <typename T = void> T PawnStandOnGroundWhenSpawn() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16798CC))(this);
	}
	template <typename T = bool> T GetHasMultyThrowWeapon() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1679A00))(this);
	}
	template <typename T = void> T RefreshHasMultyThrowWeapon() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16789CC))(this);
	}
	template <typename T = bool> T IsCanBeStick() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1679AD8))(this);
	}
	template <typename T = void> T CancelPreparing() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1679BA8))(this);
	}
	template <typename T = bool> T CheckCanInteractiveLevelObject() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1679D18))(this);
	}
	template <typename T = bool> T IgnoreRadarEdge() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1679DFC))(this);
	}
	template <typename T = bool> T IgnoreFHJCheck() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1679ECC))(this);
	}
	template <typename T = uintptr_t> T get_ModelCollider() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1679F9C))(this);
	}
	template <typename T = void> T SetPawnColliderData(uintptr_t colliderData) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x1639B2C))(this, colliderData);
	}
	template <typename T = void> T SetColliderEnabled(bool enabled) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x1638F78))(this, enabled);
	}
	template <typename T = bool> T CheckColliderEnabled() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1638DAC))(this);
	}
	template <typename T = float> T get_StepOffset() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167A14C))(this);
	}
	template <typename T = float> T get_Radius() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167A188))(this);
	}
	template <typename T = float> T get_Height() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167A1CC))(this);
	}
	template <typename T = Il2CppVector3> T get_CenterOffset() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167A210))(this);
	}
	template <typename T = void> T InitCharacterController() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163868C))(this);
	}
	template <typename T = bool> T get_HasCharacterController() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162E2DC))(this);
	}
	template <typename T = void> T InitPawnCharacterController() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167A298))(this);
	}
	template <typename T = uintptr_t> T get_CachedCharController() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162E2E4))(this);
	}
	template <typename T = bool> T get_HasBodyCharacterController() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167A400))(this);
	}
	template <typename T = uintptr_t> T get_BodyCharacterController() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167A408))(this);
	}
	template <typename T = bool> T get_HasLegCharacterController() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167A7FC))(this);
	}
	template <typename T = uintptr_t> T get_LegCharacterController() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167A804))(this);
	}
	template <typename T = float> T get_StandCharControllerHeight() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167AC90))(this);
	}
	template <typename T = float> T get_StandCharControllerRadius() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167AC98))(this);
	}
	template <typename T = float> T get_CrouchCharControllerHight() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167ACA4))(this);
	}
	template <typename T = float> T get_SlideCharControllerHight() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167ACAC))(this);
	}
	template <typename T = float> T get_ProneCharControllerHight() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167ACB4))(this);
	}
	template <typename T = float> T get_ProneCharControllerRadius() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167ACBC))(this);
	}
	template <typename T = float> T get_SwimCharControllerHight() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167ACC8))(this);
	}
	template <typename T = float> T get_GrapRushCharControllerHight() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167ACD0))(this);
	}
	template <typename T = float> T get_GoliathStandCharControllerHeight() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167ACD8))(this);
	}
	template <typename T = float> T get_GoliathStandCharControllerRadius() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167ACE0))(this);
	}
	template <typename T = void> T SetCharacterColliderHeight(float newHeight) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x1639DB4))(this, newHeight);
	}
	template <typename T = void> T SetCharacterColliderRadius(float radius) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x1639F64))(this, radius);
	}
	template <typename T = void> T ResetCharacterColliderData() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167ACE8))(this);
	}
	template <typename T = float> T get_PeripheralVision() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167AEA8))(this);
	}
	template <typename T = void> T set_PeripheralVision(float value) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x167AEB0))(this, value);
	}
	template <typename T = float> T get_SightRadius() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167AEB8))(this);
	}
	template <typename T = void> T set_SightRadius(float value) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x167AEC0))(this, value);
	}
	template <typename T = float> T get_LadderEnterFromTopTime() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167AEC8))(this);
	}
	template <typename T = float> T get_LadderClimbFromTopTime() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167AED0))(this);
	}
	template <typename T = bool> T get_AllowDownToLadder() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167AED8))(this);
	}
	template <typename T = float> T get_LadderClimbTopTime() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167AEE0))(this);
	}
	template <typename T = float> T get_ProneValidXAngle() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167AEE8))(this);
	}
	template <typename T = float> T get_ProneValidBodyLength() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167AEF0))(this);
	}
	template <typename T = float> T get_ProneValidPhysicsCastRadius() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167AEF8))(this);
	}
	template <typename T = float> T get_JumpMeleeMinHeight() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167AF00))(this);
	}
	template <typename T = float> T get_Gravity() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167AF08))(this);
	}
	template <typename T = float> T get_JumpLandHeight() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167AF10))(this);
	}
	template <typename T = float> T get_SwimPutWeaponTime() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167AF18))(this);
	}
	template <typename T = float> T get_SwimGetWeaponTime() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167AF20))(this);
	}
	template <typename T = float> T get_SwimLeftHandLimitUpwardAngle() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167AF28))(this);
	}
	template <typename T = float> T get_MaxClimbClientForceMoveDistance() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167AF30))(this);
	}
	template <typename T = float> T get_CrouchMoveToStandTransitionTime() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167AF38))(this);
	}
	template <typename T = float> T get_StandMoveToCrouchTransitionTime() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167AF40))(this);
	}
	template <typename T = float> T get_Prone1PMidStopTime() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167AF48))(this);
	}
	template <typename T = float> T get_ProneCrouchTranstionTime() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167AF50))(this);
	}
	template <typename T = float> T get_StandProneTranstionTime() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167AF74))(this);
	}
	template <typename T = float> T get_RecoverRotationSpeed() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167AF7C))(this);
	}
	template <typename T = float> T get_RecoverMoveRotationSpeed() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167AF84))(this);
	}
	template <typename T = float> T get_MaxAngleYLeftDelta() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167AF8C))(this);
	}
	template <typename T = float> T get_MaxAngleYRightDelta() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167AF94))(this);
	}
	template <typename T = float> T get_MaxAnglePessnagerTurnDelta() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167AF9C))(this);
	}
	template <typename T = float> T get_MaxAngleMoveTurnDelta() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167AFA4))(this);
	}
	template <typename T = float> T get_CrouchingEyeHeight() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1659BB8))(this);
	}
	template <typename T = float> T get_ProneingEyeHeight() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1659BB0))(this);
	}
	template <typename T = float> T get_LandHardStandTime() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167AFAC))(this);
	}
	template <typename T = float> T get_FallingLandTime() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167AFB4))(this);
	}
	template <typename T = float> T get_DropDownTime() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167AFBC))(this);
	}
	template <typename T = float> T get_LadderSpeed() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167AFC4))(this);
	}
	template <typename T = float> T get_VerticalRoationLimitMin() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167AFCC))(this);
	}
	template <typename T = float> T get_VerticalRoationLimitMax() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167AFD4))(this);
	}
	template <typename T = float> T get_ReachTargetTime() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167AFDC))(this);
	}
	template <typename T = float> T GetMaxForceSimulateDistance() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167AFE4))(this);
	}
	template <typename T = float> T GetMaxForceSimulateDistance_1(uintptr_t serverState) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x167B0D0))(this, serverState);
	}
	template <typename T = void> T InitAnim() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167B1EC))(this);
	}
	template <typename T = void> T PostInitAnim() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167B3A8))(this);
	}
	template <typename T = bool> T get_UseSlowWalk() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167B680))(this);
	}
	template <typename T = void> T set_UseSlowWalk(bool value) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x167B688))(this, value);
	}
	template <typename T = bool> T get_IsCurrentAnimationActive() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167B690))(this);
	}
	template <typename T = void> T SetAnimationActive(bool isActive) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x165E54C))(this, isActive);
	}
	template <typename T = void> T ToggleAnimationActive() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167BB24))(this);
	}
	template <typename T = void> T PlayAnimationStateWithOffset(Il2CppString* stateName, float offsetTime) {
		return ((T (*)(Pawn*, Il2CppString*, float))(Il2CppBase() + 0x167BC08))(this, stateName, offsetTime);
	}
	template <typename T = void> T FadeToAnimState(Il2CppString* stateName, float fadeTime) {
		return ((T (*)(Pawn*, Il2CppString*, float))(Il2CppBase() + 0x167BD78))(this, stateName, fadeTime);
	}
	template <typename T = void> T FadeToAnimState_1(int32_t paramID, float fadeTime) {
		return ((T (*)(Pawn*, int32_t, float))(Il2CppBase() + 0x167BEF8))(this, paramID, fadeTime);
	}
	template <typename T = void> T FadeToAnimState_2(int32_t stateNameHash, float fadeTime, int32_t layer, float fixedTime) {
		return ((T (*)(Pawn*, int32_t, float, int32_t, float))(Il2CppBase() + 0x167C068))(this, stateNameHash, fadeTime, layer, fixedTime);
	}
	template <typename T = bool> T IsAnimationInTransition(int32_t layerIndex) {
		return ((T (*)(Pawn*, int32_t))(Il2CppBase() + 0x167C1F4))(this, layerIndex);
	}
	template <typename T = void> T ResetAnimatorTrigger(int32_t paramID) {
		return ((T (*)(Pawn*, int32_t))(Il2CppBase() + 0x167C350))(this, paramID);
	}
	template <typename T = void> T ResetAllTrigger() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167C4A0))(this);
	}
	template <typename T = void> T PlayAnimation(Il2CppString* animName, float speed, bool clearIdle) {
		return ((T (*)(Pawn*, Il2CppString*, float, bool))(Il2CppBase() + 0x167C5E4))(this, animName, speed, clearIdle);
	}
	template <typename T = void> T PlayAnimation_1(int32_t animID, float speed, bool clearIdle) {
		return ((T (*)(Pawn*, int32_t, float, bool))(Il2CppBase() + 0x167C78C))(this, animID, speed, clearIdle);
	}
	template <typename T = void> T PlaySyncAnimation(int32_t animID, float speed, bool clearIdle) {
		return ((T (*)(Pawn*, int32_t, float, bool))(Il2CppBase() + 0x167C91C))(this, animID, speed, clearIdle);
	}
	template <typename T = void> T PlayAnimationResetTrigger(int32_t animID, float speed, int32_t resetID) {
		return ((T (*)(Pawn*, int32_t, float, int32_t))(Il2CppBase() + 0x167CB54))(this, animID, speed, resetID);
	}
	template <typename T = void> T PlayAnimationResetTriggerInner(Il2CppString* animName, float speed, Il2CppString* resetName) {
		return ((T (*)(Pawn*, Il2CppString*, float, Il2CppString*))(Il2CppBase() + 0x167CD54))(this, animName, speed, resetName);
	}
	template <typename T = void> T PlayAnimationResetTriggerInner_1(int32_t animID, float speed, int32_t resetID) {
		return ((T (*)(Pawn*, int32_t, float, int32_t))(Il2CppBase() + 0x167CEF4))(this, animID, speed, resetID);
	}
	template <typename T = void> T SetAnimationValue(int32_t paramID, float inputValue) {
		return ((T (*)(Pawn*, int32_t, float))(Il2CppBase() + 0x167D094))(this, paramID, inputValue);
	}
	template <typename T = void> T SetAnimationValue_1(int32_t paramID, bool inputValue) {
		return ((T (*)(Pawn*, int32_t, bool))(Il2CppBase() + 0x16676B4))(this, paramID, inputValue);
	}
	template <typename T = void> T SetSyncAnimationValue(int32_t paramID, bool inputValue) {
		return ((T (*)(Pawn*, int32_t, bool))(Il2CppBase() + 0x167D20C))(this, paramID, inputValue);
	}
	template <typename T = void> T SetAnimationValue_2(int32_t paramID) {
		return ((T (*)(Pawn*, int32_t))(Il2CppBase() + 0x167D3C4))(this, paramID);
	}
	template <typename T = void> T SetAnimationValue_3(int32_t paramID, int32_t inputValue) {
		return ((T (*)(Pawn*, int32_t, int32_t))(Il2CppBase() + 0x167D51C))(this, paramID, inputValue);
	}
	template <typename T = bool> T AnimationParamExist(Il2CppString* paramName) {
		return ((T (*)(Pawn*, Il2CppString*))(Il2CppBase() + 0x167D694))(this, paramName);
	}
	template <typename T = bool> T ShouldSwitchAnimatorController(uintptr_t currentComponent, uintptr_t controller) {
		return ((T (*)(Pawn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x167D7F0))(this, currentComponent, controller);
	}
	template <typename T = bool> T ShouldSwitchAnimatorController_1(uintptr_t controller, bool firstPersonAnimator) {
		return ((T (*)(Pawn*, uintptr_t, bool))(Il2CppBase() + 0x167D94C))(this, controller, firstPersonAnimator);
	}
	template <typename T = void> T SwitchVehicleController(uintptr_t controller, bool firstPersonAnimator) {
		return ((T (*)(Pawn*, uintptr_t, bool))(Il2CppBase() + 0x167DBB0))(this, controller, firstPersonAnimator);
	}
	template <typename T = Il2CppString*> T GetDefaultStateName() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167DCC0))(this);
	}
	template <typename T = void> T RawSwitchAnimatorController(uintptr_t controller) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x167DDDC))(this, controller);
	}
	template <typename T = void> T SwitchAnimatorController(uintptr_t controller, bool firstPersonAnimator) {
		return ((T (*)(Pawn*, uintptr_t, bool))(Il2CppBase() + 0x167E0B0))(this, controller, firstPersonAnimator);
	}
	template <typename T = void> T OnSwitchAnimatorController(bool isChanged) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x167E52C))(this, isChanged);
	}
	template <typename T = void> T OnRePlayDeadAnim() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167EA88))(this);
	}
	template <typename T = void> T OnResetSwimmingAnimatorState() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167EB50))(this);
	}
	template <typename T = bool> T InDistanceToMainCamera(float distance) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x167EC18))(this, distance);
	}
	template <typename T = void> T PlayHitAnim(uintptr_t hitMotionDir, uintptr_t damageType) {
		return ((T (*)(Pawn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x167EE04))(this, hitMotionDir, damageType);
	}
	template <typename T = bool> T HasCloth() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167F3CC))(this);
	}
	template <typename T = void> T InitUseCloth() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163879C))(this);
	}
	template <typename T = bool> T IsUseCloth() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167F4A4))(this);
	}
	template <typename T = void> T InitCloth(uintptr_t mesh) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x1645CE8))(this, mesh);
	}
	template <typename T = void> T OnRevelentSetCloth(bool isRevelent) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x1647D94))(this, isRevelent);
	}
	template <typename T = void> T OnClearCloth() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163E300))(this);
	}
	template <typename T = bool> T IsHiddenByDieEffect() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167F57C))(this);
	}
	template <typename T = void> T SetHiddenByDieEffect(bool value) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x167F64C))(this, value);
	}
	template <typename T = void> T AddShadowbladeEffectSelf() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167F71C))(this);
	}
	template <typename T = void> T AddShadowbladeEffectFriend() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167F878))(this);
	}
	template <typename T = void> T AddShadowbladeEffectEnemy() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167F9D4))(this);
	}
	template <typename T = void> T RemoveShadowbladeEffect() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167FB30))(this);
	}
	template <typename T = uintptr_t> T get_ZeroSocketRoot() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x164C76C))(this);
	}
	template <typename T = void> T InitZeroSocketRoot() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x167FC28))(this);
	}
	template <typename T = void> T SetZeroSocketRootEnable(bool bEnable) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x168017C))(this, bEnable);
	}
	template <typename T = void> T ClearZeroSocketRoot() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163DC68))(this);
	}
	template <typename T = void> T OnOpenAimSolveJitter(uintptr_t currentWeapon) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x168050C))(this, currentWeapon);
	}
	template <typename T = void> T StopSolveJitter() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1680928))(this);
	}
	template <typename T = void> T OnCloseAimSolveJitter(uintptr_t currentWeapon) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x1680AC0))(this, currentWeapon);
	}
	template <typename T = Il2CppVector3> T GetWeaponOffset() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1680DD4))(this);
	}
	template <typename T = float> T get_CurrentFallingVerticalSpeed() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1680FF0))(this);
	}
	template <typename T = bool> T CheckJumpFaceWall() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1680FF8))(this);
	}
	template <typename T = bool> T CheckStandInPawn() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16814B8))(this);
	}
	template <typename T = bool> T CheckJumpInClimb() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16815D8))(this);
	}
	template <typename T = bool> T CanJump() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16816B4))(this);
	}
	template <typename T = void> T LimitJump() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1681BE4))(this);
	}
	template <typename T = void> T LimitJumpHornzontalSpeed() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1681DEC))(this);
	}
	template <typename T = void> T DoJump() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1681F7C))(this);
	}
	template <typename T = void> T DoFalling(float horSpeed, float verSpeed) {
		return ((T (*)(Pawn*, float, float))(Il2CppBase() + 0x16822A0))(this, horSpeed, verSpeed);
	}
	template <typename T = void> T ClearHorizontalVelocity() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1682480))(this);
	}
	template <typename T = Il2CppVector3> T NewFallVelocity(Il2CppVector3 oldVelocity, Il2CppVector3 oldAcceleration, float deltaTime) {
		return ((T (*)(Pawn*, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x1682558))(this, oldVelocity, oldAcceleration, deltaTime);
	}
	template <typename T = void> T PhysFalling_Fountian(float deltaTime) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x16826AC))(this, deltaTime);
	}
	template <typename T = void> T ProcessAirSteering(float deltaTime) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x1682AF0))(this, deltaTime);
	}
	template <typename T = void> T PhysFalling(float deltaTime) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x168302C))(this, deltaTime);
	}
	template <typename T = void> T CheckSkyFly(bool checkValidFall, float distToFloor) {
		return ((T (*)(Pawn*, bool, float))(Il2CppBase() + 0x1683A7C))(this, checkValidFall, distToFloor);
	}
	template <typename T = void> T CheckFallingDown(float deltaTime) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x1683B60))(this, deltaTime);
	}
	template <typename T = void> T FallingGround(float deltaTime) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x1683C7C))(this, deltaTime);
	}
	template <typename T = void> T ProcessFallingAnimationParameter(float deltaTime, float deltaMove) {
		return ((T (*)(Pawn*, float, float))(Il2CppBase() + 0x1684354))(this, deltaTime, deltaMove);
	}
	template <typename T = void> T LimitSimulatedClimbVerticalSpeed() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x168494C))(this);
	}
	template <typename T = void> T LimitSimualteClimbOverEyeHeight(float deltaY) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x1684C50))(this, deltaY);
	}
	template <typename T = void> T DoPhysClimbOver(float deltaTime) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x1684DC4))(this, deltaTime);
	}
	template <typename T = bool> T IsEndClimbOver(float deltaTime) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x16854AC))(this, deltaTime);
	}
	template <typename T = void> T PhysFalling_ClimbOver(float deltaTime) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x1685794))(this, deltaTime);
	}
	template <typename T = void> T ResetClimbTrigger() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1684060))(this);
	}
	template <typename T = bool> T CanClimb() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1685C38))(this);
	}
	template <typename T = void> T PlayClimbAnimation(bool isSpinting) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x1685D64))(this, isSpinting);
	}
	template <typename T = void> T DoClimbUp() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1686014))(this);
	}
	template <typename T = void> T DoClimb() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1686170))(this);
	}
	template <typename T = void> T InitClimbOver() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1686734))(this);
	}
	template <typename T = void> T PushMoveCharController(Il2CppVector3 deltaMove) {
		return ((T (*)(Pawn*, Il2CppVector3))(Il2CppBase() + 0x1686A10))(this, deltaMove);
	}
	template <typename T = void> T WalkingCharControllerMove(uintptr_t deltaMove) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x1686B60))(this, deltaMove);
	}
	template <typename T = void> T PhysWalking(float deltaTime) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x1686C6C))(this, deltaTime);
	}
	template <typename T = void> T CheckPositionNAN(Il2CppVector3 deltaMove, float deltaTime) {
		return ((T (*)(Pawn*, Il2CppVector3, float))(Il2CppBase() + 0x1688198))(this, deltaMove, deltaTime);
	}
	template <typename T = float> T CaclRampRatio() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16888B0))(this);
	}
	template <typename T = float> T CalcMaxMoveSpeedScale() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1688C10))(this);
	}
	template <typename T = float> T CalcPhysWalkingMaxMoveSpeed() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1688E2C))(this);
	}
	template <typename T = float> T CalcPhysWalkingMaxSpeed(float deltaTime, Il2CppVector3 oldVelocity) {
		return ((T (*)(Pawn*, float, Il2CppVector3))(Il2CppBase() + 0x1689094))(this, deltaTime, oldVelocity);
	}
	template <typename T = float> T GetMaxSlopeVerticalVelocity() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16892A4))(this);
	}
	template <typename T = void> T CalcSlopeVerticalVelocity(float deltaTime, float currentSpeed) {
		return ((T (*)(Pawn*, float, float))(Il2CppBase() + 0x1689374))(this, deltaTime, currentSpeed);
	}
	template <typename T = void> T CalcPhysWalkingVelocity(float deltaTime) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x16895C8))(this, deltaTime);
	}
	template <typename T = Il2CppVector3> T CaclPhysWalkingDeltaMove(float deltaTime) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x1687150))(this, deltaTime);
	}
	template <typename T = void> T ProcessFaceWallShaking(float delatTime, uintptr_t deltaMove) {
		return ((T (*)(Pawn*, float, uintptr_t))(Il2CppBase() + 0x1689C30))(this, delatTime, deltaMove);
	}
	template <typename T = void> T ProcessWalkingSlideMoveVertical(uintptr_t deltaMove) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x1689D14))(this, deltaMove);
	}
	template <typename T = void> T CalcStandUponPawnSlideVec(float deltaTime, uintptr_t deltaMove, uintptr_t slideVec) {
		return ((T (*)(Pawn*, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x1689DE4))(this, deltaTime, deltaMove, slideVec);
	}
	template <typename T = void> T ProcessWalkingFaceWallMove(float deltaTime, uintptr_t deltaMove) {
		return ((T (*)(Pawn*, float, uintptr_t))(Il2CppBase() + 0x168A0D8))(this, deltaTime, deltaMove);
	}
	template <typename T = void> T ProcessWalkingSlideMove(float deltaTime, uintptr_t deltaMove) {
		return ((T (*)(Pawn*, float, uintptr_t))(Il2CppBase() + 0x168A4A0))(this, deltaTime, deltaMove);
	}
	template <typename T = void> T CalcWalkingOnSlope(uintptr_t slideVec, uintptr_t deltaMove) {
		return ((T (*)(Pawn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x168A89C))(this, slideVec, deltaMove);
	}
	template <typename T = bool> T CheckProneValidRotation(float angleY) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x168AECC))(this, angleY);
	}
	template <typename T = void> T ProneBackMoveDeltaMove(float deltaTime, uintptr_t deltaMove, uintptr_t isBlock) {
		return ((T (*)(Pawn*, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x168B838))(this, deltaTime, deltaMove, isBlock);
	}
	template <typename T = void> T ProcessPhysWalkingDeltaMove(float deltaTime, uintptr_t deltaMove) {
		return ((T (*)(Pawn*, float, uintptr_t))(Il2CppBase() + 0x168BFFC))(this, deltaTime, deltaMove);
	}
	template <typename T = void> T TrySlipLowWall(float deltaTime, Il2CppVector3 preLocation) {
		return ((T (*)(Pawn*, float, Il2CppVector3))(Il2CppBase() + 0x1687D58))(this, deltaTime, preLocation);
	}
	template <typename T = void> T PhysWalkingFaceWallOptimize(float deltaTime, Il2CppVector3 preLocation) {
		return ((T (*)(Pawn*, float, Il2CppVector3))(Il2CppBase() + 0x16873D0))(this, deltaTime, preLocation);
	}
	template <typename T = void> T ProcessMoveAnimationParameter(float deltaTime) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x168C298))(this, deltaTime);
	}
	template <typename T = bool> T ProcessFalling(Il2CppVector3 oldPos) {
		return ((T (*)(Pawn*, Il2CppVector3))(Il2CppBase() + 0x168C98C))(this, oldPos);
	}
	template <typename T = bool> T IsFixContinueStandOnPawn() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x168CB0C))(this);
	}
	template <typename T = void> T ProcessStandOnPawn(Il2CppVector3 oldPos) {
		return ((T (*)(Pawn*, Il2CppVector3))(Il2CppBase() + 0x168CBDC))(this, oldPos);
	}
	template <typename T = void> T ProcessGround(Il2CppVector3 oldPos, float deltaTime) {
		return ((T (*)(Pawn*, Il2CppVector3, float))(Il2CppBase() + 0x168D2C0))(this, oldPos, deltaTime);
	}
	template <typename T = float> T GetDeltaMoveHeight(float deltaTime) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x168D3F0))(this, deltaTime);
	}
	template <typename T = void> T DoWalkingToFalling(Il2CppVector3 oldPos) {
		return ((T (*)(Pawn*, Il2CppVector3))(Il2CppBase() + 0x168D4CC))(this, oldPos);
	}
	template <typename T = bool> T EnableOptimizeTransform() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x168D60C))(this);
	}
	template <typename T = bool> T InStaticIdle() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x168D71C))(this);
	}
	template <typename T = Il2CppVector3> T get_LastCCHitNormal() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x168D8E8))(this);
	}
	template <typename T = Il2CppVector3> T get_LastCCHitPoint() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x168D904))(this);
	}
	template <typename T = Il2CppVector3> T get_LastCCHitWallPoint() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x168D920))(this);
	}
	template <typename T = bool> T get_IsStandUponPawn() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16815A8))(this);
	}
	template <typename T = bool> T get_LastCCHitCeil() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x168D93C))(this);
	}
	template <typename T = Il2CppVector3> T get_LastCeilCCHitNormal() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x168D944))(this);
	}
	template <typename T = Il2CppVector3> T get_LastCeilCCHitPoint() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x168D960))(this);
	}
	template <typename T = bool> T IsGrounded() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16508F0))(this);
	}
	template <typename T = bool> T IsSided() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x162D23C))(this);
	}
	template <typename T = bool> T IsCeiled() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16509CC))(this);
	}
	template <typename T = bool> T IsHitPawn() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x168D978))(this);
	}
	template <typename T = bool> T IsHitStaticActor() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x168DA90))(this);
	}
	template <typename T = bool> T CheckStandOnPawn(uintptr_t hit) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x168DBA8))(this, hit);
	}
	template <typename T = void> T OnControllerColliderHit(uintptr_t hit) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x168DE18))(this, hit);
	}
	template <typename T = void> T CheckPassThroughWall(Il2CppVector3 PreLocation) {
		return ((T (*)(Pawn*, Il2CppVector3))(Il2CppBase() + 0x168E980))(this, PreLocation);
	}
	template <typename T = void> T CheckFallingPassThroughWall(Il2CppVector3 PreLocation) {
		return ((T (*)(Pawn*, Il2CppVector3))(Il2CppBase() + 0x168EC38))(this, PreLocation);
	}
	template <typename T = bool> T CheckCliff(Il2CppVector3 inHitNormal) {
		return ((T (*)(Pawn*, Il2CppVector3))(Il2CppBase() + 0x16812F0))(this, inHitNormal);
	}
	template <typename T = void> T OnStateEnd() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x168ED58))(this);
	}
	template <typename T = void> T OnPhysicsStateChanged(uintptr_t preState, uintptr_t curState) {
		return ((T (*)(Pawn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x168EE20))(this, preState, curState);
	}
	template <typename T = void> T OnPhysWalkingChangedProcessBodyState(uintptr_t preState, uintptr_t curState) {
		return ((T (*)(Pawn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x168F1B4))(this, preState, curState);
	}
	template <typename T = void> T OnPhysWalkingChanged(uintptr_t preState, uintptr_t curState) {
		return ((T (*)(Pawn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x168F2C4))(this, preState, curState);
	}
	template <typename T = void> T OnPhysFightOffChanged(uintptr_t preState, uintptr_t curState) {
		return ((T (*)(Pawn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x168F49C))(this, preState, curState);
	}
	template <typename T = void> T OnPhysFallingChanged(uintptr_t preState, uintptr_t curState) {
		return ((T (*)(Pawn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x168F7A4))(this, preState, curState);
	}
	template <typename T = void> T OnPhysGravitySpikesChanged(uintptr_t preState, uintptr_t curState) {
		return ((T (*)(Pawn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x168F93C))(this, preState, curState);
	}
	template <typename T = void> T OnPhysSlideTackleChanged(uintptr_t preState, uintptr_t curState) {
		return ((T (*)(Pawn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x168FAE4))(this, preState, curState);
	}
	template <typename T = void> T OnPhysClimbChagned(uintptr_t preState, uintptr_t curState) {
		return ((T (*)(Pawn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x168FBE8))(this, preState, curState);
	}
	template <typename T = void> T OnPhysLadderChagned(uintptr_t preState, uintptr_t curState) {
		return ((T (*)(Pawn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x168FD90))(this, preState, curState);
	}
	template <typename T = void> T OnPhysGrapRushChagned(uintptr_t preState, uintptr_t curState) {
		return ((T (*)(Pawn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x16902F8))(this, preState, curState);
	}
	template <typename T = void> T OnPhysUpwardLaunchChagned(uintptr_t preState, uintptr_t curState) {
		return ((T (*)(Pawn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1690404))(this, preState, curState);
	}
	template <typename T = void> T OnPhysSprintChanged(uintptr_t preState, uintptr_t curState) {
		return ((T (*)(Pawn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1690514))(this, preState, curState);
	}
	template <typename T = void> T OnPhysRollChanged(uintptr_t preState, uintptr_t curState) {
		return ((T (*)(Pawn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1690620))(this, preState, curState);
	}
	template <typename T = void> T PhysDriving(float deltaTime) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x1690724))(this, deltaTime);
	}
	template <typename T = void> T PhysPlateformVehicleMoving(float deltaTime) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x1690810))(this, deltaTime);
	}
	template <typename T = void> T PhysBoarding(float deltaTime) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x1690E90))(this, deltaTime);
	}
	template <typename T = void> T PhysNavMeshMoving(float deltaTime) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x1690F60))(this, deltaTime);
	}
	template <typename T = void> T PhysSkydiving(float deltaTime) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x1691030))(this, deltaTime);
	}
	template <typename T = void> T PhysSwimming(float deltaTime) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x1691100))(this, deltaTime);
	}
	template <typename T = void> T PhysRoll(float deltaTime) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x16911D0))(this, deltaTime);
	}
	template <typename T = void> T PhysSprint(float deltaTime) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x1691CB4))(this, deltaTime);
	}
	template <typename T = void> T EndPhysicSprint(float deltaTime, bool attack) {
		return ((T (*)(Pawn*, float, bool))(Il2CppBase() + 0x1692174))(this, deltaTime, attack);
	}
	template <typename T = void> T PhysFollowPath(float deltaTime) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x16922D0))(this, deltaTime);
	}
	template <typename T = void> T StartRemoteControl() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1692490))(this);
	}
	template <typename T = bool> T EndRemoteControl() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1692598))(this);
	}
	template <typename T = bool> T InRemoteControl() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16926BC))(this);
	}
	template <typename T = void> T PhysRemoteControl(float deltaTime) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x1692798))(this, deltaTime);
	}
	template <typename T = void> T PhysClimb(float deltaTime) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x1692868))(this, deltaTime);
	}
	template <typename T = void> T PhysGrapRush(float deltaTime) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x1692978))(this, deltaTime);
	}
	template <typename T = void> T PhysUpwardLaunch(float deltaTime) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x1692A64))(this, deltaTime);
	}
	template <typename T = void> T PhysLadder(float deltaTime) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x1692B50))(this, deltaTime);
	}
	template <typename T = void> T PhysSlideTackle(float deltaTime) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x1692C50))(this, deltaTime);
	}
	template <typename T = void> T CharcontrollerMove(Il2CppVector3 deltaMove) {
		return ((T (*)(Pawn*, Il2CppVector3))(Il2CppBase() + 0x16938D8))(this, deltaMove);
	}
	template <typename T = void> T RequestChangeMoveState() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1693A28))(this);
	}
	template <typename T = void> T StandUp(bool immediately) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x163FA94))(this, immediately);
	}
	template <typename T = void> T CrouchForceStopTransition() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1693AF0))(this);
	}
	template <typename T = bool> T CanCrouch() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1693BD0))(this);
	}
	template <typename T = void> T StartCrouch(bool immediately, bool needPlayAnim, bool force, bool componentForce) {
		return ((T (*)(Pawn*, bool, bool, bool, bool))(Il2CppBase() + 0x165B480))(this, immediately, needPlayAnim, force, componentForce);
	}
	template <typename T = bool> T CanUnCrouch() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x165B358))(this);
	}
	template <typename T = void> T EndCrouch(bool immediately, bool setEyeHeightInImmediately, bool foce) {
		return ((T (*)(Pawn*, bool, bool, bool))(Il2CppBase() + 0x1693D30))(this, immediately, setEyeHeightInImmediately, foce);
	}
	template <typename T = void> T ServerStartCrouch() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1693F84))(this);
	}
	template <typename T = void> T SetProneStateAndRquest(bool isProne) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x1694084))(this, isProne);
	}
	template <typename T = void> T ProneForceStopTransition() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x169418C))(this);
	}
	template <typename T = void> T ChangeLocalAABB(uintptr_t aabb) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x169426C))(this, aabb);
	}
	template <typename T = void> T StartProne(bool immediately) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x16945B8))(this, immediately);
	}
	template <typename T = bool> T CanUnProne() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1681AF8))(this);
	}
	template <typename T = void> T EndProne(bool immediately, bool setEyeHeightInImmediately, bool needPlayAnim) {
		return ((T (*)(Pawn*, bool, bool, bool))(Il2CppBase() + 0x16948EC))(this, immediately, setEyeHeightInImmediately, needPlayAnim);
	}
	template <typename T = bool> T IsInCrouchProneTransition() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1694B1C))(this);
	}
	template <typename T = bool> T CanProne() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1694C38))(this);
	}
	template <typename T = void> T ServerForceStartProne() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1694D5C))(this);
	}
	template <typename T = void> T ServerForceEndProne() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1694E58))(this);
	}
	template <typename T = void> T ServerForceStartCrouch() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1694F6C))(this);
	}
	template <typename T = void> T ServerForceEndCrouch() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1695060))(this);
	}
	template <typename T = void> T SyncDirection(Il2CppVector3 SimulateDirection, bool bForceSync) {
		return ((T (*)(Pawn*, Il2CppVector3, bool))(Il2CppBase() + 0x1695164))(this, SimulateDirection, bForceSync);
	}
	template <typename T = unsigned char> T GetSyncExtraByte() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1695254))(this);
	}
	template <typename T = uintptr_t> T get_AvatarComposer() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1695420))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetRenderers(uintptr_t type) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x1695438))(this, type);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetRenderers_1(Il2CppArray<uintptr_t>* types) {
		return ((T (*)(Pawn*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1695548))(this, types);
	}
	template <typename T = void> T PushInterimRenderer(Il2CppArray<uintptr_t>* inRenderer) {
		return ((T (*)(Pawn*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x16956E4))(this, inRenderer);
	}
	template <typename T = void> T RemoveRenderer(Il2CppArray<uintptr_t>* inRenderer) {
		return ((T (*)(Pawn*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x16961E0))(this, inRenderer);
	}
	template <typename T = void> T RefreshAllRenderer() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1695C1C))(this);
	}
	template <typename T = void> T RefreshPawnRenderer() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1696534))(this);
	}
	template <typename T = void> T RefreshIndividuationRenderers(Il2CppList<uintptr_t>* list) {
		return ((T (*)(Pawn*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x16969D0))(this, list);
	}
	template <typename T = void> T RefreshBagRenderer() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1696AEC))(this);
	}
	template <typename T = void> T RefreshVestRenderer() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1696CF0))(this);
	}
	template <typename T = void> T RefreshWeaponRenderer() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1696EF4))(this);
	}
	template <typename T = void> T RefreshBagWeaponRenderer() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1697144))(this);
	}
	template <typename T = void> T RefreshSkydivingPendantRenderer() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16972EC))(this);
	}
	template <typename T = void> T RefreshRenderer(uintptr_t type, Il2CppList<uintptr_t>* renderers) {
		return ((T (*)(Pawn*, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x16973C0))(this, type, renderers);
	}
	template <typename T = void> T OnRendererChange() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16974FC))(this);
	}
	template <typename T = void> T SetPawnDefaultState(bool enable) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x162C648))(this, enable);
	}
	template <typename T = void> T ClearPawnDefaultState(uintptr_t mesh) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x165A7EC))(this, mesh);
	}
	template <typename T = bool> T EnableGPUSkin() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16975F4))(this);
	}
	template <typename T = void> T SetPartVisible(Il2CppString* partName, bool visible) {
		return ((T (*)(Pawn*, Il2CppString*, bool))(Il2CppBase() + 0x16976C4))(this, partName, visible);
	}
	template <typename T = void> T ChangePartMaterial(Il2CppArray<uintptr_t>* partNames, int32_t matAssetID) {
		return ((T (*)(Pawn*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x16978F8))(this, partNames, matAssetID);
	}
	template <typename T = void> T ChangeTempPartMaterial(Il2CppArray<uintptr_t>* partNames, int32_t matAssetID) {
		return ((T (*)(Pawn*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x1697AF0))(this, partNames, matAssetID);
	}
	template <typename T = void> T OnWeaponAttachmentLoadComplete() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1697CE8))(this);
	}
	template <typename T = bool> T GetWeaponHiddenState() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1697DD0))(this);
	}
	template <typename T = void> T ClearCurrentWeaponAttachment() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1697F34))(this);
	}
	template <typename T = void> T CreateWeaponAttachment(int32_t weaponID, Il2CppList<uintptr_t>* partInfoList, uint32_t SkinID, int32_t actorID, int32_t weaponLevel, uint32_t crossHairID) {
		return ((T (*)(Pawn*, int32_t, Il2CppList<uintptr_t>*, uint32_t, int32_t, int32_t, uint32_t))(Il2CppBase() + 0x16982BC))(this, weaponID, partInfoList, SkinID, actorID, weaponLevel, crossHairID);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetBagWeapon() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1698604))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetBagWeaponRenderers() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16986D4))(this);
	}
	template <typename T = void> T SetBackWeaponHidden(bool isHidden) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x16987A4))(this, isHidden);
	}
	template <typename T = void> T RefreshWeaponVisible() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1647B08))(this);
	}
	template <typename T = void> T SetWeaponHidden(bool isHidden) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x1698874))(this, isHidden);
	}
	template <typename T = void> T OnSubWeaponDeactivate(uintptr_t weapon) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x1698A60))(this, weapon);
	}
	template <typename T = void> T DeactivateSubWeapon() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1698B30))(this);
	}
	template <typename T = void> T DeactivateSubWeaponAttachment() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1632548))(this);
	}
	template <typename T = bool> T IsActiveSubWeaponAttachment() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1698BF8))(this);
	}
	template <typename T = bool> T HasWeaponToSwitch(uintptr_t type) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x1698D64))(this, type);
	}
	template <typename T = bool> T HasWeaponToSwitch_1(int32_t itemId, unsigned char slot, int32_t actorID) {
		return ((T (*)(Pawn*, int32_t, unsigned char, int32_t))(Il2CppBase() + 0x1698F04))(this, itemId, slot, actorID);
	}
	template <typename T = void> T TrySwitchWeapon(uintptr_t type) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x1699148))(this, type);
	}
	template <typename T = uintptr_t> T GetSwitchWeapon(int32_t itemId, unsigned char slot, int32_t actorID, int32_t itemLevel, uint32_t skinID) {
		return ((T (*)(Pawn*, int32_t, unsigned char, int32_t, int32_t, uint32_t))(Il2CppBase() + 0x169973C))(this, itemId, slot, actorID, itemLevel, skinID);
	}
	template <typename T = void> T ForceSwitchWeaponDirectly(int32_t itemId, unsigned char slot, int32_t actorID, int32_t itemLevel, uint32_t skinID) {
		return ((T (*)(Pawn*, int32_t, unsigned char, int32_t, int32_t, uint32_t))(Il2CppBase() + 0x1699A8C))(this, itemId, slot, actorID, itemLevel, skinID);
	}
	template <typename T = void> T TrySwitchWeapon_1(int32_t itemId, unsigned char slot, int32_t actorID, int32_t itemLevel, uint32_t skinID, bool isServerData) {
		return ((T (*)(Pawn*, int32_t, unsigned char, int32_t, int32_t, uint32_t, bool))(Il2CppBase() + 0x169A4BC))(this, itemId, slot, actorID, itemLevel, skinID, isServerData);
	}
	template <typename T = bool> T get_IsWeaponSwitching() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1694D54))(this);
	}
	template <typename T = void> T set_IsWeaponSwitching(bool value) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x169A680))(this, value);
	}
	template <typename T = bool> T CanChangeWeapon() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x169A688))(this);
	}
	template <typename T = void> T OnPreTrySwitchWeapon() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1699EAC))(this);
	}
	template <typename T = void> T TrySwitchWeapon_2(uintptr_t weapon, bool isServerNtfWeapon) {
		return ((T (*)(Pawn*, uintptr_t, bool))(Il2CppBase() + 0x16992DC))(this, weapon, isServerNtfWeapon);
	}
	template <typename T = bool> T CheckSwitchWeapon(bool isServerNtfWeapon) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x169AB98))(this, isServerNtfWeapon);
	}
	template <typename T = bool> T UltWeaponUsingCheck(uintptr_t toWeapon) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x169A8B8))(this, toWeapon);
	}
	template <typename T = bool> T DoSwitchWeapon() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1699FBC))(this);
	}
	template <typename T = void> T ClearPendingAction() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x1655EF0))(this);
	}
	template <typename T = bool> T CancelSwitchWeapon() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x169B018))(this);
	}
	template <typename T = bool> T PullOutWeapon() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x169B1D0))(this);
	}
	template <typename T = void> T GiveWeaponAttachment() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x165B7B0))(this);
	}
	template <typename T = bool> T NeedCreateWeaponAttachment(int32_t wantWeaponID) {
		return ((T (*)(Pawn*, int32_t))(Il2CppBase() + 0x16718D8))(this, wantWeaponID);
	}
	template <typename T = void> T GiveWeapon_1() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x169B2B8))(this);
	}
	template <typename T = void> T OnWeaponChanged() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x169B380))(this);
	}
	template <typename T = void> T OnWeaponChangedGetVehicle() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x169B7CC))(this);
	}
	template <typename T = void> T SetDiscardItemInfo(uintptr_t data) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x169BD50))(this, data);
	}
	template <typename T = void> T ActiveDisCardItem() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x169B8E8))(this);
	}
	template <typename T = void> T AddActiveWeaponNextStateByItemID(int32_t weaponItemID, uintptr_t defaultState) {
		return ((T (*)(Pawn*, int32_t, uintptr_t))(Il2CppBase() + 0x169BE88))(this, weaponItemID, defaultState);
	}
	template <typename T = void> T OnPreWeaponActive(uintptr_t activeWeapon) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x169BFF0))(this, activeWeapon);
	}
	template <typename T = void> T OnWeaponAssetLoadComplete(int32_t actorID, int32_t itemID, int32_t meshID, bool isMeshID3P) {
		return ((T (*)(Pawn*, int32_t, int32_t, int32_t, bool))(Il2CppBase() + 0x169C24C))(this, actorID, itemID, meshID, isMeshID3P);
	}
	template <typename T = void> T OnWeaponAttachmentDeactive(uintptr_t mesh) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x169C33C))(this, mesh);
	}
	template <typename T = void> T OnWeaponAttachmentActive() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x169C40C))(this);
	}
	template <typename T = void> T OnWeaponDestroy(int32_t actorID, int32_t itemID, unsigned char slot) {
		return ((T (*)(Pawn*, int32_t, int32_t, unsigned char))(Il2CppBase() + 0x169C5A0))(this, actorID, itemID, slot);
	}
	template <typename T = void> T OnWeaponActivate() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x169C68C))(this);
	}
	template <typename T = void> T OnWeaponDeactive(uintptr_t mesh) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x169C8E0))(this, mesh);
	}
	template <typename T = void> T OnWeaponBeginState(uintptr_t stateType) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x169C9B0))(this, stateType);
	}
	template <typename T = void> T OnWeaponEndState(uintptr_t stateType) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x169CB18))(this, stateType);
	}
	template <typename T = void> T EndBagWeaponProcessing() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x169CC68))(this);
	}
	template <typename T = bool> T get_NeedDelayTriggerADS() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x169CD30))(this);
	}
	template <typename T = void> T set_NeedDelayTriggerADS(bool value) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x169CD38))(this, value);
	}
	template <typename T = bool> T get_ResetAimInput() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x169CD40))(this);
	}
	template <typename T = void> T set_ResetAimInput(bool value) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x169CD48))(this, value);
	}
	template <typename T = bool> T get_ResetAdsInput() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x169CE44))(this);
	}
	template <typename T = void> T set_ResetAdsInput(bool value) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x169CE4C))(this, value);
	}
	template <typename T = bool> T get_ResetFireInput() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x169CE64))(this);
	}
	template <typename T = void> T set_ResetFireInput(bool value) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x169CE6C))(this, value);
	}
	template <typename T = void> T ResetInput(bool flag) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x1685B38))(this, flag);
	}
	template <typename T = void> T StartFire() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x169CF7C))(this);
	}
	template <typename T = void> T StopFire() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x169D174))(this);
	}
	template <typename T = void> T SubWeaponStopFire() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x169D338))(this);
	}
	template <typename T = bool> T CanFire() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x169D474))(this);
	}
	template <typename T = void> T StartSecondaryFire() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x169DBE8))(this);
	}
	template <typename T = void> T StopSecondaryFire() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x169DD88))(this);
	}
	template <typename T = void> T ThirdPersonStartFire(int32_t inFireCompIndex, bool isAiming, bool isSingleShot, int32_t aommoCount, bool bLeftHandWeapon) {
		return ((T (*)(Pawn*, int32_t, bool, bool, int32_t, bool))(Il2CppBase() + 0x169DF30))(this, inFireCompIndex, isAiming, isSingleShot, aommoCount, bLeftHandWeapon);
	}
	template <typename T = void> T SwitchFireMode() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x169E280))(this);
	}
	template <typename T = bool> T IsAiming() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x163FC40))(this);
	}
	template <typename T = bool> T IsPlayAiming() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16557B4))(this);
	}
	template <typename T = void> T StopAllStateWhenStartAim() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x169E378))(this);
	}
	template <typename T = void> T StartAim() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x169E4DC))(this);
	}
	template <typename T = void> T StopAim() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x169E5F8))(this);
	}
	template <typename T = void> T CloseAim() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x169E73C))(this);
	}
	template <typename T = void> T CloseAimAndResetData() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x169E8A8))(this);
	}
	template <typename T = bool> T CanOpenAim() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x169EA10))(this);
	}
	template <typename T = bool> T IsNeedShowCancelAim() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x169EE10))(this);
	}
	template <typename T = bool> T IsSimulateAimming() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x169EF1C))(this);
	}
	template <typename T = bool> T IsInChangeClip() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16865B0))(this);
	}
	template <typename T = void> T TryChangeClip(bool auto_) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x169EFEC))(this, auto_);
	}
	template <typename T = void> T DoChangeClip() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x169F1C4))(this);
	}
	template <typename T = bool> T IsShouldEndChangeClip() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x169F538))(this);
	}
	template <typename T = void> T CheckWeaponAimingStateFireReset() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x169F72C))(this);
	}
	template <typename T = void> T DealwithElectric(bool isButtonDown) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x169F908))(this, isButtonDown);
	}
	template <typename T = void> T FireButtonDown() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x169FA64))(this);
	}
	template <typename T = void> T FireButtonUp() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x169FC24))(this);
	}
	template <typename T = bool> T IsNeedEnterMoveHipFire() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x169FCFC))(this);
	}
	template <typename T = bool> T GetAdsState() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x169FEA4))(this);
	}
	template <typename T = bool> T IsCanAimAssit() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16A0014))(this);
	}
	template <typename T = void> T LockControlAndSetResetFireInput(float lockTime) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x1676F7C))(this, lockTime);
	}
	template <typename T = void> T LockCheck(uintptr_t stateType, float lockTime) {
		return ((T (*)(Pawn*, uintptr_t, float))(Il2CppBase() + 0x16393AC))(this, stateType, lockTime);
	}
	template <typename T = void> T SetPawnSwtichState(uintptr_t state, bool isActive) {
		return ((T (*)(Pawn*, uintptr_t, bool))(Il2CppBase() + 0x16A025C))(this, state, isActive);
	}
	template <typename T = void> T SetLockPawnState(uintptr_t state, bool isLock) {
		return ((T (*)(Pawn*, uintptr_t, bool))(Il2CppBase() + 0x16A03B0))(this, state, isLock);
	}
	template <typename T = void> T SetLockPawnStateExcept(uintptr_t state, bool isLock) {
		return ((T (*)(Pawn*, uintptr_t, bool))(Il2CppBase() + 0x16A0504))(this, state, isLock);
	}
	template <typename T = void> T LockAllPawnState(bool isLock) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x16A0658))(this, isLock);
	}
	template <typename T = void> T LockProne_Jump_Crouch_Fire(bool isLock) {
		return ((T (*)(Pawn*, bool))(Il2CppBase() + 0x16A0784))(this, isLock);
	}
	template <typename T = bool> T IsLockState(uintptr_t state) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x16A08C8))(this, state);
	}
	template <typename T = void> T set_Item(uintptr_t type, uintptr_t value) {
		return ((T (*)(Pawn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x16A0A18))(this, type, value);
	}
	template <typename T = void> T DoOnCallback(uintptr_t type) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x163B508))(this, type);
	}
	template <typename T = void> T RemoveCallback(uintptr_t type, uintptr_t inValue) {
		return ((T (*)(Pawn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x16A0DE4))(this, type, inValue);
	}
	template <typename T = bool> static T GetLogicalComponent_1m__0(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1B9A538))(0, e);
	}
	template <typename T = void> T ShowMedicalStationCuringEffectm__1(uintptr_t effect) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x16A12CC))(this, effect);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_InfoType() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16A1460))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetAttackableInfo(uintptr_t P0) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x16A1468))(this, P0);
	}
	template <typename T = Il2CppVector3> T xLuaBaseProxy_GetRealPawnHeadPosition() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16A1470))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16A1484))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PreInit() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16A148C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DestroyComponent() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16A1494))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x16A149C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16A14A4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TakeDamage(uintptr_t P0) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x16A14AC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SetOngoingDamage(float P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(Pawn*, float, uintptr_t, int32_t))(Il2CppBase() + 0x16A14B4))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_PlayTakeDamageEffect(uintptr_t P0) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x16A14D4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_AdjustDamage(uintptr_t P0) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x16A14DC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SimulateTakeDamage(uintptr_t P0) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x16A14E4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16A14EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginConcussionEffect(float P0, bool P1, float P2) {
		return ((T (*)(Pawn*, float, bool, float))(Il2CppBase() + 0x16A14F4))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_EndConcussionEffect() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16A1514))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginFlashEffect(float P0) {
		return ((T (*)(Pawn*, float))(Il2CppBase() + 0x16A151C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_EndFlashEffect() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16A1524))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginEMPEffect(float P0, uintptr_t P1) {
		return ((T (*)(Pawn*, float, uintptr_t))(Il2CppBase() + 0x16A152C))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_EndEMPEffect() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16A1558))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CanBeDamagedBy(uintptr_t P0) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x16A1560))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_IsSameCamp(uintptr_t P0) {
		return ((T (*)(Pawn*, uintptr_t))(Il2CppBase() + 0x16A1568))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_IsCanBeStick() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16A1570))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_EnableOptimizeTransform() {
		return ((T (*)(Pawn*))(Il2CppBase() + 0x16A1578))(this);
	}

};

}
