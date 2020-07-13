#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class ColorUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "ColorUtil"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_IntToColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T IntToColor(uint32_t colorValue) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x4199748))(0, colorValue);
	}

};

}
