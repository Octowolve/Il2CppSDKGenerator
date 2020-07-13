#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class VehicleRotor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "VehicleRotor"));
	}

	template <typename T = uintptr_t> T& blade() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppVector3> T& normal() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& multiplier() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Init(Il2CppVector3 normal_direction) {
		return ((T (*)(VehicleRotor*, Il2CppVector3))(Il2CppBase() + 0x2E8C57C))(this, normal_direction);
	}
	template <typename T = void> T Tick(float deltaTime, float speed) {
		return ((T (*)(VehicleRotor*, float, float))(Il2CppBase() + 0x2E8C77C))(this, deltaTime, speed);
	}

};

}
