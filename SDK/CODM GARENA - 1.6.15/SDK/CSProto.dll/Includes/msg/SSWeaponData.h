#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class SSWeaponData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "SSWeaponData"));
	}

	template <typename T = uint64_t> T& _weapon_guid() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _weapon_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _weapon_level() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _weapon_level_exp() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _weapon_equip_position() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _attachment_data() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& _camo_id() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _skill_ids() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _skill_levels() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& _clip_num_base() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& _ammo_in_magzine_base() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _effect_ids() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _buff_ids() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _attr_ids() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint32_t> T& _strengthen_level() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _pve_attr() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint32_t> T& _source_match_weapon_id() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& _decorations() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x54);
	}

	template <typename T = uint64_t> T get_weapon_guid() {
		return ((T (*)(SSWeaponData*))(Il2CppBase() + 0x51A986C))(this);
	}
	template <typename T = void> T set_weapon_guid(uint64_t value) {
		return ((T (*)(SSWeaponData*, uint64_t))(Il2CppBase() + 0x51A9874))(this, value);
	}
	template <typename T = uint32_t> T get_weapon_id() {
		return ((T (*)(SSWeaponData*))(Il2CppBase() + 0x51A9884))(this);
	}
	template <typename T = void> T set_weapon_id(uint32_t value) {
		return ((T (*)(SSWeaponData*, uint32_t))(Il2CppBase() + 0x51A988C))(this, value);
	}
	template <typename T = int32_t> T get_weapon_level() {
		return ((T (*)(SSWeaponData*))(Il2CppBase() + 0x51A9894))(this);
	}
	template <typename T = void> T set_weapon_level(int32_t value) {
		return ((T (*)(SSWeaponData*, int32_t))(Il2CppBase() + 0x51A989C))(this, value);
	}
	template <typename T = int32_t> T get_weapon_level_exp() {
		return ((T (*)(SSWeaponData*))(Il2CppBase() + 0x51A98A4))(this);
	}
	template <typename T = void> T set_weapon_level_exp(int32_t value) {
		return ((T (*)(SSWeaponData*, int32_t))(Il2CppBase() + 0x51A98AC))(this, value);
	}
	template <typename T = int32_t> T get_weapon_equip_position() {
		return ((T (*)(SSWeaponData*))(Il2CppBase() + 0x51A98B4))(this);
	}
	template <typename T = void> T set_weapon_equip_position(int32_t value) {
		return ((T (*)(SSWeaponData*, int32_t))(Il2CppBase() + 0x51A98BC))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_attachment_data() {
		return ((T (*)(SSWeaponData*))(Il2CppBase() + 0x51A98C4))(this);
	}
	template <typename T = uint32_t> T get_camo_id() {
		return ((T (*)(SSWeaponData*))(Il2CppBase() + 0x51A98CC))(this);
	}
	template <typename T = void> T set_camo_id(uint32_t value) {
		return ((T (*)(SSWeaponData*, uint32_t))(Il2CppBase() + 0x51A98D4))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_skill_ids() {
		return ((T (*)(SSWeaponData*))(Il2CppBase() + 0x51A98DC))(this);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_skill_levels() {
		return ((T (*)(SSWeaponData*))(Il2CppBase() + 0x51A98E4))(this);
	}
	template <typename T = int32_t> T get_clip_num_base() {
		return ((T (*)(SSWeaponData*))(Il2CppBase() + 0x51A98EC))(this);
	}
	template <typename T = void> T set_clip_num_base(int32_t value) {
		return ((T (*)(SSWeaponData*, int32_t))(Il2CppBase() + 0x51A98F4))(this, value);
	}
	template <typename T = int32_t> T get_ammo_in_magzine_base() {
		return ((T (*)(SSWeaponData*))(Il2CppBase() + 0x51A98FC))(this);
	}
	template <typename T = void> T set_ammo_in_magzine_base(int32_t value) {
		return ((T (*)(SSWeaponData*, int32_t))(Il2CppBase() + 0x51A9904))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_effect_ids() {
		return ((T (*)(SSWeaponData*))(Il2CppBase() + 0x51A990C))(this);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_buff_ids() {
		return ((T (*)(SSWeaponData*))(Il2CppBase() + 0x51A9914))(this);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_attr_ids() {
		return ((T (*)(SSWeaponData*))(Il2CppBase() + 0x51A991C))(this);
	}
	template <typename T = uint32_t> T get_strengthen_level() {
		return ((T (*)(SSWeaponData*))(Il2CppBase() + 0x51A9924))(this);
	}
	template <typename T = void> T set_strengthen_level(uint32_t value) {
		return ((T (*)(SSWeaponData*, uint32_t))(Il2CppBase() + 0x51A992C))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_pve_attr() {
		return ((T (*)(SSWeaponData*))(Il2CppBase() + 0x51A9934))(this);
	}
	template <typename T = uint32_t> T get_source_match_weapon_id() {
		return ((T (*)(SSWeaponData*))(Il2CppBase() + 0x51A993C))(this);
	}
	template <typename T = void> T set_source_match_weapon_id(uint32_t value) {
		return ((T (*)(SSWeaponData*, uint32_t))(Il2CppBase() + 0x51A9944))(this, value);
	}
	template <typename T = uintptr_t> T get_decorations() {
		return ((T (*)(SSWeaponData*))(Il2CppBase() + 0x51A994C))(this);
	}
	template <typename T = void> T set_decorations(uintptr_t value) {
		return ((T (*)(SSWeaponData*, uintptr_t))(Il2CppBase() + 0x51A9954))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(SSWeaponData*, bool))(Il2CppBase() + 0x51A995C))(this, createIfMissing);
	}

};

}
