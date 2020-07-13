#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class SkillHPRecover
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "Skill_HPRecover"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRemainingTimesChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInitRemainingTimesChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Destroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Init(uintptr_t inOwnerPawn, bool bInitialSkill) {
		return ((T (*)(SkillHPRecover*, uintptr_t, bool))(Il2CppBase() + 0x2E0E1C4))(this, inOwnerPawn, bInitialSkill);
	}
	template <typename T = void> T ConfigProperties() {
		return ((T (*)(SkillHPRecover*))(Il2CppBase() + 0x2E0E478))(this);
	}
	template <typename T = void> T OnRemainingTimesChanged() {
		return ((T (*)(SkillHPRecover*))(Il2CppBase() + 0x2E0E544))(this);
	}
	template <typename T = void> T OnInitRemainingTimesChanged() {
		return ((T (*)(SkillHPRecover*))(Il2CppBase() + 0x2E0E620))(this);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(SkillHPRecover*))(Il2CppBase() + 0x2E0E6EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0, bool P1) {
		return ((T (*)(SkillHPRecover*, uintptr_t, bool))(Il2CppBase() + 0x2E0EA30))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_ConfigProperties() {
		return ((T (*)(SkillHPRecover*))(Il2CppBase() + 0x2E0EA38))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRemainingTimesChanged() {
		return ((T (*)(SkillHPRecover*))(Il2CppBase() + 0x2E0EA3C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnInitRemainingTimesChanged() {
		return ((T (*)(SkillHPRecover*))(Il2CppBase() + 0x2E0EAD8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Destroy() {
		return ((T (*)(SkillHPRecover*))(Il2CppBase() + 0x2E0EB74))(this);
	}

};

}
