#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetWeaponAttrConfRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetWeaponAttrConfRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _weaponattr_items() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGetWeaponAttrConfRes*))(Il2CppBase() + 0x52189E0))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGetWeaponAttrConfRes*, int32_t))(Il2CppBase() + 0x52189E8))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_weaponattr_items() {
		return ((T (*)(CSGetWeaponAttrConfRes*))(Il2CppBase() + 0x52189F0))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetWeaponAttrConfRes*, bool))(Il2CppBase() + 0x52189F8))(this, createIfMissing);
	}

};

}
