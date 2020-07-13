#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class MatchPlayerInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "MatchPlayerInfo"));
	}

	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _camp() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _seat_index() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _zone_bus_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& _is_robot() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& _profile() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& _is_halfway_join() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& _is_team() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = uint32_t> T& _bot_id() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _squad_idx() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint32_t> T& _main_weapon_id() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint32_t> T& _ovr() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& _is_gangup() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& _team_id() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uint32_t> T& _group_id() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint32_t> T& _match_type() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uint32_t> T& _start_alloc_time() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint32_t> T& _secondary_weapon_id() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uint32_t> T& _lethal_grenade_id() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uint32_t> T& _tactical_grenade_id() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uint32_t> T& _attach_num_limit() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _perk_id() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _skills() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _score_streaks_id() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& _purchase_warm_game() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uint64_t> T& _is_observer_friend() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uint32_t> T& _group_room_id() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uint32_t> T& _group_room_bus_id() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uint32_t> T& _group_room_create_time() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uint32_t> T& _group_player_num() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& _bot_difficulty_level() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uint32_t> T& _abtest_player_flag() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uint32_t> T& _ai_id() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _loaded_mapid() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uint32_t> T& _playlist_id() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& _is_play_with_friend() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = int32_t> T& _init_skill_level() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uint32_t> T& _warm_times_lose_streak() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uint32_t> T& _warm_times_streak() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& _enter_source() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uint64_t> T& _invite_id() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& _is_play_with_gamefriend() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& _is_play_with_relativefriend() {
		return *(T*)((uintptr_t)this + 0xB9);
	}
	template <typename T = int32_t> T& _warm_type() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _mp_match_recent_kd_statis() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uint64_t> T& _register_time() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uint64_t> T& _back_timestamp() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uint32_t> T& _daily_warm_times() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uint64_t> T& _last_warm_timestamp() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uint32_t> T& _last_game_timestamp() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = int32_t> T& _mp_match_pressure() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _spvp_selected_playlist_id() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = int64_t> T& _name_card_id() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uint32_t> T& _ai_lab_id() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x104);
	}

	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(MatchPlayerInfo*))(Il2CppBase() + 0x4EA4DAC))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(MatchPlayerInfo*, uint64_t))(Il2CppBase() + 0x4EA4DB4))(this, value);
	}
	template <typename T = int32_t> T get_camp() {
		return ((T (*)(MatchPlayerInfo*))(Il2CppBase() + 0x4EA4DC4))(this);
	}
	template <typename T = void> T set_camp(int32_t value) {
		return ((T (*)(MatchPlayerInfo*, int32_t))(Il2CppBase() + 0x4EA4DCC))(this, value);
	}
	template <typename T = int32_t> T get_seat_index() {
		return ((T (*)(MatchPlayerInfo*))(Il2CppBase() + 0x4EA4DD4))(this);
	}
	template <typename T = void> T set_seat_index(int32_t value) {
		return ((T (*)(MatchPlayerInfo*, int32_t))(Il2CppBase() + 0x4EA4DDC))(this, value);
	}
	template <typename T = uint32_t> T get_zone_bus_id() {
		return ((T (*)(MatchPlayerInfo*))(Il2CppBase() + 0x4EA4DE4))(this);
	}
	template <typename T = void> T set_zone_bus_id(uint32_t value) {
		return ((T (*)(MatchPlayerInfo*, uint32_t))(Il2CppBase() + 0x4EA4DEC))(this, value);
	}
	template <typename T = bool> T get_is_robot() {
		return ((T (*)(MatchPlayerInfo*))(Il2CppBase() + 0x4EA4DF4))(this);
	}
	template <typename T = void> T set_is_robot(bool value) {
		return ((T (*)(MatchPlayerInfo*, bool))(Il2CppBase() + 0x4EA4DFC))(this, value);
	}
	template <typename T = uintptr_t> T get_profile() {
		return ((T (*)(MatchPlayerInfo*))(Il2CppBase() + 0x4EA4E04))(this);
	}
	template <typename T = void> T set_profile(uintptr_t value) {
		return ((T (*)(MatchPlayerInfo*, uintptr_t))(Il2CppBase() + 0x4EA4E0C))(this, value);
	}
	template <typename T = bool> T get_is_halfway_join() {
		return ((T (*)(MatchPlayerInfo*))(Il2CppBase() + 0x4EA4E14))(this);
	}
	template <typename T = void> T set_is_halfway_join(bool value) {
		return ((T (*)(MatchPlayerInfo*, bool))(Il2CppBase() + 0x4EA4E1C))(this, value);
	}
	template <typename T = bool> T get_is_team() {
		return ((T (*)(MatchPlayerInfo*))(Il2CppBase() + 0x4EA4E24))(this);
	}
	template <typename T = void> T set_is_team(bool value) {
		return ((T (*)(MatchPlayerInfo*, bool))(Il2CppBase() + 0x4EA4E2C))(this, value);
	}
	template <typename T = uint32_t> T get_bot_id() {
		return ((T (*)(MatchPlayerInfo*))(Il2CppBase() + 0x4EA4E34))(this);
	}
	template <typename T = void> T set_bot_id(uint32_t value) {
		return ((T (*)(MatchPlayerInfo*, uint32_t))(Il2CppBase() + 0x4EA4E3C))(this, value);
	}
	template <typename T = int32_t> T get_squad_idx() {
		return ((T (*)(MatchPlayerInfo*))(Il2CppBase() + 0x4EA4E44))(this);
	}
	template <typename T = void> T set_squad_idx(int32_t value) {
		return ((T (*)(MatchPlayerInfo*, int32_t))(Il2CppBase() + 0x4EA4E4C))(this, value);
	}
	template <typename T = uint32_t> T get_main_weapon_id() {
		return ((T (*)(MatchPlayerInfo*))(Il2CppBase() + 0x4EA4E54))(this);
	}
	template <typename T = void> T set_main_weapon_id(uint32_t value) {
		return ((T (*)(MatchPlayerInfo*, uint32_t))(Il2CppBase() + 0x4EA4E5C))(this, value);
	}
	template <typename T = uint32_t> T get_ovr() {
		return ((T (*)(MatchPlayerInfo*))(Il2CppBase() + 0x4EA4E64))(this);
	}
	template <typename T = void> T set_ovr(uint32_t value) {
		return ((T (*)(MatchPlayerInfo*, uint32_t))(Il2CppBase() + 0x4EA4E6C))(this, value);
	}
	template <typename T = bool> T get_is_gangup() {
		return ((T (*)(MatchPlayerInfo*))(Il2CppBase() + 0x4EA4E74))(this);
	}
	template <typename T = void> T set_is_gangup(bool value) {
		return ((T (*)(MatchPlayerInfo*, bool))(Il2CppBase() + 0x4EA4E7C))(this, value);
	}
	template <typename T = uint32_t> T get_team_id() {
		return ((T (*)(MatchPlayerInfo*))(Il2CppBase() + 0x4EA4E84))(this);
	}
	template <typename T = void> T set_team_id(uint32_t value) {
		return ((T (*)(MatchPlayerInfo*, uint32_t))(Il2CppBase() + 0x4EA4E8C))(this, value);
	}
	template <typename T = uint32_t> T get_group_id() {
		return ((T (*)(MatchPlayerInfo*))(Il2CppBase() + 0x4EA4E94))(this);
	}
	template <typename T = void> T set_group_id(uint32_t value) {
		return ((T (*)(MatchPlayerInfo*, uint32_t))(Il2CppBase() + 0x4EA4E9C))(this, value);
	}
	template <typename T = uint32_t> T get_match_type() {
		return ((T (*)(MatchPlayerInfo*))(Il2CppBase() + 0x4EA4EA4))(this);
	}
	template <typename T = void> T set_match_type(uint32_t value) {
		return ((T (*)(MatchPlayerInfo*, uint32_t))(Il2CppBase() + 0x4EA4EAC))(this, value);
	}
	template <typename T = uint32_t> T get_start_alloc_time() {
		return ((T (*)(MatchPlayerInfo*))(Il2CppBase() + 0x4EA4EB4))(this);
	}
	template <typename T = void> T set_start_alloc_time(uint32_t value) {
		return ((T (*)(MatchPlayerInfo*, uint32_t))(Il2CppBase() + 0x4EA4EBC))(this, value);
	}
	template <typename T = uint32_t> T get_secondary_weapon_id() {
		return ((T (*)(MatchPlayerInfo*))(Il2CppBase() + 0x4EA4EC4))(this);
	}
	template <typename T = void> T set_secondary_weapon_id(uint32_t value) {
		return ((T (*)(MatchPlayerInfo*, uint32_t))(Il2CppBase() + 0x4EA4ECC))(this, value);
	}
	template <typename T = uint32_t> T get_lethal_grenade_id() {
		return ((T (*)(MatchPlayerInfo*))(Il2CppBase() + 0x4EA4ED4))(this);
	}
	template <typename T = void> T set_lethal_grenade_id(uint32_t value) {
		return ((T (*)(MatchPlayerInfo*, uint32_t))(Il2CppBase() + 0x4EA4EDC))(this, value);
	}
	template <typename T = uint32_t> T get_tactical_grenade_id() {
		return ((T (*)(MatchPlayerInfo*))(Il2CppBase() + 0x4EA4EE4))(this);
	}
	template <typename T = void> T set_tactical_grenade_id(uint32_t value) {
		return ((T (*)(MatchPlayerInfo*, uint32_t))(Il2CppBase() + 0x4EA4EEC))(this, value);
	}
	template <typename T = uint32_t> T get_attach_num_limit() {
		return ((T (*)(MatchPlayerInfo*))(Il2CppBase() + 0x4EA4EF4))(this);
	}
	template <typename T = void> T set_attach_num_limit(uint32_t value) {
		return ((T (*)(MatchPlayerInfo*, uint32_t))(Il2CppBase() + 0x4EA4EFC))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_perk_id() {
		return ((T (*)(MatchPlayerInfo*))(Il2CppBase() + 0x4EA4F04))(this);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_skills() {
		return ((T (*)(MatchPlayerInfo*))(Il2CppBase() + 0x4EA4F0C))(this);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_score_streaks_id() {
		return ((T (*)(MatchPlayerInfo*))(Il2CppBase() + 0x4EA4F14))(this);
	}
	template <typename T = bool> T get_purchase_warm_game() {
		return ((T (*)(MatchPlayerInfo*))(Il2CppBase() + 0x4EA4F1C))(this);
	}
	template <typename T = void> T set_purchase_warm_game(bool value) {
		return ((T (*)(MatchPlayerInfo*, bool))(Il2CppBase() + 0x4EA4F24))(this, value);
	}
	template <typename T = uint64_t> T get_is_observer_friend() {
		return ((T (*)(MatchPlayerInfo*))(Il2CppBase() + 0x4EA4F2C))(this);
	}
	template <typename T = void> T set_is_observer_friend(uint64_t value) {
		return ((T (*)(MatchPlayerInfo*, uint64_t))(Il2CppBase() + 0x4EA4F34))(this, value);
	}
	template <typename T = uint32_t> T get_group_room_id() {
		return ((T (*)(MatchPlayerInfo*))(Il2CppBase() + 0x4EA4F44))(this);
	}
	template <typename T = void> T set_group_room_id(uint32_t value) {
		return ((T (*)(MatchPlayerInfo*, uint32_t))(Il2CppBase() + 0x4EA4F4C))(this, value);
	}
	template <typename T = uint32_t> T get_group_room_bus_id() {
		return ((T (*)(MatchPlayerInfo*))(Il2CppBase() + 0x4EA4F54))(this);
	}
	template <typename T = void> T set_group_room_bus_id(uint32_t value) {
		return ((T (*)(MatchPlayerInfo*, uint32_t))(Il2CppBase() + 0x4EA4F5C))(this, value);
	}
	template <typename T = uint32_t> T get_group_room_create_time() {
		return ((T (*)(MatchPlayerInfo*))(Il2CppBase() + 0x4EA4F64))(this);
	}
	template <typename T = void> T set_group_room_create_time(uint32_t value) {
		return ((T (*)(MatchPlayerInfo*, uint32_t))(Il2CppBase() + 0x4EA4F6C))(this, value);
	}
	template <typename T = uint32_t> T get_group_player_num() {
		return ((T (*)(MatchPlayerInfo*))(Il2CppBase() + 0x4EA4F74))(this);
	}
	template <typename T = void> T set_group_player_num(uint32_t value) {
		return ((T (*)(MatchPlayerInfo*, uint32_t))(Il2CppBase() + 0x4EA4F7C))(this, value);
	}
	template <typename T = int32_t> T get_bot_difficulty_level() {
		return ((T (*)(MatchPlayerInfo*))(Il2CppBase() + 0x4EA4F84))(this);
	}
	template <typename T = void> T set_bot_difficulty_level(int32_t value) {
		return ((T (*)(MatchPlayerInfo*, int32_t))(Il2CppBase() + 0x4EA4F8C))(this, value);
	}
	template <typename T = uint32_t> T get_abtest_player_flag() {
		return ((T (*)(MatchPlayerInfo*))(Il2CppBase() + 0x4EA4F94))(this);
	}
	template <typename T = void> T set_abtest_player_flag(uint32_t value) {
		return ((T (*)(MatchPlayerInfo*, uint32_t))(Il2CppBase() + 0x4EA4F9C))(this, value);
	}
	template <typename T = uint32_t> T get_ai_id() {
		return ((T (*)(MatchPlayerInfo*))(Il2CppBase() + 0x4EA4FA4))(this);
	}
	template <typename T = void> T set_ai_id(uint32_t value) {
		return ((T (*)(MatchPlayerInfo*, uint32_t))(Il2CppBase() + 0x4EA4FAC))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_loaded_mapid() {
		return ((T (*)(MatchPlayerInfo*))(Il2CppBase() + 0x4EA4FB4))(this);
	}
	template <typename T = uint32_t> T get_playlist_id() {
		return ((T (*)(MatchPlayerInfo*))(Il2CppBase() + 0x4EA4FBC))(this);
	}
	template <typename T = void> T set_playlist_id(uint32_t value) {
		return ((T (*)(MatchPlayerInfo*, uint32_t))(Il2CppBase() + 0x4EA4FC4))(this, value);
	}
	template <typename T = bool> T get_is_play_with_friend() {
		return ((T (*)(MatchPlayerInfo*))(Il2CppBase() + 0x4EA4FCC))(this);
	}
	template <typename T = void> T set_is_play_with_friend(bool value) {
		return ((T (*)(MatchPlayerInfo*, bool))(Il2CppBase() + 0x4EA4FD4))(this, value);
	}
	template <typename T = int32_t> T get_init_skill_level() {
		return ((T (*)(MatchPlayerInfo*))(Il2CppBase() + 0x4EA4FDC))(this);
	}
	template <typename T = void> T set_init_skill_level(int32_t value) {
		return ((T (*)(MatchPlayerInfo*, int32_t))(Il2CppBase() + 0x4EA4FE4))(this, value);
	}
	template <typename T = uint32_t> T get_warm_times_lose_streak() {
		return ((T (*)(MatchPlayerInfo*))(Il2CppBase() + 0x4EA4FEC))(this);
	}
	template <typename T = void> T set_warm_times_lose_streak(uint32_t value) {
		return ((T (*)(MatchPlayerInfo*, uint32_t))(Il2CppBase() + 0x4EA4FF4))(this, value);
	}
	template <typename T = uint32_t> T get_warm_times_streak() {
		return ((T (*)(MatchPlayerInfo*))(Il2CppBase() + 0x4EA4FFC))(this);
	}
	template <typename T = void> T set_warm_times_streak(uint32_t value) {
		return ((T (*)(MatchPlayerInfo*, uint32_t))(Il2CppBase() + 0x4EA5004))(this, value);
	}
	template <typename T = int32_t> T get_enter_source() {
		return ((T (*)(MatchPlayerInfo*))(Il2CppBase() + 0x4EA500C))(this);
	}
	template <typename T = void> T set_enter_source(int32_t value) {
		return ((T (*)(MatchPlayerInfo*, int32_t))(Il2CppBase() + 0x4EA5014))(this, value);
	}
	template <typename T = uint64_t> T get_invite_id() {
		return ((T (*)(MatchPlayerInfo*))(Il2CppBase() + 0x4EA501C))(this);
	}
	template <typename T = void> T set_invite_id(uint64_t value) {
		return ((T (*)(MatchPlayerInfo*, uint64_t))(Il2CppBase() + 0x4EA5024))(this, value);
	}
	template <typename T = bool> T get_is_play_with_gamefriend() {
		return ((T (*)(MatchPlayerInfo*))(Il2CppBase() + 0x4EA5034))(this);
	}
	template <typename T = void> T set_is_play_with_gamefriend(bool value) {
		return ((T (*)(MatchPlayerInfo*, bool))(Il2CppBase() + 0x4EA503C))(this, value);
	}
	template <typename T = bool> T get_is_play_with_relativefriend() {
		return ((T (*)(MatchPlayerInfo*))(Il2CppBase() + 0x4EA5044))(this);
	}
	template <typename T = void> T set_is_play_with_relativefriend(bool value) {
		return ((T (*)(MatchPlayerInfo*, bool))(Il2CppBase() + 0x4EA504C))(this, value);
	}
	template <typename T = int32_t> T get_warm_type() {
		return ((T (*)(MatchPlayerInfo*))(Il2CppBase() + 0x4EA5054))(this);
	}
	template <typename T = void> T set_warm_type(int32_t value) {
		return ((T (*)(MatchPlayerInfo*, int32_t))(Il2CppBase() + 0x4EA505C))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_mp_match_recent_kd_statis() {
		return ((T (*)(MatchPlayerInfo*))(Il2CppBase() + 0x4EA5064))(this);
	}
	template <typename T = uint64_t> T get_register_time() {
		return ((T (*)(MatchPlayerInfo*))(Il2CppBase() + 0x4EA506C))(this);
	}
	template <typename T = void> T set_register_time(uint64_t value) {
		return ((T (*)(MatchPlayerInfo*, uint64_t))(Il2CppBase() + 0x4EA5074))(this, value);
	}
	template <typename T = uint64_t> T get_back_timestamp() {
		return ((T (*)(MatchPlayerInfo*))(Il2CppBase() + 0x4EA5084))(this);
	}
	template <typename T = void> T set_back_timestamp(uint64_t value) {
		return ((T (*)(MatchPlayerInfo*, uint64_t))(Il2CppBase() + 0x4EA508C))(this, value);
	}
	template <typename T = uint32_t> T get_daily_warm_times() {
		return ((T (*)(MatchPlayerInfo*))(Il2CppBase() + 0x4EA509C))(this);
	}
	template <typename T = void> T set_daily_warm_times(uint32_t value) {
		return ((T (*)(MatchPlayerInfo*, uint32_t))(Il2CppBase() + 0x4EA50A4))(this, value);
	}
	template <typename T = uint64_t> T get_last_warm_timestamp() {
		return ((T (*)(MatchPlayerInfo*))(Il2CppBase() + 0x4EA50AC))(this);
	}
	template <typename T = void> T set_last_warm_timestamp(uint64_t value) {
		return ((T (*)(MatchPlayerInfo*, uint64_t))(Il2CppBase() + 0x4EA50B4))(this, value);
	}
	template <typename T = uint32_t> T get_last_game_timestamp() {
		return ((T (*)(MatchPlayerInfo*))(Il2CppBase() + 0x4EA50C4))(this);
	}
	template <typename T = void> T set_last_game_timestamp(uint32_t value) {
		return ((T (*)(MatchPlayerInfo*, uint32_t))(Il2CppBase() + 0x4EA50CC))(this, value);
	}
	template <typename T = int32_t> T get_mp_match_pressure() {
		return ((T (*)(MatchPlayerInfo*))(Il2CppBase() + 0x4EA50D4))(this);
	}
	template <typename T = void> T set_mp_match_pressure(int32_t value) {
		return ((T (*)(MatchPlayerInfo*, int32_t))(Il2CppBase() + 0x4EA50DC))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_spvp_selected_playlist_id() {
		return ((T (*)(MatchPlayerInfo*))(Il2CppBase() + 0x4EA50E4))(this);
	}
	template <typename T = int64_t> T get_name_card_id() {
		return ((T (*)(MatchPlayerInfo*))(Il2CppBase() + 0x4EA50EC))(this);
	}
	template <typename T = void> T set_name_card_id(int64_t value) {
		return ((T (*)(MatchPlayerInfo*, int64_t))(Il2CppBase() + 0x4EA50F4))(this, value);
	}
	template <typename T = uint32_t> T get_ai_lab_id() {
		return ((T (*)(MatchPlayerInfo*))(Il2CppBase() + 0x4EA5104))(this);
	}
	template <typename T = void> T set_ai_lab_id(uint32_t value) {
		return ((T (*)(MatchPlayerInfo*, uint32_t))(Il2CppBase() + 0x4EA510C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(MatchPlayerInfo*, bool))(Il2CppBase() + 0x4EA5114))(this, createIfMissing);
	}

};

}
