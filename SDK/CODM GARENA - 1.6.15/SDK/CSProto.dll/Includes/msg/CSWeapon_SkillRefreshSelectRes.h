#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSWeaponSkillRefreshSelectRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSWeapon_SkillRefreshSelectRes"));
	}

	template <typename T = uint64_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _weapon_gid() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _select_index() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _data_change() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uint64_t> T get_result() {
		return ((T (*)(CSWeaponSkillRefreshSelectRes*))(Il2CppBase() + 0x51B6C84))(this);
	}
	template <typename T = void> T set_result(uint64_t value) {
		return ((T (*)(CSWeaponSkillRefreshSelectRes*, uint64_t))(Il2CppBase() + 0x51B6C8C))(this, value);
	}
	template <typename T = uint64_t> T get_weapon_gid() {
		return ((T (*)(CSWeaponSkillRefreshSelectRes*))(Il2CppBase() + 0x51B6C9C))(this);
	}
	template <typename T = void> T set_weapon_gid(uint64_t value) {
		return ((T (*)(CSWeaponSkillRefreshSelectRes*, uint64_t))(Il2CppBase() + 0x51B6CA4))(this, value);
	}
	template <typename T = int32_t> T get_select_index() {
		return ((T (*)(CSWeaponSkillRefreshSelectRes*))(Il2CppBase() + 0x51B6CB4))(this);
	}
	template <typename T = void> T set_select_index(int32_t value) {
		return ((T (*)(CSWeaponSkillRefreshSelectRes*, int32_t))(Il2CppBase() + 0x51B6CBC))(this, value);
	}
	template <typename T = uintptr_t> T get_data_change() {
		return ((T (*)(CSWeaponSkillRefreshSelectRes*))(Il2CppBase() + 0x51B6CC4))(this);
	}
	template <typename T = void> T set_data_change(uintptr_t value) {
		return ((T (*)(CSWeaponSkillRefreshSelectRes*, uintptr_t))(Il2CppBase() + 0x51B6CCC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSWeaponSkillRefreshSelectRes*, bool))(Il2CppBase() + 0x51B6CD4))(this, createIfMissing);
	}

};

}
