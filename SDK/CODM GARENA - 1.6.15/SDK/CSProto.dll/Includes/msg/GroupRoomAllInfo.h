#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GroupRoomAllInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GroupRoomAllInfo"));
	}

	template <typename T = int32_t> T& _mode_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _map_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _regular_player_list() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _rebel_player_list() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _observe_player_list() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _room_type() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _room_id() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _team_type() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& _is_match_stranger() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& _score_limit() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint32_t> T& _time_limit() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& _enable_spectating() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& _enable_other_invite() {
		return *(T*)((uintptr_t)this + 0x35);
	}
	template <typename T = uint32_t> T& _timestamp() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& _room_svr_addr() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uint32_t> T& _br_ai_count() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint32_t> T& _br_max_player_count() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& _br_special_setting() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& _pin_code() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _password() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _room_name() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& _max_observer_count() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uint32_t> T& _pp_mode() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& _is_simulator() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uint32_t> T& _spvp_playlist_id() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _spvp_selected_mapid() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& _is_gamepad() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& _block_gamepad() {
		return *(T*)((uintptr_t)this + 0x6D);
	}
	template <typename T = uint32_t> T& _pve_level_id() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uint32_t> T& _br_playlist_id() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _spvp_selected_playlist_id() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uint32_t> T& _dsc_group_id() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uint32_t> T& _ticket_flag() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uint32_t> T& _recruit_count() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uint32_t> T& _room_full_count() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& _is_in_game() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& _need_open_mic() {
		return *(T*)((uintptr_t)this + 0x8D);
	}
	template <typename T = uint32_t> T& _min_enter_level() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uint32_t> T& _ticket_type() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uint64_t> T& _ticket_guild_id() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xA0);
	}

	template <typename T = int32_t> T get_mode_id() {
		return ((T (*)(GroupRoomAllInfo*))(Il2CppBase() + 0x50CE1D0))(this);
	}
	template <typename T = void> T set_mode_id(int32_t value) {
		return ((T (*)(GroupRoomAllInfo*, int32_t))(Il2CppBase() + 0x50CE1D8))(this, value);
	}
	template <typename T = int32_t> T get_map_id() {
		return ((T (*)(GroupRoomAllInfo*))(Il2CppBase() + 0x50CE1E0))(this);
	}
	template <typename T = void> T set_map_id(int32_t value) {
		return ((T (*)(GroupRoomAllInfo*, int32_t))(Il2CppBase() + 0x50CE1E8))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_regular_player_list() {
		return ((T (*)(GroupRoomAllInfo*))(Il2CppBase() + 0x50CE1F0))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_rebel_player_list() {
		return ((T (*)(GroupRoomAllInfo*))(Il2CppBase() + 0x50CE1F8))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_observe_player_list() {
		return ((T (*)(GroupRoomAllInfo*))(Il2CppBase() + 0x50CE200))(this);
	}
	template <typename T = int32_t> T get_room_type() {
		return ((T (*)(GroupRoomAllInfo*))(Il2CppBase() + 0x50CE208))(this);
	}
	template <typename T = void> T set_room_type(int32_t value) {
		return ((T (*)(GroupRoomAllInfo*, int32_t))(Il2CppBase() + 0x50CE210))(this, value);
	}
	template <typename T = int32_t> T get_room_id() {
		return ((T (*)(GroupRoomAllInfo*))(Il2CppBase() + 0x50CE218))(this);
	}
	template <typename T = void> T set_room_id(int32_t value) {
		return ((T (*)(GroupRoomAllInfo*, int32_t))(Il2CppBase() + 0x50CE220))(this, value);
	}
	template <typename T = int32_t> T get_team_type() {
		return ((T (*)(GroupRoomAllInfo*))(Il2CppBase() + 0x50CE228))(this);
	}
	template <typename T = void> T set_team_type(int32_t value) {
		return ((T (*)(GroupRoomAllInfo*, int32_t))(Il2CppBase() + 0x50CE230))(this, value);
	}
	template <typename T = bool> T get_is_match_stranger() {
		return ((T (*)(GroupRoomAllInfo*))(Il2CppBase() + 0x50CE238))(this);
	}
	template <typename T = void> T set_is_match_stranger(bool value) {
		return ((T (*)(GroupRoomAllInfo*, bool))(Il2CppBase() + 0x50CE240))(this, value);
	}
	template <typename T = uint32_t> T get_score_limit() {
		return ((T (*)(GroupRoomAllInfo*))(Il2CppBase() + 0x50CE248))(this);
	}
	template <typename T = void> T set_score_limit(uint32_t value) {
		return ((T (*)(GroupRoomAllInfo*, uint32_t))(Il2CppBase() + 0x50CE250))(this, value);
	}
	template <typename T = uint32_t> T get_time_limit() {
		return ((T (*)(GroupRoomAllInfo*))(Il2CppBase() + 0x50CE258))(this);
	}
	template <typename T = void> T set_time_limit(uint32_t value) {
		return ((T (*)(GroupRoomAllInfo*, uint32_t))(Il2CppBase() + 0x50CE260))(this, value);
	}
	template <typename T = bool> T get_enable_spectating() {
		return ((T (*)(GroupRoomAllInfo*))(Il2CppBase() + 0x50CE268))(this);
	}
	template <typename T = void> T set_enable_spectating(bool value) {
		return ((T (*)(GroupRoomAllInfo*, bool))(Il2CppBase() + 0x50CE270))(this, value);
	}
	template <typename T = bool> T get_enable_other_invite() {
		return ((T (*)(GroupRoomAllInfo*))(Il2CppBase() + 0x50CE278))(this);
	}
	template <typename T = void> T set_enable_other_invite(bool value) {
		return ((T (*)(GroupRoomAllInfo*, bool))(Il2CppBase() + 0x50CE280))(this, value);
	}
	template <typename T = uint32_t> T get_timestamp() {
		return ((T (*)(GroupRoomAllInfo*))(Il2CppBase() + 0x50CE288))(this);
	}
	template <typename T = void> T set_timestamp(uint32_t value) {
		return ((T (*)(GroupRoomAllInfo*, uint32_t))(Il2CppBase() + 0x50CE290))(this, value);
	}
	template <typename T = uint32_t> T get_room_svr_addr() {
		return ((T (*)(GroupRoomAllInfo*))(Il2CppBase() + 0x50CE298))(this);
	}
	template <typename T = void> T set_room_svr_addr(uint32_t value) {
		return ((T (*)(GroupRoomAllInfo*, uint32_t))(Il2CppBase() + 0x50CE2A0))(this, value);
	}
	template <typename T = uint32_t> T get_br_ai_count() {
		return ((T (*)(GroupRoomAllInfo*))(Il2CppBase() + 0x50CE2A8))(this);
	}
	template <typename T = void> T set_br_ai_count(uint32_t value) {
		return ((T (*)(GroupRoomAllInfo*, uint32_t))(Il2CppBase() + 0x50CE2B0))(this, value);
	}
	template <typename T = uint32_t> T get_br_max_player_count() {
		return ((T (*)(GroupRoomAllInfo*))(Il2CppBase() + 0x50CE2B8))(this);
	}
	template <typename T = void> T set_br_max_player_count(uint32_t value) {
		return ((T (*)(GroupRoomAllInfo*, uint32_t))(Il2CppBase() + 0x50CE2C0))(this, value);
	}
	template <typename T = uintptr_t> T get_br_special_setting() {
		return ((T (*)(GroupRoomAllInfo*))(Il2CppBase() + 0x50CE2C8))(this);
	}
	template <typename T = void> T set_br_special_setting(uintptr_t value) {
		return ((T (*)(GroupRoomAllInfo*, uintptr_t))(Il2CppBase() + 0x50CE2D0))(this, value);
	}
	template <typename T = int32_t> T get_pin_code() {
		return ((T (*)(GroupRoomAllInfo*))(Il2CppBase() + 0x50CE2D8))(this);
	}
	template <typename T = void> T set_pin_code(int32_t value) {
		return ((T (*)(GroupRoomAllInfo*, int32_t))(Il2CppBase() + 0x50CE2E0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_password() {
		return ((T (*)(GroupRoomAllInfo*))(Il2CppBase() + 0x50CE2E8))(this);
	}
	template <typename T = void> T set_password(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(GroupRoomAllInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x50CE2F0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_room_name() {
		return ((T (*)(GroupRoomAllInfo*))(Il2CppBase() + 0x50CE2F8))(this);
	}
	template <typename T = void> T set_room_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(GroupRoomAllInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x50CE300))(this, value);
	}
	template <typename T = int32_t> T get_max_observer_count() {
		return ((T (*)(GroupRoomAllInfo*))(Il2CppBase() + 0x50CE308))(this);
	}
	template <typename T = void> T set_max_observer_count(int32_t value) {
		return ((T (*)(GroupRoomAllInfo*, int32_t))(Il2CppBase() + 0x50CE310))(this, value);
	}
	template <typename T = uint32_t> T get_pp_mode() {
		return ((T (*)(GroupRoomAllInfo*))(Il2CppBase() + 0x50CE318))(this);
	}
	template <typename T = void> T set_pp_mode(uint32_t value) {
		return ((T (*)(GroupRoomAllInfo*, uint32_t))(Il2CppBase() + 0x50CE320))(this, value);
	}
	template <typename T = bool> T get_is_simulator() {
		return ((T (*)(GroupRoomAllInfo*))(Il2CppBase() + 0x50CE328))(this);
	}
	template <typename T = void> T set_is_simulator(bool value) {
		return ((T (*)(GroupRoomAllInfo*, bool))(Il2CppBase() + 0x50CE330))(this, value);
	}
	template <typename T = uint32_t> T get_spvp_playlist_id() {
		return ((T (*)(GroupRoomAllInfo*))(Il2CppBase() + 0x50CE338))(this);
	}
	template <typename T = void> T set_spvp_playlist_id(uint32_t value) {
		return ((T (*)(GroupRoomAllInfo*, uint32_t))(Il2CppBase() + 0x50CE340))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_spvp_selected_mapid() {
		return ((T (*)(GroupRoomAllInfo*))(Il2CppBase() + 0x50CE348))(this);
	}
	template <typename T = bool> T get_is_gamepad() {
		return ((T (*)(GroupRoomAllInfo*))(Il2CppBase() + 0x50CE350))(this);
	}
	template <typename T = void> T set_is_gamepad(bool value) {
		return ((T (*)(GroupRoomAllInfo*, bool))(Il2CppBase() + 0x50CE358))(this, value);
	}
	template <typename T = bool> T get_block_gamepad() {
		return ((T (*)(GroupRoomAllInfo*))(Il2CppBase() + 0x50CE360))(this);
	}
	template <typename T = void> T set_block_gamepad(bool value) {
		return ((T (*)(GroupRoomAllInfo*, bool))(Il2CppBase() + 0x50CE368))(this, value);
	}
	template <typename T = uint32_t> T get_pve_level_id() {
		return ((T (*)(GroupRoomAllInfo*))(Il2CppBase() + 0x50CE370))(this);
	}
	template <typename T = void> T set_pve_level_id(uint32_t value) {
		return ((T (*)(GroupRoomAllInfo*, uint32_t))(Il2CppBase() + 0x50CE378))(this, value);
	}
	template <typename T = uint32_t> T get_br_playlist_id() {
		return ((T (*)(GroupRoomAllInfo*))(Il2CppBase() + 0x50CE380))(this);
	}
	template <typename T = void> T set_br_playlist_id(uint32_t value) {
		return ((T (*)(GroupRoomAllInfo*, uint32_t))(Il2CppBase() + 0x50CE388))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_spvp_selected_playlist_id() {
		return ((T (*)(GroupRoomAllInfo*))(Il2CppBase() + 0x50CE390))(this);
	}
	template <typename T = uint32_t> T get_dsc_group_id() {
		return ((T (*)(GroupRoomAllInfo*))(Il2CppBase() + 0x50CE398))(this);
	}
	template <typename T = void> T set_dsc_group_id(uint32_t value) {
		return ((T (*)(GroupRoomAllInfo*, uint32_t))(Il2CppBase() + 0x50CE3A0))(this, value);
	}
	template <typename T = uint32_t> T get_ticket_flag() {
		return ((T (*)(GroupRoomAllInfo*))(Il2CppBase() + 0x50CE3A8))(this);
	}
	template <typename T = void> T set_ticket_flag(uint32_t value) {
		return ((T (*)(GroupRoomAllInfo*, uint32_t))(Il2CppBase() + 0x50CE3B0))(this, value);
	}
	template <typename T = uint32_t> T get_recruit_count() {
		return ((T (*)(GroupRoomAllInfo*))(Il2CppBase() + 0x50CE3B8))(this);
	}
	template <typename T = void> T set_recruit_count(uint32_t value) {
		return ((T (*)(GroupRoomAllInfo*, uint32_t))(Il2CppBase() + 0x50CE3C0))(this, value);
	}
	template <typename T = uint32_t> T get_room_full_count() {
		return ((T (*)(GroupRoomAllInfo*))(Il2CppBase() + 0x50CE3C8))(this);
	}
	template <typename T = void> T set_room_full_count(uint32_t value) {
		return ((T (*)(GroupRoomAllInfo*, uint32_t))(Il2CppBase() + 0x50CE3D0))(this, value);
	}
	template <typename T = bool> T get_is_in_game() {
		return ((T (*)(GroupRoomAllInfo*))(Il2CppBase() + 0x50CE3D8))(this);
	}
	template <typename T = void> T set_is_in_game(bool value) {
		return ((T (*)(GroupRoomAllInfo*, bool))(Il2CppBase() + 0x50CE3E0))(this, value);
	}
	template <typename T = bool> T get_need_open_mic() {
		return ((T (*)(GroupRoomAllInfo*))(Il2CppBase() + 0x50CE3E8))(this);
	}
	template <typename T = void> T set_need_open_mic(bool value) {
		return ((T (*)(GroupRoomAllInfo*, bool))(Il2CppBase() + 0x50CE3F0))(this, value);
	}
	template <typename T = uint32_t> T get_min_enter_level() {
		return ((T (*)(GroupRoomAllInfo*))(Il2CppBase() + 0x50CE3F8))(this);
	}
	template <typename T = void> T set_min_enter_level(uint32_t value) {
		return ((T (*)(GroupRoomAllInfo*, uint32_t))(Il2CppBase() + 0x50CE400))(this, value);
	}
	template <typename T = uint32_t> T get_ticket_type() {
		return ((T (*)(GroupRoomAllInfo*))(Il2CppBase() + 0x50CE408))(this);
	}
	template <typename T = void> T set_ticket_type(uint32_t value) {
		return ((T (*)(GroupRoomAllInfo*, uint32_t))(Il2CppBase() + 0x50CE410))(this, value);
	}
	template <typename T = uint64_t> T get_ticket_guild_id() {
		return ((T (*)(GroupRoomAllInfo*))(Il2CppBase() + 0x50CE418))(this);
	}
	template <typename T = void> T set_ticket_guild_id(uint64_t value) {
		return ((T (*)(GroupRoomAllInfo*, uint64_t))(Il2CppBase() + 0x50CE420))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GroupRoomAllInfo*, bool))(Il2CppBase() + 0x50CE430))(this, createIfMissing);
	}

};

}
