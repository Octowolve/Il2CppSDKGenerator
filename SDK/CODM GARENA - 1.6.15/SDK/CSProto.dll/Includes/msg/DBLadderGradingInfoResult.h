#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class DBLadderGradingInfoResult
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "DBLadderGradingInfoResult"));
	}

	template <typename T = uint32_t> T& _game_mode() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _score() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _total_game_time() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _times_kill() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _times_be_killed() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _shot_number() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _shot_hit_number() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& _game_result() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = uint32_t> T get_game_mode() {
		return ((T (*)(DBLadderGradingInfoResult*))(Il2CppBase() + 0x51B83E8))(this);
	}
	template <typename T = void> T set_game_mode(uint32_t value) {
		return ((T (*)(DBLadderGradingInfoResult*, uint32_t))(Il2CppBase() + 0x51B83F0))(this, value);
	}
	template <typename T = uint32_t> T get_score() {
		return ((T (*)(DBLadderGradingInfoResult*))(Il2CppBase() + 0x51B83F8))(this);
	}
	template <typename T = void> T set_score(uint32_t value) {
		return ((T (*)(DBLadderGradingInfoResult*, uint32_t))(Il2CppBase() + 0x51B8400))(this, value);
	}
	template <typename T = uint32_t> T get_total_game_time() {
		return ((T (*)(DBLadderGradingInfoResult*))(Il2CppBase() + 0x51B8408))(this);
	}
	template <typename T = void> T set_total_game_time(uint32_t value) {
		return ((T (*)(DBLadderGradingInfoResult*, uint32_t))(Il2CppBase() + 0x51B8410))(this, value);
	}
	template <typename T = uint32_t> T get_times_kill() {
		return ((T (*)(DBLadderGradingInfoResult*))(Il2CppBase() + 0x51B8418))(this);
	}
	template <typename T = void> T set_times_kill(uint32_t value) {
		return ((T (*)(DBLadderGradingInfoResult*, uint32_t))(Il2CppBase() + 0x51B8420))(this, value);
	}
	template <typename T = uint32_t> T get_times_be_killed() {
		return ((T (*)(DBLadderGradingInfoResult*))(Il2CppBase() + 0x51B8428))(this);
	}
	template <typename T = void> T set_times_be_killed(uint32_t value) {
		return ((T (*)(DBLadderGradingInfoResult*, uint32_t))(Il2CppBase() + 0x51B8430))(this, value);
	}
	template <typename T = uint32_t> T get_shot_number() {
		return ((T (*)(DBLadderGradingInfoResult*))(Il2CppBase() + 0x51B8438))(this);
	}
	template <typename T = void> T set_shot_number(uint32_t value) {
		return ((T (*)(DBLadderGradingInfoResult*, uint32_t))(Il2CppBase() + 0x51B8440))(this, value);
	}
	template <typename T = uint32_t> T get_shot_hit_number() {
		return ((T (*)(DBLadderGradingInfoResult*))(Il2CppBase() + 0x51B8448))(this);
	}
	template <typename T = void> T set_shot_hit_number(uint32_t value) {
		return ((T (*)(DBLadderGradingInfoResult*, uint32_t))(Il2CppBase() + 0x51B8450))(this, value);
	}
	template <typename T = uint32_t> T get_game_result() {
		return ((T (*)(DBLadderGradingInfoResult*))(Il2CppBase() + 0x51B8458))(this);
	}
	template <typename T = void> T set_game_result(uint32_t value) {
		return ((T (*)(DBLadderGradingInfoResult*, uint32_t))(Il2CppBase() + 0x51B8460))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(DBLadderGradingInfoResult*, bool))(Il2CppBase() + 0x51B8468))(this, createIfMissing);
	}

};

}
