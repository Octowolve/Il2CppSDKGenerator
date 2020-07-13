#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRSkillProcessSmokeCluster
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRSkillProcess_SmokeCluster"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCanUseSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T CheckCanUseSkill() {
		return ((T (*)(BRSkillProcessSmokeCluster*))(Il2CppBase() + 0x1B3355C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CheckCanUseSkill() {
		return ((T (*)(BRSkillProcessSmokeCluster*))(Il2CppBase() + 0x1B337B0))(this);
	}

};

}
