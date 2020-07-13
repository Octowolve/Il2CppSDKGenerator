#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInventoryChgAttributeRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInventoryChgAttributeRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _loadout_idx() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _loadout() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _game_type() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& _firearm_conf() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _role_conf() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _lobby_loadout() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSInventoryChgAttributeRes*))(Il2CppBase() + 0x51DCA78))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSInventoryChgAttributeRes*, int32_t))(Il2CppBase() + 0x51DCA80))(this, value);
	}
	template <typename T = int32_t> T get_loadout_idx() {
		return ((T (*)(CSInventoryChgAttributeRes*))(Il2CppBase() + 0x51DCA88))(this);
	}
	template <typename T = void> T set_loadout_idx(int32_t value) {
		return ((T (*)(CSInventoryChgAttributeRes*, int32_t))(Il2CppBase() + 0x51DCA90))(this, value);
	}
	template <typename T = uintptr_t> T get_loadout() {
		return ((T (*)(CSInventoryChgAttributeRes*))(Il2CppBase() + 0x51DCA98))(this);
	}
	template <typename T = void> T set_loadout(uintptr_t value) {
		return ((T (*)(CSInventoryChgAttributeRes*, uintptr_t))(Il2CppBase() + 0x51DCAA0))(this, value);
	}
	template <typename T = uint32_t> T get_game_type() {
		return ((T (*)(CSInventoryChgAttributeRes*))(Il2CppBase() + 0x51DCAA8))(this);
	}
	template <typename T = void> T set_game_type(uint32_t value) {
		return ((T (*)(CSInventoryChgAttributeRes*, uint32_t))(Il2CppBase() + 0x51DCAB0))(this, value);
	}
	template <typename T = uintptr_t> T get_firearm_conf() {
		return ((T (*)(CSInventoryChgAttributeRes*))(Il2CppBase() + 0x51DCAB8))(this);
	}
	template <typename T = void> T set_firearm_conf(uintptr_t value) {
		return ((T (*)(CSInventoryChgAttributeRes*, uintptr_t))(Il2CppBase() + 0x51DCAC0))(this, value);
	}
	template <typename T = uintptr_t> T get_role_conf() {
		return ((T (*)(CSInventoryChgAttributeRes*))(Il2CppBase() + 0x51DCAC8))(this);
	}
	template <typename T = void> T set_role_conf(uintptr_t value) {
		return ((T (*)(CSInventoryChgAttributeRes*, uintptr_t))(Il2CppBase() + 0x51DCAD0))(this, value);
	}
	template <typename T = uint32_t> T get_lobby_loadout() {
		return ((T (*)(CSInventoryChgAttributeRes*))(Il2CppBase() + 0x51DCAD8))(this);
	}
	template <typename T = void> T set_lobby_loadout(uint32_t value) {
		return ((T (*)(CSInventoryChgAttributeRes*, uint32_t))(Il2CppBase() + 0x51DCAE0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInventoryChgAttributeRes*, bool))(Il2CppBase() + 0x51DCAE8))(this, createIfMissing);
	}

};

}
