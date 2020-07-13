#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRCureTeammateController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRCureTeammateController"));
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
		return ((T (*)(BRCureTeammateController*))(Il2CppBase() + 0x2513A1C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BRCureTeammateController*))(Il2CppBase() + 0x2513AC0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRCureTeammateController*))(Il2CppBase() + 0x2513BEC))(this);
	}
	template <typename T = bool> T GamepadCure() {
		return ((T (*)(BRCureTeammateController*))(Il2CppBase() + 0x2514168))(this);
	}
	template <typename T = bool> T GamepadCancelCure() {
		return ((T (*)(BRCureTeammateController*))(Il2CppBase() + 0x2514858))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BRCureTeammateController*))(Il2CppBase() + 0x2514BF0))(this);
	}
	template <typename T = void> T OnNotifyCanNotHealTeammate(uintptr_t Msg) {
		return ((T (*)(BRCureTeammateController*, uintptr_t))(Il2CppBase() + 0x2514F28))(this, Msg);
	}
	template <typename T = void> T OnNotifyLocalPlayerBeInterrupted(uintptr_t Msg) {
		return ((T (*)(BRCureTeammateController*, uintptr_t))(Il2CppBase() + 0x25150EC))(this, Msg);
	}
	template <typename T = void> T OnNotifyTeammateRevived(uintptr_t Msg) {
		return ((T (*)(BRCureTeammateController*, uintptr_t))(Il2CppBase() + 0x25151DC))(this, Msg);
	}
	template <typename T = void> T OnNotifyPawnIsUsingItem(uintptr_t Msg) {
		return ((T (*)(BRCureTeammateController*, uintptr_t))(Il2CppBase() + 0x25152E4))(this, Msg);
	}
	template <typename T = void> T OnNotifyLocalPlayerBeingHealed(uintptr_t Msg) {
		return ((T (*)(BRCureTeammateController*, uintptr_t))(Il2CppBase() + 0x2515458))(this, Msg);
	}
	template <typename T = void> T IsLocalPlayerBeingHealed(bool healing) {
		return ((T (*)(BRCureTeammateController*, bool))(Il2CppBase() + 0x2515768))(this, healing);
	}
	template <typename T = void> T OnNotifyLocalPlayerEndBeingHealed(uintptr_t Msg) {
		return ((T (*)(BRCureTeammateController*, uintptr_t))(Il2CppBase() + 0x25158A8))(this, Msg);
	}
	template <typename T = void> T OnNotifyHealTeammateSuccess(uintptr_t Msg) {
		return ((T (*)(BRCureTeammateController*, uintptr_t))(Il2CppBase() + 0x2515C0C))(this, Msg);
	}
	template <typename T = void> T OnCancelHeal(uintptr_t Msg) {
		return ((T (*)(BRCureTeammateController*, uintptr_t))(Il2CppBase() + 0x2515D80))(this, Msg);
	}
	template <typename T = void> T DisplayHealConfirmBtn(bool inIsShow) {
		return ((T (*)(BRCureTeammateController*, bool))(Il2CppBase() + 0x2515E2C))(this, inIsShow);
	}
	template <typename T = void> T CureTeammateButtonClicked() {
		return ((T (*)(BRCureTeammateController*))(Il2CppBase() + 0x25142C4))(this);
	}
	template <typename T = void> T OnNotifyCanHealTeammate(uint32_t playerid) {
		return ((T (*)(BRCureTeammateController*, uint32_t))(Il2CppBase() + 0x2516068))(this, playerid);
	}
	template <typename T = bool> T get_LastShow() {
		return ((T (*)(BRCureTeammateController*))(Il2CppBase() + 0x251615C))(this);
	}
	template <typename T = void> T ShowHud(bool show, bool checktutorial) {
		return ((T (*)(BRCureTeammateController*, bool, bool))(Il2CppBase() + 0x2516164))(this, show, checktutorial);
	}
	template <typename T = void> T CancelHealClicked() {
		return ((T (*)(BRCureTeammateController*))(Il2CppBase() + 0x25149B4))(this);
	}
	template <typename T = uintptr_t> T GetNewGuideInterface() {
		return ((T (*)(BRCureTeammateController*))(Il2CppBase() + 0x25162E8))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BRCureTeammateController*))(Il2CppBase() + 0x2516388))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRCureTeammateController*))(Il2CppBase() + 0x2516390))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRCureTeammateController*))(Il2CppBase() + 0x2516398))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BRCureTeammateController*))(Il2CppBase() + 0x25163A0))(this);
	}

};

}
