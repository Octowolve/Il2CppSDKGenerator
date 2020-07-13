#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ByPassWeekTask
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ByPassWeekTask"));
	}

	template <typename T = int32_t> T& _week_task_pr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _task_status() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int64_t> T& _clear_time() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _update_flag() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = int32_t> T get_week_task_pr() {
		return ((T (*)(ByPassWeekTask*))(Il2CppBase() + 0x516DB20))(this);
	}
	template <typename T = void> T set_week_task_pr(int32_t value) {
		return ((T (*)(ByPassWeekTask*, int32_t))(Il2CppBase() + 0x516DB28))(this, value);
	}
	template <typename T = uintptr_t> T get_task_status() {
		return ((T (*)(ByPassWeekTask*))(Il2CppBase() + 0x516DB30))(this);
	}
	template <typename T = void> T set_task_status(uintptr_t value) {
		return ((T (*)(ByPassWeekTask*, uintptr_t))(Il2CppBase() + 0x516DB38))(this, value);
	}
	template <typename T = int64_t> T get_clear_time() {
		return ((T (*)(ByPassWeekTask*))(Il2CppBase() + 0x516DB40))(this);
	}
	template <typename T = void> T set_clear_time(int64_t value) {
		return ((T (*)(ByPassWeekTask*, int64_t))(Il2CppBase() + 0x516DB48))(this, value);
	}
	template <typename T = uintptr_t> T get_update_flag() {
		return ((T (*)(ByPassWeekTask*))(Il2CppBase() + 0x516DB58))(this);
	}
	template <typename T = void> T set_update_flag(uintptr_t value) {
		return ((T (*)(ByPassWeekTask*, uintptr_t))(Il2CppBase() + 0x516DB60))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ByPassWeekTask*, bool))(Il2CppBase() + 0x516DB68))(this, createIfMissing);
	}

};

}
