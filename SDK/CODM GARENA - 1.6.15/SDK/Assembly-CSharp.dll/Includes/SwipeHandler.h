#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SwipeHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SwipeHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t gesture) {
		return ((T (*)(SwipeHandler*, uintptr_t))(Il2CppBase() + 0x4BBBE3C))(this, gesture);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t gesture, uintptr_t callback, uintptr_t object) {
		return ((T (*)(SwipeHandler*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4BBED2C))(this, gesture, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(SwipeHandler*, uintptr_t))(Il2CppBase() + 0x4BBED58))(this, result);
	}

};

}
