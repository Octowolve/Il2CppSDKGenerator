#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PveLevelInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PveLevelInfo"));
	}

	template <typename T = int32_t> T& _level_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _level_type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _map_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _modifier_id_list() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& _is_locked() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _complete_time() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _chapter_id() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _available_map_id_list() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& _times_win() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _times_lose() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& _top_star() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint32_t> T& _passtask_time() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uint32_t> T& _last_reset_time() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& _pass_round() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uint64_t> T& _total_score() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint32_t> T& _pass_round_count() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint32_t> T& _play_count() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _reward_nums() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uint32_t> T& _last_round_score() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uint32_t> T& _highest_round() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x5C);
	}

	template <typename T = int32_t> T get_level_id() {
		return ((T (*)(PveLevelInfo*))(Il2CppBase() + 0x506F594))(this);
	}
	template <typename T = void> T set_level_id(int32_t value) {
		return ((T (*)(PveLevelInfo*, int32_t))(Il2CppBase() + 0x506F59C))(this, value);
	}
	template <typename T = int32_t> T get_level_type() {
		return ((T (*)(PveLevelInfo*))(Il2CppBase() + 0x506F5A4))(this);
	}
	template <typename T = void> T set_level_type(int32_t value) {
		return ((T (*)(PveLevelInfo*, int32_t))(Il2CppBase() + 0x506F5AC))(this, value);
	}
	template <typename T = uint32_t> T get_map_id() {
		return ((T (*)(PveLevelInfo*))(Il2CppBase() + 0x506F5B4))(this);
	}
	template <typename T = void> T set_map_id(uint32_t value) {
		return ((T (*)(PveLevelInfo*, uint32_t))(Il2CppBase() + 0x506F5BC))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_modifier_id_list() {
		return ((T (*)(PveLevelInfo*))(Il2CppBase() + 0x506F5C4))(this);
	}
	template <typename T = bool> T get_is_locked() {
		return ((T (*)(PveLevelInfo*))(Il2CppBase() + 0x506F5CC))(this);
	}
	template <typename T = void> T set_is_locked(bool value) {
		return ((T (*)(PveLevelInfo*, bool))(Il2CppBase() + 0x506F5D4))(this, value);
	}
	template <typename T = uint32_t> T get_complete_time() {
		return ((T (*)(PveLevelInfo*))(Il2CppBase() + 0x506F5DC))(this);
	}
	template <typename T = void> T set_complete_time(uint32_t value) {
		return ((T (*)(PveLevelInfo*, uint32_t))(Il2CppBase() + 0x506F5E4))(this, value);
	}
	template <typename T = int32_t> T get_chapter_id() {
		return ((T (*)(PveLevelInfo*))(Il2CppBase() + 0x506F5EC))(this);
	}
	template <typename T = void> T set_chapter_id(int32_t value) {
		return ((T (*)(PveLevelInfo*, int32_t))(Il2CppBase() + 0x506F5F4))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_available_map_id_list() {
		return ((T (*)(PveLevelInfo*))(Il2CppBase() + 0x506F5FC))(this);
	}
	template <typename T = int32_t> T get_times_win() {
		return ((T (*)(PveLevelInfo*))(Il2CppBase() + 0x506F604))(this);
	}
	template <typename T = void> T set_times_win(int32_t value) {
		return ((T (*)(PveLevelInfo*, int32_t))(Il2CppBase() + 0x506F60C))(this, value);
	}
	template <typename T = int32_t> T get_times_lose() {
		return ((T (*)(PveLevelInfo*))(Il2CppBase() + 0x506F614))(this);
	}
	template <typename T = void> T set_times_lose(int32_t value) {
		return ((T (*)(PveLevelInfo*, int32_t))(Il2CppBase() + 0x506F61C))(this, value);
	}
	template <typename T = int32_t> T get_top_star() {
		return ((T (*)(PveLevelInfo*))(Il2CppBase() + 0x506F624))(this);
	}
	template <typename T = void> T set_top_star(int32_t value) {
		return ((T (*)(PveLevelInfo*, int32_t))(Il2CppBase() + 0x506F62C))(this, value);
	}
	template <typename T = uint32_t> T get_passtask_time() {
		return ((T (*)(PveLevelInfo*))(Il2CppBase() + 0x506F634))(this);
	}
	template <typename T = void> T set_passtask_time(uint32_t value) {
		return ((T (*)(PveLevelInfo*, uint32_t))(Il2CppBase() + 0x506F63C))(this, value);
	}
	template <typename T = uint32_t> T get_last_reset_time() {
		return ((T (*)(PveLevelInfo*))(Il2CppBase() + 0x506F644))(this);
	}
	template <typename T = void> T set_last_reset_time(uint32_t value) {
		return ((T (*)(PveLevelInfo*, uint32_t))(Il2CppBase() + 0x506F64C))(this, value);
	}
	template <typename T = uint32_t> T get_pass_round() {
		return ((T (*)(PveLevelInfo*))(Il2CppBase() + 0x506F654))(this);
	}
	template <typename T = void> T set_pass_round(uint32_t value) {
		return ((T (*)(PveLevelInfo*, uint32_t))(Il2CppBase() + 0x506F65C))(this, value);
	}
	template <typename T = uint64_t> T get_total_score() {
		return ((T (*)(PveLevelInfo*))(Il2CppBase() + 0x506F664))(this);
	}
	template <typename T = void> T set_total_score(uint64_t value) {
		return ((T (*)(PveLevelInfo*, uint64_t))(Il2CppBase() + 0x506F66C))(this, value);
	}
	template <typename T = uint32_t> T get_pass_round_count() {
		return ((T (*)(PveLevelInfo*))(Il2CppBase() + 0x506F67C))(this);
	}
	template <typename T = void> T set_pass_round_count(uint32_t value) {
		return ((T (*)(PveLevelInfo*, uint32_t))(Il2CppBase() + 0x506F684))(this, value);
	}
	template <typename T = uint32_t> T get_play_count() {
		return ((T (*)(PveLevelInfo*))(Il2CppBase() + 0x506F68C))(this);
	}
	template <typename T = void> T set_play_count(uint32_t value) {
		return ((T (*)(PveLevelInfo*, uint32_t))(Il2CppBase() + 0x506F694))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_reward_nums() {
		return ((T (*)(PveLevelInfo*))(Il2CppBase() + 0x506F69C))(this);
	}
	template <typename T = uint32_t> T get_last_round_score() {
		return ((T (*)(PveLevelInfo*))(Il2CppBase() + 0x506F6A4))(this);
	}
	template <typename T = void> T set_last_round_score(uint32_t value) {
		return ((T (*)(PveLevelInfo*, uint32_t))(Il2CppBase() + 0x506F6AC))(this, value);
	}
	template <typename T = uint32_t> T get_highest_round() {
		return ((T (*)(PveLevelInfo*))(Il2CppBase() + 0x506F6B4))(this);
	}
	template <typename T = void> T set_highest_round(uint32_t value) {
		return ((T (*)(PveLevelInfo*, uint32_t))(Il2CppBase() + 0x506F6BC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PveLevelInfo*, bool))(Il2CppBase() + 0x506F6C4))(this, createIfMissing);
	}

};

}
