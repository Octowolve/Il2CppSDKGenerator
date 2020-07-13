#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class BattlePassDb
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "BattlePassDb"));
	}

	template <typename T = int32_t> T& _season_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _level() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _exp() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _is_charge() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& _task_pr() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _free_levelup_task() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& _charge_levelup_task() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _bypass_week_task_count() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _bypass_week_task() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _bpweek_override_flag() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& _super_box_open_count() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _super_box_task() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& _update_flag() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _db_override_flag() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& _cur_week_id() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& _next_week_begin_tm() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& _last_week_stat() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _this_week_stat() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& _season_countdown_tm() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _discount_info() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& _preorder_info() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _exp_source() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& _bp_exp_item() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& _bp_buff_amend_cache() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = int32_t> T get_season_id() {
		return ((T (*)(BattlePassDb*))(Il2CppBase() + 0x510D044))(this);
	}
	template <typename T = void> T set_season_id(int32_t value) {
		return ((T (*)(BattlePassDb*, int32_t))(Il2CppBase() + 0x510D04C))(this, value);
	}
	template <typename T = int32_t> T get_level() {
		return ((T (*)(BattlePassDb*))(Il2CppBase() + 0x510D054))(this);
	}
	template <typename T = void> T set_level(int32_t value) {
		return ((T (*)(BattlePassDb*, int32_t))(Il2CppBase() + 0x510D05C))(this, value);
	}
	template <typename T = int32_t> T get_exp() {
		return ((T (*)(BattlePassDb*))(Il2CppBase() + 0x510D064))(this);
	}
	template <typename T = void> T set_exp(int32_t value) {
		return ((T (*)(BattlePassDb*, int32_t))(Il2CppBase() + 0x510D06C))(this, value);
	}
	template <typename T = int32_t> T get_is_charge() {
		return ((T (*)(BattlePassDb*))(Il2CppBase() + 0x510D074))(this);
	}
	template <typename T = void> T set_is_charge(int32_t value) {
		return ((T (*)(BattlePassDb*, int32_t))(Il2CppBase() + 0x510D07C))(this, value);
	}
	template <typename T = uintptr_t> T get_task_pr() {
		return ((T (*)(BattlePassDb*))(Il2CppBase() + 0x510D084))(this);
	}
	template <typename T = void> T set_task_pr(uintptr_t value) {
		return ((T (*)(BattlePassDb*, uintptr_t))(Il2CppBase() + 0x510D08C))(this, value);
	}
	template <typename T = uintptr_t> T get_free_levelup_task() {
		return ((T (*)(BattlePassDb*))(Il2CppBase() + 0x510D094))(this);
	}
	template <typename T = void> T set_free_levelup_task(uintptr_t value) {
		return ((T (*)(BattlePassDb*, uintptr_t))(Il2CppBase() + 0x510D09C))(this, value);
	}
	template <typename T = uintptr_t> T get_charge_levelup_task() {
		return ((T (*)(BattlePassDb*))(Il2CppBase() + 0x510D0A4))(this);
	}
	template <typename T = void> T set_charge_levelup_task(uintptr_t value) {
		return ((T (*)(BattlePassDb*, uintptr_t))(Il2CppBase() + 0x510D0AC))(this, value);
	}
	template <typename T = int32_t> T get_bypass_week_task_count() {
		return ((T (*)(BattlePassDb*))(Il2CppBase() + 0x510D0B4))(this);
	}
	template <typename T = void> T set_bypass_week_task_count(int32_t value) {
		return ((T (*)(BattlePassDb*, int32_t))(Il2CppBase() + 0x510D0BC))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_bypass_week_task() {
		return ((T (*)(BattlePassDb*))(Il2CppBase() + 0x510D0C4))(this);
	}
	template <typename T = uintptr_t> T get_bpweek_override_flag() {
		return ((T (*)(BattlePassDb*))(Il2CppBase() + 0x510D0CC))(this);
	}
	template <typename T = void> T set_bpweek_override_flag(uintptr_t value) {
		return ((T (*)(BattlePassDb*, uintptr_t))(Il2CppBase() + 0x510D0D4))(this, value);
	}
	template <typename T = int32_t> T get_super_box_open_count() {
		return ((T (*)(BattlePassDb*))(Il2CppBase() + 0x510D0DC))(this);
	}
	template <typename T = void> T set_super_box_open_count(int32_t value) {
		return ((T (*)(BattlePassDb*, int32_t))(Il2CppBase() + 0x510D0E4))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_super_box_task() {
		return ((T (*)(BattlePassDb*))(Il2CppBase() + 0x510D0EC))(this);
	}
	template <typename T = uintptr_t> T get_update_flag() {
		return ((T (*)(BattlePassDb*))(Il2CppBase() + 0x510D0F4))(this);
	}
	template <typename T = void> T set_update_flag(uintptr_t value) {
		return ((T (*)(BattlePassDb*, uintptr_t))(Il2CppBase() + 0x510D0FC))(this, value);
	}
	template <typename T = uintptr_t> T get_db_override_flag() {
		return ((T (*)(BattlePassDb*))(Il2CppBase() + 0x510D104))(this);
	}
	template <typename T = void> T set_db_override_flag(uintptr_t value) {
		return ((T (*)(BattlePassDb*, uintptr_t))(Il2CppBase() + 0x510D10C))(this, value);
	}
	template <typename T = int32_t> T get_cur_week_id() {
		return ((T (*)(BattlePassDb*))(Il2CppBase() + 0x510D114))(this);
	}
	template <typename T = void> T set_cur_week_id(int32_t value) {
		return ((T (*)(BattlePassDb*, int32_t))(Il2CppBase() + 0x510D11C))(this, value);
	}
	template <typename T = int32_t> T get_next_week_begin_tm() {
		return ((T (*)(BattlePassDb*))(Il2CppBase() + 0x510D124))(this);
	}
	template <typename T = void> T set_next_week_begin_tm(int32_t value) {
		return ((T (*)(BattlePassDb*, int32_t))(Il2CppBase() + 0x510D12C))(this, value);
	}
	template <typename T = uintptr_t> T get_last_week_stat() {
		return ((T (*)(BattlePassDb*))(Il2CppBase() + 0x510D134))(this);
	}
	template <typename T = void> T set_last_week_stat(uintptr_t value) {
		return ((T (*)(BattlePassDb*, uintptr_t))(Il2CppBase() + 0x510D13C))(this, value);
	}
	template <typename T = uintptr_t> T get_this_week_stat() {
		return ((T (*)(BattlePassDb*))(Il2CppBase() + 0x510D144))(this);
	}
	template <typename T = void> T set_this_week_stat(uintptr_t value) {
		return ((T (*)(BattlePassDb*, uintptr_t))(Il2CppBase() + 0x510D14C))(this, value);
	}
	template <typename T = int32_t> T get_season_countdown_tm() {
		return ((T (*)(BattlePassDb*))(Il2CppBase() + 0x510D154))(this);
	}
	template <typename T = void> T set_season_countdown_tm(int32_t value) {
		return ((T (*)(BattlePassDb*, int32_t))(Il2CppBase() + 0x510D15C))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_discount_info() {
		return ((T (*)(BattlePassDb*))(Il2CppBase() + 0x510D164))(this);
	}
	template <typename T = uintptr_t> T get_preorder_info() {
		return ((T (*)(BattlePassDb*))(Il2CppBase() + 0x510D16C))(this);
	}
	template <typename T = void> T set_preorder_info(uintptr_t value) {
		return ((T (*)(BattlePassDb*, uintptr_t))(Il2CppBase() + 0x510D174))(this, value);
	}
	template <typename T = uintptr_t> T get_exp_source() {
		return ((T (*)(BattlePassDb*))(Il2CppBase() + 0x510D17C))(this);
	}
	template <typename T = void> T set_exp_source(uintptr_t value) {
		return ((T (*)(BattlePassDb*, uintptr_t))(Il2CppBase() + 0x510D184))(this, value);
	}
	template <typename T = uintptr_t> T get_bp_exp_item() {
		return ((T (*)(BattlePassDb*))(Il2CppBase() + 0x510D18C))(this);
	}
	template <typename T = void> T set_bp_exp_item(uintptr_t value) {
		return ((T (*)(BattlePassDb*, uintptr_t))(Il2CppBase() + 0x510D194))(this, value);
	}
	template <typename T = int32_t> T get_bp_buff_amend_cache() {
		return ((T (*)(BattlePassDb*))(Il2CppBase() + 0x510D19C))(this);
	}
	template <typename T = void> T set_bp_buff_amend_cache(int32_t value) {
		return ((T (*)(BattlePassDb*, int32_t))(Il2CppBase() + 0x510D1A4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(BattlePassDb*, bool))(Il2CppBase() + 0x510D1AC))(this, createIfMissing);
	}

};

}
