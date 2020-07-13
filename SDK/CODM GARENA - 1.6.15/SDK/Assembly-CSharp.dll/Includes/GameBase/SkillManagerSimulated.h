#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class SkillManagerSimulated
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "SkillManagerSimulated"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddActiveSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T AddActiveSkill(int32_t skillTypeId, bool bInitialSkill) {
		return ((T (*)(SkillManagerSimulated*, int32_t, bool))(Il2CppBase() + 0x308C61C))(this, skillTypeId, bInitialSkill);
	}
	template <typename T = void> T StartSkill(int32_t skillTypeId) {
		return ((T (*)(SkillManagerSimulated*, int32_t))(Il2CppBase() + 0x308C84C))(this, skillTypeId);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_AddActiveSkill(int32_t P0, bool P1) {
		return ((T (*)(SkillManagerSimulated*, int32_t, bool))(Il2CppBase() + 0x308C9A4))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_StartSkill(int32_t P0) {
		return ((T (*)(SkillManagerSimulated*, int32_t))(Il2CppBase() + 0x308C9A8))(this, P0);
	}

};

}
