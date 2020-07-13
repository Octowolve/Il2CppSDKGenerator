#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSMallBuyCurrencyReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSMallBuyCurrencyReq"));
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
		return ((T (*)(CSMallBuyCurrencyReq*))(Il2CppBase() + 0x51F0050))(this);
	}
	template <typename T = void> T set_currency_type(int32_t value) {
		return ((T (*)(CSMallBuyCurrencyReq*, int32_t))(Il2CppBase() + 0x51F0058))(this, value);
	}
	template <typename T = int32_t> T get_buy_times_today() {
		return ((T (*)(CSMallBuyCurrencyReq*))(Il2CppBase() + 0x51F0060))(this);
	}
	template <typename T = void> T set_buy_times_today(int32_t value) {
		return ((T (*)(CSMallBuyCurrencyReq*, int32_t))(Il2CppBase() + 0x51F0068))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSMallBuyCurrencyReq*, bool))(Il2CppBase() + 0x51F0070))(this, createIfMissing);
	}

};

}
