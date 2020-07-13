#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Mobile.AdaptivePerformance {

class AutoPerformanceLevelController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityEngine.Mobile.AdaptivePerformance", "AutoPerformanceLevelController"));
	}

	template <typename T = uintptr_t> T& m_PerfControl() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_PerfStats() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_ThermalStats() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> static T& m_LastChangeTimeStamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& m_LastChangeTimeStamp39() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = float> static T& m_LastChangeTimeStamp41() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = float> T& m_LastGpuLevelRaiseTimeStamp() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_LastCpuLevelRaiseTimeStamp() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_TargetFrameRateHitTimestamp() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_BottleneckUnknownTimestamp() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& m_TriedToResolveUnknownBottleneck() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& m_CurrentUpdateIdx() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& UPDATE_PERIOD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CONTROL_NONE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CONTROL_UNDER37() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CONTROL_UNDER39() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CONTROL_UNDER41() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& TargetFrameTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& AllowedCpuActiveTimeRatio() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& AllowedGpuActiveTimeRatio() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& GpuLevelBounceAvoidanceThreshold() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& CpuLevelBounceAvoidanceThreshold() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& UpdateInterval() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& MinTargetFrameRateHitTime() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& MaxTemperatureLevel() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& mLastControlMode() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& mControlMode() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& Enabled() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> static T& cfEpsilon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Override() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NormalSituation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreThrottlingSituationUnder39() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ThrottlingSituationUnder41() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBottleneckChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RaiseGpuLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RaiseCpuLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LowerCpuLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LowerGpuLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AllowLowerCpuLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AllowLowerGpuLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AllowRaiseLevels() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AllowRaiseCpuLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AllowRaiseGpuLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}

	template <typename T = float> T get_TargetFrameTime() {
		return ((T (*)(AutoPerformanceLevelController*))(Il2CppBase() + 0x42106D8))(this);
	}
	template <typename T = void> T set_TargetFrameTime(float value) {
		return ((T (*)(AutoPerformanceLevelController*, float))(Il2CppBase() + 0x420F224))(this, value);
	}
	template <typename T = float> T get_AllowedCpuActiveTimeRatio() {
		return ((T (*)(AutoPerformanceLevelController*))(Il2CppBase() + 0x42106E0))(this);
	}
	template <typename T = void> T set_AllowedCpuActiveTimeRatio(float value) {
		return ((T (*)(AutoPerformanceLevelController*, float))(Il2CppBase() + 0x42106A8))(this, value);
	}
	template <typename T = float> T get_AllowedGpuActiveTimeRatio() {
		return ((T (*)(AutoPerformanceLevelController*))(Il2CppBase() + 0x42106E8))(this);
	}
	template <typename T = void> T set_AllowedGpuActiveTimeRatio(float value) {
		return ((T (*)(AutoPerformanceLevelController*, float))(Il2CppBase() + 0x42106B0))(this, value);
	}
	template <typename T = float> T get_GpuLevelBounceAvoidanceThreshold() {
		return ((T (*)(AutoPerformanceLevelController*))(Il2CppBase() + 0x42106F0))(this);
	}
	template <typename T = void> T set_GpuLevelBounceAvoidanceThreshold(float value) {
		return ((T (*)(AutoPerformanceLevelController*, float))(Il2CppBase() + 0x42106B8))(this, value);
	}
	template <typename T = float> T get_CpuLevelBounceAvoidanceThreshold() {
		return ((T (*)(AutoPerformanceLevelController*))(Il2CppBase() + 0x42106F8))(this);
	}
	template <typename T = void> T set_CpuLevelBounceAvoidanceThreshold(float value) {
		return ((T (*)(AutoPerformanceLevelController*, float))(Il2CppBase() + 0x42106C0))(this, value);
	}
	template <typename T = float> T get_UpdateInterval() {
		return ((T (*)(AutoPerformanceLevelController*))(Il2CppBase() + 0x4210700))(this);
	}
	template <typename T = void> T set_UpdateInterval(float value) {
		return ((T (*)(AutoPerformanceLevelController*, float))(Il2CppBase() + 0x42106A0))(this, value);
	}
	template <typename T = float> T get_MinTargetFrameRateHitTime() {
		return ((T (*)(AutoPerformanceLevelController*))(Il2CppBase() + 0x4210708))(this);
	}
	template <typename T = void> T set_MinTargetFrameRateHitTime(float value) {
		return ((T (*)(AutoPerformanceLevelController*, float))(Il2CppBase() + 0x42106C8))(this, value);
	}
	template <typename T = float> T get_MaxTemperatureLevel() {
		return ((T (*)(AutoPerformanceLevelController*))(Il2CppBase() + 0x4210710))(this);
	}
	template <typename T = void> T set_MaxTemperatureLevel(float value) {
		return ((T (*)(AutoPerformanceLevelController*, float))(Il2CppBase() + 0x42106D0))(this, value);
	}
	template <typename T = bool> T get_Enabled() {
		return ((T (*)(AutoPerformanceLevelController*))(Il2CppBase() + 0x420F234))(this);
	}
	template <typename T = void> T set_Enabled(bool value) {
		return ((T (*)(AutoPerformanceLevelController*, bool))(Il2CppBase() + 0x420F22C))(this, value);
	}
	template <typename T = void> T Update(float time, float trend39, float trend41) {
		return ((T (*)(AutoPerformanceLevelController*, float, float, float))(Il2CppBase() + 0x420F688))(this, time, trend39, trend41);
	}
	template <typename T = void> T Override(int32_t requestedCpuLevel, int32_t requestedGpuLevel) {
		return ((T (*)(AutoPerformanceLevelController*, int32_t, int32_t))(Il2CppBase() + 0x420F23C))(this, requestedCpuLevel, requestedGpuLevel);
	}
	template <typename T = void> T NormalSituation(float timestamp) {
		return ((T (*)(AutoPerformanceLevelController*, float))(Il2CppBase() + 0x4211024))(this, timestamp);
	}
	template <typename T = void> T PreThrottlingSituationUnder39(float timestamp, float trend39) {
		return ((T (*)(AutoPerformanceLevelController*, float, float))(Il2CppBase() + 0x42147F0))(this, timestamp, trend39);
	}
	template <typename T = void> T ThrottlingSituationUnder41(float timestamp, float trend41) {
		return ((T (*)(AutoPerformanceLevelController*, float, float))(Il2CppBase() + 0x4214998))(this, timestamp, trend41);
	}
	template <typename T = void> T UpdateImpl(float timestamp, float trend39, float trend41) {
		return ((T (*)(AutoPerformanceLevelController*, float, float, float))(Il2CppBase() + 0x4210718))(this, timestamp, trend39, trend41);
	}
	template <typename T = void> T OnBottleneckChange(uintptr_t ev) {
		return ((T (*)(AutoPerformanceLevelController*, uintptr_t))(Il2CppBase() + 0x4214F1C))(this, ev);
	}
	template <typename T = void> T RaiseGpuLevel(float timestamp) {
		return ((T (*)(AutoPerformanceLevelController*, float))(Il2CppBase() + 0x42117A4))(this, timestamp);
	}
	template <typename T = void> T RaiseCpuLevel(float timestamp) {
		return ((T (*)(AutoPerformanceLevelController*, float))(Il2CppBase() + 0x4212B00))(this, timestamp);
	}
	template <typename T = void> T LowerCpuLevel(float timestamp) {
		return ((T (*)(AutoPerformanceLevelController*, float))(Il2CppBase() + 0x42131E0))(this, timestamp);
	}
	template <typename T = void> T LowerGpuLevel(float timestamp) {
		return ((T (*)(AutoPerformanceLevelController*, float))(Il2CppBase() + 0x421378C))(this, timestamp);
	}
	template <typename T = bool> T AllowLowerCpuLevel(float timestamp) {
		return ((T (*)(AutoPerformanceLevelController*, float))(Il2CppBase() + 0x4212F6C))(this, timestamp);
	}
	template <typename T = bool> T AllowLowerGpuLevel(float timestamp) {
		return ((T (*)(AutoPerformanceLevelController*, float))(Il2CppBase() + 0x4213518))(this, timestamp);
	}
	template <typename T = bool> T AllowRaiseLevels() {
		return ((T (*)(AutoPerformanceLevelController*))(Il2CppBase() + 0x421502C))(this);
	}
	template <typename T = bool> T AllowRaiseCpuLevel() {
		return ((T (*)(AutoPerformanceLevelController*))(Il2CppBase() + 0x4212908))(this);
	}
	template <typename T = bool> T AllowRaiseGpuLevel() {
		return ((T (*)(AutoPerformanceLevelController*))(Il2CppBase() + 0x42115AC))(this);
	}
	template <typename T = void> T AutoPerformanceLevelControllerm__0(uintptr_t ev) {
		return ((T (*)(AutoPerformanceLevelController*, uintptr_t))(Il2CppBase() + 0x42151C4))(this, ev);
	}

};

}
