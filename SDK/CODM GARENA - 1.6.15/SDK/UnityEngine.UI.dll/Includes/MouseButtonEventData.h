#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MouseButtonEventData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "", "MouseButtonEventData"));
	}

	template <typename T = uintptr_t> T& buttonState() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& buttonData() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T PressedThisFrame() {
		return ((T (*)(MouseButtonEventData*))(Il2CppBase() + 0x3D055C8))(this);
	}
	template <typename T = bool> T ReleasedThisFrame() {
		return ((T (*)(MouseButtonEventData*))(Il2CppBase() + 0x3D055E0))(this);
	}

};

}
