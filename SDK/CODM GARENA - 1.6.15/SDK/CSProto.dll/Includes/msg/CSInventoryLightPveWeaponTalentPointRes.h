#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInventoryLightPveWeaponTalentPointRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInventoryLightPveWeaponTalentPointRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int64_t> T& _weapon_guid() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _attach() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _group_id() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _talent_id() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& _weapon_ce_points() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& _loadout_id() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& _loadout_ce_points() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _skills() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSInventoryLightPveWeaponTalentPointRes*))(Il2CppBase() + 0x51383A8))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSInventoryLightPveWeaponTalentPointRes*, int32_t))(Il2CppBase() + 0x51383B0))(this, value);
	}
	template <typename T = int64_t> T get_weapon_guid() {
		return ((T (*)(CSInventoryLightPveWeaponTalentPointRes*))(Il2CppBase() + 0x51383B8))(this);
	}
	template <typename T = void> T set_weapon_guid(int64_t value) {
		return ((T (*)(CSInventoryLightPveWeaponTalentPointRes*, int64_t))(Il2CppBase() + 0x51383C0))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_attach() {
		return ((T (*)(CSInventoryLightPveWeaponTalentPointRes*))(Il2CppBase() + 0x51383D0))(this);
	}
	template <typename T = uint32_t> T get_group_id() {
		return ((T (*)(CSInventoryLightPveWeaponTalentPointRes*))(Il2CppBase() + 0x51383D8))(this);
	}
	template <typename T = void> T set_group_id(uint32_t value) {
		return ((T (*)(CSInventoryLightPveWeaponTalentPointRes*, uint32_t))(Il2CppBase() + 0x51383E0))(this, value);
	}
	template <typename T = uint32_t> T get_talent_id() {
		return ((T (*)(CSInventoryLightPveWeaponTalentPointRes*))(Il2CppBase() + 0x51383E8))(this);
	}
	template <typename T = void> T set_talent_id(uint32_t value) {
		return ((T (*)(CSInventoryLightPveWeaponTalentPointRes*, uint32_t))(Il2CppBase() + 0x51383F0))(this, value);
	}
	template <typename T = uint32_t> T get_weapon_ce_points() {
		return ((T (*)(CSInventoryLightPveWeaponTalentPointRes*))(Il2CppBase() + 0x51383F8))(this);
	}
	template <typename T = void> T set_weapon_ce_points(uint32_t value) {
		return ((T (*)(CSInventoryLightPveWeaponTalentPointRes*, uint32_t))(Il2CppBase() + 0x5138400))(this, value);
	}
	template <typename T = int32_t> T get_loadout_id() {
		return ((T (*)(CSInventoryLightPveWeaponTalentPointRes*))(Il2CppBase() + 0x5138408))(this);
	}
	template <typename T = void> T set_loadout_id(int32_t value) {
		return ((T (*)(CSInventoryLightPveWeaponTalentPointRes*, int32_t))(Il2CppBase() + 0x5138410))(this, value);
	}
	template <typename T = uint32_t> T get_loadout_ce_points() {
		return ((T (*)(CSInventoryLightPveWeaponTalentPointRes*))(Il2CppBase() + 0x5138418))(this);
	}
	template <typename T = void> T set_loadout_ce_points(uint32_t value) {
		return ((T (*)(CSInventoryLightPveWeaponTalentPointRes*, uint32_t))(Il2CppBase() + 0x5138420))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_skills() {
		return ((T (*)(CSInventoryLightPveWeaponTalentPointRes*))(Il2CppBase() + 0x5138428))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInventoryLightPveWeaponTalentPointRes*, bool))(Il2CppBase() + 0x5138430))(this, createIfMissing);
	}

};

}
