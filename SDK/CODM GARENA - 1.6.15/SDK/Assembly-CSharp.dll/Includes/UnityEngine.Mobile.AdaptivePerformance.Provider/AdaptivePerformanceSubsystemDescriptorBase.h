#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Mobile.AdaptivePerformance.Provider {

class AdaptivePerformanceSubsystemDescriptorBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityEngine.Mobile.AdaptivePerformance.Provider", "AdaptivePerformanceSubsystemDescriptorBase"));
	}

	template <typename T = Il2CppString*> T& id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& subsystemImplementationType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Create() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T Create() {
		return ((T (*)(AdaptivePerformanceSubsystemDescriptorBase*))(Il2CppBase() + 0x420D1E4))(this);
	}
	template <typename T = Il2CppString*> T get_id() {
		return ((T (*)(AdaptivePerformanceSubsystemDescriptorBase*))(Il2CppBase() + 0x42178FC))(this);
	}
	template <typename T = void> T set_id(Il2CppString* value) {
		return ((T (*)(AdaptivePerformanceSubsystemDescriptorBase*, Il2CppString*))(Il2CppBase() + 0x42175F8))(this, value);
	}
	template <typename T = uintptr_t> T get_subsystemImplementationType() {
		return ((T (*)(AdaptivePerformanceSubsystemDescriptorBase*))(Il2CppBase() + 0x42178F4))(this);
	}
	template <typename T = void> T set_subsystemImplementationType(uintptr_t value) {
		return ((T (*)(AdaptivePerformanceSubsystemDescriptorBase*, uintptr_t))(Il2CppBase() + 0x4217600))(this, value);
	}

};

}
