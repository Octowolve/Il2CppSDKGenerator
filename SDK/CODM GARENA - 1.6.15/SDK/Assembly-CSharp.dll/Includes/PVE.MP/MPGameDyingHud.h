#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class MPGameDyingHud
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "MPGameDyingHud"));
	}

	template <typename T = uintptr_t> T& m_CallHelpBtn() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_CallHelpCoolDownProgressBar() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_otherSaveYouProgressLabel() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_BeingSavdProgressBar() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& m_AskForHelpLabel() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& m_HealthProgressBar() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& callRescueCoolDownTime() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = float> T& lastCallRescueTime() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGameEndCountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLocalPlayerBeingHealed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLocalPlayerHealSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLocalPlayerHealFail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CallForHelpBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUIBanClickType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(MPGameDyingHud*))(Il2CppBase() + 0x460815C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(MPGameDyingHud*))(Il2CppBase() + 0x46084C8))(this);
	}
	template <typename T = void> T SetActive(bool value, bool enableOptimize) {
		return ((T (*)(MPGameDyingHud*, bool, bool))(Il2CppBase() + 0x4608570))(this, value, enableOptimize);
	}
	template <typename T = void> T OnGameEndCountDown(uintptr_t Msg) {
		return ((T (*)(MPGameDyingHud*, uintptr_t))(Il2CppBase() + 0x4608680))(this, Msg);
	}
	template <typename T = void> T OnNotifyLocalPlayerBeingHealed(uintptr_t Msg) {
		return ((T (*)(MPGameDyingHud*, uintptr_t))(Il2CppBase() + 0x4608788))(this, Msg);
	}
	template <typename T = void> T OnNotifyLocalPlayerHealSuccess(uintptr_t Msg) {
		return ((T (*)(MPGameDyingHud*, uintptr_t))(Il2CppBase() + 0x4608A60))(this, Msg);
	}
	template <typename T = void> T OnNotifyLocalPlayerHealFail(uintptr_t Msg) {
		return ((T (*)(MPGameDyingHud*, uintptr_t))(Il2CppBase() + 0x4608BA0))(this, Msg);
	}
	template <typename T = void> T CallForHelpBtnClicked() {
		return ((T (*)(MPGameDyingHud*))(Il2CppBase() + 0x4608D08))(this);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(MPGameDyingHud*))(Il2CppBase() + 0x4609394))(this);
	}
	template <typename T = uintptr_t> T GetUIBanClickType() {
		return ((T (*)(MPGameDyingHud*))(Il2CppBase() + 0x460939C))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(MPGameDyingHud*))(Il2CppBase() + 0x4609440))(this);
	}
	template <typename T = uint64_t> T get_ActiveGameHudState() {
		return ((T (*)(MPGameDyingHud*))(Il2CppBase() + 0x460944C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(MPGameDyingHud*))(Il2CppBase() + 0x4609458))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(MPGameDyingHud*))(Il2CppBase() + 0x4609740))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(MPGameDyingHud*))(Il2CppBase() + 0x4609748))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetActive(bool P0, bool P1) {
		return ((T (*)(MPGameDyingHud*, bool, bool))(Il2CppBase() + 0x4609750))(this, P0, P1);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetUIBanClickType() {
		return ((T (*)(MPGameDyingHud*))(Il2CppBase() + 0x4609758))(this);
	}

};

}
