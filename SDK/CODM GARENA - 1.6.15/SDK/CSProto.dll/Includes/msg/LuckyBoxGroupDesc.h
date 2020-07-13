#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class LuckyBoxGroupDesc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "LuckyBoxGroupDesc"));
	}

	template <typename T = uint32_t> T& _group_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _box_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _active_flag() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _group_index() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _repe_indep_prob() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _group_prob() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _restore_flag() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& _restore_interval() {
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
	template <typename T = uint32_t> T& _pub_condition_num() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& _lucky_condition_num() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uint32_t> T& _lucky_gift_flag() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _prop_list() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = uint32_t> T get_group_id() {
		return ((T (*)(LuckyBoxGroupDesc*))(Il2CppBase() + 0x4EA3AD4))(this);
	}
	template <typename T = void> T set_group_id(uint32_t value) {
		return ((T (*)(LuckyBoxGroupDesc*, uint32_t))(Il2CppBase() + 0x4EA3ADC))(this, value);
	}
	template <typename T = uint32_t> T get_box_id() {
		return ((T (*)(LuckyBoxGroupDesc*))(Il2CppBase() + 0x4EA3AE4))(this);
	}
	template <typename T = void> T set_box_id(uint32_t value) {
		return ((T (*)(LuckyBoxGroupDesc*, uint32_t))(Il2CppBase() + 0x4EA3AEC))(this, value);
	}
	template <typename T = uint32_t> T get_active_flag() {
		return ((T (*)(LuckyBoxGroupDesc*))(Il2CppBase() + 0x4EA3AF4))(this);
	}
	template <typename T = void> T set_active_flag(uint32_t value) {
		return ((T (*)(LuckyBoxGroupDesc*, uint32_t))(Il2CppBase() + 0x4EA3AFC))(this, value);
	}
	template <typename T = uint32_t> T get_group_index() {
		return ((T (*)(LuckyBoxGroupDesc*))(Il2CppBase() + 0x4EA3B04))(this);
	}
	template <typename T = void> T set_group_index(uint32_t value) {
		return ((T (*)(LuckyBoxGroupDesc*, uint32_t))(Il2CppBase() + 0x4EA3B0C))(this, value);
	}
	template <typename T = uint32_t> T get_repe_indep_prob() {
		return ((T (*)(LuckyBoxGroupDesc*))(Il2CppBase() + 0x4EA3B14))(this);
	}
	template <typename T = void> T set_repe_indep_prob(uint32_t value) {
		return ((T (*)(LuckyBoxGroupDesc*, uint32_t))(Il2CppBase() + 0x4EA3B1C))(this, value);
	}
	template <typename T = uint32_t> T get_group_prob() {
		return ((T (*)(LuckyBoxGroupDesc*))(Il2CppBase() + 0x4EA3B24))(this);
	}
	template <typename T = void> T set_group_prob(uint32_t value) {
		return ((T (*)(LuckyBoxGroupDesc*, uint32_t))(Il2CppBase() + 0x4EA3B2C))(this, value);
	}
	template <typename T = uint32_t> T get_restore_flag() {
		return ((T (*)(LuckyBoxGroupDesc*))(Il2CppBase() + 0x4EA3B34))(this);
	}
	template <typename T = void> T set_restore_flag(uint32_t value) {
		return ((T (*)(LuckyBoxGroupDesc*, uint32_t))(Il2CppBase() + 0x4EA3B3C))(this, value);
	}
	template <typename T = uint32_t> T get_restore_interval() {
		return ((T (*)(LuckyBoxGroupDesc*))(Il2CppBase() + 0x4EA3B44))(this);
	}
	template <typename T = void> T set_restore_interval(uint32_t value) {
		return ((T (*)(LuckyBoxGroupDesc*, uint32_t))(Il2CppBase() + 0x4EA3B4C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_priv_condition_str() {
		return ((T (*)(LuckyBoxGroupDesc*))(Il2CppBase() + 0x4EA3B54))(this);
	}
	template <typename T = void> T set_priv_condition_str(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(LuckyBoxGroupDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA3B5C))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_priv_condition_num_list() {
		return ((T (*)(LuckyBoxGroupDesc*))(Il2CppBase() + 0x4EA3B64))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_priv_inc_str() {
		return ((T (*)(LuckyBoxGroupDesc*))(Il2CppBase() + 0x4EA3B6C))(this);
	}
	template <typename T = void> T set_priv_inc_str(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(LuckyBoxGroupDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA3B74))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_priv_inc_num_list() {
		return ((T (*)(LuckyBoxGroupDesc*))(Il2CppBase() + 0x4EA3B7C))(this);
	}
	template <typename T = uint32_t> T get_pub_condition_num() {
		return ((T (*)(LuckyBoxGroupDesc*))(Il2CppBase() + 0x4EA3B84))(this);
	}
	template <typename T = void> T set_pub_condition_num(uint32_t value) {
		return ((T (*)(LuckyBoxGroupDesc*, uint32_t))(Il2CppBase() + 0x4EA3B8C))(this, value);
	}
	template <typename T = uint32_t> T get_lucky_condition_num() {
		return ((T (*)(LuckyBoxGroupDesc*))(Il2CppBase() + 0x4EA3B94))(this);
	}
	template <typename T = void> T set_lucky_condition_num(uint32_t value) {
		return ((T (*)(LuckyBoxGroupDesc*, uint32_t))(Il2CppBase() + 0x4EA3B9C))(this, value);
	}
	template <typename T = uint32_t> T get_lucky_gift_flag() {
		return ((T (*)(LuckyBoxGroupDesc*))(Il2CppBase() + 0x4EA3BA4))(this);
	}
	template <typename T = void> T set_lucky_gift_flag(uint32_t value) {
		return ((T (*)(LuckyBoxGroupDesc*, uint32_t))(Il2CppBase() + 0x4EA3BAC))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_prop_list() {
		return ((T (*)(LuckyBoxGroupDesc*))(Il2CppBase() + 0x4EA3BB4))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(LuckyBoxGroupDesc*, bool))(Il2CppBase() + 0x4EA3BBC))(this, createIfMissing);
	}

};

}
