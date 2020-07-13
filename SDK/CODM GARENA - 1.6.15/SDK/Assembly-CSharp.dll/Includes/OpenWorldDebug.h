#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OpenWorldDebug
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OpenWorldDebug"));
	}

	template <typename T = uintptr_t> static T& COLOR_BOUNDS_CELL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& COLOR_BOUNDS_FOLIAGE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawBounds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> static T DrawBounds(uintptr_t bounds, uintptr_t color) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3EEADC0))(0, bounds, color);
	}

};

}
