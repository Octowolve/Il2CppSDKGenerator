#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSLobbyLoginRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSLobbyLoginRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _tick_count() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _zone_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _nick_name() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _cur_svr_version() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _game_nick() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& _pic_info() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _download_url() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<int32_t>*> T& _newbie_guide_list() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& _err_msg() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _punish_info() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uint32_t> T& _client_ip() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint32_t> T& _worldchat_req_second() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _lobby_bg_url() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<Il2CppArray<uintptr_t>*>*> T& _return_lobby_bg_url_list() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _ipgroup_info() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _picture_ids() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppString*> T& _ds_crypt_key() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& _ds_domain_name() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uint32_t> T& _ds_port() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uint32_t> T& _ds_ip() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uint32_t> T& _map_id() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uint32_t> T& _room_id() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _latest_version() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _client_version() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _rand_picurl_pre() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& _hide_info() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _match_end_background() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uint64_t> T& _room_guid() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uint32_t> T& _idip_zone_id() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _relative_name() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uint32_t> T& _time_zone() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _gamezone_url() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uint32_t> T& _abtest_tag() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _pandora_tag() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uint32_t> T& _pp_mode() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& _player_country_id() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uint64_t> T& _player_guid() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& _is_close_avatar() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _cdn_url() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = int32_t> T& _service_module() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int32_t> T& _login_source() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _gvoice_domain() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = int32_t> T& _gender() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _login_background() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xDC);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSLobbyLoginRes*))(Il2CppBase() + 0x513B228))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSLobbyLoginRes*, int32_t))(Il2CppBase() + 0x513B230))(this, value);
	}
	template <typename T = uint64_t> T get_tick_count() {
		return ((T (*)(CSLobbyLoginRes*))(Il2CppBase() + 0x513B238))(this);
	}
	template <typename T = void> T set_tick_count(uint64_t value) {
		return ((T (*)(CSLobbyLoginRes*, uint64_t))(Il2CppBase() + 0x513B240))(this, value);
	}
	template <typename T = int32_t> T get_zone_id() {
		return ((T (*)(CSLobbyLoginRes*))(Il2CppBase() + 0x513B250))(this);
	}
	template <typename T = void> T set_zone_id(int32_t value) {
		return ((T (*)(CSLobbyLoginRes*, int32_t))(Il2CppBase() + 0x513B258))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_nick_name() {
		return ((T (*)(CSLobbyLoginRes*))(Il2CppBase() + 0x513B260))(this);
	}
	template <typename T = void> T set_nick_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSLobbyLoginRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x513B268))(this, value);
	}
	template <typename T = int32_t> T get_cur_svr_version() {
		return ((T (*)(CSLobbyLoginRes*))(Il2CppBase() + 0x513B270))(this);
	}
	template <typename T = void> T set_cur_svr_version(int32_t value) {
		return ((T (*)(CSLobbyLoginRes*, int32_t))(Il2CppBase() + 0x513B278))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_game_nick() {
		return ((T (*)(CSLobbyLoginRes*))(Il2CppBase() + 0x513B280))(this);
	}
	template <typename T = void> T set_game_nick(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSLobbyLoginRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x513B288))(this, value);
	}
	template <typename T = uintptr_t> T get_pic_info() {
		return ((T (*)(CSLobbyLoginRes*))(Il2CppBase() + 0x513B290))(this);
	}
	template <typename T = void> T set_pic_info(uintptr_t value) {
		return ((T (*)(CSLobbyLoginRes*, uintptr_t))(Il2CppBase() + 0x513B298))(this, value);
	}
	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(CSLobbyLoginRes*))(Il2CppBase() + 0x513B2A0))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(CSLobbyLoginRes*, uint64_t))(Il2CppBase() + 0x513B2A8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_download_url() {
		return ((T (*)(CSLobbyLoginRes*))(Il2CppBase() + 0x513B2B8))(this);
	}
	template <typename T = void> T set_download_url(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSLobbyLoginRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x513B2C0))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_newbie_guide_list() {
		return ((T (*)(CSLobbyLoginRes*))(Il2CppBase() + 0x513B2C8))(this);
	}
	template <typename T = Il2CppString*> T get_err_msg() {
		return ((T (*)(CSLobbyLoginRes*))(Il2CppBase() + 0x513B2D0))(this);
	}
	template <typename T = void> T set_err_msg(Il2CppString* value) {
		return ((T (*)(CSLobbyLoginRes*, Il2CppString*))(Il2CppBase() + 0x513B2D8))(this, value);
	}
	template <typename T = uintptr_t> T get_punish_info() {
		return ((T (*)(CSLobbyLoginRes*))(Il2CppBase() + 0x513B2E0))(this);
	}
	template <typename T = void> T set_punish_info(uintptr_t value) {
		return ((T (*)(CSLobbyLoginRes*, uintptr_t))(Il2CppBase() + 0x513B2E8))(this, value);
	}
	template <typename T = uint32_t> T get_client_ip() {
		return ((T (*)(CSLobbyLoginRes*))(Il2CppBase() + 0x513B2F0))(this);
	}
	template <typename T = void> T set_client_ip(uint32_t value) {
		return ((T (*)(CSLobbyLoginRes*, uint32_t))(Il2CppBase() + 0x513B2F8))(this, value);
	}
	template <typename T = uint32_t> T get_worldchat_req_second() {
		return ((T (*)(CSLobbyLoginRes*))(Il2CppBase() + 0x513B300))(this);
	}
	template <typename T = void> T set_worldchat_req_second(uint32_t value) {
		return ((T (*)(CSLobbyLoginRes*, uint32_t))(Il2CppBase() + 0x513B308))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_lobby_bg_url() {
		return ((T (*)(CSLobbyLoginRes*))(Il2CppBase() + 0x513B310))(this);
	}
	template <typename T = void> T set_lobby_bg_url(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSLobbyLoginRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x513B318))(this, value);
	}
	template <typename T = Il2CppList<Il2CppArray<uintptr_t>*>*> T get_return_lobby_bg_url_list() {
		return ((T (*)(CSLobbyLoginRes*))(Il2CppBase() + 0x513B320))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_ipgroup_info() {
		return ((T (*)(CSLobbyLoginRes*))(Il2CppBase() + 0x513B328))(this);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_picture_ids() {
		return ((T (*)(CSLobbyLoginRes*))(Il2CppBase() + 0x513B330))(this);
	}
	template <typename T = Il2CppString*> T get_ds_crypt_key() {
		return ((T (*)(CSLobbyLoginRes*))(Il2CppBase() + 0x513B338))(this);
	}
	template <typename T = void> T set_ds_crypt_key(Il2CppString* value) {
		return ((T (*)(CSLobbyLoginRes*, Il2CppString*))(Il2CppBase() + 0x513B340))(this, value);
	}
	template <typename T = Il2CppString*> T get_ds_domain_name() {
		return ((T (*)(CSLobbyLoginRes*))(Il2CppBase() + 0x513B348))(this);
	}
	template <typename T = void> T set_ds_domain_name(Il2CppString* value) {
		return ((T (*)(CSLobbyLoginRes*, Il2CppString*))(Il2CppBase() + 0x513B350))(this, value);
	}
	template <typename T = uint32_t> T get_ds_port() {
		return ((T (*)(CSLobbyLoginRes*))(Il2CppBase() + 0x513B358))(this);
	}
	template <typename T = void> T set_ds_port(uint32_t value) {
		return ((T (*)(CSLobbyLoginRes*, uint32_t))(Il2CppBase() + 0x513B360))(this, value);
	}
	template <typename T = uint32_t> T get_ds_ip() {
		return ((T (*)(CSLobbyLoginRes*))(Il2CppBase() + 0x513B368))(this);
	}
	template <typename T = void> T set_ds_ip(uint32_t value) {
		return ((T (*)(CSLobbyLoginRes*, uint32_t))(Il2CppBase() + 0x513B370))(this, value);
	}
	template <typename T = uint32_t> T get_map_id() {
		return ((T (*)(CSLobbyLoginRes*))(Il2CppBase() + 0x513B378))(this);
	}
	template <typename T = void> T set_map_id(uint32_t value) {
		return ((T (*)(CSLobbyLoginRes*, uint32_t))(Il2CppBase() + 0x513B380))(this, value);
	}
	template <typename T = uint32_t> T get_room_id() {
		return ((T (*)(CSLobbyLoginRes*))(Il2CppBase() + 0x513B388))(this);
	}
	template <typename T = void> T set_room_id(uint32_t value) {
		return ((T (*)(CSLobbyLoginRes*, uint32_t))(Il2CppBase() + 0x513B390))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_latest_version() {
		return ((T (*)(CSLobbyLoginRes*))(Il2CppBase() + 0x513B398))(this);
	}
	template <typename T = void> T set_latest_version(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSLobbyLoginRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x513B3A0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_client_version() {
		return ((T (*)(CSLobbyLoginRes*))(Il2CppBase() + 0x513B3A8))(this);
	}
	template <typename T = void> T set_client_version(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSLobbyLoginRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x513B3B0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_rand_picurl_pre() {
		return ((T (*)(CSLobbyLoginRes*))(Il2CppBase() + 0x513B3B8))(this);
	}
	template <typename T = void> T set_rand_picurl_pre(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSLobbyLoginRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x513B3C0))(this, value);
	}
	template <typename T = bool> T get_hide_info() {
		return ((T (*)(CSLobbyLoginRes*))(Il2CppBase() + 0x513B3C8))(this);
	}
	template <typename T = void> T set_hide_info(bool value) {
		return ((T (*)(CSLobbyLoginRes*, bool))(Il2CppBase() + 0x513B3D0))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_match_end_background() {
		return ((T (*)(CSLobbyLoginRes*))(Il2CppBase() + 0x513B3D8))(this);
	}
	template <typename T = uint64_t> T get_room_guid() {
		return ((T (*)(CSLobbyLoginRes*))(Il2CppBase() + 0x513B3E0))(this);
	}
	template <typename T = void> T set_room_guid(uint64_t value) {
		return ((T (*)(CSLobbyLoginRes*, uint64_t))(Il2CppBase() + 0x513B3E8))(this, value);
	}
	template <typename T = uint32_t> T get_idip_zone_id() {
		return ((T (*)(CSLobbyLoginRes*))(Il2CppBase() + 0x513B3F8))(this);
	}
	template <typename T = void> T set_idip_zone_id(uint32_t value) {
		return ((T (*)(CSLobbyLoginRes*, uint32_t))(Il2CppBase() + 0x513B400))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_relative_name() {
		return ((T (*)(CSLobbyLoginRes*))(Il2CppBase() + 0x513B408))(this);
	}
	template <typename T = void> T set_relative_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSLobbyLoginRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x513B410))(this, value);
	}
	template <typename T = uint32_t> T get_time_zone() {
		return ((T (*)(CSLobbyLoginRes*))(Il2CppBase() + 0x513B418))(this);
	}
	template <typename T = void> T set_time_zone(uint32_t value) {
		return ((T (*)(CSLobbyLoginRes*, uint32_t))(Il2CppBase() + 0x513B420))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_gamezone_url() {
		return ((T (*)(CSLobbyLoginRes*))(Il2CppBase() + 0x513B428))(this);
	}
	template <typename T = void> T set_gamezone_url(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSLobbyLoginRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x513B430))(this, value);
	}
	template <typename T = uint32_t> T get_abtest_tag() {
		return ((T (*)(CSLobbyLoginRes*))(Il2CppBase() + 0x513B438))(this);
	}
	template <typename T = void> T set_abtest_tag(uint32_t value) {
		return ((T (*)(CSLobbyLoginRes*, uint32_t))(Il2CppBase() + 0x513B440))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_pandora_tag() {
		return ((T (*)(CSLobbyLoginRes*))(Il2CppBase() + 0x513B448))(this);
	}
	template <typename T = void> T set_pandora_tag(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSLobbyLoginRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x513B450))(this, value);
	}
	template <typename T = uint32_t> T get_pp_mode() {
		return ((T (*)(CSLobbyLoginRes*))(Il2CppBase() + 0x513B458))(this);
	}
	template <typename T = void> T set_pp_mode(uint32_t value) {
		return ((T (*)(CSLobbyLoginRes*, uint32_t))(Il2CppBase() + 0x513B460))(this, value);
	}
	template <typename T = int32_t> T get_player_country_id() {
		return ((T (*)(CSLobbyLoginRes*))(Il2CppBase() + 0x513B468))(this);
	}
	template <typename T = void> T set_player_country_id(int32_t value) {
		return ((T (*)(CSLobbyLoginRes*, int32_t))(Il2CppBase() + 0x513B470))(this, value);
	}
	template <typename T = uint64_t> T get_player_guid() {
		return ((T (*)(CSLobbyLoginRes*))(Il2CppBase() + 0x513B478))(this);
	}
	template <typename T = void> T set_player_guid(uint64_t value) {
		return ((T (*)(CSLobbyLoginRes*, uint64_t))(Il2CppBase() + 0x513B480))(this, value);
	}
	template <typename T = bool> T get_is_close_avatar() {
		return ((T (*)(CSLobbyLoginRes*))(Il2CppBase() + 0x513B490))(this);
	}
	template <typename T = void> T set_is_close_avatar(bool value) {
		return ((T (*)(CSLobbyLoginRes*, bool))(Il2CppBase() + 0x513B498))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_cdn_url() {
		return ((T (*)(CSLobbyLoginRes*))(Il2CppBase() + 0x513B4A0))(this);
	}
	template <typename T = void> T set_cdn_url(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSLobbyLoginRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x513B4A8))(this, value);
	}
	template <typename T = int32_t> T get_service_module() {
		return ((T (*)(CSLobbyLoginRes*))(Il2CppBase() + 0x513B4B0))(this);
	}
	template <typename T = void> T set_service_module(int32_t value) {
		return ((T (*)(CSLobbyLoginRes*, int32_t))(Il2CppBase() + 0x513B4B8))(this, value);
	}
	template <typename T = int32_t> T get_login_source() {
		return ((T (*)(CSLobbyLoginRes*))(Il2CppBase() + 0x513B4C0))(this);
	}
	template <typename T = void> T set_login_source(int32_t value) {
		return ((T (*)(CSLobbyLoginRes*, int32_t))(Il2CppBase() + 0x513B4C8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_gvoice_domain() {
		return ((T (*)(CSLobbyLoginRes*))(Il2CppBase() + 0x513B4D0))(this);
	}
	template <typename T = void> T set_gvoice_domain(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSLobbyLoginRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x513B4D8))(this, value);
	}
	template <typename T = int32_t> T get_gender() {
		return ((T (*)(CSLobbyLoginRes*))(Il2CppBase() + 0x513B4E0))(this);
	}
	template <typename T = void> T set_gender(int32_t value) {
		return ((T (*)(CSLobbyLoginRes*, int32_t))(Il2CppBase() + 0x513B4E8))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_login_background() {
		return ((T (*)(CSLobbyLoginRes*))(Il2CppBase() + 0x513B4F0))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSLobbyLoginRes*, bool))(Il2CppBase() + 0x513B4F8))(this, createIfMissing);
	}

};

}
