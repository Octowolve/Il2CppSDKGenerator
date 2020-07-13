#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Mobile.AdaptivePerformance.Provider {

class AdaptivePerformanceSubsystemRegistry
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityEngine.Mobile.AdaptivePerformance.Provider", "AdaptivePerformanceSubsystemRegistry"));
	}

	template <typename T = Il2CppList<uintptr_t>*> static T& SubsystemDescriptors() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDescriptor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRegisteredDescriptors() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> static T RegisterDescriptor(uintptr_t cinfo) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x42176F0))(0, cinfo);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T GetRegisteredDescriptors() {
		return ((T (*)(void *))(Il2CppBase() + 0x420D0E4))(0);
	}

};

}
