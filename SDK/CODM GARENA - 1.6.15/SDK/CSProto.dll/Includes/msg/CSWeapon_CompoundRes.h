#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSWeaponCompoundRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSWeapon_CompoundRes"));
	}

	template <typename T = uintptr_t> T& _msg() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_msg() {
		return ((T (*)(CSWeaponCompoundRes*))(Il2CppBase() + 0x51B6A4C))(this);
	}
	template <typename T = void> T set_msg(uintptr_t value) {
		return ((T (*)(CSWeaponCompoundRes*, uintptr_t))(Il2CppBase() + 0x51B6A54))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSWeaponCompoundRes*, bool))(Il2CppBase() + 0x51B6A5C))(this, createIfMissing);
	}

};

}
