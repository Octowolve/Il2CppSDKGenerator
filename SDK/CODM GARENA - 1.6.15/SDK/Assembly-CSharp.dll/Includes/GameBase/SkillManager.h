#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class SkillManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "SkillManager"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddActiveSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T StartSkill(int32_t skillTypeId) {
		return ((T (*)(SkillManager*, int32_t))(Il2CppBase() + 0x308A974))(this, skillTypeId);
	}
	template <typename T = uintptr_t> T AddActiveSkill(int32_t skillTypeId, bool bInitialSkill) {
		return ((T (*)(SkillManager*, int32_t, bool))(Il2CppBase() + 0x308AA90))(this, skillTypeId, bInitialSkill);
	}
	template <typename T = void> T xLuaBaseProxy_StartSkill(int32_t P0) {
		return ((T (*)(SkillManager*, int32_t))(Il2CppBase() + 0x308AEF8))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_AddActiveSkill(int32_t P0, bool P1) {
		return ((T (*)(SkillManager*, int32_t, bool))(Il2CppBase() + 0x308AF9C))(this, P0, P1);
	}

};

}
