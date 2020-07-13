#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ButtonState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "", "ButtonState"));
	}

	template <typename T = uintptr_t> T& m_Button() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_EventData() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_eventData() {
		return ((T (*)(ButtonState*))(Il2CppBase() + 0x3D055A0))(this);
	}
	template <typename T = void> T set_eventData(uintptr_t value) {
		return ((T (*)(ButtonState*, uintptr_t))(Il2CppBase() + 0x3D055A8))(this, value);
	}
	template <typename T = uintptr_t> T get_button() {
		return ((T (*)(ButtonState*))(Il2CppBase() + 0x3D055B0))(this);
	}
	template <typename T = void> T set_button(uintptr_t value) {
		return ((T (*)(ButtonState*, uintptr_t))(Il2CppBase() + 0x3D055B8))(this, value);
	}

};

}
