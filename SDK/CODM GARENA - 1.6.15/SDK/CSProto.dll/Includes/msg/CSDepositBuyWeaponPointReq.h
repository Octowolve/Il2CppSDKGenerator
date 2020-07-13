#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSDepositBuyWeaponPointReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSDepositBuyWeaponPointReq"));
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
		return ((T (*)(CSDepositBuyWeaponPointReq*))(Il2CppBase() + 0x51D0A34))(this);
	}
	template <typename T = void> T set_buy_times_today(int32_t value) {
		return ((T (*)(CSDepositBuyWeaponPointReq*, int32_t))(Il2CppBase() + 0x51D0A3C))(this, value);
	}
	template <typename T = bool> T get_buy_all() {
		return ((T (*)(CSDepositBuyWeaponPointReq*))(Il2CppBase() + 0x51D0A44))(this);
	}
	template <typename T = void> T set_buy_all(bool value) {
		return ((T (*)(CSDepositBuyWeaponPointReq*, bool))(Il2CppBase() + 0x51D0A4C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSDepositBuyWeaponPointReq*, bool))(Il2CppBase() + 0x51D0A54))(this, createIfMissing);
	}

};

}
