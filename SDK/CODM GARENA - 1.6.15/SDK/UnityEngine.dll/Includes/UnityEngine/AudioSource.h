#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class AudioSource
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "AudioSource"));
	}


	template <typename T = float> T get_volume() {
		return ((T (*)(AudioSource*))(Il2CppBase() + 0x469D548))(this);
	}
	template <typename T = void> T set_volume(float value) {
		return ((T (*)(AudioSource*, float))(Il2CppBase() + 0x469D5E0))(this, value);
	}
	template <typename T = float> T get_pitch() {
		return ((T (*)(AudioSource*))(Il2CppBase() + 0x469D680))(this);
	}
	template <typename T = void> T set_pitch(float value) {
		return ((T (*)(AudioSource*, float))(Il2CppBase() + 0x469D718))(this, value);
	}
	template <typename T = void> T set_time(float value) {
		return ((T (*)(AudioSource*, float))(Il2CppBase() + 0x469D7B8))(this, value);
	}
	template <typename T = uintptr_t> T get_clip() {
		return ((T (*)(AudioSource*))(Il2CppBase() + 0x469D858))(this);
	}
	template <typename T = void> T set_clip(uintptr_t value) {
		return ((T (*)(AudioSource*, uintptr_t))(Il2CppBase() + 0x469D8F0))(this, value);
	}
	template <typename T = void> T Play(uint64_t delay) {
		return ((T (*)(AudioSource*, uint64_t))(Il2CppBase() + 0x469D990))(this, delay);
	}
	template <typename T = void> T Play_1() {
		return ((T (*)(AudioSource*))(Il2CppBase() + 0x469DA38))(this);
	}
	template <typename T = void> T Stop() {
		return ((T (*)(AudioSource*))(Il2CppBase() + 0x469DA58))(this);
	}
	template <typename T = void> T Pause() {
		return ((T (*)(AudioSource*))(Il2CppBase() + 0x469DAF0))(this);
	}
	template <typename T = void> static T INTERNAL_CALL_Pause(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x469DAF8))(0, self);
	}
	template <typename T = bool> T get_isPlaying() {
		return ((T (*)(AudioSource*))(Il2CppBase() + 0x469DB90))(this);
	}
	template <typename T = void> T PlayOneShot(uintptr_t clip, float volumeScale) {
		return ((T (*)(AudioSource*, uintptr_t, float))(Il2CppBase() + 0x469DC28))(this, clip, volumeScale);
	}
	template <typename T = void> T PlayOneShot_1(uintptr_t clip) {
		return ((T (*)(AudioSource*, uintptr_t))(Il2CppBase() + 0x469DCD0))(this, clip);
	}
	template <typename T = void> static T PlayClipAtPoint(uintptr_t clip, Il2CppVector3 position) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x469DCD8))(0, clip, position);
	}
	template <typename T = void> static T PlayClipAtPoint_1(uintptr_t clip, Il2CppVector3 position, float volume) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, float))(Il2CppBase() + 0x469DD00))(0, clip, position, volume);
	}
	template <typename T = void> T set_loop(bool value) {
		return ((T (*)(AudioSource*, bool))(Il2CppBase() + 0x469E0DC))(this, value);
	}
	template <typename T = void> T set_playOnAwake(bool value) {
		return ((T (*)(AudioSource*, bool))(Il2CppBase() + 0x469E17C))(this, value);
	}
	template <typename T = void> T set_spatialBlend(float value) {
		return ((T (*)(AudioSource*, float))(Il2CppBase() + 0x469E03C))(this, value);
	}
	template <typename T = void> T set_priority(int32_t value) {
		return ((T (*)(AudioSource*, int32_t))(Il2CppBase() + 0x469E21C))(this, value);
	}
	template <typename T = void> T set_mute(bool value) {
		return ((T (*)(AudioSource*, bool))(Il2CppBase() + 0x469E2BC))(this, value);
	}

};

}
