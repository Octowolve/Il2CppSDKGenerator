#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class EquippedItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "EquippedItem"));
	}

	template <typename T = uint32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _guid() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _locked() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _duration_type() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _expire_time() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& _lock_item_id() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint64_t> T& _lock_item_guid() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _num() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& _equip_loc() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& _level() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = uint32_t> T get_id() {
		return ((T (*)(EquippedItem*))(Il2CppBase() + 0x5226DA8))(this);
	}
	template <typename T = void> T set_id(uint32_t value) {
		return ((T (*)(EquippedItem*, uint32_t))(Il2CppBase() + 0x5226DB0))(this, value);
	}
	template <typename T = uint64_t> T get_guid() {
		return ((T (*)(EquippedItem*))(Il2CppBase() + 0x5226DB8))(this);
	}
	template <typename T = void> T set_guid(uint64_t value) {
		return ((T (*)(EquippedItem*, uint64_t))(Il2CppBase() + 0x5226DC0))(this, value);
	}
	template <typename T = int32_t> T get_locked() {
		return ((T (*)(EquippedItem*))(Il2CppBase() + 0x5226DD0))(this);
	}
	template <typename T = void> T set_locked(int32_t value) {
		return ((T (*)(EquippedItem*, int32_t))(Il2CppBase() + 0x5226DD8))(this, value);
	}
	template <typename T = int32_t> T get_duration_type() {
		return ((T (*)(EquippedItem*))(Il2CppBase() + 0x5226DE0))(this);
	}
	template <typename T = void> T set_duration_type(int32_t value) {
		return ((T (*)(EquippedItem*, int32_t))(Il2CppBase() + 0x5226DE8))(this, value);
	}
	template <typename T = uint32_t> T get_expire_time() {
		return ((T (*)(EquippedItem*))(Il2CppBase() + 0x5226DF0))(this);
	}
	template <typename T = void> T set_expire_time(uint32_t value) {
		return ((T (*)(EquippedItem*, uint32_t))(Il2CppBase() + 0x5226DF8))(this, value);
	}
	template <typename T = uint32_t> T get_lock_item_id() {
		return ((T (*)(EquippedItem*))(Il2CppBase() + 0x5226E00))(this);
	}
	template <typename T = void> T set_lock_item_id(uint32_t value) {
		return ((T (*)(EquippedItem*, uint32_t))(Il2CppBase() + 0x5226E08))(this, value);
	}
	template <typename T = uint64_t> T get_lock_item_guid() {
		return ((T (*)(EquippedItem*))(Il2CppBase() + 0x5226E10))(this);
	}
	template <typename T = void> T set_lock_item_guid(uint64_t value) {
		return ((T (*)(EquippedItem*, uint64_t))(Il2CppBase() + 0x5226E18))(this, value);
	}
	template <typename T = int32_t> T get_num() {
		return ((T (*)(EquippedItem*))(Il2CppBase() + 0x5226E28))(this);
	}
	template <typename T = void> T set_num(int32_t value) {
		return ((T (*)(EquippedItem*, int32_t))(Il2CppBase() + 0x5226E30))(this, value);
	}
	template <typename T = int32_t> T get_equip_loc() {
		return ((T (*)(EquippedItem*))(Il2CppBase() + 0x5226E38))(this);
	}
	template <typename T = void> T set_equip_loc(int32_t value) {
		return ((T (*)(EquippedItem*, int32_t))(Il2CppBase() + 0x5226E40))(this, value);
	}
	template <typename T = int32_t> T get_level() {
		return ((T (*)(EquippedItem*))(Il2CppBase() + 0x5226E48))(this);
	}
	template <typename T = void> T set_level(int32_t value) {
		return ((T (*)(EquippedItem*, int32_t))(Il2CppBase() + 0x5226E50))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(EquippedItem*, bool))(Il2CppBase() + 0x5226E58))(this, createIfMissing);
	}

};

}
