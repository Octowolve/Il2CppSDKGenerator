#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PveMpRewardLimitation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PveMpRewardLimitation"));
	}

	template <typename T = uint32_t> T& _last_update_time() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _game_mode() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _left_reward_nums() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _reset_reward_nums() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _item_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _reset_time() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _instance_id() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = uint32_t> T get_last_update_time() {
		return ((T (*)(PveMpRewardLimitation*))(Il2CppBase() + 0x506F8A4))(this);
	}
	template <typename T = void> T set_last_update_time(uint32_t value) {
		return ((T (*)(PveMpRewardLimitation*, uint32_t))(Il2CppBase() + 0x506F8AC))(this, value);
	}
	template <typename T = uint32_t> T get_game_mode() {
		return ((T (*)(PveMpRewardLimitation*))(Il2CppBase() + 0x506F8B4))(this);
	}
	template <typename T = void> T set_game_mode(uint32_t value) {
		return ((T (*)(PveMpRewardLimitation*, uint32_t))(Il2CppBase() + 0x506F8BC))(this, value);
	}
	template <typename T = uint32_t> T get_left_reward_nums() {
		return ((T (*)(PveMpRewardLimitation*))(Il2CppBase() + 0x506F8C4))(this);
	}
	template <typename T = void> T set_left_reward_nums(uint32_t value) {
		return ((T (*)(PveMpRewardLimitation*, uint32_t))(Il2CppBase() + 0x506F8CC))(this, value);
	}
	template <typename T = uint32_t> T get_reset_reward_nums() {
		return ((T (*)(PveMpRewardLimitation*))(Il2CppBase() + 0x506F8D4))(this);
	}
	template <typename T = void> T set_reset_reward_nums(uint32_t value) {
		return ((T (*)(PveMpRewardLimitation*, uint32_t))(Il2CppBase() + 0x506F8DC))(this, value);
	}
	template <typename T = uint32_t> T get_item_id() {
		return ((T (*)(PveMpRewardLimitation*))(Il2CppBase() + 0x506F8E4))(this);
	}
	template <typename T = void> T set_item_id(uint32_t value) {
		return ((T (*)(PveMpRewardLimitation*, uint32_t))(Il2CppBase() + 0x506F8EC))(this, value);
	}
	template <typename T = uint32_t> T get_reset_time() {
		return ((T (*)(PveMpRewardLimitation*))(Il2CppBase() + 0x506F8F4))(this);
	}
	template <typename T = void> T set_reset_time(uint32_t value) {
		return ((T (*)(PveMpRewardLimitation*, uint32_t))(Il2CppBase() + 0x506F8FC))(this, value);
	}
	template <typename T = uint32_t> T get_instance_id() {
		return ((T (*)(PveMpRewardLimitation*))(Il2CppBase() + 0x506F904))(this);
	}
	template <typename T = void> T set_instance_id(uint32_t value) {
		return ((T (*)(PveMpRewardLimitation*, uint32_t))(Il2CppBase() + 0x506F90C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PveMpRewardLimitation*, bool))(Il2CppBase() + 0x506F914))(this, createIfMissing);
	}

};

}
