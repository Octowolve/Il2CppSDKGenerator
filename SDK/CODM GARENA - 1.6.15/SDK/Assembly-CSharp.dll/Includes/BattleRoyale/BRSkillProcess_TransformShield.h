#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRSkillProcessTransformShield
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRSkillProcess_TransformShield"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedStopAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSendRequestOnBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBeginUseSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConfirmDragUse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConfirmQuickUse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCancelUseSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCanUseSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = bool> T NeedStopAim() {
		return ((T (*)(BRSkillProcessTransformShield*))(Il2CppBase() + 0x1B3388C))(this);
	}
	template <typename T = bool> T IsSendRequestOnBegin() {
		return ((T (*)(BRSkillProcessTransformShield*))(Il2CppBase() + 0x1B3392C))(this);
	}
	template <typename T = void> T OnBeginUseSkill() {
		return ((T (*)(BRSkillProcessTransformShield*))(Il2CppBase() + 0x1B339CC))(this);
	}
	template <typename T = void> T OnConfirmDragUse() {
		return ((T (*)(BRSkillProcessTransformShield*))(Il2CppBase() + 0x1B33E50))(this);
	}
	template <typename T = void> T OnConfirmQuickUse() {
		return ((T (*)(BRSkillProcessTransformShield*))(Il2CppBase() + 0x1B33FC0))(this);
	}
	template <typename T = void> T OnCancelUseSkill() {
		return ((T (*)(BRSkillProcessTransformShield*))(Il2CppBase() + 0x1B34130))(this);
	}
	template <typename T = bool> T CheckCanUseSkill() {
		return ((T (*)(BRSkillProcessTransformShield*))(Il2CppBase() + 0x1B34340))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_NeedStopAim() {
		return ((T (*)(BRSkillProcessTransformShield*))(Il2CppBase() + 0x1B34570))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsSendRequestOnBegin() {
		return ((T (*)(BRSkillProcessTransformShield*))(Il2CppBase() + 0x1B34574))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnBeginUseSkill() {
		return ((T (*)(BRSkillProcessTransformShield*))(Il2CppBase() + 0x1B34578))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnConfirmDragUse() {
		return ((T (*)(BRSkillProcessTransformShield*))(Il2CppBase() + 0x1B3457C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnConfirmQuickUse() {
		return ((T (*)(BRSkillProcessTransformShield*))(Il2CppBase() + 0x1B34580))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnCancelUseSkill() {
		return ((T (*)(BRSkillProcessTransformShield*))(Il2CppBase() + 0x1B34584))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CheckCanUseSkill() {
		return ((T (*)(BRSkillProcessTransformShield*))(Il2CppBase() + 0x1B34588))(this);
	}

};

}
