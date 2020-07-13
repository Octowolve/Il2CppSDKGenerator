#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class WeaponUpgradeOutput
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "WeaponUpgradeOutput"));
	}

	template <typename T = uint32_t> T& _weapon_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _weapon_guid() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _attach_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uint64_t>*> T& _attach_guid() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uint32_t> T get_weapon_id() {
		return ((T (*)(WeaponUpgradeOutput*))(Il2CppBase() + 0x51AAF04))(this);
	}
	template <typename T = void> T set_weapon_id(uint32_t value) {
		return ((T (*)(WeaponUpgradeOutput*, uint32_t))(Il2CppBase() + 0x51AAF0C))(this, value);
	}
	template <typename T = uint64_t> T get_weapon_guid() {
		return ((T (*)(WeaponUpgradeOutput*))(Il2CppBase() + 0x51AAF14))(this);
	}
	template <typename T = void> T set_weapon_guid(uint64_t value) {
		return ((T (*)(WeaponUpgradeOutput*, uint64_t))(Il2CppBase() + 0x51AAF1C))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_attach_id() {
		return ((T (*)(WeaponUpgradeOutput*))(Il2CppBase() + 0x51AAF2C))(this);
	}
	template <typename T = Il2CppList<uint64_t>*> T get_attach_guid() {
		return ((T (*)(WeaponUpgradeOutput*))(Il2CppBase() + 0x51AAF34))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(WeaponUpgradeOutput*, bool))(Il2CppBase() + 0x51AAF3C))(this, createIfMissing);
	}

};

}
