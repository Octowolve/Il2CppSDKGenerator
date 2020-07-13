#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Experimental.Director {

class AnimationPlayableGraphExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Experimental.Director", "AnimationPlayableGraphExtensions"));
	}


	template <typename T = uintptr_t> static T CreateAnimationClipPlayableEx(uintptr_t graph, uintptr_t animator, uintptr_t clip, Il2CppString* playableName) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4DADB08))(0, graph, animator, clip, playableName);
	}
	template <typename T = bool> static T InternalCreateAnimationClipPlayableEx(uintptr_t graph, uintptr_t animator, uintptr_t clip, uintptr_t handle, Il2CppString* playableName) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4DADC48))(0, graph, animator, clip, handle, playableName);
	}
	template <typename T = bool> static T INTERNAL_CALL_InternalCreateAnimationClipPlayableEx(uintptr_t graph, uintptr_t animator, uintptr_t clip, uintptr_t handle, Il2CppString* playableName) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4DADC6C))(0, graph, animator, clip, handle, playableName);
	}
	template <typename T = uintptr_t> static T CreateAnimationMixerPlayable(uintptr_t graph, int32_t inputCount) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4DADD24))(0, graph, inputCount);
	}
	template <typename T = uintptr_t> static T CreateAnimationMixerPlayable_1(uintptr_t graph, int32_t inputCount, bool normalizeWeights, Il2CppString* playableName) {
		return ((T (*)(void *, uintptr_t, int32_t, bool, Il2CppString*))(Il2CppBase() + 0x4DADDE0))(0, graph, inputCount, normalizeWeights, playableName);
	}
	template <typename T = bool> static T InternalCreateAnimationMixerPlayable(uintptr_t graph, int32_t inputCount, bool normalizeWeights, uintptr_t handle, Il2CppString* playableName) {
		return ((T (*)(void *, uintptr_t, int32_t, bool, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4DADE64))(0, graph, inputCount, normalizeWeights, handle, playableName);
	}
	template <typename T = bool> static T INTERNAL_CALL_InternalCreateAnimationMixerPlayable(uintptr_t graph, int32_t inputCount, bool normalizeWeights, uintptr_t handle, Il2CppString* playableName) {
		return ((T (*)(void *, uintptr_t, int32_t, bool, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4DADE88))(0, graph, inputCount, normalizeWeights, handle, playableName);
	}
	template <typename T = uintptr_t> static T CreateAnimationLayerMixerPlayable(uintptr_t graph, int32_t inputCount, Il2CppString* playableName) {
		return ((T (*)(void *, uintptr_t, int32_t, Il2CppString*))(Il2CppBase() + 0x4DADF40))(0, graph, inputCount, playableName);
	}
	template <typename T = bool> static T InternalCreateAnimationLayerMixerPlayable(uintptr_t graph, uintptr_t handle, Il2CppString* playableName) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4DADFB4))(0, graph, handle, playableName);
	}
	template <typename T = bool> static T INTERNAL_CALL_InternalCreateAnimationLayerMixerPlayable(uintptr_t graph, uintptr_t handle, Il2CppString* playableName) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4DADFCC))(0, graph, handle, playableName);
	}
	template <typename T = uintptr_t> static T GetAnimationOutput(uintptr_t graph, int32_t index) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4DAE074))(0, graph, index);
	}
	template <typename T = bool> static T InternalGetAnimationOutput(uintptr_t graph, int32_t index, uintptr_t* output) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0x4DAE168))(0, graph, index, output);
	}

};

}
