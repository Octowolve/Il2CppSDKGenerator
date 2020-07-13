#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRSkillProcessBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRSkillProcessBase"));
	}

	template <typename T = uintptr_t> T& m_UltConf() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_SkillView() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& LastUseTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> static T& FixCancelSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBeginPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowNormalCannotUseTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCanUseSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBeginUseSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPreUseSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConfirmQuickUse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConfirmDragUse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DragTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCancelUseSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedStopAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSendRequestOnBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExcuteCossHairProcess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsContinuousUsing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNeedQuickClickProtect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = void> T Init(uintptr_t ultConf, uintptr_t view) {
		return ((T (*)(BRSkillProcessBase*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B2E5C8))(this, ultConf, view);
	}
	template <typename T = void> T OnBeginPress() {
		return ((T (*)(BRSkillProcessBase*))(Il2CppBase() + 0x1B3458C))(this);
	}
	template <typename T = void> T ShowNormalCannotUseTips() {
		return ((T (*)(BRSkillProcessBase*))(Il2CppBase() + 0x1B31618))(this);
	}
	template <typename T = float> T get_LastUseTime() {
		return ((T (*)(BRSkillProcessBase*))(Il2CppBase() + 0x1B322E8))(this);
	}
	template <typename T = void> T set_LastUseTime(float value) {
		return ((T (*)(BRSkillProcessBase*, float))(Il2CppBase() + 0x1B34654))(this, value);
	}
	template <typename T = bool> T CheckCanUseSkill() {
		return ((T (*)(BRSkillProcessBase*))(Il2CppBase() + 0x1B2D77C))(this);
	}
	template <typename T = void> T OnBeginUseSkill() {
		return ((T (*)(BRSkillProcessBase*))(Il2CppBase() + 0x1B2F930))(this);
	}
	template <typename T = void> T OnPreUseSkill() {
		return ((T (*)(BRSkillProcessBase*))(Il2CppBase() + 0x1B32770))(this);
	}
	template <typename T = void> T OnConfirmQuickUse() {
		return ((T (*)(BRSkillProcessBase*))(Il2CppBase() + 0x1B2CA74))(this);
	}
	template <typename T = void> T OnConfirmDragUse() {
		return ((T (*)(BRSkillProcessBase*))(Il2CppBase() + 0x1B2BE78))(this);
	}
	template <typename T = void> T OnDragBegin() {
		return ((T (*)(BRSkillProcessBase*))(Il2CppBase() + 0x1B287FC))(this);
	}
	template <typename T = void> T DragTick(float delatTime) {
		return ((T (*)(BRSkillProcessBase*, float))(Il2CppBase() + 0x1B29228))(this, delatTime);
	}
	template <typename T = void> T OnCancelUseSkill() {
		return ((T (*)(BRSkillProcessBase*))(Il2CppBase() + 0x1B2CE0C))(this);
	}
	template <typename T = bool> T NeedStopAim() {
		return ((T (*)(BRSkillProcessBase*))(Il2CppBase() + 0x1B2E6C0))(this);
	}
	template <typename T = bool> T IsSendRequestOnBegin() {
		return ((T (*)(BRSkillProcessBase*))(Il2CppBase() + 0x1B2E0D0))(this);
	}
	template <typename T = bool> T ExcuteCossHairProcess() {
		return ((T (*)(BRSkillProcessBase*))(Il2CppBase() + 0x1B2E1BC))(this);
	}
	template <typename T = bool> T IsContinuousUsing() {
		return ((T (*)(BRSkillProcessBase*))(Il2CppBase() + 0x1B3196C))(this);
	}
	template <typename T = bool> T IsNeedQuickClickProtect() {
		return ((T (*)(BRSkillProcessBase*))(Il2CppBase() + 0x1B2F858))(this);
	}

};

}
