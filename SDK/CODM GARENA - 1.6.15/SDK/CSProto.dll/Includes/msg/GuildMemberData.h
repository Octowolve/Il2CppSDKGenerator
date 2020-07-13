#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GuildMemberData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GuildMemberData"));
	}

	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _player_name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _role() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _last_login_time() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _join_time() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _exp_level() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& _lobby_busid() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& _pic_info() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& _vice_op_time() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint32_t> T& _daily_active() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint32_t> T& _week_active() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uint32_t> T& _season_active() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& _member_daily_active_prize_bit() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uint32_t> T& _daily_active_prize_bit() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint32_t> T& _last_week_active() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uint32_t> T& _last_week_rank_prize_time() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint32_t> T& _last_season_active() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uint32_t> T& _last_season_rank_prize_time() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uint32_t> T& _use_diamond() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _relation_nick() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& _peak_level() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& _ladder_score() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& _br_ladder_score() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uint32_t> T& _last_logout_time() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uint32_t> T& _last_server_ver() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uint32_t> T& _gender() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x74);
	}

	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(GuildMemberData*))(Il2CppBase() + 0x50CFD10))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(GuildMemberData*, uint64_t))(Il2CppBase() + 0x50CFD18))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_player_name() {
		return ((T (*)(GuildMemberData*))(Il2CppBase() + 0x50CFD28))(this);
	}
	template <typename T = void> T set_player_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(GuildMemberData*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x50CFD30))(this, value);
	}
	template <typename T = int32_t> T get_role() {
		return ((T (*)(GuildMemberData*))(Il2CppBase() + 0x50CFD38))(this);
	}
	template <typename T = void> T set_role(int32_t value) {
		return ((T (*)(GuildMemberData*, int32_t))(Il2CppBase() + 0x50CFD40))(this, value);
	}
	template <typename T = uint32_t> T get_last_login_time() {
		return ((T (*)(GuildMemberData*))(Il2CppBase() + 0x50CFD48))(this);
	}
	template <typename T = void> T set_last_login_time(uint32_t value) {
		return ((T (*)(GuildMemberData*, uint32_t))(Il2CppBase() + 0x50CFD50))(this, value);
	}
	template <typename T = uint32_t> T get_join_time() {
		return ((T (*)(GuildMemberData*))(Il2CppBase() + 0x50CFD58))(this);
	}
	template <typename T = void> T set_join_time(uint32_t value) {
		return ((T (*)(GuildMemberData*, uint32_t))(Il2CppBase() + 0x50CFD60))(this, value);
	}
	template <typename T = int32_t> T get_exp_level() {
		return ((T (*)(GuildMemberData*))(Il2CppBase() + 0x50CFD68))(this);
	}
	template <typename T = void> T set_exp_level(int32_t value) {
		return ((T (*)(GuildMemberData*, int32_t))(Il2CppBase() + 0x50CFD70))(this, value);
	}
	template <typename T = uint32_t> T get_lobby_busid() {
		return ((T (*)(GuildMemberData*))(Il2CppBase() + 0x50CFD78))(this);
	}
	template <typename T = void> T set_lobby_busid(uint32_t value) {
		return ((T (*)(GuildMemberData*, uint32_t))(Il2CppBase() + 0x50CFD80))(this, value);
	}
	template <typename T = uintptr_t> T get_pic_info() {
		return ((T (*)(GuildMemberData*))(Il2CppBase() + 0x50CFD88))(this);
	}
	template <typename T = void> T set_pic_info(uintptr_t value) {
		return ((T (*)(GuildMemberData*, uintptr_t))(Il2CppBase() + 0x50CFD90))(this, value);
	}
	template <typename T = uint32_t> T get_vice_op_time() {
		return ((T (*)(GuildMemberData*))(Il2CppBase() + 0x50CFD98))(this);
	}
	template <typename T = void> T set_vice_op_time(uint32_t value) {
		return ((T (*)(GuildMemberData*, uint32_t))(Il2CppBase() + 0x50CFDA0))(this, value);
	}
	template <typename T = uint32_t> T get_daily_active() {
		return ((T (*)(GuildMemberData*))(Il2CppBase() + 0x50CFDA8))(this);
	}
	template <typename T = void> T set_daily_active(uint32_t value) {
		return ((T (*)(GuildMemberData*, uint32_t))(Il2CppBase() + 0x50CFDB0))(this, value);
	}
	template <typename T = uint32_t> T get_week_active() {
		return ((T (*)(GuildMemberData*))(Il2CppBase() + 0x50CFDB8))(this);
	}
	template <typename T = void> T set_week_active(uint32_t value) {
		return ((T (*)(GuildMemberData*, uint32_t))(Il2CppBase() + 0x50CFDC0))(this, value);
	}
	template <typename T = uint32_t> T get_season_active() {
		return ((T (*)(GuildMemberData*))(Il2CppBase() + 0x50CFDC8))(this);
	}
	template <typename T = void> T set_season_active(uint32_t value) {
		return ((T (*)(GuildMemberData*, uint32_t))(Il2CppBase() + 0x50CFDD0))(this, value);
	}
	template <typename T = uint32_t> T get_member_daily_active_prize_bit() {
		return ((T (*)(GuildMemberData*))(Il2CppBase() + 0x50CFDD8))(this);
	}
	template <typename T = void> T set_member_daily_active_prize_bit(uint32_t value) {
		return ((T (*)(GuildMemberData*, uint32_t))(Il2CppBase() + 0x50CFDE0))(this, value);
	}
	template <typename T = uint32_t> T get_daily_active_prize_bit() {
		return ((T (*)(GuildMemberData*))(Il2CppBase() + 0x50CFDE8))(this);
	}
	template <typename T = void> T set_daily_active_prize_bit(uint32_t value) {
		return ((T (*)(GuildMemberData*, uint32_t))(Il2CppBase() + 0x50CFDF0))(this, value);
	}
	template <typename T = uint32_t> T get_last_week_active() {
		return ((T (*)(GuildMemberData*))(Il2CppBase() + 0x50CFDF8))(this);
	}
	template <typename T = void> T set_last_week_active(uint32_t value) {
		return ((T (*)(GuildMemberData*, uint32_t))(Il2CppBase() + 0x50CFE00))(this, value);
	}
	template <typename T = uint32_t> T get_last_week_rank_prize_time() {
		return ((T (*)(GuildMemberData*))(Il2CppBase() + 0x50CFE08))(this);
	}
	template <typename T = void> T set_last_week_rank_prize_time(uint32_t value) {
		return ((T (*)(GuildMemberData*, uint32_t))(Il2CppBase() + 0x50CFE10))(this, value);
	}
	template <typename T = uint32_t> T get_last_season_active() {
		return ((T (*)(GuildMemberData*))(Il2CppBase() + 0x50CFE18))(this);
	}
	template <typename T = void> T set_last_season_active(uint32_t value) {
		return ((T (*)(GuildMemberData*, uint32_t))(Il2CppBase() + 0x50CFE20))(this, value);
	}
	template <typename T = uint32_t> T get_last_season_rank_prize_time() {
		return ((T (*)(GuildMemberData*))(Il2CppBase() + 0x50CFE28))(this);
	}
	template <typename T = void> T set_last_season_rank_prize_time(uint32_t value) {
		return ((T (*)(GuildMemberData*, uint32_t))(Il2CppBase() + 0x50CFE30))(this, value);
	}
	template <typename T = uint32_t> T get_use_diamond() {
		return ((T (*)(GuildMemberData*))(Il2CppBase() + 0x50CFE38))(this);
	}
	template <typename T = void> T set_use_diamond(uint32_t value) {
		return ((T (*)(GuildMemberData*, uint32_t))(Il2CppBase() + 0x50CFE40))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_relation_nick() {
		return ((T (*)(GuildMemberData*))(Il2CppBase() + 0x50CFE48))(this);
	}
	template <typename T = void> T set_relation_nick(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(GuildMemberData*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x50CFE50))(this, value);
	}
	template <typename T = int32_t> T get_peak_level() {
		return ((T (*)(GuildMemberData*))(Il2CppBase() + 0x50CFE58))(this);
	}
	template <typename T = void> T set_peak_level(int32_t value) {
		return ((T (*)(GuildMemberData*, int32_t))(Il2CppBase() + 0x50CFE60))(this, value);
	}
	template <typename T = int32_t> T get_ladder_score() {
		return ((T (*)(GuildMemberData*))(Il2CppBase() + 0x50CFE68))(this);
	}
	template <typename T = void> T set_ladder_score(int32_t value) {
		return ((T (*)(GuildMemberData*, int32_t))(Il2CppBase() + 0x50CFE70))(this, value);
	}
	template <typename T = int32_t> T get_br_ladder_score() {
		return ((T (*)(GuildMemberData*))(Il2CppBase() + 0x50CFE78))(this);
	}
	template <typename T = void> T set_br_ladder_score(int32_t value) {
		return ((T (*)(GuildMemberData*, int32_t))(Il2CppBase() + 0x50CFE80))(this, value);
	}
	template <typename T = uint32_t> T get_last_logout_time() {
		return ((T (*)(GuildMemberData*))(Il2CppBase() + 0x50CFE88))(this);
	}
	template <typename T = void> T set_last_logout_time(uint32_t value) {
		return ((T (*)(GuildMemberData*, uint32_t))(Il2CppBase() + 0x50CFE90))(this, value);
	}
	template <typename T = uint32_t> T get_last_server_ver() {
		return ((T (*)(GuildMemberData*))(Il2CppBase() + 0x50CFE98))(this);
	}
	template <typename T = void> T set_last_server_ver(uint32_t value) {
		return ((T (*)(GuildMemberData*, uint32_t))(Il2CppBase() + 0x50CFEA0))(this, value);
	}
	template <typename T = uint32_t> T get_gender() {
		return ((T (*)(GuildMemberData*))(Il2CppBase() + 0x50CFEA8))(this);
	}
	template <typename T = void> T set_gender(uint32_t value) {
		return ((T (*)(GuildMemberData*, uint32_t))(Il2CppBase() + 0x50CFEB0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GuildMemberData*, bool))(Il2CppBase() + 0x50CFEB8))(this, createIfMissing);
	}

};

}
