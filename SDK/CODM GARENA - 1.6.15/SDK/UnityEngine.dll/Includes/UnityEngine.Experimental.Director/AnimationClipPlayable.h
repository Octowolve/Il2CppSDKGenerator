#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Experimental.Director {

class AnimationClipPlayable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Experimental.Director", "AnimationClipPlayable"));
	}


	template <typename T = uintptr_t> T get_clip() {
		return ((T (*)(AnimationClipPlayable*))(Il2CppBase() + 0x4DACD70))(this);
	}
	template <typename T = float> T get_speed() {
		return ((T (*)(AnimationClipPlayable*))(Il2CppBase() + 0x4DACD7C))(this);
	}
	template <typename T = void> T set_speed(float value) {
		return ((T (*)(AnimationClipPlayable*, float))(Il2CppBase() + 0x4DACD88))(this, value);
	}
	template <typename T = bool> T get_applyFootIK() {
		return ((T (*)(AnimationClipPlayable*))(Il2CppBase() + 0x4DACD98))(this);
	}
	template <typename T = void> T set_applyFootIK(bool value) {
		return ((T (*)(AnimationClipPlayable*, bool))(Il2CppBase() + 0x4DACDA4))(this, value);
	}
	template <typename T = bool> T get_removeStartOffset() {
		return ((T (*)(AnimationClipPlayable*))(Il2CppBase() + 0x4DACDB4))(this);
	}
	template <typename T = void> T set_removeStartOffset(bool value) {
		return ((T (*)(AnimationClipPlayable*, bool))(Il2CppBase() + 0x4DACDC0))(this, value);
	}
	template <typename T = bool> T Play(uintptr_t animator, uintptr_t animationClip) {
		return ((T (*)(AnimationClipPlayable*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DACDD0))(this, animator, animationClip);
	}
	template <typename T = bool> T Play_1(uintptr_t animator, uintptr_t animationClip, float speed) {
		return ((T (*)(AnimationClipPlayable*, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x4DACDFC))(this, animator, animationClip, speed);
	}
	template <typename T = bool> T SetClip(uintptr_t animator, uintptr_t animationClip) {
		return ((T (*)(AnimationClipPlayable*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DACE48))(this, animator, animationClip);
	}
	template <typename T = bool> static T Play_2(uintptr_t handle, uintptr_t animator, uintptr_t animationClip, float speed) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x4DACE28))(0, handle, animator, animationClip, speed);
	}
	template <typename T = bool> static T INTERNAL_CALL_Play(uintptr_t handle, uintptr_t animator, uintptr_t animationClip, float speed) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x4DACE84))(0, handle, animator, animationClip, speed);
	}
	template <typename T = uintptr_t> static T GetAnimationClip(uintptr_t handle) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DACD78))(0, handle);
	}
	template <typename T = uintptr_t> static T INTERNAL_CALL_GetAnimationClip(uintptr_t handle) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DACF3C))(0, handle);
	}
	template <typename T = bool> static T SetAnimationClip(uintptr_t handle, uintptr_t animator, uintptr_t animationClip) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DACE6C))(0, handle, animator, animationClip);
	}
	template <typename T = bool> static T INTERNAL_CALL_SetAnimationClip(uintptr_t handle, uintptr_t animator, uintptr_t animationClip) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DACFD4))(0, handle, animator, animationClip);
	}
	template <typename T = float> static T GetSpeed(uintptr_t handle) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DACD84))(0, handle);
	}
	template <typename T = float> static T INTERNAL_CALL_GetSpeed(uintptr_t handle) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DAD07C))(0, handle);
	}
	template <typename T = void> static T SetSpeed(uintptr_t handle, float value) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x4DACD94))(0, handle, value);
	}
	template <typename T = void> static T INTERNAL_CALL_SetSpeed(uintptr_t handle, float value) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x4DAD114))(0, handle, value);
	}
	template <typename T = bool> static T GetApplyFootIK(uintptr_t handle) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DACDA0))(0, handle);
	}
	template <typename T = bool> static T INTERNAL_CALL_GetApplyFootIK(uintptr_t handle) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DAD1B4))(0, handle);
	}
	template <typename T = void> static T SetApplyFootIK(uintptr_t handle, bool value) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x4DACDB0))(0, handle, value);
	}
	template <typename T = void> static T INTERNAL_CALL_SetApplyFootIK(uintptr_t handle, bool value) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x4DAD24C))(0, handle, value);
	}
	template <typename T = bool> static T GetRemoveStartOffset(uintptr_t handle) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DACDBC))(0, handle);
	}
	template <typename T = bool> static T INTERNAL_CALL_GetRemoveStartOffset(uintptr_t handle) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DAD2EC))(0, handle);
	}
	template <typename T = void> static T SetRemoveStartOffset(uintptr_t handle, bool value) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x4DACDCC))(0, handle, value);
	}
	template <typename T = void> static T INTERNAL_CALL_SetRemoveStartOffset(uintptr_t handle, bool value) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x4DAD384))(0, handle, value);
	}

};

}
