#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CardProp
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CardProp"));
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
	template <typename T = int32_t> T& _duration() {
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
		return ((T (*)(CardProp*))(Il2CppBase() + 0x516DD98))(this);
	}
	template <typename T = void> T set_item_id(uint32_t value) {
		return ((T (*)(CardProp*, uint32_t))(Il2CppBase() + 0x516DDA0))(this, value);
	}
	template <typename T = uint32_t> T get_item_num() {
		return ((T (*)(CardProp*))(Il2CppBase() + 0x516DDA8))(this);
	}
	template <typename T = void> T set_item_num(uint32_t value) {
		return ((T (*)(CardProp*, uint32_t))(Il2CppBase() + 0x516DDB0))(this, value);
	}
	template <typename T = uint32_t> T get_item_color() {
		return ((T (*)(CardProp*))(Il2CppBase() + 0x516DDB8))(this);
	}
	template <typename T = void> T set_item_color(uint32_t value) {
		return ((T (*)(CardProp*, uint32_t))(Il2CppBase() + 0x516DDC0))(this, value);
	}
	template <typename T = int32_t> T get_duration() {
		return ((T (*)(CardProp*))(Il2CppBase() + 0x516DDC8))(this);
	}
	template <typename T = void> T set_duration(int32_t value) {
		return ((T (*)(CardProp*, int32_t))(Il2CppBase() + 0x516DDD0))(this, value);
	}
	template <typename T = bool> T get_is_repeated() {
		return ((T (*)(CardProp*))(Il2CppBase() + 0x516DDD8))(this);
	}
	template <typename T = void> T set_is_repeated(bool value) {
		return ((T (*)(CardProp*, bool))(Il2CppBase() + 0x516DDE0))(this, value);
	}
	template <typename T = int32_t> T get_price() {
		return ((T (*)(CardProp*))(Il2CppBase() + 0x516DDE8))(this);
	}
	template <typename T = void> T set_price(int32_t value) {
		return ((T (*)(CardProp*, int32_t))(Il2CppBase() + 0x516DDF0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CardProp*, bool))(Il2CppBase() + 0x516DDF8))(this, createIfMissing);
	}

};

}
