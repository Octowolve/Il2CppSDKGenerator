#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSMallBuyCurrencyRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSMallBuyCurrencyRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _data_change() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSMallBuyCurrencyRes*))(Il2CppBase() + 0x51F008C))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSMallBuyCurrencyRes*, int32_t))(Il2CppBase() + 0x51F0094))(this, value);
	}
	template <typename T = uintptr_t> T get_data_change() {
		return ((T (*)(CSMallBuyCurrencyRes*))(Il2CppBase() + 0x51F009C))(this);
	}
	template <typename T = void> T set_data_change(uintptr_t value) {
		return ((T (*)(CSMallBuyCurrencyRes*, uintptr_t))(Il2CppBase() + 0x51F00A4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSMallBuyCurrencyRes*, bool))(Il2CppBase() + 0x51F00AC))(this, createIfMissing);
	}

};

}
