#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class BlendTreePlayableNode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "BlendTreePlayableNode"));
	}

	template <typename T = float> T& BlendValueX() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& BlendValueY() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& BlendPlayableNodes() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ClipInfos() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ClipPositionArray() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& WeightArray() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& blendTreeType() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Create() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckBlendTreeIsValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBlendTreeChildNodeAnimationClips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBlendTreeChildNodeAnimationClip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeClipPositionArray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAllBlendTreePlayableNode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeights() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WeightForIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeights1d() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeightsSimpleDirectional() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = uintptr_t> static T Create(uintptr_t animator, uintptr_t playableGraph, uintptr_t blendTreeType, Il2CppList<uintptr_t>* clips) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3612B84))(0, animator, playableGraph, blendTreeType, clips);
	}
	template <typename T = bool> T CheckBlendTreeIsValid() {
		return ((T (*)(BlendTreePlayableNode*))(Il2CppBase() + 0x3613028))(this);
	}
	template <typename T = void> T SetBlendTreeChildNodeAnimationClips(uintptr_t animator, Il2CppList<uintptr_t>* clips, bool useAnimationSetClip) {
		return ((T (*)(BlendTreePlayableNode*, uintptr_t, Il2CppList<uintptr_t>*, bool))(Il2CppBase() + 0x3613248))(this, animator, clips, useAnimationSetClip);
	}
	template <typename T = void> T SetBlendTreeChildNodeAnimationClip(uintptr_t animator, int32_t index, uintptr_t animationClip, bool useAnimationSetClip) {
		return ((T (*)(BlendTreePlayableNode*, uintptr_t, int32_t, uintptr_t, bool))(Il2CppBase() + 0x3613560))(this, animator, index, animationClip, useAnimationSetClip);
	}
	template <typename T = void> T ChangeClipPositionArray(Il2CppArray<uintptr_t>* newClipPostionArray) {
		return ((T (*)(BlendTreePlayableNode*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x361382C))(this, newClipPostionArray);
	}
	template <typename T = void> T ClearAllBlendTreePlayableNode() {
		return ((T (*)(BlendTreePlayableNode*))(Il2CppBase() + 0x3613AA8))(this);
	}
	template <typename T = void> T SetParam(float blendValueX, float blendValueY) {
		return ((T (*)(BlendTreePlayableNode*, float, float))(Il2CppBase() + 0x3613B80))(this, blendValueX, blendValueY);
	}
	template <typename T = void> T GetWeights() {
		return ((T (*)(BlendTreePlayableNode*))(Il2CppBase() + 0x3613C4C))(this);
	}
	template <typename T = float> T WeightForIndex(int32_t count, int32_t index, float blend) {
		return ((T (*)(BlendTreePlayableNode*, int32_t, int32_t, float))(Il2CppBase() + 0x36145AC))(this, count, index, blend);
	}
	template <typename T = void> T GetWeights1d() {
		return ((T (*)(BlendTreePlayableNode*))(Il2CppBase() + 0x3613D8C))(this);
	}
	template <typename T = void> T GetWeightsSimpleDirectional() {
		return ((T (*)(BlendTreePlayableNode*))(Il2CppBase() + 0x3613FA4))(this);
	}
	template <typename T = void> T ForceUpdate() {
		return ((T (*)(BlendTreePlayableNode*))(Il2CppBase() + 0x3614928))(this);
	}
	template <typename T = void> T Update(float deltaTime) {
		return ((T (*)(BlendTreePlayableNode*, float))(Il2CppBase() + 0x3614A40))(this, deltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_Update(float P0) {
		return ((T (*)(BlendTreePlayableNode*, float))(Il2CppBase() + 0x3614B6C))(this, P0);
	}

};

}
