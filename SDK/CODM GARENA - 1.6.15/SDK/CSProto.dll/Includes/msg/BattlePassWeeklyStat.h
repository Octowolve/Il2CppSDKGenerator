#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class BattlePassWeeklyStat
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "BattlePassWeeklyStat"));
	}

	template <typename T = uint32_t> T& _timestamp() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _mp_daily_task_stat() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _br_daily_task_stat() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _pve_daily_task_stat() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& _mp_week_task_stat() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _mp_chall_task_stat() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& _br_chall_task_stat() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _pve_chall_task_stat() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& _br_week_task_stat() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _pve_week_task_stat() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = uint32_t> T get_timestamp() {
		return ((T (*)(BattlePassWeeklyStat*))(Il2CppBase() + 0x510D2A0))(this);
	}
	template <typename T = void> T set_timestamp(uint32_t value) {
		return ((T (*)(BattlePassWeeklyStat*, uint32_t))(Il2CppBase() + 0x510D2A8))(this, value);
	}
	template <typename T = uintptr_t> T get_mp_daily_task_stat() {
		return ((T (*)(BattlePassWeeklyStat*))(Il2CppBase() + 0x510D2B0))(this);
	}
	template <typename T = void> T set_mp_daily_task_stat(uintptr_t value) {
		return ((T (*)(BattlePassWeeklyStat*, uintptr_t))(Il2CppBase() + 0x510D2B8))(this, value);
	}
	template <typename T = uintptr_t> T get_br_daily_task_stat() {
		return ((T (*)(BattlePassWeeklyStat*))(Il2CppBase() + 0x510D2C0))(this);
	}
	template <typename T = void> T set_br_daily_task_stat(uintptr_t value) {
		return ((T (*)(BattlePassWeeklyStat*, uintptr_t))(Il2CppBase() + 0x510D2C8))(this, value);
	}
	template <typename T = uintptr_t> T get_pve_daily_task_stat() {
		return ((T (*)(BattlePassWeeklyStat*))(Il2CppBase() + 0x510D2D0))(this);
	}
	template <typename T = void> T set_pve_daily_task_stat(uintptr_t value) {
		return ((T (*)(BattlePassWeeklyStat*, uintptr_t))(Il2CppBase() + 0x510D2D8))(this, value);
	}
	template <typename T = uintptr_t> T get_mp_week_task_stat() {
		return ((T (*)(BattlePassWeeklyStat*))(Il2CppBase() + 0x510D2E0))(this);
	}
	template <typename T = void> T set_mp_week_task_stat(uintptr_t value) {
		return ((T (*)(BattlePassWeeklyStat*, uintptr_t))(Il2CppBase() + 0x510D2E8))(this, value);
	}
	template <typename T = uintptr_t> T get_mp_chall_task_stat() {
		return ((T (*)(BattlePassWeeklyStat*))(Il2CppBase() + 0x510D2F0))(this);
	}
	template <typename T = void> T set_mp_chall_task_stat(uintptr_t value) {
		return ((T (*)(BattlePassWeeklyStat*, uintptr_t))(Il2CppBase() + 0x510D2F8))(this, value);
	}
	template <typename T = uintptr_t> T get_br_chall_task_stat() {
		return ((T (*)(BattlePassWeeklyStat*))(Il2CppBase() + 0x510D300))(this);
	}
	template <typename T = void> T set_br_chall_task_stat(uintptr_t value) {
		return ((T (*)(BattlePassWeeklyStat*, uintptr_t))(Il2CppBase() + 0x510D308))(this, value);
	}
	template <typename T = uintptr_t> T get_pve_chall_task_stat() {
		return ((T (*)(BattlePassWeeklyStat*))(Il2CppBase() + 0x510D310))(this);
	}
	template <typename T = void> T set_pve_chall_task_stat(uintptr_t value) {
		return ((T (*)(BattlePassWeeklyStat*, uintptr_t))(Il2CppBase() + 0x510D318))(this, value);
	}
	template <typename T = uintptr_t> T get_br_week_task_stat() {
		return ((T (*)(BattlePassWeeklyStat*))(Il2CppBase() + 0x510D320))(this);
	}
	template <typename T = void> T set_br_week_task_stat(uintptr_t value) {
		return ((T (*)(BattlePassWeeklyStat*, uintptr_t))(Il2CppBase() + 0x510D328))(this, value);
	}
	template <typename T = uintptr_t> T get_pve_week_task_stat() {
		return ((T (*)(BattlePassWeeklyStat*))(Il2CppBase() + 0x510D330))(this);
	}
	template <typename T = void> T set_pve_week_task_stat(uintptr_t value) {
		return ((T (*)(BattlePassWeeklyStat*, uintptr_t))(Il2CppBase() + 0x510D338))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(BattlePassWeeklyStat*, bool))(Il2CppBase() + 0x510D340))(this, createIfMissing);
	}

};

}
