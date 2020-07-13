#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ChallengeInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ChallengeInfo"));
	}

	template <typename T = int32_t> T& _chapter_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _section_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _week_max_score() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _history_max_score() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _day_play_count() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _total_play_count() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _day_play_count_buy_times() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _day_reborn_times() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& _day_play_count_reset_time() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& _week_max_score_reset_time() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint64_t> T& _play_time() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint32_t> T& _gain_exp() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& _gain_gold() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uint32_t> T& _gain_diamond() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint32_t> T& _gain_game_point() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uint32_t> T& _gain_score() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& _week_max_round_id() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& _history_max_round_id() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uint32_t> T& _history_max_kill() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& _game_had_start() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& _current_round_id() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uint32_t> T& _gain_phase_score() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uint64_t> T& _random_value() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& _is_skip() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x74);
	}

	template <typename T = int32_t> T get_chapter_id() {
		return ((T (*)(ChallengeInfo*))(Il2CppBase() + 0x516E214))(this);
	}
	template <typename T = void> T set_chapter_id(int32_t value) {
		return ((T (*)(ChallengeInfo*, int32_t))(Il2CppBase() + 0x516E21C))(this, value);
	}
	template <typename T = int32_t> T get_section_id() {
		return ((T (*)(ChallengeInfo*))(Il2CppBase() + 0x516E224))(this);
	}
	template <typename T = void> T set_section_id(int32_t value) {
		return ((T (*)(ChallengeInfo*, int32_t))(Il2CppBase() + 0x516E22C))(this, value);
	}
	template <typename T = int32_t> T get_week_max_score() {
		return ((T (*)(ChallengeInfo*))(Il2CppBase() + 0x516E234))(this);
	}
	template <typename T = void> T set_week_max_score(int32_t value) {
		return ((T (*)(ChallengeInfo*, int32_t))(Il2CppBase() + 0x516E23C))(this, value);
	}
	template <typename T = int32_t> T get_history_max_score() {
		return ((T (*)(ChallengeInfo*))(Il2CppBase() + 0x516E244))(this);
	}
	template <typename T = void> T set_history_max_score(int32_t value) {
		return ((T (*)(ChallengeInfo*, int32_t))(Il2CppBase() + 0x516E24C))(this, value);
	}
	template <typename T = int32_t> T get_day_play_count() {
		return ((T (*)(ChallengeInfo*))(Il2CppBase() + 0x516E254))(this);
	}
	template <typename T = void> T set_day_play_count(int32_t value) {
		return ((T (*)(ChallengeInfo*, int32_t))(Il2CppBase() + 0x516E25C))(this, value);
	}
	template <typename T = int32_t> T get_total_play_count() {
		return ((T (*)(ChallengeInfo*))(Il2CppBase() + 0x516E264))(this);
	}
	template <typename T = void> T set_total_play_count(int32_t value) {
		return ((T (*)(ChallengeInfo*, int32_t))(Il2CppBase() + 0x516E26C))(this, value);
	}
	template <typename T = int32_t> T get_day_play_count_buy_times() {
		return ((T (*)(ChallengeInfo*))(Il2CppBase() + 0x516E274))(this);
	}
	template <typename T = void> T set_day_play_count_buy_times(int32_t value) {
		return ((T (*)(ChallengeInfo*, int32_t))(Il2CppBase() + 0x516E27C))(this, value);
	}
	template <typename T = int32_t> T get_day_reborn_times() {
		return ((T (*)(ChallengeInfo*))(Il2CppBase() + 0x516E284))(this);
	}
	template <typename T = void> T set_day_reborn_times(int32_t value) {
		return ((T (*)(ChallengeInfo*, int32_t))(Il2CppBase() + 0x516E28C))(this, value);
	}
	template <typename T = uint32_t> T get_day_play_count_reset_time() {
		return ((T (*)(ChallengeInfo*))(Il2CppBase() + 0x516E294))(this);
	}
	template <typename T = void> T set_day_play_count_reset_time(uint32_t value) {
		return ((T (*)(ChallengeInfo*, uint32_t))(Il2CppBase() + 0x516E29C))(this, value);
	}
	template <typename T = uint32_t> T get_week_max_score_reset_time() {
		return ((T (*)(ChallengeInfo*))(Il2CppBase() + 0x516E2A4))(this);
	}
	template <typename T = void> T set_week_max_score_reset_time(uint32_t value) {
		return ((T (*)(ChallengeInfo*, uint32_t))(Il2CppBase() + 0x516E2AC))(this, value);
	}
	template <typename T = uint64_t> T get_play_time() {
		return ((T (*)(ChallengeInfo*))(Il2CppBase() + 0x516E2B4))(this);
	}
	template <typename T = void> T set_play_time(uint64_t value) {
		return ((T (*)(ChallengeInfo*, uint64_t))(Il2CppBase() + 0x516E2BC))(this, value);
	}
	template <typename T = uint32_t> T get_gain_exp() {
		return ((T (*)(ChallengeInfo*))(Il2CppBase() + 0x516E2CC))(this);
	}
	template <typename T = void> T set_gain_exp(uint32_t value) {
		return ((T (*)(ChallengeInfo*, uint32_t))(Il2CppBase() + 0x516E2D4))(this, value);
	}
	template <typename T = uint32_t> T get_gain_gold() {
		return ((T (*)(ChallengeInfo*))(Il2CppBase() + 0x516E2DC))(this);
	}
	template <typename T = void> T set_gain_gold(uint32_t value) {
		return ((T (*)(ChallengeInfo*, uint32_t))(Il2CppBase() + 0x516E2E4))(this, value);
	}
	template <typename T = uint32_t> T get_gain_diamond() {
		return ((T (*)(ChallengeInfo*))(Il2CppBase() + 0x516E2EC))(this);
	}
	template <typename T = void> T set_gain_diamond(uint32_t value) {
		return ((T (*)(ChallengeInfo*, uint32_t))(Il2CppBase() + 0x516E2F4))(this, value);
	}
	template <typename T = uint32_t> T get_gain_game_point() {
		return ((T (*)(ChallengeInfo*))(Il2CppBase() + 0x516E2FC))(this);
	}
	template <typename T = void> T set_gain_game_point(uint32_t value) {
		return ((T (*)(ChallengeInfo*, uint32_t))(Il2CppBase() + 0x516E304))(this, value);
	}
	template <typename T = uint32_t> T get_gain_score() {
		return ((T (*)(ChallengeInfo*))(Il2CppBase() + 0x516E30C))(this);
	}
	template <typename T = void> T set_gain_score(uint32_t value) {
		return ((T (*)(ChallengeInfo*, uint32_t))(Il2CppBase() + 0x516E314))(this, value);
	}
	template <typename T = int32_t> T get_week_max_round_id() {
		return ((T (*)(ChallengeInfo*))(Il2CppBase() + 0x516E31C))(this);
	}
	template <typename T = void> T set_week_max_round_id(int32_t value) {
		return ((T (*)(ChallengeInfo*, int32_t))(Il2CppBase() + 0x516E324))(this, value);
	}
	template <typename T = int32_t> T get_history_max_round_id() {
		return ((T (*)(ChallengeInfo*))(Il2CppBase() + 0x516E32C))(this);
	}
	template <typename T = void> T set_history_max_round_id(int32_t value) {
		return ((T (*)(ChallengeInfo*, int32_t))(Il2CppBase() + 0x516E334))(this, value);
	}
	template <typename T = uint32_t> T get_history_max_kill() {
		return ((T (*)(ChallengeInfo*))(Il2CppBase() + 0x516E33C))(this);
	}
	template <typename T = void> T set_history_max_kill(uint32_t value) {
		return ((T (*)(ChallengeInfo*, uint32_t))(Il2CppBase() + 0x516E344))(this, value);
	}
	template <typename T = bool> T get_game_had_start() {
		return ((T (*)(ChallengeInfo*))(Il2CppBase() + 0x516E34C))(this);
	}
	template <typename T = void> T set_game_had_start(bool value) {
		return ((T (*)(ChallengeInfo*, bool))(Il2CppBase() + 0x516E354))(this, value);
	}
	template <typename T = int32_t> T get_current_round_id() {
		return ((T (*)(ChallengeInfo*))(Il2CppBase() + 0x516E35C))(this);
	}
	template <typename T = void> T set_current_round_id(int32_t value) {
		return ((T (*)(ChallengeInfo*, int32_t))(Il2CppBase() + 0x516E364))(this, value);
	}
	template <typename T = uint32_t> T get_gain_phase_score() {
		return ((T (*)(ChallengeInfo*))(Il2CppBase() + 0x516E36C))(this);
	}
	template <typename T = void> T set_gain_phase_score(uint32_t value) {
		return ((T (*)(ChallengeInfo*, uint32_t))(Il2CppBase() + 0x516E374))(this, value);
	}
	template <typename T = uint64_t> T get_random_value() {
		return ((T (*)(ChallengeInfo*))(Il2CppBase() + 0x516E37C))(this);
	}
	template <typename T = void> T set_random_value(uint64_t value) {
		return ((T (*)(ChallengeInfo*, uint64_t))(Il2CppBase() + 0x516E384))(this, value);
	}
	template <typename T = bool> T get_is_skip() {
		return ((T (*)(ChallengeInfo*))(Il2CppBase() + 0x516E394))(this);
	}
	template <typename T = void> T set_is_skip(bool value) {
		return ((T (*)(ChallengeInfo*, bool))(Il2CppBase() + 0x516E39C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ChallengeInfo*, bool))(Il2CppBase() + 0x516E3A4))(this, createIfMissing);
	}

};

}
