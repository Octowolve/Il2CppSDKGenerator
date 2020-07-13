#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Mobile.AdaptivePerformance {

class ThermalEventHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityEngine.Mobile.AdaptivePerformance", "ThermalEventHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t thermalMetrics) {
		return ((T (*)(ThermalEventHandler*, uintptr_t))(Il2CppBase() + 0x420F15C))(this, thermalMetrics);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t thermalMetrics, uintptr_t callback, uintptr_t object) {
		return ((T (*)(ThermalEventHandler*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x421E244))(this, thermalMetrics, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(ThermalEventHandler*, uintptr_t))(Il2CppBase() + 0x421E314))(this, result);
	}

};

}
