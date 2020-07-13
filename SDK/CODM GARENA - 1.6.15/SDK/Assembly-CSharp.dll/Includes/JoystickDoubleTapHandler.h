#pragma once
#include <Il2Cpp/Il2Cpp.h>

class JoystickDoubleTapHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "JoystickDoubleTapHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t move) {
		return ((T (*)(JoystickDoubleTapHandler*, uintptr_t))(Il2CppBase() + 0x4BAB0C8))(this, move);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t move, uintptr_t callback, uintptr_t object) {
		return ((T (*)(JoystickDoubleTapHandler*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4BAC814))(this, move, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(JoystickDoubleTapHandler*, uintptr_t))(Il2CppBase() + 0x4BAC840))(this, result);
	}

};

}
