#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSMallBuyRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSMallBuyRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _commodity() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _data_change() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _type() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint64_t> T& _present_coupon_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _present_coupon_num() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSMallBuyRes*))(Il2CppBase() + 0x51F0144))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSMallBuyRes*, int32_t))(Il2CppBase() + 0x51F014C))(this, value);
	}
	template <typename T = uintptr_t> T get_commodity() {
		return ((T (*)(CSMallBuyRes*))(Il2CppBase() + 0x51F0154))(this);
	}
	template <typename T = void> T set_commodity(uintptr_t value) {
		return ((T (*)(CSMallBuyRes*, uintptr_t))(Il2CppBase() + 0x51F015C))(this, value);
	}
	template <typename T = uintptr_t> T get_data_change() {
		return ((T (*)(CSMallBuyRes*))(Il2CppBase() + 0x51F0164))(this);
	}
	template <typename T = void> T set_data_change(uintptr_t value) {
		return ((T (*)(CSMallBuyRes*, uintptr_t))(Il2CppBase() + 0x51F016C))(this, value);
	}
	template <typename T = int32_t> T get_type() {
		return ((T (*)(CSMallBuyRes*))(Il2CppBase() + 0x51F0174))(this);
	}
	template <typename T = void> T set_type(int32_t value) {
		return ((T (*)(CSMallBuyRes*, int32_t))(Il2CppBase() + 0x51F017C))(this, value);
	}
	template <typename T = uint64_t> T get_present_coupon_id() {
		return ((T (*)(CSMallBuyRes*))(Il2CppBase() + 0x51F0184))(this);
	}
	template <typename T = void> T set_present_coupon_id(uint64_t value) {
		return ((T (*)(CSMallBuyRes*, uint64_t))(Il2CppBase() + 0x51F018C))(this, value);
	}
	template <typename T = int32_t> T get_present_coupon_num() {
		return ((T (*)(CSMallBuyRes*))(Il2CppBase() + 0x51F019C))(this);
	}
	template <typename T = void> T set_present_coupon_num(int32_t value) {
		return ((T (*)(CSMallBuyRes*, int32_t))(Il2CppBase() + 0x51F01A4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSMallBuyRes*, bool))(Il2CppBase() + 0x51F01AC))(this, createIfMissing);
	}

};

}
