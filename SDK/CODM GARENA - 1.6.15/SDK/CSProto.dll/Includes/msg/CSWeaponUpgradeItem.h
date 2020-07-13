#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSWeaponUpgradeItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSWeaponUpgradeItem"));
	}

	template <typename T = uintptr_t> T& _weapon() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _old_level() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _old_exp() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _new_level() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _new_exp() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _add_exp() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& _reach_max_level() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = uintptr_t> T get_weapon() {
		return ((T (*)(CSWeaponUpgradeItem*))(Il2CppBase() + 0x51B7008))(this);
	}
	template <typename T = void> T set_weapon(uintptr_t value) {
		return ((T (*)(CSWeaponUpgradeItem*, uintptr_t))(Il2CppBase() + 0x51B7010))(this, value);
	}
	template <typename T = int32_t> T get_old_level() {
		return ((T (*)(CSWeaponUpgradeItem*))(Il2CppBase() + 0x51B7018))(this);
	}
	template <typename T = void> T set_old_level(int32_t value) {
		return ((T (*)(CSWeaponUpgradeItem*, int32_t))(Il2CppBase() + 0x51B7020))(this, value);
	}
	template <typename T = int32_t> T get_old_exp() {
		return ((T (*)(CSWeaponUpgradeItem*))(Il2CppBase() + 0x51B7028))(this);
	}
	template <typename T = void> T set_old_exp(int32_t value) {
		return ((T (*)(CSWeaponUpgradeItem*, int32_t))(Il2CppBase() + 0x51B7030))(this, value);
	}
	template <typename T = int32_t> T get_new_level() {
		return ((T (*)(CSWeaponUpgradeItem*))(Il2CppBase() + 0x51B7038))(this);
	}
	template <typename T = void> T set_new_level(int32_t value) {
		return ((T (*)(CSWeaponUpgradeItem*, int32_t))(Il2CppBase() + 0x51B7040))(this, value);
	}
	template <typename T = int32_t> T get_new_exp() {
		return ((T (*)(CSWeaponUpgradeItem*))(Il2CppBase() + 0x51B7048))(this);
	}
	template <typename T = void> T set_new_exp(int32_t value) {
		return ((T (*)(CSWeaponUpgradeItem*, int32_t))(Il2CppBase() + 0x51B7050))(this, value);
	}
	template <typename T = int32_t> T get_add_exp() {
		return ((T (*)(CSWeaponUpgradeItem*))(Il2CppBase() + 0x51B7058))(this);
	}
	template <typename T = void> T set_add_exp(int32_t value) {
		return ((T (*)(CSWeaponUpgradeItem*, int32_t))(Il2CppBase() + 0x51B7060))(this, value);
	}
	template <typename T = bool> T get_reach_max_level() {
		return ((T (*)(CSWeaponUpgradeItem*))(Il2CppBase() + 0x51B7068))(this);
	}
	template <typename T = void> T set_reach_max_level(bool value) {
		return ((T (*)(CSWeaponUpgradeItem*, bool))(Il2CppBase() + 0x51B7070))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSWeaponUpgradeItem*, bool))(Il2CppBase() + 0x51B7078))(this, createIfMissing);
	}

};

}
