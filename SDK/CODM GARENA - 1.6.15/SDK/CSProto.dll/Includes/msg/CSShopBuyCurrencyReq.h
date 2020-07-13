#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSShopBuyCurrencyReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSShopBuyCurrencyReq"));
	}

	template <typename T = int32_t> T& _currency_type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _buy_times_today() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_currency_type() {
		return ((T (*)(CSShopBuyCurrencyReq*))(Il2CppBase() + 0x51E1F14))(this);
	}
	template <typename T = void> T set_currency_type(int32_t value) {
		return ((T (*)(CSShopBuyCurrencyReq*, int32_t))(Il2CppBase() + 0x51E1F1C))(this, value);
	}
	template <typename T = int32_t> T get_buy_times_today() {
		return ((T (*)(CSShopBuyCurrencyReq*))(Il2CppBase() + 0x51E1F24))(this);
	}
	template <typename T = void> T set_buy_times_today(int32_t value) {
		return ((T (*)(CSShopBuyCurrencyReq*, int32_t))(Il2CppBase() + 0x51E1F2C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSShopBuyCurrencyReq*, bool))(Il2CppBase() + 0x51E1F34))(this, createIfMissing);
	}

};

}
