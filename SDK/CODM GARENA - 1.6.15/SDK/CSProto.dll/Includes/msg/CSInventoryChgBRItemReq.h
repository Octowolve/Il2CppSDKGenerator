#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInventoryChgBRItemReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInventoryChgBRItemReq"));
	}

	template <typename T = int32_t> T& _type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _sub_type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _new_item_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint64_t> T& _new_item_guid() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _host_item_id() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _role_conf() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint64_t> T& _host_item_guid() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = int32_t> T get_type() {
		return ((T (*)(CSInventoryChgBRItemReq*))(Il2CppBase() + 0x51DCB04))(this);
	}
	template <typename T = void> T set_type(int32_t value) {
		return ((T (*)(CSInventoryChgBRItemReq*, int32_t))(Il2CppBase() + 0x51DCB0C))(this, value);
	}
	template <typename T = int32_t> T get_sub_type() {
		return ((T (*)(CSInventoryChgBRItemReq*))(Il2CppBase() + 0x51DCB14))(this);
	}
	template <typename T = void> T set_sub_type(int32_t value) {
		return ((T (*)(CSInventoryChgBRItemReq*, int32_t))(Il2CppBase() + 0x51DCB1C))(this, value);
	}
	template <typename T = uint32_t> T get_new_item_id() {
		return ((T (*)(CSInventoryChgBRItemReq*))(Il2CppBase() + 0x51DCB24))(this);
	}
	template <typename T = void> T set_new_item_id(uint32_t value) {
		return ((T (*)(CSInventoryChgBRItemReq*, uint32_t))(Il2CppBase() + 0x51DCB2C))(this, value);
	}
	template <typename T = uint64_t> T get_new_item_guid() {
		return ((T (*)(CSInventoryChgBRItemReq*))(Il2CppBase() + 0x51DCB34))(this);
	}
	template <typename T = void> T set_new_item_guid(uint64_t value) {
		return ((T (*)(CSInventoryChgBRItemReq*, uint64_t))(Il2CppBase() + 0x51DCB3C))(this, value);
	}
	template <typename T = uint32_t> T get_host_item_id() {
		return ((T (*)(CSInventoryChgBRItemReq*))(Il2CppBase() + 0x51DCB4C))(this);
	}
	template <typename T = void> T set_host_item_id(uint32_t value) {
		return ((T (*)(CSInventoryChgBRItemReq*, uint32_t))(Il2CppBase() + 0x51DCB54))(this, value);
	}
	template <typename T = uintptr_t> T get_role_conf() {
		return ((T (*)(CSInventoryChgBRItemReq*))(Il2CppBase() + 0x51DCB5C))(this);
	}
	template <typename T = void> T set_role_conf(uintptr_t value) {
		return ((T (*)(CSInventoryChgBRItemReq*, uintptr_t))(Il2CppBase() + 0x51DCB64))(this, value);
	}
	template <typename T = uint64_t> T get_host_item_guid() {
		return ((T (*)(CSInventoryChgBRItemReq*))(Il2CppBase() + 0x51DCB6C))(this);
	}
	template <typename T = void> T set_host_item_guid(uint64_t value) {
		return ((T (*)(CSInventoryChgBRItemReq*, uint64_t))(Il2CppBase() + 0x51DCB74))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInventoryChgBRItemReq*, bool))(Il2CppBase() + 0x51DCB84))(this, createIfMissing);
	}

};

}
