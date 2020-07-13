#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class DSPingManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "DSPingManager"));
	}

	template <typename T = int32_t> static T& kPingUninitialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kPingTimeoutMS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& kRefreshIntervalSec() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& kThreadedPing() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& m_isEnable() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = bool> T& m_isDoingPing() {
		return *(T*)((uintptr_t)this + 0xE);
	}
	template <typename T = bool> static T& UseNew() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& UseNewX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1);
	}
	template <typename T = bool> T& m_readyReport() {
		return *(T*)((uintptr_t)this + 0xF);
	}
	template <typename T = int32_t> T& m_AlwaysPingTimes() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_lastPingTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_ipListDirty() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_PingVersion() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_PingThread() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_PingWorker() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_ToPingList() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_Mutex_ResultList() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppDictionary<uint32_t, uint32_t>*> T& m_ResultList() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUserLoginSucc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportToLobby() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplicationPause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParseDsList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryResolveDomain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartPing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PingProcess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalPing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PingDSGroupImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AfterPingDSDroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopPing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpdateDSAddressList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FillPingResultsToProtocol() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPingByGroupId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = void> T OnUserLoginSucc() {
		return ((T (*)(DSPingManager*))(Il2CppBase() + 0x50C8D1C))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(DSPingManager*, float))(Il2CppBase() + 0x50C8E3C))(this, deltaTime);
	}
	template <typename T = void> T ReportToLobby() {
		return ((T (*)(DSPingManager*))(Il2CppBase() + 0x50C916C))(this);
	}
	template <typename T = void> T OnApplicationPause(bool isPause) {
		return ((T (*)(DSPingManager*, bool))(Il2CppBase() + 0x50C99BC))(this, isPause);
	}
	template <typename T = void> T ParseDsList(Il2CppList<uintptr_t>* ds) {
		return ((T (*)(DSPingManager*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x50C9A9C))(this, ds);
	}
	template <typename T = Il2CppString*> static T TryResolveDomain(uintptr_t toPingDS) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x50C9FF8))(0, toPingDS);
	}
	template <typename T = void> T StartPing() {
		return ((T (*)(DSPingManager*))(Il2CppBase() + 0x50C9370))(this);
	}
	template <typename T = void> T PingProcess() {
		return ((T (*)(DSPingManager*))(Il2CppBase() + 0x50CA6F4))(this);
	}
	template <typename T = void> T InternalPing(int32_t version, Il2CppList<uintptr_t>* pingListThreaded) {
		return ((T (*)(DSPingManager*, int32_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x50CABB8))(this, version, pingListThreaded);
	}
	template <typename T = uint32_t> T PingDSGroupImpl(int32_t version, uintptr_t pingInfo) {
		return ((T (*)(DSPingManager*, int32_t, uintptr_t))(Il2CppBase() + 0x50CAD4C))(this, version, pingInfo);
	}
	template <typename T = void> T AfterPingDSDroup(uint32_t dsGroupID, uint32_t latency) {
		return ((T (*)(DSPingManager*, uint32_t, uint32_t))(Il2CppBase() + 0x50CB0F4))(this, dsGroupID, latency);
	}
	template <typename T = void> T StopPing() {
		return ((T (*)(DSPingManager*))(Il2CppBase() + 0x50CA5E0))(this);
	}
	template <typename T = void> T OnUpdateDSAddressList() {
		return ((T (*)(DSPingManager*))(Il2CppBase() + 0x50CB584))(this);
	}
	template <typename T = void> T FillPingResultsToProtocol(Il2CppList<uintptr_t>* ping_info) {
		return ((T (*)(DSPingManager*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x50C95E8))(this, ping_info);
	}
	template <typename T = uint32_t> T GetPingByGroupId(uint32_t groupId) {
		return ((T (*)(DSPingManager*, uint32_t))(Il2CppBase() + 0x50CB658))(this, groupId);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(DSPingManager*, float))(Il2CppBase() + 0x50CB880))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnApplicationPause(bool P0) {
		return ((T (*)(DSPingManager*, bool))(Il2CppBase() + 0x50CB888))(this, P0);
	}

};

}
