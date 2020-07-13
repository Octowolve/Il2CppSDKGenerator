#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.AudioLogic {

class PawnSoundEmitter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.AudioLogic", "PawnSoundEmitter"));
	}

	template <typename T = uintptr_t> T& trans() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> static T& kRTPC_ObstructionLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint64_t> T& _RoleID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& mAudioEventSwitch() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mCounterOfRegion() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& mPawnData() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& mStepSoundType() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& mCurPhyMat() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& mfLastVelocity() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& mFootStepSound() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& mSprintSound() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& mJumpUpSound() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& mLandSound() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& mHurtSound() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& mDeadSound() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& mResetSound() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& mDyingMoveSound() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& mPawnSoundEventHandler() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& mCurAvatarSndCfg() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& mFootstepRangeAddend() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> static T& mGlobalFootstepRangeAdded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& kDefaultFootstepRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppString*> static T& k3PFootRangeRTPC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& kSlideTackleEventName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& mFootstepVolumeRatio() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> static T& mGlobalFootstepVolumeRatio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = float> static T& kDefaultFootstepVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& k3PFootVolumeRTPC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& mSwimVolumeRatio() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> static T& swimVolumeRTPC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& swimEventSubStr() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& mBulletCountVolumeRatio() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> static T& kDefaultBulletCountVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& kDefaultBulletCountRTPC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& mAudioPlayer() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& mStepTextureDetector() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& mNextStepInterval() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& mAccTimeSinceStep() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& mCurViewType() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = bool> T& mIsZooming() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppString*> T& mStopZoomingSoundBuffer() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = bool> T& mIsAiming() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& mCurSpatialAudioEmitter() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& mLastInjuredStatus() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& mLastPlayerHealth() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = bool> T& mIsFireing() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> T& mObsLvl() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppString*> static T& kAttackerRTPC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& mLastUpdateTime() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = float> T& mLastUpdate3PKillSoundTime() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppString*> T& m3PHurtByKillStreakSound() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& mRoomHandle() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& mSpatialComponent() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& mReverbUpdateComponent() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = bool> static T& EnableSpatialAudioComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppString*> static T& m1PMeleeAttackSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppString*> static T& m3PMeleeAttackSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = Il2CppString*> static T& m1PMeleeAttackMetalSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppString*> static T& m3PMeleeAttackMetalSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = bool> T& mIsAboveFloorWithLP() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& mIsSameFloorWithLP() {
		return *(T*)((uintptr_t)this + 0xB9);
	}
	template <typename T = float> static T& kFloorHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = Il2CppString*> static T& kSameFloorSwitchGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = Il2CppString*> static T& kSameFloorSwitch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = Il2CppString*> static T& kAbove1PFloorSwitch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = Il2CppString*> static T& kBellowFloorSwitch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetViewType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchRole() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitAudioComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeInitAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayerReset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReInitLPRelevantGameSyncs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReInitConfigs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__AdjustGameModeBankName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__AdjustBRSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrawGizmos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateEvery200Ms() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateParameter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickSeperately() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSpectatingStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSpectatingEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAuxSend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WriteDebugLogs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRoleSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSwitch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAnySoundPlaying() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BRPawnMoveSoundNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BRPawnFireSoundNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetObstructionLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetObstructionLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetScaleFactor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PerformPhysics() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoLand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoJump() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoGravitySpikes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClimbUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClimbOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedDoLand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedDoJump() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedDoGravitySpikes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartCrouching() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopCrouching() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartProning() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopProning() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play1PStepSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play3PStepSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play1PSprintSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play3PSprintSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAimingStepSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayLadderSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayLadderStepSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopStepSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFootStepTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSwitchGroupNameByRoleId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Add1PFootstepAuditionRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddPawnStepSoundRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Add1PFootstepVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPawnStepSoundRatio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePawnStepSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPawnSwimmingSoundRatio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePawnSwimmingSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__UpdatePawnStepSoundVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__UpdatePawnSwimSoundVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__UpdatePawnStepSoundRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBulletCountRatio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__UpdatePawnBulletCountVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyWeaponBeginFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyWeaponStopFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayWeaponSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayFireVoice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__ApplyHurtSoundRTPC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnHPChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHPChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayHurtSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearZoomingStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDying() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Die() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnKill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x164);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPlayKillEnemyWithHeadShot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLPAimingAtTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x16C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnterVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLeaveVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x174);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyWeaponZoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyGrenadeNearby() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x17C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayVox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_PlayVox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x184);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayIndividuationSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__ResetLPRelevantGameSyncs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__GetExtVoxCfg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__TryCreateWwiseGameObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x194);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__DestroyWwiseGameObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInFootstepRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x19C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IgnoreFootstepRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}

	template <typename T = uintptr_t> T get_PawnData() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3B9DAEC))(this);
	}
	template <typename T = uintptr_t> T get_SpatialComponent() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3B9DAF4))(this);
	}
	template <typename T = uintptr_t> T get_RoomHandle() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3B9DAFC))(this);
	}
	template <typename T = uint32_t> T get_PawnPlayerID() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3B9DB04))(this);
	}
	template <typename T = Il2CppString*> T get_AudioEventSwitch() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3B9DBF4))(this);
	}
	template <typename T = void> T SetViewType(uintptr_t viewType) {
		return ((T (*)(PawnSoundEmitter*, uintptr_t))(Il2CppBase() + 0x3B9DBFC))(this, viewType);
	}
	template <typename T = void> T SwitchRole() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3B9DF70))(this);
	}
	template <typename T = void> T InitAudioComponent() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3B9E050))(this);
	}
	template <typename T = void> T DeInitAudio() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3B9C458))(this);
	}
	template <typename T = void> T PlayerReset() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3B9E730))(this);
	}
	template <typename T = void> T InitAudio(uintptr_t pPwanSoundData) {
		return ((T (*)(PawnSoundEmitter*, uintptr_t))(Il2CppBase() + 0x3B9BC20))(this, pPwanSoundData);
	}
	template <typename T = void> T ReInitLPRelevantGameSyncs() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3B9F2EC))(this);
	}
	template <typename T = void> T ReInitConfigs() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3B9F800))(this);
	}
	template <typename T = Il2CppString*> T _AdjustGameModeBankName(Il2CppString* originBankName, Il2CppString* mpEx, Il2CppString* brEx) {
		return ((T (*)(PawnSoundEmitter*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3BA12C4))(this, originBankName, mpEx, brEx);
	}
	template <typename T = Il2CppString*> T _AdjustBRSound(Il2CppString* stringEventName) {
		return ((T (*)(PawnSoundEmitter*, Il2CppString*))(Il2CppBase() + 0x3BA1DE8))(this, stringEventName);
	}
	template <typename T = void> T Update() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3BA22E0))(this);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3BA2848))(this);
	}
	template <typename T = void> T UpdateEvery200Ms() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3BA2650))(this);
	}
	template <typename T = void> T UpdateParameter(Il2CppString* strRTPCName, float fValue) {
		return ((T (*)(PawnSoundEmitter*, Il2CppString*, float))(Il2CppBase() + 0x3BA293C))(this, strRTPCName, fValue);
	}
	template <typename T = void> T TickSeperately() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3BA2B04))(this);
	}
	template <typename T = void> T OnSpectatingStart() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3BA3BE4))(this);
	}
	template <typename T = void> T OnSpectatingEnd() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3BA3DB4))(this);
	}
	template <typename T = void> T SetAuxSend(int32_t iIndex, Il2CppString* strAuxBus, float fControlVol) {
		return ((T (*)(PawnSoundEmitter*, int32_t, Il2CppString*, float))(Il2CppBase() + 0x3BA3F7C))(this, iIndex, strAuxBus, fControlVol);
	}
	template <typename T = void> T WriteDebugLogs() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3BA4114))(this);
	}
	template <typename T = Il2CppString*> T CheckRoleSound(Il2CppString* strEventName) {
		return ((T (*)(PawnSoundEmitter*, Il2CppString*))(Il2CppBase() + 0x3BA4A18))(this, strEventName);
	}
	template <typename T = void> T PlaySound(Il2CppString* strEventName) {
		return ((T (*)(PawnSoundEmitter*, Il2CppString*))(Il2CppBase() + 0x3B9DE0C))(this, strEventName);
	}
	template <typename T = void> T SetSwitch(Il2CppString* strSwitchGroupName, Il2CppString* strValueName) {
		return ((T (*)(PawnSoundEmitter*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3BA3A6C))(this, strSwitchGroupName, strValueName);
	}
	template <typename T = void> T StopAll() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3BA4C74))(this);
	}
	template <typename T = bool> T IsAnySoundPlaying() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3BA4DC0))(this);
	}
	template <typename T = void> T BRPawnMoveSoundNotify(Il2CppString* soundEvent) {
		return ((T (*)(PawnSoundEmitter*, Il2CppString*))(Il2CppBase() + 0x3BA20C0))(this, soundEvent);
	}
	template <typename T = void> T BRPawnFireSoundNotify(Il2CppString* soundEvent, bool isBeginFire) {
		return ((T (*)(PawnSoundEmitter*, Il2CppString*, bool))(Il2CppBase() + 0x3BA4F10))(this, soundEvent, isBeginFire);
	}
	template <typename T = void> T SetObstructionLevel(float fLevel) {
		return ((T (*)(PawnSoundEmitter*, float))(Il2CppBase() + 0x3BA514C))(this, fLevel);
	}
	template <typename T = float> T GetObstructionLevel() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3BA56E8))(this);
	}
	template <typename T = void> T SetScaleFactor(float factor) {
		return ((T (*)(PawnSoundEmitter*, float))(Il2CppBase() + 0x3BA57B8))(this, factor);
	}
	template <typename T = void> T PerformPhysics() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3BA5908))(this);
	}
	template <typename T = void> T DoLand() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3BA626C))(this);
	}
	template <typename T = void> T DoJump() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3BA65C4))(this);
	}
	template <typename T = void> T DoGravitySpikes() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3BA6720))(this);
	}
	template <typename T = void> T OnClimbUp() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3BA6870))(this);
	}
	template <typename T = void> T OnClimbOver() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3BA69BC))(this);
	}
	template <typename T = void> T SimulatedDoLand() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3BA6B08))(this);
	}
	template <typename T = void> T SimulatedDoJump(uintptr_t jumpMoveData) {
		return ((T (*)(PawnSoundEmitter*, uintptr_t))(Il2CppBase() + 0x3BA6D14))(this, jumpMoveData);
	}
	template <typename T = void> T SimulatedDoGravitySpikes() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3BA6FA4))(this);
	}
	template <typename T = void> T StartCrouching(bool FromPron) {
		return ((T (*)(PawnSoundEmitter*, bool))(Il2CppBase() + 0x3BA71EC))(this, FromPron);
	}
	template <typename T = void> T StopCrouching() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3BA7464))(this);
	}
	template <typename T = void> T StartProning() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3BA76C4))(this);
	}
	template <typename T = void> T StopProning() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3BA7924))(this);
	}
	template <typename T = void> T Play1PStepSound(Il2CppString* strEventName) {
		return ((T (*)(PawnSoundEmitter*, Il2CppString*))(Il2CppBase() + 0x3BA7B84))(this, strEventName);
	}
	template <typename T = void> T Play3PStepSound(Il2CppString* strEventName) {
		return ((T (*)(PawnSoundEmitter*, Il2CppString*))(Il2CppBase() + 0x3BA80EC))(this, strEventName);
	}
	template <typename T = void> T Play1PSprintSound() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3BA85CC))(this);
	}
	template <typename T = void> T Play3PSprintSound() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3BA8758))(this);
	}
	template <typename T = void> T PlayAimingStepSound() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3BA88E4))(this);
	}
	template <typename T = void> T PlayLadderSound() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3BA8A64))(this);
	}
	template <typename T = void> T PlayLadderStepSound(Il2CppString* eventName) {
		return ((T (*)(PawnSoundEmitter*, Il2CppString*))(Il2CppBase() + 0x3BA8BC8))(this, eventName);
	}
	template <typename T = void> T StopStepSound() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3BA8CC0))(this);
	}
	template <typename T = void> T SetFootStepTexture(uintptr_t ePhyMaterial) {
		return ((T (*)(PawnSoundEmitter*, uintptr_t))(Il2CppBase() + 0x3B9EF1C))(this, ePhyMaterial);
	}
	template <typename T = Il2CppString*> T GetSwitchGroupNameByRoleId() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3BA8E5C))(this);
	}
	template <typename T = void> T Add1PFootstepAuditionRange(float fValue) {
		return ((T (*)(PawnSoundEmitter*, float))(Il2CppBase() + 0x3BA90A4))(this, fValue);
	}
	template <typename T = void> T AddPawnStepSoundRange(float fValue) {
		return ((T (*)(PawnSoundEmitter*, float))(Il2CppBase() + 0x3BA91C4))(this, fValue);
	}
	template <typename T = void> T Add1PFootstepVolume(float fValue) {
		return ((T (*)(PawnSoundEmitter*, float))(Il2CppBase() + 0x3BA92A8))(this, fValue);
	}
	template <typename T = void> T SetPawnStepSoundRatio(float fValue) {
		return ((T (*)(PawnSoundEmitter*, float))(Il2CppBase() + 0x3BA93D0))(this, fValue);
	}
	template <typename T = void> T UpdatePawnStepSound() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3BA94BC))(this);
	}
	template <typename T = void> T SetPawnSwimmingSoundRatio(float fValue) {
		return ((T (*)(PawnSoundEmitter*, float))(Il2CppBase() + 0x3BA9598))(this, fValue);
	}
	template <typename T = void> T UpdatePawnSwimmingSound() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3BA9848))(this);
	}
	template <typename T = void> T _UpdatePawnStepSoundVolume() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3BA1A58))(this);
	}
	template <typename T = void> T _UpdatePawnSwimSoundVolume() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3BA9684))(this);
	}
	template <typename T = void> T _UpdatePawnStepSoundRange() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3BA1C1C))(this);
	}
	template <typename T = void> T SetBulletCountRatio(float fValue) {
		return ((T (*)(PawnSoundEmitter*, float))(Il2CppBase() + 0x3BA991C))(this, fValue);
	}
	template <typename T = void> T _UpdatePawnBulletCountVolume() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3BA9A00))(this);
	}
	template <typename T = void> T NotifyWeaponBeginFire(Il2CppString* strEventName) {
		return ((T (*)(PawnSoundEmitter*, Il2CppString*))(Il2CppBase() + 0x3BA9B6C))(this, strEventName);
	}
	template <typename T = void> T NotifyWeaponStopFire() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3BA9C58))(this);
	}
	template <typename T = void> T PlayWeaponSound(Il2CppString* strWeaponSound) {
		return ((T (*)(PawnSoundEmitter*, Il2CppString*))(Il2CppBase() + 0x3BA9D8C))(this, strWeaponSound);
	}
	template <typename T = void> T PlayFireVoice(uintptr_t pType) {
		return ((T (*)(PawnSoundEmitter*, uintptr_t))(Il2CppBase() + 0x3BA9F38))(this, pType);
	}
	template <typename T = void> T _ApplyHurtSoundRTPC(uintptr_t damageInfo) {
		return ((T (*)(PawnSoundEmitter*, uintptr_t))(Il2CppBase() + 0x3BAA228))(this, damageInfo);
	}
	template <typename T = void> T _OnHPChange() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3BAA590))(this);
	}
	template <typename T = void> T OnHPChange() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3BAAC60))(this);
	}
	template <typename T = void> T PlayHurtSound(uintptr_t damageInfo) {
		return ((T (*)(PawnSoundEmitter*, uintptr_t))(Il2CppBase() + 0x3B9B084))(this, damageInfo);
	}
	template <typename T = void> T ClearZoomingStatus() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3BAAD28))(this);
	}
	template <typename T = void> T PlayDying(uintptr_t damageType) {
		return ((T (*)(PawnSoundEmitter*, uintptr_t))(Il2CppBase() + 0x3BAAE6C))(this, damageType);
	}
	template <typename T = void> T Die(bool isHeadshot) {
		return ((T (*)(PawnSoundEmitter*, bool))(Il2CppBase() + 0x3BAB158))(this, isHeadshot);
	}
	template <typename T = void> T OnKill(bool isHeadShot, uintptr_t pDeadPawn, int32_t iItemID) {
		return ((T (*)(PawnSoundEmitter*, bool, uintptr_t, int32_t))(Il2CppBase() + 0x3BAB240))(this, isHeadShot, pDeadPawn, iItemID);
	}
	template <typename T = void> T OnLocalPlayKillEnemyWithHeadShot() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3BAB70C))(this);
	}
	template <typename T = void> T OnLPAimingAtTarget(uintptr_t pTarget, bool isAiming) {
		return ((T (*)(PawnSoundEmitter*, uintptr_t, bool))(Il2CppBase() + 0x3BAB8E0))(this, pTarget, isAiming);
	}
	template <typename T = void> T OnEnterVolume(uintptr_t pRegion) {
		return ((T (*)(PawnSoundEmitter*, uintptr_t))(Il2CppBase() + 0x3BABA04))(this, pRegion);
	}
	template <typename T = void> T OnLeaveVolume(uintptr_t pRegion) {
		return ((T (*)(PawnSoundEmitter*, uintptr_t))(Il2CppBase() + 0x3BABC48))(this, pRegion);
	}
	template <typename T = void> T NotifyWeaponZoom(bool bZoom) {
		return ((T (*)(PawnSoundEmitter*, bool))(Il2CppBase() + 0x3BABE8C))(this, bZoom);
	}
	template <typename T = void> T NotifyGrenadeNearby(Il2CppString* ProjectileType) {
		return ((T (*)(PawnSoundEmitter*, Il2CppString*))(Il2CppBase() + 0x3BAC110))(this, ProjectileType);
	}
	template <typename T = void> T PlayVox(Il2CppString* str) {
		return ((T (*)(PawnSoundEmitter*, Il2CppString*))(Il2CppBase() + 0x3B9AE70))(this, str);
	}
	template <typename T = void> T PlayVox_1(uintptr_t eWhichVox) {
		return ((T (*)(PawnSoundEmitter*, uintptr_t))(Il2CppBase() + 0x3BAA7AC))(this, eWhichVox);
	}
	template <typename T = void> T PlayIndividuationSound(Il2CppString* soundName) {
		return ((T (*)(PawnSoundEmitter*, Il2CppString*))(Il2CppBase() + 0x3BAC82C))(this, soundName);
	}
	template <typename T = void> T _ResetLPRelevantGameSyncs() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3BA15CC))(this);
	}
	template <typename T = Il2CppString*> T _GetExtVoxCfg(Il2CppString* str) {
		return ((T (*)(PawnSoundEmitter*, Il2CppString*))(Il2CppBase() + 0x3BAC674))(this, str);
	}
	template <typename T = void> T _TryCreateWwiseGameObject() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3B9EB6C))(this);
	}
	template <typename T = void> T _DestroyWwiseGameObject() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3B9E5E4))(this);
	}
	template <typename T = bool> T get_IsFirstPersonView() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3BA15B8))(this);
	}
	template <typename T = bool> T get_IsLP() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3BAC970))(this);
	}
	template <typename T = bool> T get_IsOnSameSideWithLP() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3B9F660))(this);
	}
	template <typename T = float> static T get_DefaultFootstepRange() {
		return ((T (*)(void *))(Il2CppBase() + 0x3BACAA8))(0);
	}
	template <typename T = float> T get_FootstepRange() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3BACB58))(this);
	}
	template <typename T = bool> T IsInFootstepRange() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3BA63C8))(this);
	}
	template <typename T = bool> T IgnoreFootstepRange(Il2CppString* str) {
		return ((T (*)(PawnSoundEmitter*, Il2CppString*))(Il2CppBase() + 0x3BA7F18))(this, str);
	}
	template <typename T = uintptr_t> T get_AudioPlayer() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3BACC28))(this);
	}
	template <typename T = float> T get_HealthPercentage() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3BACC30))(this);
	}
	template <typename T = float> T get_InjurePercentage() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3BACFC0))(this);
	}
	template <typename T = bool> T get_IsFireing() {
		return ((T (*)(PawnSoundEmitter*))(Il2CppBase() + 0x3BACFE0))(this);
	}
	template <typename T = bool> static T get_EnableReverbUpdateComponent() {
		return ((T (*)(void *))(Il2CppBase() + 0x3B9EAC0))(0);
	}

};

}
