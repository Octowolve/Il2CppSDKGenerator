#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class RankPlayerInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "RankPlayerInfo"));
	}

	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _nickname() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _pic_info() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _rank() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _rank_value() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _rank_percent() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& _exp_level() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& _spvp_ladder_level() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& _br_ladder_level() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint32_t> T& _total_times_game() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _state() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _clan_name() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& _guild_member_num() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _guild_icon() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& _guild_level() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _relation_nick() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint32_t> T& _peak_level() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uint32_t> T& _ex_vip_flag() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uint32_t> T& _spi() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _sign() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& _battlepass_level() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& _battlepass_is_charge() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& _login_source() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uint32_t> T& _login_source_time() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& _gender() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(RankPlayerInfo*))(Il2CppBase() + 0x5070434))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(RankPlayerInfo*, uint64_t))(Il2CppBase() + 0x507043C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_nickname() {
		return ((T (*)(RankPlayerInfo*))(Il2CppBase() + 0x507044C))(this);
	}
	template <typename T = void> T set_nickname(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(RankPlayerInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5070454))(this, value);
	}
	template <typename T = uintptr_t> T get_pic_info() {
		return ((T (*)(RankPlayerInfo*))(Il2CppBase() + 0x507045C))(this);
	}
	template <typename T = void> T set_pic_info(uintptr_t value) {
		return ((T (*)(RankPlayerInfo*, uintptr_t))(Il2CppBase() + 0x5070464))(this, value);
	}
	template <typename T = uint32_t> T get_rank() {
		return ((T (*)(RankPlayerInfo*))(Il2CppBase() + 0x507046C))(this);
	}
	template <typename T = void> T set_rank(uint32_t value) {
		return ((T (*)(RankPlayerInfo*, uint32_t))(Il2CppBase() + 0x5070474))(this, value);
	}
	template <typename T = uint32_t> T get_rank_value() {
		return ((T (*)(RankPlayerInfo*))(Il2CppBase() + 0x507047C))(this);
	}
	template <typename T = void> T set_rank_value(uint32_t value) {
		return ((T (*)(RankPlayerInfo*, uint32_t))(Il2CppBase() + 0x5070484))(this, value);
	}
	template <typename T = uint32_t> T get_rank_percent() {
		return ((T (*)(RankPlayerInfo*))(Il2CppBase() + 0x507048C))(this);
	}
	template <typename T = void> T set_rank_percent(uint32_t value) {
		return ((T (*)(RankPlayerInfo*, uint32_t))(Il2CppBase() + 0x5070494))(this, value);
	}
	template <typename T = uint32_t> T get_exp_level() {
		return ((T (*)(RankPlayerInfo*))(Il2CppBase() + 0x507049C))(this);
	}
	template <typename T = void> T set_exp_level(uint32_t value) {
		return ((T (*)(RankPlayerInfo*, uint32_t))(Il2CppBase() + 0x50704A4))(this, value);
	}
	template <typename T = uint32_t> T get_spvp_ladder_level() {
		return ((T (*)(RankPlayerInfo*))(Il2CppBase() + 0x50704AC))(this);
	}
	template <typename T = void> T set_spvp_ladder_level(uint32_t value) {
		return ((T (*)(RankPlayerInfo*, uint32_t))(Il2CppBase() + 0x50704B4))(this, value);
	}
	template <typename T = uint32_t> T get_br_ladder_level() {
		return ((T (*)(RankPlayerInfo*))(Il2CppBase() + 0x50704BC))(this);
	}
	template <typename T = void> T set_br_ladder_level(uint32_t value) {
		return ((T (*)(RankPlayerInfo*, uint32_t))(Il2CppBase() + 0x50704C4))(this, value);
	}
	template <typename T = uint32_t> T get_total_times_game() {
		return ((T (*)(RankPlayerInfo*))(Il2CppBase() + 0x50704CC))(this);
	}
	template <typename T = void> T set_total_times_game(uint32_t value) {
		return ((T (*)(RankPlayerInfo*, uint32_t))(Il2CppBase() + 0x50704D4))(this, value);
	}
	template <typename T = uintptr_t> T get_state() {
		return ((T (*)(RankPlayerInfo*))(Il2CppBase() + 0x50704DC))(this);
	}
	template <typename T = void> T set_state(uintptr_t value) {
		return ((T (*)(RankPlayerInfo*, uintptr_t))(Il2CppBase() + 0x50704E4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_clan_name() {
		return ((T (*)(RankPlayerInfo*))(Il2CppBase() + 0x50704EC))(this);
	}
	template <typename T = void> T set_clan_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(RankPlayerInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x50704F4))(this, value);
	}
	template <typename T = int32_t> T get_guild_member_num() {
		return ((T (*)(RankPlayerInfo*))(Il2CppBase() + 0x50704FC))(this);
	}
	template <typename T = void> T set_guild_member_num(int32_t value) {
		return ((T (*)(RankPlayerInfo*, int32_t))(Il2CppBase() + 0x5070504))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_guild_icon() {
		return ((T (*)(RankPlayerInfo*))(Il2CppBase() + 0x507050C))(this);
	}
	template <typename T = void> T set_guild_icon(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(RankPlayerInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5070514))(this, value);
	}
	template <typename T = int32_t> T get_guild_level() {
		return ((T (*)(RankPlayerInfo*))(Il2CppBase() + 0x507051C))(this);
	}
	template <typename T = void> T set_guild_level(int32_t value) {
		return ((T (*)(RankPlayerInfo*, int32_t))(Il2CppBase() + 0x5070524))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_relation_nick() {
		return ((T (*)(RankPlayerInfo*))(Il2CppBase() + 0x507052C))(this);
	}
	template <typename T = void> T set_relation_nick(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(RankPlayerInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5070534))(this, value);
	}
	template <typename T = uint32_t> T get_peak_level() {
		return ((T (*)(RankPlayerInfo*))(Il2CppBase() + 0x507053C))(this);
	}
	template <typename T = void> T set_peak_level(uint32_t value) {
		return ((T (*)(RankPlayerInfo*, uint32_t))(Il2CppBase() + 0x5070544))(this, value);
	}
	template <typename T = uint32_t> T get_ex_vip_flag() {
		return ((T (*)(RankPlayerInfo*))(Il2CppBase() + 0x507054C))(this);
	}
	template <typename T = void> T set_ex_vip_flag(uint32_t value) {
		return ((T (*)(RankPlayerInfo*, uint32_t))(Il2CppBase() + 0x5070554))(this, value);
	}
	template <typename T = uint32_t> T get_spi() {
		return ((T (*)(RankPlayerInfo*))(Il2CppBase() + 0x507055C))(this);
	}
	template <typename T = void> T set_spi(uint32_t value) {
		return ((T (*)(RankPlayerInfo*, uint32_t))(Il2CppBase() + 0x5070564))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_sign() {
		return ((T (*)(RankPlayerInfo*))(Il2CppBase() + 0x507056C))(this);
	}
	template <typename T = void> T set_sign(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(RankPlayerInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5070574))(this, value);
	}
	template <typename T = int32_t> T get_battlepass_level() {
		return ((T (*)(RankPlayerInfo*))(Il2CppBase() + 0x507057C))(this);
	}
	template <typename T = void> T set_battlepass_level(int32_t value) {
		return ((T (*)(RankPlayerInfo*, int32_t))(Il2CppBase() + 0x5070584))(this, value);
	}
	template <typename T = int32_t> T get_battlepass_is_charge() {
		return ((T (*)(RankPlayerInfo*))(Il2CppBase() + 0x507058C))(this);
	}
	template <typename T = void> T set_battlepass_is_charge(int32_t value) {
		return ((T (*)(RankPlayerInfo*, int32_t))(Il2CppBase() + 0x5070594))(this, value);
	}
	template <typename T = int32_t> T get_login_source() {
		return ((T (*)(RankPlayerInfo*))(Il2CppBase() + 0x507059C))(this);
	}
	template <typename T = void> T set_login_source(int32_t value) {
		return ((T (*)(RankPlayerInfo*, int32_t))(Il2CppBase() + 0x50705A4))(this, value);
	}
	template <typename T = uint32_t> T get_login_source_time() {
		return ((T (*)(RankPlayerInfo*))(Il2CppBase() + 0x50705AC))(this);
	}
	template <typename T = void> T set_login_source_time(uint32_t value) {
		return ((T (*)(RankPlayerInfo*, uint32_t))(Il2CppBase() + 0x50705B4))(this, value);
	}
	template <typename T = int32_t> T get_gender() {
		return ((T (*)(RankPlayerInfo*))(Il2CppBase() + 0x50705BC))(this);
	}
	template <typename T = void> T set_gender(int32_t value) {
		return ((T (*)(RankPlayerInfo*, int32_t))(Il2CppBase() + 0x50705C4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(RankPlayerInfo*, bool))(Il2CppBase() + 0x50705CC))(this, createIfMissing);
	}

};

}
