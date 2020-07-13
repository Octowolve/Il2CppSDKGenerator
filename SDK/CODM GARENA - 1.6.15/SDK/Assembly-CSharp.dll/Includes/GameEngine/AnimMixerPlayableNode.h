#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AnimMixerPlayableNode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AnimMixerPlayableNode"));
	}

	template <typename T = bool> T& m_ChildBlendAlternately() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& m_IsBlending() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = float> T& m_CurBlendingWeight() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_BlendingTargetWeight() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_BlendingSpeed() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& m_IsBlendToBase() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& m_BlendingLayer() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> static T& AdditiveHitLayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_IsPlayingHitAnim() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& HitAdditiveClipTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& HitAdditiveEclipseTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& HitAdditiveBlendTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& HitAdditiveBlendingSpeed() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& CurHitAdditiveWeight() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& CurrentBlendingChildAnimationClipplayableNodeIndex() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& NextBlendingChildAnimationClipplayableNodeIndex() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Create() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHitAdditiveWeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopSpecificLayerOfMixerNodeImmediately() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartBlending() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopBlending() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateHitAdditive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CurrentBlendWeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CurrentBlendLayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNextAvailableBlendNode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyChildAnimationClipPlayableBeginBlend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = bool> T get_ChildBlendAlternately() {
		return ((T (*)(AnimMixerPlayableNode*))(Il2CppBase() + 0x2B647FC))(this);
	}
	template <typename T = void> T set_ChildBlendAlternately(bool value) {
		return ((T (*)(AnimMixerPlayableNode*, bool))(Il2CppBase() + 0x2B64804))(this, value);
	}
	template <typename T = bool> T get_IsBlending() {
		return ((T (*)(AnimMixerPlayableNode*))(Il2CppBase() + 0x2B6480C))(this);
	}
	template <typename T = uintptr_t> static T Create(uintptr_t playableHandle, bool isBlendToBase) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x2B63D94))(0, playableHandle, isBlendToBase);
	}
	template <typename T = bool> T get_IsPlayingHitAnim() {
		return ((T (*)(AnimMixerPlayableNode*))(Il2CppBase() + 0x2B64814))(this);
	}
	template <typename T = void> T SetHitAdditiveWeight(float blendingTargetWeight, float clipTime, float blendTime) {
		return ((T (*)(AnimMixerPlayableNode*, float, float, float))(Il2CppBase() + 0x2B6481C))(this, blendingTargetWeight, clipTime, blendTime);
	}
	template <typename T = void> T StopSpecificLayerOfMixerNodeImmediately(int32_t Layer) {
		return ((T (*)(AnimMixerPlayableNode*, int32_t))(Il2CppBase() + 0x2B64970))(this, Layer);
	}
	template <typename T = void> T StartBlending(float from, float to, float blendTime, int32_t blendingLayer) {
		return ((T (*)(AnimMixerPlayableNode*, float, float, float, int32_t))(Il2CppBase() + 0x2B64A80))(this, from, to, blendTime, blendingLayer);
	}
	template <typename T = void> T StopBlending() {
		return ((T (*)(AnimMixerPlayableNode*))(Il2CppBase() + 0x2B64BAC))(this);
	}
	template <typename T = void> T Update(float deltaTime) {
		return ((T (*)(AnimMixerPlayableNode*, float))(Il2CppBase() + 0x2B64CA8))(this, deltaTime);
	}
	template <typename T = void> T UpdateHitAdditive(float deltaTime) {
		return ((T (*)(AnimMixerPlayableNode*, float))(Il2CppBase() + 0x2B64E4C))(this, deltaTime);
	}
	template <typename T = float> T CurrentBlendWeight() {
		return ((T (*)(AnimMixerPlayableNode*))(Il2CppBase() + 0x2B64FF0))(this);
	}
	template <typename T = int32_t> T CurrentBlendLayer() {
		return ((T (*)(AnimMixerPlayableNode*))(Il2CppBase() + 0x2B65090))(this);
	}
	template <typename T = uintptr_t> T GetNextAvailableBlendNode() {
		return ((T (*)(AnimMixerPlayableNode*))(Il2CppBase() + 0x2B65130))(this);
	}
	template <typename T = void> T NotifyChildAnimationClipPlayableBeginBlend(float blendTime) {
		return ((T (*)(AnimMixerPlayableNode*, float))(Il2CppBase() + 0x2B6526C))(this, blendTime);
	}
	template <typename T = void> T xLuaBaseProxy_Update(float P0) {
		return ((T (*)(AnimMixerPlayableNode*, float))(Il2CppBase() + 0x2B65444))(this, P0);
	}

};

}
