#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening {

class DOVirtual
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening", "DOVirtual"));
	}


	template <typename T = uintptr_t> static T Float(float from, float to, float duration, void* onVirtualUpdate) {
		return ((T (*)(void *, float, float, float, void*))(Il2CppBase() + 0x44AF38C))(0, from, to, duration, onVirtualUpdate);
	}
	template <typename T = float> static T EasedValue(float from, float to, float lifetimePercentage, uintptr_t easeType) {
		return ((T (*)(void *, float, float, float, uintptr_t))(Il2CppBase() + 0x44AF5A4))(0, from, to, lifetimePercentage, easeType);
	}
	template <typename T = float> static T EasedValue_1(float from, float to, float lifetimePercentage, uintptr_t easeType, float overshoot) {
		return ((T (*)(void *, float, float, float, uintptr_t, float))(Il2CppBase() + 0x44AF6B4))(0, from, to, lifetimePercentage, easeType, overshoot);
	}
	template <typename T = float> static T EasedValue_2(float from, float to, float lifetimePercentage, uintptr_t easeType, float amplitude, float period) {
		return ((T (*)(void *, float, float, float, uintptr_t, float, float))(Il2CppBase() + 0x44AF7C4))(0, from, to, lifetimePercentage, easeType, amplitude, period);
	}
	template <typename T = float> static T EasedValue_3(float from, float to, float lifetimePercentage, uintptr_t easeCurve) {
		return ((T (*)(void *, float, float, float, uintptr_t))(Il2CppBase() + 0x44AF820))(0, from, to, lifetimePercentage, easeCurve);
	}
	template <typename T = uintptr_t> static T DelayedCall(float delay, uintptr_t callback, bool ignoreTimeScale) {
		return ((T (*)(void *, float, uintptr_t, bool))(Il2CppBase() + 0x44AF98C))(0, delay, callback, ignoreTimeScale);
	}

};

}
