#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class ClientRuntimeWatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "ClientRuntimeWatcher"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_ClientRuntimeInfoList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> static T& StartLoadLevelTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& RUNTIME_INFO_TYPES() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppString*> T& m_ResultString() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> static T& RUNTIMEINFO_PLAYERPREFS_STRING() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_LastReportLocalSettingTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitClientRuntimeInfoList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitRuntimeInfoListByEachMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNormalRuntimeInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetNormalRuntimeInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_SetNormalRuntimeInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEachMapLoadTimeRuntimeInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEachMapAverageFPSRuntimeInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEachMapAbnormalFPSCountRuntimeInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportClientRuntimeInfoOniOS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RestoreClientRuntimeInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CookClientRuntimeInfoList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportClientRuntimeInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ReportClientRuntimeInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnterGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LeaveGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportLocalSetting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}

	template <typename T = void> T InitClientRuntimeInfoList() {
		return ((T (*)(ClientRuntimeWatcher*))(Il2CppBase() + 0x3C707D0))(this);
	}
	template <typename T = void> T InitRuntimeInfoListByEachMap(Il2CppArray<uintptr_t>* inMapArray) {
		return ((T (*)(ClientRuntimeWatcher*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3C70B40))(this, inMapArray);
	}
	template <typename T = bool> T SetNormalRuntimeInfo(uintptr_t inType, int32_t inValue) {
		return ((T (*)(ClientRuntimeWatcher*, uintptr_t, int32_t))(Il2CppBase() + 0x3C70DC0))(this, inType, inValue);
	}
	template <typename T = bool> T SetNormalRuntimeInfo_1(uintptr_t inType, float inValue) {
		return ((T (*)(ClientRuntimeWatcher*, uintptr_t, float))(Il2CppBase() + 0x3C70FB0))(this, inType, inValue);
	}
	template <typename T = bool> T SetNormalRuntimeInfo_2(uintptr_t inType, Il2CppString* inValue) {
		return ((T (*)(ClientRuntimeWatcher*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x3C711A0))(this, inType, inValue);
	}
	template <typename T = void> T SetEachMapLoadTimeRuntimeInfo(int32_t inMapID, int32_t inLoadTimeValue) {
		return ((T (*)(ClientRuntimeWatcher*, int32_t, int32_t))(Il2CppBase() + 0x3C71390))(this, inMapID, inLoadTimeValue);
	}
	template <typename T = void> T SetEachMapAverageFPSRuntimeInfo(int32_t inMapID, int32_t inAverageFPSValue) {
		return ((T (*)(ClientRuntimeWatcher*, int32_t, int32_t))(Il2CppBase() + 0x3C6C91C))(this, inMapID, inAverageFPSValue);
	}
	template <typename T = void> T SetEachMapAbnormalFPSCountRuntimeInfo(int32_t inMapID, int32_t inAbnormalFPSCountValue) {
		return ((T (*)(ClientRuntimeWatcher*, int32_t, int32_t))(Il2CppBase() + 0x3C6C2E4))(this, inMapID, inAbnormalFPSCountValue);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(ClientRuntimeWatcher*))(Il2CppBase() + 0x3C71564))(this);
	}
	template <typename T = void> T ReportClientRuntimeInfoOniOS() {
		return ((T (*)(ClientRuntimeWatcher*))(Il2CppBase() + 0x3C71B9C))(this);
	}
	template <typename T = void> T RestoreClientRuntimeInfo() {
		return ((T (*)(ClientRuntimeWatcher*))(Il2CppBase() + 0x3C7164C))(this);
	}
	template <typename T = void> T CookClientRuntimeInfoList() {
		return ((T (*)(ClientRuntimeWatcher*))(Il2CppBase() + 0x3C71C64))(this);
	}
	template <typename T = void> T ReportClientRuntimeInfo() {
		return ((T (*)(ClientRuntimeWatcher*))(Il2CppBase() + 0x3C717EC))(this);
	}
	template <typename T = void> T ReportClientRuntimeInfo_1(Il2CppString* inName, Il2CppList<int32_t>* inDataList, Il2CppList<Il2CppString*>* inStringDataList) {
		return ((T (*)(ClientRuntimeWatcher*, Il2CppString*, Il2CppList<int32_t>*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x3C71E1C))(this, inName, inDataList, inStringDataList);
	}
	template <typename T = void> T EnterGame() {
		return ((T (*)(ClientRuntimeWatcher*))(Il2CppBase() + 0x3C7213C))(this);
	}
	template <typename T = void> T LeaveGame() {
		return ((T (*)(ClientRuntimeWatcher*))(Il2CppBase() + 0x3C72224))(this);
	}
	template <typename T = void> T ReportLocalSetting() {
		return ((T (*)(ClientRuntimeWatcher*))(Il2CppBase() + 0x3C72314))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(ClientRuntimeWatcher*))(Il2CppBase() + 0x3C72A70))(this);
	}

};

}
