#pragma once
#include <Il2Cpp/Il2Cpp.h>

class JoystickMoveStartHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "JoystickMoveStartHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t move) {
		return ((T (*)(JoystickMoveStartHandler*, uintptr_t))(Il2CppBase() + 0x4BAADD0))(this, move);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t move, uintptr_t callback, uintptr_t object) {
		return ((T (*)(JoystickMoveStartHandler*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4BAC8F8))(this, move, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(JoystickMoveStartHandler*, uintptr_t))(Il2CppBase() + 0x4BAC924))(this, result);
	}

};

}
