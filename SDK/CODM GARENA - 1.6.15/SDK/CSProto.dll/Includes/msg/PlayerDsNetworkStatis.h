#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PlayerDsNetworkStatis
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PlayerDsNetworkStatis"));
	}

	template <typename T = uint32_t> T& _src_dev() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _aver_ping() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _min_ping() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _max_ping() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _stdev_ping() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _client_ip() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _ds_svr_ip() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& _ds_listen_ip() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& _ds_listen_port() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _country() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _province() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _city() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _isp() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _telecom_oper() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _network() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint32_t> T& _ping_times() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uint32_t> T& _dup_ack_times() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint32_t> T& _rewrite_times() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uint32_t> T& _wnzp_request_times() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uint32_t> T& _reconnect_times() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uint32_t> T& _position_pull_times() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uint32_t> T& _kick_reason() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uint32_t> T& _abnormal_ping_times() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uint32_t> T& _max_fps() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uint32_t> T& _min_fps() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uint32_t> T& _average_fps() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uint32_t> T& _abnormal_fps_times() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uint32_t> T& _abfpstimes_under_abping() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uint32_t> T& _max_singal_level() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uint32_t> T& _min_singal_level() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uint32_t> T& _average_singal_level() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uint32_t> T& _abnormal_singal_level_times() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uint32_t> T& _absingalleveltimes_under_abping() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uint32_t> T& _dsc_group_id() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uint32_t> T& _dsc_pingvalue() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x94);
	}

	template <typename T = uint32_t> T get_src_dev() {
		return ((T (*)(PlayerDsNetworkStatis*))(Il2CppBase() + 0x4EA69CC))(this);
	}
	template <typename T = void> T set_src_dev(uint32_t value) {
		return ((T (*)(PlayerDsNetworkStatis*, uint32_t))(Il2CppBase() + 0x4EA69D4))(this, value);
	}
	template <typename T = uint32_t> T get_aver_ping() {
		return ((T (*)(PlayerDsNetworkStatis*))(Il2CppBase() + 0x4EA69DC))(this);
	}
	template <typename T = void> T set_aver_ping(uint32_t value) {
		return ((T (*)(PlayerDsNetworkStatis*, uint32_t))(Il2CppBase() + 0x4EA69E4))(this, value);
	}
	template <typename T = uint32_t> T get_min_ping() {
		return ((T (*)(PlayerDsNetworkStatis*))(Il2CppBase() + 0x4EA69EC))(this);
	}
	template <typename T = void> T set_min_ping(uint32_t value) {
		return ((T (*)(PlayerDsNetworkStatis*, uint32_t))(Il2CppBase() + 0x4EA69F4))(this, value);
	}
	template <typename T = uint32_t> T get_max_ping() {
		return ((T (*)(PlayerDsNetworkStatis*))(Il2CppBase() + 0x4EA69FC))(this);
	}
	template <typename T = void> T set_max_ping(uint32_t value) {
		return ((T (*)(PlayerDsNetworkStatis*, uint32_t))(Il2CppBase() + 0x4EA6A04))(this, value);
	}
	template <typename T = uint32_t> T get_stdev_ping() {
		return ((T (*)(PlayerDsNetworkStatis*))(Il2CppBase() + 0x4EA6A0C))(this);
	}
	template <typename T = void> T set_stdev_ping(uint32_t value) {
		return ((T (*)(PlayerDsNetworkStatis*, uint32_t))(Il2CppBase() + 0x4EA6A14))(this, value);
	}
	template <typename T = uint32_t> T get_client_ip() {
		return ((T (*)(PlayerDsNetworkStatis*))(Il2CppBase() + 0x4EA6A1C))(this);
	}
	template <typename T = void> T set_client_ip(uint32_t value) {
		return ((T (*)(PlayerDsNetworkStatis*, uint32_t))(Il2CppBase() + 0x4EA6A24))(this, value);
	}
	template <typename T = uint32_t> T get_ds_svr_ip() {
		return ((T (*)(PlayerDsNetworkStatis*))(Il2CppBase() + 0x4EA6A2C))(this);
	}
	template <typename T = void> T set_ds_svr_ip(uint32_t value) {
		return ((T (*)(PlayerDsNetworkStatis*, uint32_t))(Il2CppBase() + 0x4EA6A34))(this, value);
	}
	template <typename T = uint32_t> T get_ds_listen_ip() {
		return ((T (*)(PlayerDsNetworkStatis*))(Il2CppBase() + 0x4EA6A3C))(this);
	}
	template <typename T = void> T set_ds_listen_ip(uint32_t value) {
		return ((T (*)(PlayerDsNetworkStatis*, uint32_t))(Il2CppBase() + 0x4EA6A44))(this, value);
	}
	template <typename T = uint32_t> T get_ds_listen_port() {
		return ((T (*)(PlayerDsNetworkStatis*))(Il2CppBase() + 0x4EA6A4C))(this);
	}
	template <typename T = void> T set_ds_listen_port(uint32_t value) {
		return ((T (*)(PlayerDsNetworkStatis*, uint32_t))(Il2CppBase() + 0x4EA6A54))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_country() {
		return ((T (*)(PlayerDsNetworkStatis*))(Il2CppBase() + 0x4EA6A5C))(this);
	}
	template <typename T = void> T set_country(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(PlayerDsNetworkStatis*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA6A64))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_province() {
		return ((T (*)(PlayerDsNetworkStatis*))(Il2CppBase() + 0x4EA6A6C))(this);
	}
	template <typename T = void> T set_province(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(PlayerDsNetworkStatis*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA6A74))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_city() {
		return ((T (*)(PlayerDsNetworkStatis*))(Il2CppBase() + 0x4EA6A7C))(this);
	}
	template <typename T = void> T set_city(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(PlayerDsNetworkStatis*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA6A84))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_isp() {
		return ((T (*)(PlayerDsNetworkStatis*))(Il2CppBase() + 0x4EA6A8C))(this);
	}
	template <typename T = void> T set_isp(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(PlayerDsNetworkStatis*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA6A94))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_telecom_oper() {
		return ((T (*)(PlayerDsNetworkStatis*))(Il2CppBase() + 0x4EA6A9C))(this);
	}
	template <typename T = void> T set_telecom_oper(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(PlayerDsNetworkStatis*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA6AA4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_network() {
		return ((T (*)(PlayerDsNetworkStatis*))(Il2CppBase() + 0x4EA6AAC))(this);
	}
	template <typename T = void> T set_network(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(PlayerDsNetworkStatis*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA6AB4))(this, value);
	}
	template <typename T = uint32_t> T get_ping_times() {
		return ((T (*)(PlayerDsNetworkStatis*))(Il2CppBase() + 0x4EA6ABC))(this);
	}
	template <typename T = void> T set_ping_times(uint32_t value) {
		return ((T (*)(PlayerDsNetworkStatis*, uint32_t))(Il2CppBase() + 0x4EA6AC4))(this, value);
	}
	template <typename T = uint32_t> T get_dup_ack_times() {
		return ((T (*)(PlayerDsNetworkStatis*))(Il2CppBase() + 0x4EA6ACC))(this);
	}
	template <typename T = void> T set_dup_ack_times(uint32_t value) {
		return ((T (*)(PlayerDsNetworkStatis*, uint32_t))(Il2CppBase() + 0x4EA6AD4))(this, value);
	}
	template <typename T = uint32_t> T get_rewrite_times() {
		return ((T (*)(PlayerDsNetworkStatis*))(Il2CppBase() + 0x4EA6ADC))(this);
	}
	template <typename T = void> T set_rewrite_times(uint32_t value) {
		return ((T (*)(PlayerDsNetworkStatis*, uint32_t))(Il2CppBase() + 0x4EA6AE4))(this, value);
	}
	template <typename T = uint32_t> T get_wnzp_request_times() {
		return ((T (*)(PlayerDsNetworkStatis*))(Il2CppBase() + 0x4EA6AEC))(this);
	}
	template <typename T = void> T set_wnzp_request_times(uint32_t value) {
		return ((T (*)(PlayerDsNetworkStatis*, uint32_t))(Il2CppBase() + 0x4EA6AF4))(this, value);
	}
	template <typename T = uint32_t> T get_reconnect_times() {
		return ((T (*)(PlayerDsNetworkStatis*))(Il2CppBase() + 0x4EA6AFC))(this);
	}
	template <typename T = void> T set_reconnect_times(uint32_t value) {
		return ((T (*)(PlayerDsNetworkStatis*, uint32_t))(Il2CppBase() + 0x4EA6B04))(this, value);
	}
	template <typename T = uint32_t> T get_position_pull_times() {
		return ((T (*)(PlayerDsNetworkStatis*))(Il2CppBase() + 0x4EA6B0C))(this);
	}
	template <typename T = void> T set_position_pull_times(uint32_t value) {
		return ((T (*)(PlayerDsNetworkStatis*, uint32_t))(Il2CppBase() + 0x4EA6B14))(this, value);
	}
	template <typename T = uint32_t> T get_kick_reason() {
		return ((T (*)(PlayerDsNetworkStatis*))(Il2CppBase() + 0x4EA6B1C))(this);
	}
	template <typename T = void> T set_kick_reason(uint32_t value) {
		return ((T (*)(PlayerDsNetworkStatis*, uint32_t))(Il2CppBase() + 0x4EA6B24))(this, value);
	}
	template <typename T = uint32_t> T get_abnormal_ping_times() {
		return ((T (*)(PlayerDsNetworkStatis*))(Il2CppBase() + 0x4EA6B2C))(this);
	}
	template <typename T = void> T set_abnormal_ping_times(uint32_t value) {
		return ((T (*)(PlayerDsNetworkStatis*, uint32_t))(Il2CppBase() + 0x4EA6B34))(this, value);
	}
	template <typename T = uint32_t> T get_max_fps() {
		return ((T (*)(PlayerDsNetworkStatis*))(Il2CppBase() + 0x4EA6B3C))(this);
	}
	template <typename T = void> T set_max_fps(uint32_t value) {
		return ((T (*)(PlayerDsNetworkStatis*, uint32_t))(Il2CppBase() + 0x4EA6B44))(this, value);
	}
	template <typename T = uint32_t> T get_min_fps() {
		return ((T (*)(PlayerDsNetworkStatis*))(Il2CppBase() + 0x4EA6B4C))(this);
	}
	template <typename T = void> T set_min_fps(uint32_t value) {
		return ((T (*)(PlayerDsNetworkStatis*, uint32_t))(Il2CppBase() + 0x4EA6B54))(this, value);
	}
	template <typename T = uint32_t> T get_average_fps() {
		return ((T (*)(PlayerDsNetworkStatis*))(Il2CppBase() + 0x4EA6B5C))(this);
	}
	template <typename T = void> T set_average_fps(uint32_t value) {
		return ((T (*)(PlayerDsNetworkStatis*, uint32_t))(Il2CppBase() + 0x4EA6B64))(this, value);
	}
	template <typename T = uint32_t> T get_abnormal_fps_times() {
		return ((T (*)(PlayerDsNetworkStatis*))(Il2CppBase() + 0x4EA6B6C))(this);
	}
	template <typename T = void> T set_abnormal_fps_times(uint32_t value) {
		return ((T (*)(PlayerDsNetworkStatis*, uint32_t))(Il2CppBase() + 0x4EA6B74))(this, value);
	}
	template <typename T = uint32_t> T get_abfpstimes_under_abping() {
		return ((T (*)(PlayerDsNetworkStatis*))(Il2CppBase() + 0x4EA6B7C))(this);
	}
	template <typename T = void> T set_abfpstimes_under_abping(uint32_t value) {
		return ((T (*)(PlayerDsNetworkStatis*, uint32_t))(Il2CppBase() + 0x4EA6B84))(this, value);
	}
	template <typename T = uint32_t> T get_max_singal_level() {
		return ((T (*)(PlayerDsNetworkStatis*))(Il2CppBase() + 0x4EA6B8C))(this);
	}
	template <typename T = void> T set_max_singal_level(uint32_t value) {
		return ((T (*)(PlayerDsNetworkStatis*, uint32_t))(Il2CppBase() + 0x4EA6B94))(this, value);
	}
	template <typename T = uint32_t> T get_min_singal_level() {
		return ((T (*)(PlayerDsNetworkStatis*))(Il2CppBase() + 0x4EA6B9C))(this);
	}
	template <typename T = void> T set_min_singal_level(uint32_t value) {
		return ((T (*)(PlayerDsNetworkStatis*, uint32_t))(Il2CppBase() + 0x4EA6BA4))(this, value);
	}
	template <typename T = uint32_t> T get_average_singal_level() {
		return ((T (*)(PlayerDsNetworkStatis*))(Il2CppBase() + 0x4EA6BAC))(this);
	}
	template <typename T = void> T set_average_singal_level(uint32_t value) {
		return ((T (*)(PlayerDsNetworkStatis*, uint32_t))(Il2CppBase() + 0x4EA6BB4))(this, value);
	}
	template <typename T = uint32_t> T get_abnormal_singal_level_times() {
		return ((T (*)(PlayerDsNetworkStatis*))(Il2CppBase() + 0x4EA6BBC))(this);
	}
	template <typename T = void> T set_abnormal_singal_level_times(uint32_t value) {
		return ((T (*)(PlayerDsNetworkStatis*, uint32_t))(Il2CppBase() + 0x4EA6BC4))(this, value);
	}
	template <typename T = uint32_t> T get_absingalleveltimes_under_abping() {
		return ((T (*)(PlayerDsNetworkStatis*))(Il2CppBase() + 0x4EA6BCC))(this);
	}
	template <typename T = void> T set_absingalleveltimes_under_abping(uint32_t value) {
		return ((T (*)(PlayerDsNetworkStatis*, uint32_t))(Il2CppBase() + 0x4EA6BD4))(this, value);
	}
	template <typename T = uint32_t> T get_dsc_group_id() {
		return ((T (*)(PlayerDsNetworkStatis*))(Il2CppBase() + 0x4EA6BDC))(this);
	}
	template <typename T = void> T set_dsc_group_id(uint32_t value) {
		return ((T (*)(PlayerDsNetworkStatis*, uint32_t))(Il2CppBase() + 0x4EA6BE4))(this, value);
	}
	template <typename T = uint32_t> T get_dsc_pingvalue() {
		return ((T (*)(PlayerDsNetworkStatis*))(Il2CppBase() + 0x4EA6BEC))(this);
	}
	template <typename T = void> T set_dsc_pingvalue(uint32_t value) {
		return ((T (*)(PlayerDsNetworkStatis*, uint32_t))(Il2CppBase() + 0x4EA6BF4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PlayerDsNetworkStatis*, bool))(Il2CppBase() + 0x4EA6BFC))(this, createIfMissing);
	}

};

}
