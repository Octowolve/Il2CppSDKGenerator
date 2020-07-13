#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DragHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DragHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t gesture) {
		return ((T (*)(DragHandler*, uintptr_t))(Il2CppBase() + 0x4BBBC74))(this, gesture);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t gesture, uintptr_t callback, uintptr_t object) {
		return ((T (*)(DragHandler*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4BBE834))(this, gesture, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(DragHandler*, uintptr_t))(Il2CppBase() + 0x4BBE860))(this, result);
	}

};

}
