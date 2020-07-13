#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSShopBuyReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSShopBuyReq"));
	}

	template <typename T = int32_t> T& _shopid() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _payment_type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _buy_num() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _sale_duration_type() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _pkg_index() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _client_price() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = int32_t> T get_shopid() {
		return ((T (*)(CSShopBuyReq*))(Il2CppBase() + 0x51E1F8C))(this);
	}
	template <typename T = void> T set_shopid(int32_t value) {
		return ((T (*)(CSShopBuyReq*, int32_t))(Il2CppBase() + 0x51E1F94))(this, value);
	}
	template <typename T = int32_t> T get_payment_type() {
		return ((T (*)(CSShopBuyReq*))(Il2CppBase() + 0x51E1F9C))(this);
	}
	template <typename T = void> T set_payment_type(int32_t value) {
		return ((T (*)(CSShopBuyReq*, int32_t))(Il2CppBase() + 0x51E1FA4))(this, value);
	}
	template <typename T = uint32_t> T get_buy_num() {
		return ((T (*)(CSShopBuyReq*))(Il2CppBase() + 0x51E1FAC))(this);
	}
	template <typename T = void> T set_buy_num(uint32_t value) {
		return ((T (*)(CSShopBuyReq*, uint32_t))(Il2CppBase() + 0x51E1FB4))(this, value);
	}
	template <typename T = int32_t> T get_sale_duration_type() {
		return ((T (*)(CSShopBuyReq*))(Il2CppBase() + 0x51E1FBC))(this);
	}
	template <typename T = void> T set_sale_duration_type(int32_t value) {
		return ((T (*)(CSShopBuyReq*, int32_t))(Il2CppBase() + 0x51E1FC4))(this, value);
	}
	template <typename T = int32_t> T get_pkg_index() {
		return ((T (*)(CSShopBuyReq*))(Il2CppBase() + 0x51E1FCC))(this);
	}
	template <typename T = void> T set_pkg_index(int32_t value) {
		return ((T (*)(CSShopBuyReq*, int32_t))(Il2CppBase() + 0x51E1FD4))(this, value);
	}
	template <typename T = int32_t> T get_client_price() {
		return ((T (*)(CSShopBuyReq*))(Il2CppBase() + 0x51E1FDC))(this);
	}
	template <typename T = void> T set_client_price(int32_t value) {
		return ((T (*)(CSShopBuyReq*, int32_t))(Il2CppBase() + 0x51E1FE4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSShopBuyReq*, bool))(Il2CppBase() + 0x51E1FEC))(this, createIfMissing);
	}

};

}
