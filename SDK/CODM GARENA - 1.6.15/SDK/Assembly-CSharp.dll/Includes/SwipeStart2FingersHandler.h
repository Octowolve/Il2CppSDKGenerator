#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SwipeStart2FingersHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SwipeStart2FingersHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t gesture) {
		return ((T (*)(SwipeStart2FingersHandler*, uintptr_t))(Il2CppBase() + 0x4BBC8EC))(this, gesture);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t gesture, uintptr_t callback, uintptr_t object) {
		return ((T (*)(SwipeStart2FingersHandler*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4BBED78))(this, gesture, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(SwipeStart2FingersHandler*, uintptr_t))(Il2CppBase() + 0x4BBEDA4))(this, result);
	}

};

}
