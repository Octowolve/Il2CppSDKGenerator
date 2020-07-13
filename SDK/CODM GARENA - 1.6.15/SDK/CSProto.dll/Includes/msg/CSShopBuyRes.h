#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSShopBuyRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSShopBuyRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _boxes() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _shopid() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _delta_inventory() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _props() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _turn_to_mail() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _lucky_box_list() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _bought_limit_goods() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _payment_list() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& _server_time() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& _pay_info() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint64_t> T& _server_time_ms() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _condition_complete_ids() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSShopBuyRes*))(Il2CppBase() + 0x51E217C))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSShopBuyRes*, int32_t))(Il2CppBase() + 0x51E2184))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_boxes() {
		return ((T (*)(CSShopBuyRes*))(Il2CppBase() + 0x51E218C))(this);
	}
	template <typename T = int32_t> T get_shopid() {
		return ((T (*)(CSShopBuyRes*))(Il2CppBase() + 0x51E2194))(this);
	}
	template <typename T = void> T set_shopid(int32_t value) {
		return ((T (*)(CSShopBuyRes*, int32_t))(Il2CppBase() + 0x51E219C))(this, value);
	}
	template <typename T = uintptr_t> T get_delta_inventory() {
		return ((T (*)(CSShopBuyRes*))(Il2CppBase() + 0x51E21A4))(this);
	}
	template <typename T = void> T set_delta_inventory(uintptr_t value) {
		return ((T (*)(CSShopBuyRes*, uintptr_t))(Il2CppBase() + 0x51E21AC))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_props() {
		return ((T (*)(CSShopBuyRes*))(Il2CppBase() + 0x51E21B4))(this);
	}
	template <typename T = int32_t> T get_turn_to_mail() {
		return ((T (*)(CSShopBuyRes*))(Il2CppBase() + 0x51E21BC))(this);
	}
	template <typename T = void> T set_turn_to_mail(int32_t value) {
		return ((T (*)(CSShopBuyRes*, int32_t))(Il2CppBase() + 0x51E21C4))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_lucky_box_list() {
		return ((T (*)(CSShopBuyRes*))(Il2CppBase() + 0x51E21CC))(this);
	}
	template <typename T = uintptr_t> T get_bought_limit_goods() {
		return ((T (*)(CSShopBuyRes*))(Il2CppBase() + 0x51E21D4))(this);
	}
	template <typename T = void> T set_bought_limit_goods(uintptr_t value) {
		return ((T (*)(CSShopBuyRes*, uintptr_t))(Il2CppBase() + 0x51E21DC))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_payment_list() {
		return ((T (*)(CSShopBuyRes*))(Il2CppBase() + 0x51E21E4))(this);
	}
	template <typename T = uint32_t> T get_server_time() {
		return ((T (*)(CSShopBuyRes*))(Il2CppBase() + 0x51E21EC))(this);
	}
	template <typename T = void> T set_server_time(uint32_t value) {
		return ((T (*)(CSShopBuyRes*, uint32_t))(Il2CppBase() + 0x51E21F4))(this, value);
	}
	template <typename T = uintptr_t> T get_pay_info() {
		return ((T (*)(CSShopBuyRes*))(Il2CppBase() + 0x51E21FC))(this);
	}
	template <typename T = void> T set_pay_info(uintptr_t value) {
		return ((T (*)(CSShopBuyRes*, uintptr_t))(Il2CppBase() + 0x51E2204))(this, value);
	}
	template <typename T = uint64_t> T get_server_time_ms() {
		return ((T (*)(CSShopBuyRes*))(Il2CppBase() + 0x51E220C))(this);
	}
	template <typename T = void> T set_server_time_ms(uint64_t value) {
		return ((T (*)(CSShopBuyRes*, uint64_t))(Il2CppBase() + 0x51E2214))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_condition_complete_ids() {
		return ((T (*)(CSShopBuyRes*))(Il2CppBase() + 0x51E2224))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSShopBuyRes*, bool))(Il2CppBase() + 0x51E222C))(this, createIfMissing);
	}

};

}
