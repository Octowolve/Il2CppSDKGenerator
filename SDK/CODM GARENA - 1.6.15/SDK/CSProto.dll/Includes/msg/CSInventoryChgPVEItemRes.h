#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInventoryChgPVEItemRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInventoryChgPVEItemRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _loadout() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _unequip_role_data() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _unequip_weapon_data() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSInventoryChgPVEItemRes*))(Il2CppBase() + 0x5137544))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSInventoryChgPVEItemRes*, int32_t))(Il2CppBase() + 0x513754C))(this, value);
	}
	template <typename T = uintptr_t> T get_loadout() {
		return ((T (*)(CSInventoryChgPVEItemRes*))(Il2CppBase() + 0x5137554))(this);
	}
	template <typename T = void> T set_loadout(uintptr_t value) {
		return ((T (*)(CSInventoryChgPVEItemRes*, uintptr_t))(Il2CppBase() + 0x513755C))(this, value);
	}
	template <typename T = uintptr_t> T get_unequip_role_data() {
		return ((T (*)(CSInventoryChgPVEItemRes*))(Il2CppBase() + 0x5137564))(this);
	}
	template <typename T = void> T set_unequip_role_data(uintptr_t value) {
		return ((T (*)(CSInventoryChgPVEItemRes*, uintptr_t))(Il2CppBase() + 0x513756C))(this, value);
	}
	template <typename T = uintptr_t> T get_unequip_weapon_data() {
		return ((T (*)(CSInventoryChgPVEItemRes*))(Il2CppBase() + 0x5137574))(this);
	}
	template <typename T = void> T set_unequip_weapon_data(uintptr_t value) {
		return ((T (*)(CSInventoryChgPVEItemRes*, uintptr_t))(Il2CppBase() + 0x513757C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInventoryChgPVEItemRes*, bool))(Il2CppBase() + 0x5137584))(this, createIfMissing);
	}

};

}
