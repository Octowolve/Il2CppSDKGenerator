#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSWeaponUseCardRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSWeapon_UseCardRes"));
	}

	template <typename T = int32_t> T& _Result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _DataChange() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_Result() {
		return ((T (*)(CSWeaponUseCardRes*))(Il2CppBase() + 0x51B6EEC))(this);
	}
	template <typename T = void> T set_Result(int32_t value) {
		return ((T (*)(CSWeaponUseCardRes*, int32_t))(Il2CppBase() + 0x51B6EF4))(this, value);
	}
	template <typename T = uintptr_t> T get_DataChange() {
		return ((T (*)(CSWeaponUseCardRes*))(Il2CppBase() + 0x51B6EFC))(this);
	}
	template <typename T = void> T set_DataChange(uintptr_t value) {
		return ((T (*)(CSWeaponUseCardRes*, uintptr_t))(Il2CppBase() + 0x51B6F04))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSWeaponUseCardRes*, bool))(Il2CppBase() + 0x51B6F0C))(this, createIfMissing);
	}

};

}
