#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Time
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Time"));
	}


	template <typename T = float> static T get_time() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D33CD8))(0);
	}
	template <typename T = float> static T get_timeSinceLevelLoad() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D33D68))(0);
	}
	template <typename T = float> static T get_deltaTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D33DF8))(0);
	}
	template <typename T = float> static T get_unscaledTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D33E88))(0);
	}
	template <typename T = float> static T get_fixedUnscaledTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D33F18))(0);
	}
	template <typename T = float> static T get_unscaledDeltaTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D33FA8))(0);
	}
	template <typename T = float> static T get_fixedDeltaTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D34038))(0);
	}
	template <typename T = void> static T set_fixedDeltaTime(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4D340C8))(0, value);
	}
	template <typename T = void> static T set_maximumDeltaTime(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4D34160))(0, value);
	}
	template <typename T = float> static T get_smoothDeltaTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D341F8))(0);
	}
	template <typename T = void> static T set_maximumParticleDeltaTime(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4D34288))(0, value);
	}
	template <typename T = float> static T get_timeScale() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D34320))(0);
	}
	template <typename T = void> static T set_timeScale(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4D343B0))(0, value);
	}
	template <typename T = int32_t> static T get_frameCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D34448))(0);
	}
	template <typename T = int32_t> static T get_renderedFrameCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D344D8))(0);
	}
	template <typename T = float> static T get_realtimeSinceStartup() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D34568))(0);
	}
	template <typename T = int32_t> static T get_captureFramerate() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D345F8))(0);
	}
	template <typename T = void> static T set_captureFramerate(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4D34688))(0, value);
	}

};

}
