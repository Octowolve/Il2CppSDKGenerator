#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Mathf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Mathf"));
	}

	template <typename T = float> static T& Epsilon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> static T ClosestPowerOfTwo(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4AB0E3C))(0, value);
	}
	template <typename T = float> static T GammaToLinearSpace(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4AB0ED4))(0, value);
	}
	template <typename T = float> static T LinearToGammaSpace(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4AB0F6C))(0, value);
	}
	template <typename T = uintptr_t> static T CorrelatedColorTemperatureToRGB(float kelvin) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4AB1004))(0, kelvin);
	}
	template <typename T = void> static T INTERNAL_CALL_CorrelatedColorTemperatureToRGB(float kelvin, uintptr_t* value) {
		return ((T (*)(void *, float, uintptr_t*))(Il2CppBase() + 0x4AB10C8))(0, kelvin, value);
	}
	template <typename T = bool> static T IsPowerOfTwo(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4AB1168))(0, value);
	}
	template <typename T = int32_t> static T NextPowerOfTwo(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4AB1200))(0, value);
	}
	template <typename T = float> static T PerlinNoise(float x, float y) {
		return ((T (*)(void *, float, float))(Il2CppBase() + 0x4AB1298))(0, x, y);
	}
	template <typename T = float> static T Sin(float f) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4AB1338))(0, f);
	}
	template <typename T = float> static T Cos(float f) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4AB1360))(0, f);
	}
	template <typename T = float> static T Tan(float f) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4AB1388))(0, f);
	}
	template <typename T = float> static T Asin(float f) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4AB13B0))(0, f);
	}
	template <typename T = float> static T Acos(float f) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4AB13D8))(0, f);
	}
	template <typename T = float> static T AcosSafe(float f) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4AB1400))(0, f);
	}
	template <typename T = float> static T Atan(float f) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4AB1510))(0, f);
	}
	template <typename T = float> static T Atan2(float y, float x) {
		return ((T (*)(void *, float, float))(Il2CppBase() + 0x4AB1538))(0, y, x);
	}
	template <typename T = float> static T Sqrt(float f) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4AB156C))(0, f);
	}
	template <typename T = float> static T Abs(float f) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4AB158C))(0, f);
	}
	template <typename T = int32_t> static T Abs_1(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4AB1598))(0, value);
	}
	template <typename T = float> static T Min(float a, float b) {
		return ((T (*)(void *, float, float))(Il2CppBase() + 0x4AB15A8))(0, a, b);
	}
	template <typename T = float> static T Min_1(Il2CppArray<uintptr_t>* values) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4AB15C4))(0, values);
	}
	template <typename T = int32_t> static T Min_2(int32_t a, int32_t b) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x4AB167C))(0, a, b);
	}
	template <typename T = int32_t> static T Min_3(Il2CppArray<uintptr_t>* values) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4AB168C))(0, values);
	}
	template <typename T = float> static T Max(float a, float b) {
		return ((T (*)(void *, float, float))(Il2CppBase() + 0x4AB172C))(0, a, b);
	}
	template <typename T = float> static T Max_1(Il2CppArray<uintptr_t>* values) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4AB1748))(0, values);
	}
	template <typename T = int32_t> static T Max_2(int32_t a, int32_t b) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x4AB1800))(0, a, b);
	}
	template <typename T = int32_t> static T Max_3(Il2CppArray<uintptr_t>* values) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4AB1810))(0, values);
	}
	template <typename T = float> static T Pow(float f, float p) {
		return ((T (*)(void *, float, float))(Il2CppBase() + 0x4AB18B0))(0, f, p);
	}
	template <typename T = float> static T Exp(float power) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4AB18E4))(0, power);
	}
	template <typename T = float> static T Log(float f, float p) {
		return ((T (*)(void *, float, float))(Il2CppBase() + 0x4AB190C))(0, f, p);
	}
	template <typename T = float> static T Log_1(float f) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4AB1958))(0, f);
	}
	template <typename T = float> static T Log10(float f) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4AB1980))(0, f);
	}
	template <typename T = float> static T Ceil(float f) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4AB19A8))(0, f);
	}
	template <typename T = float> static T Floor(float f) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4AB19B0))(0, f);
	}
	template <typename T = float> static T Round(float f) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4AB19B8))(0, f);
	}
	template <typename T = int32_t> static T CeilToInt(float f) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4AB1A80))(0, f);
	}
	template <typename T = int32_t> static T FloorToInt(float f) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4AB1AA0))(0, f);
	}
	template <typename T = int32_t> static T RoundToInt(float f) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4AB1AC0))(0, f);
	}
	template <typename T = float> static T Sign(float f) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4AB1B88))(0, f);
	}
	template <typename T = float> static T Clamp(float value, float min, float max) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x4AB14E0))(0, value, min, max);
	}
	template <typename T = int32_t> static T Clamp_1(int32_t value, int32_t min, int32_t max) {
		return ((T (*)(void *, int32_t, int32_t, int32_t))(Il2CppBase() + 0x4AB1BA8))(0, value, min, max);
	}
	template <typename T = float> static T Clamp01(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4AB1BC4))(0, value);
	}
	template <typename T = float> static T Lerp(float a, float b, float t) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x4AB1BF8))(0, a, b, t);
	}
	template <typename T = float> static T LerpUnclamped(float a, float b, float t) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x4AB1CE4))(0, a, b, t);
	}
	template <typename T = float> static T LerpAngle(float a, float b, float t) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x4AB1D04))(0, a, b, t);
	}
	template <typename T = float> static T MoveTowards(float current, float target, float maxDelta) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x4AB1F18))(0, current, target, maxDelta);
	}
	template <typename T = float> static T MoveTowardsAngle(float current, float target, float maxDelta) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x4AB2030))(0, current, target, maxDelta);
	}
	template <typename T = float> static T SmoothStep(float from, float to, float t) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x4AB2244))(0, from, to, t);
	}
	template <typename T = bool> static T Approximately(float a, float b) {
		return ((T (*)(void *, float, float))(Il2CppBase() + 0x4AB2358))(0, a, b);
	}
	template <typename T = float> static T SmoothDamp(float current, float target, uintptr_t currentVelocity, float smoothTime) {
		return ((T (*)(void *, float, float, uintptr_t, float))(Il2CppBase() + 0x4AB246C))(0, current, target, currentVelocity, smoothTime);
	}
	template <typename T = float> static T SmoothDamp_1(float current, float target, uintptr_t currentVelocity, float smoothTime, float maxSpeed, float deltaTime) {
		return ((T (*)(void *, float, float, uintptr_t, float, float, float))(Il2CppBase() + 0x4AB2558))(0, current, target, currentVelocity, smoothTime, maxSpeed, deltaTime);
	}
	template <typename T = float> static T SmoothDampAngle(float current, float target, uintptr_t currentVelocity, float smoothTime) {
		return ((T (*)(void *, float, float, uintptr_t, float))(Il2CppBase() + 0x4AB2704))(0, current, target, currentVelocity, smoothTime);
	}
	template <typename T = float> static T SmoothDampAngle_1(float current, float target, uintptr_t currentVelocity, float smoothTime, float maxSpeed, float deltaTime) {
		return ((T (*)(void *, float, float, uintptr_t, float, float, float))(Il2CppBase() + 0x4AB27F0))(0, current, target, currentVelocity, smoothTime, maxSpeed, deltaTime);
	}
	template <typename T = float> static T Repeat(float t, float length) {
		return ((T (*)(void *, float, float))(Il2CppBase() + 0x4AB1E50))(0, t, length);
	}
	template <typename T = float> static T InverseLerp(float a, float b, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x4AB28E0))(0, a, b, value);
	}
	template <typename T = float> static T DeltaAngle(float current, float target) {
		return ((T (*)(void *, float, float))(Il2CppBase() + 0x4AB2160))(0, current, target);
	}

};

}
