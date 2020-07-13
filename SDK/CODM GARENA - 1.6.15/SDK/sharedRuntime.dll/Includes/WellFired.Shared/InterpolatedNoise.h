#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired.Shared {

class InterpolatedNoise
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("sharedRuntime.dll", "WellFired.Shared", "InterpolatedNoise"));
	}

	template <typename T = uintptr_t> T& Fractal() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& Seed() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_Fractal() {
		return ((T (*)(InterpolatedNoise*))(Il2CppBase() + 0x5224CAC))(this);
	}
	template <typename T = void> T set_Fractal(uintptr_t value) {
		return ((T (*)(InterpolatedNoise*, uintptr_t))(Il2CppBase() + 0x5224CA4))(this, value);
	}
	template <typename T = int32_t> T get_Seed() {
		return ((T (*)(InterpolatedNoise*))(Il2CppBase() + 0x5224C9C))(this);
	}
	template <typename T = void> T set_Seed(int32_t value) {
		return ((T (*)(InterpolatedNoise*, int32_t))(Il2CppBase() + 0x5224C94))(this, value);
	}
	template <typename T = Il2CppVector3> T GetVector3(float speed, float time) {
		return ((T (*)(InterpolatedNoise*, float, float))(Il2CppBase() + 0x5224CB4))(this, speed, time);
	}

};

}
