#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class SettlementCardWindow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "SettlementCardWindow"));
	}

	template <typename T = uintptr_t> T& curStep() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_dataList() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& gridList() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> static T& INDEX_NOT_START_YET() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& curPlayingIndex() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = float> T& delay() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& hasAttachments() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = bool> T& hasUpgrableCards() {
		return *(T*)((uintptr_t)this + 0xBD);
	}
	template <typename T = uintptr_t> T& leftArrow() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& rightArrow() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& endGridRoot() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& gridScript() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& scrollView() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& labelRewardCount() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& labelTurnToMail() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& labelSeeDetailTips() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& scrollbar() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& maskCollider() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& btnRevealAll() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& btnExit() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& titleGo() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& titleBGTweenWidth() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& titleLabelTweenAlpha() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& headerAnimator() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = bool> T& m_delayUpdateView() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = bool> T& m_needSetPivotToCenter() {
		return *(T*)((uintptr_t)this + 0x101);
	}
	template <typename T = bool> T& m_showGridsNextFrame() {
		return *(T*)((uintptr_t)this + 0x102);
	}
	template <typename T = bool> T& bgmInit() {
		return *(T*)((uintptr_t)this + 0x103);
	}
	template <typename T = uintptr_t> T& openBox() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = void*> T& m_closeCallback() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = bool> T& enableFadeOut() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayUpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRewardList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowClickToSeeDetailTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupRewardWidgetsForShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FixQualitySettings() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoSetRewardList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FixPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareViewBeforeShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckPlayAudioBGM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartPlay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnScrollBarValueChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideRightArrowWhenAllAnimEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitArrows() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFirstCardReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayNextCard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0___CallbackWhenAnimEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckBtnStatusWhenPlayEnded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Drag2End() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AllPlayEnded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAllFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRevealAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateProgressLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FadeOutAndQuit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFadeOutFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAudio_Rolling() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayMusic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAudioBGM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAudioBGM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SettlementCardWindow*))(Il2CppBase() + 0x2941444))(this);
	}
	template <typename T = void> T DelayUpdateView() {
		return ((T (*)(SettlementCardWindow*))(Il2CppBase() + 0x29415A8))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(SettlementCardWindow*))(Il2CppBase() + 0x294183C))(this);
	}
	template <typename T = void> T SetRewardList(Il2CppList<uintptr_t>* cardlist, bool isTurnToMail) {
		return ((T (*)(SettlementCardWindow*, Il2CppList<uintptr_t>*, bool))(Il2CppBase() + 0x2941B28))(this, cardlist, isTurnToMail);
	}
	template <typename T = void> T ShowClickToSeeDetailTip(bool enable) {
		return ((T (*)(SettlementCardWindow*, bool))(Il2CppBase() + 0x29420EC))(this, enable);
	}
	template <typename T = void> T SetupRewardWidgetsForShow() {
		return ((T (*)(SettlementCardWindow*))(Il2CppBase() + 0x2941FDC))(this);
	}
	template <typename T = void> T FixQualitySettings(int32_t cardNumber) {
		return ((T (*)(SettlementCardWindow*, int32_t))(Il2CppBase() + 0x2942A80))(this, cardNumber);
	}
	template <typename T = void> T DoSetRewardList(Il2CppList<uintptr_t>* cardlist) {
		return ((T (*)(SettlementCardWindow*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2942218))(this, cardlist);
	}
	template <typename T = void> T FixPos(Il2CppList<uintptr_t>* cardlist) {
		return ((T (*)(SettlementCardWindow*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2942BF4))(this, cardlist);
	}
	template <typename T = bool> T IsShowing() {
		return ((T (*)(SettlementCardWindow*))(Il2CppBase() + 0x2943240))(this);
	}
	template <typename T = void> T PrepareViewBeforeShow() {
		return ((T (*)(SettlementCardWindow*))(Il2CppBase() + 0x29432F0))(this);
	}
	template <typename T = void> T UpdateView(float delay) {
		return ((T (*)(SettlementCardWindow*, float))(Il2CppBase() + 0x2941668))(this, delay);
	}
	template <typename T = void> T CheckPlayAudioBGM() {
		return ((T (*)(SettlementCardWindow*))(Il2CppBase() + 0x2943694))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(SettlementCardWindow*))(Il2CppBase() + 0x294374C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(SettlementCardWindow*))(Il2CppBase() + 0x2943AF8))(this);
	}
	template <typename T = void> T StartPlay() {
		return ((T (*)(SettlementCardWindow*))(Il2CppBase() + 0x29435E8))(this);
	}
	template <typename T = void> T OnScrollBarValueChanged() {
		return ((T (*)(SettlementCardWindow*))(Il2CppBase() + 0x2943F2C))(this);
	}
	template <typename T = void> T HideRightArrowWhenAllAnimEnd() {
		return ((T (*)(SettlementCardWindow*))(Il2CppBase() + 0x294416C))(this);
	}
	template <typename T = void> T InitArrows() {
		return ((T (*)(SettlementCardWindow*))(Il2CppBase() + 0x2942554))(this);
	}
	template <typename T = void> T GetFirstCardReady() {
		return ((T (*)(SettlementCardWindow*))(Il2CppBase() + 0x294398C))(this);
	}
	template <typename T = void> T PlayNextCard() {
		return ((T (*)(SettlementCardWindow*))(Il2CppBase() + 0x2943C4C))(this);
	}
	template <typename T = void> T __CallbackWhenAnimEnd(uintptr_t go) {
		return ((T (*)(SettlementCardWindow*, uintptr_t))(Il2CppBase() + 0x2944858))(this, go);
	}
	template <typename T = void> T CheckBtnStatusWhenPlayEnded() {
		return ((T (*)(SettlementCardWindow*))(Il2CppBase() + 0x2944A7C))(this);
	}
	template <typename T = void> T Drag2End() {
		return ((T (*)(SettlementCardWindow*))(Il2CppBase() + 0x2944BB0))(this);
	}
	template <typename T = void> T AllPlayEnded() {
		return ((T (*)(SettlementCardWindow*))(Il2CppBase() + 0x2944364))(this);
	}
	template <typename T = void> T OnAllFinish() {
		return ((T (*)(SettlementCardWindow*))(Il2CppBase() + 0x2945460))(this);
	}
	template <typename T = void> T OnRevealAll() {
		return ((T (*)(SettlementCardWindow*))(Il2CppBase() + 0x2945530))(this);
	}
	template <typename T = void> T UpdateProgressLabel() {
		return ((T (*)(SettlementCardWindow*))(Il2CppBase() + 0x2942848))(this);
	}
	template <typename T = void> T OnCloseBtnClick(void* callback) {
		return ((T (*)(SettlementCardWindow*, void*))(Il2CppBase() + 0x29457A8))(this, callback);
	}
	template <typename T = void> T FadeOutAndQuit() {
		return ((T (*)(SettlementCardWindow*))(Il2CppBase() + 0x294597C))(this);
	}
	template <typename T = void> T OnFadeOutFinished() {
		return ((T (*)(SettlementCardWindow*))(Il2CppBase() + 0x2945D5C))(this);
	}
	template <typename T = void> T PlayAudio_Rolling() {
		return ((T (*)(SettlementCardWindow*))(Il2CppBase() + 0x2945E24))(this);
	}
	template <typename T = void> T PlayMusic(Il2CppString* audioID) {
		return ((T (*)(SettlementCardWindow*, Il2CppString*))(Il2CppBase() + 0x2945EE4))(this, audioID);
	}
	template <typename T = void> T PlayAudioBGM() {
		return ((T (*)(SettlementCardWindow*))(Il2CppBase() + 0x2943528))(this);
	}
	template <typename T = void> T StopAudioBGM() {
		return ((T (*)(SettlementCardWindow*))(Il2CppBase() + 0x29458BC))(this);
	}
	template <typename T = int32_t> static T SetRewardListm__0(uintptr_t r1, uintptr_t r2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2946024))(0, r1, r2);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(SettlementCardWindow*))(Il2CppBase() + 0x294619C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(SettlementCardWindow*))(Il2CppBase() + 0x29461A4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(SettlementCardWindow*))(Il2CppBase() + 0x29461AC))(this);
	}

};

}
