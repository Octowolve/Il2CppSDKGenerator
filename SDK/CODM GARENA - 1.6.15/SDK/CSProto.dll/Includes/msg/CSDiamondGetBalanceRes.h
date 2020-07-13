#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSDiamondGetBalanceRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSDiamondGetBalanceRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int64_t> T& _balance() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int64_t> T& _internal_balance() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _recharge_stat() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _card_list() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& _last_recharge_count() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _total_recharge_count() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& _total_vip_gift_count() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& _old_vip_level() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& _new_vip_level() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSDiamondGetBalanceRes*))(Il2CppBase() + 0x51D1474))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSDiamondGetBalanceRes*, int32_t))(Il2CppBase() + 0x51D147C))(this, value);
	}
	template <typename T = int64_t> T get_balance() {
		return ((T (*)(CSDiamondGetBalanceRes*))(Il2CppBase() + 0x51D1484))(this);
	}
	template <typename T = void> T set_balance(int64_t value) {
		return ((T (*)(CSDiamondGetBalanceRes*, int64_t))(Il2CppBase() + 0x51D148C))(this, value);
	}
	template <typename T = int64_t> T get_internal_balance() {
		return ((T (*)(CSDiamondGetBalanceRes*))(Il2CppBase() + 0x51D149C))(this);
	}
	template <typename T = void> T set_internal_balance(int64_t value) {
		return ((T (*)(CSDiamondGetBalanceRes*, int64_t))(Il2CppBase() + 0x51D14A4))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_recharge_stat() {
		return ((T (*)(CSDiamondGetBalanceRes*))(Il2CppBase() + 0x51D14B4))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_card_list() {
		return ((T (*)(CSDiamondGetBalanceRes*))(Il2CppBase() + 0x51D14BC))(this);
	}
	template <typename T = int32_t> T get_last_recharge_count() {
		return ((T (*)(CSDiamondGetBalanceRes*))(Il2CppBase() + 0x51D14C4))(this);
	}
	template <typename T = void> T set_last_recharge_count(int32_t value) {
		return ((T (*)(CSDiamondGetBalanceRes*, int32_t))(Il2CppBase() + 0x51D14CC))(this, value);
	}
	template <typename T = int32_t> T get_total_recharge_count() {
		return ((T (*)(CSDiamondGetBalanceRes*))(Il2CppBase() + 0x51D14D4))(this);
	}
	template <typename T = void> T set_total_recharge_count(int32_t value) {
		return ((T (*)(CSDiamondGetBalanceRes*, int32_t))(Il2CppBase() + 0x51D14DC))(this, value);
	}
	template <typename T = int32_t> T get_total_vip_gift_count() {
		return ((T (*)(CSDiamondGetBalanceRes*))(Il2CppBase() + 0x51D14E4))(this);
	}
	template <typename T = void> T set_total_vip_gift_count(int32_t value) {
		return ((T (*)(CSDiamondGetBalanceRes*, int32_t))(Il2CppBase() + 0x51D14EC))(this, value);
	}
	template <typename T = int32_t> T get_old_vip_level() {
		return ((T (*)(CSDiamondGetBalanceRes*))(Il2CppBase() + 0x51D14F4))(this);
	}
	template <typename T = void> T set_old_vip_level(int32_t value) {
		return ((T (*)(CSDiamondGetBalanceRes*, int32_t))(Il2CppBase() + 0x51D14FC))(this, value);
	}
	template <typename T = int32_t> T get_new_vip_level() {
		return ((T (*)(CSDiamondGetBalanceRes*))(Il2CppBase() + 0x51D1504))(this);
	}
	template <typename T = void> T set_new_vip_level(int32_t value) {
		return ((T (*)(CSDiamondGetBalanceRes*, int32_t))(Il2CppBase() + 0x51D150C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSDiamondGetBalanceRes*, bool))(Il2CppBase() + 0x51D1514))(this, createIfMissing);
	}

};

}
