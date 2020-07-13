#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSApplyWeaponConfigNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSApplyWeaponConfigNtf"));
	}

	template <typename T = int32_t> T& _weapon_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _weapon_name() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _cfg_ctx() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_weapon_id() {
		return ((T (*)(CSApplyWeaponConfigNtf*))(Il2CppBase() + 0x51E4678))(this);
	}
	template <typename T = void> T set_weapon_id(int32_t value) {
		return ((T (*)(CSApplyWeaponConfigNtf*, int32_t))(Il2CppBase() + 0x51E4680))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_weapon_name() {
		return ((T (*)(CSApplyWeaponConfigNtf*))(Il2CppBase() + 0x51E4688))(this);
	}
	template <typename T = void> T set_weapon_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSApplyWeaponConfigNtf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51E4690))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_cfg_ctx() {
		return ((T (*)(CSApplyWeaponConfigNtf*))(Il2CppBase() + 0x51E4698))(this);
	}
	template <typename T = void> T set_cfg_ctx(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSApplyWeaponConfigNtf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51E46A0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSApplyWeaponConfigNtf*, bool))(Il2CppBase() + 0x51E46A8))(this, createIfMissing);
	}

};

}
