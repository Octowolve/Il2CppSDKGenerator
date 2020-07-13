#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PlayerSimpleInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PlayerSimpleInfo"));
	}

	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _nick_name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _pic_info() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _exp() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _exp_lvl() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _vip_lvl() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _monthcard_level() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& _ex_vip_flag() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _fight_point() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint64_t> T& _role_id() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& _seat_index() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& _ladder_score() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& _hidden_score() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& _kd_ratio() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& _player_punish_info() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint32_t> T& _drop_timestamp() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& _today_drop_times() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& _has_hero_weapon() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& _login_source() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _clan_name() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uint32_t> T& _suit_id() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uint32_t> T& _client_ip() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uint64_t> T& _ladder_medal() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uint32_t> T& _data_flag() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& _camp() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& _plat_id() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& _account_type() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& _zone_id() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppString*> T& _open_id() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uint32_t> T& _diamond() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _country() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _province() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _city() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _isp() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _telecom_oper() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _network() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& _match_mmr() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _ping_info() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uint64_t> T& _clan_id() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uint32_t> T& _clan_level() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& _dsc_group_id() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = int32_t> T& _spvp_times_game() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = int32_t> T& _peak_lvl() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = int32_t> T& _pract_mode() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uint32_t> T& _ladder_level() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = int32_t> T& _br_match_mmr() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = int32_t> T& _br_ladder_score() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = int32_t> T& _br_hidden_score() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = Il2CppString*> T& _king_core_user_id() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = Il2CppString*> T& _king_install_id() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppString*> T& _king_session_id() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _props() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uint64_t> T& _dsa_ver() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uint32_t> T& _br_ladder_level() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = int32_t> T& _spvp_match_fail() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = int32_t> T& _spvp_ladder_fail() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uint32_t> T& _pve_history_max_round() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uint32_t> T& _pve_daily_max_round() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = bool> T& _is_spvp_grading() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = bool> T& _is_in_promotion() {
		return *(T*)((uintptr_t)this + 0x10D);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _clan_icon() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _access_token() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uint64_t> T& _start_match_id() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uint64_t> T& _login_time() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uint64_t> T& _last_login_time() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uint64_t> T& _player_guid() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = int32_t> T& _br_real_hidden_score() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uint64_t> T& _client_version() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = int32_t> T& _real_match_mmr() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = int32_t> T& _gender() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = int32_t> T& _start_match_num_player() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uint32_t> T& _register_country_id() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = uint32_t> T& _login_country_id() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uint32_t> T& _br_tdm_times_game() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = uint32_t> T& _ping_info_update_time() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uint64_t> T& _last_logout_time() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x170);
	}

	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA91A4))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(PlayerSimpleInfo*, uint64_t))(Il2CppBase() + 0x4EA91AC))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_nick_name() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA91BC))(this);
	}
	template <typename T = void> T set_nick_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(PlayerSimpleInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA91C4))(this, value);
	}
	template <typename T = uintptr_t> T get_pic_info() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA91CC))(this);
	}
	template <typename T = void> T set_pic_info(uintptr_t value) {
		return ((T (*)(PlayerSimpleInfo*, uintptr_t))(Il2CppBase() + 0x4EA91D4))(this, value);
	}
	template <typename T = int32_t> T get_exp() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA91DC))(this);
	}
	template <typename T = void> T set_exp(int32_t value) {
		return ((T (*)(PlayerSimpleInfo*, int32_t))(Il2CppBase() + 0x4EA91E4))(this, value);
	}
	template <typename T = int32_t> T get_exp_lvl() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA91EC))(this);
	}
	template <typename T = void> T set_exp_lvl(int32_t value) {
		return ((T (*)(PlayerSimpleInfo*, int32_t))(Il2CppBase() + 0x4EA91F4))(this, value);
	}
	template <typename T = int32_t> T get_vip_lvl() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA91FC))(this);
	}
	template <typename T = void> T set_vip_lvl(int32_t value) {
		return ((T (*)(PlayerSimpleInfo*, int32_t))(Il2CppBase() + 0x4EA9204))(this, value);
	}
	template <typename T = int32_t> T get_monthcard_level() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA920C))(this);
	}
	template <typename T = void> T set_monthcard_level(int32_t value) {
		return ((T (*)(PlayerSimpleInfo*, int32_t))(Il2CppBase() + 0x4EA9214))(this, value);
	}
	template <typename T = uint32_t> T get_ex_vip_flag() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA921C))(this);
	}
	template <typename T = void> T set_ex_vip_flag(uint32_t value) {
		return ((T (*)(PlayerSimpleInfo*, uint32_t))(Il2CppBase() + 0x4EA9224))(this, value);
	}
	template <typename T = int32_t> T get_fight_point() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA922C))(this);
	}
	template <typename T = void> T set_fight_point(int32_t value) {
		return ((T (*)(PlayerSimpleInfo*, int32_t))(Il2CppBase() + 0x4EA9234))(this, value);
	}
	template <typename T = uint64_t> T get_role_id() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA923C))(this);
	}
	template <typename T = void> T set_role_id(uint64_t value) {
		return ((T (*)(PlayerSimpleInfo*, uint64_t))(Il2CppBase() + 0x4EA9244))(this, value);
	}
	template <typename T = int32_t> T get_seat_index() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA9254))(this);
	}
	template <typename T = void> T set_seat_index(int32_t value) {
		return ((T (*)(PlayerSimpleInfo*, int32_t))(Il2CppBase() + 0x4EA925C))(this, value);
	}
	template <typename T = int32_t> T get_ladder_score() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA9264))(this);
	}
	template <typename T = void> T set_ladder_score(int32_t value) {
		return ((T (*)(PlayerSimpleInfo*, int32_t))(Il2CppBase() + 0x4EA926C))(this, value);
	}
	template <typename T = int32_t> T get_hidden_score() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA9274))(this);
	}
	template <typename T = void> T set_hidden_score(int32_t value) {
		return ((T (*)(PlayerSimpleInfo*, int32_t))(Il2CppBase() + 0x4EA927C))(this, value);
	}
	template <typename T = int32_t> T get_kd_ratio() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA9284))(this);
	}
	template <typename T = void> T set_kd_ratio(int32_t value) {
		return ((T (*)(PlayerSimpleInfo*, int32_t))(Il2CppBase() + 0x4EA928C))(this, value);
	}
	template <typename T = uintptr_t> T get_player_punish_info() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA9294))(this);
	}
	template <typename T = void> T set_player_punish_info(uintptr_t value) {
		return ((T (*)(PlayerSimpleInfo*, uintptr_t))(Il2CppBase() + 0x4EA929C))(this, value);
	}
	template <typename T = uint32_t> T get_drop_timestamp() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA92A4))(this);
	}
	template <typename T = void> T set_drop_timestamp(uint32_t value) {
		return ((T (*)(PlayerSimpleInfo*, uint32_t))(Il2CppBase() + 0x4EA92AC))(this, value);
	}
	template <typename T = int32_t> T get_today_drop_times() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA92B4))(this);
	}
	template <typename T = void> T set_today_drop_times(int32_t value) {
		return ((T (*)(PlayerSimpleInfo*, int32_t))(Il2CppBase() + 0x4EA92BC))(this, value);
	}
	template <typename T = int32_t> T get_has_hero_weapon() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA92C4))(this);
	}
	template <typename T = void> T set_has_hero_weapon(int32_t value) {
		return ((T (*)(PlayerSimpleInfo*, int32_t))(Il2CppBase() + 0x4EA92CC))(this, value);
	}
	template <typename T = int32_t> T get_login_source() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA92D4))(this);
	}
	template <typename T = void> T set_login_source(int32_t value) {
		return ((T (*)(PlayerSimpleInfo*, int32_t))(Il2CppBase() + 0x4EA92DC))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_clan_name() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA92E4))(this);
	}
	template <typename T = void> T set_clan_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(PlayerSimpleInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA92EC))(this, value);
	}
	template <typename T = uint32_t> T get_suit_id() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA92F4))(this);
	}
	template <typename T = void> T set_suit_id(uint32_t value) {
		return ((T (*)(PlayerSimpleInfo*, uint32_t))(Il2CppBase() + 0x4EA92FC))(this, value);
	}
	template <typename T = uint32_t> T get_client_ip() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA9304))(this);
	}
	template <typename T = void> T set_client_ip(uint32_t value) {
		return ((T (*)(PlayerSimpleInfo*, uint32_t))(Il2CppBase() + 0x4EA930C))(this, value);
	}
	template <typename T = uint64_t> T get_ladder_medal() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA9314))(this);
	}
	template <typename T = void> T set_ladder_medal(uint64_t value) {
		return ((T (*)(PlayerSimpleInfo*, uint64_t))(Il2CppBase() + 0x4EA931C))(this, value);
	}
	template <typename T = uint32_t> T get_data_flag() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA932C))(this);
	}
	template <typename T = void> T set_data_flag(uint32_t value) {
		return ((T (*)(PlayerSimpleInfo*, uint32_t))(Il2CppBase() + 0x4EA9334))(this, value);
	}
	template <typename T = int32_t> T get_camp() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA933C))(this);
	}
	template <typename T = void> T set_camp(int32_t value) {
		return ((T (*)(PlayerSimpleInfo*, int32_t))(Il2CppBase() + 0x4EA9344))(this, value);
	}
	template <typename T = int32_t> T get_plat_id() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA934C))(this);
	}
	template <typename T = void> T set_plat_id(int32_t value) {
		return ((T (*)(PlayerSimpleInfo*, int32_t))(Il2CppBase() + 0x4EA9354))(this, value);
	}
	template <typename T = int32_t> T get_account_type() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA935C))(this);
	}
	template <typename T = void> T set_account_type(int32_t value) {
		return ((T (*)(PlayerSimpleInfo*, int32_t))(Il2CppBase() + 0x4EA9364))(this, value);
	}
	template <typename T = int32_t> T get_zone_id() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA936C))(this);
	}
	template <typename T = void> T set_zone_id(int32_t value) {
		return ((T (*)(PlayerSimpleInfo*, int32_t))(Il2CppBase() + 0x4EA9374))(this, value);
	}
	template <typename T = Il2CppString*> T get_open_id() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA937C))(this);
	}
	template <typename T = void> T set_open_id(Il2CppString* value) {
		return ((T (*)(PlayerSimpleInfo*, Il2CppString*))(Il2CppBase() + 0x4EA9384))(this, value);
	}
	template <typename T = uint32_t> T get_diamond() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA938C))(this);
	}
	template <typename T = void> T set_diamond(uint32_t value) {
		return ((T (*)(PlayerSimpleInfo*, uint32_t))(Il2CppBase() + 0x4EA9394))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_country() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA939C))(this);
	}
	template <typename T = void> T set_country(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(PlayerSimpleInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA93A4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_province() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA93AC))(this);
	}
	template <typename T = void> T set_province(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(PlayerSimpleInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA93B4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_city() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA93BC))(this);
	}
	template <typename T = void> T set_city(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(PlayerSimpleInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA93C4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_isp() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA93CC))(this);
	}
	template <typename T = void> T set_isp(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(PlayerSimpleInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA93D4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_telecom_oper() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA93DC))(this);
	}
	template <typename T = void> T set_telecom_oper(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(PlayerSimpleInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA93E4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_network() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA93EC))(this);
	}
	template <typename T = void> T set_network(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(PlayerSimpleInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA93F4))(this, value);
	}
	template <typename T = int32_t> T get_match_mmr() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA93FC))(this);
	}
	template <typename T = void> T set_match_mmr(int32_t value) {
		return ((T (*)(PlayerSimpleInfo*, int32_t))(Il2CppBase() + 0x4EA9404))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_ping_info() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA940C))(this);
	}
	template <typename T = uint64_t> T get_clan_id() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA9414))(this);
	}
	template <typename T = void> T set_clan_id(uint64_t value) {
		return ((T (*)(PlayerSimpleInfo*, uint64_t))(Il2CppBase() + 0x4EA941C))(this, value);
	}
	template <typename T = uint32_t> T get_clan_level() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA942C))(this);
	}
	template <typename T = void> T set_clan_level(uint32_t value) {
		return ((T (*)(PlayerSimpleInfo*, uint32_t))(Il2CppBase() + 0x4EA9434))(this, value);
	}
	template <typename T = int32_t> T get_dsc_group_id() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA943C))(this);
	}
	template <typename T = void> T set_dsc_group_id(int32_t value) {
		return ((T (*)(PlayerSimpleInfo*, int32_t))(Il2CppBase() + 0x4EA9444))(this, value);
	}
	template <typename T = int32_t> T get_spvp_times_game() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA944C))(this);
	}
	template <typename T = void> T set_spvp_times_game(int32_t value) {
		return ((T (*)(PlayerSimpleInfo*, int32_t))(Il2CppBase() + 0x4EA9454))(this, value);
	}
	template <typename T = int32_t> T get_peak_lvl() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA945C))(this);
	}
	template <typename T = void> T set_peak_lvl(int32_t value) {
		return ((T (*)(PlayerSimpleInfo*, int32_t))(Il2CppBase() + 0x4EA9464))(this, value);
	}
	template <typename T = int32_t> T get_pract_mode() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA946C))(this);
	}
	template <typename T = void> T set_pract_mode(int32_t value) {
		return ((T (*)(PlayerSimpleInfo*, int32_t))(Il2CppBase() + 0x4EA9474))(this, value);
	}
	template <typename T = uint32_t> T get_ladder_level() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA947C))(this);
	}
	template <typename T = void> T set_ladder_level(uint32_t value) {
		return ((T (*)(PlayerSimpleInfo*, uint32_t))(Il2CppBase() + 0x4EA9484))(this, value);
	}
	template <typename T = int32_t> T get_br_match_mmr() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA948C))(this);
	}
	template <typename T = void> T set_br_match_mmr(int32_t value) {
		return ((T (*)(PlayerSimpleInfo*, int32_t))(Il2CppBase() + 0x4EA9494))(this, value);
	}
	template <typename T = int32_t> T get_br_ladder_score() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA949C))(this);
	}
	template <typename T = void> T set_br_ladder_score(int32_t value) {
		return ((T (*)(PlayerSimpleInfo*, int32_t))(Il2CppBase() + 0x4EA94A4))(this, value);
	}
	template <typename T = int32_t> T get_br_hidden_score() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA94AC))(this);
	}
	template <typename T = void> T set_br_hidden_score(int32_t value) {
		return ((T (*)(PlayerSimpleInfo*, int32_t))(Il2CppBase() + 0x4EA94B4))(this, value);
	}
	template <typename T = Il2CppString*> T get_king_core_user_id() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA94BC))(this);
	}
	template <typename T = void> T set_king_core_user_id(Il2CppString* value) {
		return ((T (*)(PlayerSimpleInfo*, Il2CppString*))(Il2CppBase() + 0x4EA94C4))(this, value);
	}
	template <typename T = Il2CppString*> T get_king_install_id() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA94CC))(this);
	}
	template <typename T = void> T set_king_install_id(Il2CppString* value) {
		return ((T (*)(PlayerSimpleInfo*, Il2CppString*))(Il2CppBase() + 0x4EA94D4))(this, value);
	}
	template <typename T = Il2CppString*> T get_king_session_id() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA94DC))(this);
	}
	template <typename T = void> T set_king_session_id(Il2CppString* value) {
		return ((T (*)(PlayerSimpleInfo*, Il2CppString*))(Il2CppBase() + 0x4EA94E4))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_props() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA94EC))(this);
	}
	template <typename T = uint64_t> T get_dsa_ver() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA94F4))(this);
	}
	template <typename T = void> T set_dsa_ver(uint64_t value) {
		return ((T (*)(PlayerSimpleInfo*, uint64_t))(Il2CppBase() + 0x4EA94FC))(this, value);
	}
	template <typename T = uint32_t> T get_br_ladder_level() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA950C))(this);
	}
	template <typename T = void> T set_br_ladder_level(uint32_t value) {
		return ((T (*)(PlayerSimpleInfo*, uint32_t))(Il2CppBase() + 0x4EA9514))(this, value);
	}
	template <typename T = int32_t> T get_spvp_match_fail() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA951C))(this);
	}
	template <typename T = void> T set_spvp_match_fail(int32_t value) {
		return ((T (*)(PlayerSimpleInfo*, int32_t))(Il2CppBase() + 0x4EA9524))(this, value);
	}
	template <typename T = int32_t> T get_spvp_ladder_fail() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA952C))(this);
	}
	template <typename T = void> T set_spvp_ladder_fail(int32_t value) {
		return ((T (*)(PlayerSimpleInfo*, int32_t))(Il2CppBase() + 0x4EA9534))(this, value);
	}
	template <typename T = uint32_t> T get_pve_history_max_round() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA953C))(this);
	}
	template <typename T = void> T set_pve_history_max_round(uint32_t value) {
		return ((T (*)(PlayerSimpleInfo*, uint32_t))(Il2CppBase() + 0x4EA9544))(this, value);
	}
	template <typename T = uint32_t> T get_pve_daily_max_round() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA954C))(this);
	}
	template <typename T = void> T set_pve_daily_max_round(uint32_t value) {
		return ((T (*)(PlayerSimpleInfo*, uint32_t))(Il2CppBase() + 0x4EA9554))(this, value);
	}
	template <typename T = bool> T get_is_spvp_grading() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA955C))(this);
	}
	template <typename T = void> T set_is_spvp_grading(bool value) {
		return ((T (*)(PlayerSimpleInfo*, bool))(Il2CppBase() + 0x4EA9564))(this, value);
	}
	template <typename T = bool> T get_is_in_promotion() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA956C))(this);
	}
	template <typename T = void> T set_is_in_promotion(bool value) {
		return ((T (*)(PlayerSimpleInfo*, bool))(Il2CppBase() + 0x4EA9574))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_clan_icon() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA957C))(this);
	}
	template <typename T = void> T set_clan_icon(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(PlayerSimpleInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA9584))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_access_token() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA958C))(this);
	}
	template <typename T = void> T set_access_token(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(PlayerSimpleInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA9594))(this, value);
	}
	template <typename T = uint64_t> T get_start_match_id() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA959C))(this);
	}
	template <typename T = void> T set_start_match_id(uint64_t value) {
		return ((T (*)(PlayerSimpleInfo*, uint64_t))(Il2CppBase() + 0x4EA95AC))(this, value);
	}
	template <typename T = uint64_t> T get_login_time() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA95B8))(this);
	}
	template <typename T = void> T set_login_time(uint64_t value) {
		return ((T (*)(PlayerSimpleInfo*, uint64_t))(Il2CppBase() + 0x4EA95C8))(this, value);
	}
	template <typename T = uint64_t> T get_last_login_time() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA95D4))(this);
	}
	template <typename T = void> T set_last_login_time(uint64_t value) {
		return ((T (*)(PlayerSimpleInfo*, uint64_t))(Il2CppBase() + 0x4EA95E4))(this, value);
	}
	template <typename T = uint64_t> T get_player_guid() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA95F0))(this);
	}
	template <typename T = void> T set_player_guid(uint64_t value) {
		return ((T (*)(PlayerSimpleInfo*, uint64_t))(Il2CppBase() + 0x4EA9600))(this, value);
	}
	template <typename T = int32_t> T get_br_real_hidden_score() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA960C))(this);
	}
	template <typename T = void> T set_br_real_hidden_score(int32_t value) {
		return ((T (*)(PlayerSimpleInfo*, int32_t))(Il2CppBase() + 0x4EA9614))(this, value);
	}
	template <typename T = uint64_t> T get_client_version() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA961C))(this);
	}
	template <typename T = void> T set_client_version(uint64_t value) {
		return ((T (*)(PlayerSimpleInfo*, uint64_t))(Il2CppBase() + 0x4EA962C))(this, value);
	}
	template <typename T = int32_t> T get_real_match_mmr() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA9638))(this);
	}
	template <typename T = void> T set_real_match_mmr(int32_t value) {
		return ((T (*)(PlayerSimpleInfo*, int32_t))(Il2CppBase() + 0x4EA9640))(this, value);
	}
	template <typename T = int32_t> T get_gender() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA9648))(this);
	}
	template <typename T = void> T set_gender(int32_t value) {
		return ((T (*)(PlayerSimpleInfo*, int32_t))(Il2CppBase() + 0x4EA9650))(this, value);
	}
	template <typename T = int32_t> T get_start_match_num_player() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA9658))(this);
	}
	template <typename T = void> T set_start_match_num_player(int32_t value) {
		return ((T (*)(PlayerSimpleInfo*, int32_t))(Il2CppBase() + 0x4EA9660))(this, value);
	}
	template <typename T = uint32_t> T get_register_country_id() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA9668))(this);
	}
	template <typename T = void> T set_register_country_id(uint32_t value) {
		return ((T (*)(PlayerSimpleInfo*, uint32_t))(Il2CppBase() + 0x4EA9670))(this, value);
	}
	template <typename T = uint32_t> T get_login_country_id() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA9678))(this);
	}
	template <typename T = void> T set_login_country_id(uint32_t value) {
		return ((T (*)(PlayerSimpleInfo*, uint32_t))(Il2CppBase() + 0x4EA9680))(this, value);
	}
	template <typename T = uint32_t> T get_br_tdm_times_game() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA9688))(this);
	}
	template <typename T = void> T set_br_tdm_times_game(uint32_t value) {
		return ((T (*)(PlayerSimpleInfo*, uint32_t))(Il2CppBase() + 0x4EA9690))(this, value);
	}
	template <typename T = uint32_t> T get_ping_info_update_time() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA9698))(this);
	}
	template <typename T = void> T set_ping_info_update_time(uint32_t value) {
		return ((T (*)(PlayerSimpleInfo*, uint32_t))(Il2CppBase() + 0x4EA96A0))(this, value);
	}
	template <typename T = uint64_t> T get_last_logout_time() {
		return ((T (*)(PlayerSimpleInfo*))(Il2CppBase() + 0x4EA96A8))(this);
	}
	template <typename T = void> T set_last_logout_time(uint64_t value) {
		return ((T (*)(PlayerSimpleInfo*, uint64_t))(Il2CppBase() + 0x4EA96B8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PlayerSimpleInfo*, bool))(Il2CppBase() + 0x4EA96C4))(this, createIfMissing);
	}

};

}
