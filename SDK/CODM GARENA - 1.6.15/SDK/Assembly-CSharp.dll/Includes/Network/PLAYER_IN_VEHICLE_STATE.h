#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class PLAYERINVEHICLESTATE
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "PLAYER_IN_VEHICLE_STATE"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& ePLAYER_IN_VEHICLE_STATE_NORMAL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ePLAYER_IN_VEHICLE_STATE_START_ROUND_AIRPLANE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ePLAYER_IN_VEHICLE_STATE_AIRPLANE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ePLAYER_IN_VEHICLE_STATE_CAR_DRIVER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ePLAYER_IN_VEHICLE_STATE_CAR_PASSENGER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ePLAYER_IN_VEHICLE_STATE_CAR_PASSENGER_STAND() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
