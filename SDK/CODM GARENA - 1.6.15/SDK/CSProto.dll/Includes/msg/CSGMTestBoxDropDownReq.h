#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGMTestBoxDropDownReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGMTestBoxDropDownReq"));
	}

	template <typename T = int32_t> T& _box_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _item_num() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _spi() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _sample_cnt() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_box_id() {
		return ((T (*)(CSGMTestBoxDropDownReq*))(Il2CppBase() + 0x51DD2E8))(this);
	}
	template <typename T = void> T set_box_id(int32_t value) {
		return ((T (*)(CSGMTestBoxDropDownReq*, int32_t))(Il2CppBase() + 0x51DD2F0))(this, value);
	}
	template <typename T = int32_t> T get_item_num() {
		return ((T (*)(CSGMTestBoxDropDownReq*))(Il2CppBase() + 0x51DD2F8))(this);
	}
	template <typename T = void> T set_item_num(int32_t value) {
		return ((T (*)(CSGMTestBoxDropDownReq*, int32_t))(Il2CppBase() + 0x51DD300))(this, value);
	}
	template <typename T = int32_t> T get_spi() {
		return ((T (*)(CSGMTestBoxDropDownReq*))(Il2CppBase() + 0x51DD308))(this);
	}
	template <typename T = void> T set_spi(int32_t value) {
		return ((T (*)(CSGMTestBoxDropDownReq*, int32_t))(Il2CppBase() + 0x51DD310))(this, value);
	}
	template <typename T = int32_t> T get_sample_cnt() {
		return ((T (*)(CSGMTestBoxDropDownReq*))(Il2CppBase() + 0x51DD318))(this);
	}
	template <typename T = void> T set_sample_cnt(int32_t value) {
		return ((T (*)(CSGMTestBoxDropDownReq*, int32_t))(Il2CppBase() + 0x51DD320))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGMTestBoxDropDownReq*, bool))(Il2CppBase() + 0x51DD328))(this, createIfMissing);
	}

};

}
