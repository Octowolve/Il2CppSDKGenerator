#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSBattlePassChargeRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSBattlePassChargeRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _charge_type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _battle_pass_data() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _prop() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint64_t> T& _sale_ticket() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSBattlePassChargeRes*))(Il2CppBase() + 0x51E4E1C))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSBattlePassChargeRes*, int32_t))(Il2CppBase() + 0x51E4E24))(this, value);
	}
	template <typename T = int32_t> T get_charge_type() {
		return ((T (*)(CSBattlePassChargeRes*))(Il2CppBase() + 0x51E4E2C))(this);
	}
	template <typename T = void> T set_charge_type(int32_t value) {
		return ((T (*)(CSBattlePassChargeRes*, int32_t))(Il2CppBase() + 0x51E4E34))(this, value);
	}
	template <typename T = uintptr_t> T get_battle_pass_data() {
		return ((T (*)(CSBattlePassChargeRes*))(Il2CppBase() + 0x51E4E3C))(this);
	}
	template <typename T = void> T set_battle_pass_data(uintptr_t value) {
		return ((T (*)(CSBattlePassChargeRes*, uintptr_t))(Il2CppBase() + 0x51E4E44))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_prop() {
		return ((T (*)(CSBattlePassChargeRes*))(Il2CppBase() + 0x51E4E4C))(this);
	}
	template <typename T = uint64_t> T get_sale_ticket() {
		return ((T (*)(CSBattlePassChargeRes*))(Il2CppBase() + 0x51E4E54))(this);
	}
	template <typename T = void> T set_sale_ticket(uint64_t value) {
		return ((T (*)(CSBattlePassChargeRes*, uint64_t))(Il2CppBase() + 0x51E4E5C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSBattlePassChargeRes*, bool))(Il2CppBase() + 0x51E4E6C))(this, createIfMissing);
	}

};

}
