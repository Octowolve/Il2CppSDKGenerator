#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class AnimationState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "AnimationState"));
	}


	template <typename T = bool> T get_enabled() {
		return ((T (*)(AnimationState*))(Il2CppBase() + 0x46902AC))(this);
	}
	template <typename T = void> T set_enabled(bool value) {
		return ((T (*)(AnimationState*, bool))(Il2CppBase() + 0x4690344))(this, value);
	}
	template <typename T = void> T set_weight(float value) {
		return ((T (*)(AnimationState*, float))(Il2CppBase() + 0x46903E4))(this, value);
	}
	template <typename T = uintptr_t> T get_wrapMode() {
		return ((T (*)(AnimationState*))(Il2CppBase() + 0x4690484))(this);
	}
	template <typename T = void> T set_wrapMode(uintptr_t value) {
		return ((T (*)(AnimationState*, uintptr_t))(Il2CppBase() + 0x469051C))(this, value);
	}
	template <typename T = float> T get_time() {
		return ((T (*)(AnimationState*))(Il2CppBase() + 0x46905BC))(this);
	}
	template <typename T = void> T set_time(float value) {
		return ((T (*)(AnimationState*, float))(Il2CppBase() + 0x4690654))(this, value);
	}
	template <typename T = void> T set_normalizedTime(float value) {
		return ((T (*)(AnimationState*, float))(Il2CppBase() + 0x46906F4))(this, value);
	}
	template <typename T = float> T get_speed() {
		return ((T (*)(AnimationState*))(Il2CppBase() + 0x4690794))(this);
	}
	template <typename T = void> T set_speed(float value) {
		return ((T (*)(AnimationState*, float))(Il2CppBase() + 0x469082C))(this, value);
	}
	template <typename T = float> T get_length() {
		return ((T (*)(AnimationState*))(Il2CppBase() + 0x46908CC))(this);
	}
	template <typename T = void> T set_layer(int32_t value) {
		return ((T (*)(AnimationState*, int32_t))(Il2CppBase() + 0x4690964))(this, value);
	}
	template <typename T = uintptr_t> T get_clip() {
		return ((T (*)(AnimationState*))(Il2CppBase() + 0x4690A04))(this);
	}
	template <typename T = void> T AddMixingTransform(uintptr_t mix, bool recursive) {
		return ((T (*)(AnimationState*, uintptr_t, bool))(Il2CppBase() + 0x4690A9C))(this, mix, recursive);
	}
	template <typename T = void> T AddMixingTransform_1(uintptr_t mix) {
		return ((T (*)(AnimationState*, uintptr_t))(Il2CppBase() + 0x4690B44))(this, mix);
	}
	template <typename T = Il2CppString*> T get_name() {
		return ((T (*)(AnimationState*))(Il2CppBase() + 0x4690B4C))(this);
	}
	template <typename T = void> T set_blendMode(uintptr_t value) {
		return ((T (*)(AnimationState*, uintptr_t))(Il2CppBase() + 0x4690BE4))(this, value);
	}

};

}
