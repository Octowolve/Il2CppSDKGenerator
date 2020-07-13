#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GroupRoomPlayerInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GroupRoomPlayerInfo"));
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
	template <typename T = Il2CppArray<uintptr_t>*> T& _nick_name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _pic_info() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _exp() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _exp_lvl() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& _is_leader() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& _lobby_bus_id() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& _match_mmr() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _ping_info() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uint64_t> T& _clan_id() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& _clan_level() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _clan_name() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& _squad_idx() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& _state() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& _ladder_score() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& _is_gangup() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uint32_t> T& _role_id() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uint32_t> T& _ladder_level() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& _br_match_mmr() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& _br_ladder_score() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& _br_hidden_score() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uint32_t> T& _spvp_times_game() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _props() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& _loadout() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& _brloadout() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uint32_t> T& _br_ladder_level() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _open_id() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& _is_spvp_grading() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = bool> T& _is_in_promotion() {
		return *(T*)((uintptr_t)this + 0x85);
	}
	template <typename T = int32_t> T& _peak_lvl() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& _gvoice_id() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& _spi() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& _is_simulator() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _loaded_mapid() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& _loadmap_state() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& _pve_loadout() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& _is_play_with_friend() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = bool> T& _is_gamepad() {
		return *(T*)((uintptr_t)this + 0xA5);
	}
	template <typename T = int32_t> T& _gender() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uint32_t> T& _ping_info_update_time() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xB0);
	}

	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(GroupRoomPlayerInfo*))(Il2CppBase() + 0x50CE814))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(GroupRoomPlayerInfo*, uint64_t))(Il2CppBase() + 0x50CE81C))(this, value);
	}
	template <typename T = int32_t> T get_camp() {
		return ((T (*)(GroupRoomPlayerInfo*))(Il2CppBase() + 0x50CE82C))(this);
	}
	template <typename T = void> T set_camp(int32_t value) {
		return ((T (*)(GroupRoomPlayerInfo*, int32_t))(Il2CppBase() + 0x50CE834))(this, value);
	}
	template <typename T = int32_t> T get_seat_index() {
		return ((T (*)(GroupRoomPlayerInfo*))(Il2CppBase() + 0x50CE83C))(this);
	}
	template <typename T = void> T set_seat_index(int32_t value) {
		return ((T (*)(GroupRoomPlayerInfo*, int32_t))(Il2CppBase() + 0x50CE844))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_nick_name() {
		return ((T (*)(GroupRoomPlayerInfo*))(Il2CppBase() + 0x50CE84C))(this);
	}
	template <typename T = void> T set_nick_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(GroupRoomPlayerInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x50CE854))(this, value);
	}
	template <typename T = uintptr_t> T get_pic_info() {
		return ((T (*)(GroupRoomPlayerInfo*))(Il2CppBase() + 0x50CE85C))(this);
	}
	template <typename T = void> T set_pic_info(uintptr_t value) {
		return ((T (*)(GroupRoomPlayerInfo*, uintptr_t))(Il2CppBase() + 0x50CE864))(this, value);
	}
	template <typename T = int32_t> T get_exp() {
		return ((T (*)(GroupRoomPlayerInfo*))(Il2CppBase() + 0x50CE86C))(this);
	}
	template <typename T = void> T set_exp(int32_t value) {
		return ((T (*)(GroupRoomPlayerInfo*, int32_t))(Il2CppBase() + 0x50CE874))(this, value);
	}
	template <typename T = int32_t> T get_exp_lvl() {
		return ((T (*)(GroupRoomPlayerInfo*))(Il2CppBase() + 0x50CE87C))(this);
	}
	template <typename T = void> T set_exp_lvl(int32_t value) {
		return ((T (*)(GroupRoomPlayerInfo*, int32_t))(Il2CppBase() + 0x50CE884))(this, value);
	}
	template <typename T = bool> T get_is_leader() {
		return ((T (*)(GroupRoomPlayerInfo*))(Il2CppBase() + 0x50CE88C))(this);
	}
	template <typename T = void> T set_is_leader(bool value) {
		return ((T (*)(GroupRoomPlayerInfo*, bool))(Il2CppBase() + 0x50CE894))(this, value);
	}
	template <typename T = uint32_t> T get_lobby_bus_id() {
		return ((T (*)(GroupRoomPlayerInfo*))(Il2CppBase() + 0x50CE89C))(this);
	}
	template <typename T = void> T set_lobby_bus_id(uint32_t value) {
		return ((T (*)(GroupRoomPlayerInfo*, uint32_t))(Il2CppBase() + 0x50CE8A4))(this, value);
	}
	template <typename T = int32_t> T get_match_mmr() {
		return ((T (*)(GroupRoomPlayerInfo*))(Il2CppBase() + 0x50CE8AC))(this);
	}
	template <typename T = void> T set_match_mmr(int32_t value) {
		return ((T (*)(GroupRoomPlayerInfo*, int32_t))(Il2CppBase() + 0x50CE8B4))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_ping_info() {
		return ((T (*)(GroupRoomPlayerInfo*))(Il2CppBase() + 0x50CE8BC))(this);
	}
	template <typename T = uint64_t> T get_clan_id() {
		return ((T (*)(GroupRoomPlayerInfo*))(Il2CppBase() + 0x50CE8C4))(this);
	}
	template <typename T = void> T set_clan_id(uint64_t value) {
		return ((T (*)(GroupRoomPlayerInfo*, uint64_t))(Il2CppBase() + 0x50CE8CC))(this, value);
	}
	template <typename T = uint32_t> T get_clan_level() {
		return ((T (*)(GroupRoomPlayerInfo*))(Il2CppBase() + 0x50CE8DC))(this);
	}
	template <typename T = void> T set_clan_level(uint32_t value) {
		return ((T (*)(GroupRoomPlayerInfo*, uint32_t))(Il2CppBase() + 0x50CE8E4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_clan_name() {
		return ((T (*)(GroupRoomPlayerInfo*))(Il2CppBase() + 0x50CE8EC))(this);
	}
	template <typename T = void> T set_clan_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(GroupRoomPlayerInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x50CE8F4))(this, value);
	}
	template <typename T = int32_t> T get_squad_idx() {
		return ((T (*)(GroupRoomPlayerInfo*))(Il2CppBase() + 0x50CE8FC))(this);
	}
	template <typename T = void> T set_squad_idx(int32_t value) {
		return ((T (*)(GroupRoomPlayerInfo*, int32_t))(Il2CppBase() + 0x50CE904))(this, value);
	}
	template <typename T = int32_t> T get_state() {
		return ((T (*)(GroupRoomPlayerInfo*))(Il2CppBase() + 0x50CE90C))(this);
	}
	template <typename T = void> T set_state(int32_t value) {
		return ((T (*)(GroupRoomPlayerInfo*, int32_t))(Il2CppBase() + 0x50CE914))(this, value);
	}
	template <typename T = int32_t> T get_ladder_score() {
		return ((T (*)(GroupRoomPlayerInfo*))(Il2CppBase() + 0x50CE91C))(this);
	}
	template <typename T = void> T set_ladder_score(int32_t value) {
		return ((T (*)(GroupRoomPlayerInfo*, int32_t))(Il2CppBase() + 0x50CE924))(this, value);
	}
	template <typename T = bool> T get_is_gangup() {
		return ((T (*)(GroupRoomPlayerInfo*))(Il2CppBase() + 0x50CE92C))(this);
	}
	template <typename T = void> T set_is_gangup(bool value) {
		return ((T (*)(GroupRoomPlayerInfo*, bool))(Il2CppBase() + 0x50CE934))(this, value);
	}
	template <typename T = uint32_t> T get_role_id() {
		return ((T (*)(GroupRoomPlayerInfo*))(Il2CppBase() + 0x50CE93C))(this);
	}
	template <typename T = void> T set_role_id(uint32_t value) {
		return ((T (*)(GroupRoomPlayerInfo*, uint32_t))(Il2CppBase() + 0x50CE944))(this, value);
	}
	template <typename T = uint32_t> T get_ladder_level() {
		return ((T (*)(GroupRoomPlayerInfo*))(Il2CppBase() + 0x50CE94C))(this);
	}
	template <typename T = void> T set_ladder_level(uint32_t value) {
		return ((T (*)(GroupRoomPlayerInfo*, uint32_t))(Il2CppBase() + 0x50CE954))(this, value);
	}
	template <typename T = int32_t> T get_br_match_mmr() {
		return ((T (*)(GroupRoomPlayerInfo*))(Il2CppBase() + 0x50CE95C))(this);
	}
	template <typename T = void> T set_br_match_mmr(int32_t value) {
		return ((T (*)(GroupRoomPlayerInfo*, int32_t))(Il2CppBase() + 0x50CE964))(this, value);
	}
	template <typename T = int32_t> T get_br_ladder_score() {
		return ((T (*)(GroupRoomPlayerInfo*))(Il2CppBase() + 0x50CE96C))(this);
	}
	template <typename T = void> T set_br_ladder_score(int32_t value) {
		return ((T (*)(GroupRoomPlayerInfo*, int32_t))(Il2CppBase() + 0x50CE974))(this, value);
	}
	template <typename T = int32_t> T get_br_hidden_score() {
		return ((T (*)(GroupRoomPlayerInfo*))(Il2CppBase() + 0x50CE97C))(this);
	}
	template <typename T = void> T set_br_hidden_score(int32_t value) {
		return ((T (*)(GroupRoomPlayerInfo*, int32_t))(Il2CppBase() + 0x50CE984))(this, value);
	}
	template <typename T = uint32_t> T get_spvp_times_game() {
		return ((T (*)(GroupRoomPlayerInfo*))(Il2CppBase() + 0x50CE98C))(this);
	}
	template <typename T = void> T set_spvp_times_game(uint32_t value) {
		return ((T (*)(GroupRoomPlayerInfo*, uint32_t))(Il2CppBase() + 0x50CE994))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_props() {
		return ((T (*)(GroupRoomPlayerInfo*))(Il2CppBase() + 0x50CE99C))(this);
	}
	template <typename T = uintptr_t> T get_loadout() {
		return ((T (*)(GroupRoomPlayerInfo*))(Il2CppBase() + 0x50CE9A4))(this);
	}
	template <typename T = void> T set_loadout(uintptr_t value) {
		return ((T (*)(GroupRoomPlayerInfo*, uintptr_t))(Il2CppBase() + 0x50CE9AC))(this, value);
	}
	template <typename T = uintptr_t> T get_brloadout() {
		return ((T (*)(GroupRoomPlayerInfo*))(Il2CppBase() + 0x50CE9B4))(this);
	}
	template <typename T = void> T set_brloadout(uintptr_t value) {
		return ((T (*)(GroupRoomPlayerInfo*, uintptr_t))(Il2CppBase() + 0x50CE9BC))(this, value);
	}
	template <typename T = uint32_t> T get_br_ladder_level() {
		return ((T (*)(GroupRoomPlayerInfo*))(Il2CppBase() + 0x50CE9C4))(this);
	}
	template <typename T = void> T set_br_ladder_level(uint32_t value) {
		return ((T (*)(GroupRoomPlayerInfo*, uint32_t))(Il2CppBase() + 0x50CE9CC))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_open_id() {
		return ((T (*)(GroupRoomPlayerInfo*))(Il2CppBase() + 0x50CE9D4))(this);
	}
	template <typename T = void> T set_open_id(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(GroupRoomPlayerInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x50CE9DC))(this, value);
	}
	template <typename T = bool> T get_is_spvp_grading() {
		return ((T (*)(GroupRoomPlayerInfo*))(Il2CppBase() + 0x50CE9E4))(this);
	}
	template <typename T = void> T set_is_spvp_grading(bool value) {
		return ((T (*)(GroupRoomPlayerInfo*, bool))(Il2CppBase() + 0x50CE9EC))(this, value);
	}
	template <typename T = bool> T get_is_in_promotion() {
		return ((T (*)(GroupRoomPlayerInfo*))(Il2CppBase() + 0x50CE9F4))(this);
	}
	template <typename T = void> T set_is_in_promotion(bool value) {
		return ((T (*)(GroupRoomPlayerInfo*, bool))(Il2CppBase() + 0x50CE9FC))(this, value);
	}
	template <typename T = int32_t> T get_peak_lvl() {
		return ((T (*)(GroupRoomPlayerInfo*))(Il2CppBase() + 0x50CEA04))(this);
	}
	template <typename T = void> T set_peak_lvl(int32_t value) {
		return ((T (*)(GroupRoomPlayerInfo*, int32_t))(Il2CppBase() + 0x50CEA0C))(this, value);
	}
	template <typename T = int32_t> T get_gvoice_id() {
		return ((T (*)(GroupRoomPlayerInfo*))(Il2CppBase() + 0x50CEA14))(this);
	}
	template <typename T = void> T set_gvoice_id(int32_t value) {
		return ((T (*)(GroupRoomPlayerInfo*, int32_t))(Il2CppBase() + 0x50CEA1C))(this, value);
	}
	template <typename T = int32_t> T get_spi() {
		return ((T (*)(GroupRoomPlayerInfo*))(Il2CppBase() + 0x50CEA24))(this);
	}
	template <typename T = void> T set_spi(int32_t value) {
		return ((T (*)(GroupRoomPlayerInfo*, int32_t))(Il2CppBase() + 0x50CEA2C))(this, value);
	}
	template <typename T = bool> T get_is_simulator() {
		return ((T (*)(GroupRoomPlayerInfo*))(Il2CppBase() + 0x50CEA34))(this);
	}
	template <typename T = void> T set_is_simulator(bool value) {
		return ((T (*)(GroupRoomPlayerInfo*, bool))(Il2CppBase() + 0x50CEA3C))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_loaded_mapid() {
		return ((T (*)(GroupRoomPlayerInfo*))(Il2CppBase() + 0x50CEA44))(this);
	}
	template <typename T = int32_t> T get_loadmap_state() {
		return ((T (*)(GroupRoomPlayerInfo*))(Il2CppBase() + 0x50CEA4C))(this);
	}
	template <typename T = void> T set_loadmap_state(int32_t value) {
		return ((T (*)(GroupRoomPlayerInfo*, int32_t))(Il2CppBase() + 0x50CEA54))(this, value);
	}
	template <typename T = uintptr_t> T get_pve_loadout() {
		return ((T (*)(GroupRoomPlayerInfo*))(Il2CppBase() + 0x50CEA5C))(this);
	}
	template <typename T = void> T set_pve_loadout(uintptr_t value) {
		return ((T (*)(GroupRoomPlayerInfo*, uintptr_t))(Il2CppBase() + 0x50CEA64))(this, value);
	}
	template <typename T = bool> T get_is_play_with_friend() {
		return ((T (*)(GroupRoomPlayerInfo*))(Il2CppBase() + 0x50CEA6C))(this);
	}
	template <typename T = void> T set_is_play_with_friend(bool value) {
		return ((T (*)(GroupRoomPlayerInfo*, bool))(Il2CppBase() + 0x50CEA74))(this, value);
	}
	template <typename T = bool> T get_is_gamepad() {
		return ((T (*)(GroupRoomPlayerInfo*))(Il2CppBase() + 0x50CEA7C))(this);
	}
	template <typename T = void> T set_is_gamepad(bool value) {
		return ((T (*)(GroupRoomPlayerInfo*, bool))(Il2CppBase() + 0x50CEA84))(this, value);
	}
	template <typename T = int32_t> T get_gender() {
		return ((T (*)(GroupRoomPlayerInfo*))(Il2CppBase() + 0x50CEA8C))(this);
	}
	template <typename T = void> T set_gender(int32_t value) {
		return ((T (*)(GroupRoomPlayerInfo*, int32_t))(Il2CppBase() + 0x50CEA94))(this, value);
	}
	template <typename T = uint32_t> T get_ping_info_update_time() {
		return ((T (*)(GroupRoomPlayerInfo*))(Il2CppBase() + 0x50CEA9C))(this);
	}
	template <typename T = void> T set_ping_info_update_time(uint32_t value) {
		return ((T (*)(GroupRoomPlayerInfo*, uint32_t))(Il2CppBase() + 0x50CEAA4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GroupRoomPlayerInfo*, bool))(Il2CppBase() + 0x50CEAAC))(this, createIfMissing);
	}

};

}
