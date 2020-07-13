#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSWeaponUpgradeRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSWeapon_UpgradeRes"));
	}

	template <typename T = int32_t> T& _Result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _DataChange() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _UpgradeType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint64_t> T& _BaseWeaponId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint64_t> T& _BaseWeaponGId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _ProduceProp() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = int32_t> T get_Result() {
		return ((T (*)(CSWeaponUpgradeRes*))(Il2CppBase() + 0x51B6E34))(this);
	}
	template <typename T = void> T set_Result(int32_t value) {
		return ((T (*)(CSWeaponUpgradeRes*, int32_t))(Il2CppBase() + 0x51B6E3C))(this, value);
	}
	template <typename T = uintptr_t> T get_DataChange() {
		return ((T (*)(CSWeaponUpgradeRes*))(Il2CppBase() + 0x51B6E44))(this);
	}
	template <typename T = void> T set_DataChange(uintptr_t value) {
		return ((T (*)(CSWeaponUpgradeRes*, uintptr_t))(Il2CppBase() + 0x51B6E4C))(this, value);
	}
	template <typename T = int32_t> T get_UpgradeType() {
		return ((T (*)(CSWeaponUpgradeRes*))(Il2CppBase() + 0x51B6E54))(this);
	}
	template <typename T = void> T set_UpgradeType(int32_t value) {
		return ((T (*)(CSWeaponUpgradeRes*, int32_t))(Il2CppBase() + 0x51B6E5C))(this, value);
	}
	template <typename T = uint64_t> T get_BaseWeaponId() {
		return ((T (*)(CSWeaponUpgradeRes*))(Il2CppBase() + 0x51B6E64))(this);
	}
	template <typename T = void> T set_BaseWeaponId(uint64_t value) {
		return ((T (*)(CSWeaponUpgradeRes*, uint64_t))(Il2CppBase() + 0x51B6E6C))(this, value);
	}
	template <typename T = uint64_t> T get_BaseWeaponGId() {
		return ((T (*)(CSWeaponUpgradeRes*))(Il2CppBase() + 0x51B6E7C))(this);
	}
	template <typename T = void> T set_BaseWeaponGId(uint64_t value) {
		return ((T (*)(CSWeaponUpgradeRes*, uint64_t))(Il2CppBase() + 0x51B6E84))(this, value);
	}
	template <typename T = uintptr_t> T get_ProduceProp() {
		return ((T (*)(CSWeaponUpgradeRes*))(Il2CppBase() + 0x51B6E94))(this);
	}
	template <typename T = void> T set_ProduceProp(uintptr_t value) {
		return ((T (*)(CSWeaponUpgradeRes*, uintptr_t))(Il2CppBase() + 0x51B6E9C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSWeaponUpgradeRes*, bool))(Il2CppBase() + 0x51B6EA4))(this, createIfMissing);
	}

};

}
