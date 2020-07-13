#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class VehicleMoveData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "VehicleMoveData"));
	}

	template <typename T = Il2CppVector3> T& SimPosition() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppVector3> T& SimRotation() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& SimVelocity() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& SimAngularVelocity() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& SimAcceleration() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint32_t> T& PlayerID() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uint32_t> T& FrameTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint32_t> T& ClientTime() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& IsBraking() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& Steering() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& Throttle() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& FuelState() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T ApplyShift(Il2CppVector3 shift) {
		return ((T (*)(VehicleMoveData*, Il2CppVector3))(Il2CppBase() + 0x43A72F0))(this, shift);
	}

};

}
