#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class TaskItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "TaskItem"));
	}

	template <typename T = uint32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _task_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _task_value() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& _reward_flag() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& _item_finished_flag() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uint32_t> T get_id() {
		return ((T (*)(TaskItem*))(Il2CppBase() + 0x51A9F64))(this);
	}
	template <typename T = void> T set_id(uint32_t value) {
		return ((T (*)(TaskItem*, uint32_t))(Il2CppBase() + 0x51A9F6C))(this, value);
	}
	template <typename T = int32_t> T get_type() {
		return ((T (*)(TaskItem*))(Il2CppBase() + 0x51A9F74))(this);
	}
	template <typename T = void> T set_type(int32_t value) {
		return ((T (*)(TaskItem*, int32_t))(Il2CppBase() + 0x51A9F7C))(this, value);
	}
	template <typename T = uint32_t> T get_task_id() {
		return ((T (*)(TaskItem*))(Il2CppBase() + 0x51A9F84))(this);
	}
	template <typename T = void> T set_task_id(uint32_t value) {
		return ((T (*)(TaskItem*, uint32_t))(Il2CppBase() + 0x51A9F8C))(this, value);
	}
	template <typename T = uint32_t> T get_task_value() {
		return ((T (*)(TaskItem*))(Il2CppBase() + 0x51A9F94))(this);
	}
	template <typename T = void> T set_task_value(uint32_t value) {
		return ((T (*)(TaskItem*, uint32_t))(Il2CppBase() + 0x51A9F9C))(this, value);
	}
	template <typename T = bool> T get_reward_flag() {
		return ((T (*)(TaskItem*))(Il2CppBase() + 0x51A9FA4))(this);
	}
	template <typename T = void> T set_reward_flag(bool value) {
		return ((T (*)(TaskItem*, bool))(Il2CppBase() + 0x51A9FAC))(this, value);
	}
	template <typename T = bool> T get_item_finished_flag() {
		return ((T (*)(TaskItem*))(Il2CppBase() + 0x51A9FB4))(this);
	}
	template <typename T = void> T set_item_finished_flag(bool value) {
		return ((T (*)(TaskItem*, bool))(Il2CppBase() + 0x51A9FBC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(TaskItem*, bool))(Il2CppBase() + 0x51A9FC4))(this, createIfMissing);
	}

};

}
