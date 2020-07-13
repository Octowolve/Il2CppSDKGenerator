#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EasingFunction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EasingFunction"));
	}


	template <typename T = float> T Invoke(float start, float end, float value) {
		return ((T (*)(EasingFunction*, float, float, float))(Il2CppBase() + 0x31A7284))(this, start, end, value);
	}
	template <typename T = uintptr_t> T BeginInvoke(float start, float end, float value, uintptr_t callback, uintptr_t object) {
		return ((T (*)(EasingFunction*, float, float, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x31C9310))(this, start, end, value, callback, object);
	}
	template <typename T = float> T EndInvoke(uintptr_t result) {
		return ((T (*)(EasingFunction*, uintptr_t))(Il2CppBase() + 0x31C93F4))(this, result);
	}

};

}
