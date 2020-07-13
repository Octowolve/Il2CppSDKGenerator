#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInventoryChgLoadoutNameRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInventoryChgLoadoutNameRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _loadout_idx() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& _new_name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _game_type() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSInventoryChgLoadoutNameRes*))(Il2CppBase() + 0x51DD004))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSInventoryChgLoadoutNameRes*, int32_t))(Il2CppBase() + 0x51DD00C))(this, value);
	}
	template <typename T = int32_t> T get_loadout_idx() {
		return ((T (*)(CSInventoryChgLoadoutNameRes*))(Il2CppBase() + 0x51DD014))(this);
	}
	template <typename T = void> T set_loadout_idx(int32_t value) {
		return ((T (*)(CSInventoryChgLoadoutNameRes*, int32_t))(Il2CppBase() + 0x51DD01C))(this, value);
	}
	template <typename T = Il2CppString*> T get_new_name() {
		return ((T (*)(CSInventoryChgLoadoutNameRes*))(Il2CppBase() + 0x51DD024))(this);
	}
	template <typename T = void> T set_new_name(Il2CppString* value) {
		return ((T (*)(CSInventoryChgLoadoutNameRes*, Il2CppString*))(Il2CppBase() + 0x51DD02C))(this, value);
	}
	template <typename T = uint32_t> T get_game_type() {
		return ((T (*)(CSInventoryChgLoadoutNameRes*))(Il2CppBase() + 0x51DD034))(this);
	}
	template <typename T = void> T set_game_type(uint32_t value) {
		return ((T (*)(CSInventoryChgLoadoutNameRes*, uint32_t))(Il2CppBase() + 0x51DD03C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInventoryChgLoadoutNameRes*, bool))(Il2CppBase() + 0x51DD044))(this, createIfMissing);
	}

};

}
