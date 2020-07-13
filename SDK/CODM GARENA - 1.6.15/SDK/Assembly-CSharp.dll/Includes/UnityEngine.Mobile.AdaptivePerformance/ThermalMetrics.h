#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Mobile.AdaptivePerformance {

class ThermalMetrics
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityEngine.Mobile.AdaptivePerformance", "ThermalMetrics"));
	}

	template <typename T = uintptr_t> T& WarningLevel() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& TemperatureLevel() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& TemperatureTrend39() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& TemperatureTrend41() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = double> T& HighPrecisionTemperatureLevel() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_WarningLevel() {
		return ((T (*)(ThermalMetrics*))(Il2CppBase() + 0x421E320))(this);
	}
	template <typename T = void> T set_WarningLevel(uintptr_t value) {
		return ((T (*)(ThermalMetrics*, uintptr_t))(Il2CppBase() + 0x421E328))(this, value);
	}
	template <typename T = float> T get_TemperatureLevel() {
		return ((T (*)(ThermalMetrics*))(Il2CppBase() + 0x421E330))(this);
	}
	template <typename T = void> T set_TemperatureLevel(float value) {
		return ((T (*)(ThermalMetrics*, float))(Il2CppBase() + 0x421E338))(this, value);
	}
	template <typename T = float> T get_TemperatureTrend39() {
		return ((T (*)(ThermalMetrics*))(Il2CppBase() + 0x421E340))(this);
	}
	template <typename T = void> T set_TemperatureTrend39(float value) {
		return ((T (*)(ThermalMetrics*, float))(Il2CppBase() + 0x421E348))(this, value);
	}
	template <typename T = float> T get_TemperatureTrend41() {
		return ((T (*)(ThermalMetrics*))(Il2CppBase() + 0x421E350))(this);
	}
	template <typename T = void> T set_TemperatureTrend41(float value) {
		return ((T (*)(ThermalMetrics*, float))(Il2CppBase() + 0x421E358))(this, value);
	}
	template <typename T = double> T get_HighPrecisionTemperatureLevel() {
		return ((T (*)(ThermalMetrics*))(Il2CppBase() + 0x421E360))(this);
	}
	template <typename T = void> T set_HighPrecisionTemperatureLevel(double value) {
		return ((T (*)(ThermalMetrics*, double))(Il2CppBase() + 0x421E36C))(this, value);
	}

};

}
