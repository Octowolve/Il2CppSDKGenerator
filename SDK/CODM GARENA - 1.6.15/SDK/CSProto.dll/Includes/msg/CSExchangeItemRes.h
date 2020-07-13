#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSExchangeItemRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSExchangeItemRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _shopid() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& _turn_to_mail() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _delta_inventory() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _props() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _exchange_records() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _exchang_coin_id() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _total_price() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSExchangeItemRes*))(Il2CppBase() + 0x51D18F8))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSExchangeItemRes*, int32_t))(Il2CppBase() + 0x51D1900))(this, value);
	}
	template <typename T = int32_t> T get_shopid() {
		return ((T (*)(CSExchangeItemRes*))(Il2CppBase() + 0x51D1908))(this);
	}
	template <typename T = void> T set_shopid(int32_t value) {
		return ((T (*)(CSExchangeItemRes*, int32_t))(Il2CppBase() + 0x51D1910))(this, value);
	}
	template <typename T = bool> T get_turn_to_mail() {
		return ((T (*)(CSExchangeItemRes*))(Il2CppBase() + 0x51D1918))(this);
	}
	template <typename T = void> T set_turn_to_mail(bool value) {
		return ((T (*)(CSExchangeItemRes*, bool))(Il2CppBase() + 0x51D1920))(this, value);
	}
	template <typename T = uintptr_t> T get_delta_inventory() {
		return ((T (*)(CSExchangeItemRes*))(Il2CppBase() + 0x51D1928))(this);
	}
	template <typename T = void> T set_delta_inventory(uintptr_t value) {
		return ((T (*)(CSExchangeItemRes*, uintptr_t))(Il2CppBase() + 0x51D1930))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_props() {
		return ((T (*)(CSExchangeItemRes*))(Il2CppBase() + 0x51D1938))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_exchange_records() {
		return ((T (*)(CSExchangeItemRes*))(Il2CppBase() + 0x51D1940))(this);
	}
	template <typename T = int32_t> T get_exchang_coin_id() {
		return ((T (*)(CSExchangeItemRes*))(Il2CppBase() + 0x51D1948))(this);
	}
	template <typename T = void> T set_exchang_coin_id(int32_t value) {
		return ((T (*)(CSExchangeItemRes*, int32_t))(Il2CppBase() + 0x51D1950))(this, value);
	}
	template <typename T = int32_t> T get_total_price() {
		return ((T (*)(CSExchangeItemRes*))(Il2CppBase() + 0x51D1958))(this);
	}
	template <typename T = void> T set_total_price(int32_t value) {
		return ((T (*)(CSExchangeItemRes*, int32_t))(Il2CppBase() + 0x51D1960))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSExchangeItemRes*, bool))(Il2CppBase() + 0x51D1968))(this, createIfMissing);
	}

};

}
