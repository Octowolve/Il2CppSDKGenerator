#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class AccumateRechargeRecord
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "AccumateRechargeRecord"));
	}

	template <typename T = int32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _cur_level() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _accumate_save_amt() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _start_accumate_amt() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _recharge_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _plat_id() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _zone_id() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& _test_expire_time() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = int32_t> T get_id() {
		return ((T (*)(AccumateRechargeRecord*))(Il2CppBase() + 0x510A794))(this);
	}
	template <typename T = void> T set_id(int32_t value) {
		return ((T (*)(AccumateRechargeRecord*, int32_t))(Il2CppBase() + 0x510A79C))(this, value);
	}
	template <typename T = int32_t> T get_cur_level() {
		return ((T (*)(AccumateRechargeRecord*))(Il2CppBase() + 0x510A7A4))(this);
	}
	template <typename T = void> T set_cur_level(int32_t value) {
		return ((T (*)(AccumateRechargeRecord*, int32_t))(Il2CppBase() + 0x510A7AC))(this, value);
	}
	template <typename T = uint32_t> T get_accumate_save_amt() {
		return ((T (*)(AccumateRechargeRecord*))(Il2CppBase() + 0x510A7B4))(this);
	}
	template <typename T = void> T set_accumate_save_amt(uint32_t value) {
		return ((T (*)(AccumateRechargeRecord*, uint32_t))(Il2CppBase() + 0x510A7BC))(this, value);
	}
	template <typename T = uint32_t> T get_start_accumate_amt() {
		return ((T (*)(AccumateRechargeRecord*))(Il2CppBase() + 0x510A7C4))(this);
	}
	template <typename T = void> T set_start_accumate_amt(uint32_t value) {
		return ((T (*)(AccumateRechargeRecord*, uint32_t))(Il2CppBase() + 0x510A7CC))(this, value);
	}
	template <typename T = int32_t> T get_recharge_id() {
		return ((T (*)(AccumateRechargeRecord*))(Il2CppBase() + 0x510A7D4))(this);
	}
	template <typename T = void> T set_recharge_id(int32_t value) {
		return ((T (*)(AccumateRechargeRecord*, int32_t))(Il2CppBase() + 0x510A7DC))(this, value);
	}
	template <typename T = int32_t> T get_plat_id() {
		return ((T (*)(AccumateRechargeRecord*))(Il2CppBase() + 0x510A7E4))(this);
	}
	template <typename T = void> T set_plat_id(int32_t value) {
		return ((T (*)(AccumateRechargeRecord*, int32_t))(Il2CppBase() + 0x510A7EC))(this, value);
	}
	template <typename T = int32_t> T get_zone_id() {
		return ((T (*)(AccumateRechargeRecord*))(Il2CppBase() + 0x510A7F4))(this);
	}
	template <typename T = void> T set_zone_id(int32_t value) {
		return ((T (*)(AccumateRechargeRecord*, int32_t))(Il2CppBase() + 0x510A7FC))(this, value);
	}
	template <typename T = uint32_t> T get_test_expire_time() {
		return ((T (*)(AccumateRechargeRecord*))(Il2CppBase() + 0x510A804))(this);
	}
	template <typename T = void> T set_test_expire_time(uint32_t value) {
		return ((T (*)(AccumateRechargeRecord*, uint32_t))(Il2CppBase() + 0x510A80C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(AccumateRechargeRecord*, bool))(Il2CppBase() + 0x510A814))(this, createIfMissing);
	}

};

}
