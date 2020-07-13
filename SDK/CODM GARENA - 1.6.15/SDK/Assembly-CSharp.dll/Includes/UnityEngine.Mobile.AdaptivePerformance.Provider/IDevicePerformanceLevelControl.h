#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Mobile.AdaptivePerformance.Provider {

class IDevicePerformanceLevelControl
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityEngine.Mobile.AdaptivePerformance.Provider", "IDevicePerformanceLevelControl"));
	}


	template <typename T = int32_t> T get_MaxCpuPerformanceLevel() {
		return ((T (*)(IDevicePerformanceLevelControl*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_MaxGpuPerformanceLevel() {
		return ((T (*)(IDevicePerformanceLevelControl*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T SetPerformanceLevel(int32_t cpu, int32_t gpu) {
		return ((T (*)(IDevicePerformanceLevelControl*, int32_t, int32_t))(Il2CppBase() + 0x0))(this, cpu, gpu);
	}

};

}
