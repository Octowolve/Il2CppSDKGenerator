#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class VehicleDebugInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "VehicleDebugInfo"));
	}

	template <typename T = float> T& forwardSpeedKmH() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& steering() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& throttle() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& brake() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& RPM() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& gear() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& drag() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
