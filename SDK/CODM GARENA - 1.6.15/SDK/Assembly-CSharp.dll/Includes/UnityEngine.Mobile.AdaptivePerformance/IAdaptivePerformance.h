#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Mobile.AdaptivePerformance {

class IAdaptivePerformance
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityEngine.Mobile.AdaptivePerformance", "IAdaptivePerformance"));
	}


	template <typename T = bool> T get_Active() {
		return ((T (*)(IAdaptivePerformance*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_ThermalStatus() {
		return ((T (*)(IAdaptivePerformance*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_PerformanceStatus() {
		return ((T (*)(IAdaptivePerformance*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_DevicePerformanceControl() {
		return ((T (*)(IAdaptivePerformance*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_DevelopmentSettings() {
		return ((T (*)(IAdaptivePerformance*))(Il2CppBase() + 0x0))(this);
	}

};

}
