#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class SettlementActiveConsumeWindowView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "SettlementActiveConsumeWindowView"));
	}

	template <typename T = uintptr_t> T& ActiveName() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& SourceIcon() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& GameTime() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& ConsumeNum() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& TargetIcon() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& TargetName() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& TargetLevel() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& TargetProgressLabel() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& ProgressTweener() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& LevelUpRoot() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& StartLv() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = int32_t> T& EndLv() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& CurLv() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = bool> T& IsNeedAnim() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& animOnceDur() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = float> T& levelUpAnimDur() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLevelUpStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLevelUpEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurLevelData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T get_settlementDS() {
		return ((T (*)(SettlementActiveConsumeWindowView*))(Il2CppBase() + 0x3B55DF0))(this);
	}
	template <typename T = uintptr_t> T get_actvDS() {
		return ((T (*)(SettlementActiveConsumeWindowView*))(Il2CppBase() + 0x3B55E8C))(this);
	}
	template <typename T = void> T InitView() {
		return ((T (*)(SettlementActiveConsumeWindowView*))(Il2CppBase() + 0x3B5547C))(this);
	}
	template <typename T = void> T StartAnim(int32_t startLv, int32_t endLv, bool isAnim) {
		return ((T (*)(SettlementActiveConsumeWindowView*, int32_t, int32_t, bool))(Il2CppBase() + 0x3B55C0C))(this, startLv, endLv, isAnim);
	}
	template <typename T = uintptr_t> T PlayAnim() {
		return ((T (*)(SettlementActiveConsumeWindowView*))(Il2CppBase() + 0x3B55F28))(this);
	}
	template <typename T = void> T OnLevelUpStart() {
		return ((T (*)(SettlementActiveConsumeWindowView*))(Il2CppBase() + 0x3B56010))(this);
	}
	template <typename T = void> T OnLevelUpEnd() {
		return ((T (*)(SettlementActiveConsumeWindowView*))(Il2CppBase() + 0x3B560FC))(this);
	}
	template <typename T = uintptr_t> T GetCurLevelData(int32_t level) {
		return ((T (*)(SettlementActiveConsumeWindowView*, int32_t))(Il2CppBase() + 0x3B561E8))(this, level);
	}

};

}
