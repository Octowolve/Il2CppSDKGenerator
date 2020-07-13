#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EmissionModule
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "", "EmissionModule"));
	}

	template <typename T = uintptr_t> T& m_ParticleSystem() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T set_enabled(bool value) {
		return ((T (*)(EmissionModule*, bool))(Il2CppBase() + 0x4AC04C4))(this, value);
	}
	template <typename T = void> T set_rateOverDistance(uintptr_t value) {
		return ((T (*)(EmissionModule*, uintptr_t))(Il2CppBase() + 0x4AC059C))(this, value);
	}
	template <typename T = void> static T SetEnabled(uintptr_t system, bool value) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x4AC0424))(0, system, value);
	}
	template <typename T = void> static T SetRateOverDistance(uintptr_t system, uintptr_t curve) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4AC04FC))(0, system, curve);
	}

};

}
