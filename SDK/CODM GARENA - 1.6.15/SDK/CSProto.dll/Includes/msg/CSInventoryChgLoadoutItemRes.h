#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInventoryChgLoadoutItemRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInventoryChgLoadoutItemRes"));
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
	template <typename T = uint32_t> T& _lobby_loadout() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSInventoryChgLoadoutItemRes*))(Il2CppBase() + 0x51DCE44))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSInventoryChgLoadoutItemRes*, int32_t))(Il2CppBase() + 0x51DCE4C))(this, value);
	}
	template <typename T = int32_t> T get_loadout_idx() {
		return ((T (*)(CSInventoryChgLoadoutItemRes*))(Il2CppBase() + 0x51DCE54))(this);
	}
	template <typename T = void> T set_loadout_idx(int32_t value) {
		return ((T (*)(CSInventoryChgLoadoutItemRes*, int32_t))(Il2CppBase() + 0x51DCE5C))(this, value);
	}
	template <typename T = uintptr_t> T get_loadout() {
		return ((T (*)(CSInventoryChgLoadoutItemRes*))(Il2CppBase() + 0x51DCE64))(this);
	}
	template <typename T = void> T set_loadout(uintptr_t value) {
		return ((T (*)(CSInventoryChgLoadoutItemRes*, uintptr_t))(Il2CppBase() + 0x51DCE6C))(this, value);
	}
	template <typename T = uint32_t> T get_game_type() {
		return ((T (*)(CSInventoryChgLoadoutItemRes*))(Il2CppBase() + 0x51DCE74))(this);
	}
	template <typename T = void> T set_game_type(uint32_t value) {
		return ((T (*)(CSInventoryChgLoadoutItemRes*, uint32_t))(Il2CppBase() + 0x51DCE7C))(this, value);
	}
	template <typename T = uint32_t> T get_lobby_loadout() {
		return ((T (*)(CSInventoryChgLoadoutItemRes*))(Il2CppBase() + 0x51DCE84))(this);
	}
	template <typename T = void> T set_lobby_loadout(uint32_t value) {
		return ((T (*)(CSInventoryChgLoadoutItemRes*, uint32_t))(Il2CppBase() + 0x51DCE8C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInventoryChgLoadoutItemRes*, bool))(Il2CppBase() + 0x51DCE94))(this, createIfMissing);
	}

};

}
