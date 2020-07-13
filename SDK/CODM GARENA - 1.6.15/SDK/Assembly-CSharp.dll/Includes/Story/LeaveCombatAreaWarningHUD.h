#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Story {

class LeaveCombatAreaWarningHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Story", "LeaveCombatAreaWarningHUD"));
	}

	template <typename T = uintptr_t> T& Content() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& LeftTimebeforeQuitLabel() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& m_LeftTimeBeforeQuit() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLeaveCombatArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowWarning() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WarningCountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideWarning() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(LeaveCombatAreaWarningHUD*))(Il2CppBase() + 0x395A1B8))(this);
	}
	template <typename T = void> T OnLeaveCombatArea(uintptr_t msg) {
		return ((T (*)(LeaveCombatAreaWarningHUD*, uintptr_t))(Il2CppBase() + 0x395A34C))(this, msg);
	}
	template <typename T = void> T ShowWarning(int32_t time) {
		return ((T (*)(LeaveCombatAreaWarningHUD*, int32_t))(Il2CppBase() + 0x395A5F0))(this, time);
	}
	template <typename T = void> T WarningCountDown() {
		return ((T (*)(LeaveCombatAreaWarningHUD*))(Il2CppBase() + 0x395A954))(this);
	}
	template <typename T = void> T HideWarning() {
		return ((T (*)(LeaveCombatAreaWarningHUD*))(Il2CppBase() + 0x395A804))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(LeaveCombatAreaWarningHUD*))(Il2CppBase() + 0x395AAD0))(this);
	}

};

}
