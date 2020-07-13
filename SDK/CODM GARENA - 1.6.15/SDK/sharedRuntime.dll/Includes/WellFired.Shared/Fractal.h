#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired.Shared {

class Fractal
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("sharedRuntime.dll", "WellFired.Shared", "Fractal"));
	}

	template <typename T = uintptr_t> T& noise() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& exponent() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& intOctaves() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& floatOctaves() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& lacunarity() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = float> T HybridMultifractal(float x, float y, float offset) {
		return ((T (*)(Fractal*, float, float, float))(Il2CppBase() + 0x5224454))(this, x, y, offset);
	}

};

}
