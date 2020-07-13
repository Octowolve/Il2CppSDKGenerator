#pragma once
#include <Il2Cpp/Il2Cpp.h>

class JoystickTouchStartHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "JoystickTouchStartHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t move) {
		return ((T (*)(JoystickTouchStartHandler*, uintptr_t))(Il2CppBase() + 0x4BAAF98))(this, move);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t move, uintptr_t callback, uintptr_t object) {
		return ((T (*)(JoystickTouchStartHandler*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4BAC990))(this, move, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(JoystickTouchStartHandler*, uintptr_t))(Il2CppBase() + 0x4BAC9BC))(this, result);
	}

};

}
