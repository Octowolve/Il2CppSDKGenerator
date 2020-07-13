#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInventoryChgWeaponSkinReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInventoryChgWeaponSkinReq"));
	}

	template <typename T = uint32_t> T& _weapon_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _weapon_skin_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint64_t> T& _weapon_skin_guid() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _weapon_guid() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _br_weapon_id() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint64_t> T& _br_weapon_guid() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = uint32_t> T get_weapon_id() {
		return ((T (*)(CSInventoryChgWeaponSkinReq*))(Il2CppBase() + 0x51376AC))(this);
	}
	template <typename T = void> T set_weapon_id(uint32_t value) {
		return ((T (*)(CSInventoryChgWeaponSkinReq*, uint32_t))(Il2CppBase() + 0x51376B4))(this, value);
	}
	template <typename T = uint32_t> T get_weapon_skin_id() {
		return ((T (*)(CSInventoryChgWeaponSkinReq*))(Il2CppBase() + 0x51376BC))(this);
	}
	template <typename T = void> T set_weapon_skin_id(uint32_t value) {
		return ((T (*)(CSInventoryChgWeaponSkinReq*, uint32_t))(Il2CppBase() + 0x51376C4))(this, value);
	}
	template <typename T = uint64_t> T get_weapon_skin_guid() {
		return ((T (*)(CSInventoryChgWeaponSkinReq*))(Il2CppBase() + 0x51376CC))(this);
	}
	template <typename T = void> T set_weapon_skin_guid(uint64_t value) {
		return ((T (*)(CSInventoryChgWeaponSkinReq*, uint64_t))(Il2CppBase() + 0x51376D4))(this, value);
	}
	template <typename T = uint32_t> T get_weapon_guid() {
		return ((T (*)(CSInventoryChgWeaponSkinReq*))(Il2CppBase() + 0x51376E4))(this);
	}
	template <typename T = void> T set_weapon_guid(uint32_t value) {
		return ((T (*)(CSInventoryChgWeaponSkinReq*, uint32_t))(Il2CppBase() + 0x51376EC))(this, value);
	}
	template <typename T = uint32_t> T get_br_weapon_id() {
		return ((T (*)(CSInventoryChgWeaponSkinReq*))(Il2CppBase() + 0x51376F4))(this);
	}
	template <typename T = void> T set_br_weapon_id(uint32_t value) {
		return ((T (*)(CSInventoryChgWeaponSkinReq*, uint32_t))(Il2CppBase() + 0x51376FC))(this, value);
	}
	template <typename T = uint64_t> T get_br_weapon_guid() {
		return ((T (*)(CSInventoryChgWeaponSkinReq*))(Il2CppBase() + 0x5137704))(this);
	}
	template <typename T = void> T set_br_weapon_guid(uint64_t value) {
		return ((T (*)(CSInventoryChgWeaponSkinReq*, uint64_t))(Il2CppBase() + 0x513770C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInventoryChgWeaponSkinReq*, bool))(Il2CppBase() + 0x513771C))(this, createIfMissing);
	}

};

}
