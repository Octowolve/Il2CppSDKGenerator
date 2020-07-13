#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInventoryChgLoadoutItemReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInventoryChgLoadoutItemReq"));
	}

	template <typename T = int32_t> T& _loadout_idx() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _new_item_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint64_t> T& _new_item_guid() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _item_pos() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _game_type() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _lobby_loadout() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = int32_t> T get_loadout_idx() {
		return ((T (*)(CSInventoryChgLoadoutItemReq*))(Il2CppBase() + 0x51DCDC0))(this);
	}
	template <typename T = void> T set_loadout_idx(int32_t value) {
		return ((T (*)(CSInventoryChgLoadoutItemReq*, int32_t))(Il2CppBase() + 0x51DCDC8))(this, value);
	}
	template <typename T = uint32_t> T get_new_item_id() {
		return ((T (*)(CSInventoryChgLoadoutItemReq*))(Il2CppBase() + 0x51DCDD0))(this);
	}
	template <typename T = void> T set_new_item_id(uint32_t value) {
		return ((T (*)(CSInventoryChgLoadoutItemReq*, uint32_t))(Il2CppBase() + 0x51DCDD8))(this, value);
	}
	template <typename T = uint64_t> T get_new_item_guid() {
		return ((T (*)(CSInventoryChgLoadoutItemReq*))(Il2CppBase() + 0x51DCDE0))(this);
	}
	template <typename T = void> T set_new_item_guid(uint64_t value) {
		return ((T (*)(CSInventoryChgLoadoutItemReq*, uint64_t))(Il2CppBase() + 0x51DCDE8))(this, value);
	}
	template <typename T = int32_t> T get_item_pos() {
		return ((T (*)(CSInventoryChgLoadoutItemReq*))(Il2CppBase() + 0x51DCDF8))(this);
	}
	template <typename T = void> T set_item_pos(int32_t value) {
		return ((T (*)(CSInventoryChgLoadoutItemReq*, int32_t))(Il2CppBase() + 0x51DCE00))(this, value);
	}
	template <typename T = uint32_t> T get_game_type() {
		return ((T (*)(CSInventoryChgLoadoutItemReq*))(Il2CppBase() + 0x51DCE08))(this);
	}
	template <typename T = void> T set_game_type(uint32_t value) {
		return ((T (*)(CSInventoryChgLoadoutItemReq*, uint32_t))(Il2CppBase() + 0x51DCE10))(this, value);
	}
	template <typename T = uint32_t> T get_lobby_loadout() {
		return ((T (*)(CSInventoryChgLoadoutItemReq*))(Il2CppBase() + 0x51DCE18))(this);
	}
	template <typename T = void> T set_lobby_loadout(uint32_t value) {
		return ((T (*)(CSInventoryChgLoadoutItemReq*, uint32_t))(Il2CppBase() + 0x51DCE20))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInventoryChgLoadoutItemReq*, bool))(Il2CppBase() + 0x51DCE28))(this, createIfMissing);
	}

};

}
