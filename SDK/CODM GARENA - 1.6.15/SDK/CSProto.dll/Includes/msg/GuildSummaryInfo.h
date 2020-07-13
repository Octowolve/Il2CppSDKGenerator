#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GuildSummaryInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GuildSummaryInfo"));
	}

	template <typename T = uintptr_t> T& _guild_base_data() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _member_num() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _max_member_num() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _captain_name() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& _captain_pic_info() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint64_t> T& _captain_player_id() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _captain_level() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _friend_info() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint32_t> T& _guild_label() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint32_t> T& _season_rank() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _captain_relation_nick() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& _captain_peak_level() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _relative_friend_info() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& _friend_number() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& _captain_ladder_score() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& _captain_gender() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = uintptr_t> T get_guild_base_data() {
		return ((T (*)(GuildSummaryInfo*))(Il2CppBase() + 0x50D01CC))(this);
	}
	template <typename T = void> T set_guild_base_data(uintptr_t value) {
		return ((T (*)(GuildSummaryInfo*, uintptr_t))(Il2CppBase() + 0x50D01D4))(this, value);
	}
	template <typename T = int32_t> T get_member_num() {
		return ((T (*)(GuildSummaryInfo*))(Il2CppBase() + 0x50D01DC))(this);
	}
	template <typename T = void> T set_member_num(int32_t value) {
		return ((T (*)(GuildSummaryInfo*, int32_t))(Il2CppBase() + 0x50D01E4))(this, value);
	}
	template <typename T = int32_t> T get_max_member_num() {
		return ((T (*)(GuildSummaryInfo*))(Il2CppBase() + 0x50D01EC))(this);
	}
	template <typename T = void> T set_max_member_num(int32_t value) {
		return ((T (*)(GuildSummaryInfo*, int32_t))(Il2CppBase() + 0x50D01F4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_captain_name() {
		return ((T (*)(GuildSummaryInfo*))(Il2CppBase() + 0x50D01FC))(this);
	}
	template <typename T = void> T set_captain_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(GuildSummaryInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x50D0204))(this, value);
	}
	template <typename T = uintptr_t> T get_captain_pic_info() {
		return ((T (*)(GuildSummaryInfo*))(Il2CppBase() + 0x50D020C))(this);
	}
	template <typename T = void> T set_captain_pic_info(uintptr_t value) {
		return ((T (*)(GuildSummaryInfo*, uintptr_t))(Il2CppBase() + 0x50D0214))(this, value);
	}
	template <typename T = uint64_t> T get_captain_player_id() {
		return ((T (*)(GuildSummaryInfo*))(Il2CppBase() + 0x50D021C))(this);
	}
	template <typename T = void> T set_captain_player_id(uint64_t value) {
		return ((T (*)(GuildSummaryInfo*, uint64_t))(Il2CppBase() + 0x50D0224))(this, value);
	}
	template <typename T = int32_t> T get_captain_level() {
		return ((T (*)(GuildSummaryInfo*))(Il2CppBase() + 0x50D0234))(this);
	}
	template <typename T = void> T set_captain_level(int32_t value) {
		return ((T (*)(GuildSummaryInfo*, int32_t))(Il2CppBase() + 0x50D023C))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_friend_info() {
		return ((T (*)(GuildSummaryInfo*))(Il2CppBase() + 0x50D0244))(this);
	}
	template <typename T = uint32_t> T get_guild_label() {
		return ((T (*)(GuildSummaryInfo*))(Il2CppBase() + 0x50D024C))(this);
	}
	template <typename T = void> T set_guild_label(uint32_t value) {
		return ((T (*)(GuildSummaryInfo*, uint32_t))(Il2CppBase() + 0x50D0254))(this, value);
	}
	template <typename T = uint32_t> T get_season_rank() {
		return ((T (*)(GuildSummaryInfo*))(Il2CppBase() + 0x50D025C))(this);
	}
	template <typename T = void> T set_season_rank(uint32_t value) {
		return ((T (*)(GuildSummaryInfo*, uint32_t))(Il2CppBase() + 0x50D0264))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_captain_relation_nick() {
		return ((T (*)(GuildSummaryInfo*))(Il2CppBase() + 0x50D026C))(this);
	}
	template <typename T = void> T set_captain_relation_nick(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(GuildSummaryInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x50D0274))(this, value);
	}
	template <typename T = int32_t> T get_captain_peak_level() {
		return ((T (*)(GuildSummaryInfo*))(Il2CppBase() + 0x50D027C))(this);
	}
	template <typename T = void> T set_captain_peak_level(int32_t value) {
		return ((T (*)(GuildSummaryInfo*, int32_t))(Il2CppBase() + 0x50D0284))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_relative_friend_info() {
		return ((T (*)(GuildSummaryInfo*))(Il2CppBase() + 0x50D028C))(this);
	}
	template <typename T = int32_t> T get_friend_number() {
		return ((T (*)(GuildSummaryInfo*))(Il2CppBase() + 0x50D0294))(this);
	}
	template <typename T = void> T set_friend_number(int32_t value) {
		return ((T (*)(GuildSummaryInfo*, int32_t))(Il2CppBase() + 0x50D029C))(this, value);
	}
	template <typename T = int32_t> T get_captain_ladder_score() {
		return ((T (*)(GuildSummaryInfo*))(Il2CppBase() + 0x50D02A4))(this);
	}
	template <typename T = void> T set_captain_ladder_score(int32_t value) {
		return ((T (*)(GuildSummaryInfo*, int32_t))(Il2CppBase() + 0x50D02AC))(this, value);
	}
	template <typename T = int32_t> T get_captain_gender() {
		return ((T (*)(GuildSummaryInfo*))(Il2CppBase() + 0x50D02B4))(this);
	}
	template <typename T = void> T set_captain_gender(int32_t value) {
		return ((T (*)(GuildSummaryInfo*, int32_t))(Il2CppBase() + 0x50D02BC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GuildSummaryInfo*, bool))(Il2CppBase() + 0x50D02C4))(this, createIfMissing);
	}

};

}
