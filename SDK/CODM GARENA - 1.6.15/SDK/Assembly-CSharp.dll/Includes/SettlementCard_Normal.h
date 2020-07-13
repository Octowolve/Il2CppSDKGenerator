#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SettlementCardNormal
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SettlementCard_Normal"));
	}

	template <typename T = float> T& appearingDuration() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& showingInCenterDuration() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& SPIColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& FGFadeInDelay() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& isFGShowing() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& isReady() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = float> T& playTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& delayWaitingFx() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& curAnimStep() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& HasAttchment() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& IsUpgradable() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = bool> T& isShowingAttachmentDetails() {
		return *(T*)((uintptr_t)this + 0x2A);
	}
	template <typename T = uintptr_t> T& attachmentShowType() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& animationName() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& widgetBack() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& widget() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& widgetFront() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& widgetAttachments() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& bgBackSide() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& bgFrontSide() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& fgIcon() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& CoinIcon() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& upgradableArrows() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& labelSPI() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& labelName() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& labelCount() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& labelCoinNum() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& SpriteChip() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& PossessedLabel() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& RefreshCoinAnimator() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& FXRefreshCoin() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& animator() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& spriteEventFront() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> static T& __DELAY_STEP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& __MAX_DELAY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& __current_delay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = bool> T& showFront() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_CardData() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = void*> T& playEndCallback() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& mTurned() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& mIsChestCard() {
		return *(T*)((uintptr_t)this + 0x8D);
	}
	template <typename T = float> T& delay() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& waittingFx() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& appearFx() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& lastingFx() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& firstGetFx() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& openCardFx() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppVector3> static T& FXOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWaitingDelay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetFxDelay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartWaiting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckDelayStartWaiting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartAppearing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAppearing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartShowing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateShowing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAnimEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartRevealingToEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRevealingToEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRevealAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUpradable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSPIText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetColorBGFromQuality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetQualityDescText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupScrollViewParent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCulling() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddPlayEndCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExecutePlayEndCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCardClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshCoin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayRefreshCoinAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFxByQuality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAnimationName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLastingFxByQuality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupFirstGetFx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupCardFx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCardWaitingFx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCardAppearingFx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCardLastingFx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAllFx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAndPlayFirstGetEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAudio_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayCardSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}

	template <typename T = bool> T get_HasAttchment() {
		return ((T (*)(SettlementCardNormal*))(Il2CppBase() + 0x2943520))(this);
	}
	template <typename T = void> T set_HasAttchment(bool value) {
		return ((T (*)(SettlementCardNormal*, bool))(Il2CppBase() + 0x298CA88))(this, value);
	}
	template <typename T = bool> T get_IsUpgradable() {
		return ((T (*)(SettlementCardNormal*))(Il2CppBase() + 0x2943518))(this);
	}
	template <typename T = void> T set_IsUpgradable(bool value) {
		return ((T (*)(SettlementCardNormal*, bool))(Il2CppBase() + 0x298CA90))(this, value);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(SettlementCardNormal*))(Il2CppBase() + 0x298CA98))(this);
	}
	template <typename T = bool> T Init() {
		return ((T (*)(SettlementCardNormal*))(Il2CppBase() + 0x298CED0))(this);
	}
	template <typename T = void> T GetReady() {
		return ((T (*)(SettlementCardNormal*))(Il2CppBase() + 0x2944270))(this);
	}
	template <typename T = void> T Show() {
		return ((T (*)(SettlementCardNormal*))(Il2CppBase() + 0x2944758))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(SettlementCardNormal*))(Il2CppBase() + 0x298D7D8))(this);
	}
	template <typename T = int32_t> static T GetWaitingDelay() {
		return ((T (*)(void *))(Il2CppBase() + 0x298DD34))(0);
	}
	template <typename T = void> static T ResetFxDelay() {
		return ((T (*)(void *))(Il2CppBase() + 0x29466B0))(0);
	}
	template <typename T = void> T StartWaiting() {
		return ((T (*)(SettlementCardNormal*))(Il2CppBase() + 0x298D698))(this);
	}
	template <typename T = void> T CheckDelayStartWaiting() {
		return ((T (*)(SettlementCardNormal*))(Il2CppBase() + 0x298DA58))(this);
	}
	template <typename T = void> T UpdateReady() {
		return ((T (*)(SettlementCardNormal*))(Il2CppBase() + 0x298D990))(this);
	}
	template <typename T = void> T StartAppearing() {
		return ((T (*)(SettlementCardNormal*))(Il2CppBase() + 0x298E180))(this);
	}
	template <typename T = void> T UpdateAppearing() {
		return ((T (*)(SettlementCardNormal*))(Il2CppBase() + 0x298E600))(this);
	}
	template <typename T = void> T StartShowing() {
		return ((T (*)(SettlementCardNormal*))(Il2CppBase() + 0x298E72C))(this);
	}
	template <typename T = void> T UpdateShowing() {
		return ((T (*)(SettlementCardNormal*))(Il2CppBase() + 0x298DBE4))(this);
	}
	template <typename T = void> T OnAnimEnd() {
		return ((T (*)(SettlementCardNormal*))(Il2CppBase() + 0x298ED78))(this);
	}
	template <typename T = void> T StartRevealingToEnd(bool showAppearing) {
		return ((T (*)(SettlementCardNormal*, bool))(Il2CppBase() + 0x298F28C))(this, showAppearing);
	}
	template <typename T = void> T UpdateRevealingToEnd() {
		return ((T (*)(SettlementCardNormal*))(Il2CppBase() + 0x298F60C))(this);
	}
	template <typename T = void> T OnRevealAll(bool showAppearing) {
		return ((T (*)(SettlementCardNormal*, bool))(Il2CppBase() + 0x298F708))(this, showAppearing);
	}
	template <typename T = bool> T SetData(uintptr_t data, bool isChestCard) {
		return ((T (*)(SettlementCardNormal*, uintptr_t, bool))(Il2CppBase() + 0x298F7F4))(this, data, isChestCard);
	}
	template <typename T = void> T SetUpradable(bool upgradable) {
		return ((T (*)(SettlementCardNormal*, bool))(Il2CppBase() + 0x29906B8))(this, upgradable);
	}
	template <typename T = void> T SetSPIText(int32_t spi) {
		return ((T (*)(SettlementCardNormal*, int32_t))(Il2CppBase() + 0x2990838))(this, spi);
	}
	template <typename T = Il2CppString*> static T GetColorBGFromQuality(uintptr_t quality) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2989474))(0, quality);
	}
	template <typename T = Il2CppString*> T GetQualityDescText(uintptr_t quality) {
		return ((T (*)(SettlementCardNormal*, uintptr_t))(Il2CppBase() + 0x2990B54))(this, quality);
	}
	template <typename T = void> T SetupScrollViewParent(uintptr_t sv) {
		return ((T (*)(SettlementCardNormal*, uintptr_t))(Il2CppBase() + 0x2944D98))(this, sv);
	}
	template <typename T = void> T SetCulling(uintptr_t sv) {
		return ((T (*)(SettlementCardNormal*, uintptr_t))(Il2CppBase() + 0x2942FFC))(this, sv);
	}
	template <typename T = void> T SetActive(bool active) {
		return ((T (*)(SettlementCardNormal*, bool))(Il2CppBase() + 0x2944EF0))(this, active);
	}
	template <typename T = void> T AddPlayEndCallback(void* action) {
		return ((T (*)(SettlementCardNormal*, void*))(Il2CppBase() + 0x2944680))(this, action);
	}
	template <typename T = void> T ExecutePlayEndCallback() {
		return ((T (*)(SettlementCardNormal*))(Il2CppBase() + 0x298F17C))(this);
	}
	template <typename T = void> T OnCardClick(uintptr_t go) {
		return ((T (*)(SettlementCardNormal*, uintptr_t))(Il2CppBase() + 0x2990C70))(this, go);
	}
	template <typename T = void> T RefreshCoin(bool playAnim) {
		return ((T (*)(SettlementCardNormal*, bool))(Il2CppBase() + 0x2944FF0))(this, playAnim);
	}
	template <typename T = void> T PlayRefreshCoinAnim() {
		return ((T (*)(SettlementCardNormal*))(Il2CppBase() + 0x2990D40))(this);
	}
	template <typename T = uintptr_t> static T GetFxByQuality(uintptr_t quality) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2988EA4))(0, quality);
	}
	template <typename T = Il2CppString*> static T GetAnimationName(uintptr_t quality) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2988D30))(0, quality);
	}
	template <typename T = uintptr_t> static T GetLastingFxByQuality(uintptr_t quality) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x29910F4))(0, quality);
	}
	template <typename T = void> T SetupFirstGetFx(bool isFirstWinOrMust) {
		return ((T (*)(SettlementCardNormal*, bool))(Il2CppBase() + 0x2990428))(this, isFirstWinOrMust);
	}
	template <typename T = void> T SetupCardFx(uintptr_t quality) {
		return ((T (*)(SettlementCardNormal*, uintptr_t))(Il2CppBase() + 0x298FF70))(this, quality);
	}
	template <typename T = uintptr_t> T GetFx(uintptr_t assetID) {
		return ((T (*)(SettlementCardNormal*, uintptr_t))(Il2CppBase() + 0x29911F0))(this, assetID);
	}
	template <typename T = void> T ShowCardWaitingFx() {
		return ((T (*)(SettlementCardNormal*))(Il2CppBase() + 0x298DE80))(this);
	}
	template <typename T = void> T ShowCardAppearingFx() {
		return ((T (*)(SettlementCardNormal*))(Il2CppBase() + 0x298E2DC))(this);
	}
	template <typename T = void> T ShowCardLastingFx() {
		return ((T (*)(SettlementCardNormal*))(Il2CppBase() + 0x2991318))(this);
	}
	template <typename T = void> T StopAllFx() {
		return ((T (*)(SettlementCardNormal*))(Il2CppBase() + 0x298EEC8))(this);
	}
	template <typename T = void> T CheckAndPlayFirstGetEffect() {
		return ((T (*)(SettlementCardNormal*))(Il2CppBase() + 0x298EA60))(this);
	}
	template <typename T = void> T PlayAudio_Show() {
		return ((T (*)(SettlementCardNormal*))(Il2CppBase() + 0x298E8F0))(this);
	}
	template <typename T = void> T PlayCardSound(Il2CppString* sound) {
		return ((T (*)(SettlementCardNormal*, Il2CppString*))(Il2CppBase() + 0x29915CC))(this, sound);
	}

};

}
