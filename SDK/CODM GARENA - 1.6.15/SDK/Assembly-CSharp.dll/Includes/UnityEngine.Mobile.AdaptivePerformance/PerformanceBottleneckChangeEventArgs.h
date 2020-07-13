#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Mobile.AdaptivePerformance {

class PerformanceBottleneckChangeEventArgs
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityEngine.Mobile.AdaptivePerformance", "PerformanceBottleneckChangeEventArgs"));
	}

	template <typename T = uintptr_t> T& PerformanceBottleneck() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = uintptr_t> T get_PerformanceBottleneck() {
		return ((T (*)(PerformanceBottleneckChangeEventArgs*))(Il2CppBase() + 0x4217134))(this);
	}
	template <typename T = void> T set_PerformanceBottleneck(uintptr_t value) {
		return ((T (*)(PerformanceBottleneckChangeEventArgs*, uintptr_t))(Il2CppBase() + 0x421713C))(this, value);
	}

};

}
