#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ActivityDB
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ActivityDB"));
	}

	template <typename T = uint64_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _activity_progress() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _activity_type() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _actv_state() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _box_list() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int64_t> T& _update_time() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int64_t> T& _clear_time() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _sub_task_state() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int64_t> T& _finish_time() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& _server_ver() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint64_t> T& _start_second() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint64_t> T& _end_second() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _back_info() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x5C);
	}

	template <typename T = uint64_t> T get_id() {
		return ((T (*)(ActivityDB*))(Il2CppBase() + 0x510AE7C))(this);
	}
	template <typename T = void> T set_id(uint64_t value) {
		return ((T (*)(ActivityDB*, uint64_t))(Il2CppBase() + 0x510AE84))(this, value);
	}
	template <typename T = int32_t> T get_activity_progress() {
		return ((T (*)(ActivityDB*))(Il2CppBase() + 0x510AE94))(this);
	}
	template <typename T = void> T set_activity_progress(int32_t value) {
		return ((T (*)(ActivityDB*, int32_t))(Il2CppBase() + 0x510AE9C))(this, value);
	}
	template <typename T = int32_t> T get_activity_type() {
		return ((T (*)(ActivityDB*))(Il2CppBase() + 0x510AEA4))(this);
	}
	template <typename T = void> T set_activity_type(int32_t value) {
		return ((T (*)(ActivityDB*, int32_t))(Il2CppBase() + 0x510AEAC))(this, value);
	}
	template <typename T = int32_t> T get_actv_state() {
		return ((T (*)(ActivityDB*))(Il2CppBase() + 0x510AEB4))(this);
	}
	template <typename T = void> T set_actv_state(int32_t value) {
		return ((T (*)(ActivityDB*, int32_t))(Il2CppBase() + 0x510AEBC))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_box_list() {
		return ((T (*)(ActivityDB*))(Il2CppBase() + 0x510AEC4))(this);
	}
	template <typename T = int64_t> T get_update_time() {
		return ((T (*)(ActivityDB*))(Il2CppBase() + 0x510AECC))(this);
	}
	template <typename T = void> T set_update_time(int64_t value) {
		return ((T (*)(ActivityDB*, int64_t))(Il2CppBase() + 0x510AED4))(this, value);
	}
	template <typename T = int64_t> T get_clear_time() {
		return ((T (*)(ActivityDB*))(Il2CppBase() + 0x510AEE4))(this);
	}
	template <typename T = void> T set_clear_time(int64_t value) {
		return ((T (*)(ActivityDB*, int64_t))(Il2CppBase() + 0x510AEEC))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_sub_task_state() {
		return ((T (*)(ActivityDB*))(Il2CppBase() + 0x510AEFC))(this);
	}
	template <typename T = int64_t> T get_finish_time() {
		return ((T (*)(ActivityDB*))(Il2CppBase() + 0x510AF04))(this);
	}
	template <typename T = void> T set_finish_time(int64_t value) {
		return ((T (*)(ActivityDB*, int64_t))(Il2CppBase() + 0x510AF0C))(this, value);
	}
	template <typename T = int32_t> T get_server_ver() {
		return ((T (*)(ActivityDB*))(Il2CppBase() + 0x510AF1C))(this);
	}
	template <typename T = void> T set_server_ver(int32_t value) {
		return ((T (*)(ActivityDB*, int32_t))(Il2CppBase() + 0x510AF24))(this, value);
	}
	template <typename T = uint64_t> T get_start_second() {
		return ((T (*)(ActivityDB*))(Il2CppBase() + 0x510AF2C))(this);
	}
	template <typename T = void> T set_start_second(uint64_t value) {
		return ((T (*)(ActivityDB*, uint64_t))(Il2CppBase() + 0x510AF34))(this, value);
	}
	template <typename T = uint64_t> T get_end_second() {
		return ((T (*)(ActivityDB*))(Il2CppBase() + 0x510AF44))(this);
	}
	template <typename T = void> T set_end_second(uint64_t value) {
		return ((T (*)(ActivityDB*, uint64_t))(Il2CppBase() + 0x510AF4C))(this, value);
	}
	template <typename T = uintptr_t> T get_back_info() {
		return ((T (*)(ActivityDB*))(Il2CppBase() + 0x510AF5C))(this);
	}
	template <typename T = void> T set_back_info(uintptr_t value) {
		return ((T (*)(ActivityDB*, uintptr_t))(Il2CppBase() + 0x510AF64))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ActivityDB*, bool))(Il2CppBase() + 0x510AF6C))(this, createIfMissing);
	}

};

}
