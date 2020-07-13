#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSShopPayInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSShopPayInfo"));
	}

	template <typename T = int32_t> T& _pkg_index() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _payment_type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _buy_num() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _price() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _pay_total() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _exchange_item() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = int32_t> T get_pkg_index() {
		return ((T (*)(CSShopPayInfo*))(Il2CppBase() + 0x51E26DC))(this);
	}
	template <typename T = void> T set_pkg_index(int32_t value) {
		return ((T (*)(CSShopPayInfo*, int32_t))(Il2CppBase() + 0x51E26E4))(this, value);
	}
	template <typename T = int32_t> T get_payment_type() {
		return ((T (*)(CSShopPayInfo*))(Il2CppBase() + 0x51E26EC))(this);
	}
	template <typename T = void> T set_payment_type(int32_t value) {
		return ((T (*)(CSShopPayInfo*, int32_t))(Il2CppBase() + 0x51E26F4))(this, value);
	}
	template <typename T = int32_t> T get_buy_num() {
		return ((T (*)(CSShopPayInfo*))(Il2CppBase() + 0x51E26FC))(this);
	}
	template <typename T = void> T set_buy_num(int32_t value) {
		return ((T (*)(CSShopPayInfo*, int32_t))(Il2CppBase() + 0x51E2704))(this, value);
	}
	template <typename T = int32_t> T get_price() {
		return ((T (*)(CSShopPayInfo*))(Il2CppBase() + 0x51E270C))(this);
	}
	template <typename T = void> T set_price(int32_t value) {
		return ((T (*)(CSShopPayInfo*, int32_t))(Il2CppBase() + 0x51E2714))(this, value);
	}
	template <typename T = int32_t> T get_pay_total() {
		return ((T (*)(CSShopPayInfo*))(Il2CppBase() + 0x51E271C))(this);
	}
	template <typename T = void> T set_pay_total(int32_t value) {
		return ((T (*)(CSShopPayInfo*, int32_t))(Il2CppBase() + 0x51E2724))(this, value);
	}
	template <typename T = int32_t> T get_exchange_item() {
		return ((T (*)(CSShopPayInfo*))(Il2CppBase() + 0x51E272C))(this);
	}
	template <typename T = void> T set_exchange_item(int32_t value) {
		return ((T (*)(CSShopPayInfo*, int32_t))(Il2CppBase() + 0x51E2734))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSShopPayInfo*, bool))(Il2CppBase() + 0x51E273C))(this, createIfMissing);
	}

};

}
