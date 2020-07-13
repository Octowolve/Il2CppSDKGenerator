#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class SPveFightWeaponInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "SPveFightWeaponInfo"));
	}

	template <typename T = uint32_t> T& _prop_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _weapon_fire_count() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _weapon_damage_hp_max() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _weapon_shoot_speed_min() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _weapon_damange_distance_max() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _weapon_add_ammo_count() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _weapon_init_ammo_count() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& _weapon_final_ammo_count() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& _weapon_without_cost_ammo_count() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = uint32_t> T get_prop_id() {
		return ((T (*)(SPveFightWeaponInfo*))(Il2CppBase() + 0x51A859C))(this);
	}
	template <typename T = void> T set_prop_id(uint32_t value) {
		return ((T (*)(SPveFightWeaponInfo*, uint32_t))(Il2CppBase() + 0x51A85A4))(this, value);
	}
	template <typename T = uint32_t> T get_weapon_fire_count() {
		return ((T (*)(SPveFightWeaponInfo*))(Il2CppBase() + 0x51A85AC))(this);
	}
	template <typename T = void> T set_weapon_fire_count(uint32_t value) {
		return ((T (*)(SPveFightWeaponInfo*, uint32_t))(Il2CppBase() + 0x51A85B4))(this, value);
	}
	template <typename T = uint32_t> T get_weapon_damage_hp_max() {
		return ((T (*)(SPveFightWeaponInfo*))(Il2CppBase() + 0x51A85BC))(this);
	}
	template <typename T = void> T set_weapon_damage_hp_max(uint32_t value) {
		return ((T (*)(SPveFightWeaponInfo*, uint32_t))(Il2CppBase() + 0x51A85C4))(this, value);
	}
	template <typename T = uint32_t> T get_weapon_shoot_speed_min() {
		return ((T (*)(SPveFightWeaponInfo*))(Il2CppBase() + 0x51A85CC))(this);
	}
	template <typename T = void> T set_weapon_shoot_speed_min(uint32_t value) {
		return ((T (*)(SPveFightWeaponInfo*, uint32_t))(Il2CppBase() + 0x51A85D4))(this, value);
	}
	template <typename T = uint32_t> T get_weapon_damange_distance_max() {
		return ((T (*)(SPveFightWeaponInfo*))(Il2CppBase() + 0x51A85DC))(this);
	}
	template <typename T = void> T set_weapon_damange_distance_max(uint32_t value) {
		return ((T (*)(SPveFightWeaponInfo*, uint32_t))(Il2CppBase() + 0x51A85E4))(this, value);
	}
	template <typename T = uint32_t> T get_weapon_add_ammo_count() {
		return ((T (*)(SPveFightWeaponInfo*))(Il2CppBase() + 0x51A85EC))(this);
	}
	template <typename T = void> T set_weapon_add_ammo_count(uint32_t value) {
		return ((T (*)(SPveFightWeaponInfo*, uint32_t))(Il2CppBase() + 0x51A85F4))(this, value);
	}
	template <typename T = uint32_t> T get_weapon_init_ammo_count() {
		return ((T (*)(SPveFightWeaponInfo*))(Il2CppBase() + 0x51A85FC))(this);
	}
	template <typename T = void> T set_weapon_init_ammo_count(uint32_t value) {
		return ((T (*)(SPveFightWeaponInfo*, uint32_t))(Il2CppBase() + 0x51A8604))(this, value);
	}
	template <typename T = uint32_t> T get_weapon_final_ammo_count() {
		return ((T (*)(SPveFightWeaponInfo*))(Il2CppBase() + 0x51A860C))(this);
	}
	template <typename T = void> T set_weapon_final_ammo_count(uint32_t value) {
		return ((T (*)(SPveFightWeaponInfo*, uint32_t))(Il2CppBase() + 0x51A8614))(this, value);
	}
	template <typename T = uint32_t> T get_weapon_without_cost_ammo_count() {
		return ((T (*)(SPveFightWeaponInfo*))(Il2CppBase() + 0x51A861C))(this);
	}
	template <typename T = void> T set_weapon_without_cost_ammo_count(uint32_t value) {
		return ((T (*)(SPveFightWeaponInfo*, uint32_t))(Il2CppBase() + 0x51A8624))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(SPveFightWeaponInfo*, bool))(Il2CppBase() + 0x51A862C))(this, createIfMissing);
	}

};

}
