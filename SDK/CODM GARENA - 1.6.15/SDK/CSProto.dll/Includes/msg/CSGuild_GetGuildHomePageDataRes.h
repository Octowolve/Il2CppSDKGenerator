#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGuildGetGuildHomePageDataRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGuild_GetGuildHomePageDataRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _guild_base_data() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _apply_join_list_len() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _member_num() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _max_member_num() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _captain_data() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _vice_captain_datas() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _impeach_time_limit() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& _self_datas() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _max_daily_gold() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint32_t> T& _week_rank() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint32_t> T& _week_permile() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uint32_t> T& _season_rank() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& _season_permile() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uint32_t> T& _next_day_time() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint32_t> T& _next_week_time() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& _has_prize() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& _show_season_prize() {
		return *(T*)((uintptr_t)this + 0x49);
	}
	template <typename T = bool> T& _show_week_prize() {
		return *(T*)((uintptr_t)this + 0x4A);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x4C);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGuildGetGuildHomePageDataRes*))(Il2CppBase() + 0x51DAFC8))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGuildGetGuildHomePageDataRes*, int32_t))(Il2CppBase() + 0x51DAFD0))(this, value);
	}
	template <typename T = uintptr_t> T get_guild_base_data() {
		return ((T (*)(CSGuildGetGuildHomePageDataRes*))(Il2CppBase() + 0x51DAFD8))(this);
	}
	template <typename T = void> T set_guild_base_data(uintptr_t value) {
		return ((T (*)(CSGuildGetGuildHomePageDataRes*, uintptr_t))(Il2CppBase() + 0x51DAFE0))(this, value);
	}
	template <typename T = int32_t> T get_apply_join_list_len() {
		return ((T (*)(CSGuildGetGuildHomePageDataRes*))(Il2CppBase() + 0x51DAFE8))(this);
	}
	template <typename T = void> T set_apply_join_list_len(int32_t value) {
		return ((T (*)(CSGuildGetGuildHomePageDataRes*, int32_t))(Il2CppBase() + 0x51DAFF0))(this, value);
	}
	template <typename T = int32_t> T get_member_num() {
		return ((T (*)(CSGuildGetGuildHomePageDataRes*))(Il2CppBase() + 0x51DAFF8))(this);
	}
	template <typename T = void> T set_member_num(int32_t value) {
		return ((T (*)(CSGuildGetGuildHomePageDataRes*, int32_t))(Il2CppBase() + 0x51DB000))(this, value);
	}
	template <typename T = int32_t> T get_max_member_num() {
		return ((T (*)(CSGuildGetGuildHomePageDataRes*))(Il2CppBase() + 0x51DB008))(this);
	}
	template <typename T = void> T set_max_member_num(int32_t value) {
		return ((T (*)(CSGuildGetGuildHomePageDataRes*, int32_t))(Il2CppBase() + 0x51DB010))(this, value);
	}
	template <typename T = uintptr_t> T get_captain_data() {
		return ((T (*)(CSGuildGetGuildHomePageDataRes*))(Il2CppBase() + 0x51DB018))(this);
	}
	template <typename T = void> T set_captain_data(uintptr_t value) {
		return ((T (*)(CSGuildGetGuildHomePageDataRes*, uintptr_t))(Il2CppBase() + 0x51DB020))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_vice_captain_datas() {
		return ((T (*)(CSGuildGetGuildHomePageDataRes*))(Il2CppBase() + 0x51DB028))(this);
	}
	template <typename T = int32_t> T get_impeach_time_limit() {
		return ((T (*)(CSGuildGetGuildHomePageDataRes*))(Il2CppBase() + 0x51DB030))(this);
	}
	template <typename T = void> T set_impeach_time_limit(int32_t value) {
		return ((T (*)(CSGuildGetGuildHomePageDataRes*, int32_t))(Il2CppBase() + 0x51DB038))(this, value);
	}
	template <typename T = uintptr_t> T get_self_datas() {
		return ((T (*)(CSGuildGetGuildHomePageDataRes*))(Il2CppBase() + 0x51DB040))(this);
	}
	template <typename T = void> T set_self_datas(uintptr_t value) {
		return ((T (*)(CSGuildGetGuildHomePageDataRes*, uintptr_t))(Il2CppBase() + 0x51DB048))(this, value);
	}
	template <typename T = int32_t> T get_max_daily_gold() {
		return ((T (*)(CSGuildGetGuildHomePageDataRes*))(Il2CppBase() + 0x51DB050))(this);
	}
	template <typename T = void> T set_max_daily_gold(int32_t value) {
		return ((T (*)(CSGuildGetGuildHomePageDataRes*, int32_t))(Il2CppBase() + 0x51DB058))(this, value);
	}
	template <typename T = uint32_t> T get_week_rank() {
		return ((T (*)(CSGuildGetGuildHomePageDataRes*))(Il2CppBase() + 0x51DB060))(this);
	}
	template <typename T = void> T set_week_rank(uint32_t value) {
		return ((T (*)(CSGuildGetGuildHomePageDataRes*, uint32_t))(Il2CppBase() + 0x51DB068))(this, value);
	}
	template <typename T = uint32_t> T get_week_permile() {
		return ((T (*)(CSGuildGetGuildHomePageDataRes*))(Il2CppBase() + 0x51DB070))(this);
	}
	template <typename T = void> T set_week_permile(uint32_t value) {
		return ((T (*)(CSGuildGetGuildHomePageDataRes*, uint32_t))(Il2CppBase() + 0x51DB078))(this, value);
	}
	template <typename T = uint32_t> T get_season_rank() {
		return ((T (*)(CSGuildGetGuildHomePageDataRes*))(Il2CppBase() + 0x51DB080))(this);
	}
	template <typename T = void> T set_season_rank(uint32_t value) {
		return ((T (*)(CSGuildGetGuildHomePageDataRes*, uint32_t))(Il2CppBase() + 0x51DB088))(this, value);
	}
	template <typename T = uint32_t> T get_season_permile() {
		return ((T (*)(CSGuildGetGuildHomePageDataRes*))(Il2CppBase() + 0x51DB090))(this);
	}
	template <typename T = void> T set_season_permile(uint32_t value) {
		return ((T (*)(CSGuildGetGuildHomePageDataRes*, uint32_t))(Il2CppBase() + 0x51DB098))(this, value);
	}
	template <typename T = uint32_t> T get_next_day_time() {
		return ((T (*)(CSGuildGetGuildHomePageDataRes*))(Il2CppBase() + 0x51DB0A0))(this);
	}
	template <typename T = void> T set_next_day_time(uint32_t value) {
		return ((T (*)(CSGuildGetGuildHomePageDataRes*, uint32_t))(Il2CppBase() + 0x51DB0A8))(this, value);
	}
	template <typename T = uint32_t> T get_next_week_time() {
		return ((T (*)(CSGuildGetGuildHomePageDataRes*))(Il2CppBase() + 0x51DB0B0))(this);
	}
	template <typename T = void> T set_next_week_time(uint32_t value) {
		return ((T (*)(CSGuildGetGuildHomePageDataRes*, uint32_t))(Il2CppBase() + 0x51DB0B8))(this, value);
	}
	template <typename T = bool> T get_has_prize() {
		return ((T (*)(CSGuildGetGuildHomePageDataRes*))(Il2CppBase() + 0x51DB0C0))(this);
	}
	template <typename T = void> T set_has_prize(bool value) {
		return ((T (*)(CSGuildGetGuildHomePageDataRes*, bool))(Il2CppBase() + 0x51DB0C8))(this, value);
	}
	template <typename T = bool> T get_show_season_prize() {
		return ((T (*)(CSGuildGetGuildHomePageDataRes*))(Il2CppBase() + 0x51DB0D0))(this);
	}
	template <typename T = void> T set_show_season_prize(bool value) {
		return ((T (*)(CSGuildGetGuildHomePageDataRes*, bool))(Il2CppBase() + 0x51DB0D8))(this, value);
	}
	template <typename T = bool> T get_show_week_prize() {
		return ((T (*)(CSGuildGetGuildHomePageDataRes*))(Il2CppBase() + 0x51DB0E0))(this);
	}
	template <typename T = void> T set_show_week_prize(bool value) {
		return ((T (*)(CSGuildGetGuildHomePageDataRes*, bool))(Il2CppBase() + 0x51DB0E8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGuildGetGuildHomePageDataRes*, bool))(Il2CppBase() + 0x51DB0F0))(this, createIfMissing);
	}

};

}
