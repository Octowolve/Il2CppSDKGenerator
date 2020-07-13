#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSApplyWeaponConfigRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSApplyWeaponConfigRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _weapon_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSApplyWeaponConfigRes*))(Il2CppBase() + 0x51E4730))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSApplyWeaponConfigRes*, int32_t))(Il2CppBase() + 0x51E4738))(this, value);
	}
	template <typename T = int32_t> T get_weapon_id() {
		return ((T (*)(CSApplyWeaponConfigRes*))(Il2CppBase() + 0x51E4740))(this);
	}
	template <typename T = void> T set_weapon_id(int32_t value) {
		return ((T (*)(CSApplyWeaponConfigRes*, int32_t))(Il2CppBase() + 0x51E4748))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSApplyWeaponConfigRes*, bool))(Il2CppBase() + 0x51E4750))(this, createIfMissing);
	}

};

}
