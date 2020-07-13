#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CardPropInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CardPropInfo"));
	}

	template <typename T = uint32_t> T& _item_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _item_num() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _item_color() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _duration() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& _is_repeated() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _price() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uint32_t> T get_item_id() {
		return ((T (*)(CardPropInfo*))(Il2CppBase() + 0x516DE14))(this);
	}
	template <typename T = void> T set_item_id(uint32_t value) {
		return ((T (*)(CardPropInfo*, uint32_t))(Il2CppBase() + 0x516DE1C))(this, value);
	}
	template <typename T = uint32_t> T get_item_num() {
		return ((T (*)(CardPropInfo*))(Il2CppBase() + 0x516DE24))(this);
	}
	template <typename T = void> T set_item_num(uint32_t value) {
		return ((T (*)(CardPropInfo*, uint32_t))(Il2CppBase() + 0x516DE2C))(this, value);
	}
	template <typename T = uint32_t> T get_item_color() {
		return ((T (*)(CardPropInfo*))(Il2CppBase() + 0x516DE34))(this);
	}
	template <typename T = void> T set_item_color(uint32_t value) {
		return ((T (*)(CardPropInfo*, uint32_t))(Il2CppBase() + 0x516DE3C))(this, value);
	}
	template <typename T = uint32_t> T get_duration() {
		return ((T (*)(CardPropInfo*))(Il2CppBase() + 0x516DE44))(this);
	}
	template <typename T = void> T set_duration(uint32_t value) {
		return ((T (*)(CardPropInfo*, uint32_t))(Il2CppBase() + 0x516DE4C))(this, value);
	}
	template <typename T = bool> T get_is_repeated() {
		return ((T (*)(CardPropInfo*))(Il2CppBase() + 0x516DE54))(this);
	}
	template <typename T = void> T set_is_repeated(bool value) {
		return ((T (*)(CardPropInfo*, bool))(Il2CppBase() + 0x516DE5C))(this, value);
	}
	template <typename T = int32_t> T get_price() {
		return ((T (*)(CardPropInfo*))(Il2CppBase() + 0x516DE64))(this);
	}
	template <typename T = void> T set_price(int32_t value) {
		return ((T (*)(CardPropInfo*, int32_t))(Il2CppBase() + 0x516DE6C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CardPropInfo*, bool))(Il2CppBase() + 0x516DE74))(this, createIfMissing);
	}

};

}
