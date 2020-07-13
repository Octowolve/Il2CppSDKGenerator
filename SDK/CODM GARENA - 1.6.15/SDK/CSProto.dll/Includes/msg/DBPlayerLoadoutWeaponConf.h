#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class DBPlayerLoadoutWeaponConf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "DBPlayerLoadoutWeaponConf"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _weapon_attr_conf() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _role_attr_conf() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_weapon_attr_conf() {
		return ((T (*)(DBPlayerLoadoutWeaponConf*))(Il2CppBase() + 0x51B92C8))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_role_attr_conf() {
		return ((T (*)(DBPlayerLoadoutWeaponConf*))(Il2CppBase() + 0x51B92D0))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(DBPlayerLoadoutWeaponConf*, bool))(Il2CppBase() + 0x51B92D8))(this, createIfMissing);
	}

};

}
