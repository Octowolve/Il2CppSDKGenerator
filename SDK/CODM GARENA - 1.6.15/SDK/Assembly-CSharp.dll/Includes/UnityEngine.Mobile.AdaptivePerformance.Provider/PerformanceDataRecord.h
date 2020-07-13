#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Mobile.AdaptivePerformance.Provider {

class PerformanceDataRecord
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityEngine.Mobile.AdaptivePerformance.Provider", "PerformanceDataRecord"));
	}

	template <typename T = uintptr_t> T& ChangeFlags() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& TemperatureLevel() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = double> T& HighPrecisionTemperatureLevel() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& TemperatureTrend() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& WarningLevel() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& CpuPerformanceLevel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& GpuPerformanceLevel() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& PerformanceLevelControlAvailable() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& CpuFrameTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& GpuFrameTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& TemperatureTrend39() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& TemperatureTrend41() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = uintptr_t> T get_ChangeFlags() {
		return ((T (*)(PerformanceDataRecord*))(Il2CppBase() + 0x4218930))(this);
	}
	template <typename T = void> T set_ChangeFlags(uintptr_t value) {
		return ((T (*)(PerformanceDataRecord*, uintptr_t))(Il2CppBase() + 0x4218938))(this, value);
	}
	template <typename T = float> T get_TemperatureLevel() {
		return ((T (*)(PerformanceDataRecord*))(Il2CppBase() + 0x4218940))(this);
	}
	template <typename T = void> T set_TemperatureLevel(float value) {
		return ((T (*)(PerformanceDataRecord*, float))(Il2CppBase() + 0x4218948))(this, value);
	}
	template <typename T = double> T get_HighPrecisionTemperatureLevel() {
		return ((T (*)(PerformanceDataRecord*))(Il2CppBase() + 0x4218950))(this);
	}
	template <typename T = void> T set_HighPrecisionTemperatureLevel(double value) {
		return ((T (*)(PerformanceDataRecord*, double))(Il2CppBase() + 0x421895C))(this, value);
	}
	template <typename T = float> T get_TemperatureTrend() {
		return ((T (*)(PerformanceDataRecord*))(Il2CppBase() + 0x421896C))(this);
	}
	template <typename T = void> T set_TemperatureTrend(float value) {
		return ((T (*)(PerformanceDataRecord*, float))(Il2CppBase() + 0x4218974))(this, value);
	}
	template <typename T = uintptr_t> T get_WarningLevel() {
		return ((T (*)(PerformanceDataRecord*))(Il2CppBase() + 0x421897C))(this);
	}
	template <typename T = void> T set_WarningLevel(uintptr_t value) {
		return ((T (*)(PerformanceDataRecord*, uintptr_t))(Il2CppBase() + 0x4218984))(this, value);
	}
	template <typename T = int32_t> T get_CpuPerformanceLevel() {
		return ((T (*)(PerformanceDataRecord*))(Il2CppBase() + 0x421898C))(this);
	}
	template <typename T = void> T set_CpuPerformanceLevel(int32_t value) {
		return ((T (*)(PerformanceDataRecord*, int32_t))(Il2CppBase() + 0x4218994))(this, value);
	}
	template <typename T = int32_t> T get_GpuPerformanceLevel() {
		return ((T (*)(PerformanceDataRecord*))(Il2CppBase() + 0x421899C))(this);
	}
	template <typename T = void> T set_GpuPerformanceLevel(int32_t value) {
		return ((T (*)(PerformanceDataRecord*, int32_t))(Il2CppBase() + 0x42189A4))(this, value);
	}
	template <typename T = bool> T get_PerformanceLevelControlAvailable() {
		return ((T (*)(PerformanceDataRecord*))(Il2CppBase() + 0x42189AC))(this);
	}
	template <typename T = void> T set_PerformanceLevelControlAvailable(bool value) {
		return ((T (*)(PerformanceDataRecord*, bool))(Il2CppBase() + 0x42189B4))(this, value);
	}
	template <typename T = float> T get_CpuFrameTime() {
		return ((T (*)(PerformanceDataRecord*))(Il2CppBase() + 0x42189BC))(this);
	}
	template <typename T = void> T set_CpuFrameTime(float value) {
		return ((T (*)(PerformanceDataRecord*, float))(Il2CppBase() + 0x42189C4))(this, value);
	}
	template <typename T = float> T get_GpuFrameTime() {
		return ((T (*)(PerformanceDataRecord*))(Il2CppBase() + 0x42189CC))(this);
	}
	template <typename T = void> T set_GpuFrameTime(float value) {
		return ((T (*)(PerformanceDataRecord*, float))(Il2CppBase() + 0x42189D4))(this, value);
	}
	template <typename T = float> T get_TemperatureTrend39() {
		return ((T (*)(PerformanceDataRecord*))(Il2CppBase() + 0x42189DC))(this);
	}
	template <typename T = void> T set_TemperatureTrend39(float value) {
		return ((T (*)(PerformanceDataRecord*, float))(Il2CppBase() + 0x42189E4))(this, value);
	}
	template <typename T = float> T get_TemperatureTrend41() {
		return ((T (*)(PerformanceDataRecord*))(Il2CppBase() + 0x42189EC))(this);
	}
	template <typename T = void> T set_TemperatureTrend41(float value) {
		return ((T (*)(PerformanceDataRecord*, float))(Il2CppBase() + 0x42189F4))(this, value);
	}

};

}
