#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GuildBaseData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GuildBaseData"));
	}

	template <typename T = uint64_t> T& _guild_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _guild_name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _create_time() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _guild_level() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _guild_exp() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& _join_condition() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _guild_slogan() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _guild_bulletin() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _impeachment_data() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& _label() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _guild_icon() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _local() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& _daily_active() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uint32_t> T& _daily_risk_time() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint32_t> T& _week_active() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uint32_t> T& _week_risk_time() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint32_t> T& _last_week_active() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uint32_t> T& _last_week_rank() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uint32_t> T& _last_week_rank_time() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uint32_t> T& _season_risk_time() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uint32_t> T& _season_active() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uint32_t> T& _last_season_active() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uint32_t> T& _last_season_rank() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uint32_t> T& _last_season_rank_time() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _sns_group_id() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uint32_t> T& _daily_add_exp() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& _country_id() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& _guild_type() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uint32_t> T& _forbid_ugc_type() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uint32_t> T& _forbid_ugc_time() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _forbid_reason() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uint32_t> T& _last_active_time() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x8C);
	}

	template <typename T = uint64_t> T get_guild_id() {
		return ((T (*)(GuildBaseData*))(Il2CppBase() + 0x50CF7D0))(this);
	}
	template <typename T = void> T set_guild_id(uint64_t value) {
		return ((T (*)(GuildBaseData*, uint64_t))(Il2CppBase() + 0x50CF7D8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_guild_name() {
		return ((T (*)(GuildBaseData*))(Il2CppBase() + 0x50CF7E8))(this);
	}
	template <typename T = void> T set_guild_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(GuildBaseData*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x50CF7F0))(this, value);
	}
	template <typename T = uint32_t> T get_create_time() {
		return ((T (*)(GuildBaseData*))(Il2CppBase() + 0x50CF7F8))(this);
	}
	template <typename T = void> T set_create_time(uint32_t value) {
		return ((T (*)(GuildBaseData*, uint32_t))(Il2CppBase() + 0x50CF800))(this, value);
	}
	template <typename T = int32_t> T get_guild_level() {
		return ((T (*)(GuildBaseData*))(Il2CppBase() + 0x50CF808))(this);
	}
	template <typename T = void> T set_guild_level(int32_t value) {
		return ((T (*)(GuildBaseData*, int32_t))(Il2CppBase() + 0x50CF810))(this, value);
	}
	template <typename T = int32_t> T get_guild_exp() {
		return ((T (*)(GuildBaseData*))(Il2CppBase() + 0x50CF818))(this);
	}
	template <typename T = void> T set_guild_exp(int32_t value) {
		return ((T (*)(GuildBaseData*, int32_t))(Il2CppBase() + 0x50CF820))(this, value);
	}
	template <typename T = uintptr_t> T get_join_condition() {
		return ((T (*)(GuildBaseData*))(Il2CppBase() + 0x50CF828))(this);
	}
	template <typename T = void> T set_join_condition(uintptr_t value) {
		return ((T (*)(GuildBaseData*, uintptr_t))(Il2CppBase() + 0x50CF830))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_guild_slogan() {
		return ((T (*)(GuildBaseData*))(Il2CppBase() + 0x50CF838))(this);
	}
	template <typename T = void> T set_guild_slogan(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(GuildBaseData*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x50CF840))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_guild_bulletin() {
		return ((T (*)(GuildBaseData*))(Il2CppBase() + 0x50CF848))(this);
	}
	template <typename T = void> T set_guild_bulletin(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(GuildBaseData*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x50CF850))(this, value);
	}
	template <typename T = uintptr_t> T get_impeachment_data() {
		return ((T (*)(GuildBaseData*))(Il2CppBase() + 0x50CF858))(this);
	}
	template <typename T = void> T set_impeachment_data(uintptr_t value) {
		return ((T (*)(GuildBaseData*, uintptr_t))(Il2CppBase() + 0x50CF860))(this, value);
	}
	template <typename T = uintptr_t> T get_label() {
		return ((T (*)(GuildBaseData*))(Il2CppBase() + 0x50CF868))(this);
	}
	template <typename T = void> T set_label(uintptr_t value) {
		return ((T (*)(GuildBaseData*, uintptr_t))(Il2CppBase() + 0x50CF870))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_guild_icon() {
		return ((T (*)(GuildBaseData*))(Il2CppBase() + 0x50CF878))(this);
	}
	template <typename T = void> T set_guild_icon(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(GuildBaseData*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x50CF880))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_local() {
		return ((T (*)(GuildBaseData*))(Il2CppBase() + 0x50CF888))(this);
	}
	template <typename T = void> T set_local(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(GuildBaseData*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x50CF890))(this, value);
	}
	template <typename T = uint32_t> T get_daily_active() {
		return ((T (*)(GuildBaseData*))(Il2CppBase() + 0x50CF898))(this);
	}
	template <typename T = void> T set_daily_active(uint32_t value) {
		return ((T (*)(GuildBaseData*, uint32_t))(Il2CppBase() + 0x50CF8A0))(this, value);
	}
	template <typename T = uint32_t> T get_daily_risk_time() {
		return ((T (*)(GuildBaseData*))(Il2CppBase() + 0x50CF8A8))(this);
	}
	template <typename T = void> T set_daily_risk_time(uint32_t value) {
		return ((T (*)(GuildBaseData*, uint32_t))(Il2CppBase() + 0x50CF8B0))(this, value);
	}
	template <typename T = uint32_t> T get_week_active() {
		return ((T (*)(GuildBaseData*))(Il2CppBase() + 0x50CF8B8))(this);
	}
	template <typename T = void> T set_week_active(uint32_t value) {
		return ((T (*)(GuildBaseData*, uint32_t))(Il2CppBase() + 0x50CF8C0))(this, value);
	}
	template <typename T = uint32_t> T get_week_risk_time() {
		return ((T (*)(GuildBaseData*))(Il2CppBase() + 0x50CF8C8))(this);
	}
	template <typename T = void> T set_week_risk_time(uint32_t value) {
		return ((T (*)(GuildBaseData*, uint32_t))(Il2CppBase() + 0x50CF8D0))(this, value);
	}
	template <typename T = uint32_t> T get_last_week_active() {
		return ((T (*)(GuildBaseData*))(Il2CppBase() + 0x50CF8D8))(this);
	}
	template <typename T = void> T set_last_week_active(uint32_t value) {
		return ((T (*)(GuildBaseData*, uint32_t))(Il2CppBase() + 0x50CF8E0))(this, value);
	}
	template <typename T = uint32_t> T get_last_week_rank() {
		return ((T (*)(GuildBaseData*))(Il2CppBase() + 0x50CF8E8))(this);
	}
	template <typename T = void> T set_last_week_rank(uint32_t value) {
		return ((T (*)(GuildBaseData*, uint32_t))(Il2CppBase() + 0x50CF8F0))(this, value);
	}
	template <typename T = uint32_t> T get_last_week_rank_time() {
		return ((T (*)(GuildBaseData*))(Il2CppBase() + 0x50CF8F8))(this);
	}
	template <typename T = void> T set_last_week_rank_time(uint32_t value) {
		return ((T (*)(GuildBaseData*, uint32_t))(Il2CppBase() + 0x50CF900))(this, value);
	}
	template <typename T = uint32_t> T get_season_risk_time() {
		return ((T (*)(GuildBaseData*))(Il2CppBase() + 0x50CF908))(this);
	}
	template <typename T = void> T set_season_risk_time(uint32_t value) {
		return ((T (*)(GuildBaseData*, uint32_t))(Il2CppBase() + 0x50CF910))(this, value);
	}
	template <typename T = uint32_t> T get_season_active() {
		return ((T (*)(GuildBaseData*))(Il2CppBase() + 0x50CF918))(this);
	}
	template <typename T = void> T set_season_active(uint32_t value) {
		return ((T (*)(GuildBaseData*, uint32_t))(Il2CppBase() + 0x50CF920))(this, value);
	}
	template <typename T = uint32_t> T get_last_season_active() {
		return ((T (*)(GuildBaseData*))(Il2CppBase() + 0x50CF928))(this);
	}
	template <typename T = void> T set_last_season_active(uint32_t value) {
		return ((T (*)(GuildBaseData*, uint32_t))(Il2CppBase() + 0x50CF930))(this, value);
	}
	template <typename T = uint32_t> T get_last_season_rank() {
		return ((T (*)(GuildBaseData*))(Il2CppBase() + 0x50CF938))(this);
	}
	template <typename T = void> T set_last_season_rank(uint32_t value) {
		return ((T (*)(GuildBaseData*, uint32_t))(Il2CppBase() + 0x50CF940))(this, value);
	}
	template <typename T = uint32_t> T get_last_season_rank_time() {
		return ((T (*)(GuildBaseData*))(Il2CppBase() + 0x50CF948))(this);
	}
	template <typename T = void> T set_last_season_rank_time(uint32_t value) {
		return ((T (*)(GuildBaseData*, uint32_t))(Il2CppBase() + 0x50CF950))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_sns_group_id() {
		return ((T (*)(GuildBaseData*))(Il2CppBase() + 0x50CF958))(this);
	}
	template <typename T = void> T set_sns_group_id(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(GuildBaseData*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x50CF960))(this, value);
	}
	template <typename T = uint32_t> T get_daily_add_exp() {
		return ((T (*)(GuildBaseData*))(Il2CppBase() + 0x50CF968))(this);
	}
	template <typename T = void> T set_daily_add_exp(uint32_t value) {
		return ((T (*)(GuildBaseData*, uint32_t))(Il2CppBase() + 0x50CF970))(this, value);
	}
	template <typename T = int32_t> T get_country_id() {
		return ((T (*)(GuildBaseData*))(Il2CppBase() + 0x50CF978))(this);
	}
	template <typename T = void> T set_country_id(int32_t value) {
		return ((T (*)(GuildBaseData*, int32_t))(Il2CppBase() + 0x50CF980))(this, value);
	}
	template <typename T = int32_t> T get_guild_type() {
		return ((T (*)(GuildBaseData*))(Il2CppBase() + 0x50CF988))(this);
	}
	template <typename T = void> T set_guild_type(int32_t value) {
		return ((T (*)(GuildBaseData*, int32_t))(Il2CppBase() + 0x50CF990))(this, value);
	}
	template <typename T = uint32_t> T get_forbid_ugc_type() {
		return ((T (*)(GuildBaseData*))(Il2CppBase() + 0x50CF998))(this);
	}
	template <typename T = void> T set_forbid_ugc_type(uint32_t value) {
		return ((T (*)(GuildBaseData*, uint32_t))(Il2CppBase() + 0x50CF9A0))(this, value);
	}
	template <typename T = uint32_t> T get_forbid_ugc_time() {
		return ((T (*)(GuildBaseData*))(Il2CppBase() + 0x50CF9A8))(this);
	}
	template <typename T = void> T set_forbid_ugc_time(uint32_t value) {
		return ((T (*)(GuildBaseData*, uint32_t))(Il2CppBase() + 0x50CF9B0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_forbid_reason() {
		return ((T (*)(GuildBaseData*))(Il2CppBase() + 0x50CF9B8))(this);
	}
	template <typename T = void> T set_forbid_reason(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(GuildBaseData*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x50CF9C0))(this, value);
	}
	template <typename T = uint32_t> T get_last_active_time() {
		return ((T (*)(GuildBaseData*))(Il2CppBase() + 0x50CF9C8))(this);
	}
	template <typename T = void> T set_last_active_time(uint32_t value) {
		return ((T (*)(GuildBaseData*, uint32_t))(Il2CppBase() + 0x50CF9D0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GuildBaseData*, bool))(Il2CppBase() + 0x50CF9D8))(this, createIfMissing);
	}

};

}
