#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class BoxItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "BoxItem"));
	}

	template <typename T = uint32_t> T& _item_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _gain_type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _item_duration() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint32_t> T get_item_id() {
		return ((T (*)(BoxItem*))(Il2CppBase() + 0x510D9E0))(this);
	}
	template <typename T = void> T set_item_id(uint32_t value) {
		return ((T (*)(BoxItem*, uint32_t))(Il2CppBase() + 0x510D9E8))(this, value);
	}
	template <typename T = int32_t> T get_gain_type() {
		return ((T (*)(BoxItem*))(Il2CppBase() + 0x510D9F0))(this);
	}
	template <typename T = void> T set_gain_type(int32_t value) {
		return ((T (*)(BoxItem*, int32_t))(Il2CppBase() + 0x510D9F8))(this, value);
	}
	template <typename T = int32_t> T get_item_duration() {
		return ((T (*)(BoxItem*))(Il2CppBase() + 0x510DA00))(this);
	}
	template <typename T = void> T set_item_duration(int32_t value) {
		return ((T (*)(BoxItem*, int32_t))(Il2CppBase() + 0x510DA08))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(BoxItem*, bool))(Il2CppBase() + 0x510DA10))(this, createIfMissing);
	}

};

}
