#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRGameCureTeammateHud
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRGameCureTeammateHud"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSafeActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T set_Ctr(uintptr_t value) {
		return ((T (*)(BRGameCureTeammateHud*, uintptr_t))(Il2CppBase() + 0x1905F30))(this, value);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(BRGameCureTeammateHud*))(Il2CppBase() + 0x1905F38))(this);
	}
	template <typename T = uintptr_t> T GetUIBanClickType() {
		return ((T (*)(BRGameCureTeammateHud*))(Il2CppBase() + 0x1905F40))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(BRGameCureTeammateHud*))(Il2CppBase() + 0x1905FE4))(this);
	}
	template <typename T = uint64_t> T GetActiveGameHudState() {
		return ((T (*)(BRGameCureTeammateHud*))(Il2CppBase() + 0x1905FF4))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(BRGameCureTeammateHud*))(Il2CppBase() + 0x19060C4))(this);
	}
	template <typename T = void> T ChangeEffect(bool showEffect, uintptr_t itemType, Il2CppString* tipsText, uintptr_t fadeAction) {
		return ((T (*)(BRGameCureTeammateHud*, bool, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x19062AC))(this, showEffect, itemType, tipsText, fadeAction);
	}
	template <typename T = bool> T IsSafeActive(uintptr_t itemType) {
		return ((T (*)(BRGameCureTeammateHud*, uintptr_t))(Il2CppBase() + 0x1906520))(this, itemType);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetUIBanClickType() {
		return ((T (*)(BRGameCureTeammateHud*))(Il2CppBase() + 0x1906610))(this);
	}
	template <typename T = uint64_t> T xLuaBaseProxy_GetActiveGameHudState() {
		return ((T (*)(BRGameCureTeammateHud*))(Il2CppBase() + 0x1906618))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(BRGameCureTeammateHud*))(Il2CppBase() + 0x1906620))(this);
	}

};

}
