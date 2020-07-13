#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class FirstRechargeRecord
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "FirstRechargeRecord"));
	}

	template <typename T = int32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& _is_finished() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _recharge_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _plat_id() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _zone_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = int32_t> T get_id() {
		return ((T (*)(FirstRechargeRecord*))(Il2CppBase() + 0x52274D0))(this);
	}
	template <typename T = void> T set_id(int32_t value) {
		return ((T (*)(FirstRechargeRecord*, int32_t))(Il2CppBase() + 0x52274D8))(this, value);
	}
	template <typename T = bool> T get_is_finished() {
		return ((T (*)(FirstRechargeRecord*))(Il2CppBase() + 0x52274E0))(this);
	}
	template <typename T = void> T set_is_finished(bool value) {
		return ((T (*)(FirstRechargeRecord*, bool))(Il2CppBase() + 0x52274E8))(this, value);
	}
	template <typename T = int32_t> T get_recharge_id() {
		return ((T (*)(FirstRechargeRecord*))(Il2CppBase() + 0x52274F0))(this);
	}
	template <typename T = void> T set_recharge_id(int32_t value) {
		return ((T (*)(FirstRechargeRecord*, int32_t))(Il2CppBase() + 0x52274F8))(this, value);
	}
	template <typename T = int32_t> T get_plat_id() {
		return ((T (*)(FirstRechargeRecord*))(Il2CppBase() + 0x5227500))(this);
	}
	template <typename T = void> T set_plat_id(int32_t value) {
		return ((T (*)(FirstRechargeRecord*, int32_t))(Il2CppBase() + 0x5227508))(this, value);
	}
	template <typename T = int32_t> T get_zone_id() {
		return ((T (*)(FirstRechargeRecord*))(Il2CppBase() + 0x5227510))(this);
	}
	template <typename T = void> T set_zone_id(int32_t value) {
		return ((T (*)(FirstRechargeRecord*, int32_t))(Il2CppBase() + 0x5227518))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(FirstRechargeRecord*, bool))(Il2CppBase() + 0x5227520))(this, createIfMissing);
	}

};

}
