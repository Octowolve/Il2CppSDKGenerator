#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class SPVPPlayerGameStat
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "SPVPPlayerGameStat"));
	}

	template <typename T = uint32_t> T& _spvp_group_team_type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _spvp_game_mode() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _spvp_game_play_count() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _spvp_total_kill_count() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _spvp_total_bekill_count() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _spvp_total_hit_count() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _spvp_total_head_kill_count() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& _spvp_total_mvp_count() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& _spvp_total_wincamp_top_three() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& _spvp_total_win_count() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint32_t> T& _spvp_total_score() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint32_t> T& _spvp_total_play_time() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uint32_t> T& _spvp_total_fire_count() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& _spvp_max_kill_count() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uint32_t> T& _spvp_max_head_kill_count() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& _spvp_max_kd_rate() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& _spvp_max_score() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint32_t> T& _spvp_max_assist_count() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uint32_t> T& _spvp_min_dead_count() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& _spvp_total_spvpief_game_rate() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& _spvp_total_kd_rate() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& _spvp_total_spm_rate() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& _spvp_total_hit_rate() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& _spvp_total_head_kill_rate() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& _spvp_total_mvp_rate() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uint32_t> T& _spvp_game_module() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uint64_t> T& _spvp_total_damage() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uint64_t> T& _spvp_max_damage() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uint32_t> T& _max_continuous_kill_count() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uint32_t> T& _season_id() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uint32_t> T& _times_bomb_detonated() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uint32_t> T& _times_plat_bomb() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uint32_t> T& _times_rank_win_streak() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uint32_t> T& _times_max_rank_win_streak() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = uint32_t> T get_spvp_group_team_type() {
		return ((T (*)(SPVPPlayerGameStat*))(Il2CppBase() + 0x51A8648))(this);
	}
	template <typename T = void> T set_spvp_group_team_type(uint32_t value) {
		return ((T (*)(SPVPPlayerGameStat*, uint32_t))(Il2CppBase() + 0x51A8650))(this, value);
	}
	template <typename T = uint32_t> T get_spvp_game_mode() {
		return ((T (*)(SPVPPlayerGameStat*))(Il2CppBase() + 0x51A8658))(this);
	}
	template <typename T = void> T set_spvp_game_mode(uint32_t value) {
		return ((T (*)(SPVPPlayerGameStat*, uint32_t))(Il2CppBase() + 0x51A8660))(this, value);
	}
	template <typename T = uint32_t> T get_spvp_game_play_count() {
		return ((T (*)(SPVPPlayerGameStat*))(Il2CppBase() + 0x51A8668))(this);
	}
	template <typename T = void> T set_spvp_game_play_count(uint32_t value) {
		return ((T (*)(SPVPPlayerGameStat*, uint32_t))(Il2CppBase() + 0x51A8670))(this, value);
	}
	template <typename T = uint32_t> T get_spvp_total_kill_count() {
		return ((T (*)(SPVPPlayerGameStat*))(Il2CppBase() + 0x51A8678))(this);
	}
	template <typename T = void> T set_spvp_total_kill_count(uint32_t value) {
		return ((T (*)(SPVPPlayerGameStat*, uint32_t))(Il2CppBase() + 0x51A8680))(this, value);
	}
	template <typename T = uint32_t> T get_spvp_total_bekill_count() {
		return ((T (*)(SPVPPlayerGameStat*))(Il2CppBase() + 0x51A8688))(this);
	}
	template <typename T = void> T set_spvp_total_bekill_count(uint32_t value) {
		return ((T (*)(SPVPPlayerGameStat*, uint32_t))(Il2CppBase() + 0x51A8690))(this, value);
	}
	template <typename T = uint32_t> T get_spvp_total_hit_count() {
		return ((T (*)(SPVPPlayerGameStat*))(Il2CppBase() + 0x51A8698))(this);
	}
	template <typename T = void> T set_spvp_total_hit_count(uint32_t value) {
		return ((T (*)(SPVPPlayerGameStat*, uint32_t))(Il2CppBase() + 0x51A86A0))(this, value);
	}
	template <typename T = uint32_t> T get_spvp_total_head_kill_count() {
		return ((T (*)(SPVPPlayerGameStat*))(Il2CppBase() + 0x51A86A8))(this);
	}
	template <typename T = void> T set_spvp_total_head_kill_count(uint32_t value) {
		return ((T (*)(SPVPPlayerGameStat*, uint32_t))(Il2CppBase() + 0x51A86B0))(this, value);
	}
	template <typename T = uint32_t> T get_spvp_total_mvp_count() {
		return ((T (*)(SPVPPlayerGameStat*))(Il2CppBase() + 0x51A86B8))(this);
	}
	template <typename T = void> T set_spvp_total_mvp_count(uint32_t value) {
		return ((T (*)(SPVPPlayerGameStat*, uint32_t))(Il2CppBase() + 0x51A86C0))(this, value);
	}
	template <typename T = uint32_t> T get_spvp_total_wincamp_top_three() {
		return ((T (*)(SPVPPlayerGameStat*))(Il2CppBase() + 0x51A86C8))(this);
	}
	template <typename T = void> T set_spvp_total_wincamp_top_three(uint32_t value) {
		return ((T (*)(SPVPPlayerGameStat*, uint32_t))(Il2CppBase() + 0x51A86D0))(this, value);
	}
	template <typename T = uint32_t> T get_spvp_total_win_count() {
		return ((T (*)(SPVPPlayerGameStat*))(Il2CppBase() + 0x51A86D8))(this);
	}
	template <typename T = void> T set_spvp_total_win_count(uint32_t value) {
		return ((T (*)(SPVPPlayerGameStat*, uint32_t))(Il2CppBase() + 0x51A86E0))(this, value);
	}
	template <typename T = uint32_t> T get_spvp_total_score() {
		return ((T (*)(SPVPPlayerGameStat*))(Il2CppBase() + 0x51A86E8))(this);
	}
	template <typename T = void> T set_spvp_total_score(uint32_t value) {
		return ((T (*)(SPVPPlayerGameStat*, uint32_t))(Il2CppBase() + 0x51A86F0))(this, value);
	}
	template <typename T = uint32_t> T get_spvp_total_play_time() {
		return ((T (*)(SPVPPlayerGameStat*))(Il2CppBase() + 0x51A86F8))(this);
	}
	template <typename T = void> T set_spvp_total_play_time(uint32_t value) {
		return ((T (*)(SPVPPlayerGameStat*, uint32_t))(Il2CppBase() + 0x51A8700))(this, value);
	}
	template <typename T = uint32_t> T get_spvp_total_fire_count() {
		return ((T (*)(SPVPPlayerGameStat*))(Il2CppBase() + 0x51A8708))(this);
	}
	template <typename T = void> T set_spvp_total_fire_count(uint32_t value) {
		return ((T (*)(SPVPPlayerGameStat*, uint32_t))(Il2CppBase() + 0x51A8710))(this, value);
	}
	template <typename T = uint32_t> T get_spvp_max_kill_count() {
		return ((T (*)(SPVPPlayerGameStat*))(Il2CppBase() + 0x51A8718))(this);
	}
	template <typename T = void> T set_spvp_max_kill_count(uint32_t value) {
		return ((T (*)(SPVPPlayerGameStat*, uint32_t))(Il2CppBase() + 0x51A8720))(this, value);
	}
	template <typename T = uint32_t> T get_spvp_max_head_kill_count() {
		return ((T (*)(SPVPPlayerGameStat*))(Il2CppBase() + 0x51A8728))(this);
	}
	template <typename T = void> T set_spvp_max_head_kill_count(uint32_t value) {
		return ((T (*)(SPVPPlayerGameStat*, uint32_t))(Il2CppBase() + 0x51A8730))(this, value);
	}
	template <typename T = float> T get_spvp_max_kd_rate() {
		return ((T (*)(SPVPPlayerGameStat*))(Il2CppBase() + 0x51A8738))(this);
	}
	template <typename T = void> T set_spvp_max_kd_rate(float value) {
		return ((T (*)(SPVPPlayerGameStat*, float))(Il2CppBase() + 0x51A8740))(this, value);
	}
	template <typename T = float> T get_spvp_max_score() {
		return ((T (*)(SPVPPlayerGameStat*))(Il2CppBase() + 0x51A8748))(this);
	}
	template <typename T = void> T set_spvp_max_score(float value) {
		return ((T (*)(SPVPPlayerGameStat*, float))(Il2CppBase() + 0x51A8750))(this, value);
	}
	template <typename T = uint32_t> T get_spvp_max_assist_count() {
		return ((T (*)(SPVPPlayerGameStat*))(Il2CppBase() + 0x51A8758))(this);
	}
	template <typename T = void> T set_spvp_max_assist_count(uint32_t value) {
		return ((T (*)(SPVPPlayerGameStat*, uint32_t))(Il2CppBase() + 0x51A8760))(this, value);
	}
	template <typename T = uint32_t> T get_spvp_min_dead_count() {
		return ((T (*)(SPVPPlayerGameStat*))(Il2CppBase() + 0x51A8768))(this);
	}
	template <typename T = void> T set_spvp_min_dead_count(uint32_t value) {
		return ((T (*)(SPVPPlayerGameStat*, uint32_t))(Il2CppBase() + 0x51A8770))(this, value);
	}
	template <typename T = float> T get_spvp_total_spvpief_game_rate() {
		return ((T (*)(SPVPPlayerGameStat*))(Il2CppBase() + 0x51A8778))(this);
	}
	template <typename T = void> T set_spvp_total_spvpief_game_rate(float value) {
		return ((T (*)(SPVPPlayerGameStat*, float))(Il2CppBase() + 0x51A8780))(this, value);
	}
	template <typename T = float> T get_spvp_total_kd_rate() {
		return ((T (*)(SPVPPlayerGameStat*))(Il2CppBase() + 0x51A8788))(this);
	}
	template <typename T = void> T set_spvp_total_kd_rate(float value) {
		return ((T (*)(SPVPPlayerGameStat*, float))(Il2CppBase() + 0x51A8790))(this, value);
	}
	template <typename T = float> T get_spvp_total_spm_rate() {
		return ((T (*)(SPVPPlayerGameStat*))(Il2CppBase() + 0x51A8798))(this);
	}
	template <typename T = void> T set_spvp_total_spm_rate(float value) {
		return ((T (*)(SPVPPlayerGameStat*, float))(Il2CppBase() + 0x51A87A0))(this, value);
	}
	template <typename T = float> T get_spvp_total_hit_rate() {
		return ((T (*)(SPVPPlayerGameStat*))(Il2CppBase() + 0x51A87A8))(this);
	}
	template <typename T = void> T set_spvp_total_hit_rate(float value) {
		return ((T (*)(SPVPPlayerGameStat*, float))(Il2CppBase() + 0x51A87B0))(this, value);
	}
	template <typename T = float> T get_spvp_total_head_kill_rate() {
		return ((T (*)(SPVPPlayerGameStat*))(Il2CppBase() + 0x51A87B8))(this);
	}
	template <typename T = void> T set_spvp_total_head_kill_rate(float value) {
		return ((T (*)(SPVPPlayerGameStat*, float))(Il2CppBase() + 0x51A87C0))(this, value);
	}
	template <typename T = float> T get_spvp_total_mvp_rate() {
		return ((T (*)(SPVPPlayerGameStat*))(Il2CppBase() + 0x51A87C8))(this);
	}
	template <typename T = void> T set_spvp_total_mvp_rate(float value) {
		return ((T (*)(SPVPPlayerGameStat*, float))(Il2CppBase() + 0x51A87D0))(this, value);
	}
	template <typename T = uint32_t> T get_spvp_game_module() {
		return ((T (*)(SPVPPlayerGameStat*))(Il2CppBase() + 0x51A87D8))(this);
	}
	template <typename T = void> T set_spvp_game_module(uint32_t value) {
		return ((T (*)(SPVPPlayerGameStat*, uint32_t))(Il2CppBase() + 0x51A87E0))(this, value);
	}
	template <typename T = uint64_t> T get_spvp_total_damage() {
		return ((T (*)(SPVPPlayerGameStat*))(Il2CppBase() + 0x51A87E8))(this);
	}
	template <typename T = void> T set_spvp_total_damage(uint64_t value) {
		return ((T (*)(SPVPPlayerGameStat*, uint64_t))(Il2CppBase() + 0x51A87F0))(this, value);
	}
	template <typename T = uint64_t> T get_spvp_max_damage() {
		return ((T (*)(SPVPPlayerGameStat*))(Il2CppBase() + 0x51A8800))(this);
	}
	template <typename T = void> T set_spvp_max_damage(uint64_t value) {
		return ((T (*)(SPVPPlayerGameStat*, uint64_t))(Il2CppBase() + 0x51A8808))(this, value);
	}
	template <typename T = uint32_t> T get_max_continuous_kill_count() {
		return ((T (*)(SPVPPlayerGameStat*))(Il2CppBase() + 0x51A8818))(this);
	}
	template <typename T = void> T set_max_continuous_kill_count(uint32_t value) {
		return ((T (*)(SPVPPlayerGameStat*, uint32_t))(Il2CppBase() + 0x51A8820))(this, value);
	}
	template <typename T = uint32_t> T get_season_id() {
		return ((T (*)(SPVPPlayerGameStat*))(Il2CppBase() + 0x51A8828))(this);
	}
	template <typename T = void> T set_season_id(uint32_t value) {
		return ((T (*)(SPVPPlayerGameStat*, uint32_t))(Il2CppBase() + 0x51A8830))(this, value);
	}
	template <typename T = uint32_t> T get_times_bomb_detonated() {
		return ((T (*)(SPVPPlayerGameStat*))(Il2CppBase() + 0x51A8838))(this);
	}
	template <typename T = void> T set_times_bomb_detonated(uint32_t value) {
		return ((T (*)(SPVPPlayerGameStat*, uint32_t))(Il2CppBase() + 0x51A8840))(this, value);
	}
	template <typename T = uint32_t> T get_times_plat_bomb() {
		return ((T (*)(SPVPPlayerGameStat*))(Il2CppBase() + 0x51A8848))(this);
	}
	template <typename T = void> T set_times_plat_bomb(uint32_t value) {
		return ((T (*)(SPVPPlayerGameStat*, uint32_t))(Il2CppBase() + 0x51A8850))(this, value);
	}
	template <typename T = uint32_t> T get_times_rank_win_streak() {
		return ((T (*)(SPVPPlayerGameStat*))(Il2CppBase() + 0x51A8858))(this);
	}
	template <typename T = void> T set_times_rank_win_streak(uint32_t value) {
		return ((T (*)(SPVPPlayerGameStat*, uint32_t))(Il2CppBase() + 0x51A8860))(this, value);
	}
	template <typename T = uint32_t> T get_times_max_rank_win_streak() {
		return ((T (*)(SPVPPlayerGameStat*))(Il2CppBase() + 0x51A8868))(this);
	}
	template <typename T = void> T set_times_max_rank_win_streak(uint32_t value) {
		return ((T (*)(SPVPPlayerGameStat*, uint32_t))(Il2CppBase() + 0x51A8870))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(SPVPPlayerGameStat*, bool))(Il2CppBase() + 0x51A8878))(this, createIfMissing);
	}

};

}
