#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class LotteryCard
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "LotteryCard"));
	}

	template <typename T = int32_t> T& _item_color() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _proptype() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _item_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _item_num() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _duration() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& _is_repeated() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _price() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = int32_t> T get_item_color() {
		return ((T (*)(LotteryCard*))(Il2CppBase() + 0x4EA34AC))(this);
	}
	template <typename T = void> T set_item_color(int32_t value) {
		return ((T (*)(LotteryCard*, int32_t))(Il2CppBase() + 0x4EA34B4))(this, value);
	}
	template <typename T = uint32_t> T get_proptype() {
		return ((T (*)(LotteryCard*))(Il2CppBase() + 0x4EA34BC))(this);
	}
	template <typename T = void> T set_proptype(uint32_t value) {
		return ((T (*)(LotteryCard*, uint32_t))(Il2CppBase() + 0x4EA34C4))(this, value);
	}
	template <typename T = uint32_t> T get_item_id() {
		return ((T (*)(LotteryCard*))(Il2CppBase() + 0x4EA34CC))(this);
	}
	template <typename T = void> T set_item_id(uint32_t value) {
		return ((T (*)(LotteryCard*, uint32_t))(Il2CppBase() + 0x4EA34D4))(this, value);
	}
	template <typename T = uint32_t> T get_item_num() {
		return ((T (*)(LotteryCard*))(Il2CppBase() + 0x4EA34DC))(this);
	}
	template <typename T = void> T set_item_num(uint32_t value) {
		return ((T (*)(LotteryCard*, uint32_t))(Il2CppBase() + 0x4EA34E4))(this, value);
	}
	template <typename T = uint32_t> T get_duration() {
		return ((T (*)(LotteryCard*))(Il2CppBase() + 0x4EA34EC))(this);
	}
	template <typename T = void> T set_duration(uint32_t value) {
		return ((T (*)(LotteryCard*, uint32_t))(Il2CppBase() + 0x4EA34F4))(this, value);
	}
	template <typename T = bool> T get_is_repeated() {
		return ((T (*)(LotteryCard*))(Il2CppBase() + 0x4EA34FC))(this);
	}
	template <typename T = void> T set_is_repeated(bool value) {
		return ((T (*)(LotteryCard*, bool))(Il2CppBase() + 0x4EA3504))(this, value);
	}
	template <typename T = int32_t> T get_price() {
		return ((T (*)(LotteryCard*))(Il2CppBase() + 0x4EA350C))(this);
	}
	template <typename T = void> T set_price(int32_t value) {
		return ((T (*)(LotteryCard*, int32_t))(Il2CppBase() + 0x4EA3514))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(LotteryCard*, bool))(Il2CppBase() + 0x4EA351C))(this, createIfMissing);
	}

};

}
