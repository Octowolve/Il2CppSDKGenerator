#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class DepositChangeData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "DepositChangeData"));
	}

	template <typename T = int64_t> T& _gold_balance() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _gold_delta() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _change_prop_list() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int64_t> T& _weapon_point() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _weapon_point_delta() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = int64_t> T get_gold_balance() {
		return ((T (*)(DepositChangeData*))(Il2CppBase() + 0x5226558))(this);
	}
	template <typename T = void> T set_gold_balance(int64_t value) {
		return ((T (*)(DepositChangeData*, int64_t))(Il2CppBase() + 0x5226560))(this, value);
	}
	template <typename T = int32_t> T get_gold_delta() {
		return ((T (*)(DepositChangeData*))(Il2CppBase() + 0x5226570))(this);
	}
	template <typename T = void> T set_gold_delta(int32_t value) {
		return ((T (*)(DepositChangeData*, int32_t))(Il2CppBase() + 0x5226578))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_change_prop_list() {
		return ((T (*)(DepositChangeData*))(Il2CppBase() + 0x5226580))(this);
	}
	template <typename T = int64_t> T get_weapon_point() {
		return ((T (*)(DepositChangeData*))(Il2CppBase() + 0x5226588))(this);
	}
	template <typename T = void> T set_weapon_point(int64_t value) {
		return ((T (*)(DepositChangeData*, int64_t))(Il2CppBase() + 0x5226590))(this, value);
	}
	template <typename T = int32_t> T get_weapon_point_delta() {
		return ((T (*)(DepositChangeData*))(Il2CppBase() + 0x52265A0))(this);
	}
	template <typename T = void> T set_weapon_point_delta(int32_t value) {
		return ((T (*)(DepositChangeData*, int32_t))(Il2CppBase() + 0x52265A8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(DepositChangeData*, bool))(Il2CppBase() + 0x52265B0))(this, createIfMissing);
	}

};

}
