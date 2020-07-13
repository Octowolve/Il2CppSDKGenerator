#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class LadderScoreInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "LadderScoreInfo"));
	}

	template <typename T = int32_t> T& _ladder_score() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _season_no() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _season_level() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _history_highest_level() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _history_highest_ladder_score() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _history_season_highest_level() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _history_season_highest_ladder_score() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _history_season_level_record() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& _task_daily_prize_time() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _hidden_score() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& _today_add() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& _last_write_time() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uint32_t> T& _drop_timestamp() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& _today_drop_times() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& _level_game_times() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _promotion_info() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uint32_t> T& _total_game_times() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x4C);
	}

	template <typename T = int32_t> T get_ladder_score() {
		return ((T (*)(LadderScoreInfo*))(Il2CppBase() + 0x50D0EEC))(this);
	}
	template <typename T = void> T set_ladder_score(int32_t value) {
		return ((T (*)(LadderScoreInfo*, int32_t))(Il2CppBase() + 0x50D0EF4))(this, value);
	}
	template <typename T = int32_t> T get_season_no() {
		return ((T (*)(LadderScoreInfo*))(Il2CppBase() + 0x50D0EFC))(this);
	}
	template <typename T = void> T set_season_no(int32_t value) {
		return ((T (*)(LadderScoreInfo*, int32_t))(Il2CppBase() + 0x50D0F04))(this, value);
	}
	template <typename T = int32_t> T get_season_level() {
		return ((T (*)(LadderScoreInfo*))(Il2CppBase() + 0x50D0F0C))(this);
	}
	template <typename T = void> T set_season_level(int32_t value) {
		return ((T (*)(LadderScoreInfo*, int32_t))(Il2CppBase() + 0x50D0F14))(this, value);
	}
	template <typename T = int32_t> T get_history_highest_level() {
		return ((T (*)(LadderScoreInfo*))(Il2CppBase() + 0x50D0F1C))(this);
	}
	template <typename T = void> T set_history_highest_level(int32_t value) {
		return ((T (*)(LadderScoreInfo*, int32_t))(Il2CppBase() + 0x50D0F24))(this, value);
	}
	template <typename T = uint32_t> T get_history_highest_ladder_score() {
		return ((T (*)(LadderScoreInfo*))(Il2CppBase() + 0x50D0F2C))(this);
	}
	template <typename T = void> T set_history_highest_ladder_score(uint32_t value) {
		return ((T (*)(LadderScoreInfo*, uint32_t))(Il2CppBase() + 0x50D0F34))(this, value);
	}
	template <typename T = int32_t> T get_history_season_highest_level() {
		return ((T (*)(LadderScoreInfo*))(Il2CppBase() + 0x50D0F3C))(this);
	}
	template <typename T = void> T set_history_season_highest_level(int32_t value) {
		return ((T (*)(LadderScoreInfo*, int32_t))(Il2CppBase() + 0x50D0F44))(this, value);
	}
	template <typename T = int32_t> T get_history_season_highest_ladder_score() {
		return ((T (*)(LadderScoreInfo*))(Il2CppBase() + 0x50D0F4C))(this);
	}
	template <typename T = void> T set_history_season_highest_ladder_score(int32_t value) {
		return ((T (*)(LadderScoreInfo*, int32_t))(Il2CppBase() + 0x50D0F54))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_history_season_level_record() {
		return ((T (*)(LadderScoreInfo*))(Il2CppBase() + 0x50D0F5C))(this);
	}
	template <typename T = uint32_t> T get_task_daily_prize_time() {
		return ((T (*)(LadderScoreInfo*))(Il2CppBase() + 0x50D0F64))(this);
	}
	template <typename T = void> T set_task_daily_prize_time(uint32_t value) {
		return ((T (*)(LadderScoreInfo*, uint32_t))(Il2CppBase() + 0x50D0F6C))(this, value);
	}
	template <typename T = int32_t> T get_hidden_score() {
		return ((T (*)(LadderScoreInfo*))(Il2CppBase() + 0x50D0F74))(this);
	}
	template <typename T = void> T set_hidden_score(int32_t value) {
		return ((T (*)(LadderScoreInfo*, int32_t))(Il2CppBase() + 0x50D0F7C))(this, value);
	}
	template <typename T = int32_t> T get_today_add() {
		return ((T (*)(LadderScoreInfo*))(Il2CppBase() + 0x50D0F84))(this);
	}
	template <typename T = void> T set_today_add(int32_t value) {
		return ((T (*)(LadderScoreInfo*, int32_t))(Il2CppBase() + 0x50D0F8C))(this, value);
	}
	template <typename T = int32_t> T get_last_write_time() {
		return ((T (*)(LadderScoreInfo*))(Il2CppBase() + 0x50D0F94))(this);
	}
	template <typename T = void> T set_last_write_time(int32_t value) {
		return ((T (*)(LadderScoreInfo*, int32_t))(Il2CppBase() + 0x50D0F9C))(this, value);
	}
	template <typename T = uint32_t> T get_drop_timestamp() {
		return ((T (*)(LadderScoreInfo*))(Il2CppBase() + 0x50D0FA4))(this);
	}
	template <typename T = void> T set_drop_timestamp(uint32_t value) {
		return ((T (*)(LadderScoreInfo*, uint32_t))(Il2CppBase() + 0x50D0FAC))(this, value);
	}
	template <typename T = int32_t> T get_today_drop_times() {
		return ((T (*)(LadderScoreInfo*))(Il2CppBase() + 0x50D0FB4))(this);
	}
	template <typename T = void> T set_today_drop_times(int32_t value) {
		return ((T (*)(LadderScoreInfo*, int32_t))(Il2CppBase() + 0x50D0FBC))(this, value);
	}
	template <typename T = int32_t> T get_level_game_times() {
		return ((T (*)(LadderScoreInfo*))(Il2CppBase() + 0x50D0FC4))(this);
	}
	template <typename T = void> T set_level_game_times(int32_t value) {
		return ((T (*)(LadderScoreInfo*, int32_t))(Il2CppBase() + 0x50D0FCC))(this, value);
	}
	template <typename T = uintptr_t> T get_promotion_info() {
		return ((T (*)(LadderScoreInfo*))(Il2CppBase() + 0x50D0FD4))(this);
	}
	template <typename T = void> T set_promotion_info(uintptr_t value) {
		return ((T (*)(LadderScoreInfo*, uintptr_t))(Il2CppBase() + 0x50D0FDC))(this, value);
	}
	template <typename T = uint32_t> T get_total_game_times() {
		return ((T (*)(LadderScoreInfo*))(Il2CppBase() + 0x50D0FE4))(this);
	}
	template <typename T = void> T set_total_game_times(uint32_t value) {
		return ((T (*)(LadderScoreInfo*, uint32_t))(Il2CppBase() + 0x50D0FEC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(LadderScoreInfo*, bool))(Il2CppBase() + 0x50D0FF4))(this, createIfMissing);
	}

};

}
