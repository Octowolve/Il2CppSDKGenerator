#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TouchUp2FingersHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TouchUp2FingersHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t gesture) {
		return ((T (*)(TouchUp2FingersHandler*, uintptr_t))(Il2CppBase() + 0x4BBC09C))(this, gesture);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t gesture, uintptr_t callback, uintptr_t object) {
		return ((T (*)(TouchUp2FingersHandler*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4BBEF64))(this, gesture, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(TouchUp2FingersHandler*, uintptr_t))(Il2CppBase() + 0x4BBEF90))(this, result);
	}

};

}
