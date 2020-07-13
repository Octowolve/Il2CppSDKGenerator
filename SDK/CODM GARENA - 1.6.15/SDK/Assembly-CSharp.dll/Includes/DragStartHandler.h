#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DragStartHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DragStartHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t gesture) {
		return ((T (*)(DragStartHandler*, uintptr_t))(Il2CppBase() + 0x4BBBBDC))(this, gesture);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t gesture, uintptr_t callback, uintptr_t object) {
		return ((T (*)(DragStartHandler*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4BBE8CC))(this, gesture, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(DragStartHandler*, uintptr_t))(Il2CppBase() + 0x4BBE8F8))(this, result);
	}

};

}
