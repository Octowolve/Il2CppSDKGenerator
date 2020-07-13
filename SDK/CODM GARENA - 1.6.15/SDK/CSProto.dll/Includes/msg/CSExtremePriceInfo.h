#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSExtremePriceInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSExtremePriceInfo"));
	}

	template <typename T = int32_t> T& _lottery_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _desc_extreme_price() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_lottery_id() {
		return ((T (*)(CSExtremePriceInfo*))(Il2CppBase() + 0x51D1AD4))(this);
	}
	template <typename T = void> T set_lottery_id(int32_t value) {
		return ((T (*)(CSExtremePriceInfo*, int32_t))(Il2CppBase() + 0x51D1ADC))(this, value);
	}
	template <typename T = int32_t> T get_desc_extreme_price() {
		return ((T (*)(CSExtremePriceInfo*))(Il2CppBase() + 0x51D1AE4))(this);
	}
	template <typename T = void> T set_desc_extreme_price(int32_t value) {
		return ((T (*)(CSExtremePriceInfo*, int32_t))(Il2CppBase() + 0x51D1AEC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSExtremePriceInfo*, bool))(Il2CppBase() + 0x51D1AF4))(this, createIfMissing);
	}

};

}
