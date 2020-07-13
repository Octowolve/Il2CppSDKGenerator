#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ActiveDB
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ActiveDB"));
	}

	template <typename T = int64_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _points() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _active_state() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _box_list() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int64_t> T& _update_time() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int64_t> T& _clear_time() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _is_spm_first() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& _is_zombies_first() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& _is_apvp_first() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& _is_spvp_first() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& _is_br_first() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _sub_task_state() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = int64_t> T get_id() {
		return ((T (*)(ActiveDB*))(Il2CppBase() + 0x510AB14))(this);
	}
	template <typename T = void> T set_id(int64_t value) {
		return ((T (*)(ActiveDB*, int64_t))(Il2CppBase() + 0x510AB1C))(this, value);
	}
	template <typename T = int32_t> T get_points() {
		return ((T (*)(ActiveDB*))(Il2CppBase() + 0x510AB2C))(this);
	}
	template <typename T = void> T set_points(int32_t value) {
		return ((T (*)(ActiveDB*, int32_t))(Il2CppBase() + 0x510AB34))(this, value);
	}
	template <typename T = int32_t> T get_active_state() {
		return ((T (*)(ActiveDB*))(Il2CppBase() + 0x510AB3C))(this);
	}
	template <typename T = void> T set_active_state(int32_t value) {
		return ((T (*)(ActiveDB*, int32_t))(Il2CppBase() + 0x510AB44))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_box_list() {
		return ((T (*)(ActiveDB*))(Il2CppBase() + 0x510AB4C))(this);
	}
	template <typename T = int64_t> T get_update_time() {
		return ((T (*)(ActiveDB*))(Il2CppBase() + 0x510AB54))(this);
	}
	template <typename T = void> T set_update_time(int64_t value) {
		return ((T (*)(ActiveDB*, int64_t))(Il2CppBase() + 0x510AB5C))(this, value);
	}
	template <typename T = int64_t> T get_clear_time() {
		return ((T (*)(ActiveDB*))(Il2CppBase() + 0x510AB6C))(this);
	}
	template <typename T = void> T set_clear_time(int64_t value) {
		return ((T (*)(ActiveDB*, int64_t))(Il2CppBase() + 0x510AB74))(this, value);
	}
	template <typename T = int32_t> T get_is_spm_first() {
		return ((T (*)(ActiveDB*))(Il2CppBase() + 0x510AB84))(this);
	}
	template <typename T = void> T set_is_spm_first(int32_t value) {
		return ((T (*)(ActiveDB*, int32_t))(Il2CppBase() + 0x510AB8C))(this, value);
	}
	template <typename T = int32_t> T get_is_zombies_first() {
		return ((T (*)(ActiveDB*))(Il2CppBase() + 0x510AB94))(this);
	}
	template <typename T = void> T set_is_zombies_first(int32_t value) {
		return ((T (*)(ActiveDB*, int32_t))(Il2CppBase() + 0x510AB9C))(this, value);
	}
	template <typename T = int32_t> T get_is_apvp_first() {
		return ((T (*)(ActiveDB*))(Il2CppBase() + 0x510ABA4))(this);
	}
	template <typename T = void> T set_is_apvp_first(int32_t value) {
		return ((T (*)(ActiveDB*, int32_t))(Il2CppBase() + 0x510ABAC))(this, value);
	}
	template <typename T = int32_t> T get_is_spvp_first() {
		return ((T (*)(ActiveDB*))(Il2CppBase() + 0x510ABB4))(this);
	}
	template <typename T = void> T set_is_spvp_first(int32_t value) {
		return ((T (*)(ActiveDB*, int32_t))(Il2CppBase() + 0x510ABBC))(this, value);
	}
	template <typename T = int32_t> T get_is_br_first() {
		return ((T (*)(ActiveDB*))(Il2CppBase() + 0x510ABC4))(this);
	}
	template <typename T = void> T set_is_br_first(int32_t value) {
		return ((T (*)(ActiveDB*, int32_t))(Il2CppBase() + 0x510ABCC))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_sub_task_state() {
		return ((T (*)(ActiveDB*))(Il2CppBase() + 0x510ABD4))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ActiveDB*, bool))(Il2CppBase() + 0x510ABDC))(this, createIfMissing);
	}

};

}
