#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.TacticalCombat {

class TacticalCombatCureTeammateController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.TacticalCombat", "TacticalCombatCureTeammateController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& m_IsHealingOtherPlayer() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& m_HasTutorial() {
		return *(T*)((uintptr_t)this + 0x41);
	}
	template <typename T = bool> T& m_DuringTutorial() {
		return *(T*)((uintptr_t)this + 0x42);
	}
	template <typename T = bool> T& m_LastShow() {
		return *(T*)((uintptr_t)this + 0x43);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GamepadCure() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GamepadCancelCure() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyCanNotHealTeammate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLocalPlayerBeInterrupted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyTeammateRevived() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyPawnIsUsingItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLocalPlayerBeingHealed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLocalPlayerBeingHealed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLocalPlayerEndBeingHealed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyHealTeammateSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCancelHeal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisplayHealConfirmBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CureTeammateButtonClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyCanHealTeammate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelHealClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNewGuideInterface() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(TacticalCombatCureTeammateController*))(Il2CppBase() + 0x34CEFC0))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(TacticalCombatCureTeammateController*))(Il2CppBase() + 0x34CF064))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(TacticalCombatCureTeammateController*))(Il2CppBase() + 0x34CF190))(this);
	}
	template <typename T = bool> T GamepadCure() {
		return ((T (*)(TacticalCombatCureTeammateController*))(Il2CppBase() + 0x34CF70C))(this);
	}
	template <typename T = bool> T GamepadCancelCure() {
		return ((T (*)(TacticalCombatCureTeammateController*))(Il2CppBase() + 0x34CFDA4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(TacticalCombatCureTeammateController*))(Il2CppBase() + 0x34D013C))(this);
	}
	template <typename T = void> T OnNotifyCanNotHealTeammate(uintptr_t Msg) {
		return ((T (*)(TacticalCombatCureTeammateController*, uintptr_t))(Il2CppBase() + 0x34D0474))(this, Msg);
	}
	template <typename T = void> T OnNotifyLocalPlayerBeInterrupted(uintptr_t Msg) {
		return ((T (*)(TacticalCombatCureTeammateController*, uintptr_t))(Il2CppBase() + 0x34D0600))(this, Msg);
	}
	template <typename T = void> T OnNotifyTeammateRevived(uintptr_t Msg) {
		return ((T (*)(TacticalCombatCureTeammateController*, uintptr_t))(Il2CppBase() + 0x34D06F0))(this, Msg);
	}
	template <typename T = void> T OnNotifyPawnIsUsingItem(uintptr_t Msg) {
		return ((T (*)(TacticalCombatCureTeammateController*, uintptr_t))(Il2CppBase() + 0x34D07F8))(this, Msg);
	}
	template <typename T = void> T OnNotifyLocalPlayerBeingHealed(uintptr_t Msg) {
		return ((T (*)(TacticalCombatCureTeammateController*, uintptr_t))(Il2CppBase() + 0x34D096C))(this, Msg);
	}
	template <typename T = void> T IsLocalPlayerBeingHealed(bool healing) {
		return ((T (*)(TacticalCombatCureTeammateController*, bool))(Il2CppBase() + 0x34D0C7C))(this, healing);
	}
	template <typename T = void> T OnNotifyLocalPlayerEndBeingHealed(uintptr_t Msg) {
		return ((T (*)(TacticalCombatCureTeammateController*, uintptr_t))(Il2CppBase() + 0x34D0DBC))(this, Msg);
	}
	template <typename T = void> T OnNotifyHealTeammateSuccess(uintptr_t Msg) {
		return ((T (*)(TacticalCombatCureTeammateController*, uintptr_t))(Il2CppBase() + 0x34D10B0))(this, Msg);
	}
	template <typename T = void> T OnCancelHeal(uintptr_t Msg) {
		return ((T (*)(TacticalCombatCureTeammateController*, uintptr_t))(Il2CppBase() + 0x34D11EC))(this, Msg);
	}
	template <typename T = void> T DisplayHealConfirmBtn(bool inIsShow) {
		return ((T (*)(TacticalCombatCureTeammateController*, bool))(Il2CppBase() + 0x34D1298))(this, inIsShow);
	}
	template <typename T = void> T CureTeammateButtonClicked() {
		return ((T (*)(TacticalCombatCureTeammateController*))(Il2CppBase() + 0x34CF868))(this);
	}
	template <typename T = void> T OnNotifyCanHealTeammate(uint32_t playerid) {
		return ((T (*)(TacticalCombatCureTeammateController*, uint32_t))(Il2CppBase() + 0x34D14D4))(this, playerid);
	}
	template <typename T = bool> T get_LastShow() {
		return ((T (*)(TacticalCombatCureTeammateController*))(Il2CppBase() + 0x34D15C8))(this);
	}
	template <typename T = void> T ShowHud(bool show, bool checktutorial) {
		return ((T (*)(TacticalCombatCureTeammateController*, bool, bool))(Il2CppBase() + 0x34D15D0))(this, show, checktutorial);
	}
	template <typename T = void> T CancelHealClicked() {
		return ((T (*)(TacticalCombatCureTeammateController*))(Il2CppBase() + 0x34CFF00))(this);
	}
	template <typename T = uintptr_t> T GetNewGuideInterface() {
		return ((T (*)(TacticalCombatCureTeammateController*))(Il2CppBase() + 0x34D1754))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(TacticalCombatCureTeammateController*))(Il2CppBase() + 0x34D17F4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TacticalCombatCureTeammateController*))(Il2CppBase() + 0x34D17FC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(TacticalCombatCureTeammateController*))(Il2CppBase() + 0x34D1804))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(TacticalCombatCureTeammateController*))(Il2CppBase() + 0x34D180C))(this);
	}

};

}
