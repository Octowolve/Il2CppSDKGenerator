#pragma once
#include <Il2Cpp/Il2Cpp.h>

class JoystickTapHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "JoystickTapHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t move) {
		return ((T (*)(JoystickTapHandler*, uintptr_t))(Il2CppBase() + 0x4BAB030))(this, move);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t move, uintptr_t callback, uintptr_t object) {
		return ((T (*)(JoystickTapHandler*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4BAC944))(this, move, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(JoystickTapHandler*, uintptr_t))(Il2CppBase() + 0x4BAC970))(this, result);
	}

};

}
