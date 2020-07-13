#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PlayerDefaultLoadoutBagInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PlayerDefaultLoadoutBagInfo"));
	}

	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _br_loadout() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _pvp_loadout() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& _pve_loadout() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _pve_loadout_new() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(PlayerDefaultLoadoutBagInfo*))(Il2CppBase() + 0x4EA6958))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(PlayerDefaultLoadoutBagInfo*, uint64_t))(Il2CppBase() + 0x4EA6960))(this, value);
	}
	template <typename T = uintptr_t> T get_br_loadout() {
		return ((T (*)(PlayerDefaultLoadoutBagInfo*))(Il2CppBase() + 0x4EA6970))(this);
	}
	template <typename T = void> T set_br_loadout(uintptr_t value) {
		return ((T (*)(PlayerDefaultLoadoutBagInfo*, uintptr_t))(Il2CppBase() + 0x4EA6978))(this, value);
	}
	template <typename T = uintptr_t> T get_pvp_loadout() {
		return ((T (*)(PlayerDefaultLoadoutBagInfo*))(Il2CppBase() + 0x4EA6980))(this);
	}
	template <typename T = void> T set_pvp_loadout(uintptr_t value) {
		return ((T (*)(PlayerDefaultLoadoutBagInfo*, uintptr_t))(Il2CppBase() + 0x4EA6988))(this, value);
	}
	template <typename T = uintptr_t> T get_pve_loadout() {
		return ((T (*)(PlayerDefaultLoadoutBagInfo*))(Il2CppBase() + 0x4EA6990))(this);
	}
	template <typename T = void> T set_pve_loadout(uintptr_t value) {
		return ((T (*)(PlayerDefaultLoadoutBagInfo*, uintptr_t))(Il2CppBase() + 0x4EA6998))(this, value);
	}
	template <typename T = uintptr_t> T get_pve_loadout_new() {
		return ((T (*)(PlayerDefaultLoadoutBagInfo*))(Il2CppBase() + 0x4EA69A0))(this);
	}
	template <typename T = void> T set_pve_loadout_new(uintptr_t value) {
		return ((T (*)(PlayerDefaultLoadoutBagInfo*, uintptr_t))(Il2CppBase() + 0x4EA69A8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PlayerDefaultLoadoutBagInfo*, bool))(Il2CppBase() + 0x4EA69B0))(this, createIfMissing);
	}

};

}
