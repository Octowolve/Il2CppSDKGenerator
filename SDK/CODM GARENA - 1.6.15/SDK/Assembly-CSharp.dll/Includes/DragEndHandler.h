#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DragEndHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DragEndHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t gesture) {
		return ((T (*)(DragEndHandler*, uintptr_t))(Il2CppBase() + 0x4BBBD0C))(this, gesture);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t gesture, uintptr_t callback, uintptr_t object) {
		return ((T (*)(DragEndHandler*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4BBE7E8))(this, gesture, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(DragEndHandler*, uintptr_t))(Il2CppBase() + 0x4BBE814))(this, result);
	}

};

}
