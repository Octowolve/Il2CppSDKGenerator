#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FucPlay
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FucPlay"));
	}


	template <typename T = void> T Invoke(float time) {
		return ((T (*)(FucPlay*, float))(Il2CppBase() + 0x3AEF078))(this, time);
	}
	template <typename T = uintptr_t> T BeginInvoke(float time, uintptr_t callback, uintptr_t object) {
		return ((T (*)(FucPlay*, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x3AEF104))(this, time, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(FucPlay*, uintptr_t))(Il2CppBase() + 0x3AEF1C0))(this, result);
	}

};

}
