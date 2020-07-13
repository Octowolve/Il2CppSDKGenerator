#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.TacticalCombat {

class TacticalCombatCureTeammateHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.TacticalCombat", "TacticalCombatCureTeammateHUD"));
	}

	template <typename T = uintptr_t> T& NewGuideEffect() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& NewGuideText() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_HealBtn() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_CancelBtn() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& m_BeingSavdProgressBar() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& m_SaveOtherProgressBar() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& m_Ctr() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUIBanClickType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetActiveGameHudState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSafeActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T set_Ctr(uintptr_t value) {
		return ((T (*)(TacticalCombatCureTeammateHUD*, uintptr_t))(Il2CppBase() + 0x34CF188))(this, value);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(TacticalCombatCureTeammateHUD*))(Il2CppBase() + 0x34D18B8))(this);
	}
	template <typename T = uintptr_t> T GetUIBanClickType() {
		return ((T (*)(TacticalCombatCureTeammateHUD*))(Il2CppBase() + 0x34D18C0))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(TacticalCombatCureTeammateHUD*))(Il2CppBase() + 0x34D1964))(this);
	}
	template <typename T = uint64_t> T GetActiveGameHudState() {
		return ((T (*)(TacticalCombatCureTeammateHUD*))(Il2CppBase() + 0x34D1970))(this);
	}
	template <typename T = void> T ChangeEffect(bool showEffect, uintptr_t itemType, Il2CppString* tipsText, uintptr_t fadeAction) {
		return ((T (*)(TacticalCombatCureTeammateHUD*, bool, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x34D1A38))(this, showEffect, itemType, tipsText, fadeAction);
	}
	template <typename T = bool> T IsSafeActive(uintptr_t itemType) {
		return ((T (*)(TacticalCombatCureTeammateHUD*, uintptr_t))(Il2CppBase() + 0x34D1CAC))(this, itemType);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetUIBanClickType() {
		return ((T (*)(TacticalCombatCureTeammateHUD*))(Il2CppBase() + 0x34D1D9C))(this);
	}
	template <typename T = uint64_t> T xLuaBaseProxy_GetActiveGameHudState() {
		return ((T (*)(TacticalCombatCureTeammateHUD*))(Il2CppBase() + 0x34D1DA4))(this);
	}

};

}
