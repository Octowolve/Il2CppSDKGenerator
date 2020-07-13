#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DragStart2FingersHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DragStart2FingersHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t gesture) {
		return ((T (*)(DragStart2FingersHandler*, uintptr_t))(Il2CppBase() + 0x4BBC724))(this, gesture);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t gesture, uintptr_t callback, uintptr_t object) {
		return ((T (*)(DragStart2FingersHandler*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4BBE880))(this, gesture, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(DragStart2FingersHandler*, uintptr_t))(Il2CppBase() + 0x4BBE8AC))(this, result);
	}

};

}
