#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInventoryWeaponUpgradeRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInventoryWeaponUpgradeRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _weapon_upgrade() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _delta_inventory() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _use_card() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSInventoryWeaponUpgradeRes*))(Il2CppBase() + 0x5138C4C))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSInventoryWeaponUpgradeRes*, int32_t))(Il2CppBase() + 0x5138C54))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_weapon_upgrade() {
		return ((T (*)(CSInventoryWeaponUpgradeRes*))(Il2CppBase() + 0x5138C5C))(this);
	}
	template <typename T = uintptr_t> T get_delta_inventory() {
		return ((T (*)(CSInventoryWeaponUpgradeRes*))(Il2CppBase() + 0x5138C64))(this);
	}
	template <typename T = void> T set_delta_inventory(uintptr_t value) {
		return ((T (*)(CSInventoryWeaponUpgradeRes*, uintptr_t))(Il2CppBase() + 0x5138C6C))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_use_card() {
		return ((T (*)(CSInventoryWeaponUpgradeRes*))(Il2CppBase() + 0x5138C74))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInventoryWeaponUpgradeRes*, bool))(Il2CppBase() + 0x5138C7C))(this, createIfMissing);
	}

};

}
