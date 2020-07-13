#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CAnimationState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CAnimationState"));
	}


	template <typename T = int32_t> T get_ID() {
		return ((T (*)(CAnimationState*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_ID(int32_t value) {
		return ((T (*)(CAnimationState*, int32_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = uintptr_t> T get_parent() {
		return ((T (*)(CAnimationState*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_parent(uintptr_t value) {
		return ((T (*)(CAnimationState*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = uintptr_t> T get_playable() {
		return ((T (*)(CAnimationState*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_playable(uintptr_t value) {
		return ((T (*)(CAnimationState*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = float> T get_time() {
		return ((T (*)(CAnimationState*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_time(float value) {
		return ((T (*)(CAnimationState*, float))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = float> T get_speed() {
		return ((T (*)(CAnimationState*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_speed(float value) {
		return ((T (*)(CAnimationState*, float))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = float> T get_length() {
		return ((T (*)(CAnimationState*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_length(float value) {
		return ((T (*)(CAnimationState*, float))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = float> T get_weight() {
		return ((T (*)(CAnimationState*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_weight(float value) {
		return ((T (*)(CAnimationState*, float))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = bool> T get_isPlaying() {
		return ((T (*)(CAnimationState*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_isValid() {
		return ((T (*)(CAnimationState*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_Paused() {
		return ((T (*)(CAnimationState*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_Paused(bool value) {
		return ((T (*)(CAnimationState*, bool))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = int32_t> T get_Layer() {
		return ((T (*)(CAnimationState*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_Layer(int32_t value) {
		return ((T (*)(CAnimationState*, int32_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = Il2CppString*> T get_clipName() {
		return ((T (*)(CAnimationState*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_clipName(Il2CppString* value) {
		return ((T (*)(CAnimationState*, Il2CppString*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = float> T get_clipTime() {
		return ((T (*)(CAnimationState*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_clipTime(float value) {
		return ((T (*)(CAnimationState*, float))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = uintptr_t> T get_wrapMode() {
		return ((T (*)(CAnimationState*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_wrapMode(uintptr_t value) {
		return ((T (*)(CAnimationState*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = uintptr_t> T get_FFinish() {
		return ((T (*)(CAnimationState*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_FFinish(uintptr_t value) {
		return ((T (*)(CAnimationState*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = uintptr_t> T get_FLayerHide() {
		return ((T (*)(CAnimationState*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_FLayerHide(uintptr_t value) {
		return ((T (*)(CAnimationState*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T Play() {
		return ((T (*)(CAnimationState*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Stop() {
		return ((T (*)(CAnimationState*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Update(float delta) {
		return ((T (*)(CAnimationState*, float))(Il2CppBase() + 0x0))(this, delta);
	}

};

}
