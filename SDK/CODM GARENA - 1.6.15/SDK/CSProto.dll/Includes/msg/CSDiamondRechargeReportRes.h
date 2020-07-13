#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSDiamondRechargeReportRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSDiamondRechargeReportRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _recharge_stat() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _old_vip_level() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _new_vip_level() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _last_recharge_count() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _total_recharge_count() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int64_t> T& _balance() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int64_t> T& _internal_balance() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _total_vip_gift_count() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSDiamondRechargeReportRes*))(Il2CppBase() + 0x51D1600))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSDiamondRechargeReportRes*, int32_t))(Il2CppBase() + 0x51D1608))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_recharge_stat() {
		return ((T (*)(CSDiamondRechargeReportRes*))(Il2CppBase() + 0x51D1610))(this);
	}
	template <typename T = int32_t> T get_old_vip_level() {
		return ((T (*)(CSDiamondRechargeReportRes*))(Il2CppBase() + 0x51D1618))(this);
	}
	template <typename T = void> T set_old_vip_level(int32_t value) {
		return ((T (*)(CSDiamondRechargeReportRes*, int32_t))(Il2CppBase() + 0x51D1620))(this, value);
	}
	template <typename T = int32_t> T get_new_vip_level() {
		return ((T (*)(CSDiamondRechargeReportRes*))(Il2CppBase() + 0x51D1628))(this);
	}
	template <typename T = void> T set_new_vip_level(int32_t value) {
		return ((T (*)(CSDiamondRechargeReportRes*, int32_t))(Il2CppBase() + 0x51D1630))(this, value);
	}
	template <typename T = int32_t> T get_last_recharge_count() {
		return ((T (*)(CSDiamondRechargeReportRes*))(Il2CppBase() + 0x51D1638))(this);
	}
	template <typename T = void> T set_last_recharge_count(int32_t value) {
		return ((T (*)(CSDiamondRechargeReportRes*, int32_t))(Il2CppBase() + 0x51D1640))(this, value);
	}
	template <typename T = int32_t> T get_total_recharge_count() {
		return ((T (*)(CSDiamondRechargeReportRes*))(Il2CppBase() + 0x51D1648))(this);
	}
	template <typename T = void> T set_total_recharge_count(int32_t value) {
		return ((T (*)(CSDiamondRechargeReportRes*, int32_t))(Il2CppBase() + 0x51D1650))(this, value);
	}
	template <typename T = int64_t> T get_balance() {
		return ((T (*)(CSDiamondRechargeReportRes*))(Il2CppBase() + 0x51D1658))(this);
	}
	template <typename T = void> T set_balance(int64_t value) {
		return ((T (*)(CSDiamondRechargeReportRes*, int64_t))(Il2CppBase() + 0x51D1660))(this, value);
	}
	template <typename T = int64_t> T get_internal_balance() {
		return ((T (*)(CSDiamondRechargeReportRes*))(Il2CppBase() + 0x51D1670))(this);
	}
	template <typename T = void> T set_internal_balance(int64_t value) {
		return ((T (*)(CSDiamondRechargeReportRes*, int64_t))(Il2CppBase() + 0x51D1678))(this, value);
	}
	template <typename T = int32_t> T get_total_vip_gift_count() {
		return ((T (*)(CSDiamondRechargeReportRes*))(Il2CppBase() + 0x51D1688))(this);
	}
	template <typename T = void> T set_total_vip_gift_count(int32_t value) {
		return ((T (*)(CSDiamondRechargeReportRes*, int32_t))(Il2CppBase() + 0x51D1690))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSDiamondRechargeReportRes*, bool))(Il2CppBase() + 0x51D1698))(this, createIfMissing);
	}

};

}
