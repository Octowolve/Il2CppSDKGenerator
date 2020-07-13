#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInventoryGetUnequipBagConfRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInventoryGetUnequipBagConfRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _loadout_idx() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _game_type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _loadout_conf_type() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _weapon_attr_conf() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _role_attr_conf() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSInventoryGetUnequipBagConfRes*))(Il2CppBase() + 0x51381AC))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSInventoryGetUnequipBagConfRes*, int32_t))(Il2CppBase() + 0x51381B4))(this, value);
	}
	template <typename T = int32_t> T get_loadout_idx() {
		return ((T (*)(CSInventoryGetUnequipBagConfRes*))(Il2CppBase() + 0x51381BC))(this);
	}
	template <typename T = void> T set_loadout_idx(int32_t value) {
		return ((T (*)(CSInventoryGetUnequipBagConfRes*, int32_t))(Il2CppBase() + 0x51381C4))(this, value);
	}
	template <typename T = uint32_t> T get_game_type() {
		return ((T (*)(CSInventoryGetUnequipBagConfRes*))(Il2CppBase() + 0x51381CC))(this);
	}
	template <typename T = void> T set_game_type(uint32_t value) {
		return ((T (*)(CSInventoryGetUnequipBagConfRes*, uint32_t))(Il2CppBase() + 0x51381D4))(this, value);
	}
	template <typename T = uint32_t> T get_loadout_conf_type() {
		return ((T (*)(CSInventoryGetUnequipBagConfRes*))(Il2CppBase() + 0x51381DC))(this);
	}
	template <typename T = void> T set_loadout_conf_type(uint32_t value) {
		return ((T (*)(CSInventoryGetUnequipBagConfRes*, uint32_t))(Il2CppBase() + 0x51381E4))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_weapon_attr_conf() {
		return ((T (*)(CSInventoryGetUnequipBagConfRes*))(Il2CppBase() + 0x51381EC))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_role_attr_conf() {
		return ((T (*)(CSInventoryGetUnequipBagConfRes*))(Il2CppBase() + 0x51381F4))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInventoryGetUnequipBagConfRes*, bool))(Il2CppBase() + 0x51381FC))(this, createIfMissing);
	}

};

}
