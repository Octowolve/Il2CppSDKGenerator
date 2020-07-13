#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRSkillProcessMedkit
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRSkillProcess_Medkit"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPreUseSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreUseUltSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCanUseSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T OnPreUseSkill() {
		return ((T (*)(BRSkillProcessMedkit*))(Il2CppBase() + 0x1B325BC))(this);
	}
	template <typename T = void> T PreUseUltSkill() {
		return ((T (*)(BRSkillProcessMedkit*))(Il2CppBase() + 0x1B32838))(this);
	}
	template <typename T = bool> T CheckCanUseSkill() {
		return ((T (*)(BRSkillProcessMedkit*))(Il2CppBase() + 0x1B32A70))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnPreUseSkill() {
		return ((T (*)(BRSkillProcessMedkit*))(Il2CppBase() + 0x1B32B14))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CheckCanUseSkill() {
		return ((T (*)(BRSkillProcessMedkit*))(Il2CppBase() + 0x1B32B18))(this);
	}

};

}
