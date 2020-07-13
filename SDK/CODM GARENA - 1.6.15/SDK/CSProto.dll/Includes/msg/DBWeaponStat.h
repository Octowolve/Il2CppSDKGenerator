#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class DBWeaponStat
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "DBWeaponStat"));
	}

	template <typename T = int32_t> T& _weapon_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _times_kill() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _times_headshot() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _times_hit_target() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _times_shot() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _times_use() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _times_be_kill() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = int32_t> T get_weapon_id() {
		return ((T (*)(DBWeaponStat*))(Il2CppBase() + 0x52263B0))(this);
	}
	template <typename T = void> T set_weapon_id(int32_t value) {
		return ((T (*)(DBWeaponStat*, int32_t))(Il2CppBase() + 0x52263B8))(this, value);
	}
	template <typename T = uint32_t> T get_times_kill() {
		return ((T (*)(DBWeaponStat*))(Il2CppBase() + 0x52263C0))(this);
	}
	template <typename T = void> T set_times_kill(uint32_t value) {
		return ((T (*)(DBWeaponStat*, uint32_t))(Il2CppBase() + 0x52263C8))(this, value);
	}
	template <typename T = uint32_t> T get_times_headshot() {
		return ((T (*)(DBWeaponStat*))(Il2CppBase() + 0x52263D0))(this);
	}
	template <typename T = void> T set_times_headshot(uint32_t value) {
		return ((T (*)(DBWeaponStat*, uint32_t))(Il2CppBase() + 0x52263D8))(this, value);
	}
	template <typename T = uint32_t> T get_times_hit_target() {
		return ((T (*)(DBWeaponStat*))(Il2CppBase() + 0x52263E0))(this);
	}
	template <typename T = void> T set_times_hit_target(uint32_t value) {
		return ((T (*)(DBWeaponStat*, uint32_t))(Il2CppBase() + 0x52263E8))(this, value);
	}
	template <typename T = uint32_t> T get_times_shot() {
		return ((T (*)(DBWeaponStat*))(Il2CppBase() + 0x52263F0))(this);
	}
	template <typename T = void> T set_times_shot(uint32_t value) {
		return ((T (*)(DBWeaponStat*, uint32_t))(Il2CppBase() + 0x52263F8))(this, value);
	}
	template <typename T = uint32_t> T get_times_use() {
		return ((T (*)(DBWeaponStat*))(Il2CppBase() + 0x5226400))(this);
	}
	template <typename T = void> T set_times_use(uint32_t value) {
		return ((T (*)(DBWeaponStat*, uint32_t))(Il2CppBase() + 0x5226408))(this, value);
	}
	template <typename T = uint32_t> T get_times_be_kill() {
		return ((T (*)(DBWeaponStat*))(Il2CppBase() + 0x5226410))(this);
	}
	template <typename T = void> T set_times_be_kill(uint32_t value) {
		return ((T (*)(DBWeaponStat*, uint32_t))(Il2CppBase() + 0x5226418))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(DBWeaponStat*, bool))(Il2CppBase() + 0x5226420))(this, createIfMissing);
	}

};

}
