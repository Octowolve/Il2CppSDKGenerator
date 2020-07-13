#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInventoryStrengthenPveWeaponReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInventoryStrengthenPveWeaponReq"));
	}

	template <typename T = int64_t> T& _weapon_guid() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _weapon_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _group_id() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _level() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = int64_t> T get_weapon_guid() {
		return ((T (*)(CSInventoryStrengthenPveWeaponReq*))(Il2CppBase() + 0x513850C))(this);
	}
	template <typename T = void> T set_weapon_guid(int64_t value) {
		return ((T (*)(CSInventoryStrengthenPveWeaponReq*, int64_t))(Il2CppBase() + 0x5138514))(this, value);
	}
	template <typename T = uint32_t> T get_weapon_id() {
		return ((T (*)(CSInventoryStrengthenPveWeaponReq*))(Il2CppBase() + 0x5138524))(this);
	}
	template <typename T = void> T set_weapon_id(uint32_t value) {
		return ((T (*)(CSInventoryStrengthenPveWeaponReq*, uint32_t))(Il2CppBase() + 0x513852C))(this, value);
	}
	template <typename T = int32_t> T get_group_id() {
		return ((T (*)(CSInventoryStrengthenPveWeaponReq*))(Il2CppBase() + 0x5138534))(this);
	}
	template <typename T = void> T set_group_id(int32_t value) {
		return ((T (*)(CSInventoryStrengthenPveWeaponReq*, int32_t))(Il2CppBase() + 0x513853C))(this, value);
	}
	template <typename T = int32_t> T get_level() {
		return ((T (*)(CSInventoryStrengthenPveWeaponReq*))(Il2CppBase() + 0x5138544))(this);
	}
	template <typename T = void> T set_level(int32_t value) {
		return ((T (*)(CSInventoryStrengthenPveWeaponReq*, int32_t))(Il2CppBase() + 0x513854C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInventoryStrengthenPveWeaponReq*, bool))(Il2CppBase() + 0x5138554))(this, createIfMissing);
	}

};

}
