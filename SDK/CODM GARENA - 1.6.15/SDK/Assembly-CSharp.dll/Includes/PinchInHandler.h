#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PinchInHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PinchInHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t gesture) {
		return ((T (*)(PinchInHandler*, uintptr_t))(Il2CppBase() + 0x4BBC55C))(this, gesture);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t gesture, uintptr_t callback, uintptr_t object) {
		return ((T (*)(PinchInHandler*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4BBEB2C))(this, gesture, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(PinchInHandler*, uintptr_t))(Il2CppBase() + 0x4BBEB58))(this, result);
	}

};

}
