#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSWeaponSkillRefreshReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSWeapon_SkillRefreshReq"));
	}

	template <typename T = uintptr_t> T& _msg() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_msg() {
		return ((T (*)(CSWeaponSkillRefreshReq*))(Il2CppBase() + 0x51B6BE8))(this);
	}
	template <typename T = void> T set_msg(uintptr_t value) {
		return ((T (*)(CSWeaponSkillRefreshReq*, uintptr_t))(Il2CppBase() + 0x51B6BF0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSWeaponSkillRefreshReq*, bool))(Il2CppBase() + 0x51B6BF8))(this, createIfMissing);
	}

};

}
