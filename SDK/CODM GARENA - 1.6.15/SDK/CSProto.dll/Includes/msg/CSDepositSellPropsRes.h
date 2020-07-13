#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSDepositSellPropsRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSDepositSellPropsRes"));
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
		return ((T (*)(CSDepositSellPropsRes*))(Il2CppBase() + 0x51D10E4))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSDepositSellPropsRes*, int32_t))(Il2CppBase() + 0x51D10EC))(this, value);
	}
	template <typename T = uintptr_t> T get_data_change() {
		return ((T (*)(CSDepositSellPropsRes*))(Il2CppBase() + 0x51D10F4))(this);
	}
	template <typename T = void> T set_data_change(uintptr_t value) {
		return ((T (*)(CSDepositSellPropsRes*, uintptr_t))(Il2CppBase() + 0x51D10FC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSDepositSellPropsRes*, bool))(Il2CppBase() + 0x51D1104))(this, createIfMissing);
	}

};

}
