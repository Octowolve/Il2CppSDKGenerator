#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSDepositBuyGoldRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSDepositBuyGoldRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _data_change() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _buy_times_today() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<int32_t>*> T& _gold_counts() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<int32_t>*> T& _crit_ratios() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSDepositBuyGoldRes*))(Il2CppBase() + 0x51D09D8))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSDepositBuyGoldRes*, int32_t))(Il2CppBase() + 0x51D09E0))(this, value);
	}
	template <typename T = uintptr_t> T get_data_change() {
		return ((T (*)(CSDepositBuyGoldRes*))(Il2CppBase() + 0x51D09E8))(this);
	}
	template <typename T = void> T set_data_change(uintptr_t value) {
		return ((T (*)(CSDepositBuyGoldRes*, uintptr_t))(Il2CppBase() + 0x51D09F0))(this, value);
	}
	template <typename T = int32_t> T get_buy_times_today() {
		return ((T (*)(CSDepositBuyGoldRes*))(Il2CppBase() + 0x51D09F8))(this);
	}
	template <typename T = void> T set_buy_times_today(int32_t value) {
		return ((T (*)(CSDepositBuyGoldRes*, int32_t))(Il2CppBase() + 0x51D0A00))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_gold_counts() {
		return ((T (*)(CSDepositBuyGoldRes*))(Il2CppBase() + 0x51D0A08))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T get_crit_ratios() {
		return ((T (*)(CSDepositBuyGoldRes*))(Il2CppBase() + 0x51D0A10))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSDepositBuyGoldRes*, bool))(Il2CppBase() + 0x51D0A18))(this, createIfMissing);
	}

};

}
