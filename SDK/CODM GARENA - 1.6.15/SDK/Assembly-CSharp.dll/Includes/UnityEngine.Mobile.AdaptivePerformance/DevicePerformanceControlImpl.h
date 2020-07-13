#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Mobile.AdaptivePerformance {

class DevicePerformanceControlImpl
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityEngine.Mobile.AdaptivePerformance", "DevicePerformanceControlImpl"));
	}

	template <typename T = uintptr_t> T& m_PerformanceLevelControl() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& PerformanceControlMode() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& CpuLevel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& GpuLevel() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& CurrentCpuLevel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& CurrentGpuLevel() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Update() {
		return ((T (*)(DevicePerformanceControlImpl*))(Il2CppBase() + 0x420F794))(this);
	}
	template <typename T = void> T ForceUpdate() {
		return ((T (*)(DevicePerformanceControlImpl*))(Il2CppBase() + 0x420C2F8))(this);
	}
	template <typename T = bool> T get_AutomaticPerformanceControl() {
		return ((T (*)(DevicePerformanceControlImpl*))(Il2CppBase() + 0x4216C74))(this);
	}
	template <typename T = void> T set_AutomaticPerformanceControl(bool value) {
		return ((T (*)(DevicePerformanceControlImpl*, bool))(Il2CppBase() + 0x4216C7C))(this, value);
	}
	template <typename T = uintptr_t> T get_PerformanceControlMode() {
		return ((T (*)(DevicePerformanceControlImpl*))(Il2CppBase() + 0x420C1F8))(this);
	}
	template <typename T = void> T set_PerformanceControlMode(uintptr_t value) {
		return ((T (*)(DevicePerformanceControlImpl*, uintptr_t))(Il2CppBase() + 0x420D9D4))(this, value);
	}
	template <typename T = int32_t> T get_MaxCpuPerformanceLevel() {
		return ((T (*)(DevicePerformanceControlImpl*))(Il2CppBase() + 0x420BFE8))(this);
	}
	template <typename T = int32_t> T get_MaxGpuPerformanceLevel() {
		return ((T (*)(DevicePerformanceControlImpl*))(Il2CppBase() + 0x420C0EC))(this);
	}
	template <typename T = int32_t> T get_CpuLevel() {
		return ((T (*)(DevicePerformanceControlImpl*))(Il2CppBase() + 0x4216C64))(this);
	}
	template <typename T = void> T set_CpuLevel(int32_t value) {
		return ((T (*)(DevicePerformanceControlImpl*, int32_t))(Il2CppBase() + 0x420D9DC))(this, value);
	}
	template <typename T = int32_t> T get_GpuLevel() {
		return ((T (*)(DevicePerformanceControlImpl*))(Il2CppBase() + 0x4216C6C))(this);
	}
	template <typename T = void> T set_GpuLevel(int32_t value) {
		return ((T (*)(DevicePerformanceControlImpl*, int32_t))(Il2CppBase() + 0x420D9E4))(this, value);
	}
	template <typename T = int32_t> T get_CurrentCpuLevel() {
		return ((T (*)(DevicePerformanceControlImpl*))(Il2CppBase() + 0x420F92C))(this);
	}
	template <typename T = void> T set_CurrentCpuLevel(int32_t value) {
		return ((T (*)(DevicePerformanceControlImpl*, int32_t))(Il2CppBase() + 0x4216C54))(this, value);
	}
	template <typename T = int32_t> T get_CurrentGpuLevel() {
		return ((T (*)(DevicePerformanceControlImpl*))(Il2CppBase() + 0x420F934))(this);
	}
	template <typename T = void> T set_CurrentGpuLevel(int32_t value) {
		return ((T (*)(DevicePerformanceControlImpl*, int32_t))(Il2CppBase() + 0x4216C5C))(this, value);
	}

};

}
