#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInventoryWeaponUpgradeReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInventoryWeaponUpgradeReq"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _use_card() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _dst_weapon() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_use_card() {
		return ((T (*)(CSInventoryWeaponUpgradeReq*))(Il2CppBase() + 0x5138B40))(this);
	}
	template <typename T = uintptr_t> T get_dst_weapon() {
		return ((T (*)(CSInventoryWeaponUpgradeReq*))(Il2CppBase() + 0x5138B48))(this);
	}
	template <typename T = void> T set_dst_weapon(uintptr_t value) {
		return ((T (*)(CSInventoryWeaponUpgradeReq*, uintptr_t))(Il2CppBase() + 0x5138B50))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInventoryWeaponUpgradeReq*, bool))(Il2CppBase() + 0x5138B58))(this, createIfMissing);
	}

};

}
