#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SwipeEndHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SwipeEndHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t gesture) {
		return ((T (*)(SwipeEndHandler*, uintptr_t))(Il2CppBase() + 0x4BBBED4))(this, gesture);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t gesture, uintptr_t callback, uintptr_t object) {
		return ((T (*)(SwipeEndHandler*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4BBECE0))(this, gesture, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(SwipeEndHandler*, uintptr_t))(Il2CppBase() + 0x4BBED0C))(this, result);
	}

};

}
