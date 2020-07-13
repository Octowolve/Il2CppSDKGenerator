#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DoubleTapHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DoubleTapHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t gesture) {
		return ((T (*)(DoubleTapHandler*, uintptr_t))(Il2CppBase() + 0x4BBB97C))(this, gesture);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t gesture, uintptr_t callback, uintptr_t object) {
		return ((T (*)(DoubleTapHandler*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4BBE704))(this, gesture, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(DoubleTapHandler*, uintptr_t))(Il2CppBase() + 0x4BBE730))(this, result);
	}

};

}
