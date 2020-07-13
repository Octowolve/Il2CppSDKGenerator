#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSWeaponSkillRefreshSelectReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSWeapon_SkillRefreshSelectReq"));
	}

	template <typename T = uint64_t> T& _weapon_gid() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _select_index() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint64_t> T get_weapon_gid() {
		return ((T (*)(CSWeaponSkillRefreshSelectReq*))(Il2CppBase() + 0x51B6C40))(this);
	}
	template <typename T = void> T set_weapon_gid(uint64_t value) {
		return ((T (*)(CSWeaponSkillRefreshSelectReq*, uint64_t))(Il2CppBase() + 0x51B6C48))(this, value);
	}
	template <typename T = int32_t> T get_select_index() {
		return ((T (*)(CSWeaponSkillRefreshSelectReq*))(Il2CppBase() + 0x51B6C58))(this);
	}
	template <typename T = void> T set_select_index(int32_t value) {
		return ((T (*)(CSWeaponSkillRefreshSelectReq*, int32_t))(Il2CppBase() + 0x51B6C60))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSWeaponSkillRefreshSelectReq*, bool))(Il2CppBase() + 0x51B6C68))(this, createIfMissing);
	}

};

}
