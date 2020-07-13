#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class WheelInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "WheelInfo"));
	}

	template <typename T = float> T& tireFriction() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& latSlip() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& longSlip() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& wheelRPM() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& normalizedTireLoad() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& wheelTorque() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& longForce() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& latForce() {
		return *(T*)((uintptr_t)this + 0x1C);
	}


};

}
