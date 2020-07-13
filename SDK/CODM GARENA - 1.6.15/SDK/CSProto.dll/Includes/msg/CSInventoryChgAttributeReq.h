#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInventoryChgAttributeReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInventoryChgAttributeReq"));
	}

	template <typename T = int32_t> T& _loadout_idx() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _attr_type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _weapon_type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _attr_idx() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _new_attr_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint64_t> T& _new_attr_guid() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& _game_type() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& _item_id() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint64_t> T& _item_guid() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint32_t> T& _new_attr_sub_type() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _role_conf() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uint32_t> T& _lobby_loadout() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = int32_t> T get_loadout_idx() {
		return ((T (*)(CSInventoryChgAttributeReq*))(Il2CppBase() + 0x51DC98C))(this);
	}
	template <typename T = void> T set_loadout_idx(int32_t value) {
		return ((T (*)(CSInventoryChgAttributeReq*, int32_t))(Il2CppBase() + 0x51DC994))(this, value);
	}
	template <typename T = int32_t> T get_attr_type() {
		return ((T (*)(CSInventoryChgAttributeReq*))(Il2CppBase() + 0x51DC99C))(this);
	}
	template <typename T = void> T set_attr_type(int32_t value) {
		return ((T (*)(CSInventoryChgAttributeReq*, int32_t))(Il2CppBase() + 0x51DC9A4))(this, value);
	}
	template <typename T = int32_t> T get_weapon_type() {
		return ((T (*)(CSInventoryChgAttributeReq*))(Il2CppBase() + 0x51DC9AC))(this);
	}
	template <typename T = void> T set_weapon_type(int32_t value) {
		return ((T (*)(CSInventoryChgAttributeReq*, int32_t))(Il2CppBase() + 0x51DC9B4))(this, value);
	}
	template <typename T = int32_t> T get_attr_idx() {
		return ((T (*)(CSInventoryChgAttributeReq*))(Il2CppBase() + 0x51DC9BC))(this);
	}
	template <typename T = void> T set_attr_idx(int32_t value) {
		return ((T (*)(CSInventoryChgAttributeReq*, int32_t))(Il2CppBase() + 0x51DC9C4))(this, value);
	}
	template <typename T = uint32_t> T get_new_attr_id() {
		return ((T (*)(CSInventoryChgAttributeReq*))(Il2CppBase() + 0x51DC9CC))(this);
	}
	template <typename T = void> T set_new_attr_id(uint32_t value) {
		return ((T (*)(CSInventoryChgAttributeReq*, uint32_t))(Il2CppBase() + 0x51DC9D4))(this, value);
	}
	template <typename T = uint64_t> T get_new_attr_guid() {
		return ((T (*)(CSInventoryChgAttributeReq*))(Il2CppBase() + 0x51DC9DC))(this);
	}
	template <typename T = void> T set_new_attr_guid(uint64_t value) {
		return ((T (*)(CSInventoryChgAttributeReq*, uint64_t))(Il2CppBase() + 0x51DC9E4))(this, value);
	}
	template <typename T = uint32_t> T get_game_type() {
		return ((T (*)(CSInventoryChgAttributeReq*))(Il2CppBase() + 0x51DC9F4))(this);
	}
	template <typename T = void> T set_game_type(uint32_t value) {
		return ((T (*)(CSInventoryChgAttributeReq*, uint32_t))(Il2CppBase() + 0x51DC9FC))(this, value);
	}
	template <typename T = uint32_t> T get_item_id() {
		return ((T (*)(CSInventoryChgAttributeReq*))(Il2CppBase() + 0x51DCA04))(this);
	}
	template <typename T = void> T set_item_id(uint32_t value) {
		return ((T (*)(CSInventoryChgAttributeReq*, uint32_t))(Il2CppBase() + 0x51DCA0C))(this, value);
	}
	template <typename T = uint64_t> T get_item_guid() {
		return ((T (*)(CSInventoryChgAttributeReq*))(Il2CppBase() + 0x51DCA14))(this);
	}
	template <typename T = void> T set_item_guid(uint64_t value) {
		return ((T (*)(CSInventoryChgAttributeReq*, uint64_t))(Il2CppBase() + 0x51DCA1C))(this, value);
	}
	template <typename T = uint32_t> T get_new_attr_sub_type() {
		return ((T (*)(CSInventoryChgAttributeReq*))(Il2CppBase() + 0x51DCA2C))(this);
	}
	template <typename T = void> T set_new_attr_sub_type(uint32_t value) {
		return ((T (*)(CSInventoryChgAttributeReq*, uint32_t))(Il2CppBase() + 0x51DCA34))(this, value);
	}
	template <typename T = uintptr_t> T get_role_conf() {
		return ((T (*)(CSInventoryChgAttributeReq*))(Il2CppBase() + 0x51DCA3C))(this);
	}
	template <typename T = void> T set_role_conf(uintptr_t value) {
		return ((T (*)(CSInventoryChgAttributeReq*, uintptr_t))(Il2CppBase() + 0x51DCA44))(this, value);
	}
	template <typename T = uint32_t> T get_lobby_loadout() {
		return ((T (*)(CSInventoryChgAttributeReq*))(Il2CppBase() + 0x51DCA4C))(this);
	}
	template <typename T = void> T set_lobby_loadout(uint32_t value) {
		return ((T (*)(CSInventoryChgAttributeReq*, uint32_t))(Il2CppBase() + 0x51DCA54))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInventoryChgAttributeReq*, bool))(Il2CppBase() + 0x51DCA5C))(this, createIfMissing);
	}

};

}
