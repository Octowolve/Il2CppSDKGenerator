#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MainModule
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "", "MainModule"));
	}

	template <typename T = uintptr_t> T& m_ParticleSystem() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = float> T get_duration() {
		return ((T (*)(MainModule*))(Il2CppBase() + 0x4AC0734))(this);
	}
	template <typename T = bool> T get_loop() {
		return ((T (*)(MainModule*))(Il2CppBase() + 0x4AC07DC))(this);
	}
	template <typename T = void> T set_loop(bool value) {
		return ((T (*)(MainModule*, bool))(Il2CppBase() + 0x4AC0890))(this, value);
	}
	template <typename T = uintptr_t> T get_startLifetime() {
		return ((T (*)(MainModule*))(Il2CppBase() + 0x4AC0A20))(this);
	}
	template <typename T = void> T set_startSpeed(uintptr_t value) {
		return ((T (*)(MainModule*, uintptr_t))(Il2CppBase() + 0x4AC0B00))(this, value);
	}
	template <typename T = uintptr_t> T get_startSpeed() {
		return ((T (*)(MainModule*))(Il2CppBase() + 0x4AC0CB0))(this);
	}
	template <typename T = void> T set_startSpeedMultiplier(float value) {
		return ((T (*)(MainModule*, float))(Il2CppBase() + 0x4AC0D70))(this, value);
	}
	template <typename T = void> T set_startSize(uintptr_t value) {
		return ((T (*)(MainModule*, uintptr_t))(Il2CppBase() + 0x4AC0E48))(this, value);
	}
	template <typename T = uintptr_t> T get_startSize() {
		return ((T (*)(MainModule*))(Il2CppBase() + 0x4AC0FF8))(this);
	}
	template <typename T = void> T set_startRotation(uintptr_t value) {
		return ((T (*)(MainModule*, uintptr_t))(Il2CppBase() + 0x4AC10D8))(this, value);
	}
	template <typename T = void> T set_startColor(uintptr_t value) {
		return ((T (*)(MainModule*, uintptr_t))(Il2CppBase() + 0x4AC11F0))(this, value);
	}
	template <typename T = float> static T GetDuration(uintptr_t system) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4AC069C))(0, system);
	}
	template <typename T = void> static T SetLoop(uintptr_t system, bool value) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x4AC07F0))(0, system, value);
	}
	template <typename T = bool> static T GetLoop(uintptr_t system) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4AC0744))(0, system);
	}
	template <typename T = void> static T GetStartLifetime(uintptr_t system, uintptr_t curve) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4AC0980))(0, system, curve);
	}
	template <typename T = void> static T SetStartSpeed(uintptr_t system, uintptr_t curve) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4AC0A60))(0, system, curve);
	}
	template <typename T = void> static T GetStartSpeed(uintptr_t system, uintptr_t curve) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4AC0C10))(0, system, curve);
	}
	template <typename T = void> static T SetStartSpeedMultiplier(uintptr_t system, float value) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x4AC0CD0))(0, system, value);
	}
	template <typename T = void> static T SetStartSizeX(uintptr_t system, uintptr_t curve) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4AC0DA8))(0, system, curve);
	}
	template <typename T = void> static T GetStartSizeX(uintptr_t system, uintptr_t curve) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4AC0F58))(0, system, curve);
	}
	template <typename T = void> static T SetStartRotationZ(uintptr_t system, uintptr_t curve) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4AC1038))(0, system, curve);
	}
	template <typename T = void> static T SetStartColor(uintptr_t system, uintptr_t gradient) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4AC1150))(0, system, gradient);
	}

};

}
