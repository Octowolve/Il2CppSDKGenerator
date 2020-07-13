#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ZMPerkCoinMachineHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ZMPerkCoinMachineHUD"));
	}

	template <typename T = uintptr_t> T& BuyCoin_NewGuideEffect() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& BuyCoin_NewGuideText() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& PickUpCoin_NewGuideEffect() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& PickUpCoin_NewGuideText() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& buyCoinRoot() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& buyCoinCostLabel() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& buyCoinBtn() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& perkCoinTipName() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& perkCoinShowActionRoot() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& pickCoinBtn() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& dropCoinBtn() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& autoDropProgressBar() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& getCoinRoot() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& pickCoinSprite() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& needCostRoot() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& noCostRoot() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uint32_t> T& currentCoinID() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = float> T& delayShowCoinTime() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& perkEffect() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& m_PerkCoinHUD() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = bool> T& m_UsingCoin() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> T& m_LastTime() {
		return *(T*)((uintptr_t)this + 0xD0);
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
	template <typename T = uintptr_t> static T& __Hotfix0_EnoughBuyPerkCoin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBuyCoinButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPickCoinButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDropCoinButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopPawnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUseCoinButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnProduceCoin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPerkCoinActionRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyErrorHideCoinHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGetCoinContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPerkCoinMachine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPerkCoinMachineEnterExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPickUpCoin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUseCoin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSafeActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}

	template <typename T = uintptr_t> T get_PerkCoinHUD() {
		return ((T (*)(ZMPerkCoinMachineHUD*))(Il2CppBase() + 0x2A5BBCC))(this);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(ZMPerkCoinMachineHUD*))(Il2CppBase() + 0x2A5BD08))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(ZMPerkCoinMachineHUD*))(Il2CppBase() + 0x2A5BD10))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ZMPerkCoinMachineHUD*))(Il2CppBase() + 0x2A5BD20))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ZMPerkCoinMachineHUD*))(Il2CppBase() + 0x2A5BFB0))(this);
	}
	template <typename T = bool> T EnoughBuyPerkCoin() {
		return ((T (*)(ZMPerkCoinMachineHUD*))(Il2CppBase() + 0x2A5C178))(this);
	}
	template <typename T = void> T OnBuyCoinButtonClick() {
		return ((T (*)(ZMPerkCoinMachineHUD*))(Il2CppBase() + 0x2A5C2FC))(this);
	}
	template <typename T = void> T OnPickCoinButtonClick() {
		return ((T (*)(ZMPerkCoinMachineHUD*))(Il2CppBase() + 0x2A5CA94))(this);
	}
	template <typename T = void> T OnDropCoinButtonClick() {
		return ((T (*)(ZMPerkCoinMachineHUD*))(Il2CppBase() + 0x2A5CDC8))(this);
	}
	template <typename T = void> T StopPawnState() {
		return ((T (*)(ZMPerkCoinMachineHUD*))(Il2CppBase() + 0x2A5C8C0))(this);
	}
	template <typename T = void> T OnUseCoinButtonClick(uintptr_t OBJ) {
		return ((T (*)(ZMPerkCoinMachineHUD*, uintptr_t))(Il2CppBase() + 0x2A5CFB0))(this, OBJ);
	}
	template <typename T = void> T OnProduceCoin() {
		return ((T (*)(ZMPerkCoinMachineHUD*))(Il2CppBase() + 0x2A5D050))(this);
	}
	template <typename T = void> T OnPerkCoinActionRes(uintptr_t Msg) {
		return ((T (*)(ZMPerkCoinMachineHUD*, uintptr_t))(Il2CppBase() + 0x2A5D2AC))(this, Msg);
	}
	template <typename T = void> T NotifyErrorHideCoinHUD(uintptr_t MSG) {
		return ((T (*)(ZMPerkCoinMachineHUD*, uintptr_t))(Il2CppBase() + 0x2A5DD48))(this, MSG);
	}
	template <typename T = void> T SetGetCoinContent() {
		return ((T (*)(ZMPerkCoinMachineHUD*))(Il2CppBase() + 0x2A5D79C))(this);
	}
	template <typename T = void> T ShowPerkCoinMachine(bool show) {
		return ((T (*)(ZMPerkCoinMachineHUD*, bool))(Il2CppBase() + 0x2A5DE0C))(this, show);
	}
	template <typename T = bool> T ShouldShow() {
		return ((T (*)(ZMPerkCoinMachineHUD*))(Il2CppBase() + 0x2A5E328))(this);
	}
	template <typename T = void> T OnPerkCoinMachineEnterExit(uintptr_t Msg) {
		return ((T (*)(ZMPerkCoinMachineHUD*, uintptr_t))(Il2CppBase() + 0x2A5E5D8))(this, Msg);
	}
	template <typename T = void> T OnPickUpCoin(uint32_t coinID, uint32_t useCount) {
		return ((T (*)(ZMPerkCoinMachineHUD*, uint32_t, uint32_t))(Il2CppBase() + 0x2A5D9A4))(this, coinID, useCount);
	}
	template <typename T = void> T OnUseCoin(uint32_t coinID, uint32_t useCount) {
		return ((T (*)(ZMPerkCoinMachineHUD*, uint32_t, uint32_t))(Il2CppBase() + 0x2A5DB5C))(this, coinID, useCount);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(ZMPerkCoinMachineHUD*, float))(Il2CppBase() + 0x2A5E6EC))(this, dt);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(ZMPerkCoinMachineHUD*))(Il2CppBase() + 0x2A5EB30))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(ZMPerkCoinMachineHUD*))(Il2CppBase() + 0x2A5EB38))(this);
	}
	template <typename T = void> T ChangeEffect(bool showEffect, uintptr_t itemType, Il2CppString* tipsText, uintptr_t fadeAction) {
		return ((T (*)(ZMPerkCoinMachineHUD*, bool, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x2A5EC30))(this, showEffect, itemType, tipsText, fadeAction);
	}
	template <typename T = bool> T IsSafeActive(uintptr_t itemType) {
		return ((T (*)(ZMPerkCoinMachineHUD*, uintptr_t))(Il2CppBase() + 0x2A5EEC0))(this, itemType);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ZMPerkCoinMachineHUD*))(Il2CppBase() + 0x2A5F0D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ZMPerkCoinMachineHUD*))(Il2CppBase() + 0x2A5F0DC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(ZMPerkCoinMachineHUD*, float))(Il2CppBase() + 0x2A5F0E4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(ZMPerkCoinMachineHUD*))(Il2CppBase() + 0x2A5F0EC))(this);
	}

};

}
