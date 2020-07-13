#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class DiscountedCntIndex
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "DiscountedCntIndex"));
	}

	template <typename T = uintptr_t> T& _charge_type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _discounted_cnt() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_charge_type() {
		return ((T (*)(DiscountedCntIndex*))(Il2CppBase() + 0x522671C))(this);
	}
	template <typename T = void> T set_charge_type(uintptr_t value) {
		return ((T (*)(DiscountedCntIndex*, uintptr_t))(Il2CppBase() + 0x5226724))(this, value);
	}
	template <typename T = int32_t> T get_discounted_cnt() {
		return ((T (*)(DiscountedCntIndex*))(Il2CppBase() + 0x522672C))(this);
	}
	template <typename T = void> T set_discounted_cnt(int32_t value) {
		return ((T (*)(DiscountedCntIndex*, int32_t))(Il2CppBase() + 0x5226734))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(DiscountedCntIndex*, bool))(Il2CppBase() + 0x522673C))(this, createIfMissing);
	}

};

}
