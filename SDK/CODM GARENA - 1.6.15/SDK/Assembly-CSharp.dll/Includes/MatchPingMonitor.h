#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MatchPingMonitor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MatchPingMonitor"));
	}

	template <typename T = int32_t> T& RequestSeqID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& RespSeqID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& PingSuccCounter() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& LatestPing() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& LatestLogicPing() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> static T& PING_INTERVAL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& PING_TIMEOUT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_LastPingTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_LastRecPingTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> static T& EnablePingSentTimeRecord() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<uint16_t, int32_t>*> T& m_SeqIDToTickCont() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> static T& LocalPingTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> static T& UseNew() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNextPingSequenceID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestPing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResPing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLocalPlayerPing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ValidateWaitingPing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckPingMsgError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickPing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPingNearly() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EarlyRecordPing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshPingTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPingTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculatePing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = int32_t> T GetNextPingSequenceID() {
		return ((T (*)(MatchPingMonitor*))(Il2CppBase() + 0x41C79A4))(this);
	}
	template <typename T = void> T RequestPing() {
		return ((T (*)(MatchPingMonitor*))(Il2CppBase() + 0x41C7A8C))(this);
	}
	template <typename T = void> T OnResPing(uintptr_t Msg) {
		return ((T (*)(MatchPingMonitor*, uintptr_t))(Il2CppBase() + 0x41C8018))(this, Msg);
	}
	template <typename T = void> T UpdateLocalPlayerPing(uint16_t LatestPing) {
		return ((T (*)(MatchPingMonitor*, uint16_t))(Il2CppBase() + 0x41C8494))(this, LatestPing);
	}
	template <typename T = void> T ValidateWaitingPing() {
		return ((T (*)(MatchPingMonitor*))(Il2CppBase() + 0x41C7F2C))(this);
	}
	template <typename T = void> T CheckPingMsgError(uintptr_t RecMsg) {
		return ((T (*)(MatchPingMonitor*, uintptr_t))(Il2CppBase() + 0x41C8730))(this, RecMsg);
	}
	template <typename T = void> T TickPing(uintptr_t timeout) {
		return ((T (*)(MatchPingMonitor*, uintptr_t))(Il2CppBase() + 0x41C8A3C))(this, timeout);
	}
	template <typename T = bool> T IsPingNearly() {
		return ((T (*)(MatchPingMonitor*))(Il2CppBase() + 0x41C8CB0))(this);
	}
	template <typename T = void> T EarlyRecordPing(uint16_t seqID, int32_t ping) {
		return ((T (*)(MatchPingMonitor*, uint16_t, int32_t))(Il2CppBase() + 0x41C8EA8))(this, seqID, ping);
	}
	template <typename T = void> static T RefreshPingTick(Il2CppArray<uintptr_t>* data) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x41C8F9C))(0, data);
	}
	template <typename T = uint32_t> static T GetPingTick() {
		return ((T (*)(void *))(Il2CppBase() + 0x41C7D5C))(0);
	}
	template <typename T = uint16_t> static T CalculatePing(uint32_t lastTick, uintptr_t errMsg) {
		return ((T (*)(void *, uint32_t, uintptr_t))(Il2CppBase() + 0x41C8248))(0, lastTick, errMsg);
	}

};

}
