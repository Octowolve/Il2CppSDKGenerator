#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EasingFunction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("sharedRuntime.dll", "", "EasingFunction"));
	}


	template <typename T = double> T Invoke(double currentTime, double startingValue, double finalValue, double duration) {
		return ((T (*)(EasingFunction*, double, double, double, double))(Il2CppBase() + 0x5223858))(this, currentTime, startingValue, finalValue, duration);
	}
	template <typename T = uintptr_t> T BeginInvoke(double currentTime, double startingValue, double finalValue, double duration, uintptr_t callback, uintptr_t object) {
		return ((T (*)(EasingFunction*, double, double, double, double, uintptr_t, uintptr_t))(Il2CppBase() + 0x522392C))(this, currentTime, startingValue, finalValue, duration, callback, object);
	}
	template <typename T = double> T EndInvoke(uintptr_t result) {
		return ((T (*)(EasingFunction*, uintptr_t))(Il2CppBase() + 0x5223A3C))(this, result);
	}

};

}
