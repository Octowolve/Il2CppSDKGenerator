#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSDepositGetPropsRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSDepositGetPropsRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _prop_list() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int64_t> T& _gold_balance() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int64_t> T& _weapon_point() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _buy_gold_times_today() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _buy_weaponpoint_times_today() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint64_t> T& _role_id() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _preparations() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& _has_hero_weapon() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uint32_t> T& _suit_id() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint64_t> T& _ladder_medal() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSDepositGetPropsRes*))(Il2CppBase() + 0x51D0E3C))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSDepositGetPropsRes*, int32_t))(Il2CppBase() + 0x51D0E44))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_prop_list() {
		return ((T (*)(CSDepositGetPropsRes*))(Il2CppBase() + 0x51D0E4C))(this);
	}
	template <typename T = int64_t> T get_gold_balance() {
		return ((T (*)(CSDepositGetPropsRes*))(Il2CppBase() + 0x51D0E54))(this);
	}
	template <typename T = void> T set_gold_balance(int64_t value) {
		return ((T (*)(CSDepositGetPropsRes*, int64_t))(Il2CppBase() + 0x51D0E5C))(this, value);
	}
	template <typename T = int64_t> T get_weapon_point() {
		return ((T (*)(CSDepositGetPropsRes*))(Il2CppBase() + 0x51D0E6C))(this);
	}
	template <typename T = void> T set_weapon_point(int64_t value) {
		return ((T (*)(CSDepositGetPropsRes*, int64_t))(Il2CppBase() + 0x51D0E74))(this, value);
	}
	template <typename T = int32_t> T get_buy_gold_times_today() {
		return ((T (*)(CSDepositGetPropsRes*))(Il2CppBase() + 0x51D0E84))(this);
	}
	template <typename T = void> T set_buy_gold_times_today(int32_t value) {
		return ((T (*)(CSDepositGetPropsRes*, int32_t))(Il2CppBase() + 0x51D0E8C))(this, value);
	}
	template <typename T = int32_t> T get_buy_weaponpoint_times_today() {
		return ((T (*)(CSDepositGetPropsRes*))(Il2CppBase() + 0x51D0E94))(this);
	}
	template <typename T = void> T set_buy_weaponpoint_times_today(int32_t value) {
		return ((T (*)(CSDepositGetPropsRes*, int32_t))(Il2CppBase() + 0x51D0E9C))(this, value);
	}
	template <typename T = uint64_t> T get_role_id() {
		return ((T (*)(CSDepositGetPropsRes*))(Il2CppBase() + 0x51D0EA4))(this);
	}
	template <typename T = void> T set_role_id(uint64_t value) {
		return ((T (*)(CSDepositGetPropsRes*, uint64_t))(Il2CppBase() + 0x51D0EAC))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_preparations() {
		return ((T (*)(CSDepositGetPropsRes*))(Il2CppBase() + 0x51D0EBC))(this);
	}
	template <typename T = int32_t> T get_has_hero_weapon() {
		return ((T (*)(CSDepositGetPropsRes*))(Il2CppBase() + 0x51D0EC4))(this);
	}
	template <typename T = void> T set_has_hero_weapon(int32_t value) {
		return ((T (*)(CSDepositGetPropsRes*, int32_t))(Il2CppBase() + 0x51D0ECC))(this, value);
	}
	template <typename T = uint32_t> T get_suit_id() {
		return ((T (*)(CSDepositGetPropsRes*))(Il2CppBase() + 0x51D0ED4))(this);
	}
	template <typename T = void> T set_suit_id(uint32_t value) {
		return ((T (*)(CSDepositGetPropsRes*, uint32_t))(Il2CppBase() + 0x51D0EDC))(this, value);
	}
	template <typename T = uint64_t> T get_ladder_medal() {
		return ((T (*)(CSDepositGetPropsRes*))(Il2CppBase() + 0x51D0EE4))(this);
	}
	template <typename T = void> T set_ladder_medal(uint64_t value) {
		return ((T (*)(CSDepositGetPropsRes*, uint64_t))(Il2CppBase() + 0x51D0EEC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSDepositGetPropsRes*, bool))(Il2CppBase() + 0x51D0EFC))(this, createIfMissing);
	}

};

}
