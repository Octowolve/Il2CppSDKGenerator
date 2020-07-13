#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PinchEndHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PinchEndHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t gesture) {
		return ((T (*)(PinchEndHandler*, uintptr_t))(Il2CppBase() + 0x4BBC68C))(this, gesture);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t gesture, uintptr_t callback, uintptr_t object) {
		return ((T (*)(PinchEndHandler*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4BBEAE0))(this, gesture, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(PinchEndHandler*, uintptr_t))(Il2CppBase() + 0x4BBEB0C))(this, result);
	}

};

}
