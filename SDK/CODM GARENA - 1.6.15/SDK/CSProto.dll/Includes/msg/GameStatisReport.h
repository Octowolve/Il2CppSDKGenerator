#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GameStatisReport
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GameStatisReport"));
	}

	template <typename T = int32_t> T& _game_time() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _game_end_reason() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _round_count() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _winning_camp() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _rebel_score() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _regular_score() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _player_game_statis() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _match_mode() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& _game_type() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _game_mode() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& _match_service_module() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint32_t> T& _room_id() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uint64_t> T& _map_id() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& _total_player_count() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& _reconnect_times() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& _is_newbie() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& _pve_level_id() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uint32_t> T& _star() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _boss_stat_data() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uint64_t> T& _gsp_guid() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& _switch_player_count() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& _rebel_kill_count() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& _regular_kill_count() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& _pve_curr_mission_id() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& _pve_mission_count() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uint32_t> T& _team_type() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& _total_team_num() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& _total_player_num() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uint32_t> T& _is_game_end() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _team_statis() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& _difficulty_level() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& _is_main_line() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uint32_t> T& _game_end_time() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uint32_t> T& _passtask_time() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uint32_t> T& _room_svr_addr() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uint32_t> T& _room_timestamp() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _alive_player_statis() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppList<uint64_t>*> T& _br_team_player() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uint32_t> T& _endless_reset_time() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _drop_player_statis() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uint32_t> T& _playlist_id() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uint32_t> T& _game_fmpp() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = bool> T& _is_simulator() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& _pve_egg_fix_elevator() {
		return *(T*)((uintptr_t)this + 0xB9);
	}
	template <typename T = bool> T& _pve_egg_dark_seed() {
		return *(T*)((uintptr_t)this + 0xBA);
	}
	template <typename T = bool> T& _is_gamepad() {
		return *(T*)((uintptr_t)this + 0xBB);
	}
	template <typename T = bool> T& _is_match_stranger() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = bool> T& _is_warm() {
		return *(T*)((uintptr_t)this + 0xBD);
	}
	template <typename T = bool> T& _is_key_mode_type() {
		return *(T*)((uintptr_t)this + 0xBE);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _simple_player_game_statis() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = int32_t> T& _cur_br_season_id() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _match_playlist_ids() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uint32_t> T& _game_ext_type() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uint32_t> T& _br_final_team_count() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xD4);
	}

	template <typename T = int32_t> T get_game_time() {
		return ((T (*)(GameStatisReport*))(Il2CppBase() + 0x50CD2A0))(this);
	}
	template <typename T = void> T set_game_time(int32_t value) {
		return ((T (*)(GameStatisReport*, int32_t))(Il2CppBase() + 0x50CD2A8))(this, value);
	}
	template <typename T = int32_t> T get_game_end_reason() {
		return ((T (*)(GameStatisReport*))(Il2CppBase() + 0x50CD2B0))(this);
	}
	template <typename T = void> T set_game_end_reason(int32_t value) {
		return ((T (*)(GameStatisReport*, int32_t))(Il2CppBase() + 0x50CD2B8))(this, value);
	}
	template <typename T = int32_t> T get_round_count() {
		return ((T (*)(GameStatisReport*))(Il2CppBase() + 0x50CD2C0))(this);
	}
	template <typename T = void> T set_round_count(int32_t value) {
		return ((T (*)(GameStatisReport*, int32_t))(Il2CppBase() + 0x50CD2C8))(this, value);
	}
	template <typename T = int32_t> T get_winning_camp() {
		return ((T (*)(GameStatisReport*))(Il2CppBase() + 0x50CD2D0))(this);
	}
	template <typename T = void> T set_winning_camp(int32_t value) {
		return ((T (*)(GameStatisReport*, int32_t))(Il2CppBase() + 0x50CD2D8))(this, value);
	}
	template <typename T = int32_t> T get_rebel_score() {
		return ((T (*)(GameStatisReport*))(Il2CppBase() + 0x50CD2E0))(this);
	}
	template <typename T = void> T set_rebel_score(int32_t value) {
		return ((T (*)(GameStatisReport*, int32_t))(Il2CppBase() + 0x50CD2E8))(this, value);
	}
	template <typename T = int32_t> T get_regular_score() {
		return ((T (*)(GameStatisReport*))(Il2CppBase() + 0x50CD2F0))(this);
	}
	template <typename T = void> T set_regular_score(int32_t value) {
		return ((T (*)(GameStatisReport*, int32_t))(Il2CppBase() + 0x50CD2F8))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_player_game_statis() {
		return ((T (*)(GameStatisReport*))(Il2CppBase() + 0x50CD300))(this);
	}
	template <typename T = int32_t> T get_match_mode() {
		return ((T (*)(GameStatisReport*))(Il2CppBase() + 0x50CD308))(this);
	}
	template <typename T = void> T set_match_mode(int32_t value) {
		return ((T (*)(GameStatisReport*, int32_t))(Il2CppBase() + 0x50CD310))(this, value);
	}
	template <typename T = int32_t> T get_game_type() {
		return ((T (*)(GameStatisReport*))(Il2CppBase() + 0x50CD318))(this);
	}
	template <typename T = void> T set_game_type(int32_t value) {
		return ((T (*)(GameStatisReport*, int32_t))(Il2CppBase() + 0x50CD320))(this, value);
	}
	template <typename T = int32_t> T get_game_mode() {
		return ((T (*)(GameStatisReport*))(Il2CppBase() + 0x50CD328))(this);
	}
	template <typename T = void> T set_game_mode(int32_t value) {
		return ((T (*)(GameStatisReport*, int32_t))(Il2CppBase() + 0x50CD330))(this, value);
	}
	template <typename T = int32_t> T get_match_service_module() {
		return ((T (*)(GameStatisReport*))(Il2CppBase() + 0x50CD338))(this);
	}
	template <typename T = void> T set_match_service_module(int32_t value) {
		return ((T (*)(GameStatisReport*, int32_t))(Il2CppBase() + 0x50CD340))(this, value);
	}
	template <typename T = uint32_t> T get_room_id() {
		return ((T (*)(GameStatisReport*))(Il2CppBase() + 0x50CD348))(this);
	}
	template <typename T = void> T set_room_id(uint32_t value) {
		return ((T (*)(GameStatisReport*, uint32_t))(Il2CppBase() + 0x50CD350))(this, value);
	}
	template <typename T = uint64_t> T get_map_id() {
		return ((T (*)(GameStatisReport*))(Il2CppBase() + 0x50CD358))(this);
	}
	template <typename T = void> T set_map_id(uint64_t value) {
		return ((T (*)(GameStatisReport*, uint64_t))(Il2CppBase() + 0x50CD360))(this, value);
	}
	template <typename T = int32_t> T get_total_player_count() {
		return ((T (*)(GameStatisReport*))(Il2CppBase() + 0x50CD370))(this);
	}
	template <typename T = void> T set_total_player_count(int32_t value) {
		return ((T (*)(GameStatisReport*, int32_t))(Il2CppBase() + 0x50CD378))(this, value);
	}
	template <typename T = int32_t> T get_reconnect_times() {
		return ((T (*)(GameStatisReport*))(Il2CppBase() + 0x50CD380))(this);
	}
	template <typename T = void> T set_reconnect_times(int32_t value) {
		return ((T (*)(GameStatisReport*, int32_t))(Il2CppBase() + 0x50CD388))(this, value);
	}
	template <typename T = bool> T get_is_newbie() {
		return ((T (*)(GameStatisReport*))(Il2CppBase() + 0x50CD390))(this);
	}
	template <typename T = void> T set_is_newbie(bool value) {
		return ((T (*)(GameStatisReport*, bool))(Il2CppBase() + 0x50CD398))(this, value);
	}
	template <typename T = int32_t> T get_pve_level_id() {
		return ((T (*)(GameStatisReport*))(Il2CppBase() + 0x50CD3A0))(this);
	}
	template <typename T = void> T set_pve_level_id(int32_t value) {
		return ((T (*)(GameStatisReport*, int32_t))(Il2CppBase() + 0x50CD3A8))(this, value);
	}
	template <typename T = uint32_t> T get_star() {
		return ((T (*)(GameStatisReport*))(Il2CppBase() + 0x50CD3B0))(this);
	}
	template <typename T = void> T set_star(uint32_t value) {
		return ((T (*)(GameStatisReport*, uint32_t))(Il2CppBase() + 0x50CD3B8))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_boss_stat_data() {
		return ((T (*)(GameStatisReport*))(Il2CppBase() + 0x50CD3C0))(this);
	}
	template <typename T = uint64_t> T get_gsp_guid() {
		return ((T (*)(GameStatisReport*))(Il2CppBase() + 0x50CD3C8))(this);
	}
	template <typename T = void> T set_gsp_guid(uint64_t value) {
		return ((T (*)(GameStatisReport*, uint64_t))(Il2CppBase() + 0x50CD3D0))(this, value);
	}
	template <typename T = int32_t> T get_switch_player_count() {
		return ((T (*)(GameStatisReport*))(Il2CppBase() + 0x50CD3E0))(this);
	}
	template <typename T = void> T set_switch_player_count(int32_t value) {
		return ((T (*)(GameStatisReport*, int32_t))(Il2CppBase() + 0x50CD3E8))(this, value);
	}
	template <typename T = int32_t> T get_rebel_kill_count() {
		return ((T (*)(GameStatisReport*))(Il2CppBase() + 0x50CD3F0))(this);
	}
	template <typename T = void> T set_rebel_kill_count(int32_t value) {
		return ((T (*)(GameStatisReport*, int32_t))(Il2CppBase() + 0x50CD3F8))(this, value);
	}
	template <typename T = int32_t> T get_regular_kill_count() {
		return ((T (*)(GameStatisReport*))(Il2CppBase() + 0x50CD400))(this);
	}
	template <typename T = void> T set_regular_kill_count(int32_t value) {
		return ((T (*)(GameStatisReport*, int32_t))(Il2CppBase() + 0x50CD408))(this, value);
	}
	template <typename T = int32_t> T get_pve_curr_mission_id() {
		return ((T (*)(GameStatisReport*))(Il2CppBase() + 0x50CD410))(this);
	}
	template <typename T = void> T set_pve_curr_mission_id(int32_t value) {
		return ((T (*)(GameStatisReport*, int32_t))(Il2CppBase() + 0x50CD418))(this, value);
	}
	template <typename T = int32_t> T get_pve_mission_count() {
		return ((T (*)(GameStatisReport*))(Il2CppBase() + 0x50CD420))(this);
	}
	template <typename T = void> T set_pve_mission_count(int32_t value) {
		return ((T (*)(GameStatisReport*, int32_t))(Il2CppBase() + 0x50CD428))(this, value);
	}
	template <typename T = uint32_t> T get_team_type() {
		return ((T (*)(GameStatisReport*))(Il2CppBase() + 0x50CD430))(this);
	}
	template <typename T = void> T set_team_type(uint32_t value) {
		return ((T (*)(GameStatisReport*, uint32_t))(Il2CppBase() + 0x50CD438))(this, value);
	}
	template <typename T = int32_t> T get_total_team_num() {
		return ((T (*)(GameStatisReport*))(Il2CppBase() + 0x50CD440))(this);
	}
	template <typename T = void> T set_total_team_num(int32_t value) {
		return ((T (*)(GameStatisReport*, int32_t))(Il2CppBase() + 0x50CD448))(this, value);
	}
	template <typename T = int32_t> T get_total_player_num() {
		return ((T (*)(GameStatisReport*))(Il2CppBase() + 0x50CD450))(this);
	}
	template <typename T = void> T set_total_player_num(int32_t value) {
		return ((T (*)(GameStatisReport*, int32_t))(Il2CppBase() + 0x50CD458))(this, value);
	}
	template <typename T = uint32_t> T get_is_game_end() {
		return ((T (*)(GameStatisReport*))(Il2CppBase() + 0x50CD460))(this);
	}
	template <typename T = void> T set_is_game_end(uint32_t value) {
		return ((T (*)(GameStatisReport*, uint32_t))(Il2CppBase() + 0x50CD468))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_team_statis() {
		return ((T (*)(GameStatisReport*))(Il2CppBase() + 0x50CD470))(this);
	}
	template <typename T = int32_t> T get_difficulty_level() {
		return ((T (*)(GameStatisReport*))(Il2CppBase() + 0x50CD478))(this);
	}
	template <typename T = void> T set_difficulty_level(int32_t value) {
		return ((T (*)(GameStatisReport*, int32_t))(Il2CppBase() + 0x50CD480))(this, value);
	}
	template <typename T = bool> T get_is_main_line() {
		return ((T (*)(GameStatisReport*))(Il2CppBase() + 0x50CD488))(this);
	}
	template <typename T = void> T set_is_main_line(bool value) {
		return ((T (*)(GameStatisReport*, bool))(Il2CppBase() + 0x50CD490))(this, value);
	}
	template <typename T = uint32_t> T get_game_end_time() {
		return ((T (*)(GameStatisReport*))(Il2CppBase() + 0x50CD498))(this);
	}
	template <typename T = void> T set_game_end_time(uint32_t value) {
		return ((T (*)(GameStatisReport*, uint32_t))(Il2CppBase() + 0x50CD4A0))(this, value);
	}
	template <typename T = uint32_t> T get_passtask_time() {
		return ((T (*)(GameStatisReport*))(Il2CppBase() + 0x50CD4A8))(this);
	}
	template <typename T = void> T set_passtask_time(uint32_t value) {
		return ((T (*)(GameStatisReport*, uint32_t))(Il2CppBase() + 0x50CD4B0))(this, value);
	}
	template <typename T = uint32_t> T get_room_svr_addr() {
		return ((T (*)(GameStatisReport*))(Il2CppBase() + 0x50CD4B8))(this);
	}
	template <typename T = void> T set_room_svr_addr(uint32_t value) {
		return ((T (*)(GameStatisReport*, uint32_t))(Il2CppBase() + 0x50CD4C0))(this, value);
	}
	template <typename T = uint32_t> T get_room_timestamp() {
		return ((T (*)(GameStatisReport*))(Il2CppBase() + 0x50CD4C8))(this);
	}
	template <typename T = void> T set_room_timestamp(uint32_t value) {
		return ((T (*)(GameStatisReport*, uint32_t))(Il2CppBase() + 0x50CD4D0))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_alive_player_statis() {
		return ((T (*)(GameStatisReport*))(Il2CppBase() + 0x50CD4D8))(this);
	}
	template <typename T = Il2CppList<uint64_t>*> T get_br_team_player() {
		return ((T (*)(GameStatisReport*))(Il2CppBase() + 0x50CD4E0))(this);
	}
	template <typename T = uint32_t> T get_endless_reset_time() {
		return ((T (*)(GameStatisReport*))(Il2CppBase() + 0x50CD4E8))(this);
	}
	template <typename T = void> T set_endless_reset_time(uint32_t value) {
		return ((T (*)(GameStatisReport*, uint32_t))(Il2CppBase() + 0x50CD4F0))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_drop_player_statis() {
		return ((T (*)(GameStatisReport*))(Il2CppBase() + 0x50CD4F8))(this);
	}
	template <typename T = uint32_t> T get_playlist_id() {
		return ((T (*)(GameStatisReport*))(Il2CppBase() + 0x50CD500))(this);
	}
	template <typename T = void> T set_playlist_id(uint32_t value) {
		return ((T (*)(GameStatisReport*, uint32_t))(Il2CppBase() + 0x50CD508))(this, value);
	}
	template <typename T = uint32_t> T get_game_fmpp() {
		return ((T (*)(GameStatisReport*))(Il2CppBase() + 0x50CD510))(this);
	}
	template <typename T = void> T set_game_fmpp(uint32_t value) {
		return ((T (*)(GameStatisReport*, uint32_t))(Il2CppBase() + 0x50CD518))(this, value);
	}
	template <typename T = bool> T get_is_simulator() {
		return ((T (*)(GameStatisReport*))(Il2CppBase() + 0x50CD520))(this);
	}
	template <typename T = void> T set_is_simulator(bool value) {
		return ((T (*)(GameStatisReport*, bool))(Il2CppBase() + 0x50CD528))(this, value);
	}
	template <typename T = bool> T get_pve_egg_fix_elevator() {
		return ((T (*)(GameStatisReport*))(Il2CppBase() + 0x50CD530))(this);
	}
	template <typename T = void> T set_pve_egg_fix_elevator(bool value) {
		return ((T (*)(GameStatisReport*, bool))(Il2CppBase() + 0x50CD538))(this, value);
	}
	template <typename T = bool> T get_pve_egg_dark_seed() {
		return ((T (*)(GameStatisReport*))(Il2CppBase() + 0x50CD540))(this);
	}
	template <typename T = void> T set_pve_egg_dark_seed(bool value) {
		return ((T (*)(GameStatisReport*, bool))(Il2CppBase() + 0x50CD548))(this, value);
	}
	template <typename T = bool> T get_is_gamepad() {
		return ((T (*)(GameStatisReport*))(Il2CppBase() + 0x50CD550))(this);
	}
	template <typename T = void> T set_is_gamepad(bool value) {
		return ((T (*)(GameStatisReport*, bool))(Il2CppBase() + 0x50CD558))(this, value);
	}
	template <typename T = bool> T get_is_match_stranger() {
		return ((T (*)(GameStatisReport*))(Il2CppBase() + 0x50CD560))(this);
	}
	template <typename T = void> T set_is_match_stranger(bool value) {
		return ((T (*)(GameStatisReport*, bool))(Il2CppBase() + 0x50CD568))(this, value);
	}
	template <typename T = bool> T get_is_warm() {
		return ((T (*)(GameStatisReport*))(Il2CppBase() + 0x50CD570))(this);
	}
	template <typename T = void> T set_is_warm(bool value) {
		return ((T (*)(GameStatisReport*, bool))(Il2CppBase() + 0x50CD578))(this, value);
	}
	template <typename T = bool> T get_is_key_mode_type() {
		return ((T (*)(GameStatisReport*))(Il2CppBase() + 0x50CD580))(this);
	}
	template <typename T = void> T set_is_key_mode_type(bool value) {
		return ((T (*)(GameStatisReport*, bool))(Il2CppBase() + 0x50CD588))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_simple_player_game_statis() {
		return ((T (*)(GameStatisReport*))(Il2CppBase() + 0x50CD590))(this);
	}
	template <typename T = int32_t> T get_cur_br_season_id() {
		return ((T (*)(GameStatisReport*))(Il2CppBase() + 0x50CD598))(this);
	}
	template <typename T = void> T set_cur_br_season_id(int32_t value) {
		return ((T (*)(GameStatisReport*, int32_t))(Il2CppBase() + 0x50CD5A0))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_match_playlist_ids() {
		return ((T (*)(GameStatisReport*))(Il2CppBase() + 0x50CD5A8))(this);
	}
	template <typename T = uint32_t> T get_game_ext_type() {
		return ((T (*)(GameStatisReport*))(Il2CppBase() + 0x50CD5B0))(this);
	}
	template <typename T = void> T set_game_ext_type(uint32_t value) {
		return ((T (*)(GameStatisReport*, uint32_t))(Il2CppBase() + 0x50CD5B8))(this, value);
	}
	template <typename T = uint32_t> T get_br_final_team_count() {
		return ((T (*)(GameStatisReport*))(Il2CppBase() + 0x50CD5C0))(this);
	}
	template <typename T = void> T set_br_final_team_count(uint32_t value) {
		return ((T (*)(GameStatisReport*, uint32_t))(Il2CppBase() + 0x50CD5C8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GameStatisReport*, bool))(Il2CppBase() + 0x50CD5D0))(this, createIfMissing);
	}

};

}
