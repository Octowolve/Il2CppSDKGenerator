#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class Commodity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "Commodity"));
	}

	template <typename T = int32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _prop_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _num() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _aging_type() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _duration_time() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _type() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& _sub_type() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _vip_level() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& _rank() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& _hot() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& _recommended() {
		return *(T*)((uintptr_t)this + 0x35);
	}
	template <typename T = int32_t> T& _position() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& _currency_type() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& _price() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& _discount_price() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uint32_t> T& _discount_start_time() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint32_t> T& _discount_end_time() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& _limit_buy_times() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& _bought_times() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& _limit_cycle() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uint32_t> T& _last_buy_time() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uint32_t> T& _limit_end_time() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& _is_show_expire_time() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uint32_t> T& _expire_time() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& _sort_id() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uint32_t> T& _added_time() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& _is_new() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& _is_advertisment() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& _is_favourable() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& _is_gift() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uint64_t> T& _present_coupon_id() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& _present_coupon_num() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _advertisment_url() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = int32_t> T get_id() {
		return ((T (*)(Commodity*))(Il2CppBase() + 0x516EC54))(this);
	}
	template <typename T = void> T set_id(int32_t value) {
		return ((T (*)(Commodity*, int32_t))(Il2CppBase() + 0x516EC5C))(this, value);
	}
	template <typename T = uint64_t> T get_prop_id() {
		return ((T (*)(Commodity*))(Il2CppBase() + 0x516EC64))(this);
	}
	template <typename T = void> T set_prop_id(uint64_t value) {
		return ((T (*)(Commodity*, uint64_t))(Il2CppBase() + 0x516EC6C))(this, value);
	}
	template <typename T = int32_t> T get_num() {
		return ((T (*)(Commodity*))(Il2CppBase() + 0x516EC7C))(this);
	}
	template <typename T = void> T set_num(int32_t value) {
		return ((T (*)(Commodity*, int32_t))(Il2CppBase() + 0x516EC84))(this, value);
	}
	template <typename T = int32_t> T get_aging_type() {
		return ((T (*)(Commodity*))(Il2CppBase() + 0x516EC8C))(this);
	}
	template <typename T = void> T set_aging_type(int32_t value) {
		return ((T (*)(Commodity*, int32_t))(Il2CppBase() + 0x516EC94))(this, value);
	}
	template <typename T = int32_t> T get_duration_time() {
		return ((T (*)(Commodity*))(Il2CppBase() + 0x516EC9C))(this);
	}
	template <typename T = void> T set_duration_time(int32_t value) {
		return ((T (*)(Commodity*, int32_t))(Il2CppBase() + 0x516ECA4))(this, value);
	}
	template <typename T = int32_t> T get_type() {
		return ((T (*)(Commodity*))(Il2CppBase() + 0x516ECAC))(this);
	}
	template <typename T = void> T set_type(int32_t value) {
		return ((T (*)(Commodity*, int32_t))(Il2CppBase() + 0x516ECB4))(this, value);
	}
	template <typename T = int32_t> T get_sub_type() {
		return ((T (*)(Commodity*))(Il2CppBase() + 0x516ECBC))(this);
	}
	template <typename T = void> T set_sub_type(int32_t value) {
		return ((T (*)(Commodity*, int32_t))(Il2CppBase() + 0x516ECC4))(this, value);
	}
	template <typename T = int32_t> T get_vip_level() {
		return ((T (*)(Commodity*))(Il2CppBase() + 0x516ECCC))(this);
	}
	template <typename T = void> T set_vip_level(int32_t value) {
		return ((T (*)(Commodity*, int32_t))(Il2CppBase() + 0x516ECD4))(this, value);
	}
	template <typename T = int32_t> T get_rank() {
		return ((T (*)(Commodity*))(Il2CppBase() + 0x516ECDC))(this);
	}
	template <typename T = void> T set_rank(int32_t value) {
		return ((T (*)(Commodity*, int32_t))(Il2CppBase() + 0x516ECE4))(this, value);
	}
	template <typename T = bool> T get_hot() {
		return ((T (*)(Commodity*))(Il2CppBase() + 0x516ECEC))(this);
	}
	template <typename T = void> T set_hot(bool value) {
		return ((T (*)(Commodity*, bool))(Il2CppBase() + 0x516ECF4))(this, value);
	}
	template <typename T = bool> T get_recommended() {
		return ((T (*)(Commodity*))(Il2CppBase() + 0x516ECFC))(this);
	}
	template <typename T = void> T set_recommended(bool value) {
		return ((T (*)(Commodity*, bool))(Il2CppBase() + 0x516ED04))(this, value);
	}
	template <typename T = int32_t> T get_position() {
		return ((T (*)(Commodity*))(Il2CppBase() + 0x516ED0C))(this);
	}
	template <typename T = void> T set_position(int32_t value) {
		return ((T (*)(Commodity*, int32_t))(Il2CppBase() + 0x516ED14))(this, value);
	}
	template <typename T = int32_t> T get_currency_type() {
		return ((T (*)(Commodity*))(Il2CppBase() + 0x516ED1C))(this);
	}
	template <typename T = void> T set_currency_type(int32_t value) {
		return ((T (*)(Commodity*, int32_t))(Il2CppBase() + 0x516ED24))(this, value);
	}
	template <typename T = int32_t> T get_price() {
		return ((T (*)(Commodity*))(Il2CppBase() + 0x516ED2C))(this);
	}
	template <typename T = void> T set_price(int32_t value) {
		return ((T (*)(Commodity*, int32_t))(Il2CppBase() + 0x516ED34))(this, value);
	}
	template <typename T = int32_t> T get_discount_price() {
		return ((T (*)(Commodity*))(Il2CppBase() + 0x516ED3C))(this);
	}
	template <typename T = void> T set_discount_price(int32_t value) {
		return ((T (*)(Commodity*, int32_t))(Il2CppBase() + 0x516ED44))(this, value);
	}
	template <typename T = uint32_t> T get_discount_start_time() {
		return ((T (*)(Commodity*))(Il2CppBase() + 0x516ED4C))(this);
	}
	template <typename T = void> T set_discount_start_time(uint32_t value) {
		return ((T (*)(Commodity*, uint32_t))(Il2CppBase() + 0x516ED54))(this, value);
	}
	template <typename T = uint32_t> T get_discount_end_time() {
		return ((T (*)(Commodity*))(Il2CppBase() + 0x516ED5C))(this);
	}
	template <typename T = void> T set_discount_end_time(uint32_t value) {
		return ((T (*)(Commodity*, uint32_t))(Il2CppBase() + 0x516ED64))(this, value);
	}
	template <typename T = int32_t> T get_limit_buy_times() {
		return ((T (*)(Commodity*))(Il2CppBase() + 0x516ED6C))(this);
	}
	template <typename T = void> T set_limit_buy_times(int32_t value) {
		return ((T (*)(Commodity*, int32_t))(Il2CppBase() + 0x516ED74))(this, value);
	}
	template <typename T = int32_t> T get_bought_times() {
		return ((T (*)(Commodity*))(Il2CppBase() + 0x516ED7C))(this);
	}
	template <typename T = void> T set_bought_times(int32_t value) {
		return ((T (*)(Commodity*, int32_t))(Il2CppBase() + 0x516ED84))(this, value);
	}
	template <typename T = int32_t> T get_limit_cycle() {
		return ((T (*)(Commodity*))(Il2CppBase() + 0x516ED8C))(this);
	}
	template <typename T = void> T set_limit_cycle(int32_t value) {
		return ((T (*)(Commodity*, int32_t))(Il2CppBase() + 0x516ED94))(this, value);
	}
	template <typename T = uint32_t> T get_last_buy_time() {
		return ((T (*)(Commodity*))(Il2CppBase() + 0x516ED9C))(this);
	}
	template <typename T = void> T set_last_buy_time(uint32_t value) {
		return ((T (*)(Commodity*, uint32_t))(Il2CppBase() + 0x516EDA4))(this, value);
	}
	template <typename T = uint32_t> T get_limit_end_time() {
		return ((T (*)(Commodity*))(Il2CppBase() + 0x516EDAC))(this);
	}
	template <typename T = void> T set_limit_end_time(uint32_t value) {
		return ((T (*)(Commodity*, uint32_t))(Il2CppBase() + 0x516EDB4))(this, value);
	}
	template <typename T = bool> T get_is_show_expire_time() {
		return ((T (*)(Commodity*))(Il2CppBase() + 0x516EDBC))(this);
	}
	template <typename T = void> T set_is_show_expire_time(bool value) {
		return ((T (*)(Commodity*, bool))(Il2CppBase() + 0x516EDC4))(this, value);
	}
	template <typename T = uint32_t> T get_expire_time() {
		return ((T (*)(Commodity*))(Il2CppBase() + 0x516EDCC))(this);
	}
	template <typename T = void> T set_expire_time(uint32_t value) {
		return ((T (*)(Commodity*, uint32_t))(Il2CppBase() + 0x516EDD4))(this, value);
	}
	template <typename T = int32_t> T get_sort_id() {
		return ((T (*)(Commodity*))(Il2CppBase() + 0x516EDDC))(this);
	}
	template <typename T = void> T set_sort_id(int32_t value) {
		return ((T (*)(Commodity*, int32_t))(Il2CppBase() + 0x516EDE4))(this, value);
	}
	template <typename T = uint32_t> T get_added_time() {
		return ((T (*)(Commodity*))(Il2CppBase() + 0x516EDEC))(this);
	}
	template <typename T = void> T set_added_time(uint32_t value) {
		return ((T (*)(Commodity*, uint32_t))(Il2CppBase() + 0x516EDF4))(this, value);
	}
	template <typename T = int32_t> T get_is_new() {
		return ((T (*)(Commodity*))(Il2CppBase() + 0x516EDFC))(this);
	}
	template <typename T = void> T set_is_new(int32_t value) {
		return ((T (*)(Commodity*, int32_t))(Il2CppBase() + 0x516EE04))(this, value);
	}
	template <typename T = int32_t> T get_is_advertisment() {
		return ((T (*)(Commodity*))(Il2CppBase() + 0x516EE0C))(this);
	}
	template <typename T = void> T set_is_advertisment(int32_t value) {
		return ((T (*)(Commodity*, int32_t))(Il2CppBase() + 0x516EE14))(this, value);
	}
	template <typename T = int32_t> T get_is_favourable() {
		return ((T (*)(Commodity*))(Il2CppBase() + 0x516EE1C))(this);
	}
	template <typename T = void> T set_is_favourable(int32_t value) {
		return ((T (*)(Commodity*, int32_t))(Il2CppBase() + 0x516EE24))(this, value);
	}
	template <typename T = int32_t> T get_is_gift() {
		return ((T (*)(Commodity*))(Il2CppBase() + 0x516EE2C))(this);
	}
	template <typename T = void> T set_is_gift(int32_t value) {
		return ((T (*)(Commodity*, int32_t))(Il2CppBase() + 0x516EE34))(this, value);
	}
	template <typename T = uint64_t> T get_present_coupon_id() {
		return ((T (*)(Commodity*))(Il2CppBase() + 0x516EE3C))(this);
	}
	template <typename T = void> T set_present_coupon_id(uint64_t value) {
		return ((T (*)(Commodity*, uint64_t))(Il2CppBase() + 0x516EE44))(this, value);
	}
	template <typename T = int32_t> T get_present_coupon_num() {
		return ((T (*)(Commodity*))(Il2CppBase() + 0x516EE54))(this);
	}
	template <typename T = void> T set_present_coupon_num(int32_t value) {
		return ((T (*)(Commodity*, int32_t))(Il2CppBase() + 0x516EE5C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_advertisment_url() {
		return ((T (*)(Commodity*))(Il2CppBase() + 0x516EE64))(this);
	}
	template <typename T = void> T set_advertisment_url(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(Commodity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x516EE6C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(Commodity*, bool))(Il2CppBase() + 0x516EE74))(this, createIfMissing);
	}

};

}
