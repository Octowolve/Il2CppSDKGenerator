#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class SubTaskState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "SubTaskState"));
	}

	template <typename T = uint64_t> T& _seq_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _task_progress() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _task_state() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int64_t> T& _update_time() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _deprecated_field5() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _finish_times() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _shared_url() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _zone_progress() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& _unlock_day() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<int32_t>*> T& _exchange_item_num_own() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = uint64_t> T get_seq_id() {
		return ((T (*)(SubTaskState*))(Il2CppBase() + 0x51A9C70))(this);
	}
	template <typename T = void> T set_seq_id(uint64_t value) {
		return ((T (*)(SubTaskState*, uint64_t))(Il2CppBase() + 0x51A9C78))(this, value);
	}
	template <typename T = int32_t> T get_task_progress() {
		return ((T (*)(SubTaskState*))(Il2CppBase() + 0x51A9C88))(this);
	}
	template <typename T = void> T set_task_progress(int32_t value) {
		return ((T (*)(SubTaskState*, int32_t))(Il2CppBase() + 0x51A9C90))(this, value);
	}
	template <typename T = int32_t> T get_task_state() {
		return ((T (*)(SubTaskState*))(Il2CppBase() + 0x51A9C98))(this);
	}
	template <typename T = void> T set_task_state(int32_t value) {
		return ((T (*)(SubTaskState*, int32_t))(Il2CppBase() + 0x51A9CA0))(this, value);
	}
	template <typename T = int64_t> T get_update_time() {
		return ((T (*)(SubTaskState*))(Il2CppBase() + 0x51A9CA8))(this);
	}
	template <typename T = void> T set_update_time(int64_t value) {
		return ((T (*)(SubTaskState*, int64_t))(Il2CppBase() + 0x51A9CB0))(this, value);
	}
	template <typename T = int32_t> T get_deprecated_field5() {
		return ((T (*)(SubTaskState*))(Il2CppBase() + 0x51A9CC0))(this);
	}
	template <typename T = void> T set_deprecated_field5(int32_t value) {
		return ((T (*)(SubTaskState*, int32_t))(Il2CppBase() + 0x51A9CC8))(this, value);
	}
	template <typename T = int32_t> T get_finish_times() {
		return ((T (*)(SubTaskState*))(Il2CppBase() + 0x51A9CD0))(this);
	}
	template <typename T = void> T set_finish_times(int32_t value) {
		return ((T (*)(SubTaskState*, int32_t))(Il2CppBase() + 0x51A9CD8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_shared_url() {
		return ((T (*)(SubTaskState*))(Il2CppBase() + 0x51A9CE0))(this);
	}
	template <typename T = void> T set_shared_url(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(SubTaskState*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51A9CE8))(this, value);
	}
	template <typename T = int32_t> T get_zone_progress() {
		return ((T (*)(SubTaskState*))(Il2CppBase() + 0x51A9CF0))(this);
	}
	template <typename T = void> T set_zone_progress(int32_t value) {
		return ((T (*)(SubTaskState*, int32_t))(Il2CppBase() + 0x51A9CF8))(this, value);
	}
	template <typename T = int32_t> T get_unlock_day() {
		return ((T (*)(SubTaskState*))(Il2CppBase() + 0x51A9D00))(this);
	}
	template <typename T = void> T set_unlock_day(int32_t value) {
		return ((T (*)(SubTaskState*, int32_t))(Il2CppBase() + 0x51A9D08))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_exchange_item_num_own() {
		return ((T (*)(SubTaskState*))(Il2CppBase() + 0x51A9D10))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(SubTaskState*, bool))(Il2CppBase() + 0x51A9D18))(this, createIfMissing);
	}

};

}
