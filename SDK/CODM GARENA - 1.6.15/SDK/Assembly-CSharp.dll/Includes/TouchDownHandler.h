#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TouchDownHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TouchDownHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t gesture) {
		return ((T (*)(TouchDownHandler*, uintptr_t))(Il2CppBase() + 0x4BBB7B4))(this, gesture);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t gesture, uintptr_t callback, uintptr_t object) {
		return ((T (*)(TouchDownHandler*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4BBEE94))(this, gesture, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(TouchDownHandler*, uintptr_t))(Il2CppBase() + 0x4BBEEC0))(this, result);
	}

};

}
