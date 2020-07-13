#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.Loading {

class LoadingFlowTDirPostQueryConfigController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.Loading", "LoadingFlowTDirPostQueryConfigController"));
	}

	template <typename T = void*> T& m_DynamicResourcesPendingUrl() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoadingTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMainFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RunTimeLimitation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FirstQueryConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadSharedData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadSharedDataFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadPlatformData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadPlatformDataFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadDynamicResources() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NetworkDownloadCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAllDownloadCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoneFail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTDirFailedMsgBoxCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOverTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFlowFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyTdirSettings() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = Il2CppString*> T GetLoadingTips() {
		return ((T (*)(LoadingFlowTDirPostQueryConfigController*))(Il2CppBase() + 0x2E65A04))(this);
	}
	template <typename T = bool> T IsMainFlow() {
		return ((T (*)(LoadingFlowTDirPostQueryConfigController*))(Il2CppBase() + 0x2E65AC8))(this);
	}
	template <typename T = float> T RunTimeLimitation() {
		return ((T (*)(LoadingFlowTDirPostQueryConfigController*))(Il2CppBase() + 0x2E65B68))(this);
	}
	template <typename T = bool> T FirstQueryConfig() {
		return ((T (*)(LoadingFlowTDirPostQueryConfigController*))(Il2CppBase() + 0x2E65964))(this);
	}
	template <typename T = void> T StartFlow() {
		return ((T (*)(LoadingFlowTDirPostQueryConfigController*))(Il2CppBase() + 0x2E65C3C))(this);
	}
	template <typename T = void> T LoadSharedData() {
		return ((T (*)(LoadingFlowTDirPostQueryConfigController*))(Il2CppBase() + 0x2E65EDC))(this);
	}
	template <typename T = void> T OnLoadSharedDataFinish(Il2CppString* url, bool isSuccess, Il2CppString* delivery) {
		return ((T (*)(LoadingFlowTDirPostQueryConfigController*, Il2CppString*, bool, Il2CppString*))(Il2CppBase() + 0x2E66840))(this, url, isSuccess, delivery);
	}
	template <typename T = void> T LoadPlatformData() {
		return ((T (*)(LoadingFlowTDirPostQueryConfigController*))(Il2CppBase() + 0x2E661E0))(this);
	}
	template <typename T = void> T OnLoadPlatformDataFinish(Il2CppString* url, bool isSuccess, Il2CppString* delivery) {
		return ((T (*)(LoadingFlowTDirPostQueryConfigController*, Il2CppString*, bool, Il2CppString*))(Il2CppBase() + 0x2E669BC))(this, url, isSuccess, delivery);
	}
	template <typename T = void> T LoadDynamicResources() {
		return ((T (*)(LoadingFlowTDirPostQueryConfigController*))(Il2CppBase() + 0x2E66B38))(this);
	}
	template <typename T = void> T NetworkDownloadCallback(Il2CppString* url, bool isSuccess, Il2CppArray<uintptr_t>* bytes) {
		return ((T (*)(LoadingFlowTDirPostQueryConfigController*, Il2CppString*, bool, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2E67134))(this, url, isSuccess, bytes);
	}
	template <typename T = void> T ClearAllDownloadCallback() {
		return ((T (*)(LoadingFlowTDirPostQueryConfigController*))(Il2CppBase() + 0x2E67348))(this);
	}
	template <typename T = void> T DoneFail() {
		return ((T (*)(LoadingFlowTDirPostQueryConfigController*))(Il2CppBase() + 0x2E665F4))(this);
	}
	template <typename T = void> T OnTDirFailedMsgBoxCallback(uintptr_t result, int32_t context) {
		return ((T (*)(LoadingFlowTDirPostQueryConfigController*, uintptr_t, int32_t))(Il2CppBase() + 0x2E67960))(this, result, context);
	}
	template <typename T = void> T OnOverTime() {
		return ((T (*)(LoadingFlowTDirPostQueryConfigController*))(Il2CppBase() + 0x2E67A78))(this);
	}
	template <typename T = void> T OnFlowFinish(uintptr_t result, Il2CppString* errorMessage) {
		return ((T (*)(LoadingFlowTDirPostQueryConfigController*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2E67B1C))(this, result, errorMessage);
	}
	template <typename T = void> T ApplyTdirSettings() {
		return ((T (*)(LoadingFlowTDirPostQueryConfigController*))(Il2CppBase() + 0x2E67C98))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsMainFlow() {
		return ((T (*)(LoadingFlowTDirPostQueryConfigController*))(Il2CppBase() + 0x2E68824))(this);
	}
	template <typename T = float> T xLuaBaseProxy_RunTimeLimitation() {
		return ((T (*)(LoadingFlowTDirPostQueryConfigController*))(Il2CppBase() + 0x2E68828))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartFlow() {
		return ((T (*)(LoadingFlowTDirPostQueryConfigController*))(Il2CppBase() + 0x2E6882C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOverTime() {
		return ((T (*)(LoadingFlowTDirPostQueryConfigController*))(Il2CppBase() + 0x2E68830))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnFlowFinish(uintptr_t P0, Il2CppString* P1) {
		return ((T (*)(LoadingFlowTDirPostQueryConfigController*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2E68834))(this, P0, P1);
	}

};

}
