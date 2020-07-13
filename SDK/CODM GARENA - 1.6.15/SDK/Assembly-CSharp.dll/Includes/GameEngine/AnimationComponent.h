#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AnimationComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AnimationComponent"));
	}

	template <typename T = uintptr_t> T& m_Animator() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& m_LastAnimName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& AnimEndEventList() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& BaseLayer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_UpperBodyLayer() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& m_FireMoveLayer() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& m_FireLayer() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& m_UpperBodyOverrideLayer() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& m_UpperBodyAimLayer() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& m_LeftHandSwimLayer() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& m_RightHandSwimLayer() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& m_LeftHandOverrideLayer() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& m_LeftHandLayer() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& m_RightHandOffsetLayer() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& m_RightHandWeaponLayer() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& m_SwimHandsLayer() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& m_LeftRightRunningLayer() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& m_UpperBodyEffectLayer() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& m_RightHandOffsetAdditiveLayer() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& m_IsOpenSingleBaseLayer() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& m_LastRightHandWeaponWeight() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& m_LastAimWeight() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& m_LastSwimHandsWeight() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& m_LastUpperBodyWeight() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& m_LastUpperBodyOverrideWeight() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& m_AnimatorCommand() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppDictionary<int32_t, float>*> T& m_CacheStateSpeed() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppDictionary<int32_t, float>*> T& m_CacheLayerWeight() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_CachedParameters() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = bool> T& m_ShouldCacheParameterInLateUpdate() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> static T& NextValidId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = bool> T& m_ManageAnimatorUpdate() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& DoCrossFrameUpdate() {
		return *(T*)((uintptr_t)this + 0x89);
	}
	template <typename T = float> T& LastUpdateTime() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> T& StoreTriggerNameHashList() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& RandomHashId() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& m_FrameCountForAnimatorUpdate() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& m_PauseAnim() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = float> T& m_BaseSpeed() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& m_AnimationComponentCallBack() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = float> T& EidtorAnimatorSpeed() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& m_LastAnimID() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& RootMotionListerner() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& TestGetLayerIndex() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppString*> T& TestGetLayerStateName() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& m_CacheClip() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& m_StateClips() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLayerCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetLayers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ResetLayers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenSingleBaseLayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseSingleBaseLayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitAnimator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAnimatorCleared() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSetAnimatorInInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyRootMotion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInAnimationState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_IsInAnimationState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInTransition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAnimationState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_PlayAnimationState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_PlayAnimationState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAnimationStateWithOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FadeToAnimState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FadeToAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_FadeToAnimState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_FadeToAnimState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_FadeToAnimState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAnimationInTransition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBool() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFloat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetFloat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAllParameter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAllTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAllTriggerExResetUseID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetParameters() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlaySpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFloat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetFloat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInteger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetInteger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetBool() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBool() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetBool() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnimationParamExist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_PlayAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TranslateAnimNameToHash() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayRandomAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReSetRuntimeAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRuntimeAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAnimatorCaches() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitAnimatorCaches() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetSpeedParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearCurrentRuntimeAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayTriggerAnimationEndEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAnimationEnded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEndEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetEndEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAnimator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceAnimatorUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAnimatorCullingMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DebugForceAnimatorCrossTickUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAnimationClip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAnimationClipTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLayerWeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLayerWeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetLayerWeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_SetLayerWeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLayerIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetStateSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetStateSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetStateSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OptimizeRebindAnimator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshAnimator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLayerBoneWeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrintAnimatorData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLayerState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearLayerDefaultState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_UpdateAnimator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAnimatorActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisableAnimator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAvatarMaskWhenSwitchAnimationSet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBlendDurationTimeWhenSwitchAnimationSet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DumpAllInfos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x164);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentPlayableStateIsPaused() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentFOVCuveValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x16C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitAnimatorDeltaData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopRecordAnimatorDeltaData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x174);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentDeltaPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentDeltaRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x17C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TestGetLayerState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReseetCacheClip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x184);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAnimationClipLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetAnimationClip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetAnimationClipLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetStateClipBySuffix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x194);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetStateClip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnimClipNameToStateName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x19C);
	}

	template <typename T = uintptr_t> T get_Animator() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B42F48))(this);
	}
	template <typename T = uintptr_t> T get_CurrAnimatorUpdateMode() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B42F50))(this);
	}
	template <typename T = void> T set_CurrAnimatorUpdateMode(uintptr_t value) {
		return ((T (*)(AnimationComponent*, uintptr_t))(Il2CppBase() + 0x2B43030))(this, value);
	}
	template <typename T = Il2CppString*> T get_LastAnimName() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B43110))(this);
	}
	template <typename T = uintptr_t> T get_LegacyAnimComponent() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B43118))(this);
	}
	template <typename T = bool> T get_EnableLegacyAnimation() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B43120))(this);
	}
	template <typename T = void> T set_EnableLegacyAnimation(bool value) {
		return ((T (*)(AnimationComponent*, bool))(Il2CppBase() + 0x2B43128))(this, value);
	}
	template <typename T = int32_t> T GetLayerCount() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B4312C))(this);
	}
	template <typename T = int32_t> T get_UpperBodyLayer() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B43278))(this);
	}
	template <typename T = int32_t> T get_FireMoveLayer() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B43384))(this);
	}
	template <typename T = int32_t> T get_FireLayer() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B43490))(this);
	}
	template <typename T = int32_t> T get_UpperBodyOverrideLayer() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B4359C))(this);
	}
	template <typename T = int32_t> T get_UpperBodyAimLayer() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B436A8))(this);
	}
	template <typename T = int32_t> T get_LeftHandSwimLayer() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B437B4))(this);
	}
	template <typename T = int32_t> T get_RightHandSwimLayer() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B438C0))(this);
	}
	template <typename T = int32_t> T get_LeftHandOverrideLayer() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B439CC))(this);
	}
	template <typename T = int32_t> T get_LeftHandLayer() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B43AD8))(this);
	}
	template <typename T = int32_t> T get_RightHandOffsetLayer() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B43BE4))(this);
	}
	template <typename T = int32_t> T get_RightHandWeaponLayer() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B43CF0))(this);
	}
	template <typename T = int32_t> T get_SwimHandsLayer() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B43DFC))(this);
	}
	template <typename T = int32_t> T get_LeftRightRunningLayer() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B43F08))(this);
	}
	template <typename T = int32_t> T get_UpperBodyEffectLayer() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B44014))(this);
	}
	template <typename T = int32_t> T get_RightHandOffsetAdditiveLayer() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B44120))(this);
	}
	template <typename T = void> T ResetLayers() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B4422C))(this);
	}
	template <typename T = void> T ResetLayers_1(uintptr_t currentController) {
		return ((T (*)(AnimationComponent*, uintptr_t))(Il2CppBase() + 0x2B44318))(this, currentController);
	}
	template <typename T = bool> T get_IsOpenSingleBaseLayer() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B445AC))(this);
	}
	template <typename T = void> T OpenSingleBaseLayer() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B445B4))(this);
	}
	template <typename T = void> T CloseSingleBaseLayer() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B44B28))(this);
	}
	template <typename T = bool> T get_ManageAnimatorUpdate() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B44C90))(this);
	}
	template <typename T = void> T set_ManageAnimatorUpdate(bool value) {
		return ((T (*)(AnimationComponent*, bool))(Il2CppBase() + 0x2B44C98))(this, value);
	}
	template <typename T = int32_t> T get_FrameCountForAnimatorUpdate() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B44D7C))(this);
	}
	template <typename T = void> T set_FrameCountForAnimatorUpdate(int32_t value) {
		return ((T (*)(AnimationComponent*, int32_t))(Il2CppBase() + 0x2B44D84))(this, value);
	}
	template <typename T = bool> T get_PauseAnim() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B44D8C))(this);
	}
	template <typename T = void> T set_PauseAnim(bool value) {
		return ((T (*)(AnimationComponent*, bool))(Il2CppBase() + 0x2B44D94))(this, value);
	}
	template <typename T = float> T get_CurrentAnimatorSpeed() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B44D9C))(this);
	}
	template <typename T = uintptr_t> T get_AnimationComponentCallBack() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B44E7C))(this);
	}
	template <typename T = void> T set_AnimationComponentCallBack(uintptr_t value) {
		return ((T (*)(AnimationComponent*, uintptr_t))(Il2CppBase() + 0x2B44E84))(this, value);
	}
	template <typename T = void> T Start() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B44E8C))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B44FF8))(this);
	}
	template <typename T = void> T InitAnimator(uintptr_t mesh) {
		return ((T (*)(AnimationComponent*, uintptr_t))(Il2CppBase() + 0x2B451F0))(this, mesh);
	}
	template <typename T = void> T Init(uintptr_t mesh) {
		return ((T (*)(AnimationComponent*, uintptr_t))(Il2CppBase() + 0x2B45580))(this, mesh);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B45660))(this);
	}
	template <typename T = void> T OnAnimatorCleared() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B45748))(this);
	}
	template <typename T = void> T CheckSetAnimatorInInit() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B45810))(this);
	}
	template <typename T = void> T ApplyRootMotion(bool isEnable) {
		return ((T (*)(AnimationComponent*, bool))(Il2CppBase() + 0x2B459F4))(this, isEnable);
	}
	template <typename T = void> T ResetTrigger(int32_t paramID) {
		return ((T (*)(AnimationComponent*, int32_t))(Il2CppBase() + 0x2B45B40))(this, paramID);
	}
	template <typename T = bool> T IsInAnimationState(int32_t layerIndex, Il2CppString* stateName) {
		return ((T (*)(AnimationComponent*, int32_t, Il2CppString*))(Il2CppBase() + 0x2B45C90))(this, layerIndex, stateName);
	}
	template <typename T = bool> T IsInAnimationState_1(Il2CppString* stateName) {
		return ((T (*)(AnimationComponent*, Il2CppString*))(Il2CppBase() + 0x2B45E84))(this, stateName);
	}
	template <typename T = bool> T IsInTransition(int32_t layerIndex, Il2CppString* name) {
		return ((T (*)(AnimationComponent*, int32_t, Il2CppString*))(Il2CppBase() + 0x2B4608C))(this, layerIndex, name);
	}
	template <typename T = void> T PlayAnimationState(Il2CppString* stateName) {
		return ((T (*)(AnimationComponent*, Il2CppString*))(Il2CppBase() + 0x2B4623C))(this, stateName);
	}
	template <typename T = void> T PlayAnimationState_1(int32_t stateID) {
		return ((T (*)(AnimationComponent*, int32_t))(Il2CppBase() + 0x2B4638C))(this, stateID);
	}
	template <typename T = void> T PlayAnimationState_2(int32_t stateID, int32_t layer) {
		return ((T (*)(AnimationComponent*, int32_t, int32_t))(Il2CppBase() + 0x2B464DC))(this, stateID, layer);
	}
	template <typename T = void> T PlayAnimationStateWithOffset(Il2CppString* stateName, float offsetTime) {
		return ((T (*)(AnimationComponent*, Il2CppString*, float))(Il2CppBase() + 0x2B4664C))(this, stateName, offsetTime);
	}
	template <typename T = void> T FadeToAnimState(int32_t stateNameHash, float fadeTime) {
		return ((T (*)(AnimationComponent*, int32_t, float))(Il2CppBase() + 0x2B467BC))(this, stateNameHash, fadeTime);
	}
	template <typename T = void> T FadeToAnim(int32_t stateNameHash, float fadeTime, int32_t layer, float normalizedTime) {
		return ((T (*)(AnimationComponent*, int32_t, float, int32_t, float))(Il2CppBase() + 0x2B4692C))(this, stateNameHash, fadeTime, layer, normalizedTime);
	}
	template <typename T = void> T FadeToAnimState_1(int32_t stateNameHash, float fadeTime, int32_t layer, float fixedTime) {
		return ((T (*)(AnimationComponent*, int32_t, float, int32_t, float))(Il2CppBase() + 0x2B46AB8))(this, stateNameHash, fadeTime, layer, fixedTime);
	}
	template <typename T = void> T FadeToAnimState_2(Il2CppString* stateName, float fadeTime, int32_t layer, float fixedTime) {
		return ((T (*)(AnimationComponent*, Il2CppString*, float, int32_t, float))(Il2CppBase() + 0x2B46C44))(this, stateName, fadeTime, layer, fixedTime);
	}
	template <typename T = void> T FadeToAnimState_3(Il2CppString* stateName, float fadeTime, Il2CppString* layerName, float fixedTime) {
		return ((T (*)(AnimationComponent*, Il2CppString*, float, Il2CppString*, float))(Il2CppBase() + 0x2B46DD0))(this, stateName, fadeTime, layerName, fixedTime);
	}
	template <typename T = bool> T IsAnimationInTransition(int32_t layerIndex) {
		return ((T (*)(AnimationComponent*, int32_t))(Il2CppBase() + 0x2B46F74))(this, layerIndex);
	}
	template <typename T = bool> T GetBool(Il2CppString* name) {
		return ((T (*)(AnimationComponent*, Il2CppString*))(Il2CppBase() + 0x2B470D0))(this, name);
	}
	template <typename T = float> T GetFloat(Il2CppString* name) {
		return ((T (*)(AnimationComponent*, Il2CppString*))(Il2CppBase() + 0x2B4722C))(this, name);
	}
	template <typename T = float> T GetFloat_1(int32_t nameID) {
		return ((T (*)(AnimationComponent*, int32_t))(Il2CppBase() + 0x2B47388))(this, nameID);
	}
	template <typename T = void> T ResetAllParameter() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B474E4))(this);
	}
	template <typename T = void> T ResetAllTrigger() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B477A4))(this);
	}
	template <typename T = void> T ResetAllTriggerExResetUseID() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B47968))(this);
	}
	template <typename T = bool> T ResetParameters() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B47BA4))(this);
	}
	template <typename T = void> T SetPlaySpeed(float fSpeed) {
		return ((T (*)(AnimationComponent*, float))(Il2CppBase() + 0x2B47F88))(this, fSpeed);
	}
	template <typename T = void> T SetFloat(Il2CppString* paramName, float inputValue) {
		return ((T (*)(AnimationComponent*, Il2CppString*, float))(Il2CppBase() + 0x2B482AC))(this, paramName, inputValue);
	}
	template <typename T = void> T SetFloat_1(int32_t paramID, float inputValue) {
		return ((T (*)(AnimationComponent*, int32_t, float))(Il2CppBase() + 0x2B4846C))(this, paramID, inputValue);
	}
	template <typename T = void> T SetInteger(int32_t paramID, int32_t inValue) {
		return ((T (*)(AnimationComponent*, int32_t, int32_t))(Il2CppBase() + 0x2B485DC))(this, paramID, inValue);
	}
	template <typename T = void> T SetInteger_1(Il2CppString* inParamName, int32_t inValue) {
		return ((T (*)(AnimationComponent*, Il2CppString*, int32_t))(Il2CppBase() + 0x2B4874C))(this, inParamName, inValue);
	}
	template <typename T = bool> T GetBool_1(int32_t paramID) {
		return ((T (*)(AnimationComponent*, int32_t))(Il2CppBase() + 0x2B4890C))(this, paramID);
	}
	template <typename T = void> T SetBool(int32_t paramID, bool inputValue) {
		return ((T (*)(AnimationComponent*, int32_t, bool))(Il2CppBase() + 0x2B48A68))(this, paramID, inputValue);
	}
	template <typename T = void> T SetBool_1(Il2CppString* paramName, bool inputValue) {
		return ((T (*)(AnimationComponent*, Il2CppString*, bool))(Il2CppBase() + 0x2B48BD8))(this, paramName, inputValue);
	}
	template <typename T = void> T SetTrigger(int32_t paramID) {
		return ((T (*)(AnimationComponent*, int32_t))(Il2CppBase() + 0x2B48D98))(this, paramID);
	}
	template <typename T = void> T SetTrigger_1(Il2CppString* paramName) {
		return ((T (*)(AnimationComponent*, Il2CppString*))(Il2CppBase() + 0x2B48EE8))(this, paramName);
	}
	template <typename T = bool> T AnimationParamExist(Il2CppString* paramName) {
		return ((T (*)(AnimationComponent*, Il2CppString*))(Il2CppBase() + 0x2B4908C))(this, paramName);
	}
	template <typename T = bool> T PlayAnimation(Il2CppString* animName, float speed, bool bTriggerSameAnim, Il2CppString* resetTriggerName) {
		return ((T (*)(AnimationComponent*, Il2CppString*, float, bool, Il2CppString*))(Il2CppBase() + 0x2B492D4))(this, animName, speed, bTriggerSameAnim, resetTriggerName);
	}
	template <typename T = bool> T PlayAnimation_1(int32_t animID, float speed, bool bTriggerSameAnim, int32_t resetParamID) {
		return ((T (*)(AnimationComponent*, int32_t, float, bool, int32_t))(Il2CppBase() + 0x2B499FC))(this, animID, speed, bTriggerSameAnim, resetParamID);
	}
	template <typename T = int32_t> T TranslateAnimNameToHash(Il2CppString* animName) {
		return ((T (*)(AnimationComponent*, Il2CppString*))(Il2CppBase() + 0x2B49664))(this, animName);
	}
	template <typename T = bool> T PlayRandomAnimation(Il2CppString* animName, int32_t randParam, float speed) {
		return ((T (*)(AnimationComponent*, Il2CppString*, int32_t, float))(Il2CppBase() + 0x2B49E64))(this, animName, randParam, speed);
	}
	template <typename T = void> T ReSetRuntimeAnimatorController() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B4A078))(this);
	}
	template <typename T = void> T SetRuntimeAnimatorController(uintptr_t animatorController, bool forceSet) {
		return ((T (*)(AnimationComponent*, uintptr_t, bool))(Il2CppBase() + 0x2B4A3BC))(this, animatorController, forceSet);
	}
	template <typename T = void> T ResetAnimatorCaches(uintptr_t currentAnimatorController) {
		return ((T (*)(AnimationComponent*, uintptr_t))(Il2CppBase() + 0x2B4A628))(this, currentAnimatorController);
	}
	template <typename T = void> T InitAnimatorCaches() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B4AA08))(this);
	}
	template <typename T = void> T ResetSpeedParam() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B454A8))(this);
	}
	template <typename T = uintptr_t> T get_CurrentRuntimeAnimatorController() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B4ABB4))(this);
	}
	template <typename T = void> T ClearCurrentRuntimeAnimatorController() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B4AC94))(this);
	}
	template <typename T = void> T DelayTriggerAnimationEndEvent() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B4ADEC))(this);
	}
	template <typename T = void> T OnAnimationEnded(Il2CppString* animName) {
		return ((T (*)(AnimationComponent*, Il2CppString*))(Il2CppBase() + 0x2B4AED0))(this, animName);
	}
	template <typename T = uintptr_t> T GetEndEvent(int32_t animID) {
		return ((T (*)(AnimationComponent*, int32_t))(Il2CppBase() + 0x2B49CA8))(this, animID);
	}
	template <typename T = uintptr_t> T GetEndEvent_1(Il2CppString* animName) {
		return ((T (*)(AnimationComponent*, Il2CppString*))(Il2CppBase() + 0x2B497FC))(this, animName);
	}
	template <typename T = void> T UpdateAnimator() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B4AFB0))(this);
	}
	template <typename T = void> T ForceAnimatorUpdate() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B4B130))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B4B364))(this);
	}
	template <typename T = void> T SetAnimatorCullingMode(uintptr_t newCullingMode) {
		return ((T (*)(AnimationComponent*, uintptr_t))(Il2CppBase() + 0x2B4B608))(this, newCullingMode);
	}
	template <typename T = void> T DebugForceAnimatorCrossTickUpdate(int32_t tickInterval) {
		return ((T (*)(AnimationComponent*, int32_t))(Il2CppBase() + 0x2B4B808))(this, tickInterval);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B4B8F4))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B4B9BC))(this);
	}
	template <typename T = uintptr_t> T GetAnimationClip(Il2CppString* clipNameKey) {
		return ((T (*)(AnimationComponent*, Il2CppString*))(Il2CppBase() + 0x2B4BF6C))(this, clipNameKey);
	}
	template <typename T = float> T GetAnimationClipTime(Il2CppString* animationName, float scale) {
		return ((T (*)(AnimationComponent*, Il2CppString*, float))(Il2CppBase() + 0x2B4C278))(this, animationName, scale);
	}
	template <typename T = float> T GetLayerWeight(int32_t layerIndex) {
		return ((T (*)(AnimationComponent*, int32_t))(Il2CppBase() + 0x2B44794))(this, layerIndex);
	}
	template <typename T = void> T SetLayerWeight(int32_t layerIndex, float weight, float time) {
		return ((T (*)(AnimationComponent*, int32_t, float, float))(Il2CppBase() + 0x2B4C408))(this, layerIndex, weight, time);
	}
	template <typename T = void> T SetLayerWeight_1(int32_t layerIndex, float weight) {
		return ((T (*)(AnimationComponent*, int32_t, float))(Il2CppBase() + 0x2B448EC))(this, layerIndex, weight);
	}
	template <typename T = void> T SetLayerWeight_2(Il2CppString* layerName, float weight) {
		return ((T (*)(AnimationComponent*, Il2CppString*, float))(Il2CppBase() + 0x2B4CAA0))(this, layerName, weight);
	}
	template <typename T = int32_t> T GetLayerIndex(Il2CppString* layerName) {
		return ((T (*)(AnimationComponent*, Il2CppString*))(Il2CppBase() + 0x2B4CD00))(this, layerName);
	}
	template <typename T = float> T GetStateSpeed(int32_t layerIndex, Il2CppString* stateName) {
		return ((T (*)(AnimationComponent*, int32_t, Il2CppString*))(Il2CppBase() + 0x2B4CE58))(this, layerIndex, stateName);
	}
	template <typename T = void> T SetStateSpeed(int32_t layerIndex, int32_t stateID, float speed) {
		return ((T (*)(AnimationComponent*, int32_t, int32_t, float))(Il2CppBase() + 0x2B4D008))(this, layerIndex, stateID, speed);
	}
	template <typename T = void> T SetStateSpeed_1(int32_t layerIndex, Il2CppString* stateName, float speed) {
		return ((T (*)(AnimationComponent*, int32_t, Il2CppString*, float))(Il2CppBase() + 0x2B4D258))(this, layerIndex, stateName, speed);
	}
	template <typename T = void> T OptimizeRebindAnimator() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B4D4BC))(this);
	}
	template <typename T = void> T RefreshAnimator() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B4D600))(this);
	}
	template <typename T = void> T SetLayerBoneWeight(Il2CppString* LayerName, Il2CppString* bonePath, float weight) {
		return ((T (*)(AnimationComponent*, Il2CppString*, Il2CppString*, float))(Il2CppBase() + 0x2B4D744))(this, LayerName, bonePath, weight);
	}
	template <typename T = bool> static T get_EnableFPAnimationSync() {
		return ((T (*)(void *))(Il2CppBase() + 0x2B4D834))(0);
	}
	template <typename T = void> T PrintAnimatorData() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B4D8E4))(this);
	}
	template <typename T = void> T SetLayerState(int32_t layerIndex, Il2CppString* stateName) {
		return ((T (*)(AnimationComponent*, int32_t, Il2CppString*))(Il2CppBase() + 0x2B4DDAC))(this, layerIndex, stateName);
	}
	template <typename T = void> T ClearLayerDefaultState() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B4A8C4))(this);
	}
	template <typename T = void> T UpdateAnimator_1(float deltaTime) {
		return ((T (*)(AnimationComponent*, float))(Il2CppBase() + 0x2B4B214))(this, deltaTime);
	}
	template <typename T = void> T SetAnimatorActive(bool isActive) {
		return ((T (*)(AnimationComponent*, bool))(Il2CppBase() + 0x2B4DF30))(this, isActive);
	}
	template <typename T = void> T DisableAnimator() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B4E080))(this);
	}
	template <typename T = void> T SetAvatarMaskWhenSwitchAnimationSet(uintptr_t avatarMask) {
		return ((T (*)(AnimationComponent*, uintptr_t))(Il2CppBase() + 0x2B4E1C8))(this, avatarMask);
	}
	template <typename T = void> T SetBlendDurationTimeWhenSwitchAnimationSet(float blendTime) {
		return ((T (*)(AnimationComponent*, float))(Il2CppBase() + 0x2B4E318))(this, blendTime);
	}
	template <typename T = void> T DumpAllInfos() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B4E468))(this);
	}
	template <typename T = int32_t> T GetCurrentPlayableStateIsPaused() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B51008))(this);
	}
	template <typename T = float> T GetCurrentFOVCuveValue() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B51154))(this);
	}
	template <typename T = void> T InitAnimatorDeltaData() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B512F4))(this);
	}
	template <typename T = void> T StopRecordAnimatorDeltaData() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B515CC))(this);
	}
	template <typename T = Il2CppVector3> T GetCurrentDeltaPosition() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B51714))(this);
	}
	template <typename T = Il2CppQuaternion> T GetCurrentDeltaRotation() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B51994))(this);
	}
	template <typename T = void> T TestGetLayerState() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B51C10))(this);
	}
	template <typename T = void> T ReseetCacheClip() {
		return ((T (*)(AnimationComponent*))(Il2CppBase() + 0x2B4A794))(this);
	}
	template <typename T = float> T GetAnimationClipLength(uintptr_t clipNameType) {
		return ((T (*)(AnimationComponent*, uintptr_t))(Il2CppBase() + 0x2B51E28))(this, clipNameType);
	}
	template <typename T = uintptr_t> T GetAnimationClip_1(uintptr_t clipNameType) {
		return ((T (*)(AnimationComponent*, uintptr_t))(Il2CppBase() + 0x2B51F88))(this, clipNameType);
	}
	template <typename T = float> T GetAnimationClipLength_1(int32_t layerIndex, Il2CppString* stateName, Il2CppString* suffix) {
		return ((T (*)(AnimationComponent*, int32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2B52584))(this, layerIndex, stateName, suffix);
	}
	template <typename T = uintptr_t> T GetStateClipBySuffix(int32_t layerIndex, Il2CppString* stateName, Il2CppString* suffix) {
		return ((T (*)(AnimationComponent*, int32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2B52A30))(this, layerIndex, stateName, suffix);
	}
	template <typename T = uintptr_t> T GetStateClip(int32_t layerIndex, Il2CppString* stateName) {
		return ((T (*)(AnimationComponent*, int32_t, Il2CppString*))(Il2CppBase() + 0x2B52774))(this, layerIndex, stateName);
	}
	template <typename T = Il2CppString*> T AnimClipNameToStateName(uintptr_t nameType) {
		return ((T (*)(AnimationComponent*, uintptr_t))(Il2CppBase() + 0x2B52D00))(this, nameType);
	}

};

}
