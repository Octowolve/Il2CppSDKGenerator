#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AxisConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AxisConfig"));
	}

	template <typename T = uintptr_t> T& joystickAxis() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& inverse() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& dead() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
