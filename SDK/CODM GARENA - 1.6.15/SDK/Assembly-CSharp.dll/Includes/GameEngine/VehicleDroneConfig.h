#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class VehicleDroneConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "VehicleDroneConfig"));
	}

	template <typename T = Il2CppVector2> T& JoystickCenter() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector2> T& JoystickSize() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector2> T& Upward() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector2> T& Downward() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector2> T& ButtonSize() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
