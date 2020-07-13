#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class MPWaitForReviveHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "MPWaitForReviveHUD"));
	}

	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& reviveUIRoot() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& remainingTimeLabel() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& switchToReviveBtn() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& prevPlayerBtn() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& nextPlayerBtn() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& SelfReviveRoot() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& AceRoot() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& AceRemainTimeLabel() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& SingleAce() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& MultiAce() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& observUIRoot() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& remainingTimeObserveLabel() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& observerBtn() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& FreeReviveRoot() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& FreeReviveCount() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& UseReviveRoot() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& UseReviveCointDesc() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& UseReviveCoinCount() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& useReviveCoinBtn() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& reviveCoinUseLimitLabel() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& reviveCoinUseLimitRoot() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& reviveCoinUseReachMaxRoot() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = float> T& m_AceTotalTime() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = float> T& m_AceTime() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshReviveBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPawnDie() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPawnRevive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyRefreshReviveBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRemainingTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShowAceRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyShowAceCountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAceRemainingTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchToReviveHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchToObserveHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickPrevPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickNextPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUseReviveCoin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(MPWaitForReviveHUD*))(Il2CppBase() + 0x1FA8778))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(MPWaitForReviveHUD*))(Il2CppBase() + 0x1FA8780))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(MPWaitForReviveHUD*))(Il2CppBase() + 0x1FA878C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(MPWaitForReviveHUD*))(Il2CppBase() + 0x1FA8A80))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(MPWaitForReviveHUD*))(Il2CppBase() + 0x1FA9084))(this);
	}
	template <typename T = void> T RefreshReviveBtn() {
		return ((T (*)(MPWaitForReviveHUD*))(Il2CppBase() + 0x1FA95E4))(this);
	}
	template <typename T = void> T Show(bool bShow) {
		return ((T (*)(MPWaitForReviveHUD*, bool))(Il2CppBase() + 0x1FA8840))(this, bShow);
	}
	template <typename T = void> T OnPawnDie() {
		return ((T (*)(MPWaitForReviveHUD*))(Il2CppBase() + 0x1FA9B1C))(this);
	}
	template <typename T = void> T OnPawnRevive(uintptr_t Msg) {
		return ((T (*)(MPWaitForReviveHUD*, uintptr_t))(Il2CppBase() + 0x1FAA624))(this, Msg);
	}
	template <typename T = void> T OnNotifyRefreshReviveBtn(uintptr_t Msg) {
		return ((T (*)(MPWaitForReviveHUD*, uintptr_t))(Il2CppBase() + 0x1FAA758))(this, Msg);
	}
	template <typename T = void> T UpdateRemainingTime() {
		return ((T (*)(MPWaitForReviveHUD*))(Il2CppBase() + 0x1FAA2B4))(this);
	}
	template <typename T = bool> T CheckShowAceRoot() {
		return ((T (*)(MPWaitForReviveHUD*))(Il2CppBase() + 0x1FA9D84))(this);
	}
	template <typename T = void> T OnNotifyShowAceCountDown(uintptr_t Msg) {
		return ((T (*)(MPWaitForReviveHUD*, uintptr_t))(Il2CppBase() + 0x1FAA804))(this, Msg);
	}
	template <typename T = void> T UpdateAceRemainingTime() {
		return ((T (*)(MPWaitForReviveHUD*))(Il2CppBase() + 0x1FAA928))(this);
	}
	template <typename T = void> T OnSwitchToReviveHUD() {
		return ((T (*)(MPWaitForReviveHUD*))(Il2CppBase() + 0x1FAAA50))(this);
	}
	template <typename T = void> T OnSwitchToObserveHUD() {
		return ((T (*)(MPWaitForReviveHUD*))(Il2CppBase() + 0x1FAAB6C))(this);
	}
	template <typename T = void> T OnClickPrevPlayer() {
		return ((T (*)(MPWaitForReviveHUD*))(Il2CppBase() + 0x1FAAC88))(this);
	}
	template <typename T = void> T OnClickNextPlayer() {
		return ((T (*)(MPWaitForReviveHUD*))(Il2CppBase() + 0x1FAAD84))(this);
	}
	template <typename T = void> T OnUseReviveCoin() {
		return ((T (*)(MPWaitForReviveHUD*))(Il2CppBase() + 0x1FAAE80))(this);
	}
	template <typename T = void> T OnRoundEnd(uintptr_t result) {
		return ((T (*)(MPWaitForReviveHUD*, uintptr_t))(Il2CppBase() + 0x1FAAF70))(this, result);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(MPWaitForReviveHUD*))(Il2CppBase() + 0x1FAB058))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(MPWaitForReviveHUD*))(Il2CppBase() + 0x1FAB060))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(MPWaitForReviveHUD*))(Il2CppBase() + 0x1FAB068))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundEnd(uintptr_t P0) {
		return ((T (*)(MPWaitForReviveHUD*, uintptr_t))(Il2CppBase() + 0x1FAB070))(this, P0);
	}

};

}
