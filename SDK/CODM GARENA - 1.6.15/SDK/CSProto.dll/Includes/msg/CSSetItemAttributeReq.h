#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSSetItemAttributeReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSSetItemAttributeReq"));
	}

	template <typename T = int32_t> T& _item_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _item_guid() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _attribute_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint64_t> T& _attribute_guid() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _attribute_idx() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _attribute_type() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& _unload_flag() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = int32_t> T get_item_id() {
		return ((T (*)(CSSetItemAttributeReq*))(Il2CppBase() + 0x51E19E0))(this);
	}
	template <typename T = void> T set_item_id(int32_t value) {
		return ((T (*)(CSSetItemAttributeReq*, int32_t))(Il2CppBase() + 0x51E19E8))(this, value);
	}
	template <typename T = uint64_t> T get_item_guid() {
		return ((T (*)(CSSetItemAttributeReq*))(Il2CppBase() + 0x51E19F0))(this);
	}
	template <typename T = void> T set_item_guid(uint64_t value) {
		return ((T (*)(CSSetItemAttributeReq*, uint64_t))(Il2CppBase() + 0x51E19F8))(this, value);
	}
	template <typename T = uint32_t> T get_attribute_id() {
		return ((T (*)(CSSetItemAttributeReq*))(Il2CppBase() + 0x51E1A08))(this);
	}
	template <typename T = void> T set_attribute_id(uint32_t value) {
		return ((T (*)(CSSetItemAttributeReq*, uint32_t))(Il2CppBase() + 0x51E1A10))(this, value);
	}
	template <typename T = uint64_t> T get_attribute_guid() {
		return ((T (*)(CSSetItemAttributeReq*))(Il2CppBase() + 0x51E1A18))(this);
	}
	template <typename T = void> T set_attribute_guid(uint64_t value) {
		return ((T (*)(CSSetItemAttributeReq*, uint64_t))(Il2CppBase() + 0x51E1A20))(this, value);
	}
	template <typename T = int32_t> T get_attribute_idx() {
		return ((T (*)(CSSetItemAttributeReq*))(Il2CppBase() + 0x51E1A30))(this);
	}
	template <typename T = void> T set_attribute_idx(int32_t value) {
		return ((T (*)(CSSetItemAttributeReq*, int32_t))(Il2CppBase() + 0x51E1A38))(this, value);
	}
	template <typename T = int32_t> T get_attribute_type() {
		return ((T (*)(CSSetItemAttributeReq*))(Il2CppBase() + 0x51E1A40))(this);
	}
	template <typename T = void> T set_attribute_type(int32_t value) {
		return ((T (*)(CSSetItemAttributeReq*, int32_t))(Il2CppBase() + 0x51E1A48))(this, value);
	}
	template <typename T = int32_t> T get_unload_flag() {
		return ((T (*)(CSSetItemAttributeReq*))(Il2CppBase() + 0x51E1A50))(this);
	}
	template <typename T = void> T set_unload_flag(int32_t value) {
		return ((T (*)(CSSetItemAttributeReq*, int32_t))(Il2CppBase() + 0x51E1A58))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSSetItemAttributeReq*, bool))(Il2CppBase() + 0x51E1A60))(this, createIfMissing);
	}

};

}
