#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired.Shared {

class Shake
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("sharedRuntime.dll", "WellFired.Shared", "Shake"));
	}

	template <typename T = uintptr_t> T& interpolatedNoise() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& shakeType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& shakeSpeedPosition() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& shakeRangePosition() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& shakeSpeedRotation() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& shakeRangeRotation() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& Position() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector3> T& EulerRotation() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = uintptr_t> T get_ShakeType() {
		return ((T (*)(Shake*))(Il2CppBase() + 0x522551C))(this);
	}
	template <typename T = void> T set_ShakeType(uintptr_t value) {
		return ((T (*)(Shake*, uintptr_t))(Il2CppBase() + 0x5225524))(this, value);
	}
	template <typename T = Il2CppVector3> T get_Position() {
		return ((T (*)(Shake*))(Il2CppBase() + 0x52255A0))(this);
	}
	template <typename T = void> T set_Position(Il2CppVector3 value) {
		return ((T (*)(Shake*, Il2CppVector3))(Il2CppBase() + 0x5225588))(this, value);
	}
	template <typename T = Il2CppVector3> T get_EulerRotation() {
		return ((T (*)(Shake*))(Il2CppBase() + 0x52255B4))(this);
	}
	template <typename T = void> T set_EulerRotation(Il2CppVector3 value) {
		return ((T (*)(Shake*, Il2CppVector3))(Il2CppBase() + 0x5225594))(this, value);
	}
	template <typename T = void> T set_ShakeSpeedPosition(float value) {
		return ((T (*)(Shake*, float))(Il2CppBase() + 0x52255C8))(this, value);
	}
	template <typename T = void> T set_ShakeRangePosition(Il2CppVector3 value) {
		return ((T (*)(Shake*, Il2CppVector3))(Il2CppBase() + 0x52255D0))(this, value);
	}
	template <typename T = void> T set_ShakeSpeedRotation(float value) {
		return ((T (*)(Shake*, float))(Il2CppBase() + 0x52255DC))(this, value);
	}
	template <typename T = void> T set_ShakeRangeRotation(Il2CppVector3 value) {
		return ((T (*)(Shake*, Il2CppVector3))(Il2CppBase() + 0x52255E4))(this, value);
	}
	template <typename T = void> T InitialiseShake(int32_t seed) {
		return ((T (*)(Shake*, int32_t))(Il2CppBase() + 0x52255F0))(this, seed);
	}
	template <typename T = void> T Process(float time, float duration) {
		return ((T (*)(Shake*, float, float))(Il2CppBase() + 0x5225684))(this, time, duration);
	}

};

}
