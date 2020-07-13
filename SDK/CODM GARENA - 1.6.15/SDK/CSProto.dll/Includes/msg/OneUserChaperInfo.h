#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class OneUserChaperInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "OneUserChaperInfo"));
	}

	template <typename T = int32_t> T& _chapter_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _is_open() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint64_t> T& _play_time() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _score_star() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _day_play_count() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _day_reset_count() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _lock_reason() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& _star_content() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _last_reset_time_day_play_count() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& _is_clean_out() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& _history_max_score() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uint32_t> T& _total_play_count() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& _is_had_pass_this_chapter() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& _is_get_lottery() {
		return *(T*)((uintptr_t)this + 0x3D);
	}
	template <typename T = bool> T& _game_had_start() {
		return *(T*)((uintptr_t)this + 0x3E);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = int32_t> T get_chapter_id() {
		return ((T (*)(OneUserChaperInfo*))(Il2CppBase() + 0x4EA5AA4))(this);
	}
	template <typename T = void> T set_chapter_id(int32_t value) {
		return ((T (*)(OneUserChaperInfo*, int32_t))(Il2CppBase() + 0x4EA5AAC))(this, value);
	}
	template <typename T = int32_t> T get_is_open() {
		return ((T (*)(OneUserChaperInfo*))(Il2CppBase() + 0x4EA5AB4))(this);
	}
	template <typename T = void> T set_is_open(int32_t value) {
		return ((T (*)(OneUserChaperInfo*, int32_t))(Il2CppBase() + 0x4EA5ABC))(this, value);
	}
	template <typename T = uint64_t> T get_play_time() {
		return ((T (*)(OneUserChaperInfo*))(Il2CppBase() + 0x4EA5AC4))(this);
	}
	template <typename T = void> T set_play_time(uint64_t value) {
		return ((T (*)(OneUserChaperInfo*, uint64_t))(Il2CppBase() + 0x4EA5ACC))(this, value);
	}
	template <typename T = int32_t> T get_score_star() {
		return ((T (*)(OneUserChaperInfo*))(Il2CppBase() + 0x4EA5ADC))(this);
	}
	template <typename T = void> T set_score_star(int32_t value) {
		return ((T (*)(OneUserChaperInfo*, int32_t))(Il2CppBase() + 0x4EA5AE4))(this, value);
	}
	template <typename T = int32_t> T get_day_play_count() {
		return ((T (*)(OneUserChaperInfo*))(Il2CppBase() + 0x4EA5AEC))(this);
	}
	template <typename T = void> T set_day_play_count(int32_t value) {
		return ((T (*)(OneUserChaperInfo*, int32_t))(Il2CppBase() + 0x4EA5AF4))(this, value);
	}
	template <typename T = int32_t> T get_day_reset_count() {
		return ((T (*)(OneUserChaperInfo*))(Il2CppBase() + 0x4EA5AFC))(this);
	}
	template <typename T = void> T set_day_reset_count(int32_t value) {
		return ((T (*)(OneUserChaperInfo*, int32_t))(Il2CppBase() + 0x4EA5B04))(this, value);
	}
	template <typename T = int32_t> T get_lock_reason() {
		return ((T (*)(OneUserChaperInfo*))(Il2CppBase() + 0x4EA5B0C))(this);
	}
	template <typename T = void> T set_lock_reason(int32_t value) {
		return ((T (*)(OneUserChaperInfo*, int32_t))(Il2CppBase() + 0x4EA5B14))(this, value);
	}
	template <typename T = int32_t> T get_star_content() {
		return ((T (*)(OneUserChaperInfo*))(Il2CppBase() + 0x4EA5B1C))(this);
	}
	template <typename T = void> T set_star_content(int32_t value) {
		return ((T (*)(OneUserChaperInfo*, int32_t))(Il2CppBase() + 0x4EA5B24))(this, value);
	}
	template <typename T = int32_t> T get_last_reset_time_day_play_count() {
		return ((T (*)(OneUserChaperInfo*))(Il2CppBase() + 0x4EA5B2C))(this);
	}
	template <typename T = void> T set_last_reset_time_day_play_count(int32_t value) {
		return ((T (*)(OneUserChaperInfo*, int32_t))(Il2CppBase() + 0x4EA5B34))(this, value);
	}
	template <typename T = int32_t> T get_is_clean_out() {
		return ((T (*)(OneUserChaperInfo*))(Il2CppBase() + 0x4EA5B3C))(this);
	}
	template <typename T = void> T set_is_clean_out(int32_t value) {
		return ((T (*)(OneUserChaperInfo*, int32_t))(Il2CppBase() + 0x4EA5B44))(this, value);
	}
	template <typename T = int32_t> T get_history_max_score() {
		return ((T (*)(OneUserChaperInfo*))(Il2CppBase() + 0x4EA5B4C))(this);
	}
	template <typename T = void> T set_history_max_score(int32_t value) {
		return ((T (*)(OneUserChaperInfo*, int32_t))(Il2CppBase() + 0x4EA5B54))(this, value);
	}
	template <typename T = uint32_t> T get_total_play_count() {
		return ((T (*)(OneUserChaperInfo*))(Il2CppBase() + 0x4EA5B5C))(this);
	}
	template <typename T = void> T set_total_play_count(uint32_t value) {
		return ((T (*)(OneUserChaperInfo*, uint32_t))(Il2CppBase() + 0x4EA5B64))(this, value);
	}
	template <typename T = bool> T get_is_had_pass_this_chapter() {
		return ((T (*)(OneUserChaperInfo*))(Il2CppBase() + 0x4EA5B6C))(this);
	}
	template <typename T = void> T set_is_had_pass_this_chapter(bool value) {
		return ((T (*)(OneUserChaperInfo*, bool))(Il2CppBase() + 0x4EA5B74))(this, value);
	}
	template <typename T = bool> T get_is_get_lottery() {
		return ((T (*)(OneUserChaperInfo*))(Il2CppBase() + 0x4EA5B7C))(this);
	}
	template <typename T = void> T set_is_get_lottery(bool value) {
		return ((T (*)(OneUserChaperInfo*, bool))(Il2CppBase() + 0x4EA5B84))(this, value);
	}
	template <typename T = bool> T get_game_had_start() {
		return ((T (*)(OneUserChaperInfo*))(Il2CppBase() + 0x4EA5B8C))(this);
	}
	template <typename T = void> T set_game_had_start(bool value) {
		return ((T (*)(OneUserChaperInfo*, bool))(Il2CppBase() + 0x4EA5B94))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(OneUserChaperInfo*, bool))(Il2CppBase() + 0x4EA5B9C))(this, createIfMissing);
	}

};

}
