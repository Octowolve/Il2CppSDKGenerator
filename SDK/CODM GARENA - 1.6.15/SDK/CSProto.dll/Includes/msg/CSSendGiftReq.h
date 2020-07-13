#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSSendGiftReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSSendGiftReq"));
	}

	template <typename T = uint64_t> T& _receive_player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _shop_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _item_num() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _client_price() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _message() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& _is_check_can_send() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& _theme_type() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& _pkg_index() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint64_t> T& _gift_id() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = uint64_t> T get_receive_player_id() {
		return ((T (*)(CSSendGiftReq*))(Il2CppBase() + 0x51E1534))(this);
	}
	template <typename T = void> T set_receive_player_id(uint64_t value) {
		return ((T (*)(CSSendGiftReq*, uint64_t))(Il2CppBase() + 0x51E153C))(this, value);
	}
	template <typename T = int32_t> T get_shop_id() {
		return ((T (*)(CSSendGiftReq*))(Il2CppBase() + 0x51E154C))(this);
	}
	template <typename T = void> T set_shop_id(int32_t value) {
		return ((T (*)(CSSendGiftReq*, int32_t))(Il2CppBase() + 0x51E1554))(this, value);
	}
	template <typename T = uint32_t> T get_item_num() {
		return ((T (*)(CSSendGiftReq*))(Il2CppBase() + 0x51E155C))(this);
	}
	template <typename T = void> T set_item_num(uint32_t value) {
		return ((T (*)(CSSendGiftReq*, uint32_t))(Il2CppBase() + 0x51E1564))(this, value);
	}
	template <typename T = int32_t> T get_client_price() {
		return ((T (*)(CSSendGiftReq*))(Il2CppBase() + 0x51E156C))(this);
	}
	template <typename T = void> T set_client_price(int32_t value) {
		return ((T (*)(CSSendGiftReq*, int32_t))(Il2CppBase() + 0x51E1574))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_message() {
		return ((T (*)(CSSendGiftReq*))(Il2CppBase() + 0x51E157C))(this);
	}
	template <typename T = void> T set_message(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSSendGiftReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51E1584))(this, value);
	}
	template <typename T = bool> T get_is_check_can_send() {
		return ((T (*)(CSSendGiftReq*))(Il2CppBase() + 0x51E158C))(this);
	}
	template <typename T = void> T set_is_check_can_send(bool value) {
		return ((T (*)(CSSendGiftReq*, bool))(Il2CppBase() + 0x51E1594))(this, value);
	}
	template <typename T = uint32_t> T get_theme_type() {
		return ((T (*)(CSSendGiftReq*))(Il2CppBase() + 0x51E159C))(this);
	}
	template <typename T = void> T set_theme_type(uint32_t value) {
		return ((T (*)(CSSendGiftReq*, uint32_t))(Il2CppBase() + 0x51E15A4))(this, value);
	}
	template <typename T = int32_t> T get_pkg_index() {
		return ((T (*)(CSSendGiftReq*))(Il2CppBase() + 0x51E15AC))(this);
	}
	template <typename T = void> T set_pkg_index(int32_t value) {
		return ((T (*)(CSSendGiftReq*, int32_t))(Il2CppBase() + 0x51E15B4))(this, value);
	}
	template <typename T = uint64_t> T get_gift_id() {
		return ((T (*)(CSSendGiftReq*))(Il2CppBase() + 0x51E15BC))(this);
	}
	template <typename T = void> T set_gift_id(uint64_t value) {
		return ((T (*)(CSSendGiftReq*, uint64_t))(Il2CppBase() + 0x51E15C4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSSendGiftReq*, bool))(Il2CppBase() + 0x51E15D4))(this, createIfMissing);
	}

};

}
