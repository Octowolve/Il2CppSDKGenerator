#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Mobile.AdaptivePerformance.Provider {

class SamsungGameSDKAdaptivePerformanceSubsystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityEngine.Mobile.AdaptivePerformance.Provider", "SamsungGameSDKAdaptivePerformanceSubsystem"));
	}

	template <typename T = Il2CppString*> static T& sceneName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_Api() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_AsyncUpdater() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_Data() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_DataLock() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = void*> T& m_MainTemperature() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = void*> T& m_MainTemperature_HighPrecision() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = void*> T& m_SkinTemp() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = void*> T& m_PSTLevel() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = void*> T& m_HighPrecisionSkinTemp() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = void*> T& m_GPUTime() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& m_Version() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& m_MinTempLevel() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& m_MaxTempLevel() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& MaxCpuPerformanceLevel() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& MaxGpuPerformanceLevel() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPerformanceWarning() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPerformanceLevelTimeout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ImmediateUpdateTemperature() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryParseVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Stop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Destroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrintStats() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NormalizeTemperatureLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_NormalizeTemperatureLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NormalizeJTLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTemperatureLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPerformanceLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplicationPause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplicationResume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDescriptor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = uintptr_t> T get_ApplicationLifecycle() {
		return ((T (*)(SamsungGameSDKAdaptivePerformanceSubsystem*))(Il2CppBase() + 0x4219004))(this);
	}
	template <typename T = uintptr_t> T get_PerformanceLevelControl() {
		return ((T (*)(SamsungGameSDKAdaptivePerformanceSubsystem*))(Il2CppBase() + 0x4219008))(this);
	}
	template <typename T = int32_t> T get_MaxCpuPerformanceLevel() {
		return ((T (*)(SamsungGameSDKAdaptivePerformanceSubsystem*))(Il2CppBase() + 0x421900C))(this);
	}
	template <typename T = void> T set_MaxCpuPerformanceLevel(int32_t value) {
		return ((T (*)(SamsungGameSDKAdaptivePerformanceSubsystem*, int32_t))(Il2CppBase() + 0x4219014))(this, value);
	}
	template <typename T = int32_t> T get_MaxGpuPerformanceLevel() {
		return ((T (*)(SamsungGameSDKAdaptivePerformanceSubsystem*))(Il2CppBase() + 0x421901C))(this);
	}
	template <typename T = void> T set_MaxGpuPerformanceLevel(int32_t value) {
		return ((T (*)(SamsungGameSDKAdaptivePerformanceSubsystem*, int32_t))(Il2CppBase() + 0x4219024))(this, value);
	}
	template <typename T = void> T OnPerformanceWarning(uintptr_t warningLevel) {
		return ((T (*)(SamsungGameSDKAdaptivePerformanceSubsystem*, uintptr_t))(Il2CppBase() + 0x421902C))(this, warningLevel);
	}
	template <typename T = void> T OnPerformanceLevelTimeout() {
		return ((T (*)(SamsungGameSDKAdaptivePerformanceSubsystem*))(Il2CppBase() + 0x421912C))(this);
	}
	template <typename T = void> T ImmediateUpdateTemperature() {
		return ((T (*)(SamsungGameSDKAdaptivePerformanceSubsystem*))(Il2CppBase() + 0x4219204))(this);
	}
	template <typename T = bool> static T TryParseVersion(Il2CppString* versionString, uintptr_t* version) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x42194A0))(0, versionString, version);
	}
	template <typename T = void> T Start() {
		return ((T (*)(SamsungGameSDKAdaptivePerformanceSubsystem*))(Il2CppBase() + 0x4219624))(this);
	}
	template <typename T = void> T Stop() {
		return ((T (*)(SamsungGameSDKAdaptivePerformanceSubsystem*))(Il2CppBase() + 0x421A468))(this);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(SamsungGameSDKAdaptivePerformanceSubsystem*))(Il2CppBase() + 0x421A500))(this);
	}
	template <typename T = Il2CppString*> T PrintStats() {
		return ((T (*)(SamsungGameSDKAdaptivePerformanceSubsystem*))(Il2CppBase() + 0x421A5DC))(this);
	}
	template <typename T = uintptr_t> T Update() {
		return ((T (*)(SamsungGameSDKAdaptivePerformanceSubsystem*))(Il2CppBase() + 0x421A804))(this);
	}
	template <typename T = uintptr_t> T get_Version() {
		return ((T (*)(SamsungGameSDKAdaptivePerformanceSubsystem*))(Il2CppBase() + 0x421ACA8))(this);
	}
	template <typename T = float> static T NormalizeTemperatureLevel(int32_t currentTempLevel, int32_t minValue, int32_t maxValue) {
		return ((T (*)(void *, int32_t, int32_t, int32_t))(Il2CppBase() + 0x421ACB0))(0, currentTempLevel, minValue, maxValue);
	}
	template <typename T = float> T NormalizeTemperatureLevel_1(int32_t currentTempLevel) {
		return ((T (*)(SamsungGameSDKAdaptivePerformanceSubsystem*, int32_t))(Il2CppBase() + 0x421ADD0))(this, currentTempLevel);
	}
	template <typename T = float> static T NormalizeJTLevel(int32_t currentTempLevel) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x421AE90))(0, currentTempLevel);
	}
	template <typename T = float> T GetTemperatureLevel() {
		return ((T (*)(SamsungGameSDKAdaptivePerformanceSubsystem*))(Il2CppBase() + 0x42193C0))(this);
	}
	template <typename T = float> T get_GpuFrameTime() {
		return ((T (*)(SamsungGameSDKAdaptivePerformanceSubsystem*))(Il2CppBase() + 0x421ABE0))(this);
	}
	template <typename T = double> T get_HighPrecisionTempLevel() {
		return ((T (*)(SamsungGameSDKAdaptivePerformanceSubsystem*))(Il2CppBase() + 0x421AB44))(this);
	}
	template <typename T = bool> T SetPerformanceLevel(int32_t cpuLevel, int32_t gpuLevel) {
		return ((T (*)(SamsungGameSDKAdaptivePerformanceSubsystem*, int32_t, int32_t))(Il2CppBase() + 0x421AF40))(this, cpuLevel, gpuLevel);
	}
	template <typename T = void> T ApplicationPause() {
		return ((T (*)(SamsungGameSDKAdaptivePerformanceSubsystem*))(Il2CppBase() + 0x421B42C))(this);
	}
	template <typename T = void> T ApplicationResume() {
		return ((T (*)(SamsungGameSDKAdaptivePerformanceSubsystem*))(Il2CppBase() + 0x421B718))(this);
	}
	template <typename T = void> static T RegisterDescriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x421BB48))(0);
	}
	template <typename T = int32_t> T SamsungGameSDKAdaptivePerformanceSubsystemm__0() {
		return ((T (*)(SamsungGameSDKAdaptivePerformanceSubsystem*))(Il2CppBase() + 0x421BDFC))(this);
	}
	template <typename T = int32_t> T SamsungGameSDKAdaptivePerformanceSubsystemm__1() {
		return ((T (*)(SamsungGameSDKAdaptivePerformanceSubsystem*))(Il2CppBase() + 0x421C070))(this);
	}
	template <typename T = double> T SamsungGameSDKAdaptivePerformanceSubsystemm__2() {
		return ((T (*)(SamsungGameSDKAdaptivePerformanceSubsystem*))(Il2CppBase() + 0x421C2E4))(this);
	}
	template <typename T = double> T SamsungGameSDKAdaptivePerformanceSubsystemm__3() {
		return ((T (*)(SamsungGameSDKAdaptivePerformanceSubsystem*))(Il2CppBase() + 0x421C550))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_PrintStats() {
		return ((T (*)(SamsungGameSDKAdaptivePerformanceSubsystem*))(Il2CppBase() + 0x421C7B8))(this);
	}

};

}
