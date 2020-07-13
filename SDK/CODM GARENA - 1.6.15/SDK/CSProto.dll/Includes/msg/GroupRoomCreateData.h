#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GroupRoomCreateData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GroupRoomCreateData"));
	}

	template <typename T = int32_t> T& _mode_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _map_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _room_type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _fire_mode() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _team_type() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& _is_simulator() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _name() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _password() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& _br_max_player_count() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& _enable_other_invite() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint32_t> T& _pp_mode() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint32_t> T& _spvp_max_observer_count() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& _is_match_stranger() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& _spvp_playlist_id() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _spvp_selected_mapid() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& _is_gamepad() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uint32_t> T& _pve_level_id() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint32_t> T& _br_playlist_id() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _spvp_selected_playlist_id() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uint32_t> T& _source() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uint32_t> T& _gsp_zone_id() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uint32_t> T& _ticket_flag() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uint32_t> T& _min_enter_level() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& _need_open_mic() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uint32_t> T& _ticket_type() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uint64_t> T& _ticket_guild_id() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = int32_t> T get_mode_id() {
		return ((T (*)(GroupRoomCreateData*))(Il2CppBase() + 0x50CE508))(this);
	}
	template <typename T = void> T set_mode_id(int32_t value) {
		return ((T (*)(GroupRoomCreateData*, int32_t))(Il2CppBase() + 0x50CE510))(this, value);
	}
	template <typename T = int32_t> T get_map_id() {
		return ((T (*)(GroupRoomCreateData*))(Il2CppBase() + 0x50CE518))(this);
	}
	template <typename T = void> T set_map_id(int32_t value) {
		return ((T (*)(GroupRoomCreateData*, int32_t))(Il2CppBase() + 0x50CE520))(this, value);
	}
	template <typename T = int32_t> T get_room_type() {
		return ((T (*)(GroupRoomCreateData*))(Il2CppBase() + 0x50CE528))(this);
	}
	template <typename T = void> T set_room_type(int32_t value) {
		return ((T (*)(GroupRoomCreateData*, int32_t))(Il2CppBase() + 0x50CE530))(this, value);
	}
	template <typename T = uint32_t> T get_fire_mode() {
		return ((T (*)(GroupRoomCreateData*))(Il2CppBase() + 0x50CE538))(this);
	}
	template <typename T = void> T set_fire_mode(uint32_t value) {
		return ((T (*)(GroupRoomCreateData*, uint32_t))(Il2CppBase() + 0x50CE540))(this, value);
	}
	template <typename T = int32_t> T get_team_type() {
		return ((T (*)(GroupRoomCreateData*))(Il2CppBase() + 0x50CE548))(this);
	}
	template <typename T = void> T set_team_type(int32_t value) {
		return ((T (*)(GroupRoomCreateData*, int32_t))(Il2CppBase() + 0x50CE550))(this, value);
	}
	template <typename T = bool> T get_is_simulator() {
		return ((T (*)(GroupRoomCreateData*))(Il2CppBase() + 0x50CE558))(this);
	}
	template <typename T = void> T set_is_simulator(bool value) {
		return ((T (*)(GroupRoomCreateData*, bool))(Il2CppBase() + 0x50CE560))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_name() {
		return ((T (*)(GroupRoomCreateData*))(Il2CppBase() + 0x50CE568))(this);
	}
	template <typename T = void> T set_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(GroupRoomCreateData*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x50CE570))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_password() {
		return ((T (*)(GroupRoomCreateData*))(Il2CppBase() + 0x50CE578))(this);
	}
	template <typename T = void> T set_password(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(GroupRoomCreateData*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x50CE580))(this, value);
	}
	template <typename T = uint32_t> T get_br_max_player_count() {
		return ((T (*)(GroupRoomCreateData*))(Il2CppBase() + 0x50CE588))(this);
	}
	template <typename T = void> T set_br_max_player_count(uint32_t value) {
		return ((T (*)(GroupRoomCreateData*, uint32_t))(Il2CppBase() + 0x50CE590))(this, value);
	}
	template <typename T = bool> T get_enable_other_invite() {
		return ((T (*)(GroupRoomCreateData*))(Il2CppBase() + 0x50CE598))(this);
	}
	template <typename T = void> T set_enable_other_invite(bool value) {
		return ((T (*)(GroupRoomCreateData*, bool))(Il2CppBase() + 0x50CE5A0))(this, value);
	}
	template <typename T = uint32_t> T get_pp_mode() {
		return ((T (*)(GroupRoomCreateData*))(Il2CppBase() + 0x50CE5A8))(this);
	}
	template <typename T = void> T set_pp_mode(uint32_t value) {
		return ((T (*)(GroupRoomCreateData*, uint32_t))(Il2CppBase() + 0x50CE5B0))(this, value);
	}
	template <typename T = uint32_t> T get_spvp_max_observer_count() {
		return ((T (*)(GroupRoomCreateData*))(Il2CppBase() + 0x50CE5B8))(this);
	}
	template <typename T = void> T set_spvp_max_observer_count(uint32_t value) {
		return ((T (*)(GroupRoomCreateData*, uint32_t))(Il2CppBase() + 0x50CE5C0))(this, value);
	}
	template <typename T = bool> T get_is_match_stranger() {
		return ((T (*)(GroupRoomCreateData*))(Il2CppBase() + 0x50CE5C8))(this);
	}
	template <typename T = void> T set_is_match_stranger(bool value) {
		return ((T (*)(GroupRoomCreateData*, bool))(Il2CppBase() + 0x50CE5D0))(this, value);
	}
	template <typename T = uint32_t> T get_spvp_playlist_id() {
		return ((T (*)(GroupRoomCreateData*))(Il2CppBase() + 0x50CE5D8))(this);
	}
	template <typename T = void> T set_spvp_playlist_id(uint32_t value) {
		return ((T (*)(GroupRoomCreateData*, uint32_t))(Il2CppBase() + 0x50CE5E0))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_spvp_selected_mapid() {
		return ((T (*)(GroupRoomCreateData*))(Il2CppBase() + 0x50CE5E8))(this);
	}
	template <typename T = bool> T get_is_gamepad() {
		return ((T (*)(GroupRoomCreateData*))(Il2CppBase() + 0x50CE5F0))(this);
	}
	template <typename T = void> T set_is_gamepad(bool value) {
		return ((T (*)(GroupRoomCreateData*, bool))(Il2CppBase() + 0x50CE5F8))(this, value);
	}
	template <typename T = uint32_t> T get_pve_level_id() {
		return ((T (*)(GroupRoomCreateData*))(Il2CppBase() + 0x50CE600))(this);
	}
	template <typename T = void> T set_pve_level_id(uint32_t value) {
		return ((T (*)(GroupRoomCreateData*, uint32_t))(Il2CppBase() + 0x50CE608))(this, value);
	}
	template <typename T = uint32_t> T get_br_playlist_id() {
		return ((T (*)(GroupRoomCreateData*))(Il2CppBase() + 0x50CE610))(this);
	}
	template <typename T = void> T set_br_playlist_id(uint32_t value) {
		return ((T (*)(GroupRoomCreateData*, uint32_t))(Il2CppBase() + 0x50CE618))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_spvp_selected_playlist_id() {
		return ((T (*)(GroupRoomCreateData*))(Il2CppBase() + 0x50CE620))(this);
	}
	template <typename T = uint32_t> T get_source() {
		return ((T (*)(GroupRoomCreateData*))(Il2CppBase() + 0x50CE628))(this);
	}
	template <typename T = void> T set_source(uint32_t value) {
		return ((T (*)(GroupRoomCreateData*, uint32_t))(Il2CppBase() + 0x50CE630))(this, value);
	}
	template <typename T = uint32_t> T get_gsp_zone_id() {
		return ((T (*)(GroupRoomCreateData*))(Il2CppBase() + 0x50CE638))(this);
	}
	template <typename T = void> T set_gsp_zone_id(uint32_t value) {
		return ((T (*)(GroupRoomCreateData*, uint32_t))(Il2CppBase() + 0x50CE640))(this, value);
	}
	template <typename T = uint32_t> T get_ticket_flag() {
		return ((T (*)(GroupRoomCreateData*))(Il2CppBase() + 0x50CE648))(this);
	}
	template <typename T = void> T set_ticket_flag(uint32_t value) {
		return ((T (*)(GroupRoomCreateData*, uint32_t))(Il2CppBase() + 0x50CE650))(this, value);
	}
	template <typename T = uint32_t> T get_min_enter_level() {
		return ((T (*)(GroupRoomCreateData*))(Il2CppBase() + 0x50CE658))(this);
	}
	template <typename T = void> T set_min_enter_level(uint32_t value) {
		return ((T (*)(GroupRoomCreateData*, uint32_t))(Il2CppBase() + 0x50CE660))(this, value);
	}
	template <typename T = bool> T get_need_open_mic() {
		return ((T (*)(GroupRoomCreateData*))(Il2CppBase() + 0x50CE668))(this);
	}
	template <typename T = void> T set_need_open_mic(bool value) {
		return ((T (*)(GroupRoomCreateData*, bool))(Il2CppBase() + 0x50CE670))(this, value);
	}
	template <typename T = uint32_t> T get_ticket_type() {
		return ((T (*)(GroupRoomCreateData*))(Il2CppBase() + 0x50CE678))(this);
	}
	template <typename T = void> T set_ticket_type(uint32_t value) {
		return ((T (*)(GroupRoomCreateData*, uint32_t))(Il2CppBase() + 0x50CE680))(this, value);
	}
	template <typename T = uint64_t> T get_ticket_guild_id() {
		return ((T (*)(GroupRoomCreateData*))(Il2CppBase() + 0x50CE688))(this);
	}
	template <typename T = void> T set_ticket_guild_id(uint64_t value) {
		return ((T (*)(GroupRoomCreateData*, uint64_t))(Il2CppBase() + 0x50CE690))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GroupRoomCreateData*, bool))(Il2CppBase() + 0x50CE6A0))(this, createIfMissing);
	}

};

}
