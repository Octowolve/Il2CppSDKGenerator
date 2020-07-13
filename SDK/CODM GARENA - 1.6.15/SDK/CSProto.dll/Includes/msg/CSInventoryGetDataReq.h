#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInventoryGetDataReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInventoryGetDataReq"));
	}

	template <typename T = bool> T& _is_bot() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _trophy_count() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _squad_inventory_type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = bool> T get_is_bot() {
		return ((T (*)(CSInventoryGetDataReq*))(Il2CppBase() + 0x5137BA8))(this);
	}
	template <typename T = void> T set_is_bot(bool value) {
		return ((T (*)(CSInventoryGetDataReq*, bool))(Il2CppBase() + 0x5137BB0))(this, value);
	}
	template <typename T = uint32_t> T get_trophy_count() {
		return ((T (*)(CSInventoryGetDataReq*))(Il2CppBase() + 0x5137BB8))(this);
	}
	template <typename T = void> T set_trophy_count(uint32_t value) {
		return ((T (*)(CSInventoryGetDataReq*, uint32_t))(Il2CppBase() + 0x5137BC0))(this, value);
	}
	template <typename T = uintptr_t> T get_squad_inventory_type() {
		return ((T (*)(CSInventoryGetDataReq*))(Il2CppBase() + 0x5137BC8))(this);
	}
	template <typename T = void> T set_squad_inventory_type(uintptr_t value) {
		return ((T (*)(CSInventoryGetDataReq*, uintptr_t))(Il2CppBase() + 0x5137BD0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInventoryGetDataReq*, bool))(Il2CppBase() + 0x5137BD8))(this, createIfMissing);
	}

};

}
