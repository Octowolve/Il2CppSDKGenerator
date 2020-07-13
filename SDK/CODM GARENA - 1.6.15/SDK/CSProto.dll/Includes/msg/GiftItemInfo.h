#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GiftItemInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GiftItemInfo"));
	}

	template <typename T = uint32_t> T& _shop_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _start_time() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _end_time() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _message() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& _theme_type() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& _item_num() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& _good_id() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint64_t> T& _gift_id() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& _pkg_index() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& _read_flag() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& _list_type() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = uint32_t> T get_shop_id() {
		return ((T (*)(GiftItemInfo*))(Il2CppBase() + 0x50CD8BC))(this);
	}
	template <typename T = void> T set_shop_id(uint32_t value) {
		return ((T (*)(GiftItemInfo*, uint32_t))(Il2CppBase() + 0x50CD8C4))(this, value);
	}
	template <typename T = uintptr_t> T get_type() {
		return ((T (*)(GiftItemInfo*))(Il2CppBase() + 0x50CD8CC))(this);
	}
	template <typename T = void> T set_type(uintptr_t value) {
		return ((T (*)(GiftItemInfo*, uintptr_t))(Il2CppBase() + 0x50CD8D4))(this, value);
	}
	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(GiftItemInfo*))(Il2CppBase() + 0x50CD8DC))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(GiftItemInfo*, uint64_t))(Il2CppBase() + 0x50CD8E4))(this, value);
	}
	template <typename T = uint32_t> T get_start_time() {
		return ((T (*)(GiftItemInfo*))(Il2CppBase() + 0x50CD8F4))(this);
	}
	template <typename T = void> T set_start_time(uint32_t value) {
		return ((T (*)(GiftItemInfo*, uint32_t))(Il2CppBase() + 0x50CD8FC))(this, value);
	}
	template <typename T = uint32_t> T get_end_time() {
		return ((T (*)(GiftItemInfo*))(Il2CppBase() + 0x50CD904))(this);
	}
	template <typename T = void> T set_end_time(uint32_t value) {
		return ((T (*)(GiftItemInfo*, uint32_t))(Il2CppBase() + 0x50CD90C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_message() {
		return ((T (*)(GiftItemInfo*))(Il2CppBase() + 0x50CD914))(this);
	}
	template <typename T = void> T set_message(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(GiftItemInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x50CD91C))(this, value);
	}
	template <typename T = uint32_t> T get_theme_type() {
		return ((T (*)(GiftItemInfo*))(Il2CppBase() + 0x50CD924))(this);
	}
	template <typename T = void> T set_theme_type(uint32_t value) {
		return ((T (*)(GiftItemInfo*, uint32_t))(Il2CppBase() + 0x50CD92C))(this, value);
	}
	template <typename T = uint32_t> T get_item_num() {
		return ((T (*)(GiftItemInfo*))(Il2CppBase() + 0x50CD934))(this);
	}
	template <typename T = void> T set_item_num(uint32_t value) {
		return ((T (*)(GiftItemInfo*, uint32_t))(Il2CppBase() + 0x50CD93C))(this, value);
	}
	template <typename T = uint32_t> T get_good_id() {
		return ((T (*)(GiftItemInfo*))(Il2CppBase() + 0x50CD944))(this);
	}
	template <typename T = void> T set_good_id(uint32_t value) {
		return ((T (*)(GiftItemInfo*, uint32_t))(Il2CppBase() + 0x50CD94C))(this, value);
	}
	template <typename T = uint64_t> T get_gift_id() {
		return ((T (*)(GiftItemInfo*))(Il2CppBase() + 0x50CD954))(this);
	}
	template <typename T = void> T set_gift_id(uint64_t value) {
		return ((T (*)(GiftItemInfo*, uint64_t))(Il2CppBase() + 0x50CD95C))(this, value);
	}
	template <typename T = int32_t> T get_pkg_index() {
		return ((T (*)(GiftItemInfo*))(Il2CppBase() + 0x50CD96C))(this);
	}
	template <typename T = void> T set_pkg_index(int32_t value) {
		return ((T (*)(GiftItemInfo*, int32_t))(Il2CppBase() + 0x50CD974))(this, value);
	}
	template <typename T = bool> T get_read_flag() {
		return ((T (*)(GiftItemInfo*))(Il2CppBase() + 0x50CD97C))(this);
	}
	template <typename T = void> T set_read_flag(bool value) {
		return ((T (*)(GiftItemInfo*, bool))(Il2CppBase() + 0x50CD984))(this, value);
	}
	template <typename T = uintptr_t> T get_list_type() {
		return ((T (*)(GiftItemInfo*))(Il2CppBase() + 0x50CD98C))(this);
	}
	template <typename T = void> T set_list_type(uintptr_t value) {
		return ((T (*)(GiftItemInfo*, uintptr_t))(Il2CppBase() + 0x50CD994))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GiftItemInfo*, bool))(Il2CppBase() + 0x50CD99C))(this, createIfMissing);
	}

};

}
