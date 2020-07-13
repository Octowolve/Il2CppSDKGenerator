#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSMallBuyReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSMallBuyReq"));
	}

	template <typename T = int32_t> T& _commodity_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _currency_type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _price() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& _coupon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = int32_t> T get_commodity_id() {
		return ((T (*)(CSMallBuyReq*))(Il2CppBase() + 0x51F00D0))(this);
	}
	template <typename T = void> T set_commodity_id(int32_t value) {
		return ((T (*)(CSMallBuyReq*, int32_t))(Il2CppBase() + 0x51F00D8))(this, value);
	}
	template <typename T = int32_t> T get_type() {
		return ((T (*)(CSMallBuyReq*))(Il2CppBase() + 0x51F00E0))(this);
	}
	template <typename T = void> T set_type(int32_t value) {
		return ((T (*)(CSMallBuyReq*, int32_t))(Il2CppBase() + 0x51F00E8))(this, value);
	}
	template <typename T = int32_t> T get_currency_type() {
		return ((T (*)(CSMallBuyReq*))(Il2CppBase() + 0x51F00F0))(this);
	}
	template <typename T = void> T set_currency_type(int32_t value) {
		return ((T (*)(CSMallBuyReq*, int32_t))(Il2CppBase() + 0x51F00F8))(this, value);
	}
	template <typename T = int32_t> T get_price() {
		return ((T (*)(CSMallBuyReq*))(Il2CppBase() + 0x51F0100))(this);
	}
	template <typename T = void> T set_price(int32_t value) {
		return ((T (*)(CSMallBuyReq*, int32_t))(Il2CppBase() + 0x51F0108))(this, value);
	}
	template <typename T = uintptr_t> T get_coupon() {
		return ((T (*)(CSMallBuyReq*))(Il2CppBase() + 0x51F0110))(this);
	}
	template <typename T = void> T set_coupon(uintptr_t value) {
		return ((T (*)(CSMallBuyReq*, uintptr_t))(Il2CppBase() + 0x51F0118))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSMallBuyReq*, bool))(Il2CppBase() + 0x51F0120))(this, createIfMissing);
	}

};

}
