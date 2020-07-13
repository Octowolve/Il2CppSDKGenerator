#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSWeaponCostResource
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSWeaponCostResource"));
	}

	template <typename T = int32_t> T& _type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _value() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_type() {
		return ((T (*)(CSWeaponCostResource*))(Il2CppBase() + 0x51B6FCC))(this);
	}
	template <typename T = void> T set_type(int32_t value) {
		return ((T (*)(CSWeaponCostResource*, int32_t))(Il2CppBase() + 0x51B6FD4))(this, value);
	}
	template <typename T = int32_t> T get_value() {
		return ((T (*)(CSWeaponCostResource*))(Il2CppBase() + 0x51B6FDC))(this);
	}
	template <typename T = void> T set_value(int32_t value) {
		return ((T (*)(CSWeaponCostResource*, int32_t))(Il2CppBase() + 0x51B6FE4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSWeaponCostResource*, bool))(Il2CppBase() + 0x51B6FEC))(this, createIfMissing);
	}

};

}
