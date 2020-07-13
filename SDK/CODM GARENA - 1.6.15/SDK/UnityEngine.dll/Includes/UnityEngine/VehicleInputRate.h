#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class VehicleInputRate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "VehicleInputRate"));
	}

	template <typename T = float> T& riseRate() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& fallRate() {
		return *(T*)((uintptr_t)this + 0x4);
	}


};

}
