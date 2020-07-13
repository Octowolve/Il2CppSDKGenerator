#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ApvpCampGameStateInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ApvpCampGameStateInfo"));
	}

	template <typename T = uint32_t> T& _times_win() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _times_lose() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _max_win_streak() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _win_streak() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _total_game_times() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _player_score() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _player_times_kill() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& _player_times_be_killed() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& _ai_score() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& _ai_times_kill() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint32_t> T& _ai_times_be_killed() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = uint32_t> T get_times_win() {
		return ((T (*)(ApvpCampGameStateInfo*))(Il2CppBase() + 0x510C56C))(this);
	}
	template <typename T = void> T set_times_win(uint32_t value) {
		return ((T (*)(ApvpCampGameStateInfo*, uint32_t))(Il2CppBase() + 0x510C574))(this, value);
	}
	template <typename T = uint32_t> T get_times_lose() {
		return ((T (*)(ApvpCampGameStateInfo*))(Il2CppBase() + 0x510C57C))(this);
	}
	template <typename T = void> T set_times_lose(uint32_t value) {
		return ((T (*)(ApvpCampGameStateInfo*, uint32_t))(Il2CppBase() + 0x510C584))(this, value);
	}
	template <typename T = uint32_t> T get_max_win_streak() {
		return ((T (*)(ApvpCampGameStateInfo*))(Il2CppBase() + 0x510C58C))(this);
	}
	template <typename T = void> T set_max_win_streak(uint32_t value) {
		return ((T (*)(ApvpCampGameStateInfo*, uint32_t))(Il2CppBase() + 0x510C594))(this, value);
	}
	template <typename T = uint32_t> T get_win_streak() {
		return ((T (*)(ApvpCampGameStateInfo*))(Il2CppBase() + 0x510C59C))(this);
	}
	template <typename T = void> T set_win_streak(uint32_t value) {
		return ((T (*)(ApvpCampGameStateInfo*, uint32_t))(Il2CppBase() + 0x510C5A4))(this, value);
	}
	template <typename T = uint32_t> T get_total_game_times() {
		return ((T (*)(ApvpCampGameStateInfo*))(Il2CppBase() + 0x510C5AC))(this);
	}
	template <typename T = void> T set_total_game_times(uint32_t value) {
		return ((T (*)(ApvpCampGameStateInfo*, uint32_t))(Il2CppBase() + 0x510C5B4))(this, value);
	}
	template <typename T = uint32_t> T get_player_score() {
		return ((T (*)(ApvpCampGameStateInfo*))(Il2CppBase() + 0x510C5BC))(this);
	}
	template <typename T = void> T set_player_score(uint32_t value) {
		return ((T (*)(ApvpCampGameStateInfo*, uint32_t))(Il2CppBase() + 0x510C5C4))(this, value);
	}
	template <typename T = uint32_t> T get_player_times_kill() {
		return ((T (*)(ApvpCampGameStateInfo*))(Il2CppBase() + 0x510C5CC))(this);
	}
	template <typename T = void> T set_player_times_kill(uint32_t value) {
		return ((T (*)(ApvpCampGameStateInfo*, uint32_t))(Il2CppBase() + 0x510C5D4))(this, value);
	}
	template <typename T = uint32_t> T get_player_times_be_killed() {
		return ((T (*)(ApvpCampGameStateInfo*))(Il2CppBase() + 0x510C5DC))(this);
	}
	template <typename T = void> T set_player_times_be_killed(uint32_t value) {
		return ((T (*)(ApvpCampGameStateInfo*, uint32_t))(Il2CppBase() + 0x510C5E4))(this, value);
	}
	template <typename T = uint32_t> T get_ai_score() {
		return ((T (*)(ApvpCampGameStateInfo*))(Il2CppBase() + 0x510C5EC))(this);
	}
	template <typename T = void> T set_ai_score(uint32_t value) {
		return ((T (*)(ApvpCampGameStateInfo*, uint32_t))(Il2CppBase() + 0x510C5F4))(this, value);
	}
	template <typename T = uint32_t> T get_ai_times_kill() {
		return ((T (*)(ApvpCampGameStateInfo*))(Il2CppBase() + 0x510C5FC))(this);
	}
	template <typename T = void> T set_ai_times_kill(uint32_t value) {
		return ((T (*)(ApvpCampGameStateInfo*, uint32_t))(Il2CppBase() + 0x510C604))(this, value);
	}
	template <typename T = uint32_t> T get_ai_times_be_killed() {
		return ((T (*)(ApvpCampGameStateInfo*))(Il2CppBase() + 0x510C60C))(this);
	}
	template <typename T = void> T set_ai_times_be_killed(uint32_t value) {
		return ((T (*)(ApvpCampGameStateInfo*, uint32_t))(Il2CppBase() + 0x510C614))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ApvpCampGameStateInfo*, bool))(Il2CppBase() + 0x510C61C))(this, createIfMissing);
	}

};

}
