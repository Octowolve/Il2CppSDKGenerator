#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ParticleFade
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ParticleFade"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& particles() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& onParticleFinish() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& lifeSpan() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& checkInterval() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLifeSpan() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TimeBeginFade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableEmission() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginFade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckParticles() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasAnimator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldDelayToEndOfFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CheckParticles() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T SetLifeSpan(float lifeSpan) {
		return ((T (*)(ParticleFade*, float))(Il2CppBase() + 0x3EFF728))(this, lifeSpan);
	}
	template <typename T = uintptr_t> T TimeBeginFade() {
		return ((T (*)(ParticleFade*))(Il2CppBase() + 0x3EFF7EC))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ParticleFade*))(Il2CppBase() + 0x3EFF8D4))(this);
	}
	template <typename T = void> T EnableEmission(bool enable) {
		return ((T (*)(ParticleFade*, bool))(Il2CppBase() + 0x3EFF97C))(this, enable);
	}
	template <typename T = void> T BeginFade(float fadeTime) {
		return ((T (*)(ParticleFade*, float))(Il2CppBase() + 0x3EFFBFC))(this, fadeTime);
	}
	template <typename T = uintptr_t> T CheckParticles(float maxDelay) {
		return ((T (*)(ParticleFade*, float))(Il2CppBase() + 0x3EFFCC8))(this, maxDelay);
	}
	template <typename T = bool> T HasAnimator() {
		return ((T (*)(ParticleFade*))(Il2CppBase() + 0x3EFFDCC))(this);
	}
	template <typename T = bool> T ShouldDelayToEndOfFrame() {
		return ((T (*)(ParticleFade*))(Il2CppBase() + 0x3EFFFD4))(this);
	}
	template <typename T = bool> T CheckParticles_1() {
		return ((T (*)(ParticleFade*))(Il2CppBase() + 0x3F00074))(this);
	}

};

}
