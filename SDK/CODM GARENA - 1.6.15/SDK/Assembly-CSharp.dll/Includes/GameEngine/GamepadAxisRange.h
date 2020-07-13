#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class GamepadAxisRange
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "GamepadAxisRange"));
	}

	template <typename T = uintptr_t> static T& FromNeg1To1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& Positive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& Negative() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = float> T& Minimum() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& Maximum() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& inverse() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = float> T ConvertValue(float v) {
		return ((T (*)(GamepadAxisRange*, float))(Il2CppBase() + 0x36DD4A8))(this, v);
	}

};

}
