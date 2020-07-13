#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PlayerGameStatis
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PlayerGameStatis"));
	}

	template <typename T = uint64_t> T& _user_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _role_guid() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _nick_name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _peak_level() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _cur_level() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _pic_info() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& _login_source() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _account_info() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& _camp() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& _is_ai_player() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& _drop_match_reason() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _ds_network_statis() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<int32_t>*> T& _recent_spm() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& _recent_avg_spm() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& _history_avg_spm() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<float>*> T& _recent_kd() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& _recent_avg_kd() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& _history_avg_kd() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& _score() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& _game_time() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& _times_assist() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& _times_plat_bomb() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& _times_bomb_detonated() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& _times_capture_stronghold() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& _times_defend_stronghold() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& _times_first_kill() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& _times_last_kill() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& _times_kill_throwing_weapon() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& _times_kill_melee_weapon() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& _times_headshot() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& _times_kill() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& _times_be_killed() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& _times_shot() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& _times_hit_target() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& _gain_type() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& _gained_exp() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = int32_t> T& _award_gold() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& _award_honor_point() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = int32_t> T& _award_diamond() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& _total_exp_buff() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = int32_t> T& _total_gold_buff() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& _current_exp() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _medals() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _gun_statis() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _bag_weapon_statis() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _optic_kill_data() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _role_level_unlocked_weapon() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int32_t> T& _trophy_changes() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = int32_t> T& _trophy_count() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uint32_t> T& _bot_id() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uint32_t> T& _role_id() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uint32_t> T& _add_fatigue() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _add_items() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uint32_t> T& _daily_gain_exp() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uint32_t> T& _daily_gain_gold() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uint32_t> T& _daily_gain_item() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = int32_t> T& _match_mmr() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uint32_t> T& _gain_flag() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& _gain_items() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& _bonus_box_item() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _role_grenade_id() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _role_perk_id() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _role_scorestreak_id() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uint32_t> T& _ffa_rank() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = int32_t> T& _auto_fire() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uint32_t> T& _times_use_scorestreak() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uint32_t> T& _times_use_roleskill() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uint32_t> T& _times_kill_boss() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uint32_t> T& _times_kill_zombie() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uint32_t> T& _times_kill_hellhound() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uint32_t> T& _times_kill_inferno() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uint32_t> T& _times_kill_denizen() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = bool> T& _turn_to_mail() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = int32_t> T& _be_zm_hit_count() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = bool> T& _is_firstwin() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uint32_t> T& _spvp_non_drop_times_game() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = uint32_t> T& _pve_non_drop_times_game() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uint32_t> T& _apvp_non_drop_times_game() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = uint32_t> T& _spm_non_drop_times_game() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _ult_statis() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _grenade_statis() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _streak_statis() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = uint32_t> T& _daily_gain_apvp_gold() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = int32_t> T& _award_apvp_gold() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = uintptr_t> T& _bonus_list() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uint32_t> T& _player_live_cnt() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = uint32_t> T& _squad_pull_revived_times() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uint32_t> T& _ladder_score() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = uint32_t> T& _ladder_hidden_score() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uint32_t> T& _team_id() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = uint32_t> T& _player_rank() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uint32_t> T& _team_rank() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = uintptr_t> T& _add_br_gold() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> T& _add_br_exp() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = uint64_t> T& _total_take_damage() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uint64_t> T& _total_get_damage() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uint32_t> T& _cure_value() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = uint32_t> T& _times_cure() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = uint32_t> T& _player_game_state() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uint32_t> T& _team_game_state() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = uint32_t> T& _player_sex() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uint32_t> T& _survival_time() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = uint32_t> T& _times_save() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uint32_t> T& _times_reborn() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = uint32_t> T& _rating_score() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = int32_t> T& _add_br_ladder_score() {
		return *(T*)((uintptr_t)this + 0x1BC);
	}
	template <typename T = int32_t> T& _add_br_ladder_hidden_score() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = uint32_t> T& _spvp_times_game() {
		return *(T*)((uintptr_t)this + 0x1C4);
	}
	template <typename T = uint32_t> T& _apvp_times_game() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = uint32_t> T& _pickup_item_value() {
		return *(T*)((uintptr_t)this + 0x1CC);
	}
	template <typename T = uint32_t> T& _player_team_rank() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = bool> T& _is_mvp() {
		return *(T*)((uintptr_t)this + 0x1D4);
	}
	template <typename T = uint32_t> T& _br_match_mmr() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = uint32_t> T& _br_ladder_score() {
		return *(T*)((uintptr_t)this + 0x1DC);
	}
	template <typename T = uint32_t> T& _br_ladder_hidden_score() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = uint32_t> T& _max_kill_distance() {
		return *(T*)((uintptr_t)this + 0x1E4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _detail_info() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = uint64_t> T& _ds_player_id() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _card_prop_info_ary() {
		return *(T*)((uintptr_t)this + 0x1F8);
	}
	template <typename T = uint64_t> T& _total_take_boss_damage() {
		return *(T*)((uintptr_t)this + 0x200);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _consumable_items() {
		return *(T*)((uintptr_t)this + 0x208);
	}
	template <typename T = uint32_t> T& _hit_weakpoint_times() {
		return *(T*)((uintptr_t)this + 0x20C);
	}
	template <typename T = uint32_t> T& _game_level() {
		return *(T*)((uintptr_t)this + 0x210);
	}
	template <typename T = bool> T& _is_play_with_friend() {
		return *(T*)((uintptr_t)this + 0x214);
	}
	template <typename T = uint32_t> T& _times_vehicle_kill() {
		return *(T*)((uintptr_t)this + 0x218);
	}
	template <typename T = uint32_t> T& _times_lying_kill() {
		return *(T*)((uintptr_t)this + 0x21C);
	}
	template <typename T = uint32_t> T& _times_bushes_kill() {
		return *(T*)((uintptr_t)this + 0x220);
	}
	template <typename T = uint32_t> T& _times_useknife_kill() {
		return *(T*)((uintptr_t)this + 0x224);
	}
	template <typename T = float> T& _walk_distance() {
		return *(T*)((uintptr_t)this + 0x228);
	}
	template <typename T = float> T& _driver_vehicle_distance() {
		return *(T*)((uintptr_t)this + 0x22C);
	}
	template <typename T = float> T& _swim_distance() {
		return *(T*)((uintptr_t)this + 0x230);
	}
	template <typename T = float> T& _skydiving_distance() {
		return *(T*)((uintptr_t)this + 0x234);
	}
	template <typename T = uint32_t> T& _times_kill_skydiving() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = uint32_t> T& _times_kill_vehicle() {
		return *(T*)((uintptr_t)this + 0x23C);
	}
	template <typename T = uint32_t> T& _skydiv_use_time_sec() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = bool> T& _stand_of_arms() {
		return *(T*)((uintptr_t)this + 0x244);
	}
	template <typename T = uint32_t> T& _kill_without_time_scope() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = uint32_t> T& _kill_stealing() {
		return *(T*)((uintptr_t)this + 0x24C);
	}
	template <typename T = uint32_t> T& _diving_time_sec() {
		return *(T*)((uintptr_t)this + 0x250);
	}
	template <typename T = uint32_t> T& _lying_time() {
		return *(T*)((uintptr_t)this + 0x254);
	}
	template <typename T = uint32_t> T& _dying_times() {
		return *(T*)((uintptr_t)this + 0x258);
	}
	template <typename T = uint32_t> T& _do_nothing_time_sec() {
		return *(T*)((uintptr_t)this + 0x25C);
	}
	template <typename T = bool> T& _top_ten_without_kill() {
		return *(T*)((uintptr_t)this + 0x260);
	}
	template <typename T = uint32_t> T& _rich_pick() {
		return *(T*)((uintptr_t)this + 0x264);
	}
	template <typename T = uint32_t> T& _head_shot_kill_times() {
		return *(T*)((uintptr_t)this + 0x268);
	}
	template <typename T = bool> T& _suicide() {
		return *(T*)((uintptr_t)this + 0x26C);
	}
	template <typename T = bool> T& _kill_by_bombardment() {
		return *(T*)((uintptr_t)this + 0x26D);
	}
	template <typename T = uint32_t> T& _pick_airdrop() {
		return *(T*)((uintptr_t)this + 0x270);
	}
	template <typename T = uint32_t> T& _hp_time() {
		return *(T*)((uintptr_t)this + 0x274);
	}
	template <typename T = uint32_t> T& _hp_kill_times() {
		return *(T*)((uintptr_t)this + 0x278);
	}
	template <typename T = uint32_t> T& _shot_gun_kill_times() {
		return *(T*)((uintptr_t)this + 0x27C);
	}
	template <typename T = int32_t> T& _add_ladder_score() {
		return *(T*)((uintptr_t)this + 0x280);
	}
	template <typename T = int32_t> T& _add_ladder_hidden_score() {
		return *(T*)((uintptr_t)this + 0x284);
	}
	template <typename T = uint32_t> T& _self_pull_revived_times() {
		return *(T*)((uintptr_t)this + 0x288);
	}
	template <typename T = uint32_t> T& _revive_coin_to_self_times() {
		return *(T*)((uintptr_t)this + 0x28C);
	}
	template <typename T = uint32_t> T& _revive_coin_to_squad_times() {
		return *(T*)((uintptr_t)this + 0x290);
	}
	template <typename T = uintptr_t> T& _spvp_promotion_info() {
		return *(T*)((uintptr_t)this + 0x294);
	}
	template <typename T = uint32_t> T& _wincircle_individuation_itemid() {
		return *(T*)((uintptr_t)this + 0x298);
	}
	template <typename T = uint32_t> T& _spvp_ladder_times_game() {
		return *(T*)((uintptr_t)this + 0x29C);
	}
	template <typename T = int32_t> T& _pve_enter_mission_id() {
		return *(T*)((uintptr_t)this + 0x2A0);
	}
	template <typename T = bool> T& _is_ladder_grading() {
		return *(T*)((uintptr_t)this + 0x2A4);
	}
	template <typename T = bool> T& _ladder_grading_succ() {
		return *(T*)((uintptr_t)this + 0x2A5);
	}
	template <typename T = uint32_t> T& _max_continuous_kill_count() {
		return *(T*)((uintptr_t)this + 0x2A8);
	}
	template <typename T = bool> T& _is_reset_ladder_score() {
		return *(T*)((uintptr_t)this + 0x2AC);
	}
	template <typename T = uint32_t> T& _reset_ladder_score() {
		return *(T*)((uintptr_t)this + 0x2B0);
	}
	template <typename T = uint32_t> T& _reset_ladder_hidden_score() {
		return *(T*)((uintptr_t)this + 0x2B4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _exp_buff_list() {
		return *(T*)((uintptr_t)this + 0x2B8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _gold_buff_list() {
		return *(T*)((uintptr_t)this + 0x2BC);
	}
	template <typename T = uint32_t> T& _grouproom_id() {
		return *(T*)((uintptr_t)this + 0x2C0);
	}
	template <typename T = uint32_t> T& _grouproom_create_time() {
		return *(T*)((uintptr_t)this + 0x2C4);
	}
	template <typename T = uint32_t> T& _grouproom_bus_id() {
		return *(T*)((uintptr_t)this + 0x2C8);
	}
	template <typename T = uint32_t> T& _max_use_time_weapon_id() {
		return *(T*)((uintptr_t)this + 0x2CC);
	}
	template <typename T = uint32_t> T& _item_score() {
		return *(T*)((uintptr_t)this + 0x2D0);
	}
	template <typename T = uint32_t> T& _survival_score() {
		return *(T*)((uintptr_t)this + 0x2D4);
	}
	template <typename T = uint32_t> T& _combat_score() {
		return *(T*)((uintptr_t)this + 0x2D8);
	}
	template <typename T = uint32_t> T& _saveteamate_score() {
		return *(T*)((uintptr_t)this + 0x2DC);
	}
	template <typename T = uint32_t> T& _beat_score() {
		return *(T*)((uintptr_t)this + 0x2E0);
	}
	template <typename T = uint32_t> T& _times_hit_weak_target() {
		return *(T*)((uintptr_t)this + 0x2E4);
	}
	template <typename T = float> T& _forward_distance() {
		return *(T*)((uintptr_t)this + 0x2E8);
	}
	template <typename T = uint32_t> T& _times_use_skill_item() {
		return *(T*)((uintptr_t)this + 0x2EC);
	}
	template <typename T = uint32_t> T& _hp_score() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = uint32_t> T& _times_hit_target_dying() {
		return *(T*)((uintptr_t)this + 0x2F4);
	}
	template <typename T = uint32_t> T& _sys_avg_score() {
		return *(T*)((uintptr_t)this + 0x2F8);
	}
	template <typename T = uint32_t> T& _pve_kill_score() {
		return *(T*)((uintptr_t)this + 0x2FC);
	}
	template <typename T = uint32_t> T& _pve_passtime_score() {
		return *(T*)((uintptr_t)this + 0x300);
	}
	template <typename T = uint32_t> T& _pve_hit_score() {
		return *(T*)((uintptr_t)this + 0x304);
	}
	template <typename T = uint32_t> T& _pve_crit_score() {
		return *(T*)((uintptr_t)this + 0x308);
	}
	template <typename T = uint32_t> T& _pve_dead_score() {
		return *(T*)((uintptr_t)this + 0x30C);
	}
	template <typename T = uint64_t> T& _start_match_id() {
		return *(T*)((uintptr_t)this + 0x310);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _weapon_exp_buff_list() {
		return *(T*)((uintptr_t)this + 0x318);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _gsp_buf_list() {
		return *(T*)((uintptr_t)this + 0x31C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _br_exp_card_list() {
		return *(T*)((uintptr_t)this + 0x320);
	}
	template <typename T = uintptr_t> T& _add_pvp_exp() {
		return *(T*)((uintptr_t)this + 0x324);
	}
	template <typename T = uintptr_t> T& _battle_pass_data() {
		return *(T*)((uintptr_t)this + 0x328);
	}
	template <typename T = bool> T& _is_drop() {
		return *(T*)((uintptr_t)this + 0x32C);
	}
	template <typename T = uint32_t> T& _group_player_num() {
		return *(T*)((uintptr_t)this + 0x330);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _ach_list() {
		return *(T*)((uintptr_t)this + 0x334);
	}
	template <typename T = uint32_t> T& _spvp_ladder_level() {
		return *(T*)((uintptr_t)this + 0x338);
	}
	template <typename T = uint32_t> T& _br_ladder_level() {
		return *(T*)((uintptr_t)this + 0x33C);
	}
	template <typename T = uint32_t> T& _skill_level() {
		return *(T*)((uintptr_t)this + 0x340);
	}
	template <typename T = uint32_t> T& _abtest_player_flag() {
		return *(T*)((uintptr_t)this + 0x344);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _br_add_exp_card_list() {
		return *(T*)((uintptr_t)this + 0x348);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _killer_player_info() {
		return *(T*)((uintptr_t)this + 0x34C);
	}
	template <typename T = bool> T& _reach_week_exp_limit() {
		return *(T*)((uintptr_t)this + 0x350);
	}
	template <typename T = uint32_t> T& _max_use_time_weapon_camoid() {
		return *(T*)((uintptr_t)this + 0x354);
	}
	template <typename T = uint32_t> T& _times_resurrection() {
		return *(T*)((uintptr_t)this + 0x358);
	}
	template <typename T = uint32_t> T& _actv_weapon_exp_buf() {
		return *(T*)((uintptr_t)this + 0x35C);
	}
	template <typename T = uint32_t> T& _actv_player_exp_buf() {
		return *(T*)((uintptr_t)this + 0x360);
	}
	template <typename T = uint32_t> T& _teammate_dog_tag_value() {
		return *(T*)((uintptr_t)this + 0x364);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _pickup_item_statis() {
		return *(T*)((uintptr_t)this + 0x368);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _use_item_statis() {
		return *(T*)((uintptr_t)this + 0x36C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _use_vehicle_statis() {
		return *(T*)((uintptr_t)this + 0x370);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _cure_statis() {
		return *(T*)((uintptr_t)this + 0x374);
	}
	template <typename T = uintptr_t> T& _land_pos() {
		return *(T*)((uintptr_t)this + 0x378);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _player_kill_statis() {
		return *(T*)((uintptr_t)this + 0x37C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _use_individuation_statis() {
		return *(T*)((uintptr_t)this + 0x380);
	}
	template <typename T = uint32_t> T& _dog_tag() {
		return *(T*)((uintptr_t)this + 0x384);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _profession_chip_statis() {
		return *(T*)((uintptr_t)this + 0x388);
	}
	template <typename T = int32_t> T& _times_kill_bot() {
		return *(T*)((uintptr_t)this + 0x38C);
	}
	template <typename T = int32_t> T& _times_kill_zm() {
		return *(T*)((uintptr_t)this + 0x390);
	}
	template <typename T = int32_t> T& _times_be_bot_killed() {
		return *(T*)((uintptr_t)this + 0x394);
	}
	template <typename T = int32_t> T& _times_be_zm_killed() {
		return *(T*)((uintptr_t)this + 0x398);
	}
	template <typename T = bool> T& _endless_new_highest_round() {
		return *(T*)((uintptr_t)this + 0x39C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _mlk_add_exp_card_list() {
		return *(T*)((uintptr_t)this + 0x3A0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _player_mission_statis() {
		return *(T*)((uintptr_t)this + 0x3A4);
	}
	template <typename T = uint32_t> T& _team_seat_id() {
		return *(T*)((uintptr_t)this + 0x3A8);
	}
	template <typename T = uint64_t> T& _player_guid() {
		return *(T*)((uintptr_t)this + 0x3B0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _hurter_player_info() {
		return *(T*)((uintptr_t)this + 0x3B8);
	}
	template <typename T = uint32_t> T& _slide_times() {
		return *(T*)((uintptr_t)this + 0x3BC);
	}
	template <typename T = float> T& _slide_distance() {
		return *(T*)((uintptr_t)this + 0x3C0);
	}
	template <typename T = uint32_t> T& _number_shot_bullet() {
		return *(T*)((uintptr_t)this + 0x3C4);
	}
	template <typename T = uint32_t> T& _times_handgun_kill() {
		return *(T*)((uintptr_t)this + 0x3C8);
	}
	template <typename T = uint32_t> T& _times_rpg_kill() {
		return *(T*)((uintptr_t)this + 0x3CC);
	}
	template <typename T = uint32_t> T& _max_kill_sameplayer_num() {
		return *(T*)((uintptr_t)this + 0x3D0);
	}
	template <typename T = uint32_t> T& _times_open_air_box() {
		return *(T*)((uintptr_t)this + 0x3D4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _open_zm_box_statis() {
		return *(T*)((uintptr_t)this + 0x3D8);
	}
	template <typename T = float> T& _skyfly_distance() {
		return *(T*)((uintptr_t)this + 0x3DC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _have_easter_item_statis() {
		return *(T*)((uintptr_t)this + 0x3E0);
	}
	template <typename T = uint32_t> T& _use_joystick() {
		return *(T*)((uintptr_t)this + 0x3E4);
	}
	template <typename T = uint32_t> T& _use_trap_count() {
		return *(T*)((uintptr_t)this + 0x3E8);
	}
	template <typename T = uint32_t> T& _trap_kill_zombie_count() {
		return *(T*)((uintptr_t)this + 0x3EC);
	}
	template <typename T = uint32_t> T& _open_weapon_box_count() {
		return *(T*)((uintptr_t)this + 0x3F0);
	}
	template <typename T = uint32_t> T& _gain_point_num() {
		return *(T*)((uintptr_t)this + 0x3F4);
	}
	template <typename T = uint32_t> T& _playerend_ult_id() {
		return *(T*)((uintptr_t)this + 0x3F8);
	}
	template <typename T = uint32_t> T& _playerend_chip_id() {
		return *(T*)((uintptr_t)this + 0x3FC);
	}
	template <typename T = uint32_t> T& _playerend_chip_type() {
		return *(T*)((uintptr_t)this + 0x400);
	}
	template <typename T = uint32_t> T& _playerend_mainweapon1() {
		return *(T*)((uintptr_t)this + 0x404);
	}
	template <typename T = uint32_t> T& _playerend_mainweapon2() {
		return *(T*)((uintptr_t)this + 0x408);
	}
	template <typename T = uint32_t> T& _times_kill_normal_zombie() {
		return *(T*)((uintptr_t)this + 0x40C);
	}
	template <typename T = uint32_t> T& _times_kill_special_zombie() {
		return *(T*)((uintptr_t)this + 0x410);
	}
	template <typename T = uint32_t> T& _gain_weapon_by_weapon_box() {
		return *(T*)((uintptr_t)this + 0x414);
	}
	template <typename T = uint32_t> T& _gain_weapon_by_offwall() {
		return *(T*)((uintptr_t)this + 0x418);
	}
	template <typename T = uint32_t> T& _times_build_window() {
		return *(T*)((uintptr_t)this + 0x41C);
	}
	template <typename T = uint32_t> T& _buff_machine_new_buff_num() {
		return *(T*)((uintptr_t)this + 0x420);
	}
	template <typename T = uint32_t> T& _buff_machine_levelup_buff_num() {
		return *(T*)((uintptr_t)this + 0x424);
	}
	template <typename T = uint32_t> T& _times_perk_coin_machine_use() {
		return *(T*)((uintptr_t)this + 0x428);
	}
	template <typename T = uint32_t> T& _times_gain_perk() {
		return *(T*)((uintptr_t)this + 0x42C);
	}
	template <typename T = uint32_t> T& _times_offwall_gain_ammo() {
		return *(T*)((uintptr_t)this + 0x430);
	}
	template <typename T = uint32_t> T& _times_pickup_powerup() {
		return *(T*)((uintptr_t)this + 0x434);
	}
	template <typename T = int32_t> T& _bag_appear() {
		return *(T*)((uintptr_t)this + 0x438);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _pve_item_award() {
		return *(T*)((uintptr_t)this + 0x43C);
	}
	template <typename T = uint32_t> T& _times_buff_machine_use() {
		return *(T*)((uintptr_t)this + 0x440);
	}
	template <typename T = uint32_t> T& _times_pap_use() {
		return *(T*)((uintptr_t)this + 0x444);
	}
	template <typename T = uint32_t> T& _times_max_kill_zombie_one_life() {
		return *(T*)((uintptr_t)this + 0x448);
	}
	template <typename T = bool> T& _is_fail_mvp() {
		return *(T*)((uintptr_t)this + 0x44C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _score_details() {
		return *(T*)((uintptr_t)this + 0x450);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _kill_vehicle_statis() {
		return *(T*)((uintptr_t)this + 0x454);
	}
	template <typename T = uint32_t> T& _times_mark() {
		return *(T*)((uintptr_t)this + 0x458);
	}
	template <typename T = int32_t> T& _times_revenge_kill() {
		return *(T*)((uintptr_t)this + 0x45C);
	}
	template <typename T = int32_t> T& _times_reload_ammo() {
		return *(T*)((uintptr_t)this + 0x460);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _perk_statis() {
		return *(T*)((uintptr_t)this + 0x464);
	}
	template <typename T = uint32_t> T& _times_emp_take_effect() {
		return *(T*)((uintptr_t)this + 0x468);
	}
	template <typename T = uint32_t> T& _times_rpg_destroy_scorestreak() {
		return *(T*)((uintptr_t)this + 0x46C);
	}
	template <typename T = int32_t> T& _enter_source() {
		return *(T*)((uintptr_t)this + 0x470);
	}
	template <typename T = int32_t> T& _wingsuit() {
		return *(T*)((uintptr_t)this + 0x474);
	}
	template <typename T = int32_t> T& _parachute() {
		return *(T*)((uintptr_t)this + 0x478);
	}
	template <typename T = int32_t> T& _hat_appear() {
		return *(T*)((uintptr_t)this + 0x47C);
	}
	template <typename T = int32_t> T& _cloth_appear() {
		return *(T*)((uintptr_t)this + 0x480);
	}
	template <typename T = int32_t> T& _suit_appear() {
		return *(T*)((uintptr_t)this + 0x484);
	}
	template <typename T = bool> T& _is_play_with_gamefriend() {
		return *(T*)((uintptr_t)this + 0x488);
	}
	template <typename T = bool> T& _is_play_with_relativefriend() {
		return *(T*)((uintptr_t)this + 0x489);
	}
	template <typename T = int32_t> T& _start_match_num_player() {
		return *(T*)((uintptr_t)this + 0x48C);
	}
	template <typename T = bool> T& _is_actv_ladder_no_drop_score() {
		return *(T*)((uintptr_t)this + 0x490);
	}
	template <typename T = bool> T& _is_actv_ladder_add_score() {
		return *(T*)((uintptr_t)this + 0x491);
	}
	template <typename T = Il2CppList<int32_t>*> T& _weapon_suite_ids() {
		return *(T*)((uintptr_t)this + 0x494);
	}
	template <typename T = uintptr_t> T& _weapon_suite_bonus() {
		return *(T*)((uintptr_t)this + 0x498);
	}
	template <typename T = uint32_t> T& _easter_grenade_use_count() {
		return *(T*)((uintptr_t)this + 0x49C);
	}
	template <typename T = uint32_t> T& _easter_grenade_hit_count() {
		return *(T*)((uintptr_t)this + 0x4A0);
	}
	template <typename T = uint32_t> T& _easter_egg_crushed_count() {
		return *(T*)((uintptr_t)this + 0x4A4);
	}
	template <typename T = uint32_t> T& _easter_animal_games_start_count() {
		return *(T*)((uintptr_t)this + 0x4A8);
	}
	template <typename T = uint32_t> T& _easter_animal_games_victory_count() {
		return *(T*)((uintptr_t)this + 0x4AC);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _in_game_items_num() {
		return *(T*)((uintptr_t)this + 0x4B0);
	}
	template <typename T = uintptr_t> T& _in_game_item_info() {
		return *(T*)((uintptr_t)this + 0x4B4);
	}
	template <typename T = uintptr_t> T& _bp_exp_detail() {
		return *(T*)((uintptr_t)this + 0x4B8);
	}
	template <typename T = int32_t> T& _warm_type() {
		return *(T*)((uintptr_t)this + 0x4BC);
	}
	template <typename T = uint64_t> T& _back_timestamp() {
		return *(T*)((uintptr_t)this + 0x4C0);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _spvp_selected_playlist_id() {
		return *(T*)((uintptr_t)this + 0x4C8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _gun_role_perk_statis() {
		return *(T*)((uintptr_t)this + 0x4CC);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _final_role_perk_id() {
		return *(T*)((uintptr_t)this + 0x4D0);
	}
	template <typename T = uint32_t> T& _times_player_become_goliath() {
		return *(T*)((uintptr_t)this + 0x4D4);
	}
	template <typename T = uint32_t> T& _times_kill_attacker() {
		return *(T*)((uintptr_t)this + 0x4D8);
	}
	template <typename T = uint32_t> T& _times_kill_defender() {
		return *(T*)((uintptr_t)this + 0x4DC);
	}
	template <typename T = uint32_t> T& _times_survivor_alive_time() {
		return *(T*)((uintptr_t)this + 0x4E0);
	}
	template <typename T = uint32_t> T& _times_goliath_kill() {
		return *(T*)((uintptr_t)this + 0x4E4);
	}
	template <typename T = uint32_t> T& _collect_robot_part_count() {
		return *(T*)((uintptr_t)this + 0x4E8);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _interactivet_robot_count() {
		return *(T*)((uintptr_t)this + 0x4EC);
	}
	template <typename T = bool> T& _use_paramount_cd() {
		return *(T*)((uintptr_t)this + 0x4F0);
	}
	template <typename T = bool> T& _use_black_market_machine() {
		return *(T*)((uintptr_t)this + 0x4F1);
	}
	template <typename T = int32_t> T& _mp_season_no() {
		return *(T*)((uintptr_t)this + 0x4F4);
	}
	template <typename T = int32_t> T& _br_season_no() {
		return *(T*)((uintptr_t)this + 0x4F8);
	}
	template <typename T = uint32_t> T& _bio_chemical_barrel_crushed_count() {
		return *(T*)((uintptr_t)this + 0x4FC);
	}
	template <typename T = uint32_t> T& _choose_profession_chip_id() {
		return *(T*)((uintptr_t)this + 0x500);
	}
	template <typename T = uint32_t> T& _times_active_nuclear_bomb() {
		return *(T*)((uintptr_t)this + 0x504);
	}
	template <typename T = uint32_t> T& _times_goliath_dead() {
		return *(T*)((uintptr_t)this + 0x508);
	}
	template <typename T = uint32_t> T& _ai_lab_id() {
		return *(T*)((uintptr_t)this + 0x50C);
	}
	template <typename T = bool> T& _is_br_final() {
		return *(T*)((uintptr_t)this + 0x510);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x514);
	}

	template <typename T = uint64_t> T get_user_id() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA764C))(this);
	}
	template <typename T = void> T set_user_id(uint64_t value) {
		return ((T (*)(PlayerGameStatis*, uint64_t))(Il2CppBase() + 0x4EA7654))(this, value);
	}
	template <typename T = uint64_t> T get_role_guid() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7664))(this);
	}
	template <typename T = void> T set_role_guid(uint64_t value) {
		return ((T (*)(PlayerGameStatis*, uint64_t))(Il2CppBase() + 0x4EA766C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_nick_name() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA767C))(this);
	}
	template <typename T = void> T set_nick_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(PlayerGameStatis*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA7684))(this, value);
	}
	template <typename T = int32_t> T get_peak_level() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA768C))(this);
	}
	template <typename T = void> T set_peak_level(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA7694))(this, value);
	}
	template <typename T = int32_t> T get_cur_level() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA769C))(this);
	}
	template <typename T = void> T set_cur_level(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA76A4))(this, value);
	}
	template <typename T = uintptr_t> T get_pic_info() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA76AC))(this);
	}
	template <typename T = void> T set_pic_info(uintptr_t value) {
		return ((T (*)(PlayerGameStatis*, uintptr_t))(Il2CppBase() + 0x4EA76B4))(this, value);
	}
	template <typename T = int32_t> T get_login_source() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA76BC))(this);
	}
	template <typename T = void> T set_login_source(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA76C4))(this, value);
	}
	template <typename T = uintptr_t> T get_account_info() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA76CC))(this);
	}
	template <typename T = void> T set_account_info(uintptr_t value) {
		return ((T (*)(PlayerGameStatis*, uintptr_t))(Il2CppBase() + 0x4EA76D4))(this, value);
	}
	template <typename T = int32_t> T get_camp() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA76DC))(this);
	}
	template <typename T = void> T set_camp(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA76E4))(this, value);
	}
	template <typename T = bool> T get_is_ai_player() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA76EC))(this);
	}
	template <typename T = void> T set_is_ai_player(bool value) {
		return ((T (*)(PlayerGameStatis*, bool))(Il2CppBase() + 0x4EA76F4))(this, value);
	}
	template <typename T = int32_t> T get_drop_match_reason() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA76FC))(this);
	}
	template <typename T = void> T set_drop_match_reason(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA7704))(this, value);
	}
	template <typename T = uintptr_t> T get_ds_network_statis() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA770C))(this);
	}
	template <typename T = void> T set_ds_network_statis(uintptr_t value) {
		return ((T (*)(PlayerGameStatis*, uintptr_t))(Il2CppBase() + 0x4EA7714))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_recent_spm() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA771C))(this);
	}
	template <typename T = int32_t> T get_recent_avg_spm() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7724))(this);
	}
	template <typename T = void> T set_recent_avg_spm(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA772C))(this, value);
	}
	template <typename T = int32_t> T get_history_avg_spm() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7734))(this);
	}
	template <typename T = void> T set_history_avg_spm(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA773C))(this, value);
	}
	template <typename T = Il2CppList<float>*> T get_recent_kd() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7744))(this);
	}
	template <typename T = float> T get_recent_avg_kd() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA774C))(this);
	}
	template <typename T = void> T set_recent_avg_kd(float value) {
		return ((T (*)(PlayerGameStatis*, float))(Il2CppBase() + 0x4EA7754))(this, value);
	}
	template <typename T = float> T get_history_avg_kd() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA775C))(this);
	}
	template <typename T = void> T set_history_avg_kd(float value) {
		return ((T (*)(PlayerGameStatis*, float))(Il2CppBase() + 0x4EA7764))(this, value);
	}
	template <typename T = int32_t> T get_score() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA776C))(this);
	}
	template <typename T = void> T set_score(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA7774))(this, value);
	}
	template <typename T = int32_t> T get_game_time() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA777C))(this);
	}
	template <typename T = void> T set_game_time(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA7784))(this, value);
	}
	template <typename T = int32_t> T get_times_assist() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA778C))(this);
	}
	template <typename T = void> T set_times_assist(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA7794))(this, value);
	}
	template <typename T = int32_t> T get_times_plat_bomb() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA779C))(this);
	}
	template <typename T = void> T set_times_plat_bomb(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA77A4))(this, value);
	}
	template <typename T = int32_t> T get_times_bomb_detonated() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA77AC))(this);
	}
	template <typename T = void> T set_times_bomb_detonated(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA77B4))(this, value);
	}
	template <typename T = int32_t> T get_times_capture_stronghold() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA77BC))(this);
	}
	template <typename T = void> T set_times_capture_stronghold(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA77C4))(this, value);
	}
	template <typename T = int32_t> T get_times_defend_stronghold() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA77CC))(this);
	}
	template <typename T = void> T set_times_defend_stronghold(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA77D4))(this, value);
	}
	template <typename T = int32_t> T get_times_first_kill() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA77DC))(this);
	}
	template <typename T = void> T set_times_first_kill(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA77E4))(this, value);
	}
	template <typename T = int32_t> T get_times_last_kill() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA77EC))(this);
	}
	template <typename T = void> T set_times_last_kill(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA77F4))(this, value);
	}
	template <typename T = int32_t> T get_times_kill_throwing_weapon() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA77FC))(this);
	}
	template <typename T = void> T set_times_kill_throwing_weapon(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA7804))(this, value);
	}
	template <typename T = int32_t> T get_times_kill_melee_weapon() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA780C))(this);
	}
	template <typename T = void> T set_times_kill_melee_weapon(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA7814))(this, value);
	}
	template <typename T = int32_t> T get_times_headshot() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA781C))(this);
	}
	template <typename T = void> T set_times_headshot(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA7824))(this, value);
	}
	template <typename T = int32_t> T get_times_kill() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA782C))(this);
	}
	template <typename T = void> T set_times_kill(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA7834))(this, value);
	}
	template <typename T = int32_t> T get_times_be_killed() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA783C))(this);
	}
	template <typename T = void> T set_times_be_killed(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA7844))(this, value);
	}
	template <typename T = int32_t> T get_times_shot() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA784C))(this);
	}
	template <typename T = void> T set_times_shot(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA7854))(this, value);
	}
	template <typename T = int32_t> T get_times_hit_target() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA785C))(this);
	}
	template <typename T = void> T set_times_hit_target(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA7864))(this, value);
	}
	template <typename T = int32_t> T get_gain_type() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA786C))(this);
	}
	template <typename T = void> T set_gain_type(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA7874))(this, value);
	}
	template <typename T = int32_t> T get_gained_exp() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA787C))(this);
	}
	template <typename T = void> T set_gained_exp(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA7884))(this, value);
	}
	template <typename T = int32_t> T get_award_gold() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA788C))(this);
	}
	template <typename T = void> T set_award_gold(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA7894))(this, value);
	}
	template <typename T = int32_t> T get_award_honor_point() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA789C))(this);
	}
	template <typename T = void> T set_award_honor_point(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA78A4))(this, value);
	}
	template <typename T = int32_t> T get_award_diamond() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA78AC))(this);
	}
	template <typename T = void> T set_award_diamond(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA78B4))(this, value);
	}
	template <typename T = int32_t> T get_total_exp_buff() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA78BC))(this);
	}
	template <typename T = void> T set_total_exp_buff(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA78C4))(this, value);
	}
	template <typename T = int32_t> T get_total_gold_buff() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA78CC))(this);
	}
	template <typename T = void> T set_total_gold_buff(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA78D4))(this, value);
	}
	template <typename T = int32_t> T get_current_exp() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA78DC))(this);
	}
	template <typename T = void> T set_current_exp(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA78E4))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_medals() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA78EC))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_gun_statis() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA78F4))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_bag_weapon_statis() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA78FC))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_optic_kill_data() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7904))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_role_level_unlocked_weapon() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA790C))(this);
	}
	template <typename T = int32_t> T get_trophy_changes() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7914))(this);
	}
	template <typename T = void> T set_trophy_changes(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA791C))(this, value);
	}
	template <typename T = int32_t> T get_trophy_count() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7924))(this);
	}
	template <typename T = void> T set_trophy_count(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA792C))(this, value);
	}
	template <typename T = uint32_t> T get_bot_id() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7934))(this);
	}
	template <typename T = void> T set_bot_id(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA793C))(this, value);
	}
	template <typename T = uint32_t> T get_role_id() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7944))(this);
	}
	template <typename T = void> T set_role_id(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA794C))(this, value);
	}
	template <typename T = uint32_t> T get_add_fatigue() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7954))(this);
	}
	template <typename T = void> T set_add_fatigue(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA795C))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_add_items() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7964))(this);
	}
	template <typename T = uint32_t> T get_daily_gain_exp() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA796C))(this);
	}
	template <typename T = void> T set_daily_gain_exp(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7974))(this, value);
	}
	template <typename T = uint32_t> T get_daily_gain_gold() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA797C))(this);
	}
	template <typename T = void> T set_daily_gain_gold(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7984))(this, value);
	}
	template <typename T = uint32_t> T get_daily_gain_item() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA798C))(this);
	}
	template <typename T = void> T set_daily_gain_item(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7994))(this, value);
	}
	template <typename T = int32_t> T get_match_mmr() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA799C))(this);
	}
	template <typename T = void> T set_match_mmr(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA79A4))(this, value);
	}
	template <typename T = uint32_t> T get_gain_flag() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA79AC))(this);
	}
	template <typename T = void> T set_gain_flag(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA79B4))(this, value);
	}
	template <typename T = uintptr_t> T get_gain_items() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA79BC))(this);
	}
	template <typename T = void> T set_gain_items(uintptr_t value) {
		return ((T (*)(PlayerGameStatis*, uintptr_t))(Il2CppBase() + 0x4EA79C4))(this, value);
	}
	template <typename T = uintptr_t> T get_bonus_box_item() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA79CC))(this);
	}
	template <typename T = void> T set_bonus_box_item(uintptr_t value) {
		return ((T (*)(PlayerGameStatis*, uintptr_t))(Il2CppBase() + 0x4EA79D4))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_role_grenade_id() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA79DC))(this);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_role_perk_id() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA79E4))(this);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_role_scorestreak_id() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA79EC))(this);
	}
	template <typename T = uint32_t> T get_ffa_rank() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA79F4))(this);
	}
	template <typename T = void> T set_ffa_rank(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA79FC))(this, value);
	}
	template <typename T = int32_t> T get_auto_fire() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7A04))(this);
	}
	template <typename T = void> T set_auto_fire(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA7A0C))(this, value);
	}
	template <typename T = uint32_t> T get_times_use_scorestreak() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7A14))(this);
	}
	template <typename T = void> T set_times_use_scorestreak(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7A1C))(this, value);
	}
	template <typename T = uint32_t> T get_times_use_roleskill() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7A24))(this);
	}
	template <typename T = void> T set_times_use_roleskill(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7A2C))(this, value);
	}
	template <typename T = uint32_t> T get_times_kill_boss() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7A34))(this);
	}
	template <typename T = void> T set_times_kill_boss(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7A3C))(this, value);
	}
	template <typename T = uint32_t> T get_times_kill_zombie() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7A44))(this);
	}
	template <typename T = void> T set_times_kill_zombie(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7A4C))(this, value);
	}
	template <typename T = uint32_t> T get_times_kill_hellhound() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7A54))(this);
	}
	template <typename T = void> T set_times_kill_hellhound(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7A5C))(this, value);
	}
	template <typename T = uint32_t> T get_times_kill_inferno() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7A64))(this);
	}
	template <typename T = void> T set_times_kill_inferno(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7A6C))(this, value);
	}
	template <typename T = uint32_t> T get_times_kill_denizen() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7A74))(this);
	}
	template <typename T = void> T set_times_kill_denizen(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7A7C))(this, value);
	}
	template <typename T = bool> T get_turn_to_mail() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7A84))(this);
	}
	template <typename T = void> T set_turn_to_mail(bool value) {
		return ((T (*)(PlayerGameStatis*, bool))(Il2CppBase() + 0x4EA7A8C))(this, value);
	}
	template <typename T = int32_t> T get_be_zm_hit_count() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7A94))(this);
	}
	template <typename T = void> T set_be_zm_hit_count(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA7A9C))(this, value);
	}
	template <typename T = bool> T get_is_firstwin() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7AA4))(this);
	}
	template <typename T = void> T set_is_firstwin(bool value) {
		return ((T (*)(PlayerGameStatis*, bool))(Il2CppBase() + 0x4EA7AAC))(this, value);
	}
	template <typename T = uint32_t> T get_spvp_non_drop_times_game() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7AB4))(this);
	}
	template <typename T = void> T set_spvp_non_drop_times_game(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7ABC))(this, value);
	}
	template <typename T = uint32_t> T get_pve_non_drop_times_game() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7AC4))(this);
	}
	template <typename T = void> T set_pve_non_drop_times_game(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7ACC))(this, value);
	}
	template <typename T = uint32_t> T get_apvp_non_drop_times_game() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7AD4))(this);
	}
	template <typename T = void> T set_apvp_non_drop_times_game(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7ADC))(this, value);
	}
	template <typename T = uint32_t> T get_spm_non_drop_times_game() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7AE4))(this);
	}
	template <typename T = void> T set_spm_non_drop_times_game(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7AEC))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_ult_statis() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7AF4))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_grenade_statis() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7AFC))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_streak_statis() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7B04))(this);
	}
	template <typename T = uint32_t> T get_daily_gain_apvp_gold() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7B0C))(this);
	}
	template <typename T = void> T set_daily_gain_apvp_gold(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7B14))(this, value);
	}
	template <typename T = int32_t> T get_award_apvp_gold() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7B1C))(this);
	}
	template <typename T = void> T set_award_apvp_gold(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA7B24))(this, value);
	}
	template <typename T = uintptr_t> T get_bonus_list() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7B2C))(this);
	}
	template <typename T = void> T set_bonus_list(uintptr_t value) {
		return ((T (*)(PlayerGameStatis*, uintptr_t))(Il2CppBase() + 0x4EA7B34))(this, value);
	}
	template <typename T = uint32_t> T get_player_live_cnt() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7B3C))(this);
	}
	template <typename T = void> T set_player_live_cnt(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7B44))(this, value);
	}
	template <typename T = uint32_t> T get_squad_pull_revived_times() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7B4C))(this);
	}
	template <typename T = void> T set_squad_pull_revived_times(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7B54))(this, value);
	}
	template <typename T = uint32_t> T get_ladder_score() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7B5C))(this);
	}
	template <typename T = void> T set_ladder_score(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7B64))(this, value);
	}
	template <typename T = uint32_t> T get_ladder_hidden_score() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7B6C))(this);
	}
	template <typename T = void> T set_ladder_hidden_score(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7B74))(this, value);
	}
	template <typename T = uint32_t> T get_team_id() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7B7C))(this);
	}
	template <typename T = void> T set_team_id(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7B84))(this, value);
	}
	template <typename T = uint32_t> T get_player_rank() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7B8C))(this);
	}
	template <typename T = void> T set_player_rank(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7B94))(this, value);
	}
	template <typename T = uint32_t> T get_team_rank() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7B9C))(this);
	}
	template <typename T = void> T set_team_rank(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7BA4))(this, value);
	}
	template <typename T = uintptr_t> T get_add_br_gold() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7BAC))(this);
	}
	template <typename T = void> T set_add_br_gold(uintptr_t value) {
		return ((T (*)(PlayerGameStatis*, uintptr_t))(Il2CppBase() + 0x4EA7BB4))(this, value);
	}
	template <typename T = uintptr_t> T get_add_br_exp() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7BBC))(this);
	}
	template <typename T = void> T set_add_br_exp(uintptr_t value) {
		return ((T (*)(PlayerGameStatis*, uintptr_t))(Il2CppBase() + 0x4EA7BC4))(this, value);
	}
	template <typename T = uint64_t> T get_total_take_damage() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7BCC))(this);
	}
	template <typename T = void> T set_total_take_damage(uint64_t value) {
		return ((T (*)(PlayerGameStatis*, uint64_t))(Il2CppBase() + 0x4EA7BDC))(this, value);
	}
	template <typename T = uint64_t> T get_total_get_damage() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7BE8))(this);
	}
	template <typename T = void> T set_total_get_damage(uint64_t value) {
		return ((T (*)(PlayerGameStatis*, uint64_t))(Il2CppBase() + 0x4EA7BF8))(this, value);
	}
	template <typename T = uint32_t> T get_cure_value() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7C04))(this);
	}
	template <typename T = void> T set_cure_value(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7C0C))(this, value);
	}
	template <typename T = uint32_t> T get_times_cure() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7C14))(this);
	}
	template <typename T = void> T set_times_cure(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7C1C))(this, value);
	}
	template <typename T = uint32_t> T get_player_game_state() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7C24))(this);
	}
	template <typename T = void> T set_player_game_state(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7C2C))(this, value);
	}
	template <typename T = uint32_t> T get_team_game_state() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7C34))(this);
	}
	template <typename T = void> T set_team_game_state(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7C3C))(this, value);
	}
	template <typename T = uint32_t> T get_player_sex() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7C44))(this);
	}
	template <typename T = void> T set_player_sex(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7C4C))(this, value);
	}
	template <typename T = uint32_t> T get_survival_time() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7C54))(this);
	}
	template <typename T = void> T set_survival_time(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7C5C))(this, value);
	}
	template <typename T = uint32_t> T get_times_save() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7C64))(this);
	}
	template <typename T = void> T set_times_save(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7C6C))(this, value);
	}
	template <typename T = uint32_t> T get_times_reborn() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7C74))(this);
	}
	template <typename T = void> T set_times_reborn(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7C7C))(this, value);
	}
	template <typename T = uint32_t> T get_rating_score() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7C84))(this);
	}
	template <typename T = void> T set_rating_score(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7C8C))(this, value);
	}
	template <typename T = int32_t> T get_add_br_ladder_score() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7C94))(this);
	}
	template <typename T = void> T set_add_br_ladder_score(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA7C9C))(this, value);
	}
	template <typename T = int32_t> T get_add_br_ladder_hidden_score() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7CA4))(this);
	}
	template <typename T = void> T set_add_br_ladder_hidden_score(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA7CAC))(this, value);
	}
	template <typename T = uint32_t> T get_spvp_times_game() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7CB4))(this);
	}
	template <typename T = void> T set_spvp_times_game(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7CBC))(this, value);
	}
	template <typename T = uint32_t> T get_apvp_times_game() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7CC4))(this);
	}
	template <typename T = void> T set_apvp_times_game(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7CCC))(this, value);
	}
	template <typename T = uint32_t> T get_pickup_item_value() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7CD4))(this);
	}
	template <typename T = void> T set_pickup_item_value(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7CDC))(this, value);
	}
	template <typename T = uint32_t> T get_player_team_rank() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7CE4))(this);
	}
	template <typename T = void> T set_player_team_rank(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7CEC))(this, value);
	}
	template <typename T = bool> T get_is_mvp() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7CF4))(this);
	}
	template <typename T = void> T set_is_mvp(bool value) {
		return ((T (*)(PlayerGameStatis*, bool))(Il2CppBase() + 0x4EA7CFC))(this, value);
	}
	template <typename T = uint32_t> T get_br_match_mmr() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7D04))(this);
	}
	template <typename T = void> T set_br_match_mmr(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7D0C))(this, value);
	}
	template <typename T = uint32_t> T get_br_ladder_score() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7D14))(this);
	}
	template <typename T = void> T set_br_ladder_score(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7D1C))(this, value);
	}
	template <typename T = uint32_t> T get_br_ladder_hidden_score() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7D24))(this);
	}
	template <typename T = void> T set_br_ladder_hidden_score(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7D2C))(this, value);
	}
	template <typename T = uint32_t> T get_max_kill_distance() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7D34))(this);
	}
	template <typename T = void> T set_max_kill_distance(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7D3C))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_detail_info() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7D44))(this);
	}
	template <typename T = uint64_t> T get_ds_player_id() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7D4C))(this);
	}
	template <typename T = void> T set_ds_player_id(uint64_t value) {
		return ((T (*)(PlayerGameStatis*, uint64_t))(Il2CppBase() + 0x4EA7D5C))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_card_prop_info_ary() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7D68))(this);
	}
	template <typename T = uint64_t> T get_total_take_boss_damage() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7D70))(this);
	}
	template <typename T = void> T set_total_take_boss_damage(uint64_t value) {
		return ((T (*)(PlayerGameStatis*, uint64_t))(Il2CppBase() + 0x4EA7D80))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_consumable_items() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7D8C))(this);
	}
	template <typename T = uint32_t> T get_hit_weakpoint_times() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7D94))(this);
	}
	template <typename T = void> T set_hit_weakpoint_times(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7D9C))(this, value);
	}
	template <typename T = uint32_t> T get_game_level() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7DA4))(this);
	}
	template <typename T = void> T set_game_level(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7DAC))(this, value);
	}
	template <typename T = bool> T get_is_play_with_friend() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7DB4))(this);
	}
	template <typename T = void> T set_is_play_with_friend(bool value) {
		return ((T (*)(PlayerGameStatis*, bool))(Il2CppBase() + 0x4EA7DBC))(this, value);
	}
	template <typename T = uint32_t> T get_times_vehicle_kill() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7DC4))(this);
	}
	template <typename T = void> T set_times_vehicle_kill(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7DCC))(this, value);
	}
	template <typename T = uint32_t> T get_times_lying_kill() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7DD4))(this);
	}
	template <typename T = void> T set_times_lying_kill(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7DDC))(this, value);
	}
	template <typename T = uint32_t> T get_times_bushes_kill() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7DE4))(this);
	}
	template <typename T = void> T set_times_bushes_kill(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7DEC))(this, value);
	}
	template <typename T = uint32_t> T get_times_useknife_kill() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7DF4))(this);
	}
	template <typename T = void> T set_times_useknife_kill(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7DFC))(this, value);
	}
	template <typename T = float> T get_walk_distance() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7E04))(this);
	}
	template <typename T = void> T set_walk_distance(float value) {
		return ((T (*)(PlayerGameStatis*, float))(Il2CppBase() + 0x4EA7E0C))(this, value);
	}
	template <typename T = float> T get_driver_vehicle_distance() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7E14))(this);
	}
	template <typename T = void> T set_driver_vehicle_distance(float value) {
		return ((T (*)(PlayerGameStatis*, float))(Il2CppBase() + 0x4EA7E1C))(this, value);
	}
	template <typename T = float> T get_swim_distance() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7E24))(this);
	}
	template <typename T = void> T set_swim_distance(float value) {
		return ((T (*)(PlayerGameStatis*, float))(Il2CppBase() + 0x4EA7E2C))(this, value);
	}
	template <typename T = float> T get_skydiving_distance() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7E34))(this);
	}
	template <typename T = void> T set_skydiving_distance(float value) {
		return ((T (*)(PlayerGameStatis*, float))(Il2CppBase() + 0x4EA7E3C))(this, value);
	}
	template <typename T = uint32_t> T get_times_kill_skydiving() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7E44))(this);
	}
	template <typename T = void> T set_times_kill_skydiving(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7E4C))(this, value);
	}
	template <typename T = uint32_t> T get_times_kill_vehicle() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7E54))(this);
	}
	template <typename T = void> T set_times_kill_vehicle(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7E5C))(this, value);
	}
	template <typename T = uint32_t> T get_skydiv_use_time_sec() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7E64))(this);
	}
	template <typename T = void> T set_skydiv_use_time_sec(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7E6C))(this, value);
	}
	template <typename T = bool> T get_stand_of_arms() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7E74))(this);
	}
	template <typename T = void> T set_stand_of_arms(bool value) {
		return ((T (*)(PlayerGameStatis*, bool))(Il2CppBase() + 0x4EA7E7C))(this, value);
	}
	template <typename T = uint32_t> T get_kill_without_time_scope() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7E84))(this);
	}
	template <typename T = void> T set_kill_without_time_scope(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7E8C))(this, value);
	}
	template <typename T = uint32_t> T get_kill_stealing() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7E94))(this);
	}
	template <typename T = void> T set_kill_stealing(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7E9C))(this, value);
	}
	template <typename T = uint32_t> T get_diving_time_sec() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7EA4))(this);
	}
	template <typename T = void> T set_diving_time_sec(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7EAC))(this, value);
	}
	template <typename T = uint32_t> T get_lying_time() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7EB4))(this);
	}
	template <typename T = void> T set_lying_time(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7EBC))(this, value);
	}
	template <typename T = uint32_t> T get_dying_times() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7EC4))(this);
	}
	template <typename T = void> T set_dying_times(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7ECC))(this, value);
	}
	template <typename T = uint32_t> T get_do_nothing_time_sec() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7ED4))(this);
	}
	template <typename T = void> T set_do_nothing_time_sec(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7EDC))(this, value);
	}
	template <typename T = bool> T get_top_ten_without_kill() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7EE4))(this);
	}
	template <typename T = void> T set_top_ten_without_kill(bool value) {
		return ((T (*)(PlayerGameStatis*, bool))(Il2CppBase() + 0x4EA7EEC))(this, value);
	}
	template <typename T = uint32_t> T get_rich_pick() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7EF4))(this);
	}
	template <typename T = void> T set_rich_pick(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7EFC))(this, value);
	}
	template <typename T = uint32_t> T get_head_shot_kill_times() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7F04))(this);
	}
	template <typename T = void> T set_head_shot_kill_times(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7F0C))(this, value);
	}
	template <typename T = bool> T get_suicide() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7F14))(this);
	}
	template <typename T = void> T set_suicide(bool value) {
		return ((T (*)(PlayerGameStatis*, bool))(Il2CppBase() + 0x4EA7F1C))(this, value);
	}
	template <typename T = bool> T get_kill_by_bombardment() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7F24))(this);
	}
	template <typename T = void> T set_kill_by_bombardment(bool value) {
		return ((T (*)(PlayerGameStatis*, bool))(Il2CppBase() + 0x4EA7F2C))(this, value);
	}
	template <typename T = uint32_t> T get_pick_airdrop() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7F34))(this);
	}
	template <typename T = void> T set_pick_airdrop(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7F3C))(this, value);
	}
	template <typename T = uint32_t> T get_hp_time() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7F44))(this);
	}
	template <typename T = void> T set_hp_time(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7F4C))(this, value);
	}
	template <typename T = uint32_t> T get_hp_kill_times() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7F54))(this);
	}
	template <typename T = void> T set_hp_kill_times(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7F5C))(this, value);
	}
	template <typename T = uint32_t> T get_shot_gun_kill_times() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7F64))(this);
	}
	template <typename T = void> T set_shot_gun_kill_times(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7F6C))(this, value);
	}
	template <typename T = int32_t> T get_add_ladder_score() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7F74))(this);
	}
	template <typename T = void> T set_add_ladder_score(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA7F7C))(this, value);
	}
	template <typename T = int32_t> T get_add_ladder_hidden_score() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7F84))(this);
	}
	template <typename T = void> T set_add_ladder_hidden_score(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA7F8C))(this, value);
	}
	template <typename T = uint32_t> T get_self_pull_revived_times() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7F94))(this);
	}
	template <typename T = void> T set_self_pull_revived_times(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7F9C))(this, value);
	}
	template <typename T = uint32_t> T get_revive_coin_to_self_times() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7FA4))(this);
	}
	template <typename T = void> T set_revive_coin_to_self_times(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7FAC))(this, value);
	}
	template <typename T = uint32_t> T get_revive_coin_to_squad_times() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7FB4))(this);
	}
	template <typename T = void> T set_revive_coin_to_squad_times(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7FBC))(this, value);
	}
	template <typename T = uintptr_t> T get_spvp_promotion_info() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7FC4))(this);
	}
	template <typename T = void> T set_spvp_promotion_info(uintptr_t value) {
		return ((T (*)(PlayerGameStatis*, uintptr_t))(Il2CppBase() + 0x4EA7FCC))(this, value);
	}
	template <typename T = uint32_t> T get_wincircle_individuation_itemid() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7FD4))(this);
	}
	template <typename T = void> T set_wincircle_individuation_itemid(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7FDC))(this, value);
	}
	template <typename T = uint32_t> T get_spvp_ladder_times_game() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7FE4))(this);
	}
	template <typename T = void> T set_spvp_ladder_times_game(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA7FEC))(this, value);
	}
	template <typename T = int32_t> T get_pve_enter_mission_id() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA7FF4))(this);
	}
	template <typename T = void> T set_pve_enter_mission_id(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA7FFC))(this, value);
	}
	template <typename T = bool> T get_is_ladder_grading() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8004))(this);
	}
	template <typename T = void> T set_is_ladder_grading(bool value) {
		return ((T (*)(PlayerGameStatis*, bool))(Il2CppBase() + 0x4EA800C))(this, value);
	}
	template <typename T = bool> T get_ladder_grading_succ() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8014))(this);
	}
	template <typename T = void> T set_ladder_grading_succ(bool value) {
		return ((T (*)(PlayerGameStatis*, bool))(Il2CppBase() + 0x4EA801C))(this, value);
	}
	template <typename T = uint32_t> T get_max_continuous_kill_count() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8024))(this);
	}
	template <typename T = void> T set_max_continuous_kill_count(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA802C))(this, value);
	}
	template <typename T = bool> T get_is_reset_ladder_score() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8034))(this);
	}
	template <typename T = void> T set_is_reset_ladder_score(bool value) {
		return ((T (*)(PlayerGameStatis*, bool))(Il2CppBase() + 0x4EA803C))(this, value);
	}
	template <typename T = uint32_t> T get_reset_ladder_score() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8044))(this);
	}
	template <typename T = void> T set_reset_ladder_score(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA804C))(this, value);
	}
	template <typename T = uint32_t> T get_reset_ladder_hidden_score() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8054))(this);
	}
	template <typename T = void> T set_reset_ladder_hidden_score(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA805C))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_exp_buff_list() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8064))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_gold_buff_list() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA806C))(this);
	}
	template <typename T = uint32_t> T get_grouproom_id() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8074))(this);
	}
	template <typename T = void> T set_grouproom_id(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA807C))(this, value);
	}
	template <typename T = uint32_t> T get_grouproom_create_time() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8084))(this);
	}
	template <typename T = void> T set_grouproom_create_time(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA808C))(this, value);
	}
	template <typename T = uint32_t> T get_grouproom_bus_id() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8094))(this);
	}
	template <typename T = void> T set_grouproom_bus_id(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA809C))(this, value);
	}
	template <typename T = uint32_t> T get_max_use_time_weapon_id() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA80A4))(this);
	}
	template <typename T = void> T set_max_use_time_weapon_id(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA80AC))(this, value);
	}
	template <typename T = uint32_t> T get_item_score() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA80B4))(this);
	}
	template <typename T = void> T set_item_score(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA80BC))(this, value);
	}
	template <typename T = uint32_t> T get_survival_score() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA80C4))(this);
	}
	template <typename T = void> T set_survival_score(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA80CC))(this, value);
	}
	template <typename T = uint32_t> T get_combat_score() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA80D4))(this);
	}
	template <typename T = void> T set_combat_score(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA80DC))(this, value);
	}
	template <typename T = uint32_t> T get_saveteamate_score() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA80E4))(this);
	}
	template <typename T = void> T set_saveteamate_score(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA80EC))(this, value);
	}
	template <typename T = uint32_t> T get_beat_score() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA80F4))(this);
	}
	template <typename T = void> T set_beat_score(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA80FC))(this, value);
	}
	template <typename T = uint32_t> T get_times_hit_weak_target() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8104))(this);
	}
	template <typename T = void> T set_times_hit_weak_target(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA810C))(this, value);
	}
	template <typename T = float> T get_forward_distance() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8114))(this);
	}
	template <typename T = void> T set_forward_distance(float value) {
		return ((T (*)(PlayerGameStatis*, float))(Il2CppBase() + 0x4EA811C))(this, value);
	}
	template <typename T = uint32_t> T get_times_use_skill_item() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8124))(this);
	}
	template <typename T = void> T set_times_use_skill_item(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA812C))(this, value);
	}
	template <typename T = uint32_t> T get_hp_score() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8134))(this);
	}
	template <typename T = void> T set_hp_score(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA813C))(this, value);
	}
	template <typename T = uint32_t> T get_times_hit_target_dying() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8144))(this);
	}
	template <typename T = void> T set_times_hit_target_dying(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA814C))(this, value);
	}
	template <typename T = uint32_t> T get_sys_avg_score() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8154))(this);
	}
	template <typename T = void> T set_sys_avg_score(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA815C))(this, value);
	}
	template <typename T = uint32_t> T get_pve_kill_score() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8164))(this);
	}
	template <typename T = void> T set_pve_kill_score(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA816C))(this, value);
	}
	template <typename T = uint32_t> T get_pve_passtime_score() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8174))(this);
	}
	template <typename T = void> T set_pve_passtime_score(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA817C))(this, value);
	}
	template <typename T = uint32_t> T get_pve_hit_score() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8184))(this);
	}
	template <typename T = void> T set_pve_hit_score(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA818C))(this, value);
	}
	template <typename T = uint32_t> T get_pve_crit_score() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8194))(this);
	}
	template <typename T = void> T set_pve_crit_score(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA819C))(this, value);
	}
	template <typename T = uint32_t> T get_pve_dead_score() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA81A4))(this);
	}
	template <typename T = void> T set_pve_dead_score(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA81AC))(this, value);
	}
	template <typename T = uint64_t> T get_start_match_id() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA81B4))(this);
	}
	template <typename T = void> T set_start_match_id(uint64_t value) {
		return ((T (*)(PlayerGameStatis*, uint64_t))(Il2CppBase() + 0x4EA81C4))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_weapon_exp_buff_list() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA81D0))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_gsp_buf_list() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA81D8))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_br_exp_card_list() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA81E0))(this);
	}
	template <typename T = uintptr_t> T get_add_pvp_exp() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA81E8))(this);
	}
	template <typename T = void> T set_add_pvp_exp(uintptr_t value) {
		return ((T (*)(PlayerGameStatis*, uintptr_t))(Il2CppBase() + 0x4EA81F0))(this, value);
	}
	template <typename T = uintptr_t> T get_battle_pass_data() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA81F8))(this);
	}
	template <typename T = void> T set_battle_pass_data(uintptr_t value) {
		return ((T (*)(PlayerGameStatis*, uintptr_t))(Il2CppBase() + 0x4EA8200))(this, value);
	}
	template <typename T = bool> T get_is_drop() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8208))(this);
	}
	template <typename T = void> T set_is_drop(bool value) {
		return ((T (*)(PlayerGameStatis*, bool))(Il2CppBase() + 0x4EA8210))(this, value);
	}
	template <typename T = uint32_t> T get_group_player_num() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8218))(this);
	}
	template <typename T = void> T set_group_player_num(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA8220))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_ach_list() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8228))(this);
	}
	template <typename T = uint32_t> T get_spvp_ladder_level() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8230))(this);
	}
	template <typename T = void> T set_spvp_ladder_level(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA8238))(this, value);
	}
	template <typename T = uint32_t> T get_br_ladder_level() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8240))(this);
	}
	template <typename T = void> T set_br_ladder_level(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA8248))(this, value);
	}
	template <typename T = uint32_t> T get_skill_level() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8250))(this);
	}
	template <typename T = void> T set_skill_level(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA8258))(this, value);
	}
	template <typename T = uint32_t> T get_abtest_player_flag() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8260))(this);
	}
	template <typename T = void> T set_abtest_player_flag(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA8268))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_br_add_exp_card_list() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8270))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_killer_player_info() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8278))(this);
	}
	template <typename T = bool> T get_reach_week_exp_limit() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8280))(this);
	}
	template <typename T = void> T set_reach_week_exp_limit(bool value) {
		return ((T (*)(PlayerGameStatis*, bool))(Il2CppBase() + 0x4EA8288))(this, value);
	}
	template <typename T = uint32_t> T get_max_use_time_weapon_camoid() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8290))(this);
	}
	template <typename T = void> T set_max_use_time_weapon_camoid(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA8298))(this, value);
	}
	template <typename T = uint32_t> T get_times_resurrection() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA82A0))(this);
	}
	template <typename T = void> T set_times_resurrection(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA82A8))(this, value);
	}
	template <typename T = uint32_t> T get_actv_weapon_exp_buf() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA82B0))(this);
	}
	template <typename T = void> T set_actv_weapon_exp_buf(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA82B8))(this, value);
	}
	template <typename T = uint32_t> T get_actv_player_exp_buf() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA82C0))(this);
	}
	template <typename T = void> T set_actv_player_exp_buf(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA82C8))(this, value);
	}
	template <typename T = uint32_t> T get_teammate_dog_tag_value() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA82D0))(this);
	}
	template <typename T = void> T set_teammate_dog_tag_value(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA82D8))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_pickup_item_statis() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA82E0))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_use_item_statis() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA82E8))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_use_vehicle_statis() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA82F0))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_cure_statis() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA82F8))(this);
	}
	template <typename T = uintptr_t> T get_land_pos() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8300))(this);
	}
	template <typename T = void> T set_land_pos(uintptr_t value) {
		return ((T (*)(PlayerGameStatis*, uintptr_t))(Il2CppBase() + 0x4EA8308))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_player_kill_statis() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8310))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_use_individuation_statis() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8318))(this);
	}
	template <typename T = uint32_t> T get_dog_tag() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8320))(this);
	}
	template <typename T = void> T set_dog_tag(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA8328))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_profession_chip_statis() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8330))(this);
	}
	template <typename T = int32_t> T get_times_kill_bot() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8338))(this);
	}
	template <typename T = void> T set_times_kill_bot(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA8340))(this, value);
	}
	template <typename T = int32_t> T get_times_kill_zm() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8348))(this);
	}
	template <typename T = void> T set_times_kill_zm(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA8350))(this, value);
	}
	template <typename T = int32_t> T get_times_be_bot_killed() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8358))(this);
	}
	template <typename T = void> T set_times_be_bot_killed(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA8360))(this, value);
	}
	template <typename T = int32_t> T get_times_be_zm_killed() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8368))(this);
	}
	template <typename T = void> T set_times_be_zm_killed(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA8370))(this, value);
	}
	template <typename T = bool> T get_endless_new_highest_round() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8378))(this);
	}
	template <typename T = void> T set_endless_new_highest_round(bool value) {
		return ((T (*)(PlayerGameStatis*, bool))(Il2CppBase() + 0x4EA8380))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_mlk_add_exp_card_list() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8388))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_player_mission_statis() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8390))(this);
	}
	template <typename T = uint32_t> T get_team_seat_id() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8398))(this);
	}
	template <typename T = void> T set_team_seat_id(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA83A0))(this, value);
	}
	template <typename T = uint64_t> T get_player_guid() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA83A8))(this);
	}
	template <typename T = void> T set_player_guid(uint64_t value) {
		return ((T (*)(PlayerGameStatis*, uint64_t))(Il2CppBase() + 0x4EA83B8))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_hurter_player_info() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA83C4))(this);
	}
	template <typename T = uint32_t> T get_slide_times() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA83CC))(this);
	}
	template <typename T = void> T set_slide_times(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA83D4))(this, value);
	}
	template <typename T = float> T get_slide_distance() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA83DC))(this);
	}
	template <typename T = void> T set_slide_distance(float value) {
		return ((T (*)(PlayerGameStatis*, float))(Il2CppBase() + 0x4EA83E4))(this, value);
	}
	template <typename T = uint32_t> T get_number_shot_bullet() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA83EC))(this);
	}
	template <typename T = void> T set_number_shot_bullet(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA83F4))(this, value);
	}
	template <typename T = uint32_t> T get_times_handgun_kill() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA83FC))(this);
	}
	template <typename T = void> T set_times_handgun_kill(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA8404))(this, value);
	}
	template <typename T = uint32_t> T get_times_rpg_kill() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA840C))(this);
	}
	template <typename T = void> T set_times_rpg_kill(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA8414))(this, value);
	}
	template <typename T = uint32_t> T get_max_kill_sameplayer_num() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA841C))(this);
	}
	template <typename T = void> T set_max_kill_sameplayer_num(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA8424))(this, value);
	}
	template <typename T = uint32_t> T get_times_open_air_box() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA842C))(this);
	}
	template <typename T = void> T set_times_open_air_box(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA8434))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_open_zm_box_statis() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA843C))(this);
	}
	template <typename T = float> T get_skyfly_distance() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8444))(this);
	}
	template <typename T = void> T set_skyfly_distance(float value) {
		return ((T (*)(PlayerGameStatis*, float))(Il2CppBase() + 0x4EA844C))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_have_easter_item_statis() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8454))(this);
	}
	template <typename T = uint32_t> T get_use_joystick() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA845C))(this);
	}
	template <typename T = void> T set_use_joystick(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA8464))(this, value);
	}
	template <typename T = uint32_t> T get_use_trap_count() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA846C))(this);
	}
	template <typename T = void> T set_use_trap_count(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA8474))(this, value);
	}
	template <typename T = uint32_t> T get_trap_kill_zombie_count() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA847C))(this);
	}
	template <typename T = void> T set_trap_kill_zombie_count(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA8484))(this, value);
	}
	template <typename T = uint32_t> T get_open_weapon_box_count() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA848C))(this);
	}
	template <typename T = void> T set_open_weapon_box_count(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA8494))(this, value);
	}
	template <typename T = uint32_t> T get_gain_point_num() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA849C))(this);
	}
	template <typename T = void> T set_gain_point_num(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA84A4))(this, value);
	}
	template <typename T = uint32_t> T get_playerend_ult_id() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA84AC))(this);
	}
	template <typename T = void> T set_playerend_ult_id(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA84B4))(this, value);
	}
	template <typename T = uint32_t> T get_playerend_chip_id() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA84BC))(this);
	}
	template <typename T = void> T set_playerend_chip_id(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA84C4))(this, value);
	}
	template <typename T = uint32_t> T get_playerend_chip_type() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA84CC))(this);
	}
	template <typename T = void> T set_playerend_chip_type(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA84D4))(this, value);
	}
	template <typename T = uint32_t> T get_playerend_mainweapon1() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA84DC))(this);
	}
	template <typename T = void> T set_playerend_mainweapon1(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA84E4))(this, value);
	}
	template <typename T = uint32_t> T get_playerend_mainweapon2() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA84EC))(this);
	}
	template <typename T = void> T set_playerend_mainweapon2(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA84F4))(this, value);
	}
	template <typename T = uint32_t> T get_times_kill_normal_zombie() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA84FC))(this);
	}
	template <typename T = void> T set_times_kill_normal_zombie(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA8504))(this, value);
	}
	template <typename T = uint32_t> T get_times_kill_special_zombie() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA850C))(this);
	}
	template <typename T = void> T set_times_kill_special_zombie(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA8514))(this, value);
	}
	template <typename T = uint32_t> T get_gain_weapon_by_weapon_box() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA851C))(this);
	}
	template <typename T = void> T set_gain_weapon_by_weapon_box(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA8524))(this, value);
	}
	template <typename T = uint32_t> T get_gain_weapon_by_offwall() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA852C))(this);
	}
	template <typename T = void> T set_gain_weapon_by_offwall(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA8534))(this, value);
	}
	template <typename T = uint32_t> T get_times_build_window() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA853C))(this);
	}
	template <typename T = void> T set_times_build_window(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA8544))(this, value);
	}
	template <typename T = uint32_t> T get_buff_machine_new_buff_num() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA854C))(this);
	}
	template <typename T = void> T set_buff_machine_new_buff_num(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA8554))(this, value);
	}
	template <typename T = uint32_t> T get_buff_machine_levelup_buff_num() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA855C))(this);
	}
	template <typename T = void> T set_buff_machine_levelup_buff_num(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA8564))(this, value);
	}
	template <typename T = uint32_t> T get_times_perk_coin_machine_use() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA856C))(this);
	}
	template <typename T = void> T set_times_perk_coin_machine_use(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA8574))(this, value);
	}
	template <typename T = uint32_t> T get_times_gain_perk() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA857C))(this);
	}
	template <typename T = void> T set_times_gain_perk(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA8584))(this, value);
	}
	template <typename T = uint32_t> T get_times_offwall_gain_ammo() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA858C))(this);
	}
	template <typename T = void> T set_times_offwall_gain_ammo(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA8594))(this, value);
	}
	template <typename T = uint32_t> T get_times_pickup_powerup() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA859C))(this);
	}
	template <typename T = void> T set_times_pickup_powerup(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA85A4))(this, value);
	}
	template <typename T = int32_t> T get_bag_appear() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA85AC))(this);
	}
	template <typename T = void> T set_bag_appear(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA85B4))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_pve_item_award() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA85BC))(this);
	}
	template <typename T = uint32_t> T get_times_buff_machine_use() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA85C4))(this);
	}
	template <typename T = void> T set_times_buff_machine_use(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA85CC))(this, value);
	}
	template <typename T = uint32_t> T get_times_pap_use() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA85D4))(this);
	}
	template <typename T = void> T set_times_pap_use(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA85DC))(this, value);
	}
	template <typename T = uint32_t> T get_times_max_kill_zombie_one_life() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA85E4))(this);
	}
	template <typename T = void> T set_times_max_kill_zombie_one_life(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA85EC))(this, value);
	}
	template <typename T = bool> T get_is_fail_mvp() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA85F4))(this);
	}
	template <typename T = void> T set_is_fail_mvp(bool value) {
		return ((T (*)(PlayerGameStatis*, bool))(Il2CppBase() + 0x4EA85FC))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_score_details() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8604))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_kill_vehicle_statis() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA860C))(this);
	}
	template <typename T = uint32_t> T get_times_mark() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8614))(this);
	}
	template <typename T = void> T set_times_mark(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA861C))(this, value);
	}
	template <typename T = int32_t> T get_times_revenge_kill() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8624))(this);
	}
	template <typename T = void> T set_times_revenge_kill(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA862C))(this, value);
	}
	template <typename T = int32_t> T get_times_reload_ammo() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8634))(this);
	}
	template <typename T = void> T set_times_reload_ammo(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA863C))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_perk_statis() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8644))(this);
	}
	template <typename T = uint32_t> T get_times_emp_take_effect() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA864C))(this);
	}
	template <typename T = void> T set_times_emp_take_effect(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA8654))(this, value);
	}
	template <typename T = uint32_t> T get_times_rpg_destroy_scorestreak() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA865C))(this);
	}
	template <typename T = void> T set_times_rpg_destroy_scorestreak(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA8664))(this, value);
	}
	template <typename T = int32_t> T get_enter_source() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA866C))(this);
	}
	template <typename T = void> T set_enter_source(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA8674))(this, value);
	}
	template <typename T = int32_t> T get_wingsuit() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA867C))(this);
	}
	template <typename T = void> T set_wingsuit(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA8684))(this, value);
	}
	template <typename T = int32_t> T get_parachute() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA868C))(this);
	}
	template <typename T = void> T set_parachute(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA8694))(this, value);
	}
	template <typename T = int32_t> T get_hat_appear() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA869C))(this);
	}
	template <typename T = void> T set_hat_appear(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA86A4))(this, value);
	}
	template <typename T = int32_t> T get_cloth_appear() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA86AC))(this);
	}
	template <typename T = void> T set_cloth_appear(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA86B4))(this, value);
	}
	template <typename T = int32_t> T get_suit_appear() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA86BC))(this);
	}
	template <typename T = void> T set_suit_appear(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA86C4))(this, value);
	}
	template <typename T = bool> T get_is_play_with_gamefriend() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA86CC))(this);
	}
	template <typename T = void> T set_is_play_with_gamefriend(bool value) {
		return ((T (*)(PlayerGameStatis*, bool))(Il2CppBase() + 0x4EA86D4))(this, value);
	}
	template <typename T = bool> T get_is_play_with_relativefriend() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA86DC))(this);
	}
	template <typename T = void> T set_is_play_with_relativefriend(bool value) {
		return ((T (*)(PlayerGameStatis*, bool))(Il2CppBase() + 0x4EA86E4))(this, value);
	}
	template <typename T = int32_t> T get_start_match_num_player() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA86EC))(this);
	}
	template <typename T = void> T set_start_match_num_player(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA86F4))(this, value);
	}
	template <typename T = bool> T get_is_actv_ladder_no_drop_score() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA86FC))(this);
	}
	template <typename T = void> T set_is_actv_ladder_no_drop_score(bool value) {
		return ((T (*)(PlayerGameStatis*, bool))(Il2CppBase() + 0x4EA8704))(this, value);
	}
	template <typename T = bool> T get_is_actv_ladder_add_score() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA870C))(this);
	}
	template <typename T = void> T set_is_actv_ladder_add_score(bool value) {
		return ((T (*)(PlayerGameStatis*, bool))(Il2CppBase() + 0x4EA8714))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_weapon_suite_ids() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA871C))(this);
	}
	template <typename T = uintptr_t> T get_weapon_suite_bonus() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8724))(this);
	}
	template <typename T = void> T set_weapon_suite_bonus(uintptr_t value) {
		return ((T (*)(PlayerGameStatis*, uintptr_t))(Il2CppBase() + 0x4EA872C))(this, value);
	}
	template <typename T = uint32_t> T get_easter_grenade_use_count() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8734))(this);
	}
	template <typename T = void> T set_easter_grenade_use_count(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA873C))(this, value);
	}
	template <typename T = uint32_t> T get_easter_grenade_hit_count() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8744))(this);
	}
	template <typename T = void> T set_easter_grenade_hit_count(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA874C))(this, value);
	}
	template <typename T = uint32_t> T get_easter_egg_crushed_count() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8754))(this);
	}
	template <typename T = void> T set_easter_egg_crushed_count(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA875C))(this, value);
	}
	template <typename T = uint32_t> T get_easter_animal_games_start_count() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8764))(this);
	}
	template <typename T = void> T set_easter_animal_games_start_count(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA876C))(this, value);
	}
	template <typename T = uint32_t> T get_easter_animal_games_victory_count() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8774))(this);
	}
	template <typename T = void> T set_easter_animal_games_victory_count(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA877C))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_in_game_items_num() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8784))(this);
	}
	template <typename T = uintptr_t> T get_in_game_item_info() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA878C))(this);
	}
	template <typename T = void> T set_in_game_item_info(uintptr_t value) {
		return ((T (*)(PlayerGameStatis*, uintptr_t))(Il2CppBase() + 0x4EA8794))(this, value);
	}
	template <typename T = uintptr_t> T get_bp_exp_detail() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA879C))(this);
	}
	template <typename T = void> T set_bp_exp_detail(uintptr_t value) {
		return ((T (*)(PlayerGameStatis*, uintptr_t))(Il2CppBase() + 0x4EA87A4))(this, value);
	}
	template <typename T = int32_t> T get_warm_type() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA87AC))(this);
	}
	template <typename T = void> T set_warm_type(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA87B4))(this, value);
	}
	template <typename T = uint64_t> T get_back_timestamp() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA87BC))(this);
	}
	template <typename T = void> T set_back_timestamp(uint64_t value) {
		return ((T (*)(PlayerGameStatis*, uint64_t))(Il2CppBase() + 0x4EA87CC))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_spvp_selected_playlist_id() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA87D8))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_gun_role_perk_statis() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA87E0))(this);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_final_role_perk_id() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA87E8))(this);
	}
	template <typename T = uint32_t> T get_times_player_become_goliath() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA87F0))(this);
	}
	template <typename T = void> T set_times_player_become_goliath(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA87F8))(this, value);
	}
	template <typename T = uint32_t> T get_times_kill_attacker() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8800))(this);
	}
	template <typename T = void> T set_times_kill_attacker(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA8808))(this, value);
	}
	template <typename T = uint32_t> T get_times_kill_defender() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8810))(this);
	}
	template <typename T = void> T set_times_kill_defender(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA8818))(this, value);
	}
	template <typename T = uint32_t> T get_times_survivor_alive_time() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8820))(this);
	}
	template <typename T = void> T set_times_survivor_alive_time(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA8828))(this, value);
	}
	template <typename T = uint32_t> T get_times_goliath_kill() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8830))(this);
	}
	template <typename T = void> T set_times_goliath_kill(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA8838))(this, value);
	}
	template <typename T = uint32_t> T get_collect_robot_part_count() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8840))(this);
	}
	template <typename T = void> T set_collect_robot_part_count(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA8848))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_interactivet_robot_count() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8850))(this);
	}
	template <typename T = bool> T get_use_paramount_cd() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8858))(this);
	}
	template <typename T = void> T set_use_paramount_cd(bool value) {
		return ((T (*)(PlayerGameStatis*, bool))(Il2CppBase() + 0x4EA8860))(this, value);
	}
	template <typename T = bool> T get_use_black_market_machine() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8868))(this);
	}
	template <typename T = void> T set_use_black_market_machine(bool value) {
		return ((T (*)(PlayerGameStatis*, bool))(Il2CppBase() + 0x4EA8870))(this, value);
	}
	template <typename T = int32_t> T get_mp_season_no() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8878))(this);
	}
	template <typename T = void> T set_mp_season_no(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA8880))(this, value);
	}
	template <typename T = int32_t> T get_br_season_no() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8888))(this);
	}
	template <typename T = void> T set_br_season_no(int32_t value) {
		return ((T (*)(PlayerGameStatis*, int32_t))(Il2CppBase() + 0x4EA8890))(this, value);
	}
	template <typename T = uint32_t> T get_bio_chemical_barrel_crushed_count() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA8898))(this);
	}
	template <typename T = void> T set_bio_chemical_barrel_crushed_count(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA88A0))(this, value);
	}
	template <typename T = uint32_t> T get_choose_profession_chip_id() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA88A8))(this);
	}
	template <typename T = void> T set_choose_profession_chip_id(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA88B0))(this, value);
	}
	template <typename T = uint32_t> T get_times_active_nuclear_bomb() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA88B8))(this);
	}
	template <typename T = void> T set_times_active_nuclear_bomb(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA88C0))(this, value);
	}
	template <typename T = uint32_t> T get_times_goliath_dead() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA88C8))(this);
	}
	template <typename T = void> T set_times_goliath_dead(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA88D0))(this, value);
	}
	template <typename T = uint32_t> T get_ai_lab_id() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA88D8))(this);
	}
	template <typename T = void> T set_ai_lab_id(uint32_t value) {
		return ((T (*)(PlayerGameStatis*, uint32_t))(Il2CppBase() + 0x4EA88E0))(this, value);
	}
	template <typename T = bool> T get_is_br_final() {
		return ((T (*)(PlayerGameStatis*))(Il2CppBase() + 0x4EA88E8))(this);
	}
	template <typename T = void> T set_is_br_final(bool value) {
		return ((T (*)(PlayerGameStatis*, bool))(Il2CppBase() + 0x4EA88F0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PlayerGameStatis*, bool))(Il2CppBase() + 0x4EA88F8))(this, createIfMissing);
	}

};

}
