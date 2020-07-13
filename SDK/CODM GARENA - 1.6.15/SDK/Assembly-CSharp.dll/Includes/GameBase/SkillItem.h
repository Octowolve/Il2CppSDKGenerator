#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class SkillItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "SkillItem"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Init(uintptr_t inOwnerPawn, bool bInitialSkill) {
		return ((T (*)(SkillItem*, uintptr_t, bool))(Il2CppBase() + 0x308A650))(this, inOwnerPawn, bInitialSkill);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0, bool P1) {
		return ((T (*)(SkillItem*, uintptr_t, bool))(Il2CppBase() + 0x308A728))(this, P0, P1);
	}

};

}
