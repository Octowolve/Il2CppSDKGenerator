#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening.Core.Easing {

class Flash
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening.Core.Easing", "Flash"));
	}


	template <typename T = float> static T Ease(float time, float duration, float overshootOrAmplitude, float period) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x449FF28))(0, time, duration, overshootOrAmplitude, period);
	}
	template <typename T = float> static T EaseIn(float time, float duration, float overshootOrAmplitude, float period) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x44A004C))(0, time, duration, overshootOrAmplitude, period);
	}
	template <typename T = float> static T EaseOut(float time, float duration, float overshootOrAmplitude, float period) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x44A0174))(0, time, duration, overshootOrAmplitude, period);
	}
	template <typename T = float> static T EaseInOut(float time, float duration, float overshootOrAmplitude, float period) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x44A02A4))(0, time, duration, overshootOrAmplitude, period);
	}
	template <typename T = float> static T WeightedEase(float overshootOrAmplitude, float period, int32_t stepIndex, float stepDuration, float dir, float res) {
		return ((T (*)(void *, float, float, int32_t, float, float, float))(Il2CppBase() + 0x44A3230))(0, overshootOrAmplitude, period, stepIndex, stepDuration, dir, res);
	}

};

}
