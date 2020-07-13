#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AdvertisingDataAgent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AdvertisingDataAgent"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_AdvertisingDS() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& NestShowADTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& SHOWAD_NEXTTIME() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& IsRefreshShowAdTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& MaxLuckyBoardBuyNum() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& AD_READY_REPORT_TIME() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& AD_REDPOINT() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAdvertisingCfgInfoValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestGetAdevertising() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResponseGetAdevertising() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestAdvertisingNotifyReward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResponseAdvertisingNotifyReward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GoToWatchAD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowAdCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerPrefsNextTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckADReadyReport() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsReadyReport() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetReportTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAdRedPointReport() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAdRedPointReport() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = uintptr_t> T get_AdvertisingDS() {
		return ((T (*)(AdvertisingDataAgent*))(Il2CppBase() + 0x4A1C124))(this);
	}
	template <typename T = uint64_t> T get_GetNextShowADTime() {
		return ((T (*)(AdvertisingDataAgent*))(Il2CppBase() + 0x4A1C1D4))(this);
	}
	template <typename T = bool> T IsAdvertisingCfgInfoValue() {
		return ((T (*)(AdvertisingDataAgent*))(Il2CppBase() + 0x4A1C1DC))(this);
	}
	template <typename T = int32_t> T get_GetMaxLuckyBoardNum() {
		return ((T (*)(AdvertisingDataAgent*))(Il2CppBase() + 0x4A1C318))(this);
	}
	template <typename T = void> T RequestGetAdevertising() {
		return ((T (*)(AdvertisingDataAgent*))(Il2CppBase() + 0x4A1C320))(this);
	}
	template <typename T = void> T ResponseGetAdevertising(uintptr_t res) {
		return ((T (*)(AdvertisingDataAgent*, uintptr_t))(Il2CppBase() + 0x4A1C49C))(this, res);
	}
	template <typename T = void> T RequestAdvertisingNotifyReward(uintptr_t status) {
		return ((T (*)(AdvertisingDataAgent*, uintptr_t))(Il2CppBase() + 0x4A1CACC))(this, status);
	}
	template <typename T = void> T ResponseAdvertisingNotifyReward(uintptr_t res) {
		return ((T (*)(AdvertisingDataAgent*, uintptr_t))(Il2CppBase() + 0x4A1CCE0))(this, res);
	}
	template <typename T = void> T GoToWatchAD() {
		return ((T (*)(AdvertisingDataAgent*))(Il2CppBase() + 0x4A1CE38))(this);
	}
	template <typename T = void> T ShowAdCallBack(bool success, Il2CppString* placeName) {
		return ((T (*)(AdvertisingDataAgent*, bool, Il2CppString*))(Il2CppBase() + 0x4A1D20C))(this, success, placeName);
	}
	template <typename T = void> T GetPlayerPrefsNextTime() {
		return ((T (*)(AdvertisingDataAgent*))(Il2CppBase() + 0x4A1C680))(this);
	}
	template <typename T = void> T CheckADReadyReport() {
		return ((T (*)(AdvertisingDataAgent*))(Il2CppBase() + 0x4A1D57C))(this);
	}
	template <typename T = bool> T IsReadyReport() {
		return ((T (*)(AdvertisingDataAgent*))(Il2CppBase() + 0x4A1D66C))(this);
	}
	template <typename T = void> T SetReportTime() {
		return ((T (*)(AdvertisingDataAgent*))(Il2CppBase() + 0x4A1D8D8))(this);
	}
	template <typename T = bool> T IsAdRedPointReport() {
		return ((T (*)(AdvertisingDataAgent*))(Il2CppBase() + 0x4A1DA70))(this);
	}
	template <typename T = void> T SetAdRedPointReport() {
		return ((T (*)(AdvertisingDataAgent*))(Il2CppBase() + 0x4A1DBB8))(this);
	}
	template <typename T = void> T ResetInfo() {
		return ((T (*)(AdvertisingDataAgent*))(Il2CppBase() + 0x4A1DD00))(this);
	}

};

}
