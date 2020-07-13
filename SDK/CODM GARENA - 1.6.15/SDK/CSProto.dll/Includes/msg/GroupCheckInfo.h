#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GroupCheckInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GroupCheckInfo"));
	}

	template <typename T = uint32_t> T& _group_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _box_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _allow_lottery_flag() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _not_allow_reason() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _lucky_condition_num() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _lucky_gift_flag() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _pub_condition_num() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& _curr_pub_value() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _priv_condition_str() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _priv_condition_num_list() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _priv_inc_str() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _priv_inc_num_list() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uint32_t> T& _priv_inc_sum() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& _group_prob() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uint32_t> T& _group_prob_sum() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint32_t> T& _flag() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uint32_t> T& _repe_indep_prob() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _prop_list() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uint32_t> T& _continuou_miss_times() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x54);
	}

	template <typename T = uint32_t> T get_group_id() {
		return ((T (*)(GroupCheckInfo*))(Il2CppBase() + 0x50CDE14))(this);
	}
	template <typename T = void> T set_group_id(uint32_t value) {
		return ((T (*)(GroupCheckInfo*, uint32_t))(Il2CppBase() + 0x50CDE1C))(this, value);
	}
	template <typename T = uint32_t> T get_box_id() {
		return ((T (*)(GroupCheckInfo*))(Il2CppBase() + 0x50CDE24))(this);
	}
	template <typename T = void> T set_box_id(uint32_t value) {
		return ((T (*)(GroupCheckInfo*, uint32_t))(Il2CppBase() + 0x50CDE2C))(this, value);
	}
	template <typename T = uint32_t> T get_allow_lottery_flag() {
		return ((T (*)(GroupCheckInfo*))(Il2CppBase() + 0x50CDE34))(this);
	}
	template <typename T = void> T set_allow_lottery_flag(uint32_t value) {
		return ((T (*)(GroupCheckInfo*, uint32_t))(Il2CppBase() + 0x50CDE3C))(this, value);
	}
	template <typename T = uint32_t> T get_not_allow_reason() {
		return ((T (*)(GroupCheckInfo*))(Il2CppBase() + 0x50CDE44))(this);
	}
	template <typename T = void> T set_not_allow_reason(uint32_t value) {
		return ((T (*)(GroupCheckInfo*, uint32_t))(Il2CppBase() + 0x50CDE4C))(this, value);
	}
	template <typename T = uint32_t> T get_lucky_condition_num() {
		return ((T (*)(GroupCheckInfo*))(Il2CppBase() + 0x50CDE54))(this);
	}
	template <typename T = void> T set_lucky_condition_num(uint32_t value) {
		return ((T (*)(GroupCheckInfo*, uint32_t))(Il2CppBase() + 0x50CDE5C))(this, value);
	}
	template <typename T = uint32_t> T get_lucky_gift_flag() {
		return ((T (*)(GroupCheckInfo*))(Il2CppBase() + 0x50CDE64))(this);
	}
	template <typename T = void> T set_lucky_gift_flag(uint32_t value) {
		return ((T (*)(GroupCheckInfo*, uint32_t))(Il2CppBase() + 0x50CDE6C))(this, value);
	}
	template <typename T = uint32_t> T get_pub_condition_num() {
		return ((T (*)(GroupCheckInfo*))(Il2CppBase() + 0x50CDE74))(this);
	}
	template <typename T = void> T set_pub_condition_num(uint32_t value) {
		return ((T (*)(GroupCheckInfo*, uint32_t))(Il2CppBase() + 0x50CDE7C))(this, value);
	}
	template <typename T = uint32_t> T get_curr_pub_value() {
		return ((T (*)(GroupCheckInfo*))(Il2CppBase() + 0x50CDE84))(this);
	}
	template <typename T = void> T set_curr_pub_value(uint32_t value) {
		return ((T (*)(GroupCheckInfo*, uint32_t))(Il2CppBase() + 0x50CDE8C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_priv_condition_str() {
		return ((T (*)(GroupCheckInfo*))(Il2CppBase() + 0x50CDE94))(this);
	}
	template <typename T = void> T set_priv_condition_str(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(GroupCheckInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x50CDE9C))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_priv_condition_num_list() {
		return ((T (*)(GroupCheckInfo*))(Il2CppBase() + 0x50CDEA4))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_priv_inc_str() {
		return ((T (*)(GroupCheckInfo*))(Il2CppBase() + 0x50CDEAC))(this);
	}
	template <typename T = void> T set_priv_inc_str(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(GroupCheckInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x50CDEB4))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_priv_inc_num_list() {
		return ((T (*)(GroupCheckInfo*))(Il2CppBase() + 0x50CDEBC))(this);
	}
	template <typename T = uint32_t> T get_priv_inc_sum() {
		return ((T (*)(GroupCheckInfo*))(Il2CppBase() + 0x50CDEC4))(this);
	}
	template <typename T = void> T set_priv_inc_sum(uint32_t value) {
		return ((T (*)(GroupCheckInfo*, uint32_t))(Il2CppBase() + 0x50CDECC))(this, value);
	}
	template <typename T = uint32_t> T get_group_prob() {
		return ((T (*)(GroupCheckInfo*))(Il2CppBase() + 0x50CDED4))(this);
	}
	template <typename T = void> T set_group_prob(uint32_t value) {
		return ((T (*)(GroupCheckInfo*, uint32_t))(Il2CppBase() + 0x50CDEDC))(this, value);
	}
	template <typename T = uint32_t> T get_group_prob_sum() {
		return ((T (*)(GroupCheckInfo*))(Il2CppBase() + 0x50CDEE4))(this);
	}
	template <typename T = void> T set_group_prob_sum(uint32_t value) {
		return ((T (*)(GroupCheckInfo*, uint32_t))(Il2CppBase() + 0x50CDEEC))(this, value);
	}
	template <typename T = uint32_t> T get_flag() {
		return ((T (*)(GroupCheckInfo*))(Il2CppBase() + 0x50CDEF4))(this);
	}
	template <typename T = void> T set_flag(uint32_t value) {
		return ((T (*)(GroupCheckInfo*, uint32_t))(Il2CppBase() + 0x50CDEFC))(this, value);
	}
	template <typename T = uint32_t> T get_repe_indep_prob() {
		return ((T (*)(GroupCheckInfo*))(Il2CppBase() + 0x50CDF04))(this);
	}
	template <typename T = void> T set_repe_indep_prob(uint32_t value) {
		return ((T (*)(GroupCheckInfo*, uint32_t))(Il2CppBase() + 0x50CDF0C))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_prop_list() {
		return ((T (*)(GroupCheckInfo*))(Il2CppBase() + 0x50CDF14))(this);
	}
	template <typename T = uint32_t> T get_continuou_miss_times() {
		return ((T (*)(GroupCheckInfo*))(Il2CppBase() + 0x50CDF1C))(this);
	}
	template <typename T = void> T set_continuou_miss_times(uint32_t value) {
		return ((T (*)(GroupCheckInfo*, uint32_t))(Il2CppBase() + 0x50CDF24))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GroupCheckInfo*, bool))(Il2CppBase() + 0x50CDF2C))(this, createIfMissing);
	}

};

}
