#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class WeekTaskPr
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "WeekTaskPr"));
	}

	template <typename T = int32_t> T& _week_seq() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _mp_week_task_pr() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _br_week_task_pr() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _pve_week_task_pr() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& _task_status() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _finish_free_task_cnt() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _finish_charge_task_cnt() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = int32_t> T get_week_seq() {
		return ((T (*)(WeekTaskPr*))(Il2CppBase() + 0x51AB02C))(this);
	}
	template <typename T = void> T set_week_seq(int32_t value) {
		return ((T (*)(WeekTaskPr*, int32_t))(Il2CppBase() + 0x51AB034))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_mp_week_task_pr() {
		return ((T (*)(WeekTaskPr*))(Il2CppBase() + 0x51AB03C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_br_week_task_pr() {
		return ((T (*)(WeekTaskPr*))(Il2CppBase() + 0x51AB044))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_pve_week_task_pr() {
		return ((T (*)(WeekTaskPr*))(Il2CppBase() + 0x51AB04C))(this);
	}
	template <typename T = uintptr_t> T get_task_status() {
		return ((T (*)(WeekTaskPr*))(Il2CppBase() + 0x51AB054))(this);
	}
	template <typename T = void> T set_task_status(uintptr_t value) {
		return ((T (*)(WeekTaskPr*, uintptr_t))(Il2CppBase() + 0x51AB05C))(this, value);
	}
	template <typename T = int32_t> T get_finish_free_task_cnt() {
		return ((T (*)(WeekTaskPr*))(Il2CppBase() + 0x51AB064))(this);
	}
	template <typename T = void> T set_finish_free_task_cnt(int32_t value) {
		return ((T (*)(WeekTaskPr*, int32_t))(Il2CppBase() + 0x51AB06C))(this, value);
	}
	template <typename T = int32_t> T get_finish_charge_task_cnt() {
		return ((T (*)(WeekTaskPr*))(Il2CppBase() + 0x51AB074))(this);
	}
	template <typename T = void> T set_finish_charge_task_cnt(int32_t value) {
		return ((T (*)(WeekTaskPr*, int32_t))(Il2CppBase() + 0x51AB07C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(WeekTaskPr*, bool))(Il2CppBase() + 0x51AB084))(this, createIfMissing);
	}

};

}
