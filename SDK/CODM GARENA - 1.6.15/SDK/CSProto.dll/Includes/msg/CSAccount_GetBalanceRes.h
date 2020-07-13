#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAccountGetBalanceRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAccount_GetBalanceRes"));
	}

	template <typename T = uint32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int64_t> T& _balance() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int64_t> T& _save_amt() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _first_recharge_info() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _sigle_recharge_info() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _accumate_recharge_info() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _first_recharge_reward() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& _single_recharge_reward() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _accumate_recharge_reward() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _oto_info() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int64_t> T& _cost_amt() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = uint32_t> T get_result() {
		return ((T (*)(CSAccountGetBalanceRes*))(Il2CppBase() + 0x516F3A8))(this);
	}
	template <typename T = void> T set_result(uint32_t value) {
		return ((T (*)(CSAccountGetBalanceRes*, uint32_t))(Il2CppBase() + 0x516F3B0))(this, value);
	}
	template <typename T = int64_t> T get_balance() {
		return ((T (*)(CSAccountGetBalanceRes*))(Il2CppBase() + 0x516F3B8))(this);
	}
	template <typename T = void> T set_balance(int64_t value) {
		return ((T (*)(CSAccountGetBalanceRes*, int64_t))(Il2CppBase() + 0x516F3C0))(this, value);
	}
	template <typename T = int64_t> T get_save_amt() {
		return ((T (*)(CSAccountGetBalanceRes*))(Il2CppBase() + 0x516F3D0))(this);
	}
	template <typename T = void> T set_save_amt(int64_t value) {
		return ((T (*)(CSAccountGetBalanceRes*, int64_t))(Il2CppBase() + 0x516F3D8))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_first_recharge_info() {
		return ((T (*)(CSAccountGetBalanceRes*))(Il2CppBase() + 0x516F3E8))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_sigle_recharge_info() {
		return ((T (*)(CSAccountGetBalanceRes*))(Il2CppBase() + 0x516F3F0))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_accumate_recharge_info() {
		return ((T (*)(CSAccountGetBalanceRes*))(Il2CppBase() + 0x516F3F8))(this);
	}
	template <typename T = uintptr_t> T get_first_recharge_reward() {
		return ((T (*)(CSAccountGetBalanceRes*))(Il2CppBase() + 0x516F400))(this);
	}
	template <typename T = void> T set_first_recharge_reward(uintptr_t value) {
		return ((T (*)(CSAccountGetBalanceRes*, uintptr_t))(Il2CppBase() + 0x516F408))(this, value);
	}
	template <typename T = uintptr_t> T get_single_recharge_reward() {
		return ((T (*)(CSAccountGetBalanceRes*))(Il2CppBase() + 0x516F410))(this);
	}
	template <typename T = void> T set_single_recharge_reward(uintptr_t value) {
		return ((T (*)(CSAccountGetBalanceRes*, uintptr_t))(Il2CppBase() + 0x516F418))(this, value);
	}
	template <typename T = uintptr_t> T get_accumate_recharge_reward() {
		return ((T (*)(CSAccountGetBalanceRes*))(Il2CppBase() + 0x516F420))(this);
	}
	template <typename T = void> T set_accumate_recharge_reward(uintptr_t value) {
		return ((T (*)(CSAccountGetBalanceRes*, uintptr_t))(Il2CppBase() + 0x516F428))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_oto_info() {
		return ((T (*)(CSAccountGetBalanceRes*))(Il2CppBase() + 0x516F430))(this);
	}
	template <typename T = int64_t> T get_cost_amt() {
		return ((T (*)(CSAccountGetBalanceRes*))(Il2CppBase() + 0x516F438))(this);
	}
	template <typename T = void> T set_cost_amt(int64_t value) {
		return ((T (*)(CSAccountGetBalanceRes*, int64_t))(Il2CppBase() + 0x516F440))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAccountGetBalanceRes*, bool))(Il2CppBase() + 0x516F450))(this, createIfMissing);
	}

};

}
