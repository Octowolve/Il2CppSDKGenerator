#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Mobile.AdaptivePerformance.Provider {

class AdaptivePerformanceSubsystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityEngine.Mobile.AdaptivePerformance.Provider", "AdaptivePerformanceSubsystem"));
	}

	template <typename T = uintptr_t> T& Capabilities() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrintStats() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T get_Capabilities() {
		return ((T (*)(AdaptivePerformanceSubsystem*))(Il2CppBase() + 0x420D618))(this);
	}
	template <typename T = void> T set_Capabilities(uintptr_t value) {
		return ((T (*)(AdaptivePerformanceSubsystem*, uintptr_t))(Il2CppBase() + 0x4217390))(this, value);
	}
	template <typename T = uintptr_t> T Update() {
		return ((T (*)(AdaptivePerformanceSubsystem*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_ApplicationLifecycle() {
		return ((T (*)(AdaptivePerformanceSubsystem*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_PerformanceLevelControl() {
		return ((T (*)(AdaptivePerformanceSubsystem*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_Version() {
		return ((T (*)(AdaptivePerformanceSubsystem*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T PrintStats() {
		return ((T (*)(AdaptivePerformanceSubsystem*))(Il2CppBase() + 0x4217398))(this);
	}

};

}
