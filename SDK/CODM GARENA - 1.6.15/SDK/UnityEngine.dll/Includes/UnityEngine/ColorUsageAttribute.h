#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class ColorUsageAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "ColorUsageAttribute"));
	}

	template <typename T = bool> T& showAlpha() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& hdr() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = float> T& minBrightness() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& maxBrightness() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& minExposureValue() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& maxExposureValue() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
