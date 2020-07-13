#pragma once
#include <Il2Cpp/Il2Cpp.h>

class JoystickMoveEndHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "JoystickMoveEndHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t move) {
		return ((T (*)(JoystickMoveEndHandler*, uintptr_t))(Il2CppBase() + 0x4BAAF00))(this, move);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t move, uintptr_t callback, uintptr_t object) {
		return ((T (*)(JoystickMoveEndHandler*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4BAC860))(this, move, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(JoystickMoveEndHandler*, uintptr_t))(Il2CppBase() + 0x4BAC88C))(this, result);
	}

};

}
