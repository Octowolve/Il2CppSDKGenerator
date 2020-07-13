#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class ClientMonitorManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "ClientMonitorManager"));
	}

	template <typename T = uintptr_t> T& m_NetworkMonitor() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& m_HasSwitchRunInBackground() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_techDataReporter() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_StartSampleFPS() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_AbnormalFPSCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_AverageFPS() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& m_BootFootPrint() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& m_PeakFootPrint() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& m_LastReportFootPrint() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& m_FootPrintDangerousThreshold() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& m_FootPrintDangerousTriggeredCount() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& m_StartMatchFootPrint() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& m_IsFootPrintTooHigh() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_LastReportFootPrintTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> static T& kSampleInterval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_DeltaTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& m_DeltaTime2() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& m_LoadingAssetList() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> static T& kNullValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_LoadingMapID() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& m_LoadingMapStartTime() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& m_LoadingDescription() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppString*> static T& TAG() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& sb() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppVector3> T& kDefaultVec3f() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> static T& s_RegisteredCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& s_Enable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1);
	}
	template <typename T = Il2CppString*> static T& kFlagString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& ShaderSubProgramStats() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& f__mg$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SampleFootPrint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateDangerousFootPrintThreshold() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartFootPrintSampler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Stop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartAverageFPSSampler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AverageFPSSampler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordCurrentMapAverageFPS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplicationPause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyAsyncLoadStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyAsyncLoadEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyLoadMapStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyLoadMapComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Log() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportPeformanceRegularly() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportPerformanceWhenStuck() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WriteReport() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPosAndRot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterShaderSubProgram() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActiveShaderSubProgramCompileCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShaderSubProgramCompile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}

	template <typename T = uintptr_t> T get_NetworkMonitor() {
		return ((T (*)(ClientMonitorManager*))(Il2CppBase() + 0x3C6B060))(this);
	}
	template <typename T = bool> T get_HasSwitchRunInBackground() {
		return ((T (*)(ClientMonitorManager*))(Il2CppBase() + 0x3C6B068))(this);
	}
	template <typename T = uintptr_t> T get_TechDataReporter() {
		return ((T (*)(ClientMonitorManager*))(Il2CppBase() + 0x3C6B070))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ClientMonitorManager*))(Il2CppBase() + 0x3C6B078))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ClientMonitorManager*))(Il2CppBase() + 0x3C6B160))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(ClientMonitorManager*))(Il2CppBase() + 0x3C6B248))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(ClientMonitorManager*, float))(Il2CppBase() + 0x3C6B358))(this, deltaTime);
	}
	template <typename T = void> T SampleFootPrint(float deltaTime) {
		return ((T (*)(ClientMonitorManager*, float))(Il2CppBase() + 0x3C6B928))(this, deltaTime);
	}
	template <typename T = int32_t> T CalculateDangerousFootPrintThreshold(int32_t startMatchFootPrint) {
		return ((T (*)(ClientMonitorManager*, int32_t))(Il2CppBase() + 0x3C6BB2C))(this, startMatchFootPrint);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ClientMonitorManager*))(Il2CppBase() + 0x3C6BCDC))(this);
	}
	template <typename T = void> T StartFootPrintSampler() {
		return ((T (*)(ClientMonitorManager*))(Il2CppBase() + 0x3C6BF28))(this);
	}
	template <typename T = void> T Stop() {
		return ((T (*)(ClientMonitorManager*))(Il2CppBase() + 0x3C6C028))(this);
	}
	template <typename T = void> T StartAverageFPSSampler() {
		return ((T (*)(ClientMonitorManager*))(Il2CppBase() + 0x3C6BE4C))(this);
	}
	template <typename T = void> T AverageFPSSampler(float deltaTime) {
		return ((T (*)(ClientMonitorManager*, float))(Il2CppBase() + 0x3C6B4B0))(this, deltaTime);
	}
	template <typename T = void> T RecordCurrentMapAverageFPS() {
		return ((T (*)(ClientMonitorManager*))(Il2CppBase() + 0x3C6C194))(this);
	}
	template <typename T = void> T OnApplicationPause() {
		return ((T (*)(ClientMonitorManager*))(Il2CppBase() + 0x3C6CAF0))(this);
	}
	template <typename T = void> T NotifyAsyncLoadStart(int32_t assetID) {
		return ((T (*)(ClientMonitorManager*, int32_t))(Il2CppBase() + 0x3C6CBC4))(this, assetID);
	}
	template <typename T = void> T NotifyAsyncLoadEnd(int32_t assetID) {
		return ((T (*)(ClientMonitorManager*, int32_t))(Il2CppBase() + 0x3C6CF3C))(this, assetID);
	}
	template <typename T = void> T ClearCache() {
		return ((T (*)(ClientMonitorManager*))(Il2CppBase() + 0x3C6D554))(this);
	}
	template <typename T = void> T NotifyLoadMapStart(int32_t mapID) {
		return ((T (*)(ClientMonitorManager*, int32_t))(Il2CppBase() + 0x3C6D658))(this, mapID);
	}
	template <typename T = void> T NotifyLoadMapComplete(int32_t mapID) {
		return ((T (*)(ClientMonitorManager*, int32_t))(Il2CppBase() + 0x3C6D9A4))(this, mapID);
	}
	template <typename T = void> T Log(Il2CppString* msg, Il2CppArray<uintptr_t>* paras) {
		return ((T (*)(ClientMonitorManager*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3C6C4B8))(this, msg, paras);
	}
	template <typename T = void> T ReportPeformanceRegularly() {
		return ((T (*)(ClientMonitorManager*))(Il2CppBase() + 0x3C6C7FC))(this);
	}
	template <typename T = void> T ReportPerformanceWhenStuck() {
		return ((T (*)(ClientMonitorManager*))(Il2CppBase() + 0x3C6C6DC))(this);
	}
	template <typename T = void> T WriteReport(uintptr_t mgr) {
		return ((T (*)(ClientMonitorManager*, uintptr_t))(Il2CppBase() + 0x3C6DFE4))(this, mgr);
	}
	template <typename T = void> T GetPosAndRot(uintptr_t* pos, uintptr_t* rot) {
		return ((T (*)(ClientMonitorManager*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x3C6E330))(this, pos, rot);
	}
	template <typename T = void> static T RegisterShaderSubProgram(bool register_) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x3C6E754))(0, register_);
	}
	template <typename T = void> static T SetActiveShaderSubProgramCompileCallback(bool enable) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x3C6EAF8))(0, enable);
	}
	template <typename T = void> static T OnShaderSubProgramCompile(Il2CppString* shaderName, Il2CppString* passName, int32_t shaderPassType, Il2CppString* stageType, Il2CppString* keywords) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, int32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3C6EC48))(0, shaderName, passName, shaderPassType, stageType, keywords);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ClientMonitorManager*))(Il2CppBase() + 0x3C6F0B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(ClientMonitorManager*))(Il2CppBase() + 0x3C6F0C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(ClientMonitorManager*))(Il2CppBase() + 0x3C6F0C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(ClientMonitorManager*, float))(Il2CppBase() + 0x3C6F0D0))(this, P0);
	}

};

}
