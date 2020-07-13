#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class NetworkMonitor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "NetworkMonitor"));
	}

	template <typename T = bool> T& m_IsSampling() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint16_t> T& m_MinPing() {
		return *(T*)((uintptr_t)this + 0xA);
	}
	template <typename T = uint16_t> T& m_MaxPing() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& m_SampleCount() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint64_t> T& m_SamplePingSum() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint16_t> T& m_LastPing() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& m_AbnormalPingCount() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint16_t> static T& ABNORMAL_PING_INTERVAL_VALUE_DEFINE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint16_t> T& m_DSReconnectCount() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint16_t> T& m_ZoneReconnetCount() {
		return *(T*)((uintptr_t)this + 0x2A);
	}
	template <typename T = uint16_t> T& m_MoveDragCount() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& m_PingCountSum() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int64_t> T& m_PingValueSum() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int64_t> T& m_PingValuePowerSum() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetSampleData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Stop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Sample() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordOnceDSReconnectCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordOnceZoneReconnectCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordOnceMoveDragCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uint16_t> T get_MinPing() {
		return ((T (*)(NetworkMonitor*))(Il2CppBase() + 0x19B2714))(this);
	}
	template <typename T = uint16_t> T get_MaxPing() {
		return ((T (*)(NetworkMonitor*))(Il2CppBase() + 0x19B2728))(this);
	}
	template <typename T = uint64_t> T get_AveragePing() {
		return ((T (*)(NetworkMonitor*))(Il2CppBase() + 0x19B2730))(this);
	}
	template <typename T = uint32_t> T get_AbnormalPingCount() {
		return ((T (*)(NetworkMonitor*))(Il2CppBase() + 0x19B2760))(this);
	}
	template <typename T = uint16_t> T get_DSReconnectCount() {
		return ((T (*)(NetworkMonitor*))(Il2CppBase() + 0x19B2768))(this);
	}
	template <typename T = uint16_t> T get_ZoneReconnetCount() {
		return ((T (*)(NetworkMonitor*))(Il2CppBase() + 0x19B2770))(this);
	}
	template <typename T = uint16_t> T get_MoveDragCount() {
		return ((T (*)(NetworkMonitor*))(Il2CppBase() + 0x19B2778))(this);
	}
	template <typename T = int64_t> T get_PingStandardDeviation() {
		return ((T (*)(NetworkMonitor*))(Il2CppBase() + 0x19D9D28))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(NetworkMonitor*))(Il2CppBase() + 0x19D9E74))(this);
	}
	template <typename T = void> T ResetSampleData() {
		return ((T (*)(NetworkMonitor*))(Il2CppBase() + 0x19D9F20))(this);
	}
	template <typename T = void> T Stop() {
		return ((T (*)(NetworkMonitor*))(Il2CppBase() + 0x19D9FF4))(this);
	}
	template <typename T = void> T Sample(uint16_t inPing) {
		return ((T (*)(NetworkMonitor*, uint16_t))(Il2CppBase() + 0x19C07E8))(this, inPing);
	}
	template <typename T = void> T RecordOnceDSReconnectCount() {
		return ((T (*)(NetworkMonitor*))(Il2CppBase() + 0x19C2088))(this);
	}
	template <typename T = void> T RecordOnceZoneReconnectCount() {
		return ((T (*)(NetworkMonitor*))(Il2CppBase() + 0x19DA098))(this);
	}
	template <typename T = void> T RecordOnceMoveDragCount() {
		return ((T (*)(NetworkMonitor*))(Il2CppBase() + 0x19D73B0))(this);
	}

};

}
