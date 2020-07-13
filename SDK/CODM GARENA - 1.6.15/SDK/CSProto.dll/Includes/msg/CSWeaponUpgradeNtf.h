#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSWeaponUpgradeNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSWeaponUpgradeNtf"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _weapon_upgrade() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_weapon_upgrade() {
		return ((T (*)(CSWeaponUpgradeNtf*))(Il2CppBase() + 0x51B7138))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSWeaponUpgradeNtf*, bool))(Il2CppBase() + 0x51B7140))(this, createIfMissing);
	}

};

}
