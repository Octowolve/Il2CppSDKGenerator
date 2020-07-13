#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class NZVehicleServerState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "NZVehicleServerState"));
	}

	template <typename T = uintptr_t> T& driveState() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& isMotorUp() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& isMotorDown() {
		return *(T*)((uintptr_t)this + 0x2D);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
