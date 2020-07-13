#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class SingleRechargeRecord
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "SingleRechargeRecord"));
	}

	template <typename T = int32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _single_save_amt() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& _is_finished() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _start_single_amt() {
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
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = int32_t> T get_id() {
		return ((T (*)(SingleRechargeRecord*))(Il2CppBase() + 0x507343C))(this);
	}
	template <typename T = void> T set_id(int32_t value) {
		return ((T (*)(SingleRechargeRecord*, int32_t))(Il2CppBase() + 0x5073444))(this, value);
	}
	template <typename T = uint32_t> T get_single_save_amt() {
		return ((T (*)(SingleRechargeRecord*))(Il2CppBase() + 0x507344C))(this);
	}
	template <typename T = void> T set_single_save_amt(uint32_t value) {
		return ((T (*)(SingleRechargeRecord*, uint32_t))(Il2CppBase() + 0x5073454))(this, value);
	}
	template <typename T = bool> T get_is_finished() {
		return ((T (*)(SingleRechargeRecord*))(Il2CppBase() + 0x507345C))(this);
	}
	template <typename T = void> T set_is_finished(bool value) {
		return ((T (*)(SingleRechargeRecord*, bool))(Il2CppBase() + 0x5073464))(this, value);
	}
	template <typename T = uint32_t> T get_start_single_amt() {
		return ((T (*)(SingleRechargeRecord*))(Il2CppBase() + 0x507346C))(this);
	}
	template <typename T = void> T set_start_single_amt(uint32_t value) {
		return ((T (*)(SingleRechargeRecord*, uint32_t))(Il2CppBase() + 0x5073474))(this, value);
	}
	template <typename T = int32_t> T get_recharge_id() {
		return ((T (*)(SingleRechargeRecord*))(Il2CppBase() + 0x507347C))(this);
	}
	template <typename T = void> T set_recharge_id(int32_t value) {
		return ((T (*)(SingleRechargeRecord*, int32_t))(Il2CppBase() + 0x5073484))(this, value);
	}
	template <typename T = int32_t> T get_plat_id() {
		return ((T (*)(SingleRechargeRecord*))(Il2CppBase() + 0x507348C))(this);
	}
	template <typename T = void> T set_plat_id(int32_t value) {
		return ((T (*)(SingleRechargeRecord*, int32_t))(Il2CppBase() + 0x5073494))(this, value);
	}
	template <typename T = int32_t> T get_zone_id() {
		return ((T (*)(SingleRechargeRecord*))(Il2CppBase() + 0x507349C))(this);
	}
	template <typename T = void> T set_zone_id(int32_t value) {
		return ((T (*)(SingleRechargeRecord*, int32_t))(Il2CppBase() + 0x50734A4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(SingleRechargeRecord*, bool))(Il2CppBase() + 0x50734AC))(this, createIfMissing);
	}

};

}
