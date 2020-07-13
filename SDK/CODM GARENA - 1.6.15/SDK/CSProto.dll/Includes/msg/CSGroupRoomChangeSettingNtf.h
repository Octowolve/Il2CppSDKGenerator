#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGroupRoomChangeSettingNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGroupRoomChangeSettingNtf"));
	}

	template <typename T = uint64_t> T& _change_player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _map_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _mode_id() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _password() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _team_type() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& _is_match_stranger() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& _score_limit() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& _time_limit() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& _enable_spectating() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& _enable_other_invite() {
		return *(T*)((uintptr_t)this + 0x2D);
	}
	template <typename T = uint32_t> T& _br_ai_count() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint32_t> T& _br_max_player_count() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& _br_special_setting() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& _pp_mode() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uint32_t> T& _spvp_max_observer_count() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint32_t> T& _pve_no_matchmaking() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uint32_t> T& _service_module() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _room_name() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uint32_t> T& _spvp_playlist_id() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _spvp_selected_mapid() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uint32_t> T& _pve_level_id() {
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
	template <typename T = bool> T& _need_open_mic() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x6C);
	}

	template <typename T = uint64_t> T get_change_player_id() {
		return ((T (*)(CSGroupRoomChangeSettingNtf*))(Il2CppBase() + 0x51DD9B4))(this);
	}
	template <typename T = void> T set_change_player_id(uint64_t value) {
		return ((T (*)(CSGroupRoomChangeSettingNtf*, uint64_t))(Il2CppBase() + 0x51DD9BC))(this, value);
	}
	template <typename T = uint32_t> T get_map_id() {
		return ((T (*)(CSGroupRoomChangeSettingNtf*))(Il2CppBase() + 0x51DD9CC))(this);
	}
	template <typename T = void> T set_map_id(uint32_t value) {
		return ((T (*)(CSGroupRoomChangeSettingNtf*, uint32_t))(Il2CppBase() + 0x51DD9D4))(this, value);
	}
	template <typename T = uint32_t> T get_mode_id() {
		return ((T (*)(CSGroupRoomChangeSettingNtf*))(Il2CppBase() + 0x51DD9DC))(this);
	}
	template <typename T = void> T set_mode_id(uint32_t value) {
		return ((T (*)(CSGroupRoomChangeSettingNtf*, uint32_t))(Il2CppBase() + 0x51DD9E4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_password() {
		return ((T (*)(CSGroupRoomChangeSettingNtf*))(Il2CppBase() + 0x51DD9EC))(this);
	}
	template <typename T = void> T set_password(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSGroupRoomChangeSettingNtf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51DD9F4))(this, value);
	}
	template <typename T = uint32_t> T get_team_type() {
		return ((T (*)(CSGroupRoomChangeSettingNtf*))(Il2CppBase() + 0x51DD9FC))(this);
	}
	template <typename T = void> T set_team_type(uint32_t value) {
		return ((T (*)(CSGroupRoomChangeSettingNtf*, uint32_t))(Il2CppBase() + 0x51DDA04))(this, value);
	}
	template <typename T = bool> T get_is_match_stranger() {
		return ((T (*)(CSGroupRoomChangeSettingNtf*))(Il2CppBase() + 0x51DDA0C))(this);
	}
	template <typename T = void> T set_is_match_stranger(bool value) {
		return ((T (*)(CSGroupRoomChangeSettingNtf*, bool))(Il2CppBase() + 0x51DDA14))(this, value);
	}
	template <typename T = uint32_t> T get_score_limit() {
		return ((T (*)(CSGroupRoomChangeSettingNtf*))(Il2CppBase() + 0x51DDA1C))(this);
	}
	template <typename T = void> T set_score_limit(uint32_t value) {
		return ((T (*)(CSGroupRoomChangeSettingNtf*, uint32_t))(Il2CppBase() + 0x51DDA24))(this, value);
	}
	template <typename T = uint32_t> T get_time_limit() {
		return ((T (*)(CSGroupRoomChangeSettingNtf*))(Il2CppBase() + 0x51DDA2C))(this);
	}
	template <typename T = void> T set_time_limit(uint32_t value) {
		return ((T (*)(CSGroupRoomChangeSettingNtf*, uint32_t))(Il2CppBase() + 0x51DDA34))(this, value);
	}
	template <typename T = bool> T get_enable_spectating() {
		return ((T (*)(CSGroupRoomChangeSettingNtf*))(Il2CppBase() + 0x51DDA3C))(this);
	}
	template <typename T = void> T set_enable_spectating(bool value) {
		return ((T (*)(CSGroupRoomChangeSettingNtf*, bool))(Il2CppBase() + 0x51DDA44))(this, value);
	}
	template <typename T = bool> T get_enable_other_invite() {
		return ((T (*)(CSGroupRoomChangeSettingNtf*))(Il2CppBase() + 0x51DDA4C))(this);
	}
	template <typename T = void> T set_enable_other_invite(bool value) {
		return ((T (*)(CSGroupRoomChangeSettingNtf*, bool))(Il2CppBase() + 0x51DDA54))(this, value);
	}
	template <typename T = uint32_t> T get_br_ai_count() {
		return ((T (*)(CSGroupRoomChangeSettingNtf*))(Il2CppBase() + 0x51DDA5C))(this);
	}
	template <typename T = void> T set_br_ai_count(uint32_t value) {
		return ((T (*)(CSGroupRoomChangeSettingNtf*, uint32_t))(Il2CppBase() + 0x51DDA64))(this, value);
	}
	template <typename T = uint32_t> T get_br_max_player_count() {
		return ((T (*)(CSGroupRoomChangeSettingNtf*))(Il2CppBase() + 0x51DDA6C))(this);
	}
	template <typename T = void> T set_br_max_player_count(uint32_t value) {
		return ((T (*)(CSGroupRoomChangeSettingNtf*, uint32_t))(Il2CppBase() + 0x51DDA74))(this, value);
	}
	template <typename T = uintptr_t> T get_br_special_setting() {
		return ((T (*)(CSGroupRoomChangeSettingNtf*))(Il2CppBase() + 0x51DDA7C))(this);
	}
	template <typename T = void> T set_br_special_setting(uintptr_t value) {
		return ((T (*)(CSGroupRoomChangeSettingNtf*, uintptr_t))(Il2CppBase() + 0x51DDA84))(this, value);
	}
	template <typename T = uint32_t> T get_pp_mode() {
		return ((T (*)(CSGroupRoomChangeSettingNtf*))(Il2CppBase() + 0x51DDA8C))(this);
	}
	template <typename T = void> T set_pp_mode(uint32_t value) {
		return ((T (*)(CSGroupRoomChangeSettingNtf*, uint32_t))(Il2CppBase() + 0x51DDA94))(this, value);
	}
	template <typename T = uint32_t> T get_spvp_max_observer_count() {
		return ((T (*)(CSGroupRoomChangeSettingNtf*))(Il2CppBase() + 0x51DDA9C))(this);
	}
	template <typename T = void> T set_spvp_max_observer_count(uint32_t value) {
		return ((T (*)(CSGroupRoomChangeSettingNtf*, uint32_t))(Il2CppBase() + 0x51DDAA4))(this, value);
	}
	template <typename T = uint32_t> T get_pve_no_matchmaking() {
		return ((T (*)(CSGroupRoomChangeSettingNtf*))(Il2CppBase() + 0x51DDAAC))(this);
	}
	template <typename T = void> T set_pve_no_matchmaking(uint32_t value) {
		return ((T (*)(CSGroupRoomChangeSettingNtf*, uint32_t))(Il2CppBase() + 0x51DDAB4))(this, value);
	}
	template <typename T = uint32_t> T get_service_module() {
		return ((T (*)(CSGroupRoomChangeSettingNtf*))(Il2CppBase() + 0x51DDABC))(this);
	}
	template <typename T = void> T set_service_module(uint32_t value) {
		return ((T (*)(CSGroupRoomChangeSettingNtf*, uint32_t))(Il2CppBase() + 0x51DDAC4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_room_name() {
		return ((T (*)(CSGroupRoomChangeSettingNtf*))(Il2CppBase() + 0x51DDACC))(this);
	}
	template <typename T = void> T set_room_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSGroupRoomChangeSettingNtf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51DDAD4))(this, value);
	}
	template <typename T = uint32_t> T get_spvp_playlist_id() {
		return ((T (*)(CSGroupRoomChangeSettingNtf*))(Il2CppBase() + 0x51DDADC))(this);
	}
	template <typename T = void> T set_spvp_playlist_id(uint32_t value) {
		return ((T (*)(CSGroupRoomChangeSettingNtf*, uint32_t))(Il2CppBase() + 0x51DDAE4))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_spvp_selected_mapid() {
		return ((T (*)(CSGroupRoomChangeSettingNtf*))(Il2CppBase() + 0x51DDAEC))(this);
	}
	template <typename T = uint32_t> T get_pve_level_id() {
		return ((T (*)(CSGroupRoomChangeSettingNtf*))(Il2CppBase() + 0x51DDAF4))(this);
	}
	template <typename T = void> T set_pve_level_id(uint32_t value) {
		return ((T (*)(CSGroupRoomChangeSettingNtf*, uint32_t))(Il2CppBase() + 0x51DDAFC))(this, value);
	}
	template <typename T = uint32_t> T get_br_playlist_id() {
		return ((T (*)(CSGroupRoomChangeSettingNtf*))(Il2CppBase() + 0x51DDB04))(this);
	}
	template <typename T = void> T set_br_playlist_id(uint32_t value) {
		return ((T (*)(CSGroupRoomChangeSettingNtf*, uint32_t))(Il2CppBase() + 0x51DDB0C))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_spvp_selected_playlist_id() {
		return ((T (*)(CSGroupRoomChangeSettingNtf*))(Il2CppBase() + 0x51DDB14))(this);
	}
	template <typename T = uint32_t> T get_ticket_flag() {
		return ((T (*)(CSGroupRoomChangeSettingNtf*))(Il2CppBase() + 0x51DDB1C))(this);
	}
	template <typename T = void> T set_ticket_flag(uint32_t value) {
		return ((T (*)(CSGroupRoomChangeSettingNtf*, uint32_t))(Il2CppBase() + 0x51DDB24))(this, value);
	}
	template <typename T = bool> T get_need_open_mic() {
		return ((T (*)(CSGroupRoomChangeSettingNtf*))(Il2CppBase() + 0x51DDB2C))(this);
	}
	template <typename T = void> T set_need_open_mic(bool value) {
		return ((T (*)(CSGroupRoomChangeSettingNtf*, bool))(Il2CppBase() + 0x51DDB34))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGroupRoomChangeSettingNtf*, bool))(Il2CppBase() + 0x51DDB3C))(this, createIfMissing);
	}

};

}
