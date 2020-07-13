#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening.Core.Easing {

class EaseManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening.Core.Easing", "EaseManager"));
	}

	template <typename T = float> static T& _PiOver2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& _TwoPi() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = float> static T Evaluate(uintptr_t t, float time, float duration, float overshootOrAmplitude, float period) {
		return ((T (*)(void *, uintptr_t, float, float, float, float))(Il2CppBase() + 0x449F45C))(0, t, time, duration, overshootOrAmplitude, period);
	}
	template <typename T = float> static T Evaluate_1(uintptr_t easeType, uintptr_t customEase, float time, float duration, float overshootOrAmplitude, float period) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float, float, float, float))(Il2CppBase() + 0x449F4B4))(0, easeType, customEase, time, duration, overshootOrAmplitude, period);
	}
	template <typename T = uintptr_t> static T ToEaseFunction(uintptr_t ease) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44A0408))(0, ease);
	}
	template <typename T = bool> static T IsFlashEase(uintptr_t ease) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44A25D0))(0, ease);
	}

};

}
