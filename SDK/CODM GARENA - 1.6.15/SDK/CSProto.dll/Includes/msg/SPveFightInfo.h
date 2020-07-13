#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class SPveFightInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "SPveFightInfo"));
	}

	template <typename T = uint32_t> T& _player_hp_count() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _player_final_hp_count() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _player_recover_hp_count() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _player_damage_hp_count() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _player_damage_hp_max() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _player_damage_hp_min() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _player_damage_hp_total() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& _monster_damage_count() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& _monster_damage_hp_max() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& _boss_damage_count() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint32_t> T& _boss_damage_hp_max() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint32_t> T& _normal_move_speed_max() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uint32_t> T& _second_move_distance_max() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& _round_time_min() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _weapon_list() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint32_t> T& _monster_init_count() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uint32_t> T& _monster_kill_count() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint32_t> T& _random_value() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uint32_t> T& _monster_headshot_count() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uint32_t> T& _can_attack_count() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uint32_t> T& _monster_collider_radius_max() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uint32_t> T& _monster_collider_height_max() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uint32_t> T& _boss_collider_radius_max() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uint32_t> T& _boss_collider_height_max() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uint32_t> T& _player_collider_radius_min() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uint32_t> T& _player_collider_height_min() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _skill_list() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x74);
	}

	template <typename T = uint32_t> T get_player_hp_count() {
		return ((T (*)(SPveFightInfo*))(Il2CppBase() + 0x51A8394))(this);
	}
	template <typename T = void> T set_player_hp_count(uint32_t value) {
		return ((T (*)(SPveFightInfo*, uint32_t))(Il2CppBase() + 0x51A839C))(this, value);
	}
	template <typename T = int32_t> T get_player_final_hp_count() {
		return ((T (*)(SPveFightInfo*))(Il2CppBase() + 0x51A83A4))(this);
	}
	template <typename T = void> T set_player_final_hp_count(int32_t value) {
		return ((T (*)(SPveFightInfo*, int32_t))(Il2CppBase() + 0x51A83AC))(this, value);
	}
	template <typename T = uint32_t> T get_player_recover_hp_count() {
		return ((T (*)(SPveFightInfo*))(Il2CppBase() + 0x51A83B4))(this);
	}
	template <typename T = void> T set_player_recover_hp_count(uint32_t value) {
		return ((T (*)(SPveFightInfo*, uint32_t))(Il2CppBase() + 0x51A83BC))(this, value);
	}
	template <typename T = uint32_t> T get_player_damage_hp_count() {
		return ((T (*)(SPveFightInfo*))(Il2CppBase() + 0x51A83C4))(this);
	}
	template <typename T = void> T set_player_damage_hp_count(uint32_t value) {
		return ((T (*)(SPveFightInfo*, uint32_t))(Il2CppBase() + 0x51A83CC))(this, value);
	}
	template <typename T = uint32_t> T get_player_damage_hp_max() {
		return ((T (*)(SPveFightInfo*))(Il2CppBase() + 0x51A83D4))(this);
	}
	template <typename T = void> T set_player_damage_hp_max(uint32_t value) {
		return ((T (*)(SPveFightInfo*, uint32_t))(Il2CppBase() + 0x51A83DC))(this, value);
	}
	template <typename T = uint32_t> T get_player_damage_hp_min() {
		return ((T (*)(SPveFightInfo*))(Il2CppBase() + 0x51A83E4))(this);
	}
	template <typename T = void> T set_player_damage_hp_min(uint32_t value) {
		return ((T (*)(SPveFightInfo*, uint32_t))(Il2CppBase() + 0x51A83EC))(this, value);
	}
	template <typename T = uint32_t> T get_player_damage_hp_total() {
		return ((T (*)(SPveFightInfo*))(Il2CppBase() + 0x51A83F4))(this);
	}
	template <typename T = void> T set_player_damage_hp_total(uint32_t value) {
		return ((T (*)(SPveFightInfo*, uint32_t))(Il2CppBase() + 0x51A83FC))(this, value);
	}
	template <typename T = uint32_t> T get_monster_damage_count() {
		return ((T (*)(SPveFightInfo*))(Il2CppBase() + 0x51A8404))(this);
	}
	template <typename T = void> T set_monster_damage_count(uint32_t value) {
		return ((T (*)(SPveFightInfo*, uint32_t))(Il2CppBase() + 0x51A840C))(this, value);
	}
	template <typename T = uint32_t> T get_monster_damage_hp_max() {
		return ((T (*)(SPveFightInfo*))(Il2CppBase() + 0x51A8414))(this);
	}
	template <typename T = void> T set_monster_damage_hp_max(uint32_t value) {
		return ((T (*)(SPveFightInfo*, uint32_t))(Il2CppBase() + 0x51A841C))(this, value);
	}
	template <typename T = uint32_t> T get_boss_damage_count() {
		return ((T (*)(SPveFightInfo*))(Il2CppBase() + 0x51A8424))(this);
	}
	template <typename T = void> T set_boss_damage_count(uint32_t value) {
		return ((T (*)(SPveFightInfo*, uint32_t))(Il2CppBase() + 0x51A842C))(this, value);
	}
	template <typename T = uint32_t> T get_boss_damage_hp_max() {
		return ((T (*)(SPveFightInfo*))(Il2CppBase() + 0x51A8434))(this);
	}
	template <typename T = void> T set_boss_damage_hp_max(uint32_t value) {
		return ((T (*)(SPveFightInfo*, uint32_t))(Il2CppBase() + 0x51A843C))(this, value);
	}
	template <typename T = uint32_t> T get_normal_move_speed_max() {
		return ((T (*)(SPveFightInfo*))(Il2CppBase() + 0x51A8444))(this);
	}
	template <typename T = void> T set_normal_move_speed_max(uint32_t value) {
		return ((T (*)(SPveFightInfo*, uint32_t))(Il2CppBase() + 0x51A844C))(this, value);
	}
	template <typename T = uint32_t> T get_second_move_distance_max() {
		return ((T (*)(SPveFightInfo*))(Il2CppBase() + 0x51A8454))(this);
	}
	template <typename T = void> T set_second_move_distance_max(uint32_t value) {
		return ((T (*)(SPveFightInfo*, uint32_t))(Il2CppBase() + 0x51A845C))(this, value);
	}
	template <typename T = uint32_t> T get_round_time_min() {
		return ((T (*)(SPveFightInfo*))(Il2CppBase() + 0x51A8464))(this);
	}
	template <typename T = void> T set_round_time_min(uint32_t value) {
		return ((T (*)(SPveFightInfo*, uint32_t))(Il2CppBase() + 0x51A846C))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_weapon_list() {
		return ((T (*)(SPveFightInfo*))(Il2CppBase() + 0x51A8474))(this);
	}
	template <typename T = uint32_t> T get_monster_init_count() {
		return ((T (*)(SPveFightInfo*))(Il2CppBase() + 0x51A847C))(this);
	}
	template <typename T = void> T set_monster_init_count(uint32_t value) {
		return ((T (*)(SPveFightInfo*, uint32_t))(Il2CppBase() + 0x51A8484))(this, value);
	}
	template <typename T = uint32_t> T get_monster_kill_count() {
		return ((T (*)(SPveFightInfo*))(Il2CppBase() + 0x51A848C))(this);
	}
	template <typename T = void> T set_monster_kill_count(uint32_t value) {
		return ((T (*)(SPveFightInfo*, uint32_t))(Il2CppBase() + 0x51A8494))(this, value);
	}
	template <typename T = uint32_t> T get_random_value() {
		return ((T (*)(SPveFightInfo*))(Il2CppBase() + 0x51A849C))(this);
	}
	template <typename T = void> T set_random_value(uint32_t value) {
		return ((T (*)(SPveFightInfo*, uint32_t))(Il2CppBase() + 0x51A84A4))(this, value);
	}
	template <typename T = uint32_t> T get_monster_headshot_count() {
		return ((T (*)(SPveFightInfo*))(Il2CppBase() + 0x51A84AC))(this);
	}
	template <typename T = void> T set_monster_headshot_count(uint32_t value) {
		return ((T (*)(SPveFightInfo*, uint32_t))(Il2CppBase() + 0x51A84B4))(this, value);
	}
	template <typename T = uint32_t> T get_can_attack_count() {
		return ((T (*)(SPveFightInfo*))(Il2CppBase() + 0x51A84BC))(this);
	}
	template <typename T = void> T set_can_attack_count(uint32_t value) {
		return ((T (*)(SPveFightInfo*, uint32_t))(Il2CppBase() + 0x51A84C4))(this, value);
	}
	template <typename T = uint32_t> T get_monster_collider_radius_max() {
		return ((T (*)(SPveFightInfo*))(Il2CppBase() + 0x51A84CC))(this);
	}
	template <typename T = void> T set_monster_collider_radius_max(uint32_t value) {
		return ((T (*)(SPveFightInfo*, uint32_t))(Il2CppBase() + 0x51A84D4))(this, value);
	}
	template <typename T = uint32_t> T get_monster_collider_height_max() {
		return ((T (*)(SPveFightInfo*))(Il2CppBase() + 0x51A84DC))(this);
	}
	template <typename T = void> T set_monster_collider_height_max(uint32_t value) {
		return ((T (*)(SPveFightInfo*, uint32_t))(Il2CppBase() + 0x51A84E4))(this, value);
	}
	template <typename T = uint32_t> T get_boss_collider_radius_max() {
		return ((T (*)(SPveFightInfo*))(Il2CppBase() + 0x51A84EC))(this);
	}
	template <typename T = void> T set_boss_collider_radius_max(uint32_t value) {
		return ((T (*)(SPveFightInfo*, uint32_t))(Il2CppBase() + 0x51A84F4))(this, value);
	}
	template <typename T = uint32_t> T get_boss_collider_height_max() {
		return ((T (*)(SPveFightInfo*))(Il2CppBase() + 0x51A84FC))(this);
	}
	template <typename T = void> T set_boss_collider_height_max(uint32_t value) {
		return ((T (*)(SPveFightInfo*, uint32_t))(Il2CppBase() + 0x51A8504))(this, value);
	}
	template <typename T = uint32_t> T get_player_collider_radius_min() {
		return ((T (*)(SPveFightInfo*))(Il2CppBase() + 0x51A850C))(this);
	}
	template <typename T = void> T set_player_collider_radius_min(uint32_t value) {
		return ((T (*)(SPveFightInfo*, uint32_t))(Il2CppBase() + 0x51A8514))(this, value);
	}
	template <typename T = uint32_t> T get_player_collider_height_min() {
		return ((T (*)(SPveFightInfo*))(Il2CppBase() + 0x51A851C))(this);
	}
	template <typename T = void> T set_player_collider_height_min(uint32_t value) {
		return ((T (*)(SPveFightInfo*, uint32_t))(Il2CppBase() + 0x51A8524))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_skill_list() {
		return ((T (*)(SPveFightInfo*))(Il2CppBase() + 0x51A852C))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(SPveFightInfo*, bool))(Il2CppBase() + 0x51A8534))(this, createIfMissing);
	}

};

}
