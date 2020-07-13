#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRSwimmingComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRSwimmingComponent"));
	}

	template <typename T = float> static T& DELAY_DELETE_ASSET_TIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_EyeHeightDropDownSpeedForSwimming() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_UpdateEyeHeightIntervalDuringSwimming() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_SwimEyeHeightTickRate() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_UnderWaterEyeHeight() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_DefaultWaterSurfaceFloatSpeed() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_AnimationSwimForwardLerpSpeed() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_AnimationSwimLateralLerpSpeed() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_AnimationTPSwimForwardLerpSpeed() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_AnimationTPSwimLateralLerpSpeed() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& CurrentEyeHeight() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& DeepDepthMargin() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& DeepDepth() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& DeepWaterGap() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& OxygenRecoverSpeed() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& OxygenAttenuateSpeed() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& EffectBubbleDeepDepth() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uint32_t> T& m_TickCheckOxygenTotalFrame() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uint32_t> T& m_TickCheckOxygenFrameCount() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_BRPawn() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& m_PawnAnimationComponent() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& m_Tick() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& m_RecentlyRendered() {
		return *(T*)((uintptr_t)this + 0x65);
	}
	template <typename T = bool> T& bSetRuntimeAnimator() {
		return *(T*)((uintptr_t)this + 0x66);
	}
	template <typename T = bool> T& m_IsProcessOxygen() {
		return *(T*)((uintptr_t)this + 0x67);
	}
	template <typename T = float> T& UnCrouchWaterHeight() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& UnProneWaterHeight() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& SprayEffectOffsetDistance() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& m_DeepHeightFactor() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& m_DeepHeightFactorDelta() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& m_IsCheckUnderState() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = bool> T& m_HideLeftHand() {
		return *(T*)((uintptr_t)this + 0x7D);
	}
	template <typename T = bool> T& m_IsUnderWater() {
		return *(T*)((uintptr_t)this + 0x7E);
	}
	template <typename T = bool> T& m_IsShowBubble() {
		return *(T*)((uintptr_t)this + 0x7F);
	}
	template <typename T = bool> T& m_IsLocalPlayer() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& m_IsAssetLoaded() {
		return *(T*)((uintptr_t)this + 0x81);
	}
	template <typename T = int32_t> T& RecordWeaponId() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = unsigned char> T& RecordWeaponSlotId() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& RecordWeaponActorId() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& m_TickCheckCameraEffectCount() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& m_TickCheckCameraEffectFrame() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& m_FCameraCheckWarte() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> static T& CheckSwimRefreshWeaponVisibleWithPlayAiming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> static T& CheckSprintSwim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5);
	}
	template <typename T = bool> T& m_NetPlayunderwater() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppString*> static T& RIG_NECK_PATH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppString*> static T& RIG_SPINE1_PATH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppString*> static T& RIG_NECK_PATH_FP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppVector3> static T& FP_BUBBLE_EFFECT_OFFSET() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> T& m_SwimmingEffect() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& m_SwimmingEffectParticleSystem() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& m_SwimmingEffectSpray() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& m_SwimmingEffectSprayParticleSystem() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& m_SwimmingEffectWalk() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& m_SwimmingEffectFallInWater() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& m_SwimmingEffectBubble() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& m_InSwimmingEffect() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = bool> T& m_CachedIsMove() {
		return *(T*)((uintptr_t)this + 0xBD);
	}
	template <typename T = bool> T& m_InWalkingEffect() {
		return *(T*)((uintptr_t)this + 0xBE);
	}
	template <typename T = uintptr_t> T& m_CurSwimCameraAnim() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = bool> T& m_UseEffect() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& m_CurrentSwimmingStateMachine() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetIsUnderWater() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSoundSwitch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIsSwimUnderWater() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanSwimSprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponBeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponEndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchRole() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetServerRelevant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResetAnimator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceStopSwim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnterInWater() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LeaveWater() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Destroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NullAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CameraCollisionWater() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckNearClipInSwimming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHitProjection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnterSwimState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckEnterSwimRefreshWeaponVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckLeaveSwimRefreshWeaponVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLeaveSwimState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSwiming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartProcessOxygen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessOxygen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessFPFloatingHands() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessEyeHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessOwnerDeepHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOnwerToSwimIdle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAnimationDepthWeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickLocalPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshWeaponVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateProcessSwimmingEffectAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateStartSwiming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimualteStopSwiming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecorverSimulateRuntimeAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessSimulateDeepHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickSimulate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUseItemProcessSwim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessSetAnimtorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessSimulationSetAnimtorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecorverRuntimeAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearHoldWeaponRecord() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordHoldWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitUseEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitSwimmingEffectAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDelayDestroySwimmingEffectAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroySwimmingEffectAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AttachSwimmingEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DetachSwimmingEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickSwimmingCameraEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceStopSwimCameraEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickSwimingEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSwimmingEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideSwimmingEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowBubble() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideBubble() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHandSpray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AttachWalkingEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DetachWalkingEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickWalkingEffectHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseSwimmingEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecoverSwimmingEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayFallInEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitSwimmingStateMachine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartSwimmingStateMachine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndSwimmingStateMachine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickStateMachine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}

	template <typename T = float> T get_DefaultWaterSurfaceFloatSpeed() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x260FEB0))(this);
	}
	template <typename T = uintptr_t> T get_Owner() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x260FEB8))(this);
	}
	template <typename T = uintptr_t> T get_OwnerPawnAnimationComponent() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x260FEC0))(this);
	}
	template <typename T = float> T get_CurrentWaterPlaneHeight() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x260FEC8))(this);
	}
	template <typename T = void> T SetIsUnderWater(bool value) {
		return ((T (*)(BRSwimmingComponent*, bool))(Il2CppBase() + 0x260FEFC))(this, value);
	}
	template <typename T = void> T SetSoundSwitch(bool isInwater) {
		return ((T (*)(BRSwimmingComponent*, bool))(Il2CppBase() + 0x261014C))(this, isInwater);
	}
	template <typename T = bool> T GetIsSwimUnderWater() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x26103F0))(this);
	}
	template <typename T = bool> T get_CanSprintInWater() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x26104C8))(this);
	}
	template <typename T = bool> T get_CanCrouch() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x2610588))(this);
	}
	template <typename T = bool> T get_CanProne() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x2610628))(this);
	}
	template <typename T = bool> T CanSwimSprint() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x26106C8))(this);
	}
	template <typename T = void> T Init(uintptr_t pawn) {
		return ((T (*)(BRSwimmingComponent*, uintptr_t))(Il2CppBase() + 0x2610A74))(this, pawn);
	}
	template <typename T = void> T OnWeaponBeginState(uintptr_t weaponState) {
		return ((T (*)(BRSwimmingComponent*, uintptr_t))(Il2CppBase() + 0x261186C))(this, weaponState);
	}
	template <typename T = void> T OnWeaponEndState(uintptr_t stateType) {
		return ((T (*)(BRSwimmingComponent*, uintptr_t))(Il2CppBase() + 0x26119EC))(this, stateType);
	}
	template <typename T = void> T OnWeaponChanged() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x2611B4C))(this);
	}
	template <typename T = void> T OnSwitchRole() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x26120D8))(this);
	}
	template <typename T = void> T OnSwitchView() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x26134B8))(this);
	}
	template <typename T = void> T SetServerRelevant(bool isRelevant) {
		return ((T (*)(BRSwimmingComponent*, bool))(Il2CppBase() + 0x2613E50))(this, isRelevant);
	}
	template <typename T = void> T OnResetAnimator() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x2613F94))(this);
	}
	template <typename T = void> T ForceStopSwim() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x261474C))(this);
	}
	template <typename T = void> T EnterInWater() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x2614E14))(this);
	}
	template <typename T = void> T LeaveWater() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x26158C8))(this);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x2615F98))(this);
	}
	template <typename T = void> static T NullAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x261607C))(0);
	}
	template <typename T = void> T CameraCollisionWater() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x261613C))(this);
	}
	template <typename T = void> T CheckNearClipInSwimming(int32_t inLayer, Il2CppVector3 targetPos, Il2CppVector3 wantPos, float sphereRadius, float NearClipAdd) {
		return ((T (*)(BRSwimmingComponent*, int32_t, Il2CppVector3, Il2CppVector3, float, float))(Il2CppBase() + 0x2616380))(this, inLayer, targetPos, wantPos, sphereRadius, NearClipAdd);
	}
	template <typename T = bool> T GetHitProjection(Il2CppVector3 inLookat, Il2CppVector3 inWantPos, float sphereRadius, bool up) {
		return ((T (*)(BRSwimmingComponent*, Il2CppVector3, Il2CppVector3, float, bool))(Il2CppBase() + 0x26175C0))(this, inLookat, inWantPos, sphereRadius, up);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(BRSwimmingComponent*, float))(Il2CppBase() + 0x261781C))(this, deltaTime);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x261820C))(this);
	}
	template <typename T = void> T OnEnterSwimState() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x2618314))(this);
	}
	template <typename T = void> T CheckEnterSwimRefreshWeaponVisible() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x2618BC8))(this);
	}
	template <typename T = void> T CheckLeaveSwimRefreshWeaponVisible() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x2618D0C))(this);
	}
	template <typename T = void> T OnLeaveSwimState() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x2618E50))(this);
	}
	template <typename T = void> T CheckSwiming() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x26194C4))(this);
	}
	template <typename T = void> T StartProcessOxygen() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x2619874))(this);
	}
	template <typename T = void> T ProcessOxygen(float deltaTime) {
		return ((T (*)(BRSwimmingComponent*, float))(Il2CppBase() + 0x261796C))(this, deltaTime);
	}
	template <typename T = void> T ProcessFPFloatingHands() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x2619A40))(this);
	}
	template <typename T = void> T ProcessEyeHeight() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x2619CC4))(this);
	}
	template <typename T = void> T ProcessOwnerDeepHeight() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x2619E88))(this);
	}
	template <typename T = void> T SetOnwerToSwimIdle() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x261A724))(this);
	}
	template <typename T = void> T SetAnimationDepthWeight() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x2612410))(this);
	}
	template <typename T = void> T TickLocalPlayer() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x2617B3C))(this);
	}
	template <typename T = void> T RefreshWeaponVisible(bool isSwim) {
		return ((T (*)(BRSwimmingComponent*, bool))(Il2CppBase() + 0x2611D10))(this, isSwim);
	}
	template <typename T = void> T SimulateProcessSwimmingEffectAsset() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x2614FB8))(this);
	}
	template <typename T = void> T SimulateStartSwiming(Il2CppVector3 StartSwimingPos) {
		return ((T (*)(BRSwimmingComponent*, Il2CppVector3))(Il2CppBase() + 0x261B03C))(this, StartSwimingPos);
	}
	template <typename T = void> T SimualteStopSwiming() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x261B144))(this);
	}
	template <typename T = void> T RecorverSimulateRuntimeAnimatorController() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x2619100))(this);
	}
	template <typename T = void> T ProcessSimulateDeepHeight() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x261B20C))(this);
	}
	template <typename T = void> T TickSimulate() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x2617D24))(this);
	}
	template <typename T = void> T OnUseItemProcessSwim() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x261BDE4))(this);
	}
	template <typename T = void> T ProcessSetAnimtorController() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x261A7EC))(this);
	}
	template <typename T = void> T ProcessSimulationSetAnimtorController() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x261B8A8))(this);
	}
	template <typename T = void> T RecorverRuntimeAnimatorController() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x2614AD4))(this);
	}
	template <typename T = void> T ClearHoldWeaponRecord() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x26149F8))(this);
	}
	template <typename T = void> T RecordHoldWeapon() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x2618A30))(this);
	}
	template <typename T = void> T InitUseEffect() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x2610CE0))(this);
	}
	template <typename T = void> T InitSwimmingEffectAsset() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x2610E14))(this);
	}
	template <typename T = void> T OnDelayDestroySwimmingEffectAsset() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x261BF1C))(this);
	}
	template <typename T = void> T DestroySwimmingEffectAsset(bool isTimer) {
		return ((T (*)(BRSwimmingComponent*, bool))(Il2CppBase() + 0x2615B0C))(this, isTimer);
	}
	template <typename T = void> T AttachSwimmingEffect() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x2612C28))(this);
	}
	template <typename T = void> T DetachSwimmingEffect() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x261267C))(this);
	}
	template <typename T = void> T TickSwimmingCameraEffect() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x261ABB4))(this);
	}
	template <typename T = void> T ForceStopSwimCameraEffect() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x2613D1C))(this);
	}
	template <typename T = void> T TickSwimingEffect() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x261A964))(this);
	}
	template <typename T = void> T ShowSwimmingEffect() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x261A2F4))(this);
	}
	template <typename T = void> T HideSwimmingEffect() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x261A1B0))(this);
	}
	template <typename T = void> T ShowBubble() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x261A49C))(this);
	}
	template <typename T = void> T HideBubble() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x261A5E0))(this);
	}
	template <typename T = void> T OnHandSpray(Il2CppVector3 position) {
		return ((T (*)(BRSwimmingComponent*, Il2CppVector3))(Il2CppBase() + 0x261BFF4))(this, position);
	}
	template <typename T = void> T AttachWalkingEffect() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x2615190))(this);
	}
	template <typename T = void> T DetachWalkingEffect() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x2612AA4))(this);
	}
	template <typename T = void> T TickWalkingEffectHeight() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x261AE68))(this);
	}
	template <typename T = void> T CloseSwimmingEffect() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x261BBD8))(this);
	}
	template <typename T = void> T RecoverSwimmingEffect() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x261B67C))(this);
	}
	template <typename T = void> T PlayFallInEffect(Il2CppVector3 pos) {
		return ((T (*)(BRSwimmingComponent*, Il2CppVector3))(Il2CppBase() + 0x2615400))(this, pos);
	}
	template <typename T = void> T InitSwimmingStateMachine() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x261C268))(this);
	}
	template <typename T = void> T StartSwimmingStateMachine() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x2612324))(this);
	}
	template <typename T = void> T EndSwimmingStateMachine() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x2612244))(this);
	}
	template <typename T = void> T TickStateMachine(float deltaTime) {
		return ((T (*)(BRSwimmingComponent*, float))(Il2CppBase() + 0x26180C8))(this, deltaTime);
	}
	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(BRSwimmingComponent*, uintptr_t, bool))(Il2CppBase() + 0x261C374))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x261C4A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(BRSwimmingComponent*, uintptr_t))(Il2CppBase() + 0x261C6A4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnWeaponChanged() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x261C6AC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnSwitchRole() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x261C6B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnSwitchView() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x261C6BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetServerRelevant(bool P0) {
		return ((T (*)(BRSwimmingComponent*, bool))(Il2CppBase() + 0x261C6C4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Destroy() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x261C6CC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRSwimmingComponent*, float))(Il2CppBase() + 0x261C6D4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(BRSwimmingComponent*))(Il2CppBase() + 0x261C6DC))(this);
	}

};

}
