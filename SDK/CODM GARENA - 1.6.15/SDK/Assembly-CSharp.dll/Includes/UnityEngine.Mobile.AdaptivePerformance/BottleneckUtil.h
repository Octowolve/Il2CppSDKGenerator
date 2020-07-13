#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Mobile.AdaptivePerformance {

class BottleneckUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityEngine.Mobile.AdaptivePerformance", "BottleneckUtil"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DetermineBottleneck() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HittingFrameRateLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EffectiveTargetFrameRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> static T DetermineBottleneck(uintptr_t prevBottleneck, float averageGpuFrametime, float averageOverallFrametime) {
		return ((T (*)(void *, uintptr_t, float, float))(Il2CppBase() + 0x420EF28))(0, prevBottleneck, averageGpuFrametime, averageOverallFrametime);
	}
	template <typename T = bool> static T HittingFrameRateLimit(float actualFrameTime, float thresholdFactor) {
		return ((T (*)(void *, float, float))(Il2CppBase() + 0x421526C))(0, actualFrameTime, thresholdFactor);
	}
	template <typename T = int32_t> static T EffectiveTargetFrameRate() {
		return ((T (*)(void *))(Il2CppBase() + 0x421536C))(0);
	}

};

}
