#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VehicleStreamingOption
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VehicleStreamingOption"));
	}

	template <typename T = float> T& vehicleSpeedThreshold() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& tileVisibleDistanceScale() {
		return *(T*)((uintptr_t)this + 0x4);
	}

	template <typename T = bool> T get_isValid() {
		return ((T (*)(VehicleStreamingOption*))(Il2CppBase() + 0x4887D28))(this);
	}

};

}
