#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSApplyWeaponConfigReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSApplyWeaponConfigReq"));
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
	template <typename T = int32_t> T& _cfg_type() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _matchroom_bus_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = int32_t> T get_weapon_id() {
		return ((T (*)(CSApplyWeaponConfigReq*))(Il2CppBase() + 0x51E46C4))(this);
	}
	template <typename T = void> T set_weapon_id(int32_t value) {
		return ((T (*)(CSApplyWeaponConfigReq*, int32_t))(Il2CppBase() + 0x51E46CC))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_weapon_name() {
		return ((T (*)(CSApplyWeaponConfigReq*))(Il2CppBase() + 0x51E46D4))(this);
	}
	template <typename T = void> T set_weapon_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSApplyWeaponConfigReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51E46DC))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_cfg_ctx() {
		return ((T (*)(CSApplyWeaponConfigReq*))(Il2CppBase() + 0x51E46E4))(this);
	}
	template <typename T = void> T set_cfg_ctx(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSApplyWeaponConfigReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51E46EC))(this, value);
	}
	template <typename T = int32_t> T get_cfg_type() {
		return ((T (*)(CSApplyWeaponConfigReq*))(Il2CppBase() + 0x51E46F4))(this);
	}
	template <typename T = void> T set_cfg_type(int32_t value) {
		return ((T (*)(CSApplyWeaponConfigReq*, int32_t))(Il2CppBase() + 0x51E46FC))(this, value);
	}
	template <typename T = uint32_t> T get_matchroom_bus_id() {
		return ((T (*)(CSApplyWeaponConfigReq*))(Il2CppBase() + 0x51E4704))(this);
	}
	template <typename T = void> T set_matchroom_bus_id(uint32_t value) {
		return ((T (*)(CSApplyWeaponConfigReq*, uint32_t))(Il2CppBase() + 0x51E470C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSApplyWeaponConfigReq*, bool))(Il2CppBase() + 0x51E4714))(this, createIfMissing);
	}

};

}
