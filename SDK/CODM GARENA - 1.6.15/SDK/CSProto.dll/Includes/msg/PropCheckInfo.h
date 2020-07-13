#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PropCheckInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PropCheckInfo"));
	}

	template <typename T = uint32_t> T& _prop_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _group_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _allow_lottery_flag() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _not_allow_reason() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _priv_condition_str() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _priv_condition_num_list() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _priv_inc_str() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _priv_inc_num_list() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& _priv_inc_sum() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& _prop_prob() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint32_t> T& _prop_prob_sum() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint32_t> T& _repe_indep_prob() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uint32_t> T& _continuou_miss_times() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& _hit_order() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = uint32_t> T get_prop_id() {
		return ((T (*)(PropCheckInfo*))(Il2CppBase() + 0x506EC48))(this);
	}
	template <typename T = void> T set_prop_id(uint32_t value) {
		return ((T (*)(PropCheckInfo*, uint32_t))(Il2CppBase() + 0x506EC50))(this, value);
	}
	template <typename T = uint32_t> T get_group_id() {
		return ((T (*)(PropCheckInfo*))(Il2CppBase() + 0x506EC58))(this);
	}
	template <typename T = void> T set_group_id(uint32_t value) {
		return ((T (*)(PropCheckInfo*, uint32_t))(Il2CppBase() + 0x506EC60))(this, value);
	}
	template <typename T = uint32_t> T get_allow_lottery_flag() {
		return ((T (*)(PropCheckInfo*))(Il2CppBase() + 0x506EC68))(this);
	}
	template <typename T = void> T set_allow_lottery_flag(uint32_t value) {
		return ((T (*)(PropCheckInfo*, uint32_t))(Il2CppBase() + 0x506EC70))(this, value);
	}
	template <typename T = uint32_t> T get_not_allow_reason() {
		return ((T (*)(PropCheckInfo*))(Il2CppBase() + 0x506EC78))(this);
	}
	template <typename T = void> T set_not_allow_reason(uint32_t value) {
		return ((T (*)(PropCheckInfo*, uint32_t))(Il2CppBase() + 0x506EC80))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_priv_condition_str() {
		return ((T (*)(PropCheckInfo*))(Il2CppBase() + 0x506EC88))(this);
	}
	template <typename T = void> T set_priv_condition_str(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(PropCheckInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x506EC90))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_priv_condition_num_list() {
		return ((T (*)(PropCheckInfo*))(Il2CppBase() + 0x506EC98))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_priv_inc_str() {
		return ((T (*)(PropCheckInfo*))(Il2CppBase() + 0x506ECA0))(this);
	}
	template <typename T = void> T set_priv_inc_str(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(PropCheckInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x506ECA8))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_priv_inc_num_list() {
		return ((T (*)(PropCheckInfo*))(Il2CppBase() + 0x506ECB0))(this);
	}
	template <typename T = uint32_t> T get_priv_inc_sum() {
		return ((T (*)(PropCheckInfo*))(Il2CppBase() + 0x506ECB8))(this);
	}
	template <typename T = void> T set_priv_inc_sum(uint32_t value) {
		return ((T (*)(PropCheckInfo*, uint32_t))(Il2CppBase() + 0x506ECC0))(this, value);
	}
	template <typename T = uint32_t> T get_prop_prob() {
		return ((T (*)(PropCheckInfo*))(Il2CppBase() + 0x506ECC8))(this);
	}
	template <typename T = void> T set_prop_prob(uint32_t value) {
		return ((T (*)(PropCheckInfo*, uint32_t))(Il2CppBase() + 0x506ECD0))(this, value);
	}
	template <typename T = uint32_t> T get_prop_prob_sum() {
		return ((T (*)(PropCheckInfo*))(Il2CppBase() + 0x506ECD8))(this);
	}
	template <typename T = void> T set_prop_prob_sum(uint32_t value) {
		return ((T (*)(PropCheckInfo*, uint32_t))(Il2CppBase() + 0x506ECE0))(this, value);
	}
	template <typename T = uint32_t> T get_repe_indep_prob() {
		return ((T (*)(PropCheckInfo*))(Il2CppBase() + 0x506ECE8))(this);
	}
	template <typename T = void> T set_repe_indep_prob(uint32_t value) {
		return ((T (*)(PropCheckInfo*, uint32_t))(Il2CppBase() + 0x506ECF0))(this, value);
	}
	template <typename T = uint32_t> T get_continuou_miss_times() {
		return ((T (*)(PropCheckInfo*))(Il2CppBase() + 0x506ECF8))(this);
	}
	template <typename T = void> T set_continuou_miss_times(uint32_t value) {
		return ((T (*)(PropCheckInfo*, uint32_t))(Il2CppBase() + 0x506ED00))(this, value);
	}
	template <typename T = uint32_t> T get_hit_order() {
		return ((T (*)(PropCheckInfo*))(Il2CppBase() + 0x506ED08))(this);
	}
	template <typename T = void> T set_hit_order(uint32_t value) {
		return ((T (*)(PropCheckInfo*, uint32_t))(Il2CppBase() + 0x506ED10))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PropCheckInfo*, bool))(Il2CppBase() + 0x506ED18))(this, createIfMissing);
	}

};

}
