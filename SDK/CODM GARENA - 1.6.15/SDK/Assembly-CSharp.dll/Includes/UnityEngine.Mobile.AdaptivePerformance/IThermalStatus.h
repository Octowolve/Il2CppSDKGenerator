#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Mobile.AdaptivePerformance {

class IThermalStatus
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityEngine.Mobile.AdaptivePerformance", "IThermalStatus"));
	}


	template <typename T = uintptr_t> T get_ThermalMetrics() {
		return ((T (*)(IThermalStatus*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T add_ThermalEvent(uintptr_t value) {
		return ((T (*)(IThermalStatus*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_ThermalEvent(uintptr_t value) {
		return ((T (*)(IThermalStatus*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}

};

}
