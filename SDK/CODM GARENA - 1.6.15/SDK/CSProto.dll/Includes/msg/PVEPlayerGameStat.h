#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PVEPlayerGameStat
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PVEPlayerGameStat"));
	}

	template <typename T = uint32_t> T& _pve_game_dungeon() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _pve_game_difficulty() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _pve_game_play_count() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _pve_total_kill_count() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _pve_total_boss_kill_count() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _pve_total_bekill_count() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _pve_total_revive_count() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& _pve_total_fire_count() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& _pve_total_hit_count() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& _pve_total_weakpoint_hit_count() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint32_t> T& _pve_total_head_kill_count() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint32_t> T& _pve_total_mvp_count() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uint32_t> T& _pve_total_passoutpost_count() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& _pve_total_passoutpost_time_cost() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uint64_t> T& _pve_total_damage() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& _pve_max_hit_rate() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& _pve_max_weekpoint_hit_rate() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uint32_t> T& _pve_min_dead_count() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uint32_t> T& _pve_min_passoutpost_time_cost() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uint64_t> T& _pve_max_damage() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& _pve_total_game_rate() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& _pve_avg_dead_count_rate() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& _pve_hit_count_rate() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& _pve_weak_point_hit_count_rate() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& _pve_avg_passoutpost_time_cost_rate() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& _pve_passpost_scale_rate() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uint32_t> T& _pve_total_win_count() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uint32_t> T& _pve_max_kill_count() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uint32_t> T& _pve_max_head_kill_count() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uint32_t> T& _pve_first_passoutpost_timestamp() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uint32_t> T& _max_round() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uint32_t> T& _max_score() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uint32_t> T& _avg_round_time() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uint32_t> T& _times_round() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = float> T& _pass_round_rate() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uint64_t> T& _total_game_time() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uint32_t> T& _game_mode() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uint32_t> T& _avg_pass_round() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uint32_t> T& _max_continuous_kill_count() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uint32_t> T& _total_score() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& _boss_kill_min_time_record() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xBC);
	}

	template <typename T = uint32_t> T get_pve_game_dungeon() {
		return ((T (*)(PVEPlayerGameStat*))(Il2CppBase() + 0x506F9AC))(this);
	}
	template <typename T = void> T set_pve_game_dungeon(uint32_t value) {
		return ((T (*)(PVEPlayerGameStat*, uint32_t))(Il2CppBase() + 0x506F9B4))(this, value);
	}
	template <typename T = uint32_t> T get_pve_game_difficulty() {
		return ((T (*)(PVEPlayerGameStat*))(Il2CppBase() + 0x506F9BC))(this);
	}
	template <typename T = void> T set_pve_game_difficulty(uint32_t value) {
		return ((T (*)(PVEPlayerGameStat*, uint32_t))(Il2CppBase() + 0x506F9C4))(this, value);
	}
	template <typename T = uint32_t> T get_pve_game_play_count() {
		return ((T (*)(PVEPlayerGameStat*))(Il2CppBase() + 0x506F9CC))(this);
	}
	template <typename T = void> T set_pve_game_play_count(uint32_t value) {
		return ((T (*)(PVEPlayerGameStat*, uint32_t))(Il2CppBase() + 0x506F9D4))(this, value);
	}
	template <typename T = uint32_t> T get_pve_total_kill_count() {
		return ((T (*)(PVEPlayerGameStat*))(Il2CppBase() + 0x506F9DC))(this);
	}
	template <typename T = void> T set_pve_total_kill_count(uint32_t value) {
		return ((T (*)(PVEPlayerGameStat*, uint32_t))(Il2CppBase() + 0x506F9E4))(this, value);
	}
	template <typename T = uint32_t> T get_pve_total_boss_kill_count() {
		return ((T (*)(PVEPlayerGameStat*))(Il2CppBase() + 0x506F9EC))(this);
	}
	template <typename T = void> T set_pve_total_boss_kill_count(uint32_t value) {
		return ((T (*)(PVEPlayerGameStat*, uint32_t))(Il2CppBase() + 0x506F9F4))(this, value);
	}
	template <typename T = uint32_t> T get_pve_total_bekill_count() {
		return ((T (*)(PVEPlayerGameStat*))(Il2CppBase() + 0x506F9FC))(this);
	}
	template <typename T = void> T set_pve_total_bekill_count(uint32_t value) {
		return ((T (*)(PVEPlayerGameStat*, uint32_t))(Il2CppBase() + 0x506FA04))(this, value);
	}
	template <typename T = uint32_t> T get_pve_total_revive_count() {
		return ((T (*)(PVEPlayerGameStat*))(Il2CppBase() + 0x506FA0C))(this);
	}
	template <typename T = void> T set_pve_total_revive_count(uint32_t value) {
		return ((T (*)(PVEPlayerGameStat*, uint32_t))(Il2CppBase() + 0x506FA14))(this, value);
	}
	template <typename T = uint32_t> T get_pve_total_fire_count() {
		return ((T (*)(PVEPlayerGameStat*))(Il2CppBase() + 0x506FA1C))(this);
	}
	template <typename T = void> T set_pve_total_fire_count(uint32_t value) {
		return ((T (*)(PVEPlayerGameStat*, uint32_t))(Il2CppBase() + 0x506FA24))(this, value);
	}
	template <typename T = uint32_t> T get_pve_total_hit_count() {
		return ((T (*)(PVEPlayerGameStat*))(Il2CppBase() + 0x506FA2C))(this);
	}
	template <typename T = void> T set_pve_total_hit_count(uint32_t value) {
		return ((T (*)(PVEPlayerGameStat*, uint32_t))(Il2CppBase() + 0x506FA34))(this, value);
	}
	template <typename T = uint32_t> T get_pve_total_weakpoint_hit_count() {
		return ((T (*)(PVEPlayerGameStat*))(Il2CppBase() + 0x506FA3C))(this);
	}
	template <typename T = void> T set_pve_total_weakpoint_hit_count(uint32_t value) {
		return ((T (*)(PVEPlayerGameStat*, uint32_t))(Il2CppBase() + 0x506FA44))(this, value);
	}
	template <typename T = uint32_t> T get_pve_total_head_kill_count() {
		return ((T (*)(PVEPlayerGameStat*))(Il2CppBase() + 0x506FA4C))(this);
	}
	template <typename T = void> T set_pve_total_head_kill_count(uint32_t value) {
		return ((T (*)(PVEPlayerGameStat*, uint32_t))(Il2CppBase() + 0x506FA54))(this, value);
	}
	template <typename T = uint32_t> T get_pve_total_mvp_count() {
		return ((T (*)(PVEPlayerGameStat*))(Il2CppBase() + 0x506FA5C))(this);
	}
	template <typename T = void> T set_pve_total_mvp_count(uint32_t value) {
		return ((T (*)(PVEPlayerGameStat*, uint32_t))(Il2CppBase() + 0x506FA64))(this, value);
	}
	template <typename T = uint32_t> T get_pve_total_passoutpost_count() {
		return ((T (*)(PVEPlayerGameStat*))(Il2CppBase() + 0x506FA6C))(this);
	}
	template <typename T = void> T set_pve_total_passoutpost_count(uint32_t value) {
		return ((T (*)(PVEPlayerGameStat*, uint32_t))(Il2CppBase() + 0x506FA74))(this, value);
	}
	template <typename T = uint32_t> T get_pve_total_passoutpost_time_cost() {
		return ((T (*)(PVEPlayerGameStat*))(Il2CppBase() + 0x506FA7C))(this);
	}
	template <typename T = void> T set_pve_total_passoutpost_time_cost(uint32_t value) {
		return ((T (*)(PVEPlayerGameStat*, uint32_t))(Il2CppBase() + 0x506FA84))(this, value);
	}
	template <typename T = uint64_t> T get_pve_total_damage() {
		return ((T (*)(PVEPlayerGameStat*))(Il2CppBase() + 0x506FA8C))(this);
	}
	template <typename T = void> T set_pve_total_damage(uint64_t value) {
		return ((T (*)(PVEPlayerGameStat*, uint64_t))(Il2CppBase() + 0x506FA94))(this, value);
	}
	template <typename T = float> T get_pve_max_hit_rate() {
		return ((T (*)(PVEPlayerGameStat*))(Il2CppBase() + 0x506FAA4))(this);
	}
	template <typename T = void> T set_pve_max_hit_rate(float value) {
		return ((T (*)(PVEPlayerGameStat*, float))(Il2CppBase() + 0x506FAAC))(this, value);
	}
	template <typename T = float> T get_pve_max_weekpoint_hit_rate() {
		return ((T (*)(PVEPlayerGameStat*))(Il2CppBase() + 0x506FAB4))(this);
	}
	template <typename T = void> T set_pve_max_weekpoint_hit_rate(float value) {
		return ((T (*)(PVEPlayerGameStat*, float))(Il2CppBase() + 0x506FABC))(this, value);
	}
	template <typename T = uint32_t> T get_pve_min_dead_count() {
		return ((T (*)(PVEPlayerGameStat*))(Il2CppBase() + 0x506FAC4))(this);
	}
	template <typename T = void> T set_pve_min_dead_count(uint32_t value) {
		return ((T (*)(PVEPlayerGameStat*, uint32_t))(Il2CppBase() + 0x506FACC))(this, value);
	}
	template <typename T = uint32_t> T get_pve_min_passoutpost_time_cost() {
		return ((T (*)(PVEPlayerGameStat*))(Il2CppBase() + 0x506FAD4))(this);
	}
	template <typename T = void> T set_pve_min_passoutpost_time_cost(uint32_t value) {
		return ((T (*)(PVEPlayerGameStat*, uint32_t))(Il2CppBase() + 0x506FADC))(this, value);
	}
	template <typename T = uint64_t> T get_pve_max_damage() {
		return ((T (*)(PVEPlayerGameStat*))(Il2CppBase() + 0x506FAE4))(this);
	}
	template <typename T = void> T set_pve_max_damage(uint64_t value) {
		return ((T (*)(PVEPlayerGameStat*, uint64_t))(Il2CppBase() + 0x506FAEC))(this, value);
	}
	template <typename T = float> T get_pve_total_game_rate() {
		return ((T (*)(PVEPlayerGameStat*))(Il2CppBase() + 0x506FAFC))(this);
	}
	template <typename T = void> T set_pve_total_game_rate(float value) {
		return ((T (*)(PVEPlayerGameStat*, float))(Il2CppBase() + 0x506FB04))(this, value);
	}
	template <typename T = float> T get_pve_avg_dead_count_rate() {
		return ((T (*)(PVEPlayerGameStat*))(Il2CppBase() + 0x506FB0C))(this);
	}
	template <typename T = void> T set_pve_avg_dead_count_rate(float value) {
		return ((T (*)(PVEPlayerGameStat*, float))(Il2CppBase() + 0x506FB14))(this, value);
	}
	template <typename T = float> T get_pve_hit_count_rate() {
		return ((T (*)(PVEPlayerGameStat*))(Il2CppBase() + 0x506FB1C))(this);
	}
	template <typename T = void> T set_pve_hit_count_rate(float value) {
		return ((T (*)(PVEPlayerGameStat*, float))(Il2CppBase() + 0x506FB24))(this, value);
	}
	template <typename T = float> T get_pve_weak_point_hit_count_rate() {
		return ((T (*)(PVEPlayerGameStat*))(Il2CppBase() + 0x506FB2C))(this);
	}
	template <typename T = void> T set_pve_weak_point_hit_count_rate(float value) {
		return ((T (*)(PVEPlayerGameStat*, float))(Il2CppBase() + 0x506FB34))(this, value);
	}
	template <typename T = float> T get_pve_avg_passoutpost_time_cost_rate() {
		return ((T (*)(PVEPlayerGameStat*))(Il2CppBase() + 0x506FB3C))(this);
	}
	template <typename T = void> T set_pve_avg_passoutpost_time_cost_rate(float value) {
		return ((T (*)(PVEPlayerGameStat*, float))(Il2CppBase() + 0x506FB44))(this, value);
	}
	template <typename T = float> T get_pve_passpost_scale_rate() {
		return ((T (*)(PVEPlayerGameStat*))(Il2CppBase() + 0x506FB4C))(this);
	}
	template <typename T = void> T set_pve_passpost_scale_rate(float value) {
		return ((T (*)(PVEPlayerGameStat*, float))(Il2CppBase() + 0x506FB54))(this, value);
	}
	template <typename T = uint32_t> T get_pve_total_win_count() {
		return ((T (*)(PVEPlayerGameStat*))(Il2CppBase() + 0x506FB5C))(this);
	}
	template <typename T = void> T set_pve_total_win_count(uint32_t value) {
		return ((T (*)(PVEPlayerGameStat*, uint32_t))(Il2CppBase() + 0x506FB64))(this, value);
	}
	template <typename T = uint32_t> T get_pve_max_kill_count() {
		return ((T (*)(PVEPlayerGameStat*))(Il2CppBase() + 0x506FB6C))(this);
	}
	template <typename T = void> T set_pve_max_kill_count(uint32_t value) {
		return ((T (*)(PVEPlayerGameStat*, uint32_t))(Il2CppBase() + 0x506FB74))(this, value);
	}
	template <typename T = uint32_t> T get_pve_max_head_kill_count() {
		return ((T (*)(PVEPlayerGameStat*))(Il2CppBase() + 0x506FB7C))(this);
	}
	template <typename T = void> T set_pve_max_head_kill_count(uint32_t value) {
		return ((T (*)(PVEPlayerGameStat*, uint32_t))(Il2CppBase() + 0x506FB84))(this, value);
	}
	template <typename T = uint32_t> T get_pve_first_passoutpost_timestamp() {
		return ((T (*)(PVEPlayerGameStat*))(Il2CppBase() + 0x506FB8C))(this);
	}
	template <typename T = void> T set_pve_first_passoutpost_timestamp(uint32_t value) {
		return ((T (*)(PVEPlayerGameStat*, uint32_t))(Il2CppBase() + 0x506FB94))(this, value);
	}
	template <typename T = uint32_t> T get_max_round() {
		return ((T (*)(PVEPlayerGameStat*))(Il2CppBase() + 0x506FB9C))(this);
	}
	template <typename T = void> T set_max_round(uint32_t value) {
		return ((T (*)(PVEPlayerGameStat*, uint32_t))(Il2CppBase() + 0x506FBA4))(this, value);
	}
	template <typename T = uint32_t> T get_max_score() {
		return ((T (*)(PVEPlayerGameStat*))(Il2CppBase() + 0x506FBAC))(this);
	}
	template <typename T = void> T set_max_score(uint32_t value) {
		return ((T (*)(PVEPlayerGameStat*, uint32_t))(Il2CppBase() + 0x506FBB4))(this, value);
	}
	template <typename T = uint32_t> T get_avg_round_time() {
		return ((T (*)(PVEPlayerGameStat*))(Il2CppBase() + 0x506FBBC))(this);
	}
	template <typename T = void> T set_avg_round_time(uint32_t value) {
		return ((T (*)(PVEPlayerGameStat*, uint32_t))(Il2CppBase() + 0x506FBC4))(this, value);
	}
	template <typename T = uint32_t> T get_times_round() {
		return ((T (*)(PVEPlayerGameStat*))(Il2CppBase() + 0x506FBCC))(this);
	}
	template <typename T = void> T set_times_round(uint32_t value) {
		return ((T (*)(PVEPlayerGameStat*, uint32_t))(Il2CppBase() + 0x506FBD4))(this, value);
	}
	template <typename T = float> T get_pass_round_rate() {
		return ((T (*)(PVEPlayerGameStat*))(Il2CppBase() + 0x506FBDC))(this);
	}
	template <typename T = void> T set_pass_round_rate(float value) {
		return ((T (*)(PVEPlayerGameStat*, float))(Il2CppBase() + 0x506FBE4))(this, value);
	}
	template <typename T = uint64_t> T get_total_game_time() {
		return ((T (*)(PVEPlayerGameStat*))(Il2CppBase() + 0x506FBEC))(this);
	}
	template <typename T = void> T set_total_game_time(uint64_t value) {
		return ((T (*)(PVEPlayerGameStat*, uint64_t))(Il2CppBase() + 0x506FBF4))(this, value);
	}
	template <typename T = uint32_t> T get_game_mode() {
		return ((T (*)(PVEPlayerGameStat*))(Il2CppBase() + 0x506FC04))(this);
	}
	template <typename T = void> T set_game_mode(uint32_t value) {
		return ((T (*)(PVEPlayerGameStat*, uint32_t))(Il2CppBase() + 0x506FC0C))(this, value);
	}
	template <typename T = uint32_t> T get_avg_pass_round() {
		return ((T (*)(PVEPlayerGameStat*))(Il2CppBase() + 0x506FC14))(this);
	}
	template <typename T = void> T set_avg_pass_round(uint32_t value) {
		return ((T (*)(PVEPlayerGameStat*, uint32_t))(Il2CppBase() + 0x506FC1C))(this, value);
	}
	template <typename T = uint32_t> T get_max_continuous_kill_count() {
		return ((T (*)(PVEPlayerGameStat*))(Il2CppBase() + 0x506FC24))(this);
	}
	template <typename T = void> T set_max_continuous_kill_count(uint32_t value) {
		return ((T (*)(PVEPlayerGameStat*, uint32_t))(Il2CppBase() + 0x506FC2C))(this, value);
	}
	template <typename T = uint32_t> T get_total_score() {
		return ((T (*)(PVEPlayerGameStat*))(Il2CppBase() + 0x506FC34))(this);
	}
	template <typename T = void> T set_total_score(uint32_t value) {
		return ((T (*)(PVEPlayerGameStat*, uint32_t))(Il2CppBase() + 0x506FC3C))(this, value);
	}
	template <typename T = uintptr_t> T get_boss_kill_min_time_record() {
		return ((T (*)(PVEPlayerGameStat*))(Il2CppBase() + 0x506FC44))(this);
	}
	template <typename T = void> T set_boss_kill_min_time_record(uintptr_t value) {
		return ((T (*)(PVEPlayerGameStat*, uintptr_t))(Il2CppBase() + 0x506FC4C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PVEPlayerGameStat*, bool))(Il2CppBase() + 0x506FC54))(this, createIfMissing);
	}

};

}
