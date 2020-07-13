#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MouseState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "", "MouseState"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_TrackedButtons() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T GetButtonState(uintptr_t button) {
		return ((T (*)(MouseState*, uintptr_t))(Il2CppBase() + 0x3D055F8))(this, button);
	}
	template <typename T = void> T SetButtonState(uintptr_t button, uintptr_t stateForMouseButton, uintptr_t data) {
		return ((T (*)(MouseState*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3D048F0))(this, button, stateForMouseButton, data);
	}

};

}
