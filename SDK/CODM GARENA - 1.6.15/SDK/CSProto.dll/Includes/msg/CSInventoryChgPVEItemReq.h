#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInventoryChgPVEItemReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInventoryChgPVEItemReq"));
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
	template <typename T = uint32_t> T& _target_index() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = int32_t> T get_type() {
		return ((T (*)(CSInventoryChgPVEItemReq*))(Il2CppBase() + 0x5137498))(this);
	}
	template <typename T = void> T set_type(int32_t value) {
		return ((T (*)(CSInventoryChgPVEItemReq*, int32_t))(Il2CppBase() + 0x51374A0))(this, value);
	}
	template <typename T = int32_t> T get_sub_type() {
		return ((T (*)(CSInventoryChgPVEItemReq*))(Il2CppBase() + 0x51374A8))(this);
	}
	template <typename T = void> T set_sub_type(int32_t value) {
		return ((T (*)(CSInventoryChgPVEItemReq*, int32_t))(Il2CppBase() + 0x51374B0))(this, value);
	}
	template <typename T = uint32_t> T get_new_item_id() {
		return ((T (*)(CSInventoryChgPVEItemReq*))(Il2CppBase() + 0x51374B8))(this);
	}
	template <typename T = void> T set_new_item_id(uint32_t value) {
		return ((T (*)(CSInventoryChgPVEItemReq*, uint32_t))(Il2CppBase() + 0x51374C0))(this, value);
	}
	template <typename T = uint64_t> T get_new_item_guid() {
		return ((T (*)(CSInventoryChgPVEItemReq*))(Il2CppBase() + 0x51374C8))(this);
	}
	template <typename T = void> T set_new_item_guid(uint64_t value) {
		return ((T (*)(CSInventoryChgPVEItemReq*, uint64_t))(Il2CppBase() + 0x51374D0))(this, value);
	}
	template <typename T = uint32_t> T get_host_item_id() {
		return ((T (*)(CSInventoryChgPVEItemReq*))(Il2CppBase() + 0x51374E0))(this);
	}
	template <typename T = void> T set_host_item_id(uint32_t value) {
		return ((T (*)(CSInventoryChgPVEItemReq*, uint32_t))(Il2CppBase() + 0x51374E8))(this, value);
	}
	template <typename T = uintptr_t> T get_role_conf() {
		return ((T (*)(CSInventoryChgPVEItemReq*))(Il2CppBase() + 0x51374F0))(this);
	}
	template <typename T = void> T set_role_conf(uintptr_t value) {
		return ((T (*)(CSInventoryChgPVEItemReq*, uintptr_t))(Il2CppBase() + 0x51374F8))(this, value);
	}
	template <typename T = uint64_t> T get_host_item_guid() {
		return ((T (*)(CSInventoryChgPVEItemReq*))(Il2CppBase() + 0x5137500))(this);
	}
	template <typename T = void> T set_host_item_guid(uint64_t value) {
		return ((T (*)(CSInventoryChgPVEItemReq*, uint64_t))(Il2CppBase() + 0x5137508))(this, value);
	}
	template <typename T = uint32_t> T get_target_index() {
		return ((T (*)(CSInventoryChgPVEItemReq*))(Il2CppBase() + 0x5137518))(this);
	}
	template <typename T = void> T set_target_index(uint32_t value) {
		return ((T (*)(CSInventoryChgPVEItemReq*, uint32_t))(Il2CppBase() + 0x5137520))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInventoryChgPVEItemReq*, bool))(Il2CppBase() + 0x5137528))(this, createIfMissing);
	}

};

}
