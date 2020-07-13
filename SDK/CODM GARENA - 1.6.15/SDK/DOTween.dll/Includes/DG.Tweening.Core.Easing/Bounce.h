#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening.Core.Easing {

class Bounce
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening.Core.Easing", "Bounce"));
	}


	template <typename T = float> static T EaseIn(float time, float duration, float unusedOvershootOrAmplitude, float unusedPeriod) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x449F218))(0, time, duration, unusedOvershootOrAmplitude, unusedPeriod);
	}
	template <typename T = float> static T EaseOut(float time, float duration, float unusedOvershootOrAmplitude, float unusedPeriod) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x449F250))(0, time, duration, unusedOvershootOrAmplitude, unusedPeriod);
	}
	template <typename T = float> static T EaseInOut(float time, float duration, float unusedOvershootOrAmplitude, float unusedPeriod) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x449F318))(0, time, duration, unusedOvershootOrAmplitude, unusedPeriod);
	}

};

}
