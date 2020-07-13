#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Mobile.AdaptivePerformance.Provider {

class AdaptivePerformanceSubsystemBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityEngine.Mobile.AdaptivePerformance.Provider", "AdaptivePerformanceSubsystemBase"));
	}

	template <typename T = bool> T& initialized() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Start() {
		return ((T (*)(AdaptivePerformanceSubsystemBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Stop() {
		return ((T (*)(AdaptivePerformanceSubsystemBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(AdaptivePerformanceSubsystemBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_initialized() {
		return ((T (*)(AdaptivePerformanceSubsystemBase*))(Il2CppBase() + 0x420C560))(this);
	}
	template <typename T = void> T set_initialized(bool value) {
		return ((T (*)(AdaptivePerformanceSubsystemBase*, bool))(Il2CppBase() + 0x4217488))(this, value);
	}

};

}
