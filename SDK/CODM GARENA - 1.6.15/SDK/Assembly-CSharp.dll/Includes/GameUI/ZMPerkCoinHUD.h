#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ZMPerkCoinHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ZMPerkCoinHUD"));
	}

	template <typename T = uintptr_t> T& UseCoin_NewGuideEffect() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& UseCoin_NewGuideText() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& countDownProgressBar() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& countDownProgressSprite() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& coinBg() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& useCoinBtn() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& coinStateRoot() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& perkCoinSprite() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& perkCoinDescBG() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& perkCoinDescTipName() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& perkCoinDescTipLabel() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& perkCoinUseCount() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& perkCoinShowTipRoot() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = int32_t> T& coinUseCount() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& perkCoinUseTime() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = float> T& currentCoinDuration() {
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
	template <typename T = bool> T& m_UsingCoin() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = float> T& m_PressDownTime() {
		return *(T*)((uintptr_t)this + 0xCC);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnReconnectComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUseCoinButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshDesc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUseCoinButtonPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPerkCoinAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPickUpCoin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUseCoin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyHideCoin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSafeActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ZMPerkCoinHUD*))(Il2CppBase() + 0x2A5A254))(this);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(ZMPerkCoinHUD*))(Il2CppBase() + 0x2A5A320))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(ZMPerkCoinHUD*))(Il2CppBase() + 0x2A5A328))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ZMPerkCoinHUD*))(Il2CppBase() + 0x2A5A338))(this);
	}
	template <typename T = void> T OnReconnectComplete(uintptr_t msg) {
		return ((T (*)(ZMPerkCoinHUD*, uintptr_t))(Il2CppBase() + 0x2A5A544))(this, msg);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ZMPerkCoinHUD*))(Il2CppBase() + 0x2A5A6B8))(this);
	}
	template <typename T = void> T OnUseCoinButtonClick(uintptr_t OBJ) {
		return ((T (*)(ZMPerkCoinHUD*, uintptr_t))(Il2CppBase() + 0x2A5A760))(this, OBJ);
	}
	template <typename T = void> T RefreshDesc() {
		return ((T (*)(ZMPerkCoinHUD*))(Il2CppBase() + 0x2A5A800))(this);
	}
	template <typename T = void> T OnUseCoinButtonPress(uintptr_t OBJ, bool bPress) {
		return ((T (*)(ZMPerkCoinHUD*, uintptr_t, bool))(Il2CppBase() + 0x2A5A984))(this, OBJ, bPress);
	}
	template <typename T = void> T OnPerkCoinAction(unsigned char actionType, uint32_t itemID, unsigned char itemCount) {
		return ((T (*)(ZMPerkCoinHUD*, unsigned char, uint32_t, unsigned char))(Il2CppBase() + 0x2A5AC08))(this, actionType, itemID, itemCount);
	}
	template <typename T = void> T OnPickUpCoin(uint32_t coinID, uint32_t useCount) {
		return ((T (*)(ZMPerkCoinHUD*, uint32_t, uint32_t))(Il2CppBase() + 0x2A5AD2C))(this, coinID, useCount);
	}
	template <typename T = void> T OnUseCoin(uint32_t coinID, uint32_t useCount) {
		return ((T (*)(ZMPerkCoinHUD*, uint32_t, uint32_t))(Il2CppBase() + 0x2A5B0BC))(this, coinID, useCount);
	}
	template <typename T = void> T OnNotifyHideCoin() {
		return ((T (*)(ZMPerkCoinHUD*))(Il2CppBase() + 0x2A5A5F8))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(ZMPerkCoinHUD*, float))(Il2CppBase() + 0x2A5B5B0))(this, dt);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(ZMPerkCoinHUD*))(Il2CppBase() + 0x2A5B720))(this);
	}
	template <typename T = void> T ChangeEffect(bool showEffect, uintptr_t itemType, Il2CppString* tipsText, uintptr_t fadeAction) {
		return ((T (*)(ZMPerkCoinHUD*, bool, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x2A5B728))(this, showEffect, itemType, tipsText, fadeAction);
	}
	template <typename T = bool> T IsSafeActive(uintptr_t itemType) {
		return ((T (*)(ZMPerkCoinHUD*, uintptr_t))(Il2CppBase() + 0x2A5B9A0))(this, itemType);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(ZMPerkCoinHUD*))(Il2CppBase() + 0x2A5BAFC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ZMPerkCoinHUD*))(Il2CppBase() + 0x2A5BB04))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ZMPerkCoinHUD*))(Il2CppBase() + 0x2A5BB0C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(ZMPerkCoinHUD*, float))(Il2CppBase() + 0x2A5BB14))(this, P0);
	}

};

}
