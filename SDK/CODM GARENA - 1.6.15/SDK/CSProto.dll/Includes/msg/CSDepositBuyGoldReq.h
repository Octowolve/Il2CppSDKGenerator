#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSDepositBuyGoldReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSDepositBuyGoldReq"));
	}

	template <typename T = int32_t> T& _buy_times_today() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& _buy_all() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_buy_times_today() {
		return ((T (*)(CSDepositBuyGoldReq*))(Il2CppBase() + 0x51D08E0))(this);
	}
	template <typename T = void> T set_buy_times_today(int32_t value) {
		return ((T (*)(CSDepositBuyGoldReq*, int32_t))(Il2CppBase() + 0x51D08E8))(this, value);
	}
	template <typename T = bool> T get_buy_all() {
		return ((T (*)(CSDepositBuyGoldReq*))(Il2CppBase() + 0x51D08F0))(this);
	}
	template <typename T = void> T set_buy_all(bool value) {
		return ((T (*)(CSDepositBuyGoldReq*, bool))(Il2CppBase() + 0x51D08F8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSDepositBuyGoldReq*, bool))(Il2CppBase() + 0x51D0900))(this, createIfMissing);
	}

};

}
