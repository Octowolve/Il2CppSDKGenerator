#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class InventoryStatEntry
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "InventoryStatEntry"));
	}

	template <typename T = int32_t> T& _color_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _sub_type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& _durable() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _num() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _level_sum() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = int32_t> T get_color_id() {
		return ((T (*)(InventoryStatEntry*))(Il2CppBase() + 0x50D0634))(this);
	}
	template <typename T = void> T set_color_id(int32_t value) {
		return ((T (*)(InventoryStatEntry*, int32_t))(Il2CppBase() + 0x50D063C))(this, value);
	}
	template <typename T = int32_t> T get_sub_type() {
		return ((T (*)(InventoryStatEntry*))(Il2CppBase() + 0x50D0644))(this);
	}
	template <typename T = void> T set_sub_type(int32_t value) {
		return ((T (*)(InventoryStatEntry*, int32_t))(Il2CppBase() + 0x50D064C))(this, value);
	}
	template <typename T = bool> T get_durable() {
		return ((T (*)(InventoryStatEntry*))(Il2CppBase() + 0x50D0654))(this);
	}
	template <typename T = void> T set_durable(bool value) {
		return ((T (*)(InventoryStatEntry*, bool))(Il2CppBase() + 0x50D065C))(this, value);
	}
	template <typename T = uint32_t> T get_num() {
		return ((T (*)(InventoryStatEntry*))(Il2CppBase() + 0x50D0664))(this);
	}
	template <typename T = void> T set_num(uint32_t value) {
		return ((T (*)(InventoryStatEntry*, uint32_t))(Il2CppBase() + 0x50D066C))(this, value);
	}
	template <typename T = uint32_t> T get_level_sum() {
		return ((T (*)(InventoryStatEntry*))(Il2CppBase() + 0x50D0674))(this);
	}
	template <typename T = void> T set_level_sum(uint32_t value) {
		return ((T (*)(InventoryStatEntry*, uint32_t))(Il2CppBase() + 0x50D067C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(InventoryStatEntry*, bool))(Il2CppBase() + 0x50D0684))(this, createIfMissing);
	}

};

}
