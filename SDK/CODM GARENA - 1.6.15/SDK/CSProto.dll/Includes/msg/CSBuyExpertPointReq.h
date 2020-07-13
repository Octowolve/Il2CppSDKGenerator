#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSBuyExpertPointReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSBuyExpertPointReq"));
	}

	template <typename T = int32_t> T& _buy_point_value() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _cost_type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _today_buy_times() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& _buy_all() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint64_t> T& _expert_mater_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _expert_mater_count() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = int32_t> T get_buy_point_value() {
		return ((T (*)(CSBuyExpertPointReq*))(Il2CppBase() + 0x51E5714))(this);
	}
	template <typename T = void> T set_buy_point_value(int32_t value) {
		return ((T (*)(CSBuyExpertPointReq*, int32_t))(Il2CppBase() + 0x51E571C))(this, value);
	}
	template <typename T = int32_t> T get_cost_type() {
		return ((T (*)(CSBuyExpertPointReq*))(Il2CppBase() + 0x51E5724))(this);
	}
	template <typename T = void> T set_cost_type(int32_t value) {
		return ((T (*)(CSBuyExpertPointReq*, int32_t))(Il2CppBase() + 0x51E572C))(this, value);
	}
	template <typename T = int32_t> T get_today_buy_times() {
		return ((T (*)(CSBuyExpertPointReq*))(Il2CppBase() + 0x51E5734))(this);
	}
	template <typename T = void> T set_today_buy_times(int32_t value) {
		return ((T (*)(CSBuyExpertPointReq*, int32_t))(Il2CppBase() + 0x51E573C))(this, value);
	}
	template <typename T = bool> T get_buy_all() {
		return ((T (*)(CSBuyExpertPointReq*))(Il2CppBase() + 0x51E5744))(this);
	}
	template <typename T = void> T set_buy_all(bool value) {
		return ((T (*)(CSBuyExpertPointReq*, bool))(Il2CppBase() + 0x51E574C))(this, value);
	}
	template <typename T = uint64_t> T get_expert_mater_id() {
		return ((T (*)(CSBuyExpertPointReq*))(Il2CppBase() + 0x51E5754))(this);
	}
	template <typename T = void> T set_expert_mater_id(uint64_t value) {
		return ((T (*)(CSBuyExpertPointReq*, uint64_t))(Il2CppBase() + 0x51E575C))(this, value);
	}
	template <typename T = int32_t> T get_expert_mater_count() {
		return ((T (*)(CSBuyExpertPointReq*))(Il2CppBase() + 0x51E576C))(this);
	}
	template <typename T = void> T set_expert_mater_count(int32_t value) {
		return ((T (*)(CSBuyExpertPointReq*, int32_t))(Il2CppBase() + 0x51E5774))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSBuyExpertPointReq*, bool))(Il2CppBase() + 0x51E577C))(this, createIfMissing);
	}

};

}
