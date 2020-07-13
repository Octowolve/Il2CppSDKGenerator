#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Mobile.AdaptivePerformance {

class PerformanceBottleneckChangeHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityEngine.Mobile.AdaptivePerformance", "PerformanceBottleneckChangeHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t bottleneckEventArgs) {
		return ((T (*)(PerformanceBottleneckChangeHandler*, uintptr_t))(Il2CppBase() + 0x420F0EC))(this, bottleneckEventArgs);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t bottleneckEventArgs, uintptr_t callback, uintptr_t object) {
		return ((T (*)(PerformanceBottleneckChangeHandler*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4217154))(this, bottleneckEventArgs, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(PerformanceBottleneckChangeHandler*, uintptr_t))(Il2CppBase() + 0x4217210))(this, result);
	}

};

}
