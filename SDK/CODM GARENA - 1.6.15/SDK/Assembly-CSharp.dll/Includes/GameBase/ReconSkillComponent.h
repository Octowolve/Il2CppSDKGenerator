#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class ReconSkillComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "ReconSkillComponent"));
	}

	template <typename T = uintptr_t> T& m_Owner() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ActiveSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Init(uintptr_t Owner) {
		return ((T (*)(ReconSkillComponent*, uintptr_t))(Il2CppBase() + 0x2DE075C))(this, Owner);
	}
	template <typename T = bool> T ActiveSkill() {
		return ((T (*)(ReconSkillComponent*))(Il2CppBase() + 0x2DE0804))(this);
	}

};

}
