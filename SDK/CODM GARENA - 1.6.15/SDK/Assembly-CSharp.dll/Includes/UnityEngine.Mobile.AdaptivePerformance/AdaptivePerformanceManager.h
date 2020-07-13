#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Mobile.AdaptivePerformance {

class AdaptivePerformanceManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityEngine.Mobile.AdaptivePerformance", "AdaptivePerformanceManager"));
	}

	template <typename T = uintptr_t> T& ThermalEvent() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& PerformanceBottleneckChangeEvent() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_Subsystem() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_JustResumed() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_RequestedCpuLevel() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& m_RequestedGpuLevel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& m_NewUserPerformanceLevelRequest() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_ThermalMetrics() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_PerformanceMetrics() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_FrameTiming() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& LoggingFrequencyInFrames() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& AutomaticPerformanceControl() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& m_DevicePerfControl() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& m_AutoPerformanceLevelController() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& m_CpuFrameTimeProvider() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& m_AppLifecycle() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& m_TemperatureTrend() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_WaitForEndOfFrame() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& m_FrameCount() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_OverallFrameTime() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& m_GpuFrameTime() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& m_CpuFrameTime() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_ThermalEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_ThermalEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_PerformanceBottleneckChangeEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_PerformanceBottleneckChangeEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeSubsystem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LogThermalEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LogBottleneckEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddNonNegativeValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InvokeEndOfFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSubsystem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EffectiveTargetFrameRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplicationPause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = void> T add_ThermalEvent(uintptr_t value) {
		return ((T (*)(AdaptivePerformanceManager*, uintptr_t))(Il2CppBase() + 0x420B62C))(this, value);
	}
	template <typename T = void> T remove_ThermalEvent(uintptr_t value) {
		return ((T (*)(AdaptivePerformanceManager*, uintptr_t))(Il2CppBase() + 0x420B824))(this, value);
	}
	template <typename T = void> T add_PerformanceBottleneckChangeEvent(uintptr_t value) {
		return ((T (*)(AdaptivePerformanceManager*, uintptr_t))(Il2CppBase() + 0x420BA1C))(this, value);
	}
	template <typename T = void> T remove_PerformanceBottleneckChangeEvent(uintptr_t value) {
		return ((T (*)(AdaptivePerformanceManager*, uintptr_t))(Il2CppBase() + 0x420BC14))(this, value);
	}
	template <typename T = uintptr_t> T get_ThermalMetrics() {
		return ((T (*)(AdaptivePerformanceManager*))(Il2CppBase() + 0x420BE0C))(this);
	}
	template <typename T = uintptr_t> T get_PerformanceMetrics() {
		return ((T (*)(AdaptivePerformanceManager*))(Il2CppBase() + 0x420BE24))(this);
	}
	template <typename T = uintptr_t> T get_FrameTiming() {
		return ((T (*)(AdaptivePerformanceManager*))(Il2CppBase() + 0x420BE38))(this);
	}
	template <typename T = bool> T get_Logging() {
		return ((T (*)(AdaptivePerformanceManager*))(Il2CppBase() + 0x420BE50))(this);
	}
	template <typename T = void> T set_Logging(bool value) {
		return ((T (*)(AdaptivePerformanceManager*, bool))(Il2CppBase() + 0x420BF00))(this, value);
	}
	template <typename T = int32_t> T get_LoggingFrequencyInFrames() {
		return ((T (*)(AdaptivePerformanceManager*))(Il2CppBase() + 0x420BFB4))(this);
	}
	template <typename T = void> T set_LoggingFrequencyInFrames(int32_t value) {
		return ((T (*)(AdaptivePerformanceManager*, int32_t))(Il2CppBase() + 0x420BFBC))(this, value);
	}
	template <typename T = bool> T get_Active() {
		return ((T (*)(AdaptivePerformanceManager*))(Il2CppBase() + 0x420BFC4))(this);
	}
	template <typename T = int32_t> T get_MaxCpuPerformanceLevel() {
		return ((T (*)(AdaptivePerformanceManager*))(Il2CppBase() + 0x420BFD4))(this);
	}
	template <typename T = int32_t> T get_MaxGpuPerformanceLevel() {
		return ((T (*)(AdaptivePerformanceManager*))(Il2CppBase() + 0x420C0D8))(this);
	}
	template <typename T = bool> T get_AutomaticPerformanceControl() {
		return ((T (*)(AdaptivePerformanceManager*))(Il2CppBase() + 0x420C1DC))(this);
	}
	template <typename T = void> T set_AutomaticPerformanceControl(bool value) {
		return ((T (*)(AdaptivePerformanceManager*, bool))(Il2CppBase() + 0x420B624))(this, value);
	}
	template <typename T = uintptr_t> T get_PerformanceControlMode() {
		return ((T (*)(AdaptivePerformanceManager*))(Il2CppBase() + 0x420C1E4))(this);
	}
	template <typename T = int32_t> T get_CpuLevel() {
		return ((T (*)(AdaptivePerformanceManager*))(Il2CppBase() + 0x420C200))(this);
	}
	template <typename T = void> T set_CpuLevel(int32_t value) {
		return ((T (*)(AdaptivePerformanceManager*, int32_t))(Il2CppBase() + 0x420C208))(this, value);
	}
	template <typename T = int32_t> T get_GpuLevel() {
		return ((T (*)(AdaptivePerformanceManager*))(Il2CppBase() + 0x420C218))(this);
	}
	template <typename T = void> T set_GpuLevel(int32_t value) {
		return ((T (*)(AdaptivePerformanceManager*, int32_t))(Il2CppBase() + 0x420C220))(this, value);
	}
	template <typename T = uintptr_t> T get_DevelopmentSettings() {
		return ((T (*)(AdaptivePerformanceManager*))(Il2CppBase() + 0x420C230))(this);
	}
	template <typename T = uintptr_t> T get_ThermalStatus() {
		return ((T (*)(AdaptivePerformanceManager*))(Il2CppBase() + 0x420C234))(this);
	}
	template <typename T = uintptr_t> T get_PerformanceStatus() {
		return ((T (*)(AdaptivePerformanceManager*))(Il2CppBase() + 0x420C238))(this);
	}
	template <typename T = uintptr_t> T get_DevicePerformanceControl() {
		return ((T (*)(AdaptivePerformanceManager*))(Il2CppBase() + 0x420C23C))(this);
	}
	template <typename T = void> T ForceUpdate() {
		return ((T (*)(AdaptivePerformanceManager*))(Il2CppBase() + 0x420C240))(this);
	}
	template <typename T = bool> T InitializeSubsystem(uintptr_t subsystem) {
		return ((T (*)(AdaptivePerformanceManager*, uintptr_t))(Il2CppBase() + 0x420C468))(this, subsystem);
	}
	template <typename T = void> T Start() {
		return ((T (*)(AdaptivePerformanceManager*))(Il2CppBase() + 0x420C568))(this);
	}
	template <typename T = void> T LogThermalEvent(uintptr_t ev) {
		return ((T (*)(AdaptivePerformanceManager*, uintptr_t))(Il2CppBase() + 0x420E18C))(this, ev);
	}
	template <typename T = void> T LogBottleneckEvent(uintptr_t ev) {
		return ((T (*)(AdaptivePerformanceManager*, uintptr_t))(Il2CppBase() + 0x420E258))(this, ev);
	}
	template <typename T = void> T AddNonNegativeValue(uintptr_t runningAverage, float value) {
		return ((T (*)(AdaptivePerformanceManager*, uintptr_t, float))(Il2CppBase() + 0x420E2F8))(this, runningAverage, value);
	}
	template <typename T = uintptr_t> T InvokeEndOfFrame() {
		return ((T (*)(AdaptivePerformanceManager*))(Il2CppBase() + 0x420D844))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(AdaptivePerformanceManager*))(Il2CppBase() + 0x420E5BC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(AdaptivePerformanceManager*))(Il2CppBase() + 0x420E714))(this);
	}
	template <typename T = void> T UpdateSubsystem() {
		return ((T (*)(AdaptivePerformanceManager*))(Il2CppBase() + 0x420DA14))(this);
	}
	template <typename T = int32_t> static T EffectiveTargetFrameRate() {
		return ((T (*)(void *))(Il2CppBase() + 0x420ECB8))(0);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(AdaptivePerformanceManager*))(Il2CppBase() + 0x420F93C))(this);
	}
	template <typename T = void> T OnApplicationPause(bool pause) {
		return ((T (*)(AdaptivePerformanceManager*, bool))(Il2CppBase() + 0x420F9F4))(this, pause);
	}
	template <typename T = void> T Startm__0(uintptr_t thermalMetrics) {
		return ((T (*)(AdaptivePerformanceManager*, uintptr_t))(Il2CppBase() + 0x420FD9C))(this, thermalMetrics);
	}
	template <typename T = void> T Startm__1(uintptr_t ev) {
		return ((T (*)(AdaptivePerformanceManager*, uintptr_t))(Il2CppBase() + 0x420FDC8))(this, ev);
	}

};

}
