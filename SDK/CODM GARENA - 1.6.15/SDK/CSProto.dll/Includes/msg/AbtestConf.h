#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class AbtestConf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "AbtestConf"));
	}

	template <typename T = bool> T& _enable_abtest() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _abtest_group_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& _abtest_ratio() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& _be_abtest_segment() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _abtest_cond_start_time() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _abtest_cond_stat_duration() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _abtest_cond_logic_op() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& _abtest_effect_duration() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _abtest_recomm_cond() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& _abtest_layer() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint32_t> T& _abtest_rejudge() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint32_t> T& _conf_start_time() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& _random_by_login() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _hash_seed() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uint32_t> T& _abtest_group_num() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint32_t> T& _abtest_task_index() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = bool> T get_enable_abtest() {
		return ((T (*)(AbtestConf*))(Il2CppBase() + 0x510A580))(this);
	}
	template <typename T = void> T set_enable_abtest(bool value) {
		return ((T (*)(AbtestConf*, bool))(Il2CppBase() + 0x510A588))(this, value);
	}
	template <typename T = uint32_t> T get_abtest_group_id() {
		return ((T (*)(AbtestConf*))(Il2CppBase() + 0x510A590))(this);
	}
	template <typename T = void> T set_abtest_group_id(uint32_t value) {
		return ((T (*)(AbtestConf*, uint32_t))(Il2CppBase() + 0x510A598))(this, value);
	}
	template <typename T = float> T get_abtest_ratio() {
		return ((T (*)(AbtestConf*))(Il2CppBase() + 0x510A5A0))(this);
	}
	template <typename T = void> T set_abtest_ratio(float value) {
		return ((T (*)(AbtestConf*, float))(Il2CppBase() + 0x510A5A8))(this, value);
	}
	template <typename T = bool> T get_be_abtest_segment() {
		return ((T (*)(AbtestConf*))(Il2CppBase() + 0x510A5B0))(this);
	}
	template <typename T = void> T set_be_abtest_segment(bool value) {
		return ((T (*)(AbtestConf*, bool))(Il2CppBase() + 0x510A5B8))(this, value);
	}
	template <typename T = uint32_t> T get_abtest_cond_start_time() {
		return ((T (*)(AbtestConf*))(Il2CppBase() + 0x510A5C0))(this);
	}
	template <typename T = void> T set_abtest_cond_start_time(uint32_t value) {
		return ((T (*)(AbtestConf*, uint32_t))(Il2CppBase() + 0x510A5C8))(this, value);
	}
	template <typename T = uint32_t> T get_abtest_cond_stat_duration() {
		return ((T (*)(AbtestConf*))(Il2CppBase() + 0x510A5D0))(this);
	}
	template <typename T = void> T set_abtest_cond_stat_duration(uint32_t value) {
		return ((T (*)(AbtestConf*, uint32_t))(Il2CppBase() + 0x510A5D8))(this, value);
	}
	template <typename T = uint32_t> T get_abtest_cond_logic_op() {
		return ((T (*)(AbtestConf*))(Il2CppBase() + 0x510A5E0))(this);
	}
	template <typename T = void> T set_abtest_cond_logic_op(uint32_t value) {
		return ((T (*)(AbtestConf*, uint32_t))(Il2CppBase() + 0x510A5E8))(this, value);
	}
	template <typename T = uint32_t> T get_abtest_effect_duration() {
		return ((T (*)(AbtestConf*))(Il2CppBase() + 0x510A5F0))(this);
	}
	template <typename T = void> T set_abtest_effect_duration(uint32_t value) {
		return ((T (*)(AbtestConf*, uint32_t))(Il2CppBase() + 0x510A5F8))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_abtest_recomm_cond() {
		return ((T (*)(AbtestConf*))(Il2CppBase() + 0x510A600))(this);
	}
	template <typename T = uint32_t> T get_abtest_layer() {
		return ((T (*)(AbtestConf*))(Il2CppBase() + 0x510A608))(this);
	}
	template <typename T = void> T set_abtest_layer(uint32_t value) {
		return ((T (*)(AbtestConf*, uint32_t))(Il2CppBase() + 0x510A610))(this, value);
	}
	template <typename T = uint32_t> T get_abtest_rejudge() {
		return ((T (*)(AbtestConf*))(Il2CppBase() + 0x510A618))(this);
	}
	template <typename T = void> T set_abtest_rejudge(uint32_t value) {
		return ((T (*)(AbtestConf*, uint32_t))(Il2CppBase() + 0x510A620))(this, value);
	}
	template <typename T = uint32_t> T get_conf_start_time() {
		return ((T (*)(AbtestConf*))(Il2CppBase() + 0x510A628))(this);
	}
	template <typename T = void> T set_conf_start_time(uint32_t value) {
		return ((T (*)(AbtestConf*, uint32_t))(Il2CppBase() + 0x510A630))(this, value);
	}
	template <typename T = bool> T get_random_by_login() {
		return ((T (*)(AbtestConf*))(Il2CppBase() + 0x510A638))(this);
	}
	template <typename T = void> T set_random_by_login(bool value) {
		return ((T (*)(AbtestConf*, bool))(Il2CppBase() + 0x510A640))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_hash_seed() {
		return ((T (*)(AbtestConf*))(Il2CppBase() + 0x510A648))(this);
	}
	template <typename T = void> T set_hash_seed(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(AbtestConf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510A650))(this, value);
	}
	template <typename T = uint32_t> T get_abtest_group_num() {
		return ((T (*)(AbtestConf*))(Il2CppBase() + 0x510A658))(this);
	}
	template <typename T = void> T set_abtest_group_num(uint32_t value) {
		return ((T (*)(AbtestConf*, uint32_t))(Il2CppBase() + 0x510A660))(this, value);
	}
	template <typename T = uint32_t> T get_abtest_task_index() {
		return ((T (*)(AbtestConf*))(Il2CppBase() + 0x510A668))(this);
	}
	template <typename T = void> T set_abtest_task_index(uint32_t value) {
		return ((T (*)(AbtestConf*, uint32_t))(Il2CppBase() + 0x510A670))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(AbtestConf*, bool))(Il2CppBase() + 0x510A678))(this, createIfMissing);
	}

};

}
