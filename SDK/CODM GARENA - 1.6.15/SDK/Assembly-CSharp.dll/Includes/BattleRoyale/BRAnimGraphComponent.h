#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRAnimGraphComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRAnimGraphComponent"));
	}

	template <typename T = uintptr_t> T& defaulAnimClip() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_FullBodyAnimMixerNode() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_FullBodyAnimClipNode() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& m_UpperBodyAnimMixerNode() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_UpperBodyAdditiveAnimClipNode() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& m_UpperBodyOverrideAnimClipNode() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& m_UpperBodyHitAdditiveAnimClipNode() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& UpperArmAvatarMask() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& UpperBodyAvatarMask() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& FullBodyAvatarMask() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& m_IsMoving() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& m_PlayableAnimTimer() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& m_IsPlayingFullBodyAnim() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = bool> T& m_IsPlayingUpperBodyAnim() {
		return *(T*)((uintptr_t)this + 0x7D);
	}
	template <typename T = bool> T& m_IsPlayingSwitchAnim() {
		return *(T*)((uintptr_t)this + 0x7E);
	}
	template <typename T = uintptr_t> T& m_BaseAnimPlayMode() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& m_CurBaseAnimIndex() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_BaseAnimClips() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MakeUpSubGraph() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroySubGraph() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryDestroySubGraphAndRestoreAnimatorOriginalGraph() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBaseLocamotion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearTimers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetPlayableAnimState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPlayingPlayableUpperOrFullBodyAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPlayablePlayingAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CurrentIsFullBodyNeedInteruptImmediately() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InteruptCurrentPlayingAnimIfNeedInteruptImmediately() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayFullBodyAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayFullBodyAnim_Internal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayUpperBodyAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayUpperBodyAnim_Internal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayStackFirstBodyAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayMovingStationarySwitchedBodyAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySwitchedBodyAnim_Internal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSwitchedAnimationBlend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateBaseAnimPlayable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyBaseAnimPlayableNode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayableAnimEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopPlayPlayableAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAllPlayAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopPlayPlayableAnimInternal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerFullBodyAnimPlayable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerUpperBodyAnimPlayable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayUpperBodyHitAdditveAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}

	template <typename T = void> T MakeUpSubGraph() {
		return ((T (*)(BRAnimGraphComponent*))(Il2CppBase() + 0x24CC8E8))(this);
	}
	template <typename T = void> T DestroySubGraph() {
		return ((T (*)(BRAnimGraphComponent*))(Il2CppBase() + 0x24CCE84))(this);
	}
	template <typename T = void> T TryDestroySubGraphAndRestoreAnimatorOriginalGraph() {
		return ((T (*)(BRAnimGraphComponent*))(Il2CppBase() + 0x24CD244))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(BRAnimGraphComponent*, float))(Il2CppBase() + 0x24CD30C))(this, deltaTime);
	}
	template <typename T = void> T UpdateBaseLocamotion() {
		return ((T (*)(BRAnimGraphComponent*))(Il2CppBase() + 0x24CD3DC))(this);
	}
	template <typename T = void> T ClearTimers() {
		return ((T (*)(BRAnimGraphComponent*))(Il2CppBase() + 0x24CD018))(this);
	}
	template <typename T = void> T ResetPlayableAnimState() {
		return ((T (*)(BRAnimGraphComponent*))(Il2CppBase() + 0x24CD158))(this);
	}
	template <typename T = bool> T IsPlayingPlayableUpperOrFullBodyAnim() {
		return ((T (*)(BRAnimGraphComponent*))(Il2CppBase() + 0x24CD7BC))(this);
	}
	template <typename T = bool> T IsPlayablePlayingAnim() {
		return ((T (*)(BRAnimGraphComponent*))(Il2CppBase() + 0x24CD874))(this);
	}
	template <typename T = bool> T CurrentIsFullBodyNeedInteruptImmediately() {
		return ((T (*)(BRAnimGraphComponent*))(Il2CppBase() + 0x24CD948))(this);
	}
	template <typename T = void> T InteruptCurrentPlayingAnimIfNeedInteruptImmediately() {
		return ((T (*)(BRAnimGraphComponent*))(Il2CppBase() + 0x24CDABC))(this);
	}
	template <typename T = void> T PlayFullBodyAnim(uintptr_t animClip, float speed, bool isLoop, float blendInTime, float blendOutTime, bool interuptFront, bool canInteruptedImmediately) {
		return ((T (*)(BRAnimGraphComponent*, uintptr_t, float, bool, float, float, bool, bool))(Il2CppBase() + 0x24CDD84))(this, animClip, speed, isLoop, blendInTime, blendOutTime, interuptFront, canInteruptedImmediately);
	}
	template <typename T = void> T PlayFullBodyAnim_Internal() {
		return ((T (*)(BRAnimGraphComponent*))(Il2CppBase() + 0x24CE3E8))(this);
	}
	template <typename T = void> T PlayUpperBodyAnim(uintptr_t animClip, float speed, bool isLoop, float blendInTime, float blendOutTime, bool isAdditive, bool interuptFront) {
		return ((T (*)(BRAnimGraphComponent*, uintptr_t, float, bool, float, float, bool, bool))(Il2CppBase() + 0x24CE818))(this, animClip, speed, isLoop, blendInTime, blendOutTime, isAdditive, interuptFront);
	}
	template <typename T = void> T PlayUpperBodyAnim_Internal() {
		return ((T (*)(BRAnimGraphComponent*))(Il2CppBase() + 0x24CEAE8))(this);
	}
	template <typename T = void> T PlayStackFirstBodyAnimation() {
		return ((T (*)(BRAnimGraphComponent*))(Il2CppBase() + 0x24CE244))(this);
	}
	template <typename T = void> T PlayMovingStationarySwitchedBodyAnim(uintptr_t animClip, float speed, bool isLoop, float blendInTime, float blendOutTime, bool isAdditive, bool interuptFront) {
		return ((T (*)(BRAnimGraphComponent*, uintptr_t, float, bool, float, float, bool, bool))(Il2CppBase() + 0x24CF3F4))(this, animClip, speed, isLoop, blendInTime, blendOutTime, isAdditive, interuptFront);
	}
	template <typename T = void> T PlaySwitchedBodyAnim_Internal() {
		return ((T (*)(BRAnimGraphComponent*))(Il2CppBase() + 0x24CEFF0))(this);
	}
	template <typename T = void> T UpdateSwitchedAnimationBlend() {
		return ((T (*)(BRAnimGraphComponent*))(Il2CppBase() + 0x24CD548))(this);
	}
	template <typename T = void> T CreateBaseAnimPlayable(uintptr_t defaultAnimationClip) {
		return ((T (*)(BRAnimGraphComponent*, uintptr_t))(Il2CppBase() + 0x24CC99C))(this, defaultAnimationClip);
	}
	template <typename T = void> T DestroyBaseAnimPlayableNode() {
		return ((T (*)(BRAnimGraphComponent*))(Il2CppBase() + 0x24CCF44))(this);
	}
	template <typename T = void> T OnPlayableAnimEnd() {
		return ((T (*)(BRAnimGraphComponent*))(Il2CppBase() + 0x24CF6C4))(this);
	}
	template <typename T = void> T StopPlayPlayableAnim(uintptr_t triggerAction) {
		return ((T (*)(BRAnimGraphComponent*, uintptr_t))(Il2CppBase() + 0x24CFA48))(this, triggerAction);
	}
	template <typename T = void> T ClearAllPlayAnim(bool clearPlayTag) {
		return ((T (*)(BRAnimGraphComponent*, bool))(Il2CppBase() + 0x24CE054))(this, clearPlayTag);
	}
	template <typename T = void> T StopPlayPlayableAnimInternal(float blendingTime) {
		return ((T (*)(BRAnimGraphComponent*, float))(Il2CppBase() + 0x24CF7B8))(this, blendingTime);
	}
	template <typename T = bool> T TriggerFullBodyAnimPlayable(uintptr_t clip, float speed) {
		return ((T (*)(BRAnimGraphComponent*, uintptr_t, float))(Il2CppBase() + 0x24CE6BC))(this, clip, speed);
	}
	template <typename T = bool> T TriggerUpperBodyAnimPlayable(uintptr_t clip, float speed, bool IsAdditive) {
		return ((T (*)(BRAnimGraphComponent*, uintptr_t, float, bool))(Il2CppBase() + 0x24CEE28))(this, clip, speed, IsAdditive);
	}
	template <typename T = void> T PlayUpperBodyHitAdditveAnim(uintptr_t animClip, float speed, float blendOutTime) {
		return ((T (*)(BRAnimGraphComponent*, uintptr_t, float, float))(Il2CppBase() + 0x24CFC2C))(this, animClip, speed, blendOutTime);
	}
	template <typename T = void> T xLuaBaseProxy_MakeUpSubGraph() {
		return ((T (*)(BRAnimGraphComponent*))(Il2CppBase() + 0x24CFE2C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DestroySubGraph() {
		return ((T (*)(BRAnimGraphComponent*))(Il2CppBase() + 0x24CFE34))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TryDestroySubGraphAndRestoreAnimatorOriginalGraph() {
		return ((T (*)(BRAnimGraphComponent*))(Il2CppBase() + 0x24CFE3C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRAnimGraphComponent*, float))(Il2CppBase() + 0x24CFE44))(this, P0);
	}

};

}
