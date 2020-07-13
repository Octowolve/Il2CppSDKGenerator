#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRSkillProcessPsychosis
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRSkillProcess_Psychosis"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBeginUseSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCanUseSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsContinuousUsing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T OnBeginUseSkill() {
		return ((T (*)(BRSkillProcessPsychosis*))(Il2CppBase() + 0x1B3314C))(this);
	}
	template <typename T = bool> T CheckCanUseSkill() {
		return ((T (*)(BRSkillProcessPsychosis*))(Il2CppBase() + 0x1B331F0))(this);
	}
	template <typename T = bool> T IsContinuousUsing() {
		return ((T (*)(BRSkillProcessPsychosis*))(Il2CppBase() + 0x1B33294))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnBeginUseSkill() {
		return ((T (*)(BRSkillProcessPsychosis*))(Il2CppBase() + 0x1B33478))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CheckCanUseSkill() {
		return ((T (*)(BRSkillProcessPsychosis*))(Il2CppBase() + 0x1B3347C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsContinuousUsing() {
		return ((T (*)(BRSkillProcessPsychosis*))(Il2CppBase() + 0x1B33480))(this);
	}

};

}
