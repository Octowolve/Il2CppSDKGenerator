#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSNewInventoryItemNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSNewInventoryItemNtf"));
	}

	template <typename T = uintptr_t> T& _delta_inventory() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_delta_inventory() {
		return ((T (*)(CSNewInventoryItemNtf*))(Il2CppBase() + 0x51F0E1C))(this);
	}
	template <typename T = void> T set_delta_inventory(uintptr_t value) {
		return ((T (*)(CSNewInventoryItemNtf*, uintptr_t))(Il2CppBase() + 0x51F0E24))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSNewInventoryItemNtf*, bool))(Il2CppBase() + 0x51F0E2C))(this, createIfMissing);
	}

};

}
