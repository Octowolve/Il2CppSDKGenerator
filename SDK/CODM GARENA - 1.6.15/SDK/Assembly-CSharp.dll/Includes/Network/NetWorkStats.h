#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class NetWorkStats
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "NetWorkStats"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_ReliablePacketSendCount() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<float>*> T& m_SendReliableDelayList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_PacketResendCount() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_PacketLoseCount() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_UplinkTraffic() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_DownlinkTraffic() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_DisconnectError() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppDictionary<uint32_t, uint32_t>*> T& m_UplinkCmdToTrafficMap() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppDictionary<uint32_t, uint32_t>*> T& m_UplinkCmdToCountMap() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppDictionary<uint32_t, uint32_t>*> T& m_DownlinkCmdToTrafficMap() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppDictionary<uint32_t, uint32_t>*> T& m_DownlinkCmdToCountMap() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_LockObj() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordSendReliableDelay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcJitter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Flush() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddUpLinkPackage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearUpLinkTraffic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddDownLinkPackage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearDownLinkTraffic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FormatStatsData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportCurrentStatsToServer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = int32_t> T get_ReliablePacketSendCount() {
		return ((T (*)(NetWorkStats*))(Il2CppBase() + 0x5074B84))(this);
	}
	template <typename T = void> T set_ReliablePacketSendCount(int32_t value) {
		return ((T (*)(NetWorkStats*, int32_t))(Il2CppBase() + 0x5074B8C))(this, value);
	}
	template <typename T = int32_t> T get_PacketResendCount() {
		return ((T (*)(NetWorkStats*))(Il2CppBase() + 0x5074B94))(this);
	}
	template <typename T = void> T set_PacketResendCount(int32_t value) {
		return ((T (*)(NetWorkStats*, int32_t))(Il2CppBase() + 0x5074B9C))(this, value);
	}
	template <typename T = int32_t> T get_PacketLostCount() {
		return ((T (*)(NetWorkStats*))(Il2CppBase() + 0x5074BA4))(this);
	}
	template <typename T = void> T set_PacketLostCount(int32_t value) {
		return ((T (*)(NetWorkStats*, int32_t))(Il2CppBase() + 0x5074BAC))(this, value);
	}
	template <typename T = int32_t> T get_UplinkTraffic() {
		return ((T (*)(NetWorkStats*))(Il2CppBase() + 0x5074BB4))(this);
	}
	template <typename T = int32_t> T get_DownlinkTraffic() {
		return ((T (*)(NetWorkStats*))(Il2CppBase() + 0x5074BBC))(this);
	}
	template <typename T = int32_t> T get_TotalTraffic() {
		return ((T (*)(NetWorkStats*))(Il2CppBase() + 0x5074BC4))(this);
	}
	template <typename T = uintptr_t> T get_DisconnectError() {
		return ((T (*)(NetWorkStats*))(Il2CppBase() + 0x5074BD4))(this);
	}
	template <typename T = void> T set_DisconnectError(uintptr_t value) {
		return ((T (*)(NetWorkStats*, uintptr_t))(Il2CppBase() + 0x5074BDC))(this, value);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(NetWorkStats*))(Il2CppBase() + 0x5074BE4))(this);
	}
	template <typename T = void> T RecordSendReliableDelay(float delay) {
		return ((T (*)(NetWorkStats*, float))(Il2CppBase() + 0x5074EB4))(this, delay);
	}
	template <typename T = float> T CalcJitter() {
		return ((T (*)(NetWorkStats*))(Il2CppBase() + 0x5074FD0))(this);
	}
	template <typename T = void> T Flush() {
		return ((T (*)(NetWorkStats*))(Il2CppBase() + 0x50751C4))(this);
	}
	template <typename T = void> T AddUpLinkPackage(uint32_t cmd, uint32_t size) {
		return ((T (*)(NetWorkStats*, uint32_t, uint32_t))(Il2CppBase() + 0x50752A0))(this, cmd, size);
	}
	template <typename T = void> T ClearUpLinkTraffic() {
		return ((T (*)(NetWorkStats*))(Il2CppBase() + 0x507558C))(this);
	}
	template <typename T = void> T AddDownLinkPackage(uint32_t cmd, uint32_t size) {
		return ((T (*)(NetWorkStats*, uint32_t, uint32_t))(Il2CppBase() + 0x507572C))(this, cmd, size);
	}
	template <typename T = void> T ClearDownLinkTraffic() {
		return ((T (*)(NetWorkStats*))(Il2CppBase() + 0x5075A18))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T FormatStatsData() {
		return ((T (*)(NetWorkStats*))(Il2CppBase() + 0x5075BB8))(this);
	}
	template <typename T = void> T ReportCurrentStatsToServer() {
		return ((T (*)(NetWorkStats*))(Il2CppBase() + 0x5076D34))(this);
	}
	template <typename T = int32_t> static T FormatStatsDatam__0(void* cmd1, void* cmd2) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x50774B4))(0, cmd1, cmd2);
	}
	template <typename T = int32_t> static T FormatStatsDatam__1(void* cmd1, void* cmd2) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x507756C))(0, cmd1, cmd2);
	}

};

}
