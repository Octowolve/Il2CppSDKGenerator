#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSDepositEquipPropReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSDepositEquipPropReq"));
	}

	template <typename T = uintptr_t> T& _prop() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _equip_position() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint64_t> T& _bag_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _mode_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uintptr_t> T get_prop() {
		return ((T (*)(CSDepositEquipPropReq*))(Il2CppBase() + 0x51D0B88))(this);
	}
	template <typename T = void> T set_prop(uintptr_t value) {
		return ((T (*)(CSDepositEquipPropReq*, uintptr_t))(Il2CppBase() + 0x51D0B90))(this, value);
	}
	template <typename T = int32_t> T get_equip_position() {
		return ((T (*)(CSDepositEquipPropReq*))(Il2CppBase() + 0x51D0B98))(this);
	}
	template <typename T = void> T set_equip_position(int32_t value) {
		return ((T (*)(CSDepositEquipPropReq*, int32_t))(Il2CppBase() + 0x51D0BA0))(this, value);
	}
	template <typename T = uint64_t> T get_bag_id() {
		return ((T (*)(CSDepositEquipPropReq*))(Il2CppBase() + 0x51D0BA8))(this);
	}
	template <typename T = void> T set_bag_id(uint64_t value) {
		return ((T (*)(CSDepositEquipPropReq*, uint64_t))(Il2CppBase() + 0x51D0BB0))(this, value);
	}
	template <typename T = uint32_t> T get_mode_id() {
		return ((T (*)(CSDepositEquipPropReq*))(Il2CppBase() + 0x51D0BC0))(this);
	}
	template <typename T = void> T set_mode_id(uint32_t value) {
		return ((T (*)(CSDepositEquipPropReq*, uint32_t))(Il2CppBase() + 0x51D0BC8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSDepositEquipPropReq*, bool))(Il2CppBase() + 0x51D0BD0))(this, createIfMissing);
	}

};

}
