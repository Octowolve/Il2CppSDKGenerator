#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Mobile.AdaptivePerformance {

class RenderThreadCpuTime
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityEngine.Mobile.AdaptivePerformance", "RenderThreadCpuTime"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Measure() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLatestResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(RenderThreadCpuTime*))(Il2CppBase() + 0x421567C))(this);
	}
	template <typename T = void> T Measure() {
		return ((T (*)(RenderThreadCpuTime*))(Il2CppBase() + 0x4215714))(this);
	}
	template <typename T = float> T GetLatestResult() {
		return ((T (*)(RenderThreadCpuTime*))(Il2CppBase() + 0x42155D8))(this);
	}

};

}
