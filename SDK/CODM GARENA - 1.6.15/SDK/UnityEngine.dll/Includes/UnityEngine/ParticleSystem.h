#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class ParticleSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "ParticleSystem"));
	}

	template <typename T = uintptr_t> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& f__am$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = bool> T get_isPlaying() {
		return ((T (*)(ParticleSystem*))(Il2CppBase() + 0x4ABF400))(this);
	}
	template <typename T = int32_t> T get_particleCount() {
		return ((T (*)(ParticleSystem*))(Il2CppBase() + 0x4ABF498))(this);
	}
	template <typename T = void> T set_startColor(uintptr_t value) {
		return ((T (*)(ParticleSystem*, uintptr_t))(Il2CppBase() + 0x4ABF530))(this, value);
	}
	template <typename T = void> T INTERNAL_set_startColor(uintptr_t value) {
		return ((T (*)(ParticleSystem*, uintptr_t))(Il2CppBase() + 0x4ABF554))(this, value);
	}
	template <typename T = void> T set_startRotation(float value) {
		return ((T (*)(ParticleSystem*, float))(Il2CppBase() + 0x4ABF5F4))(this, value);
	}
	template <typename T = void> T set_startLifetime(float value) {
		return ((T (*)(ParticleSystem*, float))(Il2CppBase() + 0x4ABF694))(this, value);
	}
	template <typename T = uintptr_t> T get_main() {
		return ((T (*)(ParticleSystem*))(Il2CppBase() + 0x4ABF734))(this);
	}
	template <typename T = uintptr_t> T get_emission() {
		return ((T (*)(ParticleSystem*))(Il2CppBase() + 0x4ABF738))(this);
	}
	template <typename T = bool> static T Internal_Simulate(uintptr_t self, float t, bool restart, bool fixedTimeStep) {
		return ((T (*)(void *, uintptr_t, float, bool, bool))(Il2CppBase() + 0x4ABF73C))(0, self, t, restart, fixedTimeStep);
	}
	template <typename T = bool> static T Internal_Play(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4ABF7EC))(0, self);
	}
	template <typename T = bool> static T Internal_Stop(uintptr_t self, uintptr_t stopBehavior) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4ABF884))(0, self, stopBehavior);
	}
	template <typename T = bool> static T Internal_Pause(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4ABF924))(0, self);
	}
	template <typename T = bool> static T Internal_Clear(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4ABF9BC))(0, self);
	}
	template <typename T = void> T Simulate(float t, bool withChildren, bool restart) {
		return ((T (*)(ParticleSystem*, float, bool, bool))(Il2CppBase() + 0x4ABFA54))(this, t, withChildren, restart);
	}
	template <typename T = void> T Simulate_1(float t) {
		return ((T (*)(ParticleSystem*, float))(Il2CppBase() + 0x4ABFB84))(this, t);
	}
	template <typename T = void> T Simulate_2(float t, bool withChildren, bool restart, bool fixedTimeStep) {
		return ((T (*)(ParticleSystem*, float, bool, bool, bool))(Il2CppBase() + 0x4ABFA74))(this, t, withChildren, restart, fixedTimeStep);
	}
	template <typename T = void> T Play() {
		return ((T (*)(ParticleSystem*))(Il2CppBase() + 0x4ABFC30))(this);
	}
	template <typename T = void> T Play_1(bool withChildren) {
		return ((T (*)(ParticleSystem*, bool))(Il2CppBase() + 0x4ABFC38))(this, withChildren);
	}
	template <typename T = void> T Stop(bool withChildren) {
		return ((T (*)(ParticleSystem*, bool))(Il2CppBase() + 0x4ABFD58))(this, withChildren);
	}
	template <typename T = void> T Stop_1() {
		return ((T (*)(ParticleSystem*))(Il2CppBase() + 0x4ABFE5C))(this);
	}
	template <typename T = void> T Stop_2(bool withChildren, uintptr_t stopBehavior) {
		return ((T (*)(ParticleSystem*, bool, uintptr_t))(Il2CppBase() + 0x4ABFD60))(this, withChildren, stopBehavior);
	}
	template <typename T = void> T Pause(bool withChildren) {
		return ((T (*)(ParticleSystem*, bool))(Il2CppBase() + 0x4ABFE70))(this, withChildren);
	}
	template <typename T = void> T Clear(bool withChildren) {
		return ((T (*)(ParticleSystem*, bool))(Il2CppBase() + 0x4ABFF90))(this, withChildren);
	}
	template <typename T = void> T Emit(int32_t count) {
		return ((T (*)(ParticleSystem*, int32_t))(Il2CppBase() + 0x4AC00B0))(this, count);
	}
	template <typename T = void> static T INTERNAL_CALL_Emit(uintptr_t self, int32_t count) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4AC00BC))(0, self, count);
	}
	template <typename T = bool> T IterateParticleSystems(bool recurse, uintptr_t func) {
		return ((T (*)(ParticleSystem*, bool, uintptr_t))(Il2CppBase() + 0x4ABFBC8))(this, recurse, func);
	}
	template <typename T = bool> static T IterateParticleSystemsRecursive(uintptr_t transform, uintptr_t func) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4AC01F4))(0, transform, func);
	}
	template <typename T = bool> static T Playm__0(uintptr_t ps) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4AC0370))(0, ps);
	}
	template <typename T = bool> static T Pausem__1(uintptr_t ps) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4AC0374))(0, ps);
	}
	template <typename T = bool> static T Clearm__2(uintptr_t ps) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4AC0378))(0, ps);
	}

};

}
