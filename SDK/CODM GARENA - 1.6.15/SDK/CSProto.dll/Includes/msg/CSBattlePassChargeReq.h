#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSBattlePassChargeReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSBattlePassChargeReq"));
	}

	template <typename T = int32_t> T& _charge_type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _dst_level() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint64_t> T& _sale_ticket() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _is_gsp_trigger() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = int32_t> T get_charge_type() {
		return ((T (*)(CSBattlePassChargeReq*))(Il2CppBase() + 0x51E4D04))(this);
	}
	template <typename T = void> T set_charge_type(int32_t value) {
		return ((T (*)(CSBattlePassChargeReq*, int32_t))(Il2CppBase() + 0x51E4D0C))(this, value);
	}
	template <typename T = int32_t> T get_id() {
		return ((T (*)(CSBattlePassChargeReq*))(Il2CppBase() + 0x51E4D14))(this);
	}
	template <typename T = void> T set_id(int32_t value) {
		return ((T (*)(CSBattlePassChargeReq*, int32_t))(Il2CppBase() + 0x51E4D1C))(this, value);
	}
	template <typename T = int32_t> T get_dst_level() {
		return ((T (*)(CSBattlePassChargeReq*))(Il2CppBase() + 0x51E4D24))(this);
	}
	template <typename T = void> T set_dst_level(int32_t value) {
		return ((T (*)(CSBattlePassChargeReq*, int32_t))(Il2CppBase() + 0x51E4D2C))(this, value);
	}
	template <typename T = uint64_t> T get_sale_ticket() {
		return ((T (*)(CSBattlePassChargeReq*))(Il2CppBase() + 0x51E4D34))(this);
	}
	template <typename T = void> T set_sale_ticket(uint64_t value) {
		return ((T (*)(CSBattlePassChargeReq*, uint64_t))(Il2CppBase() + 0x51E4D3C))(this, value);
	}
	template <typename T = int32_t> T get_is_gsp_trigger() {
		return ((T (*)(CSBattlePassChargeReq*))(Il2CppBase() + 0x51E4D4C))(this);
	}
	template <typename T = void> T set_is_gsp_trigger(int32_t value) {
		return ((T (*)(CSBattlePassChargeReq*, int32_t))(Il2CppBase() + 0x51E4D54))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSBattlePassChargeReq*, bool))(Il2CppBase() + 0x51E4D5C))(this, createIfMissing);
	}

};

}
