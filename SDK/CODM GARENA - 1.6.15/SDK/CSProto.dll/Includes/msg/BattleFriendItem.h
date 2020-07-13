#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class BattleFriendItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "BattleFriendItem"));
	}

	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _score() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _team_id() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _time() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _player_rank() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _kill_times() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& _is_win() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& _death_times() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& _assis_times() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint32_t> T& _map_id() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& _pve_level_id() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uint32_t> T& _team_type() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint64_t> T& _total_damage() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& _is_draw() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x4C);
	}

	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(BattleFriendItem*))(Il2CppBase() + 0x510CA38))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(BattleFriendItem*, uint64_t))(Il2CppBase() + 0x510CA40))(this, value);
	}
	template <typename T = int32_t> T get_score() {
		return ((T (*)(BattleFriendItem*))(Il2CppBase() + 0x510CA50))(this);
	}
	template <typename T = void> T set_score(int32_t value) {
		return ((T (*)(BattleFriendItem*, int32_t))(Il2CppBase() + 0x510CA58))(this, value);
	}
	template <typename T = uint32_t> T get_team_id() {
		return ((T (*)(BattleFriendItem*))(Il2CppBase() + 0x510CA60))(this);
	}
	template <typename T = void> T set_team_id(uint32_t value) {
		return ((T (*)(BattleFriendItem*, uint32_t))(Il2CppBase() + 0x510CA68))(this, value);
	}
	template <typename T = uint32_t> T get_time() {
		return ((T (*)(BattleFriendItem*))(Il2CppBase() + 0x510CA70))(this);
	}
	template <typename T = void> T set_time(uint32_t value) {
		return ((T (*)(BattleFriendItem*, uint32_t))(Il2CppBase() + 0x510CA78))(this, value);
	}
	template <typename T = uint32_t> T get_player_rank() {
		return ((T (*)(BattleFriendItem*))(Il2CppBase() + 0x510CA80))(this);
	}
	template <typename T = void> T set_player_rank(uint32_t value) {
		return ((T (*)(BattleFriendItem*, uint32_t))(Il2CppBase() + 0x510CA88))(this, value);
	}
	template <typename T = uint32_t> T get_kill_times() {
		return ((T (*)(BattleFriendItem*))(Il2CppBase() + 0x510CA90))(this);
	}
	template <typename T = void> T set_kill_times(uint32_t value) {
		return ((T (*)(BattleFriendItem*, uint32_t))(Il2CppBase() + 0x510CA98))(this, value);
	}
	template <typename T = bool> T get_is_win() {
		return ((T (*)(BattleFriendItem*))(Il2CppBase() + 0x510CAA0))(this);
	}
	template <typename T = void> T set_is_win(bool value) {
		return ((T (*)(BattleFriendItem*, bool))(Il2CppBase() + 0x510CAA8))(this, value);
	}
	template <typename T = uint32_t> T get_death_times() {
		return ((T (*)(BattleFriendItem*))(Il2CppBase() + 0x510CAB0))(this);
	}
	template <typename T = void> T set_death_times(uint32_t value) {
		return ((T (*)(BattleFriendItem*, uint32_t))(Il2CppBase() + 0x510CAB8))(this, value);
	}
	template <typename T = uint32_t> T get_assis_times() {
		return ((T (*)(BattleFriendItem*))(Il2CppBase() + 0x510CAC0))(this);
	}
	template <typename T = void> T set_assis_times(uint32_t value) {
		return ((T (*)(BattleFriendItem*, uint32_t))(Il2CppBase() + 0x510CAC8))(this, value);
	}
	template <typename T = uint32_t> T get_map_id() {
		return ((T (*)(BattleFriendItem*))(Il2CppBase() + 0x510CAD0))(this);
	}
	template <typename T = void> T set_map_id(uint32_t value) {
		return ((T (*)(BattleFriendItem*, uint32_t))(Il2CppBase() + 0x510CAD8))(this, value);
	}
	template <typename T = int32_t> T get_pve_level_id() {
		return ((T (*)(BattleFriendItem*))(Il2CppBase() + 0x510CAE0))(this);
	}
	template <typename T = void> T set_pve_level_id(int32_t value) {
		return ((T (*)(BattleFriendItem*, int32_t))(Il2CppBase() + 0x510CAE8))(this, value);
	}
	template <typename T = uint32_t> T get_team_type() {
		return ((T (*)(BattleFriendItem*))(Il2CppBase() + 0x510CAF0))(this);
	}
	template <typename T = void> T set_team_type(uint32_t value) {
		return ((T (*)(BattleFriendItem*, uint32_t))(Il2CppBase() + 0x510CAF8))(this, value);
	}
	template <typename T = uint64_t> T get_total_damage() {
		return ((T (*)(BattleFriendItem*))(Il2CppBase() + 0x510CB00))(this);
	}
	template <typename T = void> T set_total_damage(uint64_t value) {
		return ((T (*)(BattleFriendItem*, uint64_t))(Il2CppBase() + 0x510CB08))(this, value);
	}
	template <typename T = bool> T get_is_draw() {
		return ((T (*)(BattleFriendItem*))(Il2CppBase() + 0x510CB18))(this);
	}
	template <typename T = void> T set_is_draw(bool value) {
		return ((T (*)(BattleFriendItem*, bool))(Il2CppBase() + 0x510CB20))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(BattleFriendItem*, bool))(Il2CppBase() + 0x510CB28))(this, createIfMissing);
	}

};

}
