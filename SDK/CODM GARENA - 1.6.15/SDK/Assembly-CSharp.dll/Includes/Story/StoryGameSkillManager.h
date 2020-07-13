#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Story {

class StoryGameSkillManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Story", "StoryGameSkillManager"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Init(uint32_t playerId, bool bInitialSkill) {
		return ((T (*)(StoryGameSkillManager*, uint32_t, bool))(Il2CppBase() + 0x3F1E908))(this, playerId, bInitialSkill);
	}
	template <typename T = void> T StartSkill(int32_t skillTypeId) {
		return ((T (*)(StoryGameSkillManager*, int32_t))(Il2CppBase() + 0x3F1E9D8))(this, skillTypeId);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uint32_t P0, bool P1) {
		return ((T (*)(StoryGameSkillManager*, uint32_t, bool))(Il2CppBase() + 0x3F1EB18))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_StartSkill(int32_t P0) {
		return ((T (*)(StoryGameSkillManager*, int32_t))(Il2CppBase() + 0x3F1EB20))(this, P0);
	}

};

}
