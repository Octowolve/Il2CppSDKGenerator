#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSWeaponUpgradeReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSWeapon_UpgradeReq"));
	}

	template <typename T = int32_t> T& _UpgradeType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _BaseWeaponId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint64_t> T& _BaseWeaponGId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _CostMeterial() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _CostResource() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = int32_t> T get_UpgradeType() {
		return ((T (*)(CSWeaponUpgradeReq*))(Il2CppBase() + 0x51B6DC8))(this);
	}
	template <typename T = void> T set_UpgradeType(int32_t value) {
		return ((T (*)(CSWeaponUpgradeReq*, int32_t))(Il2CppBase() + 0x51B6DD0))(this, value);
	}
	template <typename T = uint64_t> T get_BaseWeaponId() {
		return ((T (*)(CSWeaponUpgradeReq*))(Il2CppBase() + 0x51B6DD8))(this);
	}
	template <typename T = void> T set_BaseWeaponId(uint64_t value) {
		return ((T (*)(CSWeaponUpgradeReq*, uint64_t))(Il2CppBase() + 0x51B6DE0))(this, value);
	}
	template <typename T = uint64_t> T get_BaseWeaponGId() {
		return ((T (*)(CSWeaponUpgradeReq*))(Il2CppBase() + 0x51B6DF0))(this);
	}
	template <typename T = void> T set_BaseWeaponGId(uint64_t value) {
		return ((T (*)(CSWeaponUpgradeReq*, uint64_t))(Il2CppBase() + 0x51B6DF8))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_CostMeterial() {
		return ((T (*)(CSWeaponUpgradeReq*))(Il2CppBase() + 0x51B6E08))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_CostResource() {
		return ((T (*)(CSWeaponUpgradeReq*))(Il2CppBase() + 0x51B6E10))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSWeaponUpgradeReq*, bool))(Il2CppBase() + 0x51B6E18))(this, createIfMissing);
	}

};

}
