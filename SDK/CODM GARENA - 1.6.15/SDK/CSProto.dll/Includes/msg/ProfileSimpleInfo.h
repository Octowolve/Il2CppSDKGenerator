#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ProfileSimpleInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ProfileSimpleInfo"));
	}

	template <typename T = uintptr_t> T& _level() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _spvp_level() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _spvp_rate() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _spvp_max_level() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _guild_name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _gsp_like() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _game_nick() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _selected_ach() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& _selected_medal_id() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _pic_info() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& _hide_info() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _guild_icon() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uint32_t> T& _ladder_level() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint32_t> T& _br_ladder_level() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& _is_spvp_grading() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& _is_in_promotion() {
		return *(T*)((uintptr_t)this + 0x49);
	}
	template <typename T = Il2CppList<int32_t>*> T& _selected_medals_list() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _selected_ach_list() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uint32_t> T& _history_highest_level() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uint32_t> T& _br_history_highest_level() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uint32_t> T& _guild_level() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uint64_t> T& _player_guid() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _medals() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uint32_t> T& _history_season_highest_level() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uint32_t> T& _br_history_season_highest_level() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& _login_source() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& _gender() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x7C);
	}

	template <typename T = uintptr_t> T get_level() {
		return ((T (*)(ProfileSimpleInfo*))(Il2CppBase() + 0x506E4A8))(this);
	}
	template <typename T = void> T set_level(uintptr_t value) {
		return ((T (*)(ProfileSimpleInfo*, uintptr_t))(Il2CppBase() + 0x506E4B0))(this, value);
	}
	template <typename T = uint32_t> T get_spvp_level() {
		return ((T (*)(ProfileSimpleInfo*))(Il2CppBase() + 0x506E4B8))(this);
	}
	template <typename T = void> T set_spvp_level(uint32_t value) {
		return ((T (*)(ProfileSimpleInfo*, uint32_t))(Il2CppBase() + 0x506E4C0))(this, value);
	}
	template <typename T = uint32_t> T get_spvp_rate() {
		return ((T (*)(ProfileSimpleInfo*))(Il2CppBase() + 0x506E4C8))(this);
	}
	template <typename T = void> T set_spvp_rate(uint32_t value) {
		return ((T (*)(ProfileSimpleInfo*, uint32_t))(Il2CppBase() + 0x506E4D0))(this, value);
	}
	template <typename T = uint32_t> T get_spvp_max_level() {
		return ((T (*)(ProfileSimpleInfo*))(Il2CppBase() + 0x506E4D8))(this);
	}
	template <typename T = void> T set_spvp_max_level(uint32_t value) {
		return ((T (*)(ProfileSimpleInfo*, uint32_t))(Il2CppBase() + 0x506E4E0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_guild_name() {
		return ((T (*)(ProfileSimpleInfo*))(Il2CppBase() + 0x506E4E8))(this);
	}
	template <typename T = void> T set_guild_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ProfileSimpleInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x506E4F0))(this, value);
	}
	template <typename T = uint32_t> T get_gsp_like() {
		return ((T (*)(ProfileSimpleInfo*))(Il2CppBase() + 0x506E4F8))(this);
	}
	template <typename T = void> T set_gsp_like(uint32_t value) {
		return ((T (*)(ProfileSimpleInfo*, uint32_t))(Il2CppBase() + 0x506E500))(this, value);
	}
	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(ProfileSimpleInfo*))(Il2CppBase() + 0x506E508))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(ProfileSimpleInfo*, uint64_t))(Il2CppBase() + 0x506E510))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_game_nick() {
		return ((T (*)(ProfileSimpleInfo*))(Il2CppBase() + 0x506E520))(this);
	}
	template <typename T = void> T set_game_nick(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ProfileSimpleInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x506E528))(this, value);
	}
	template <typename T = uintptr_t> T get_selected_ach() {
		return ((T (*)(ProfileSimpleInfo*))(Il2CppBase() + 0x506E530))(this);
	}
	template <typename T = void> T set_selected_ach(uintptr_t value) {
		return ((T (*)(ProfileSimpleInfo*, uintptr_t))(Il2CppBase() + 0x506E538))(this, value);
	}
	template <typename T = int32_t> T get_selected_medal_id() {
		return ((T (*)(ProfileSimpleInfo*))(Il2CppBase() + 0x506E540))(this);
	}
	template <typename T = void> T set_selected_medal_id(int32_t value) {
		return ((T (*)(ProfileSimpleInfo*, int32_t))(Il2CppBase() + 0x506E548))(this, value);
	}
	template <typename T = uintptr_t> T get_pic_info() {
		return ((T (*)(ProfileSimpleInfo*))(Il2CppBase() + 0x506E550))(this);
	}
	template <typename T = void> T set_pic_info(uintptr_t value) {
		return ((T (*)(ProfileSimpleInfo*, uintptr_t))(Il2CppBase() + 0x506E558))(this, value);
	}
	template <typename T = bool> T get_hide_info() {
		return ((T (*)(ProfileSimpleInfo*))(Il2CppBase() + 0x506E560))(this);
	}
	template <typename T = void> T set_hide_info(bool value) {
		return ((T (*)(ProfileSimpleInfo*, bool))(Il2CppBase() + 0x506E568))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_guild_icon() {
		return ((T (*)(ProfileSimpleInfo*))(Il2CppBase() + 0x506E570))(this);
	}
	template <typename T = void> T set_guild_icon(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ProfileSimpleInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x506E578))(this, value);
	}
	template <typename T = uint32_t> T get_ladder_level() {
		return ((T (*)(ProfileSimpleInfo*))(Il2CppBase() + 0x506E580))(this);
	}
	template <typename T = void> T set_ladder_level(uint32_t value) {
		return ((T (*)(ProfileSimpleInfo*, uint32_t))(Il2CppBase() + 0x506E588))(this, value);
	}
	template <typename T = uint32_t> T get_br_ladder_level() {
		return ((T (*)(ProfileSimpleInfo*))(Il2CppBase() + 0x506E590))(this);
	}
	template <typename T = void> T set_br_ladder_level(uint32_t value) {
		return ((T (*)(ProfileSimpleInfo*, uint32_t))(Il2CppBase() + 0x506E598))(this, value);
	}
	template <typename T = bool> T get_is_spvp_grading() {
		return ((T (*)(ProfileSimpleInfo*))(Il2CppBase() + 0x506E5A0))(this);
	}
	template <typename T = void> T set_is_spvp_grading(bool value) {
		return ((T (*)(ProfileSimpleInfo*, bool))(Il2CppBase() + 0x506E5A8))(this, value);
	}
	template <typename T = bool> T get_is_in_promotion() {
		return ((T (*)(ProfileSimpleInfo*))(Il2CppBase() + 0x506E5B0))(this);
	}
	template <typename T = void> T set_is_in_promotion(bool value) {
		return ((T (*)(ProfileSimpleInfo*, bool))(Il2CppBase() + 0x506E5B8))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_selected_medals_list() {
		return ((T (*)(ProfileSimpleInfo*))(Il2CppBase() + 0x506E5C0))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_selected_ach_list() {
		return ((T (*)(ProfileSimpleInfo*))(Il2CppBase() + 0x506E5C8))(this);
	}
	template <typename T = uint32_t> T get_history_highest_level() {
		return ((T (*)(ProfileSimpleInfo*))(Il2CppBase() + 0x506E5D0))(this);
	}
	template <typename T = void> T set_history_highest_level(uint32_t value) {
		return ((T (*)(ProfileSimpleInfo*, uint32_t))(Il2CppBase() + 0x506E5D8))(this, value);
	}
	template <typename T = uint32_t> T get_br_history_highest_level() {
		return ((T (*)(ProfileSimpleInfo*))(Il2CppBase() + 0x506E5E0))(this);
	}
	template <typename T = void> T set_br_history_highest_level(uint32_t value) {
		return ((T (*)(ProfileSimpleInfo*, uint32_t))(Il2CppBase() + 0x506E5E8))(this, value);
	}
	template <typename T = uint32_t> T get_guild_level() {
		return ((T (*)(ProfileSimpleInfo*))(Il2CppBase() + 0x506E5F0))(this);
	}
	template <typename T = void> T set_guild_level(uint32_t value) {
		return ((T (*)(ProfileSimpleInfo*, uint32_t))(Il2CppBase() + 0x506E5F8))(this, value);
	}
	template <typename T = uint64_t> T get_player_guid() {
		return ((T (*)(ProfileSimpleInfo*))(Il2CppBase() + 0x506E600))(this);
	}
	template <typename T = void> T set_player_guid(uint64_t value) {
		return ((T (*)(ProfileSimpleInfo*, uint64_t))(Il2CppBase() + 0x506E608))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_medals() {
		return ((T (*)(ProfileSimpleInfo*))(Il2CppBase() + 0x506E618))(this);
	}
	template <typename T = uint32_t> T get_history_season_highest_level() {
		return ((T (*)(ProfileSimpleInfo*))(Il2CppBase() + 0x506E620))(this);
	}
	template <typename T = void> T set_history_season_highest_level(uint32_t value) {
		return ((T (*)(ProfileSimpleInfo*, uint32_t))(Il2CppBase() + 0x506E628))(this, value);
	}
	template <typename T = uint32_t> T get_br_history_season_highest_level() {
		return ((T (*)(ProfileSimpleInfo*))(Il2CppBase() + 0x506E630))(this);
	}
	template <typename T = void> T set_br_history_season_highest_level(uint32_t value) {
		return ((T (*)(ProfileSimpleInfo*, uint32_t))(Il2CppBase() + 0x506E638))(this, value);
	}
	template <typename T = int32_t> T get_login_source() {
		return ((T (*)(ProfileSimpleInfo*))(Il2CppBase() + 0x506E640))(this);
	}
	template <typename T = void> T set_login_source(int32_t value) {
		return ((T (*)(ProfileSimpleInfo*, int32_t))(Il2CppBase() + 0x506E648))(this, value);
	}
	template <typename T = int32_t> T get_gender() {
		return ((T (*)(ProfileSimpleInfo*))(Il2CppBase() + 0x506E650))(this);
	}
	template <typename T = void> T set_gender(int32_t value) {
		return ((T (*)(ProfileSimpleInfo*, int32_t))(Il2CppBase() + 0x506E658))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ProfileSimpleInfo*, bool))(Il2CppBase() + 0x506E660))(this, createIfMissing);
	}

};

}
