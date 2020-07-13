#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NativeApi
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NativeApi"));
	}

	template <typename T = uintptr_t> static T& s_GameSDK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& s_GameSDKRawObjectID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& s_GetCpuJTLevelID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& s_GetGpuJTLevelID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& s_GetGpuFrameTimeID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& s_GetPSTLevelID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& s_GetSkinTempLevelID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& s_GetHighPrecisionSkinTempLevelID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& s_GetCPULevelMaxID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& s_GetGPULevelMaxID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = bool> static T& s_isAvailable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& s_NoArgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = void*> T& PerformanceWarningEvent() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& PerformanceLevelTimeoutEvent() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> static T& minJTLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& maxJTLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_onHighTempWarning() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_onReleasedByTimeout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetJavaMethodID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StaticInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAvailable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterListener() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnregisterListener() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Initialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Initialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Terminate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPSTLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSkinTempLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHighPrecisionSkinTempLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCPULevelMax() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGPULevelMax() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCpuJTLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGpuJTLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGpuFrameTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLevelWithScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}

	template <typename T = void> T onHighTempWarning(int32_t warningLevel) {
		return ((T (*)(NativeApi*, int32_t))(Il2CppBase() + 0x421CE48))(this, warningLevel);
	}
	template <typename T = void> T onReleasedByTimeout() {
		return ((T (*)(NativeApi*))(Il2CppBase() + 0x421CFD0))(this);
	}
	template <typename T = uintptr_t> static T GetJavaMethodID(uintptr_t classId, Il2CppString* name, Il2CppString* sig) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x421D0BC))(0, classId, name, sig);
	}
	template <typename T = void> static T StaticInit() {
		return ((T (*)(void *))(Il2CppBase() + 0x421C7BC))(0);
	}
	template <typename T = bool> static T IsAvailable() {
		return ((T (*)(void *))(Il2CppBase() + 0x421BCF0))(0);
	}
	template <typename T = bool> T RegisterListener() {
		return ((T (*)(NativeApi*))(Il2CppBase() + 0x421B8C8))(this);
	}
	template <typename T = void> T UnregisterListener() {
		return ((T (*)(NativeApi*))(Il2CppBase() + 0x421B4F0))(this);
	}
	template <typename T = bool> T Initialize() {
		return ((T (*)(NativeApi*))(Il2CppBase() + 0x421D244))(this);
	}
	template <typename T = bool> T Initialize_1(Il2CppString* version) {
		return ((T (*)(NativeApi*, Il2CppString*))(Il2CppBase() + 0x4219A80))(this, version);
	}
	template <typename T = void> T Terminate() {
		return ((T (*)(NativeApi*))(Il2CppBase() + 0x421A1C4))(this);
	}
	template <typename T = Il2CppString*> T GetVersion() {
		return ((T (*)(NativeApi*))(Il2CppBase() + 0x42197F0))(this);
	}
	template <typename T = int32_t> T GetPSTLevel() {
		return ((T (*)(NativeApi*))(Il2CppBase() + 0x421C098))(this);
	}
	template <typename T = int32_t> T GetSkinTempLevel() {
		return ((T (*)(NativeApi*))(Il2CppBase() + 0x421BE24))(this);
	}
	template <typename T = double> T GetHighPrecisionSkinTempLevel() {
		return ((T (*)(NativeApi*))(Il2CppBase() + 0x421C30C))(this);
	}
	template <typename T = int32_t> T GetCPULevelMax() {
		return ((T (*)(NativeApi*))(Il2CppBase() + 0x4219D2C))(this);
	}
	template <typename T = int32_t> T GetGPULevelMax() {
		return ((T (*)(NativeApi*))(Il2CppBase() + 0x4219F78))(this);
	}
	template <typename T = int32_t> T GetCpuJTLevel() {
		return ((T (*)(NativeApi*))(Il2CppBase() + 0x421D49C))(this);
	}
	template <typename T = int32_t> T GetGpuJTLevel() {
		return ((T (*)(NativeApi*))(Il2CppBase() + 0x421D6E4))(this);
	}
	template <typename T = double> T GetGpuFrameTime() {
		return ((T (*)(NativeApi*))(Il2CppBase() + 0x421C578))(this);
	}
	template <typename T = bool> T SetLevelWithScene(Il2CppString* scene, int32_t cpu, int32_t gpu) {
		return ((T (*)(NativeApi*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x421B0B8))(this, scene, cpu, gpu);
	}

};

}
