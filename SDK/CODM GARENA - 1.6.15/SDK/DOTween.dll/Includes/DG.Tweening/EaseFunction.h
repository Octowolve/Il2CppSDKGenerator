#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening {

class EaseFunction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening", "EaseFunction"));
	}


	template <typename T = float> T Invoke(float time, float duration, float overshootOrAmplitude, float period) {
		return ((T (*)(EaseFunction*, float, float, float, float))(Il2CppBase() + 0x449FE64))(this, time, duration, overshootOrAmplitude, period);
	}
	template <typename T = uintptr_t> T BeginInvoke(float time, float duration, float overshootOrAmplitude, float period, uintptr_t callback, uintptr_t object) {
		return ((T (*)(EaseFunction*, float, float, float, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x44AFF28))(this, time, duration, overshootOrAmplitude, period, callback, object);
	}
	template <typename T = float> T EndInvoke(uintptr_t result) {
		return ((T (*)(EaseFunction*, uintptr_t))(Il2CppBase() + 0x44B002C))(this, result);
	}

};

}
