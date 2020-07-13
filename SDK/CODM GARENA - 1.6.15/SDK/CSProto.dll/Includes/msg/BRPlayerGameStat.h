#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class BRPlayerGameStat
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "BRPlayerGameStat"));
	}

	template <typename T = uint32_t> T& _br_group_team_type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _br_game_mode() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _br_game_play_count() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _br_eventual_win_count() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _br_first_ten_count() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _br_total_kill_count() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _br_total_bekill_count() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& _br_total_head_kill_count() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint64_t> T& _br_total_hit_count() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint64_t> T& _br_total_damage() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint32_t> T& _br_total_live_time() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& _br_total_walk_distance() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uint32_t> T& _br_total_swim_distance() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint32_t> T& _br_total_ship_distance() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uint32_t> T& _br_max_kill_count() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint32_t> T& _br_max_head_kill_count() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uint32_t> T& _br_max_live_time() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uint32_t> T& _br_max_kill_distance() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& _br_total_brief_game_rate() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& _br_total_survive_game_rate() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& _br_total_battle_game_rate() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& _br_total_assist_game_rate() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& _br_total_eventual_win_game_rate() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& _br_first_ten_count_rate() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& _br_total_pickup_item_rate() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uint32_t> T& _br_total_pickup_item_value() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uint32_t> T& _br_total_times_save() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uint32_t> T& _br_total_teamrank_score() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uint32_t> T& _br_total_ladder_score() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uint32_t> T& _br_total_ladder_hidden_score() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uint32_t> T& _br_total_healing_count() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uint32_t> T& _br_game_module() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uint64_t> T& _max_damage() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uint32_t> T& _max_continuous_kill_count() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uint32_t> T& _max_score() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uint32_t> T& _max_assist() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uint32_t> T& _br_total_mvp_num() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uint64_t> T& _br_total_fire_count() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uint32_t> T& _season_id() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uint32_t> T& _times_br_rank_win_streak() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uint32_t> T& _times_br_max_rank_win_streak() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uint32_t> T& _br_total_assist() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC0);
	}

	template <typename T = uint32_t> T get_br_group_team_type() {
		return ((T (*)(BRPlayerGameStat*))(Il2CppBase() + 0x510E2F4))(this);
	}
	template <typename T = void> T set_br_group_team_type(uint32_t value) {
		return ((T (*)(BRPlayerGameStat*, uint32_t))(Il2CppBase() + 0x510E2FC))(this, value);
	}
	template <typename T = uint32_t> T get_br_game_mode() {
		return ((T (*)(BRPlayerGameStat*))(Il2CppBase() + 0x510E304))(this);
	}
	template <typename T = void> T set_br_game_mode(uint32_t value) {
		return ((T (*)(BRPlayerGameStat*, uint32_t))(Il2CppBase() + 0x510E30C))(this, value);
	}
	template <typename T = uint32_t> T get_br_game_play_count() {
		return ((T (*)(BRPlayerGameStat*))(Il2CppBase() + 0x510E314))(this);
	}
	template <typename T = void> T set_br_game_play_count(uint32_t value) {
		return ((T (*)(BRPlayerGameStat*, uint32_t))(Il2CppBase() + 0x510E31C))(this, value);
	}
	template <typename T = uint32_t> T get_br_eventual_win_count() {
		return ((T (*)(BRPlayerGameStat*))(Il2CppBase() + 0x510E324))(this);
	}
	template <typename T = void> T set_br_eventual_win_count(uint32_t value) {
		return ((T (*)(BRPlayerGameStat*, uint32_t))(Il2CppBase() + 0x510E32C))(this, value);
	}
	template <typename T = uint32_t> T get_br_first_ten_count() {
		return ((T (*)(BRPlayerGameStat*))(Il2CppBase() + 0x510E334))(this);
	}
	template <typename T = void> T set_br_first_ten_count(uint32_t value) {
		return ((T (*)(BRPlayerGameStat*, uint32_t))(Il2CppBase() + 0x510E33C))(this, value);
	}
	template <typename T = uint32_t> T get_br_total_kill_count() {
		return ((T (*)(BRPlayerGameStat*))(Il2CppBase() + 0x510E344))(this);
	}
	template <typename T = void> T set_br_total_kill_count(uint32_t value) {
		return ((T (*)(BRPlayerGameStat*, uint32_t))(Il2CppBase() + 0x510E34C))(this, value);
	}
	template <typename T = uint32_t> T get_br_total_bekill_count() {
		return ((T (*)(BRPlayerGameStat*))(Il2CppBase() + 0x510E354))(this);
	}
	template <typename T = void> T set_br_total_bekill_count(uint32_t value) {
		return ((T (*)(BRPlayerGameStat*, uint32_t))(Il2CppBase() + 0x510E35C))(this, value);
	}
	template <typename T = uint32_t> T get_br_total_head_kill_count() {
		return ((T (*)(BRPlayerGameStat*))(Il2CppBase() + 0x510E364))(this);
	}
	template <typename T = void> T set_br_total_head_kill_count(uint32_t value) {
		return ((T (*)(BRPlayerGameStat*, uint32_t))(Il2CppBase() + 0x510E36C))(this, value);
	}
	template <typename T = uint64_t> T get_br_total_hit_count() {
		return ((T (*)(BRPlayerGameStat*))(Il2CppBase() + 0x510E374))(this);
	}
	template <typename T = void> T set_br_total_hit_count(uint64_t value) {
		return ((T (*)(BRPlayerGameStat*, uint64_t))(Il2CppBase() + 0x510E37C))(this, value);
	}
	template <typename T = uint64_t> T get_br_total_damage() {
		return ((T (*)(BRPlayerGameStat*))(Il2CppBase() + 0x510E38C))(this);
	}
	template <typename T = void> T set_br_total_damage(uint64_t value) {
		return ((T (*)(BRPlayerGameStat*, uint64_t))(Il2CppBase() + 0x510E394))(this, value);
	}
	template <typename T = uint32_t> T get_br_total_live_time() {
		return ((T (*)(BRPlayerGameStat*))(Il2CppBase() + 0x510E3A4))(this);
	}
	template <typename T = void> T set_br_total_live_time(uint32_t value) {
		return ((T (*)(BRPlayerGameStat*, uint32_t))(Il2CppBase() + 0x510E3AC))(this, value);
	}
	template <typename T = uint32_t> T get_br_total_walk_distance() {
		return ((T (*)(BRPlayerGameStat*))(Il2CppBase() + 0x510E3B4))(this);
	}
	template <typename T = void> T set_br_total_walk_distance(uint32_t value) {
		return ((T (*)(BRPlayerGameStat*, uint32_t))(Il2CppBase() + 0x510E3BC))(this, value);
	}
	template <typename T = uint32_t> T get_br_total_swim_distance() {
		return ((T (*)(BRPlayerGameStat*))(Il2CppBase() + 0x510E3C4))(this);
	}
	template <typename T = void> T set_br_total_swim_distance(uint32_t value) {
		return ((T (*)(BRPlayerGameStat*, uint32_t))(Il2CppBase() + 0x510E3CC))(this, value);
	}
	template <typename T = uint32_t> T get_br_total_ship_distance() {
		return ((T (*)(BRPlayerGameStat*))(Il2CppBase() + 0x510E3D4))(this);
	}
	template <typename T = void> T set_br_total_ship_distance(uint32_t value) {
		return ((T (*)(BRPlayerGameStat*, uint32_t))(Il2CppBase() + 0x510E3DC))(this, value);
	}
	template <typename T = uint32_t> T get_br_max_kill_count() {
		return ((T (*)(BRPlayerGameStat*))(Il2CppBase() + 0x510E3E4))(this);
	}
	template <typename T = void> T set_br_max_kill_count(uint32_t value) {
		return ((T (*)(BRPlayerGameStat*, uint32_t))(Il2CppBase() + 0x510E3EC))(this, value);
	}
	template <typename T = uint32_t> T get_br_max_head_kill_count() {
		return ((T (*)(BRPlayerGameStat*))(Il2CppBase() + 0x510E3F4))(this);
	}
	template <typename T = void> T set_br_max_head_kill_count(uint32_t value) {
		return ((T (*)(BRPlayerGameStat*, uint32_t))(Il2CppBase() + 0x510E3FC))(this, value);
	}
	template <typename T = uint32_t> T get_br_max_live_time() {
		return ((T (*)(BRPlayerGameStat*))(Il2CppBase() + 0x510E404))(this);
	}
	template <typename T = void> T set_br_max_live_time(uint32_t value) {
		return ((T (*)(BRPlayerGameStat*, uint32_t))(Il2CppBase() + 0x510E40C))(this, value);
	}
	template <typename T = uint32_t> T get_br_max_kill_distance() {
		return ((T (*)(BRPlayerGameStat*))(Il2CppBase() + 0x510E414))(this);
	}
	template <typename T = void> T set_br_max_kill_distance(uint32_t value) {
		return ((T (*)(BRPlayerGameStat*, uint32_t))(Il2CppBase() + 0x510E41C))(this, value);
	}
	template <typename T = float> T get_br_total_brief_game_rate() {
		return ((T (*)(BRPlayerGameStat*))(Il2CppBase() + 0x510E424))(this);
	}
	template <typename T = void> T set_br_total_brief_game_rate(float value) {
		return ((T (*)(BRPlayerGameStat*, float))(Il2CppBase() + 0x510E42C))(this, value);
	}
	template <typename T = float> T get_br_total_survive_game_rate() {
		return ((T (*)(BRPlayerGameStat*))(Il2CppBase() + 0x510E434))(this);
	}
	template <typename T = void> T set_br_total_survive_game_rate(float value) {
		return ((T (*)(BRPlayerGameStat*, float))(Il2CppBase() + 0x510E43C))(this, value);
	}
	template <typename T = float> T get_br_total_battle_game_rate() {
		return ((T (*)(BRPlayerGameStat*))(Il2CppBase() + 0x510E444))(this);
	}
	template <typename T = void> T set_br_total_battle_game_rate(float value) {
		return ((T (*)(BRPlayerGameStat*, float))(Il2CppBase() + 0x510E44C))(this, value);
	}
	template <typename T = float> T get_br_total_assist_game_rate() {
		return ((T (*)(BRPlayerGameStat*))(Il2CppBase() + 0x510E454))(this);
	}
	template <typename T = void> T set_br_total_assist_game_rate(float value) {
		return ((T (*)(BRPlayerGameStat*, float))(Il2CppBase() + 0x510E45C))(this, value);
	}
	template <typename T = float> T get_br_total_eventual_win_game_rate() {
		return ((T (*)(BRPlayerGameStat*))(Il2CppBase() + 0x510E464))(this);
	}
	template <typename T = void> T set_br_total_eventual_win_game_rate(float value) {
		return ((T (*)(BRPlayerGameStat*, float))(Il2CppBase() + 0x510E46C))(this, value);
	}
	template <typename T = float> T get_br_first_ten_count_rate() {
		return ((T (*)(BRPlayerGameStat*))(Il2CppBase() + 0x510E474))(this);
	}
	template <typename T = void> T set_br_first_ten_count_rate(float value) {
		return ((T (*)(BRPlayerGameStat*, float))(Il2CppBase() + 0x510E47C))(this, value);
	}
	template <typename T = float> T get_br_total_pickup_item_rate() {
		return ((T (*)(BRPlayerGameStat*))(Il2CppBase() + 0x510E484))(this);
	}
	template <typename T = void> T set_br_total_pickup_item_rate(float value) {
		return ((T (*)(BRPlayerGameStat*, float))(Il2CppBase() + 0x510E48C))(this, value);
	}
	template <typename T = uint32_t> T get_br_total_pickup_item_value() {
		return ((T (*)(BRPlayerGameStat*))(Il2CppBase() + 0x510E494))(this);
	}
	template <typename T = void> T set_br_total_pickup_item_value(uint32_t value) {
		return ((T (*)(BRPlayerGameStat*, uint32_t))(Il2CppBase() + 0x510E49C))(this, value);
	}
	template <typename T = uint32_t> T get_br_total_times_save() {
		return ((T (*)(BRPlayerGameStat*))(Il2CppBase() + 0x510E4A4))(this);
	}
	template <typename T = void> T set_br_total_times_save(uint32_t value) {
		return ((T (*)(BRPlayerGameStat*, uint32_t))(Il2CppBase() + 0x510E4AC))(this, value);
	}
	template <typename T = uint32_t> T get_br_total_teamrank_score() {
		return ((T (*)(BRPlayerGameStat*))(Il2CppBase() + 0x510E4B4))(this);
	}
	template <typename T = void> T set_br_total_teamrank_score(uint32_t value) {
		return ((T (*)(BRPlayerGameStat*, uint32_t))(Il2CppBase() + 0x510E4BC))(this, value);
	}
	template <typename T = uint32_t> T get_br_total_ladder_score() {
		return ((T (*)(BRPlayerGameStat*))(Il2CppBase() + 0x510E4C4))(this);
	}
	template <typename T = void> T set_br_total_ladder_score(uint32_t value) {
		return ((T (*)(BRPlayerGameStat*, uint32_t))(Il2CppBase() + 0x510E4CC))(this, value);
	}
	template <typename T = uint32_t> T get_br_total_ladder_hidden_score() {
		return ((T (*)(BRPlayerGameStat*))(Il2CppBase() + 0x510E4D4))(this);
	}
	template <typename T = void> T set_br_total_ladder_hidden_score(uint32_t value) {
		return ((T (*)(BRPlayerGameStat*, uint32_t))(Il2CppBase() + 0x510E4DC))(this, value);
	}
	template <typename T = uint32_t> T get_br_total_healing_count() {
		return ((T (*)(BRPlayerGameStat*))(Il2CppBase() + 0x510E4E4))(this);
	}
	template <typename T = void> T set_br_total_healing_count(uint32_t value) {
		return ((T (*)(BRPlayerGameStat*, uint32_t))(Il2CppBase() + 0x510E4EC))(this, value);
	}
	template <typename T = uint32_t> T get_br_game_module() {
		return ((T (*)(BRPlayerGameStat*))(Il2CppBase() + 0x510E4F4))(this);
	}
	template <typename T = void> T set_br_game_module(uint32_t value) {
		return ((T (*)(BRPlayerGameStat*, uint32_t))(Il2CppBase() + 0x510E4FC))(this, value);
	}
	template <typename T = uint64_t> T get_max_damage() {
		return ((T (*)(BRPlayerGameStat*))(Il2CppBase() + 0x510E504))(this);
	}
	template <typename T = void> T set_max_damage(uint64_t value) {
		return ((T (*)(BRPlayerGameStat*, uint64_t))(Il2CppBase() + 0x510E50C))(this, value);
	}
	template <typename T = uint32_t> T get_max_continuous_kill_count() {
		return ((T (*)(BRPlayerGameStat*))(Il2CppBase() + 0x510E51C))(this);
	}
	template <typename T = void> T set_max_continuous_kill_count(uint32_t value) {
		return ((T (*)(BRPlayerGameStat*, uint32_t))(Il2CppBase() + 0x510E524))(this, value);
	}
	template <typename T = uint32_t> T get_max_score() {
		return ((T (*)(BRPlayerGameStat*))(Il2CppBase() + 0x510E52C))(this);
	}
	template <typename T = void> T set_max_score(uint32_t value) {
		return ((T (*)(BRPlayerGameStat*, uint32_t))(Il2CppBase() + 0x510E534))(this, value);
	}
	template <typename T = uint32_t> T get_max_assist() {
		return ((T (*)(BRPlayerGameStat*))(Il2CppBase() + 0x510E53C))(this);
	}
	template <typename T = void> T set_max_assist(uint32_t value) {
		return ((T (*)(BRPlayerGameStat*, uint32_t))(Il2CppBase() + 0x510E544))(this, value);
	}
	template <typename T = uint32_t> T get_br_total_mvp_num() {
		return ((T (*)(BRPlayerGameStat*))(Il2CppBase() + 0x510E54C))(this);
	}
	template <typename T = void> T set_br_total_mvp_num(uint32_t value) {
		return ((T (*)(BRPlayerGameStat*, uint32_t))(Il2CppBase() + 0x510E554))(this, value);
	}
	template <typename T = uint64_t> T get_br_total_fire_count() {
		return ((T (*)(BRPlayerGameStat*))(Il2CppBase() + 0x510E55C))(this);
	}
	template <typename T = void> T set_br_total_fire_count(uint64_t value) {
		return ((T (*)(BRPlayerGameStat*, uint64_t))(Il2CppBase() + 0x510E564))(this, value);
	}
	template <typename T = uint32_t> T get_season_id() {
		return ((T (*)(BRPlayerGameStat*))(Il2CppBase() + 0x510E574))(this);
	}
	template <typename T = void> T set_season_id(uint32_t value) {
		return ((T (*)(BRPlayerGameStat*, uint32_t))(Il2CppBase() + 0x510E57C))(this, value);
	}
	template <typename T = uint32_t> T get_times_br_rank_win_streak() {
		return ((T (*)(BRPlayerGameStat*))(Il2CppBase() + 0x510E584))(this);
	}
	template <typename T = void> T set_times_br_rank_win_streak(uint32_t value) {
		return ((T (*)(BRPlayerGameStat*, uint32_t))(Il2CppBase() + 0x510E58C))(this, value);
	}
	template <typename T = uint32_t> T get_times_br_max_rank_win_streak() {
		return ((T (*)(BRPlayerGameStat*))(Il2CppBase() + 0x510E594))(this);
	}
	template <typename T = void> T set_times_br_max_rank_win_streak(uint32_t value) {
		return ((T (*)(BRPlayerGameStat*, uint32_t))(Il2CppBase() + 0x510E59C))(this, value);
	}
	template <typename T = uint32_t> T get_br_total_assist() {
		return ((T (*)(BRPlayerGameStat*))(Il2CppBase() + 0x510E5A4))(this);
	}
	template <typename T = void> T set_br_total_assist(uint32_t value) {
		return ((T (*)(BRPlayerGameStat*, uint32_t))(Il2CppBase() + 0x510E5AC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(BRPlayerGameStat*, bool))(Il2CppBase() + 0x510E5B4))(this, createIfMissing);
	}

};

}
