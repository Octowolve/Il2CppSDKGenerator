#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGroupRoomChangeSettingReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGroupRoomChangeSettingReq"));
	}

	template <typename T = uint32_t> T& _map_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _mode_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _password() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _team_type() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& _is_match_stranger() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _score_limit() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _time_limit() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& _enable_spectating() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& _enable_other_invite() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = uint32_t> T& _br_ai_count() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& _br_max_player_count() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& _br_special_setting() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint32_t> T& _pp_mode() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uint32_t> T& _spvp_max_observer_count() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& _pve_no_matchmaking() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uint32_t> T& _service_module() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _room_name() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uint32_t> T& _spvp_playlist_id() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _spvp_selected_mapid() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& _client_flag() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uint32_t> T& _pve_level_id() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& _client_source() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uint32_t> T& _br_playlist_id() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _spvp_selected_playlist_id() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uint32_t> T& _ticket_flag() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uint32_t> T& _min_enter_level() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& _need_open_mic() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uint32_t> T& _ticket_type() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uint64_t> T& _ticket_guild_id() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& _only_chg_ticket() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x84);
	}

	template <typename T = uint32_t> T get_map_id() {
		return ((T (*)(CSGroupRoomChangeSettingReq*))(Il2CppBase() + 0x51DDC14))(this);
	}
	template <typename T = void> T set_map_id(uint32_t value) {
		return ((T (*)(CSGroupRoomChangeSettingReq*, uint32_t))(Il2CppBase() + 0x51DDC1C))(this, value);
	}
	template <typename T = uint32_t> T get_mode_id() {
		return ((T (*)(CSGroupRoomChangeSettingReq*))(Il2CppBase() + 0x51DDC24))(this);
	}
	template <typename T = void> T set_mode_id(uint32_t value) {
		return ((T (*)(CSGroupRoomChangeSettingReq*, uint32_t))(Il2CppBase() + 0x51DDC2C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_password() {
		return ((T (*)(CSGroupRoomChangeSettingReq*))(Il2CppBase() + 0x51DDC34))(this);
	}
	template <typename T = void> T set_password(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSGroupRoomChangeSettingReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51DDC3C))(this, value);
	}
	template <typename T = uint32_t> T get_team_type() {
		return ((T (*)(CSGroupRoomChangeSettingReq*))(Il2CppBase() + 0x51DDC44))(this);
	}
	template <typename T = void> T set_team_type(uint32_t value) {
		return ((T (*)(CSGroupRoomChangeSettingReq*, uint32_t))(Il2CppBase() + 0x51DDC4C))(this, value);
	}
	template <typename T = bool> T get_is_match_stranger() {
		return ((T (*)(CSGroupRoomChangeSettingReq*))(Il2CppBase() + 0x51DDC54))(this);
	}
	template <typename T = void> T set_is_match_stranger(bool value) {
		return ((T (*)(CSGroupRoomChangeSettingReq*, bool))(Il2CppBase() + 0x51DDC5C))(this, value);
	}
	template <typename T = uint32_t> T get_score_limit() {
		return ((T (*)(CSGroupRoomChangeSettingReq*))(Il2CppBase() + 0x51DDC64))(this);
	}
	template <typename T = void> T set_score_limit(uint32_t value) {
		return ((T (*)(CSGroupRoomChangeSettingReq*, uint32_t))(Il2CppBase() + 0x51DDC6C))(this, value);
	}
	template <typename T = uint32_t> T get_time_limit() {
		return ((T (*)(CSGroupRoomChangeSettingReq*))(Il2CppBase() + 0x51DDC74))(this);
	}
	template <typename T = void> T set_time_limit(uint32_t value) {
		return ((T (*)(CSGroupRoomChangeSettingReq*, uint32_t))(Il2CppBase() + 0x51DDC7C))(this, value);
	}
	template <typename T = bool> T get_enable_spectating() {
		return ((T (*)(CSGroupRoomChangeSettingReq*))(Il2CppBase() + 0x51DDC84))(this);
	}
	template <typename T = void> T set_enable_spectating(bool value) {
		return ((T (*)(CSGroupRoomChangeSettingReq*, bool))(Il2CppBase() + 0x51DDC8C))(this, value);
	}
	template <typename T = bool> T get_enable_other_invite() {
		return ((T (*)(CSGroupRoomChangeSettingReq*))(Il2CppBase() + 0x51DDC94))(this);
	}
	template <typename T = void> T set_enable_other_invite(bool value) {
		return ((T (*)(CSGroupRoomChangeSettingReq*, bool))(Il2CppBase() + 0x51DDC9C))(this, value);
	}
	template <typename T = uint32_t> T get_br_ai_count() {
		return ((T (*)(CSGroupRoomChangeSettingReq*))(Il2CppBase() + 0x51DDCA4))(this);
	}
	template <typename T = void> T set_br_ai_count(uint32_t value) {
		return ((T (*)(CSGroupRoomChangeSettingReq*, uint32_t))(Il2CppBase() + 0x51DDCAC))(this, value);
	}
	template <typename T = uint32_t> T get_br_max_player_count() {
		return ((T (*)(CSGroupRoomChangeSettingReq*))(Il2CppBase() + 0x51DDCB4))(this);
	}
	template <typename T = void> T set_br_max_player_count(uint32_t value) {
		return ((T (*)(CSGroupRoomChangeSettingReq*, uint32_t))(Il2CppBase() + 0x51DDCBC))(this, value);
	}
	template <typename T = uintptr_t> T get_br_special_setting() {
		return ((T (*)(CSGroupRoomChangeSettingReq*))(Il2CppBase() + 0x51DDCC4))(this);
	}
	template <typename T = void> T set_br_special_setting(uintptr_t value) {
		return ((T (*)(CSGroupRoomChangeSettingReq*, uintptr_t))(Il2CppBase() + 0x51DDCCC))(this, value);
	}
	template <typename T = uint32_t> T get_pp_mode() {
		return ((T (*)(CSGroupRoomChangeSettingReq*))(Il2CppBase() + 0x51DDCD4))(this);
	}
	template <typename T = void> T set_pp_mode(uint32_t value) {
		return ((T (*)(CSGroupRoomChangeSettingReq*, uint32_t))(Il2CppBase() + 0x51DDCDC))(this, value);
	}
	template <typename T = uint32_t> T get_spvp_max_observer_count() {
		return ((T (*)(CSGroupRoomChangeSettingReq*))(Il2CppBase() + 0x51DDCE4))(this);
	}
	template <typename T = void> T set_spvp_max_observer_count(uint32_t value) {
		return ((T (*)(CSGroupRoomChangeSettingReq*, uint32_t))(Il2CppBase() + 0x51DDCEC))(this, value);
	}
	template <typename T = uint32_t> T get_pve_no_matchmaking() {
		return ((T (*)(CSGroupRoomChangeSettingReq*))(Il2CppBase() + 0x51DDCF4))(this);
	}
	template <typename T = void> T set_pve_no_matchmaking(uint32_t value) {
		return ((T (*)(CSGroupRoomChangeSettingReq*, uint32_t))(Il2CppBase() + 0x51DDCFC))(this, value);
	}
	template <typename T = uint32_t> T get_service_module() {
		return ((T (*)(CSGroupRoomChangeSettingReq*))(Il2CppBase() + 0x51DDD04))(this);
	}
	template <typename T = void> T set_service_module(uint32_t value) {
		return ((T (*)(CSGroupRoomChangeSettingReq*, uint32_t))(Il2CppBase() + 0x51DDD0C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_room_name() {
		return ((T (*)(CSGroupRoomChangeSettingReq*))(Il2CppBase() + 0x51DDD14))(this);
	}
	template <typename T = void> T set_room_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSGroupRoomChangeSettingReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51DDD1C))(this, value);
	}
	template <typename T = uint32_t> T get_spvp_playlist_id() {
		return ((T (*)(CSGroupRoomChangeSettingReq*))(Il2CppBase() + 0x51DDD24))(this);
	}
	template <typename T = void> T set_spvp_playlist_id(uint32_t value) {
		return ((T (*)(CSGroupRoomChangeSettingReq*, uint32_t))(Il2CppBase() + 0x51DDD2C))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_spvp_selected_mapid() {
		return ((T (*)(CSGroupRoomChangeSettingReq*))(Il2CppBase() + 0x51DDD34))(this);
	}
	template <typename T = int32_t> T get_client_flag() {
		return ((T (*)(CSGroupRoomChangeSettingReq*))(Il2CppBase() + 0x51DDD3C))(this);
	}
	template <typename T = void> T set_client_flag(int32_t value) {
		return ((T (*)(CSGroupRoomChangeSettingReq*, int32_t))(Il2CppBase() + 0x51DDD44))(this, value);
	}
	template <typename T = uint32_t> T get_pve_level_id() {
		return ((T (*)(CSGroupRoomChangeSettingReq*))(Il2CppBase() + 0x51DDD4C))(this);
	}
	template <typename T = void> T set_pve_level_id(uint32_t value) {
		return ((T (*)(CSGroupRoomChangeSettingReq*, uint32_t))(Il2CppBase() + 0x51DDD54))(this, value);
	}
	template <typename T = int32_t> T get_client_source() {
		return ((T (*)(CSGroupRoomChangeSettingReq*))(Il2CppBase() + 0x51DDD5C))(this);
	}
	template <typename T = void> T set_client_source(int32_t value) {
		return ((T (*)(CSGroupRoomChangeSettingReq*, int32_t))(Il2CppBase() + 0x51DDD64))(this, value);
	}
	template <typename T = uint32_t> T get_br_playlist_id() {
		return ((T (*)(CSGroupRoomChangeSettingReq*))(Il2CppBase() + 0x51DDD6C))(this);
	}
	template <typename T = void> T set_br_playlist_id(uint32_t value) {
		return ((T (*)(CSGroupRoomChangeSettingReq*, uint32_t))(Il2CppBase() + 0x51DDD74))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_spvp_selected_playlist_id() {
		return ((T (*)(CSGroupRoomChangeSettingReq*))(Il2CppBase() + 0x51DDD7C))(this);
	}
	template <typename T = uint32_t> T get_ticket_flag() {
		return ((T (*)(CSGroupRoomChangeSettingReq*))(Il2CppBase() + 0x51DDD84))(this);
	}
	template <typename T = void> T set_ticket_flag(uint32_t value) {
		return ((T (*)(CSGroupRoomChangeSettingReq*, uint32_t))(Il2CppBase() + 0x51DDD8C))(this, value);
	}
	template <typename T = uint32_t> T get_min_enter_level() {
		return ((T (*)(CSGroupRoomChangeSettingReq*))(Il2CppBase() + 0x51DDD94))(this);
	}
	template <typename T = void> T set_min_enter_level(uint32_t value) {
		return ((T (*)(CSGroupRoomChangeSettingReq*, uint32_t))(Il2CppBase() + 0x51DDD9C))(this, value);
	}
	template <typename T = bool> T get_need_open_mic() {
		return ((T (*)(CSGroupRoomChangeSettingReq*))(Il2CppBase() + 0x51DDDA4))(this);
	}
	template <typename T = void> T set_need_open_mic(bool value) {
		return ((T (*)(CSGroupRoomChangeSettingReq*, bool))(Il2CppBase() + 0x51DDDAC))(this, value);
	}
	template <typename T = uint32_t> T get_ticket_type() {
		return ((T (*)(CSGroupRoomChangeSettingReq*))(Il2CppBase() + 0x51DDDB4))(this);
	}
	template <typename T = void> T set_ticket_type(uint32_t value) {
		return ((T (*)(CSGroupRoomChangeSettingReq*, uint32_t))(Il2CppBase() + 0x51DDDBC))(this, value);
	}
	template <typename T = uint64_t> T get_ticket_guild_id() {
		return ((T (*)(CSGroupRoomChangeSettingReq*))(Il2CppBase() + 0x51DDDC4))(this);
	}
	template <typename T = void> T set_ticket_guild_id(uint64_t value) {
		return ((T (*)(CSGroupRoomChangeSettingReq*, uint64_t))(Il2CppBase() + 0x51DDDCC))(this, value);
	}
	template <typename T = bool> T get_only_chg_ticket() {
		return ((T (*)(CSGroupRoomChangeSettingReq*))(Il2CppBase() + 0x51DDDDC))(this);
	}
	template <typename T = void> T set_only_chg_ticket(bool value) {
		return ((T (*)(CSGroupRoomChangeSettingReq*, bool))(Il2CppBase() + 0x51DDDE4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGroupRoomChangeSettingReq*, bool))(Il2CppBase() + 0x51DDDEC))(this, createIfMissing);
	}

};

}
