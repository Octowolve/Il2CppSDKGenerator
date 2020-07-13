#pragma once
#include <Il2Cpp/Il2Cpp.h>

class JoystickTouchUpHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "JoystickTouchUpHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t move) {
		return ((T (*)(JoystickTouchUpHandler*, uintptr_t))(Il2CppBase() + 0x4BAB160))(this, move);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t move, uintptr_t callback, uintptr_t object) {
		return ((T (*)(JoystickTouchUpHandler*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4BAC9DC))(this, move, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(JoystickTouchUpHandler*, uintptr_t))(Il2CppBase() + 0x4BACA08))(this, result);
	}

};

}
