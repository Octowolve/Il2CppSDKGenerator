#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInventoryStrengthenPveWeaponRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInventoryStrengthenPveWeaponRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int64_t> T& _weapon_guid() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _weapon_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _weapon_ce_points() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _loadout_id() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& _loadout_ce_points() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& _old_level() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _new_level() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _consume_item_list() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSInventoryStrengthenPveWeaponRes*))(Il2CppBase() + 0x513861C))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSInventoryStrengthenPveWeaponRes*, int32_t))(Il2CppBase() + 0x5138624))(this, value);
	}
	template <typename T = int64_t> T get_weapon_guid() {
		return ((T (*)(CSInventoryStrengthenPveWeaponRes*))(Il2CppBase() + 0x513862C))(this);
	}
	template <typename T = void> T set_weapon_guid(int64_t value) {
		return ((T (*)(CSInventoryStrengthenPveWeaponRes*, int64_t))(Il2CppBase() + 0x5138634))(this, value);
	}
	template <typename T = uint32_t> T get_weapon_id() {
		return ((T (*)(CSInventoryStrengthenPveWeaponRes*))(Il2CppBase() + 0x5138644))(this);
	}
	template <typename T = void> T set_weapon_id(uint32_t value) {
		return ((T (*)(CSInventoryStrengthenPveWeaponRes*, uint32_t))(Il2CppBase() + 0x513864C))(this, value);
	}
	template <typename T = int32_t> T get_weapon_ce_points() {
		return ((T (*)(CSInventoryStrengthenPveWeaponRes*))(Il2CppBase() + 0x5138654))(this);
	}
	template <typename T = void> T set_weapon_ce_points(int32_t value) {
		return ((T (*)(CSInventoryStrengthenPveWeaponRes*, int32_t))(Il2CppBase() + 0x513865C))(this, value);
	}
	template <typename T = int32_t> T get_loadout_id() {
		return ((T (*)(CSInventoryStrengthenPveWeaponRes*))(Il2CppBase() + 0x5138664))(this);
	}
	template <typename T = void> T set_loadout_id(int32_t value) {
		return ((T (*)(CSInventoryStrengthenPveWeaponRes*, int32_t))(Il2CppBase() + 0x513866C))(this, value);
	}
	template <typename T = uint32_t> T get_loadout_ce_points() {
		return ((T (*)(CSInventoryStrengthenPveWeaponRes*))(Il2CppBase() + 0x5138674))(this);
	}
	template <typename T = void> T set_loadout_ce_points(uint32_t value) {
		return ((T (*)(CSInventoryStrengthenPveWeaponRes*, uint32_t))(Il2CppBase() + 0x513867C))(this, value);
	}
	template <typename T = int32_t> T get_old_level() {
		return ((T (*)(CSInventoryStrengthenPveWeaponRes*))(Il2CppBase() + 0x5138684))(this);
	}
	template <typename T = void> T set_old_level(int32_t value) {
		return ((T (*)(CSInventoryStrengthenPveWeaponRes*, int32_t))(Il2CppBase() + 0x513868C))(this, value);
	}
	template <typename T = int32_t> T get_new_level() {
		return ((T (*)(CSInventoryStrengthenPveWeaponRes*))(Il2CppBase() + 0x5138694))(this);
	}
	template <typename T = void> T set_new_level(int32_t value) {
		return ((T (*)(CSInventoryStrengthenPveWeaponRes*, int32_t))(Il2CppBase() + 0x513869C))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_consume_item_list() {
		return ((T (*)(CSInventoryStrengthenPveWeaponRes*))(Il2CppBase() + 0x51386A4))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInventoryStrengthenPveWeaponRes*, bool))(Il2CppBase() + 0x51386AC))(this, createIfMissing);
	}

};

}
