#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.Loading {

class LoadingFlowAppStoreAttributionReportController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.Loading", "LoadingFlowAppStoreAttributionReportController"));
	}

	template <typename T = Il2CppString*> static T& kReportAttributionKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename T = uintptr_t> static T& __Hotfix0_ParseAppStoreAttributions() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShouldReport() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportToServer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = Il2CppString*> T GetLoadingTips() {
		return ((T (*)(LoadingFlowAppStoreAttributionReportController*))(Il2CppBase() + 0x2E3850C))(this);
	}
	template <typename T = bool> T IsMainFlow() {
		return ((T (*)(LoadingFlowAppStoreAttributionReportController*))(Il2CppBase() + 0x2E385FC))(this);
	}
	template <typename T = float> T RunTimeLimitation() {
		return ((T (*)(LoadingFlowAppStoreAttributionReportController*))(Il2CppBase() + 0x2E3869C))(this);
	}
	template <typename T = uintptr_t> T ParseAppStoreAttributions() {
		return ((T (*)(LoadingFlowAppStoreAttributionReportController*))(Il2CppBase() + 0x2E3873C))(this);
	}
	template <typename T = void> T StartFlow() {
		return ((T (*)(LoadingFlowAppStoreAttributionReportController*))(Il2CppBase() + 0x2E38A5C))(this);
	}
	template <typename T = bool> T CheckShouldReport() {
		return ((T (*)(LoadingFlowAppStoreAttributionReportController*))(Il2CppBase() + 0x2E3912C))(this);
	}
	template <typename T = void> T ReportToServer(Il2CppString* str) {
		return ((T (*)(LoadingFlowAppStoreAttributionReportController*, Il2CppString*))(Il2CppBase() + 0x2E3925C))(this, str);
	}
	template <typename T = bool> T xLuaBaseProxy_IsMainFlow() {
		return ((T (*)(LoadingFlowAppStoreAttributionReportController*))(Il2CppBase() + 0x2E393F4))(this);
	}
	template <typename T = float> T xLuaBaseProxy_RunTimeLimitation() {
		return ((T (*)(LoadingFlowAppStoreAttributionReportController*))(Il2CppBase() + 0x2E393F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartFlow() {
		return ((T (*)(LoadingFlowAppStoreAttributionReportController*))(Il2CppBase() + 0x2E393FC))(this);
	}

};

}
