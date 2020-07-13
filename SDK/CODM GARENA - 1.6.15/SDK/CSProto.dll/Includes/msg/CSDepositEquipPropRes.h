#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSDepositEquipPropRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSDepositEquipPropRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _preparations() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _prop_list() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _has_hero_weapon() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _suit_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& _is_warm() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint64_t> T& _role_id() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSDepositEquipPropRes*))(Il2CppBase() + 0x51D0CC4))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSDepositEquipPropRes*, int32_t))(Il2CppBase() + 0x51D0CCC))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_preparations() {
		return ((T (*)(CSDepositEquipPropRes*))(Il2CppBase() + 0x51D0CD4))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_prop_list() {
		return ((T (*)(CSDepositEquipPropRes*))(Il2CppBase() + 0x51D0CDC))(this);
	}
	template <typename T = int32_t> T get_has_hero_weapon() {
		return ((T (*)(CSDepositEquipPropRes*))(Il2CppBase() + 0x51D0CE4))(this);
	}
	template <typename T = void> T set_has_hero_weapon(int32_t value) {
		return ((T (*)(CSDepositEquipPropRes*, int32_t))(Il2CppBase() + 0x51D0CEC))(this, value);
	}
	template <typename T = uint32_t> T get_suit_id() {
		return ((T (*)(CSDepositEquipPropRes*))(Il2CppBase() + 0x51D0CF4))(this);
	}
	template <typename T = void> T set_suit_id(uint32_t value) {
		return ((T (*)(CSDepositEquipPropRes*, uint32_t))(Il2CppBase() + 0x51D0CFC))(this, value);
	}
	template <typename T = bool> T get_is_warm() {
		return ((T (*)(CSDepositEquipPropRes*))(Il2CppBase() + 0x51D0D04))(this);
	}
	template <typename T = void> T set_is_warm(bool value) {
		return ((T (*)(CSDepositEquipPropRes*, bool))(Il2CppBase() + 0x51D0D0C))(this, value);
	}
	template <typename T = uint64_t> T get_role_id() {
		return ((T (*)(CSDepositEquipPropRes*))(Il2CppBase() + 0x51D0D14))(this);
	}
	template <typename T = void> T set_role_id(uint64_t value) {
		return ((T (*)(CSDepositEquipPropRes*, uint64_t))(Il2CppBase() + 0x51D0D1C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSDepositEquipPropRes*, bool))(Il2CppBase() + 0x51D0D2C))(this, createIfMissing);
	}

};

}
