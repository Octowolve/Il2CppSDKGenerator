#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInventoryChgBRItemRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInventoryChgBRItemRes"));
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
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSInventoryChgBRItemRes*))(Il2CppBase() + 0x51DCBA0))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSInventoryChgBRItemRes*, int32_t))(Il2CppBase() + 0x51DCBA8))(this, value);
	}
	template <typename T = uintptr_t> T get_loadout() {
		return ((T (*)(CSInventoryChgBRItemRes*))(Il2CppBase() + 0x51DCBB0))(this);
	}
	template <typename T = void> T set_loadout(uintptr_t value) {
		return ((T (*)(CSInventoryChgBRItemRes*, uintptr_t))(Il2CppBase() + 0x51DCBB8))(this, value);
	}
	template <typename T = uintptr_t> T get_unequip_role_data() {
		return ((T (*)(CSInventoryChgBRItemRes*))(Il2CppBase() + 0x51DCBC0))(this);
	}
	template <typename T = void> T set_unequip_role_data(uintptr_t value) {
		return ((T (*)(CSInventoryChgBRItemRes*, uintptr_t))(Il2CppBase() + 0x51DCBC8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInventoryChgBRItemRes*, bool))(Il2CppBase() + 0x51DCBD0))(this, createIfMissing);
	}

};

}
