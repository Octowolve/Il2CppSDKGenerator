#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired.Shared {

class Perlin
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("sharedRuntime.dll", "WellFired.Shared", "Perlin"));
	}

	template <typename T = int32_t> static T& B() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& BM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& N() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& p() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& g3() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& g2() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& g1() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = float> T s_curve(float t) {
		return ((T (*)(Perlin*, float))(Il2CppBase() + 0x5224E5C))(this, t);
	}
	template <typename T = float> T lerp(float t, float a, float b) {
		return ((T (*)(Perlin*, float, float, float))(Il2CppBase() + 0x5224E80))(this, t, a, b);
	}
	template <typename T = void> T setup(float value, uintptr_t* b0, uintptr_t* b1, uintptr_t* r0, uintptr_t* r1) {
		return ((T (*)(Perlin*, float, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x5224EA0))(this, value, b0, b1, r0, r1);
	}
	template <typename T = float> T at2(float rx, float ry, float x, float y) {
		return ((T (*)(Perlin*, float, float, float, float))(Il2CppBase() + 0x5224EF4))(this, rx, ry, x, y);
	}
	template <typename T = float> T Noise(float x, float y) {
		return ((T (*)(Perlin*, float, float))(Il2CppBase() + 0x52245DC))(this, x, y);
	}
	template <typename T = void> T normalize2(uintptr_t x, uintptr_t y) {
		return ((T (*)(Perlin*, uintptr_t, uintptr_t))(Il2CppBase() + 0x5224D88))(this, x, y);
	}
	template <typename T = void> T normalize3(uintptr_t x, uintptr_t y, uintptr_t z) {
		return ((T (*)(Perlin*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x5224DE4))(this, x, y, z);
	}

};

}
