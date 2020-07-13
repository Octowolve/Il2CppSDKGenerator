#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class TaskData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "TaskData"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _mp_daily_task_pr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _br_daily_task_pr() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _pve_daily_task_pr() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _daily_override_flag() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _week_task_pr() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _mp_chall_task_pr() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _br_chall_task_pr() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _pve_chall_task_pr() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _other_task_pr() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_mp_daily_task_pr() {
		return ((T (*)(TaskData*))(Il2CppBase() + 0x51A9EF8))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_br_daily_task_pr() {
		return ((T (*)(TaskData*))(Il2CppBase() + 0x51A9F00))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_pve_daily_task_pr() {
		return ((T (*)(TaskData*))(Il2CppBase() + 0x51A9F08))(this);
	}
	template <typename T = uintptr_t> T get_daily_override_flag() {
		return ((T (*)(TaskData*))(Il2CppBase() + 0x51A9F10))(this);
	}
	template <typename T = void> T set_daily_override_flag(uintptr_t value) {
		return ((T (*)(TaskData*, uintptr_t))(Il2CppBase() + 0x51A9F18))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_week_task_pr() {
		return ((T (*)(TaskData*))(Il2CppBase() + 0x51A9F20))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_mp_chall_task_pr() {
		return ((T (*)(TaskData*))(Il2CppBase() + 0x51A9F28))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_br_chall_task_pr() {
		return ((T (*)(TaskData*))(Il2CppBase() + 0x51A9F30))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_pve_chall_task_pr() {
		return ((T (*)(TaskData*))(Il2CppBase() + 0x51A9F38))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_other_task_pr() {
		return ((T (*)(TaskData*))(Il2CppBase() + 0x51A9F40))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(TaskData*, bool))(Il2CppBase() + 0x51A9F48))(this, createIfMissing);
	}

};

}
