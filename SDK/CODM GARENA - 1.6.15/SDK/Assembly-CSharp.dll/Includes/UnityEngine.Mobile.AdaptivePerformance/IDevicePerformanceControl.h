#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Mobile.AdaptivePerformance {

class IDevicePerformanceControl
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityEngine.Mobile.AdaptivePerformance", "IDevicePerformanceControl"));
	}


	template <typename T = bool> T get_AutomaticPerformanceControl() {
		return ((T (*)(IDevicePerformanceControl*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_AutomaticPerformanceControl(bool value) {
		return ((T (*)(IDevicePerformanceControl*, bool))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T ForceUpdate() {
		return ((T (*)(IDevicePerformanceControl*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_PerformanceControlMode() {
		return ((T (*)(IDevicePerformanceControl*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_MaxCpuPerformanceLevel() {
		return ((T (*)(IDevicePerformanceControl*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_MaxGpuPerformanceLevel() {
		return ((T (*)(IDevicePerformanceControl*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_CpuLevel() {
		return ((T (*)(IDevicePerformanceControl*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_CpuLevel(int32_t value) {
		return ((T (*)(IDevicePerformanceControl*, int32_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = int32_t> T get_GpuLevel() {
		return ((T (*)(IDevicePerformanceControl*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_GpuLevel(int32_t value) {
		return ((T (*)(IDevicePerformanceControl*, int32_t))(Il2CppBase() + 0x0))(this, value);
	}

};

}
