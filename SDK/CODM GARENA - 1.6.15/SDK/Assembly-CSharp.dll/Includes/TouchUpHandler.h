#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TouchUpHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TouchUpHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t gesture) {
		return ((T (*)(TouchUpHandler*, uintptr_t))(Il2CppBase() + 0x4BBB84C))(this, gesture);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t gesture, uintptr_t callback, uintptr_t object) {
		return ((T (*)(TouchUpHandler*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4BBEF9C))(this, gesture, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(TouchUpHandler*, uintptr_t))(Il2CppBase() + 0x4BBEFC8))(this, result);
	}

};

}
