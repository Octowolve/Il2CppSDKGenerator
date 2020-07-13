#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Mobile.AdaptivePerformance {

class TemperatureTrend
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityEngine.Mobile.AdaptivePerformance", "TemperatureTrend"));
	}

	template <typename T = float> T& ThermalTrend41() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& ThermalTrend39() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_SavedTimestamp() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_SavedTemperature() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertTempToRealTemp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreThrottlingSituationUnder39() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ThrottlingSituationUnder41() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Reset(float timestamp) {
		return ((T (*)(TemperatureTrend*, float))(Il2CppBase() + 0x420EA54))(this, timestamp);
	}
	template <typename T = float> T get_ThermalTrend41() {
		return ((T (*)(TemperatureTrend*))(Il2CppBase() + 0x420EB20))(this);
	}
	template <typename T = void> T set_ThermalTrend41(float value) {
		return ((T (*)(TemperatureTrend*, float))(Il2CppBase() + 0x421DE90))(this, value);
	}
	template <typename T = float> T get_ThermalTrend39() {
		return ((T (*)(TemperatureTrend*))(Il2CppBase() + 0x420EB18))(this);
	}
	template <typename T = void> T set_ThermalTrend39(float value) {
		return ((T (*)(TemperatureTrend*, float))(Il2CppBase() + 0x421DE98))(this, value);
	}
	template <typename T = float> T get_Temperature() {
		return ((T (*)(TemperatureTrend*))(Il2CppBase() + 0x421DEA0))(this);
	}
	template <typename T = float> T ConvertTempToRealTemp(double temp) {
		return ((T (*)(TemperatureTrend*, double))(Il2CppBase() + 0x421DEA8))(this, temp);
	}
	template <typename T = float> T PreThrottlingSituationUnder39(float Timestamp, float RealTemperature) {
		return ((T (*)(TemperatureTrend*, float, float))(Il2CppBase() + 0x421DF90))(this, Timestamp, RealTemperature);
	}
	template <typename T = float> T ThrottlingSituationUnder41(float Timestamp, float RealTemperature) {
		return ((T (*)(TemperatureTrend*, float, float))(Il2CppBase() + 0x421E0C8))(this, Timestamp, RealTemperature);
	}
	template <typename T = bool> T Update(float newTimestamp, double newTemperatureTimestamp) {
		return ((T (*)(TemperatureTrend*, float, double))(Il2CppBase() + 0x420E928))(this, newTimestamp, newTemperatureTimestamp);
	}

};

}
