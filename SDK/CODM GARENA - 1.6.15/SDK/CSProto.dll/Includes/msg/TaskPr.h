#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class TaskPr
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "TaskPr"));
	}

	template <typename T = int32_t> T& _task_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _task_pr() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _task_status() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int64_t> T& _clear_time() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _update_flag() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& _need_stat() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& _task_diff_pr() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& _update_time() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = int32_t> T get_task_id() {
		return ((T (*)(TaskPr*))(Il2CppBase() + 0x51A9FE8))(this);
	}
	template <typename T = void> T set_task_id(int32_t value) {
		return ((T (*)(TaskPr*, int32_t))(Il2CppBase() + 0x51A9FF0))(this, value);
	}
	template <typename T = int32_t> T get_task_pr() {
		return ((T (*)(TaskPr*))(Il2CppBase() + 0x51A9FF8))(this);
	}
	template <typename T = void> T set_task_pr(int32_t value) {
		return ((T (*)(TaskPr*, int32_t))(Il2CppBase() + 0x51AA000))(this, value);
	}
	template <typename T = uintptr_t> T get_task_status() {
		return ((T (*)(TaskPr*))(Il2CppBase() + 0x51AA008))(this);
	}
	template <typename T = void> T set_task_status(uintptr_t value) {
		return ((T (*)(TaskPr*, uintptr_t))(Il2CppBase() + 0x51AA010))(this, value);
	}
	template <typename T = int64_t> T get_clear_time() {
		return ((T (*)(TaskPr*))(Il2CppBase() + 0x51AA018))(this);
	}
	template <typename T = void> T set_clear_time(int64_t value) {
		return ((T (*)(TaskPr*, int64_t))(Il2CppBase() + 0x51AA020))(this, value);
	}
	template <typename T = uintptr_t> T get_update_flag() {
		return ((T (*)(TaskPr*))(Il2CppBase() + 0x51AA030))(this);
	}
	template <typename T = void> T set_update_flag(uintptr_t value) {
		return ((T (*)(TaskPr*, uintptr_t))(Il2CppBase() + 0x51AA038))(this, value);
	}
	template <typename T = bool> T get_need_stat() {
		return ((T (*)(TaskPr*))(Il2CppBase() + 0x51AA040))(this);
	}
	template <typename T = void> T set_need_stat(bool value) {
		return ((T (*)(TaskPr*, bool))(Il2CppBase() + 0x51AA048))(this, value);
	}
	template <typename T = int32_t> T get_task_diff_pr() {
		return ((T (*)(TaskPr*))(Il2CppBase() + 0x51AA050))(this);
	}
	template <typename T = void> T set_task_diff_pr(int32_t value) {
		return ((T (*)(TaskPr*, int32_t))(Il2CppBase() + 0x51AA058))(this, value);
	}
	template <typename T = uint32_t> T get_update_time() {
		return ((T (*)(TaskPr*))(Il2CppBase() + 0x51AA060))(this);
	}
	template <typename T = void> T set_update_time(uint32_t value) {
		return ((T (*)(TaskPr*, uint32_t))(Il2CppBase() + 0x51AA068))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(TaskPr*, bool))(Il2CppBase() + 0x51AA070))(this, createIfMissing);
	}

};

}
