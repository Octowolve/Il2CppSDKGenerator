#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInventoryChgCopyLoadoutRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInventoryChgCopyLoadoutRes"));
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
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSInventoryChgCopyLoadoutRes*))(Il2CppBase() + 0x51DCC38))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSInventoryChgCopyLoadoutRes*, int32_t))(Il2CppBase() + 0x51DCC40))(this, value);
	}
	template <typename T = int32_t> T get_loadout_idx() {
		return ((T (*)(CSInventoryChgCopyLoadoutRes*))(Il2CppBase() + 0x51DCC48))(this);
	}
	template <typename T = void> T set_loadout_idx(int32_t value) {
		return ((T (*)(CSInventoryChgCopyLoadoutRes*, int32_t))(Il2CppBase() + 0x51DCC50))(this, value);
	}
	template <typename T = uintptr_t> T get_loadout() {
		return ((T (*)(CSInventoryChgCopyLoadoutRes*))(Il2CppBase() + 0x51DCC58))(this);
	}
	template <typename T = void> T set_loadout(uintptr_t value) {
		return ((T (*)(CSInventoryChgCopyLoadoutRes*, uintptr_t))(Il2CppBase() + 0x51DCC60))(this, value);
	}
	template <typename T = uint32_t> T get_game_type() {
		return ((T (*)(CSInventoryChgCopyLoadoutRes*))(Il2CppBase() + 0x51DCC68))(this);
	}
	template <typename T = void> T set_game_type(uint32_t value) {
		return ((T (*)(CSInventoryChgCopyLoadoutRes*, uint32_t))(Il2CppBase() + 0x51DCC70))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInventoryChgCopyLoadoutRes*, bool))(Il2CppBase() + 0x51DCC78))(this, createIfMissing);
	}

};

}
