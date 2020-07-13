#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ZombieStateInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ZombieStateInfo"));
	}

	template <typename T = uint32_t> T& _times_kill_boss() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _times_kill_zombie() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _times_kill_hellhound() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _times_kill_inferno() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _times_kill_denizen() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _pve_level_id() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _mission_times() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& _challenge_times() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& _max_role_id() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = uint32_t> T get_times_kill_boss() {
		return ((T (*)(ZombieStateInfo*))(Il2CppBase() + 0x51AB4D0))(this);
	}
	template <typename T = void> T set_times_kill_boss(uint32_t value) {
		return ((T (*)(ZombieStateInfo*, uint32_t))(Il2CppBase() + 0x51AB4D8))(this, value);
	}
	template <typename T = uint32_t> T get_times_kill_zombie() {
		return ((T (*)(ZombieStateInfo*))(Il2CppBase() + 0x51AB4E0))(this);
	}
	template <typename T = void> T set_times_kill_zombie(uint32_t value) {
		return ((T (*)(ZombieStateInfo*, uint32_t))(Il2CppBase() + 0x51AB4E8))(this, value);
	}
	template <typename T = uint32_t> T get_times_kill_hellhound() {
		return ((T (*)(ZombieStateInfo*))(Il2CppBase() + 0x51AB4F0))(this);
	}
	template <typename T = void> T set_times_kill_hellhound(uint32_t value) {
		return ((T (*)(ZombieStateInfo*, uint32_t))(Il2CppBase() + 0x51AB4F8))(this, value);
	}
	template <typename T = uint32_t> T get_times_kill_inferno() {
		return ((T (*)(ZombieStateInfo*))(Il2CppBase() + 0x51AB500))(this);
	}
	template <typename T = void> T set_times_kill_inferno(uint32_t value) {
		return ((T (*)(ZombieStateInfo*, uint32_t))(Il2CppBase() + 0x51AB508))(this, value);
	}
	template <typename T = uint32_t> T get_times_kill_denizen() {
		return ((T (*)(ZombieStateInfo*))(Il2CppBase() + 0x51AB510))(this);
	}
	template <typename T = void> T set_times_kill_denizen(uint32_t value) {
		return ((T (*)(ZombieStateInfo*, uint32_t))(Il2CppBase() + 0x51AB518))(this, value);
	}
	template <typename T = uint32_t> T get_pve_level_id() {
		return ((T (*)(ZombieStateInfo*))(Il2CppBase() + 0x51AB520))(this);
	}
	template <typename T = void> T set_pve_level_id(uint32_t value) {
		return ((T (*)(ZombieStateInfo*, uint32_t))(Il2CppBase() + 0x51AB528))(this, value);
	}
	template <typename T = uint32_t> T get_mission_times() {
		return ((T (*)(ZombieStateInfo*))(Il2CppBase() + 0x51AB530))(this);
	}
	template <typename T = void> T set_mission_times(uint32_t value) {
		return ((T (*)(ZombieStateInfo*, uint32_t))(Il2CppBase() + 0x51AB538))(this, value);
	}
	template <typename T = uint32_t> T get_challenge_times() {
		return ((T (*)(ZombieStateInfo*))(Il2CppBase() + 0x51AB540))(this);
	}
	template <typename T = void> T set_challenge_times(uint32_t value) {
		return ((T (*)(ZombieStateInfo*, uint32_t))(Il2CppBase() + 0x51AB548))(this, value);
	}
	template <typename T = uint32_t> T get_max_role_id() {
		return ((T (*)(ZombieStateInfo*))(Il2CppBase() + 0x51AB550))(this);
	}
	template <typename T = void> T set_max_role_id(uint32_t value) {
		return ((T (*)(ZombieStateInfo*, uint32_t))(Il2CppBase() + 0x51AB558))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ZombieStateInfo*, bool))(Il2CppBase() + 0x51AB560))(this, createIfMissing);
	}

};

}
