#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FocusOnHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FocusOnHandler"));
	}


	template <typename T = void> T Invoke(float duration) {
		return ((T (*)(FocusOnHandler*, float))(Il2CppBase() + 0x1DA1EB8))(this, duration);
	}
	template <typename T = uintptr_t> T BeginInvoke(float duration, uintptr_t callback, uintptr_t object) {
		return ((T (*)(FocusOnHandler*, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DB1CE8))(this, duration, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(FocusOnHandler*, uintptr_t))(Il2CppBase() + 0x1DB1DA4))(this, result);
	}

};

}
