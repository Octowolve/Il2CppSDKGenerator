#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Random
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Random"));
	}


	template <typename T = int32_t> static T get_seed() {
		return ((T (*)(void *))(Il2CppBase() + 0x4ACA3B0))(0);
	}
	template <typename T = void> static T set_seed(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4ACA440))(0, value);
	}
	template <typename T = void> static T InitState(int32_t seed) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4ACA4D8))(0, seed);
	}
	template <typename T = float> static T Range(float min, float max) {
		return ((T (*)(void *, float, float))(Il2CppBase() + 0x4ACA570))(0, min, max);
	}
	template <typename T = int32_t> static T Range_1(int32_t min, int32_t max) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x4ACA610))(0, min, max);
	}
	template <typename T = int32_t> static T RandomRangeInt(int32_t min, int32_t max) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x4ACA614))(0, min, max);
	}
	template <typename T = float> static T get_value() {
		return ((T (*)(void *))(Il2CppBase() + 0x4ACA6B4))(0);
	}
	template <typename T = void> static T GetRandomUnitCircle(uintptr_t* output) {
		return ((T (*)(void *, uintptr_t*))(Il2CppBase() + 0x4ACA744))(0, output);
	}
	template <typename T = Il2CppVector2> static T get_insideUnitCircle() {
		return ((T (*)(void *))(Il2CppBase() + 0x4ACA7DC))(0);
	}
	template <typename T = Il2CppQuaternion> static T get_rotation() {
		return ((T (*)(void *))(Il2CppBase() + 0x4ACA810))(0);
	}
	template <typename T = void> static T INTERNAL_get_rotation(uintptr_t* value) {
		return ((T (*)(void *, uintptr_t*))(Il2CppBase() + 0x4ACA844))(0, value);
	}
	template <typename T = uintptr_t> static T ColorHSV() {
		return ((T (*)(void *))(Il2CppBase() + 0x4ACA8DC))(0);
	}
	template <typename T = uintptr_t> static T ColorHSV_1(float hueMin, float hueMax, float saturationMin, float saturationMax, float valueMin, float valueMax, float alphaMin, float alphaMax) {
		return ((T (*)(void *, float, float, float, float, float, float, float, float))(Il2CppBase() + 0x4ACA938))(0, hueMin, hueMax, saturationMin, saturationMax, valueMin, valueMax, alphaMin, alphaMax);
	}

};

}
