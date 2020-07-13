#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SwipeStartHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SwipeStartHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t gesture) {
		return ((T (*)(SwipeStartHandler*, uintptr_t))(Il2CppBase() + 0x4BBBDA4))(this, gesture);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t gesture, uintptr_t callback, uintptr_t object) {
		return ((T (*)(SwipeStartHandler*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4BBEDC4))(this, gesture, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(SwipeStartHandler*, uintptr_t))(Il2CppBase() + 0x4BBEDF0))(this, result);
	}

};

}
