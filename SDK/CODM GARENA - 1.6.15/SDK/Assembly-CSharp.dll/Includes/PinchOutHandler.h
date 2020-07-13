#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PinchOutHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PinchOutHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t gesture) {
		return ((T (*)(PinchOutHandler*, uintptr_t))(Il2CppBase() + 0x4BBC5F4))(this, gesture);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t gesture, uintptr_t callback, uintptr_t object) {
		return ((T (*)(PinchOutHandler*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4BBEB78))(this, gesture, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(PinchOutHandler*, uintptr_t))(Il2CppBase() + 0x4BBEBA4))(this, result);
	}

};

}
