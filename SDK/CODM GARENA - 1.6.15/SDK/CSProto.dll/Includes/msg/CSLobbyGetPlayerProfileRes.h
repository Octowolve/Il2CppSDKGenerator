#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSLobbyGetPlayerProfileRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSLobbyGetPlayerProfileRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _diamond_result() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint64_t> T& _tick_count() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _gold() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _diamond() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _stamina_point() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _fight_point() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _nick_name() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _ladder_score() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& _today_add_ladder_score() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& _history_highest_ladder_score() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uint32_t> T& _drop_timestamp() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& _today_drop_times() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& _hidden_score() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& _kd_ratio() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uint32_t> T& _ex_vip_flag() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint32_t> T& _monthcard_level() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uint32_t> T& _vip_level() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _prop_list() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& _next_level_exp() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& _max_stamina_point() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& _cur_svr_version() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _game_nick() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& _pic_info() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _download_url() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppList<int32_t>*> T& _newbie_guide_list() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& _weapon_point() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& _game_point() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& _game_point_today() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& _game_point_limit() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& _buy_gold_times_today() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& _buy_weaponpoint_times_today() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uint64_t> T& _role_id() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& _punish_info() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& _login_source() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _preparations() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& _has_hero_weapon() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uint32_t> T& _suit_id() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& _is_warm() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uint64_t> T& _ladder_medal() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& _InventoryData() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _medals() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = int32_t> T& _trophy_count() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int32_t> T& _trophy_rank() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = int32_t> T& _trophy_change_offline() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uint64_t> T& _last_logout_time() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uint32_t> T& _auto_clear_fatigue_value_time() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uint32_t> T& _fatigue_value() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& _levelinfo() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uint32_t> T& _match_mmr() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uint32_t> T& _new_guide() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = bool> T& _has_trophy_level_prize() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& _apvp_ladder_info() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uint32_t> T& _gsp_like() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = int32_t> T& _pract_mode() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uint32_t> T& _guild_gold() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uint32_t> T& _apvp_match_gold() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uint32_t> T& _max_trophy_level() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uint32_t> T& _ladder_level() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uint32_t> T& _history_highest_ladder_level() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uint32_t> T& _br_match_mmr() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& _br_ladder_score_info() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uint32_t> T& _ladder_begin_time() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uint32_t> T& _ladder_end_time() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& _game_stat() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = int32_t> T& _gender() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = int32_t> T& _spvp_match_fail() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = int32_t> T& _spvp_ladder_fail() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = bool> T& _is_in_promotion() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uint32_t> T& _total_game_times() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = uint32_t> T& _win_game_times() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _game_record() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _game_mode() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uint32_t> T& _pve_history_max_round() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = uint32_t> T& _pve_daily_max_round() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uint32_t> T& _season_no() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = uint32_t> T& _conf_total_game_times() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uint32_t> T& _conf_win_game_times() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = uint32_t> T& _guild_invite_nums() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _gsp_buf_list() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = uint32_t> T& _season_begin_time() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uint32_t> T& _br_season_no() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = uint32_t> T& _br_season_begin_time() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = Il2CppList<int32_t>*> T& _open_game_mode() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _fire_mode_flag() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = bool> T& _spvp_season_reset() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = int32_t> T& _last_seaon_spvp_ladder_level() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = bool> T& _br_season_reset() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = int32_t> T& _last_seaon_br_ladder_level() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uint64_t> T& _player_tag() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _pandora_tag() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = uint32_t> T& _br_begin_time() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = uint32_t> T& _br_end_time() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uint32_t> T& _ds_ip() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = uint32_t> T& _ds_port() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uint32_t> T& _room_id() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = uint32_t> T& _map_id() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = Il2CppString*> T& _ds_crypt_key() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = Il2CppString*> T& _ds_domain_name() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = uint64_t> T& _room_guid() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = uint32_t> T& _season_end_time() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = uint32_t> T& _br_season_end_time() {
		return *(T*)((uintptr_t)this + 0x1CC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _shoptag() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = uint64_t> T& _register_time() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = bool> T& _has_new_mode() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = uint32_t> T& _service_module() {
		return *(T*)((uintptr_t)this + 0x1E4);
	}
	template <typename T = uint32_t> T& _id_collection_value() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = uint64_t> T& _player_guid() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = int32_t> T& _history_season_highest_level() {
		return *(T*)((uintptr_t)this + 0x1F8);
	}
	template <typename T = uint32_t> T& _history_season_highest_ladder_score() {
		return *(T*)((uintptr_t)this + 0x1FC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _history_season_level_record() {
		return *(T*)((uintptr_t)this + 0x200);
	}
	template <typename T = uintptr_t> T& _voice_state() {
		return *(T*)((uintptr_t)this + 0x204);
	}
	template <typename T = uint32_t> T& _grouproom_busid() {
		return *(T*)((uintptr_t)this + 0x208);
	}
	template <typename T = uint32_t> T& _grouproom_id() {
		return *(T*)((uintptr_t)this + 0x20C);
	}
	template <typename T = uint64_t> T& _total_online_times_sec() {
		return *(T*)((uintptr_t)this + 0x210);
	}
	template <typename T = uint64_t> T& _login_time() {
		return *(T*)((uintptr_t)this + 0x218);
	}
	template <typename T = uint64_t> T& _last_login_time() {
		return *(T*)((uintptr_t)this + 0x220);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x228);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A3F0))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, int32_t))(Il2CppBase() + 0x513A3F8))(this, value);
	}
	template <typename T = int32_t> T get_diamond_result() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A400))(this);
	}
	template <typename T = void> T set_diamond_result(int32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, int32_t))(Il2CppBase() + 0x513A408))(this, value);
	}
	template <typename T = uint64_t> T get_tick_count() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A410))(this);
	}
	template <typename T = void> T set_tick_count(uint64_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uint64_t))(Il2CppBase() + 0x513A418))(this, value);
	}
	template <typename T = int32_t> T get_gold() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A428))(this);
	}
	template <typename T = void> T set_gold(int32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, int32_t))(Il2CppBase() + 0x513A430))(this, value);
	}
	template <typename T = int32_t> T get_diamond() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A438))(this);
	}
	template <typename T = void> T set_diamond(int32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, int32_t))(Il2CppBase() + 0x513A440))(this, value);
	}
	template <typename T = int32_t> T get_stamina_point() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A448))(this);
	}
	template <typename T = void> T set_stamina_point(int32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, int32_t))(Il2CppBase() + 0x513A450))(this, value);
	}
	template <typename T = int32_t> T get_fight_point() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A458))(this);
	}
	template <typename T = void> T set_fight_point(int32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, int32_t))(Il2CppBase() + 0x513A460))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_nick_name() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A468))(this);
	}
	template <typename T = void> T set_nick_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x513A470))(this, value);
	}
	template <typename T = int32_t> T get_ladder_score() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A478))(this);
	}
	template <typename T = void> T set_ladder_score(int32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, int32_t))(Il2CppBase() + 0x513A480))(this, value);
	}
	template <typename T = int32_t> T get_today_add_ladder_score() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A488))(this);
	}
	template <typename T = void> T set_today_add_ladder_score(int32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, int32_t))(Il2CppBase() + 0x513A490))(this, value);
	}
	template <typename T = int32_t> T get_history_highest_ladder_score() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A498))(this);
	}
	template <typename T = void> T set_history_highest_ladder_score(int32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, int32_t))(Il2CppBase() + 0x513A4A0))(this, value);
	}
	template <typename T = uint32_t> T get_drop_timestamp() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A4A8))(this);
	}
	template <typename T = void> T set_drop_timestamp(uint32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uint32_t))(Il2CppBase() + 0x513A4B0))(this, value);
	}
	template <typename T = int32_t> T get_today_drop_times() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A4B8))(this);
	}
	template <typename T = void> T set_today_drop_times(int32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, int32_t))(Il2CppBase() + 0x513A4C0))(this, value);
	}
	template <typename T = int32_t> T get_hidden_score() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A4C8))(this);
	}
	template <typename T = void> T set_hidden_score(int32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, int32_t))(Il2CppBase() + 0x513A4D0))(this, value);
	}
	template <typename T = int32_t> T get_kd_ratio() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A4D8))(this);
	}
	template <typename T = void> T set_kd_ratio(int32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, int32_t))(Il2CppBase() + 0x513A4E0))(this, value);
	}
	template <typename T = uint32_t> T get_ex_vip_flag() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A4E8))(this);
	}
	template <typename T = void> T set_ex_vip_flag(uint32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uint32_t))(Il2CppBase() + 0x513A4F0))(this, value);
	}
	template <typename T = uint32_t> T get_monthcard_level() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A4F8))(this);
	}
	template <typename T = void> T set_monthcard_level(uint32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uint32_t))(Il2CppBase() + 0x513A500))(this, value);
	}
	template <typename T = uint32_t> T get_vip_level() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A508))(this);
	}
	template <typename T = void> T set_vip_level(uint32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uint32_t))(Il2CppBase() + 0x513A510))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_prop_list() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A518))(this);
	}
	template <typename T = int32_t> T get_next_level_exp() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A520))(this);
	}
	template <typename T = void> T set_next_level_exp(int32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, int32_t))(Il2CppBase() + 0x513A528))(this, value);
	}
	template <typename T = int32_t> T get_max_stamina_point() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A530))(this);
	}
	template <typename T = void> T set_max_stamina_point(int32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, int32_t))(Il2CppBase() + 0x513A538))(this, value);
	}
	template <typename T = int32_t> T get_cur_svr_version() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A540))(this);
	}
	template <typename T = void> T set_cur_svr_version(int32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, int32_t))(Il2CppBase() + 0x513A548))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_game_nick() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A550))(this);
	}
	template <typename T = void> T set_game_nick(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x513A558))(this, value);
	}
	template <typename T = uintptr_t> T get_pic_info() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A560))(this);
	}
	template <typename T = void> T set_pic_info(uintptr_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uintptr_t))(Il2CppBase() + 0x513A568))(this, value);
	}
	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A570))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uint64_t))(Il2CppBase() + 0x513A578))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_download_url() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A588))(this);
	}
	template <typename T = void> T set_download_url(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x513A590))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_newbie_guide_list() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A598))(this);
	}
	template <typename T = int32_t> T get_weapon_point() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A5A0))(this);
	}
	template <typename T = void> T set_weapon_point(int32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, int32_t))(Il2CppBase() + 0x513A5A8))(this, value);
	}
	template <typename T = int32_t> T get_game_point() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A5B0))(this);
	}
	template <typename T = void> T set_game_point(int32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, int32_t))(Il2CppBase() + 0x513A5B8))(this, value);
	}
	template <typename T = int32_t> T get_game_point_today() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A5C0))(this);
	}
	template <typename T = void> T set_game_point_today(int32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, int32_t))(Il2CppBase() + 0x513A5C8))(this, value);
	}
	template <typename T = int32_t> T get_game_point_limit() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A5D0))(this);
	}
	template <typename T = void> T set_game_point_limit(int32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, int32_t))(Il2CppBase() + 0x513A5D8))(this, value);
	}
	template <typename T = int32_t> T get_buy_gold_times_today() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A5E0))(this);
	}
	template <typename T = void> T set_buy_gold_times_today(int32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, int32_t))(Il2CppBase() + 0x513A5E8))(this, value);
	}
	template <typename T = int32_t> T get_buy_weaponpoint_times_today() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A5F0))(this);
	}
	template <typename T = void> T set_buy_weaponpoint_times_today(int32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, int32_t))(Il2CppBase() + 0x513A5F8))(this, value);
	}
	template <typename T = uint64_t> T get_role_id() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A600))(this);
	}
	template <typename T = void> T set_role_id(uint64_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uint64_t))(Il2CppBase() + 0x513A608))(this, value);
	}
	template <typename T = uintptr_t> T get_punish_info() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A618))(this);
	}
	template <typename T = void> T set_punish_info(uintptr_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uintptr_t))(Il2CppBase() + 0x513A620))(this, value);
	}
	template <typename T = int32_t> T get_login_source() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A628))(this);
	}
	template <typename T = void> T set_login_source(int32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, int32_t))(Il2CppBase() + 0x513A630))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_preparations() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A638))(this);
	}
	template <typename T = int32_t> T get_has_hero_weapon() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A640))(this);
	}
	template <typename T = void> T set_has_hero_weapon(int32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, int32_t))(Il2CppBase() + 0x513A648))(this, value);
	}
	template <typename T = uint32_t> T get_suit_id() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A650))(this);
	}
	template <typename T = void> T set_suit_id(uint32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uint32_t))(Il2CppBase() + 0x513A658))(this, value);
	}
	template <typename T = bool> T get_is_warm() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A660))(this);
	}
	template <typename T = void> T set_is_warm(bool value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, bool))(Il2CppBase() + 0x513A668))(this, value);
	}
	template <typename T = uint64_t> T get_ladder_medal() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A670))(this);
	}
	template <typename T = void> T set_ladder_medal(uint64_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uint64_t))(Il2CppBase() + 0x513A678))(this, value);
	}
	template <typename T = uintptr_t> T get_InventoryData() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A688))(this);
	}
	template <typename T = void> T set_InventoryData(uintptr_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uintptr_t))(Il2CppBase() + 0x513A690))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_medals() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A698))(this);
	}
	template <typename T = int32_t> T get_trophy_count() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A6A0))(this);
	}
	template <typename T = void> T set_trophy_count(int32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, int32_t))(Il2CppBase() + 0x513A6A8))(this, value);
	}
	template <typename T = int32_t> T get_trophy_rank() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A6B0))(this);
	}
	template <typename T = void> T set_trophy_rank(int32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, int32_t))(Il2CppBase() + 0x513A6B8))(this, value);
	}
	template <typename T = int32_t> T get_trophy_change_offline() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A6C0))(this);
	}
	template <typename T = void> T set_trophy_change_offline(int32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, int32_t))(Il2CppBase() + 0x513A6C8))(this, value);
	}
	template <typename T = uint64_t> T get_last_logout_time() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A6D0))(this);
	}
	template <typename T = void> T set_last_logout_time(uint64_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uint64_t))(Il2CppBase() + 0x513A6D8))(this, value);
	}
	template <typename T = uint32_t> T get_auto_clear_fatigue_value_time() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A6E8))(this);
	}
	template <typename T = void> T set_auto_clear_fatigue_value_time(uint32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uint32_t))(Il2CppBase() + 0x513A6F0))(this, value);
	}
	template <typename T = uint32_t> T get_fatigue_value() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A6F8))(this);
	}
	template <typename T = void> T set_fatigue_value(uint32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uint32_t))(Il2CppBase() + 0x513A700))(this, value);
	}
	template <typename T = uintptr_t> T get_levelinfo() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A708))(this);
	}
	template <typename T = void> T set_levelinfo(uintptr_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uintptr_t))(Il2CppBase() + 0x513A710))(this, value);
	}
	template <typename T = uint32_t> T get_match_mmr() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A718))(this);
	}
	template <typename T = void> T set_match_mmr(uint32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uint32_t))(Il2CppBase() + 0x513A720))(this, value);
	}
	template <typename T = uint32_t> T get_new_guide() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A728))(this);
	}
	template <typename T = void> T set_new_guide(uint32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uint32_t))(Il2CppBase() + 0x513A730))(this, value);
	}
	template <typename T = bool> T get_has_trophy_level_prize() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A738))(this);
	}
	template <typename T = void> T set_has_trophy_level_prize(bool value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, bool))(Il2CppBase() + 0x513A740))(this, value);
	}
	template <typename T = uintptr_t> T get_apvp_ladder_info() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A748))(this);
	}
	template <typename T = void> T set_apvp_ladder_info(uintptr_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uintptr_t))(Il2CppBase() + 0x513A750))(this, value);
	}
	template <typename T = uint32_t> T get_gsp_like() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A758))(this);
	}
	template <typename T = void> T set_gsp_like(uint32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uint32_t))(Il2CppBase() + 0x513A760))(this, value);
	}
	template <typename T = int32_t> T get_pract_mode() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A768))(this);
	}
	template <typename T = void> T set_pract_mode(int32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, int32_t))(Il2CppBase() + 0x513A770))(this, value);
	}
	template <typename T = uint32_t> T get_guild_gold() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A778))(this);
	}
	template <typename T = void> T set_guild_gold(uint32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uint32_t))(Il2CppBase() + 0x513A780))(this, value);
	}
	template <typename T = uint32_t> T get_apvp_match_gold() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A788))(this);
	}
	template <typename T = void> T set_apvp_match_gold(uint32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uint32_t))(Il2CppBase() + 0x513A790))(this, value);
	}
	template <typename T = uint32_t> T get_max_trophy_level() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A798))(this);
	}
	template <typename T = void> T set_max_trophy_level(uint32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uint32_t))(Il2CppBase() + 0x513A7A0))(this, value);
	}
	template <typename T = uint32_t> T get_ladder_level() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A7A8))(this);
	}
	template <typename T = void> T set_ladder_level(uint32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uint32_t))(Il2CppBase() + 0x513A7B0))(this, value);
	}
	template <typename T = uint32_t> T get_history_highest_ladder_level() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A7B8))(this);
	}
	template <typename T = void> T set_history_highest_ladder_level(uint32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uint32_t))(Il2CppBase() + 0x513A7C0))(this, value);
	}
	template <typename T = uint32_t> T get_br_match_mmr() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A7C8))(this);
	}
	template <typename T = void> T set_br_match_mmr(uint32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uint32_t))(Il2CppBase() + 0x513A7D0))(this, value);
	}
	template <typename T = uintptr_t> T get_br_ladder_score_info() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A7D8))(this);
	}
	template <typename T = void> T set_br_ladder_score_info(uintptr_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uintptr_t))(Il2CppBase() + 0x513A7E0))(this, value);
	}
	template <typename T = uint32_t> T get_ladder_begin_time() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A7E8))(this);
	}
	template <typename T = void> T set_ladder_begin_time(uint32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uint32_t))(Il2CppBase() + 0x513A7F0))(this, value);
	}
	template <typename T = uint32_t> T get_ladder_end_time() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A7F8))(this);
	}
	template <typename T = void> T set_ladder_end_time(uint32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uint32_t))(Il2CppBase() + 0x513A800))(this, value);
	}
	template <typename T = uintptr_t> T get_game_stat() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A808))(this);
	}
	template <typename T = void> T set_game_stat(uintptr_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uintptr_t))(Il2CppBase() + 0x513A810))(this, value);
	}
	template <typename T = int32_t> T get_gender() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A818))(this);
	}
	template <typename T = void> T set_gender(int32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, int32_t))(Il2CppBase() + 0x513A820))(this, value);
	}
	template <typename T = int32_t> T get_spvp_match_fail() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A828))(this);
	}
	template <typename T = void> T set_spvp_match_fail(int32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, int32_t))(Il2CppBase() + 0x513A830))(this, value);
	}
	template <typename T = int32_t> T get_spvp_ladder_fail() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A838))(this);
	}
	template <typename T = void> T set_spvp_ladder_fail(int32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, int32_t))(Il2CppBase() + 0x513A840))(this, value);
	}
	template <typename T = bool> T get_is_in_promotion() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A848))(this);
	}
	template <typename T = void> T set_is_in_promotion(bool value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, bool))(Il2CppBase() + 0x513A850))(this, value);
	}
	template <typename T = uint32_t> T get_total_game_times() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A858))(this);
	}
	template <typename T = void> T set_total_game_times(uint32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uint32_t))(Il2CppBase() + 0x513A860))(this, value);
	}
	template <typename T = uint32_t> T get_win_game_times() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A868))(this);
	}
	template <typename T = void> T set_win_game_times(uint32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uint32_t))(Il2CppBase() + 0x513A870))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_game_record() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A878))(this);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_game_mode() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A880))(this);
	}
	template <typename T = uint32_t> T get_pve_history_max_round() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A888))(this);
	}
	template <typename T = void> T set_pve_history_max_round(uint32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uint32_t))(Il2CppBase() + 0x513A890))(this, value);
	}
	template <typename T = uint32_t> T get_pve_daily_max_round() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A898))(this);
	}
	template <typename T = void> T set_pve_daily_max_round(uint32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uint32_t))(Il2CppBase() + 0x513A8A0))(this, value);
	}
	template <typename T = uint32_t> T get_season_no() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A8A8))(this);
	}
	template <typename T = void> T set_season_no(uint32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uint32_t))(Il2CppBase() + 0x513A8B0))(this, value);
	}
	template <typename T = uint32_t> T get_conf_total_game_times() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A8B8))(this);
	}
	template <typename T = void> T set_conf_total_game_times(uint32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uint32_t))(Il2CppBase() + 0x513A8C0))(this, value);
	}
	template <typename T = uint32_t> T get_conf_win_game_times() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A8C8))(this);
	}
	template <typename T = void> T set_conf_win_game_times(uint32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uint32_t))(Il2CppBase() + 0x513A8D0))(this, value);
	}
	template <typename T = uint32_t> T get_guild_invite_nums() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A8D8))(this);
	}
	template <typename T = void> T set_guild_invite_nums(uint32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uint32_t))(Il2CppBase() + 0x513A8E0))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_gsp_buf_list() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A8E8))(this);
	}
	template <typename T = uint32_t> T get_season_begin_time() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A8F0))(this);
	}
	template <typename T = void> T set_season_begin_time(uint32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uint32_t))(Il2CppBase() + 0x513A8F8))(this, value);
	}
	template <typename T = uint32_t> T get_br_season_no() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A900))(this);
	}
	template <typename T = void> T set_br_season_no(uint32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uint32_t))(Il2CppBase() + 0x513A908))(this, value);
	}
	template <typename T = uint32_t> T get_br_season_begin_time() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A910))(this);
	}
	template <typename T = void> T set_br_season_begin_time(uint32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uint32_t))(Il2CppBase() + 0x513A918))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_open_game_mode() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A920))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_fire_mode_flag() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A928))(this);
	}
	template <typename T = bool> T get_spvp_season_reset() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A930))(this);
	}
	template <typename T = void> T set_spvp_season_reset(bool value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, bool))(Il2CppBase() + 0x513A938))(this, value);
	}
	template <typename T = int32_t> T get_last_seaon_spvp_ladder_level() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A940))(this);
	}
	template <typename T = void> T set_last_seaon_spvp_ladder_level(int32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, int32_t))(Il2CppBase() + 0x513A948))(this, value);
	}
	template <typename T = bool> T get_br_season_reset() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A950))(this);
	}
	template <typename T = void> T set_br_season_reset(bool value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, bool))(Il2CppBase() + 0x513A958))(this, value);
	}
	template <typename T = int32_t> T get_last_seaon_br_ladder_level() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A960))(this);
	}
	template <typename T = void> T set_last_seaon_br_ladder_level(int32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, int32_t))(Il2CppBase() + 0x513A968))(this, value);
	}
	template <typename T = uint64_t> T get_player_tag() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A970))(this);
	}
	template <typename T = void> T set_player_tag(uint64_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uint64_t))(Il2CppBase() + 0x513A980))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_pandora_tag() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A98C))(this);
	}
	template <typename T = void> T set_pandora_tag(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x513A994))(this, value);
	}
	template <typename T = uint32_t> T get_br_begin_time() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A99C))(this);
	}
	template <typename T = void> T set_br_begin_time(uint32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uint32_t))(Il2CppBase() + 0x513A9A4))(this, value);
	}
	template <typename T = uint32_t> T get_br_end_time() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A9AC))(this);
	}
	template <typename T = void> T set_br_end_time(uint32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uint32_t))(Il2CppBase() + 0x513A9B4))(this, value);
	}
	template <typename T = uint32_t> T get_ds_ip() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A9BC))(this);
	}
	template <typename T = void> T set_ds_ip(uint32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uint32_t))(Il2CppBase() + 0x513A9C4))(this, value);
	}
	template <typename T = uint32_t> T get_ds_port() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A9CC))(this);
	}
	template <typename T = void> T set_ds_port(uint32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uint32_t))(Il2CppBase() + 0x513A9D4))(this, value);
	}
	template <typename T = uint32_t> T get_room_id() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A9DC))(this);
	}
	template <typename T = void> T set_room_id(uint32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uint32_t))(Il2CppBase() + 0x513A9E4))(this, value);
	}
	template <typename T = uint32_t> T get_map_id() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A9EC))(this);
	}
	template <typename T = void> T set_map_id(uint32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uint32_t))(Il2CppBase() + 0x513A9F4))(this, value);
	}
	template <typename T = Il2CppString*> T get_ds_crypt_key() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513A9FC))(this);
	}
	template <typename T = void> T set_ds_crypt_key(Il2CppString* value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, Il2CppString*))(Il2CppBase() + 0x513AA04))(this, value);
	}
	template <typename T = Il2CppString*> T get_ds_domain_name() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513AA0C))(this);
	}
	template <typename T = void> T set_ds_domain_name(Il2CppString* value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, Il2CppString*))(Il2CppBase() + 0x513AA14))(this, value);
	}
	template <typename T = uint64_t> T get_room_guid() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513AA1C))(this);
	}
	template <typename T = void> T set_room_guid(uint64_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uint64_t))(Il2CppBase() + 0x513AA2C))(this, value);
	}
	template <typename T = uint32_t> T get_season_end_time() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513AA38))(this);
	}
	template <typename T = void> T set_season_end_time(uint32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uint32_t))(Il2CppBase() + 0x513AA40))(this, value);
	}
	template <typename T = uint32_t> T get_br_season_end_time() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513AA48))(this);
	}
	template <typename T = void> T set_br_season_end_time(uint32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uint32_t))(Il2CppBase() + 0x513AA50))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_shoptag() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513AA58))(this);
	}
	template <typename T = uint64_t> T get_register_time() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513AA60))(this);
	}
	template <typename T = void> T set_register_time(uint64_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uint64_t))(Il2CppBase() + 0x513AA70))(this, value);
	}
	template <typename T = bool> T get_has_new_mode() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513AA7C))(this);
	}
	template <typename T = void> T set_has_new_mode(bool value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, bool))(Il2CppBase() + 0x513AA84))(this, value);
	}
	template <typename T = uint32_t> T get_service_module() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513AA8C))(this);
	}
	template <typename T = void> T set_service_module(uint32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uint32_t))(Il2CppBase() + 0x513AA94))(this, value);
	}
	template <typename T = uint32_t> T get_id_collection_value() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513AA9C))(this);
	}
	template <typename T = void> T set_id_collection_value(uint32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uint32_t))(Il2CppBase() + 0x513AAA4))(this, value);
	}
	template <typename T = uint64_t> T get_player_guid() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513AAAC))(this);
	}
	template <typename T = void> T set_player_guid(uint64_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uint64_t))(Il2CppBase() + 0x513AABC))(this, value);
	}
	template <typename T = int32_t> T get_history_season_highest_level() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513AAC8))(this);
	}
	template <typename T = void> T set_history_season_highest_level(int32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, int32_t))(Il2CppBase() + 0x513AAD0))(this, value);
	}
	template <typename T = uint32_t> T get_history_season_highest_ladder_score() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513AAD8))(this);
	}
	template <typename T = void> T set_history_season_highest_ladder_score(uint32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uint32_t))(Il2CppBase() + 0x513AAE0))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_history_season_level_record() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513AAE8))(this);
	}
	template <typename T = uintptr_t> T get_voice_state() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513AAF0))(this);
	}
	template <typename T = void> T set_voice_state(uintptr_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uintptr_t))(Il2CppBase() + 0x513AAF8))(this, value);
	}
	template <typename T = uint32_t> T get_grouproom_busid() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513AB00))(this);
	}
	template <typename T = void> T set_grouproom_busid(uint32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uint32_t))(Il2CppBase() + 0x513AB08))(this, value);
	}
	template <typename T = uint32_t> T get_grouproom_id() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513AB10))(this);
	}
	template <typename T = void> T set_grouproom_id(uint32_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uint32_t))(Il2CppBase() + 0x513AB18))(this, value);
	}
	template <typename T = uint64_t> T get_total_online_times_sec() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513AB20))(this);
	}
	template <typename T = void> T set_total_online_times_sec(uint64_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uint64_t))(Il2CppBase() + 0x513AB30))(this, value);
	}
	template <typename T = uint64_t> T get_login_time() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513AB3C))(this);
	}
	template <typename T = void> T set_login_time(uint64_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uint64_t))(Il2CppBase() + 0x513AB4C))(this, value);
	}
	template <typename T = uint64_t> T get_last_login_time() {
		return ((T (*)(CSLobbyGetPlayerProfileRes*))(Il2CppBase() + 0x513AB58))(this);
	}
	template <typename T = void> T set_last_login_time(uint64_t value) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, uint64_t))(Il2CppBase() + 0x513AB68))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSLobbyGetPlayerProfileRes*, bool))(Il2CppBase() + 0x513AB74))(this, createIfMissing);
	}

};

}
