#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PlayerSimpleModeStat
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PlayerSimpleModeStat"));
	}

	template <typename T = uint32_t> T& _game_mode() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _times_game() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _times_kill() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _times_death() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _times_win() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _game_time() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _times_play_with_friend() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = uint32_t> T get_game_mode() {
		return ((T (*)(PlayerSimpleModeStat*))(Il2CppBase() + 0x4EA96E0))(this);
	}
	template <typename T = void> T set_game_mode(uint32_t value) {
		return ((T (*)(PlayerSimpleModeStat*, uint32_t))(Il2CppBase() + 0x4EA96E8))(this, value);
	}
	template <typename T = uint32_t> T get_times_game() {
		return ((T (*)(PlayerSimpleModeStat*))(Il2CppBase() + 0x4EA96F0))(this);
	}
	template <typename T = void> T set_times_game(uint32_t value) {
		return ((T (*)(PlayerSimpleModeStat*, uint32_t))(Il2CppBase() + 0x4EA96F8))(this, value);
	}
	template <typename T = uint32_t> T get_times_kill() {
		return ((T (*)(PlayerSimpleModeStat*))(Il2CppBase() + 0x4EA9700))(this);
	}
	template <typename T = void> T set_times_kill(uint32_t value) {
		return ((T (*)(PlayerSimpleModeStat*, uint32_t))(Il2CppBase() + 0x4EA9708))(this, value);
	}
	template <typename T = uint32_t> T get_times_death() {
		return ((T (*)(PlayerSimpleModeStat*))(Il2CppBase() + 0x4EA9710))(this);
	}
	template <typename T = void> T set_times_death(uint32_t value) {
		return ((T (*)(PlayerSimpleModeStat*, uint32_t))(Il2CppBase() + 0x4EA9718))(this, value);
	}
	template <typename T = uint32_t> T get_times_win() {
		return ((T (*)(PlayerSimpleModeStat*))(Il2CppBase() + 0x4EA9720))(this);
	}
	template <typename T = void> T set_times_win(uint32_t value) {
		return ((T (*)(PlayerSimpleModeStat*, uint32_t))(Il2CppBase() + 0x4EA9728))(this, value);
	}
	template <typename T = uint32_t> T get_game_time() {
		return ((T (*)(PlayerSimpleModeStat*))(Il2CppBase() + 0x4EA9730))(this);
	}
	template <typename T = void> T set_game_time(uint32_t value) {
		return ((T (*)(PlayerSimpleModeStat*, uint32_t))(Il2CppBase() + 0x4EA9738))(this, value);
	}
	template <typename T = uint32_t> T get_times_play_with_friend() {
		return ((T (*)(PlayerSimpleModeStat*))(Il2CppBase() + 0x4EA9740))(this);
	}
	template <typename T = void> T set_times_play_with_friend(uint32_t value) {
		return ((T (*)(PlayerSimpleModeStat*, uint32_t))(Il2CppBase() + 0x4EA9748))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PlayerSimpleModeStat*, bool))(Il2CppBase() + 0x4EA9750))(this, createIfMissing);
	}

};

}
