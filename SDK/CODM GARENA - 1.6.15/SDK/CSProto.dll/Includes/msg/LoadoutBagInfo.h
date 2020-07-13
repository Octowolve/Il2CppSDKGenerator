#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class LoadoutBagInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "LoadoutBagInfo"));
	}

	template <typename T = uintptr_t> T& _loadout_bag() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _brloadout() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _pve_loadout_bag_old() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _individuationitems() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& _wincircle_individuation_item() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _pve_loadout_bag() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& _lobby_loadout_bag() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _pve_loadout() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& _wincircle_spray_item() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = uintptr_t> T get_loadout_bag() {
		return ((T (*)(LoadoutBagInfo*))(Il2CppBase() + 0x4EA2EAC))(this);
	}
	template <typename T = void> T set_loadout_bag(uintptr_t value) {
		return ((T (*)(LoadoutBagInfo*, uintptr_t))(Il2CppBase() + 0x4EA2EB4))(this, value);
	}
	template <typename T = uintptr_t> T get_brloadout() {
		return ((T (*)(LoadoutBagInfo*))(Il2CppBase() + 0x4EA2EBC))(this);
	}
	template <typename T = void> T set_brloadout(uintptr_t value) {
		return ((T (*)(LoadoutBagInfo*, uintptr_t))(Il2CppBase() + 0x4EA2EC4))(this, value);
	}
	template <typename T = uintptr_t> T get_pve_loadout_bag_old() {
		return ((T (*)(LoadoutBagInfo*))(Il2CppBase() + 0x4EA2ECC))(this);
	}
	template <typename T = void> T set_pve_loadout_bag_old(uintptr_t value) {
		return ((T (*)(LoadoutBagInfo*, uintptr_t))(Il2CppBase() + 0x4EA2ED4))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_individuationitems() {
		return ((T (*)(LoadoutBagInfo*))(Il2CppBase() + 0x4EA2EDC))(this);
	}
	template <typename T = uintptr_t> T get_wincircle_individuation_item() {
		return ((T (*)(LoadoutBagInfo*))(Il2CppBase() + 0x4EA2EE4))(this);
	}
	template <typename T = void> T set_wincircle_individuation_item(uintptr_t value) {
		return ((T (*)(LoadoutBagInfo*, uintptr_t))(Il2CppBase() + 0x4EA2EEC))(this, value);
	}
	template <typename T = uintptr_t> T get_pve_loadout_bag() {
		return ((T (*)(LoadoutBagInfo*))(Il2CppBase() + 0x4EA2EF4))(this);
	}
	template <typename T = void> T set_pve_loadout_bag(uintptr_t value) {
		return ((T (*)(LoadoutBagInfo*, uintptr_t))(Il2CppBase() + 0x4EA2EFC))(this, value);
	}
	template <typename T = uintptr_t> T get_lobby_loadout_bag() {
		return ((T (*)(LoadoutBagInfo*))(Il2CppBase() + 0x4EA2F04))(this);
	}
	template <typename T = void> T set_lobby_loadout_bag(uintptr_t value) {
		return ((T (*)(LoadoutBagInfo*, uintptr_t))(Il2CppBase() + 0x4EA2F0C))(this, value);
	}
	template <typename T = uintptr_t> T get_pve_loadout() {
		return ((T (*)(LoadoutBagInfo*))(Il2CppBase() + 0x4EA2F14))(this);
	}
	template <typename T = void> T set_pve_loadout(uintptr_t value) {
		return ((T (*)(LoadoutBagInfo*, uintptr_t))(Il2CppBase() + 0x4EA2F1C))(this, value);
	}
	template <typename T = uintptr_t> T get_wincircle_spray_item() {
		return ((T (*)(LoadoutBagInfo*))(Il2CppBase() + 0x4EA2F24))(this);
	}
	template <typename T = void> T set_wincircle_spray_item(uintptr_t value) {
		return ((T (*)(LoadoutBagInfo*, uintptr_t))(Il2CppBase() + 0x4EA2F2C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(LoadoutBagInfo*, bool))(Il2CppBase() + 0x4EA2F34))(this, createIfMissing);
	}

};

}
