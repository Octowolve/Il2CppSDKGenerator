#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSDepositBuyWeaponPointRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSDepositBuyWeaponPointRes"));
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
	template <typename T = Il2CppList<int32_t>*> T& _weapon_point_counts() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<int32_t>*> T& _crit_ratios() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSDepositBuyWeaponPointRes*))(Il2CppBase() + 0x51D0B2C))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSDepositBuyWeaponPointRes*, int32_t))(Il2CppBase() + 0x51D0B34))(this, value);
	}
	template <typename T = uintptr_t> T get_data_change() {
		return ((T (*)(CSDepositBuyWeaponPointRes*))(Il2CppBase() + 0x51D0B3C))(this);
	}
	template <typename T = void> T set_data_change(uintptr_t value) {
		return ((T (*)(CSDepositBuyWeaponPointRes*, uintptr_t))(Il2CppBase() + 0x51D0B44))(this, value);
	}
	template <typename T = int32_t> T get_buy_times_today() {
		return ((T (*)(CSDepositBuyWeaponPointRes*))(Il2CppBase() + 0x51D0B4C))(this);
	}
	template <typename T = void> T set_buy_times_today(int32_t value) {
		return ((T (*)(CSDepositBuyWeaponPointRes*, int32_t))(Il2CppBase() + 0x51D0B54))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_weapon_point_counts() {
		return ((T (*)(CSDepositBuyWeaponPointRes*))(Il2CppBase() + 0x51D0B5C))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T get_crit_ratios() {
		return ((T (*)(CSDepositBuyWeaponPointRes*))(Il2CppBase() + 0x51D0B64))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSDepositBuyWeaponPointRes*, bool))(Il2CppBase() + 0x51D0B6C))(this, createIfMissing);
	}

};

}
