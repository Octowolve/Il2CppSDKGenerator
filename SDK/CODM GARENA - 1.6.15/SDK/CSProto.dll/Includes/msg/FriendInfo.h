#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class FriendInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "FriendInfo"));
	}

	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _player_name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _nick_name() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _pic_url() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _friend_type() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _exp_lvl() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _vip_lvl() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& _monthcard_level() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& _ex_vip_flag() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint64_t> T& _last_login_time() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint64_t> T& _last_logout_time() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& _pk_total_wins() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint32_t> T& _chap_total_stars() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uint32_t> T& _chal_top_score() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint32_t> T& _coop_top_score() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& _able_to_send_gift() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uint32_t> T& _conn_bus_id() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uint32_t> T& _state_flag() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& _map_id() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uint32_t> T& _most_favor_mode() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uint32_t> T& _second_favor_mode() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uint32_t> T& _login_source() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& _ladder_score() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& _is_online() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _open_id() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _clan_name() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& _gender() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x80);
	}

	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(FriendInfo*))(Il2CppBase() + 0x522753C))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(FriendInfo*, uint64_t))(Il2CppBase() + 0x5227544))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_player_name() {
		return ((T (*)(FriendInfo*))(Il2CppBase() + 0x5227554))(this);
	}
	template <typename T = void> T set_player_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(FriendInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x522755C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_nick_name() {
		return ((T (*)(FriendInfo*))(Il2CppBase() + 0x5227564))(this);
	}
	template <typename T = void> T set_nick_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(FriendInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x522756C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_pic_url() {
		return ((T (*)(FriendInfo*))(Il2CppBase() + 0x5227574))(this);
	}
	template <typename T = void> T set_pic_url(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(FriendInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x522757C))(this, value);
	}
	template <typename T = int32_t> T get_friend_type() {
		return ((T (*)(FriendInfo*))(Il2CppBase() + 0x5227584))(this);
	}
	template <typename T = void> T set_friend_type(int32_t value) {
		return ((T (*)(FriendInfo*, int32_t))(Il2CppBase() + 0x522758C))(this, value);
	}
	template <typename T = int32_t> T get_exp_lvl() {
		return ((T (*)(FriendInfo*))(Il2CppBase() + 0x5227594))(this);
	}
	template <typename T = void> T set_exp_lvl(int32_t value) {
		return ((T (*)(FriendInfo*, int32_t))(Il2CppBase() + 0x522759C))(this, value);
	}
	template <typename T = int32_t> T get_vip_lvl() {
		return ((T (*)(FriendInfo*))(Il2CppBase() + 0x52275A4))(this);
	}
	template <typename T = void> T set_vip_lvl(int32_t value) {
		return ((T (*)(FriendInfo*, int32_t))(Il2CppBase() + 0x52275AC))(this, value);
	}
	template <typename T = int32_t> T get_monthcard_level() {
		return ((T (*)(FriendInfo*))(Il2CppBase() + 0x52275B4))(this);
	}
	template <typename T = void> T set_monthcard_level(int32_t value) {
		return ((T (*)(FriendInfo*, int32_t))(Il2CppBase() + 0x52275BC))(this, value);
	}
	template <typename T = uint32_t> T get_ex_vip_flag() {
		return ((T (*)(FriendInfo*))(Il2CppBase() + 0x52275C4))(this);
	}
	template <typename T = void> T set_ex_vip_flag(uint32_t value) {
		return ((T (*)(FriendInfo*, uint32_t))(Il2CppBase() + 0x52275CC))(this, value);
	}
	template <typename T = uint64_t> T get_last_login_time() {
		return ((T (*)(FriendInfo*))(Il2CppBase() + 0x52275D4))(this);
	}
	template <typename T = void> T set_last_login_time(uint64_t value) {
		return ((T (*)(FriendInfo*, uint64_t))(Il2CppBase() + 0x52275DC))(this, value);
	}
	template <typename T = uint64_t> T get_last_logout_time() {
		return ((T (*)(FriendInfo*))(Il2CppBase() + 0x52275EC))(this);
	}
	template <typename T = void> T set_last_logout_time(uint64_t value) {
		return ((T (*)(FriendInfo*, uint64_t))(Il2CppBase() + 0x52275F4))(this, value);
	}
	template <typename T = uint32_t> T get_pk_total_wins() {
		return ((T (*)(FriendInfo*))(Il2CppBase() + 0x5227604))(this);
	}
	template <typename T = void> T set_pk_total_wins(uint32_t value) {
		return ((T (*)(FriendInfo*, uint32_t))(Il2CppBase() + 0x522760C))(this, value);
	}
	template <typename T = uint32_t> T get_chap_total_stars() {
		return ((T (*)(FriendInfo*))(Il2CppBase() + 0x5227614))(this);
	}
	template <typename T = void> T set_chap_total_stars(uint32_t value) {
		return ((T (*)(FriendInfo*, uint32_t))(Il2CppBase() + 0x522761C))(this, value);
	}
	template <typename T = uint32_t> T get_chal_top_score() {
		return ((T (*)(FriendInfo*))(Il2CppBase() + 0x5227624))(this);
	}
	template <typename T = void> T set_chal_top_score(uint32_t value) {
		return ((T (*)(FriendInfo*, uint32_t))(Il2CppBase() + 0x522762C))(this, value);
	}
	template <typename T = uint32_t> T get_coop_top_score() {
		return ((T (*)(FriendInfo*))(Il2CppBase() + 0x5227634))(this);
	}
	template <typename T = void> T set_coop_top_score(uint32_t value) {
		return ((T (*)(FriendInfo*, uint32_t))(Il2CppBase() + 0x522763C))(this, value);
	}
	template <typename T = int32_t> T get_able_to_send_gift() {
		return ((T (*)(FriendInfo*))(Il2CppBase() + 0x5227644))(this);
	}
	template <typename T = void> T set_able_to_send_gift(int32_t value) {
		return ((T (*)(FriendInfo*, int32_t))(Il2CppBase() + 0x522764C))(this, value);
	}
	template <typename T = uint32_t> T get_conn_bus_id() {
		return ((T (*)(FriendInfo*))(Il2CppBase() + 0x5227654))(this);
	}
	template <typename T = void> T set_conn_bus_id(uint32_t value) {
		return ((T (*)(FriendInfo*, uint32_t))(Il2CppBase() + 0x522765C))(this, value);
	}
	template <typename T = uint32_t> T get_state_flag() {
		return ((T (*)(FriendInfo*))(Il2CppBase() + 0x5227664))(this);
	}
	template <typename T = void> T set_state_flag(uint32_t value) {
		return ((T (*)(FriendInfo*, uint32_t))(Il2CppBase() + 0x522766C))(this, value);
	}
	template <typename T = int32_t> T get_map_id() {
		return ((T (*)(FriendInfo*))(Il2CppBase() + 0x5227674))(this);
	}
	template <typename T = void> T set_map_id(int32_t value) {
		return ((T (*)(FriendInfo*, int32_t))(Il2CppBase() + 0x522767C))(this, value);
	}
	template <typename T = uint32_t> T get_most_favor_mode() {
		return ((T (*)(FriendInfo*))(Il2CppBase() + 0x5227684))(this);
	}
	template <typename T = void> T set_most_favor_mode(uint32_t value) {
		return ((T (*)(FriendInfo*, uint32_t))(Il2CppBase() + 0x522768C))(this, value);
	}
	template <typename T = uint32_t> T get_second_favor_mode() {
		return ((T (*)(FriendInfo*))(Il2CppBase() + 0x5227694))(this);
	}
	template <typename T = void> T set_second_favor_mode(uint32_t value) {
		return ((T (*)(FriendInfo*, uint32_t))(Il2CppBase() + 0x522769C))(this, value);
	}
	template <typename T = uint32_t> T get_login_source() {
		return ((T (*)(FriendInfo*))(Il2CppBase() + 0x52276A4))(this);
	}
	template <typename T = void> T set_login_source(uint32_t value) {
		return ((T (*)(FriendInfo*, uint32_t))(Il2CppBase() + 0x52276AC))(this, value);
	}
	template <typename T = int32_t> T get_ladder_score() {
		return ((T (*)(FriendInfo*))(Il2CppBase() + 0x52276B4))(this);
	}
	template <typename T = void> T set_ladder_score(int32_t value) {
		return ((T (*)(FriendInfo*, int32_t))(Il2CppBase() + 0x52276BC))(this, value);
	}
	template <typename T = int32_t> T get_is_online() {
		return ((T (*)(FriendInfo*))(Il2CppBase() + 0x52276C4))(this);
	}
	template <typename T = void> T set_is_online(int32_t value) {
		return ((T (*)(FriendInfo*, int32_t))(Il2CppBase() + 0x52276CC))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_open_id() {
		return ((T (*)(FriendInfo*))(Il2CppBase() + 0x52276D4))(this);
	}
	template <typename T = void> T set_open_id(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(FriendInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x52276DC))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_clan_name() {
		return ((T (*)(FriendInfo*))(Il2CppBase() + 0x52276E4))(this);
	}
	template <typename T = void> T set_clan_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(FriendInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x52276EC))(this, value);
	}
	template <typename T = int32_t> T get_gender() {
		return ((T (*)(FriendInfo*))(Il2CppBase() + 0x52276F4))(this);
	}
	template <typename T = void> T set_gender(int32_t value) {
		return ((T (*)(FriendInfo*, int32_t))(Il2CppBase() + 0x52276FC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(FriendInfo*, bool))(Il2CppBase() + 0x5227704))(this, createIfMissing);
	}

};

}
