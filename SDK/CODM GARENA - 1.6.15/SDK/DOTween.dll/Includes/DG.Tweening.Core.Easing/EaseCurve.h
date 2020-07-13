#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening.Core.Easing {

class EaseCurve
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening.Core.Easing", "EaseCurve"));
	}

	template <typename T = uintptr_t> T& _animCurve() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = float> T Evaluate(float time, float duration, float unusedOvershoot, float unusedPeriod) {
		return ((T (*)(EaseCurve*, float, float, float, float))(Il2CppBase() + 0x449F3B0))(this, time, duration, unusedOvershoot, unusedPeriod);
	}

};

}
