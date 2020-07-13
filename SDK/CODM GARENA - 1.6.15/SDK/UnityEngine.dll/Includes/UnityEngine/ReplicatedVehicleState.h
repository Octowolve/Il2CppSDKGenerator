#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class ReplicatedVehicleState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "ReplicatedVehicleState"));
	}

	template <typename T = float> T& steeringInput() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& throttleInput() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& brakeInput() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& handbrakeInput() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& LeftThrust() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& RightThrust() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& LeftBrake() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& RightBrake() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& currentGear() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
