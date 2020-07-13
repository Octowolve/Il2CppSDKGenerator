#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSDiamondCardGiftReportRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSDiamondCardGiftReportRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& _product_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _remain_days() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int64_t> T& _balance() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _total_recharge_count() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _total_vip_gift_count() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& _new_vip_level() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSDiamondCardGiftReportRes*))(Il2CppBase() + 0x51D12EC))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSDiamondCardGiftReportRes*, int32_t))(Il2CppBase() + 0x51D12F4))(this, value);
	}
	template <typename T = Il2CppString*> T get_product_id() {
		return ((T (*)(CSDiamondCardGiftReportRes*))(Il2CppBase() + 0x51D12FC))(this);
	}
	template <typename T = void> T set_product_id(Il2CppString* value) {
		return ((T (*)(CSDiamondCardGiftReportRes*, Il2CppString*))(Il2CppBase() + 0x51D1304))(this, value);
	}
	template <typename T = int32_t> T get_remain_days() {
		return ((T (*)(CSDiamondCardGiftReportRes*))(Il2CppBase() + 0x51D130C))(this);
	}
	template <typename T = void> T set_remain_days(int32_t value) {
		return ((T (*)(CSDiamondCardGiftReportRes*, int32_t))(Il2CppBase() + 0x51D1314))(this, value);
	}
	template <typename T = int64_t> T get_balance() {
		return ((T (*)(CSDiamondCardGiftReportRes*))(Il2CppBase() + 0x51D131C))(this);
	}
	template <typename T = void> T set_balance(int64_t value) {
		return ((T (*)(CSDiamondCardGiftReportRes*, int64_t))(Il2CppBase() + 0x51D1324))(this, value);
	}
	template <typename T = int32_t> T get_total_recharge_count() {
		return ((T (*)(CSDiamondCardGiftReportRes*))(Il2CppBase() + 0x51D1334))(this);
	}
	template <typename T = void> T set_total_recharge_count(int32_t value) {
		return ((T (*)(CSDiamondCardGiftReportRes*, int32_t))(Il2CppBase() + 0x51D133C))(this, value);
	}
	template <typename T = int32_t> T get_total_vip_gift_count() {
		return ((T (*)(CSDiamondCardGiftReportRes*))(Il2CppBase() + 0x51D1344))(this);
	}
	template <typename T = void> T set_total_vip_gift_count(int32_t value) {
		return ((T (*)(CSDiamondCardGiftReportRes*, int32_t))(Il2CppBase() + 0x51D134C))(this, value);
	}
	template <typename T = int32_t> T get_new_vip_level() {
		return ((T (*)(CSDiamondCardGiftReportRes*))(Il2CppBase() + 0x51D1354))(this);
	}
	template <typename T = void> T set_new_vip_level(int32_t value) {
		return ((T (*)(CSDiamondCardGiftReportRes*, int32_t))(Il2CppBase() + 0x51D135C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSDiamondCardGiftReportRes*, bool))(Il2CppBase() + 0x51D1364))(this, createIfMissing);
	}

};

}
