#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRSkillProcessInvisible
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRSkillProcess_Invisible"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedStopAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBeginUseSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCanUseSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsContinuousUsing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = bool> T NeedStopAim() {
		return ((T (*)(BRSkillProcessInvisible*))(Il2CppBase() + 0x1B31B18))(this);
	}
	template <typename T = void> T OnBeginUseSkill() {
		return ((T (*)(BRSkillProcessInvisible*))(Il2CppBase() + 0x1B31BB8))(this);
	}
	template <typename T = bool> T CheckCanUseSkill() {
		return ((T (*)(BRSkillProcessInvisible*))(Il2CppBase() + 0x1B31C5C))(this);
	}
	template <typename T = bool> T IsContinuousUsing() {
		return ((T (*)(BRSkillProcessInvisible*))(Il2CppBase() + 0x1B322F0))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_NeedStopAim() {
		return ((T (*)(BRSkillProcessInvisible*))(Il2CppBase() + 0x1B324D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnBeginUseSkill() {
		return ((T (*)(BRSkillProcessInvisible*))(Il2CppBase() + 0x1B324D8))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CheckCanUseSkill() {
		return ((T (*)(BRSkillProcessInvisible*))(Il2CppBase() + 0x1B324DC))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsContinuousUsing() {
		return ((T (*)(BRSkillProcessInvisible*))(Il2CppBase() + 0x1B324E0))(this);
	}

};

}
