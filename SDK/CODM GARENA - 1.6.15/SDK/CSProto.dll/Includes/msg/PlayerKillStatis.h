#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PlayerKillStatis
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PlayerKillStatis"));
	}

	template <typename T = uint32_t> T& _item_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _kill_dist() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _player_pos() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _player_move_state() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _fire_ads_type() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _head_shot() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uint32_t> T get_item_id() {
		return ((T (*)(PlayerKillStatis*))(Il2CppBase() + 0x4EA89F4))(this);
	}
	template <typename T = void> T set_item_id(uint32_t value) {
		return ((T (*)(PlayerKillStatis*, uint32_t))(Il2CppBase() + 0x4EA89FC))(this, value);
	}
	template <typename T = uint32_t> T get_kill_dist() {
		return ((T (*)(PlayerKillStatis*))(Il2CppBase() + 0x4EA8A04))(this);
	}
	template <typename T = void> T set_kill_dist(uint32_t value) {
		return ((T (*)(PlayerKillStatis*, uint32_t))(Il2CppBase() + 0x4EA8A0C))(this, value);
	}
	template <typename T = uintptr_t> T get_player_pos() {
		return ((T (*)(PlayerKillStatis*))(Il2CppBase() + 0x4EA8A14))(this);
	}
	template <typename T = void> T set_player_pos(uintptr_t value) {
		return ((T (*)(PlayerKillStatis*, uintptr_t))(Il2CppBase() + 0x4EA8A1C))(this, value);
	}
	template <typename T = uint32_t> T get_player_move_state() {
		return ((T (*)(PlayerKillStatis*))(Il2CppBase() + 0x4EA8A24))(this);
	}
	template <typename T = void> T set_player_move_state(uint32_t value) {
		return ((T (*)(PlayerKillStatis*, uint32_t))(Il2CppBase() + 0x4EA8A2C))(this, value);
	}
	template <typename T = uint32_t> T get_fire_ads_type() {
		return ((T (*)(PlayerKillStatis*))(Il2CppBase() + 0x4EA8A34))(this);
	}
	template <typename T = void> T set_fire_ads_type(uint32_t value) {
		return ((T (*)(PlayerKillStatis*, uint32_t))(Il2CppBase() + 0x4EA8A3C))(this, value);
	}
	template <typename T = uint32_t> T get_head_shot() {
		return ((T (*)(PlayerKillStatis*))(Il2CppBase() + 0x4EA8A44))(this);
	}
	template <typename T = void> T set_head_shot(uint32_t value) {
		return ((T (*)(PlayerKillStatis*, uint32_t))(Il2CppBase() + 0x4EA8A4C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PlayerKillStatis*, bool))(Il2CppBase() + 0x4EA8A54))(this, createIfMissing);
	}

};

}
