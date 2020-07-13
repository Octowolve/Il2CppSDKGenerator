#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class SafeBox
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "SafeBox"));
	}

	template <typename T = uint64_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _group_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _begin_time_str() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _end_time_str() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint64_t> T& _begin_time() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint64_t> T& _end_time() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& _level() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& _reset_period() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uint32_t> T& _low_limit() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& _high_limit() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uint32_t> T& _accum_speed() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& _price() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _midas_pay_link() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint32_t> T& _curr_value() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uint32_t> T& _index() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& _bought_flag() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uint64_t> T& _use_time() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _abtest_conf() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x64);
	}

	template <typename T = uint64_t> T get_id() {
		return ((T (*)(SafeBox*))(Il2CppBase() + 0x5072020))(this);
	}
	template <typename T = void> T set_id(uint64_t value) {
		return ((T (*)(SafeBox*, uint64_t))(Il2CppBase() + 0x5072028))(this, value);
	}
	template <typename T = uint64_t> T get_group_id() {
		return ((T (*)(SafeBox*))(Il2CppBase() + 0x5072038))(this);
	}
	template <typename T = void> T set_group_id(uint64_t value) {
		return ((T (*)(SafeBox*, uint64_t))(Il2CppBase() + 0x5072040))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_begin_time_str() {
		return ((T (*)(SafeBox*))(Il2CppBase() + 0x5072050))(this);
	}
	template <typename T = void> T set_begin_time_str(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(SafeBox*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5072058))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_end_time_str() {
		return ((T (*)(SafeBox*))(Il2CppBase() + 0x5072060))(this);
	}
	template <typename T = void> T set_end_time_str(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(SafeBox*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5072068))(this, value);
	}
	template <typename T = uint64_t> T get_begin_time() {
		return ((T (*)(SafeBox*))(Il2CppBase() + 0x5072070))(this);
	}
	template <typename T = void> T set_begin_time(uint64_t value) {
		return ((T (*)(SafeBox*, uint64_t))(Il2CppBase() + 0x5072078))(this, value);
	}
	template <typename T = uint64_t> T get_end_time() {
		return ((T (*)(SafeBox*))(Il2CppBase() + 0x5072088))(this);
	}
	template <typename T = void> T set_end_time(uint64_t value) {
		return ((T (*)(SafeBox*, uint64_t))(Il2CppBase() + 0x5072090))(this, value);
	}
	template <typename T = uint32_t> T get_level() {
		return ((T (*)(SafeBox*))(Il2CppBase() + 0x50720A0))(this);
	}
	template <typename T = void> T set_level(uint32_t value) {
		return ((T (*)(SafeBox*, uint32_t))(Il2CppBase() + 0x50720A8))(this, value);
	}
	template <typename T = int32_t> T get_reset_period() {
		return ((T (*)(SafeBox*))(Il2CppBase() + 0x50720B0))(this);
	}
	template <typename T = void> T set_reset_period(int32_t value) {
		return ((T (*)(SafeBox*, int32_t))(Il2CppBase() + 0x50720B8))(this, value);
	}
	template <typename T = uint32_t> T get_low_limit() {
		return ((T (*)(SafeBox*))(Il2CppBase() + 0x50720C0))(this);
	}
	template <typename T = void> T set_low_limit(uint32_t value) {
		return ((T (*)(SafeBox*, uint32_t))(Il2CppBase() + 0x50720C8))(this, value);
	}
	template <typename T = uint32_t> T get_high_limit() {
		return ((T (*)(SafeBox*))(Il2CppBase() + 0x50720D0))(this);
	}
	template <typename T = void> T set_high_limit(uint32_t value) {
		return ((T (*)(SafeBox*, uint32_t))(Il2CppBase() + 0x50720D8))(this, value);
	}
	template <typename T = uint32_t> T get_accum_speed() {
		return ((T (*)(SafeBox*))(Il2CppBase() + 0x50720E0))(this);
	}
	template <typename T = void> T set_accum_speed(uint32_t value) {
		return ((T (*)(SafeBox*, uint32_t))(Il2CppBase() + 0x50720E8))(this, value);
	}
	template <typename T = float> T get_price() {
		return ((T (*)(SafeBox*))(Il2CppBase() + 0x50720F0))(this);
	}
	template <typename T = void> T set_price(float value) {
		return ((T (*)(SafeBox*, float))(Il2CppBase() + 0x50720F8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_midas_pay_link() {
		return ((T (*)(SafeBox*))(Il2CppBase() + 0x5072100))(this);
	}
	template <typename T = void> T set_midas_pay_link(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(SafeBox*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5072108))(this, value);
	}
	template <typename T = uint32_t> T get_curr_value() {
		return ((T (*)(SafeBox*))(Il2CppBase() + 0x5072110))(this);
	}
	template <typename T = void> T set_curr_value(uint32_t value) {
		return ((T (*)(SafeBox*, uint32_t))(Il2CppBase() + 0x5072118))(this, value);
	}
	template <typename T = uint32_t> T get_index() {
		return ((T (*)(SafeBox*))(Il2CppBase() + 0x5072120))(this);
	}
	template <typename T = void> T set_index(uint32_t value) {
		return ((T (*)(SafeBox*, uint32_t))(Il2CppBase() + 0x5072128))(this, value);
	}
	template <typename T = bool> T get_bought_flag() {
		return ((T (*)(SafeBox*))(Il2CppBase() + 0x5072130))(this);
	}
	template <typename T = void> T set_bought_flag(bool value) {
		return ((T (*)(SafeBox*, bool))(Il2CppBase() + 0x5072138))(this, value);
	}
	template <typename T = uint64_t> T get_use_time() {
		return ((T (*)(SafeBox*))(Il2CppBase() + 0x5072140))(this);
	}
	template <typename T = void> T set_use_time(uint64_t value) {
		return ((T (*)(SafeBox*, uint64_t))(Il2CppBase() + 0x5072148))(this, value);
	}
	template <typename T = uintptr_t> T get_abtest_conf() {
		return ((T (*)(SafeBox*))(Il2CppBase() + 0x5072158))(this);
	}
	template <typename T = void> T set_abtest_conf(uintptr_t value) {
		return ((T (*)(SafeBox*, uintptr_t))(Il2CppBase() + 0x5072160))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(SafeBox*, bool))(Il2CppBase() + 0x5072168))(this, createIfMissing);
	}

};

}
