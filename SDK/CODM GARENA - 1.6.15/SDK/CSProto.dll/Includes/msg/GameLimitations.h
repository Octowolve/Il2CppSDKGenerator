#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GameLimitations
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GameLimitations"));
	}

	template <typename T = uint32_t> T& _game_type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _game_mode() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _map_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _level_id() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _play_count_used() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _diamondcost_play_count_gained() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _reset_play_count_times() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& _gsp_reward_count_used() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& _diamondcost_gsp_reward_count_gained() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& _reset_gsp_reward_count_times() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = uint32_t> T get_game_type() {
		return ((T (*)(GameLimitations*))(Il2CppBase() + 0x50CCB4C))(this);
	}
	template <typename T = void> T set_game_type(uint32_t value) {
		return ((T (*)(GameLimitations*, uint32_t))(Il2CppBase() + 0x50CCB54))(this, value);
	}
	template <typename T = uint32_t> T get_game_mode() {
		return ((T (*)(GameLimitations*))(Il2CppBase() + 0x50CCB5C))(this);
	}
	template <typename T = void> T set_game_mode(uint32_t value) {
		return ((T (*)(GameLimitations*, uint32_t))(Il2CppBase() + 0x50CCB64))(this, value);
	}
	template <typename T = uint32_t> T get_map_id() {
		return ((T (*)(GameLimitations*))(Il2CppBase() + 0x50CCB6C))(this);
	}
	template <typename T = void> T set_map_id(uint32_t value) {
		return ((T (*)(GameLimitations*, uint32_t))(Il2CppBase() + 0x50CCB74))(this, value);
	}
	template <typename T = uint32_t> T get_level_id() {
		return ((T (*)(GameLimitations*))(Il2CppBase() + 0x50CCB7C))(this);
	}
	template <typename T = void> T set_level_id(uint32_t value) {
		return ((T (*)(GameLimitations*, uint32_t))(Il2CppBase() + 0x50CCB84))(this, value);
	}
	template <typename T = uint32_t> T get_play_count_used() {
		return ((T (*)(GameLimitations*))(Il2CppBase() + 0x50CCB8C))(this);
	}
	template <typename T = void> T set_play_count_used(uint32_t value) {
		return ((T (*)(GameLimitations*, uint32_t))(Il2CppBase() + 0x50CCB94))(this, value);
	}
	template <typename T = uint32_t> T get_diamondcost_play_count_gained() {
		return ((T (*)(GameLimitations*))(Il2CppBase() + 0x50CCB9C))(this);
	}
	template <typename T = void> T set_diamondcost_play_count_gained(uint32_t value) {
		return ((T (*)(GameLimitations*, uint32_t))(Il2CppBase() + 0x50CCBA4))(this, value);
	}
	template <typename T = uint32_t> T get_reset_play_count_times() {
		return ((T (*)(GameLimitations*))(Il2CppBase() + 0x50CCBAC))(this);
	}
	template <typename T = void> T set_reset_play_count_times(uint32_t value) {
		return ((T (*)(GameLimitations*, uint32_t))(Il2CppBase() + 0x50CCBB4))(this, value);
	}
	template <typename T = uint32_t> T get_gsp_reward_count_used() {
		return ((T (*)(GameLimitations*))(Il2CppBase() + 0x50CCBBC))(this);
	}
	template <typename T = void> T set_gsp_reward_count_used(uint32_t value) {
		return ((T (*)(GameLimitations*, uint32_t))(Il2CppBase() + 0x50CCBC4))(this, value);
	}
	template <typename T = uint32_t> T get_diamondcost_gsp_reward_count_gained() {
		return ((T (*)(GameLimitations*))(Il2CppBase() + 0x50CCBCC))(this);
	}
	template <typename T = void> T set_diamondcost_gsp_reward_count_gained(uint32_t value) {
		return ((T (*)(GameLimitations*, uint32_t))(Il2CppBase() + 0x50CCBD4))(this, value);
	}
	template <typename T = uint32_t> T get_reset_gsp_reward_count_times() {
		return ((T (*)(GameLimitations*))(Il2CppBase() + 0x50CCBDC))(this);
	}
	template <typename T = void> T set_reset_gsp_reward_count_times(uint32_t value) {
		return ((T (*)(GameLimitations*, uint32_t))(Il2CppBase() + 0x50CCBE4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GameLimitations*, bool))(Il2CppBase() + 0x50CCBEC))(this, createIfMissing);
	}

};

}
