#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSDepositUnEquipPropRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSDepositUnEquipPropRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _change_prop() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _has_hero_weapon() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _suit_id() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSDepositUnEquipPropRes*))(Il2CppBase() + 0x51D114C))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSDepositUnEquipPropRes*, int32_t))(Il2CppBase() + 0x51D1154))(this, value);
	}
	template <typename T = uintptr_t> T get_change_prop() {
		return ((T (*)(CSDepositUnEquipPropRes*))(Il2CppBase() + 0x51D115C))(this);
	}
	template <typename T = void> T set_change_prop(uintptr_t value) {
		return ((T (*)(CSDepositUnEquipPropRes*, uintptr_t))(Il2CppBase() + 0x51D1164))(this, value);
	}
	template <typename T = int32_t> T get_has_hero_weapon() {
		return ((T (*)(CSDepositUnEquipPropRes*))(Il2CppBase() + 0x51D116C))(this);
	}
	template <typename T = void> T set_has_hero_weapon(int32_t value) {
		return ((T (*)(CSDepositUnEquipPropRes*, int32_t))(Il2CppBase() + 0x51D1174))(this, value);
	}
	template <typename T = uint32_t> T get_suit_id() {
		return ((T (*)(CSDepositUnEquipPropRes*))(Il2CppBase() + 0x51D117C))(this);
	}
	template <typename T = void> T set_suit_id(uint32_t value) {
		return ((T (*)(CSDepositUnEquipPropRes*, uint32_t))(Il2CppBase() + 0x51D1184))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSDepositUnEquipPropRes*, bool))(Il2CppBase() + 0x51D118C))(this, createIfMissing);
	}

};

}
