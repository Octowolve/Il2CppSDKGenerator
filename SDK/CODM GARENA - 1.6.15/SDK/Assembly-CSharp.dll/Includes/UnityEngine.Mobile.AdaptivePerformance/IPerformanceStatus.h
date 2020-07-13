#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Mobile.AdaptivePerformance {

class IPerformanceStatus
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityEngine.Mobile.AdaptivePerformance", "IPerformanceStatus"));
	}


	template <typename T = uintptr_t> T get_PerformanceMetrics() {
		return ((T (*)(IPerformanceStatus*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_FrameTiming() {
		return ((T (*)(IPerformanceStatus*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T add_PerformanceBottleneckChangeEvent(uintptr_t value) {
		return ((T (*)(IPerformanceStatus*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_PerformanceBottleneckChangeEvent(uintptr_t value) {
		return ((T (*)(IPerformanceStatus*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}

};

}
