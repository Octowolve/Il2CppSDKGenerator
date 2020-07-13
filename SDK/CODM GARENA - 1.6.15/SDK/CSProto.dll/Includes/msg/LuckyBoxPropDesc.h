#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class LuckyBoxPropDesc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "LuckyBoxPropDesc"));
	}

	template <typename T = uint32_t> T& _prop_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _group_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _active_flag() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _prop_index() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _prop_type() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _repe_indep_prob() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _prop_color() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& _prop_prob() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& _durable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& _min_drop_num() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint32_t> T& _max_drop_num() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint32_t> T& _restore_flag() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _priv_condition_str() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _priv_condition_num_list() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _priv_inc_str() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _priv_inc_num_list() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& _show_prob_value() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint32_t> T& _hit_order() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = uint32_t> T get_prop_id() {
		return ((T (*)(LuckyBoxPropDesc*))(Il2CppBase() + 0x4EA3E70))(this);
	}
	template <typename T = void> T set_prop_id(uint32_t value) {
		return ((T (*)(LuckyBoxPropDesc*, uint32_t))(Il2CppBase() + 0x4EA3E78))(this, value);
	}
	template <typename T = uint32_t> T get_group_id() {
		return ((T (*)(LuckyBoxPropDesc*))(Il2CppBase() + 0x4EA3E80))(this);
	}
	template <typename T = void> T set_group_id(uint32_t value) {
		return ((T (*)(LuckyBoxPropDesc*, uint32_t))(Il2CppBase() + 0x4EA3E88))(this, value);
	}
	template <typename T = uint32_t> T get_active_flag() {
		return ((T (*)(LuckyBoxPropDesc*))(Il2CppBase() + 0x4EA3E90))(this);
	}
	template <typename T = void> T set_active_flag(uint32_t value) {
		return ((T (*)(LuckyBoxPropDesc*, uint32_t))(Il2CppBase() + 0x4EA3E98))(this, value);
	}
	template <typename T = uint32_t> T get_prop_index() {
		return ((T (*)(LuckyBoxPropDesc*))(Il2CppBase() + 0x4EA3EA0))(this);
	}
	template <typename T = void> T set_prop_index(uint32_t value) {
		return ((T (*)(LuckyBoxPropDesc*, uint32_t))(Il2CppBase() + 0x4EA3EA8))(this, value);
	}
	template <typename T = uint32_t> T get_prop_type() {
		return ((T (*)(LuckyBoxPropDesc*))(Il2CppBase() + 0x4EA3EB0))(this);
	}
	template <typename T = void> T set_prop_type(uint32_t value) {
		return ((T (*)(LuckyBoxPropDesc*, uint32_t))(Il2CppBase() + 0x4EA3EB8))(this, value);
	}
	template <typename T = uint32_t> T get_repe_indep_prob() {
		return ((T (*)(LuckyBoxPropDesc*))(Il2CppBase() + 0x4EA3EC0))(this);
	}
	template <typename T = void> T set_repe_indep_prob(uint32_t value) {
		return ((T (*)(LuckyBoxPropDesc*, uint32_t))(Il2CppBase() + 0x4EA3EC8))(this, value);
	}
	template <typename T = uint32_t> T get_prop_color() {
		return ((T (*)(LuckyBoxPropDesc*))(Il2CppBase() + 0x4EA3ED0))(this);
	}
	template <typename T = void> T set_prop_color(uint32_t value) {
		return ((T (*)(LuckyBoxPropDesc*, uint32_t))(Il2CppBase() + 0x4EA3ED8))(this, value);
	}
	template <typename T = uint32_t> T get_prop_prob() {
		return ((T (*)(LuckyBoxPropDesc*))(Il2CppBase() + 0x4EA3EE0))(this);
	}
	template <typename T = void> T set_prop_prob(uint32_t value) {
		return ((T (*)(LuckyBoxPropDesc*, uint32_t))(Il2CppBase() + 0x4EA3EE8))(this, value);
	}
	template <typename T = int32_t> T get_durable() {
		return ((T (*)(LuckyBoxPropDesc*))(Il2CppBase() + 0x4EA3EF0))(this);
	}
	template <typename T = void> T set_durable(int32_t value) {
		return ((T (*)(LuckyBoxPropDesc*, int32_t))(Il2CppBase() + 0x4EA3EF8))(this, value);
	}
	template <typename T = uint32_t> T get_min_drop_num() {
		return ((T (*)(LuckyBoxPropDesc*))(Il2CppBase() + 0x4EA3F00))(this);
	}
	template <typename T = void> T set_min_drop_num(uint32_t value) {
		return ((T (*)(LuckyBoxPropDesc*, uint32_t))(Il2CppBase() + 0x4EA3F08))(this, value);
	}
	template <typename T = uint32_t> T get_max_drop_num() {
		return ((T (*)(LuckyBoxPropDesc*))(Il2CppBase() + 0x4EA3F10))(this);
	}
	template <typename T = void> T set_max_drop_num(uint32_t value) {
		return ((T (*)(LuckyBoxPropDesc*, uint32_t))(Il2CppBase() + 0x4EA3F18))(this, value);
	}
	template <typename T = uint32_t> T get_restore_flag() {
		return ((T (*)(LuckyBoxPropDesc*))(Il2CppBase() + 0x4EA3F20))(this);
	}
	template <typename T = void> T set_restore_flag(uint32_t value) {
		return ((T (*)(LuckyBoxPropDesc*, uint32_t))(Il2CppBase() + 0x4EA3F28))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_priv_condition_str() {
		return ((T (*)(LuckyBoxPropDesc*))(Il2CppBase() + 0x4EA3F30))(this);
	}
	template <typename T = void> T set_priv_condition_str(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(LuckyBoxPropDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA3F38))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_priv_condition_num_list() {
		return ((T (*)(LuckyBoxPropDesc*))(Il2CppBase() + 0x4EA3F40))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_priv_inc_str() {
		return ((T (*)(LuckyBoxPropDesc*))(Il2CppBase() + 0x4EA3F48))(this);
	}
	template <typename T = void> T set_priv_inc_str(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(LuckyBoxPropDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA3F50))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_priv_inc_num_list() {
		return ((T (*)(LuckyBoxPropDesc*))(Il2CppBase() + 0x4EA3F58))(this);
	}
	template <typename T = float> T get_show_prob_value() {
		return ((T (*)(LuckyBoxPropDesc*))(Il2CppBase() + 0x4EA3F60))(this);
	}
	template <typename T = void> T set_show_prob_value(float value) {
		return ((T (*)(LuckyBoxPropDesc*, float))(Il2CppBase() + 0x4EA3F68))(this, value);
	}
	template <typename T = uint32_t> T get_hit_order() {
		return ((T (*)(LuckyBoxPropDesc*))(Il2CppBase() + 0x4EA3F70))(this);
	}
	template <typename T = void> T set_hit_order(uint32_t value) {
		return ((T (*)(LuckyBoxPropDesc*, uint32_t))(Il2CppBase() + 0x4EA3F78))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(LuckyBoxPropDesc*, bool))(Il2CppBase() + 0x4EA3F80))(this, createIfMissing);
	}

};

}
