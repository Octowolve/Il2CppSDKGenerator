#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Drag2FingersHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Drag2FingersHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t gesture) {
		return ((T (*)(Drag2FingersHandler*, uintptr_t))(Il2CppBase() + 0x4BBC7BC))(this, gesture);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t gesture, uintptr_t callback, uintptr_t object) {
		return ((T (*)(Drag2FingersHandler*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4BBE750))(this, gesture, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(Drag2FingersHandler*, uintptr_t))(Il2CppBase() + 0x4BBE77C))(this, result);
	}

};

}
