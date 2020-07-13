#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class SettlementRankScoreView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "SettlementRankScoreView"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Medals() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& LabelCurrExp() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& LabelFinalExp() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& LabelExpAdd() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& LabelSeasonBreak() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& ScoreUpArrow() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& ProgressExp() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& SpriteFg() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& BtnNext() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& KeyModeFg() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& SpriteMask() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& TweenScaleMask() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& TweenAlphaMask() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& GoLevelUp() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& GoLevelProtection() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& StartAnimator() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& ObjActvNoDrop() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& shareContainer() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& ShowOffRoot() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& LadderLevelLabel() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& LadderPercentLabel() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& ShowOffTip() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = float> T& m_WinDuration() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = float> T& m_Duration() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = float> T& m_TurnDuration() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = Il2CppVector3> T& MaskSmallScale() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = Il2CppVector3> T& MaskBigScale() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = float> T& StartDelay() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = float> T& MaskAlpha() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = float> T& m_MaskFadeInDuration() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = float> T& m_MaskFadeDuration() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = float> T& m_MaskFadeOutDuration() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = float> T& m_BtnNextDelay() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = Il2CppVector3> T& m_MedalScale() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = float> T& m_MedalScaleDurationFirst() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = float> T& m_MedalScaleDurationSecond() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = float> T& m_ShowOffRootFadeInterval() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = Il2CppVector3> T& SmallScale() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = Il2CppVector3> T& BigScale() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& ColorInProtection() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = uintptr_t> T& ColorNormal() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = float> T& delay() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = uintptr_t> T& m_Data() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = int32_t> T& CurrShowRank() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = bool> T& FirstAnim() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Pos() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = int32_t> T& StartIndex() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = void*> T& onAnimationFinnalCallback() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = Il2CppString*> static T& EFFCT_UP_NAME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& EFFCT_DOWN_NAME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& EFFCT_SETTLEMENT_UP_NAME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& hasBeenDelay() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnViewShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreRankShowOff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RankShowOff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRankIconView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDownAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TurnLeft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TurnRight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartPlayingParts() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IEPlayingParts() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowOffRootFadeIn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IESettlementUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IEAfterSettlementUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IERankUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IERankDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IERankProtection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IEExitRankProtection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IENormal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IEFinalStep() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IEFirstStep() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}

	template <typename T = float> T get_AnimDuration() {
		return ((T (*)(SettlementRankScoreView*))(Il2CppBase() + 0x2977BFC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SettlementRankScoreView*))(Il2CppBase() + 0x2977DE0))(this);
	}
	template <typename T = void> T OnViewShow() {
		return ((T (*)(SettlementRankScoreView*))(Il2CppBase() + 0x29780A8))(this);
	}
	template <typename T = void> T PreRankShowOff() {
		return ((T (*)(SettlementRankScoreView*))(Il2CppBase() + 0x29781C8))(this);
	}
	template <typename T = void> T RankShowOff() {
		return ((T (*)(SettlementRankScoreView*))(Il2CppBase() + 0x297859C))(this);
	}
	template <typename T = void> T SetRankIconView() {
		return ((T (*)(SettlementRankScoreView*))(Il2CppBase() + 0x2978B14))(this);
	}
	template <typename T = void> T PlayAnim(int32_t index, Il2CppString* effct_name, bool flag) {
		return ((T (*)(SettlementRankScoreView*, int32_t, Il2CppString*, bool))(Il2CppBase() + 0x2979668))(this, index, effct_name, flag);
	}
	template <typename T = void> T ShutDownAnim(int32_t index) {
		return ((T (*)(SettlementRankScoreView*, int32_t))(Il2CppBase() + 0x2979854))(this, index);
	}
	template <typename T = void> T TurnLeft(float duration) {
		return ((T (*)(SettlementRankScoreView*, float))(Il2CppBase() + 0x2979B18))(this, duration);
	}
	template <typename T = void> T TurnRight(float duration) {
		return ((T (*)(SettlementRankScoreView*, float))(Il2CppBase() + 0x297A4EC))(this, duration);
	}
	template <typename T = void> T StartPlayingParts(uintptr_t data) {
		return ((T (*)(SettlementRankScoreView*, uintptr_t))(Il2CppBase() + 0x2974310))(this, data);
	}
	template <typename T = uintptr_t> T IEPlayingParts(Il2CppList<uintptr_t>* parts) {
		return ((T (*)(SettlementRankScoreView*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x297AEAC))(this, parts);
	}
	template <typename T = uintptr_t> T ShowOffRootFadeIn() {
		return ((T (*)(SettlementRankScoreView*))(Il2CppBase() + 0x2978A34))(this);
	}
	template <typename T = uintptr_t> T IESettlementUp(uintptr_t part) {
		return ((T (*)(SettlementRankScoreView*, uintptr_t))(Il2CppBase() + 0x297AFA8))(this, part);
	}
	template <typename T = uintptr_t> T IEAfterSettlementUp(uintptr_t part) {
		return ((T (*)(SettlementRankScoreView*, uintptr_t))(Il2CppBase() + 0x297B154))(this, part);
	}
	template <typename T = uintptr_t> T IERankUp(uintptr_t part) {
		return ((T (*)(SettlementRankScoreView*, uintptr_t))(Il2CppBase() + 0x297B298))(this, part);
	}
	template <typename T = uintptr_t> T IERankDown(uintptr_t part) {
		return ((T (*)(SettlementRankScoreView*, uintptr_t))(Il2CppBase() + 0x297B3DC))(this, part);
	}
	template <typename T = uintptr_t> T IERankProtection(uintptr_t part) {
		return ((T (*)(SettlementRankScoreView*, uintptr_t))(Il2CppBase() + 0x297B520))(this, part);
	}
	template <typename T = uintptr_t> T IEExitRankProtection(uintptr_t part) {
		return ((T (*)(SettlementRankScoreView*, uintptr_t))(Il2CppBase() + 0x297B664))(this, part);
	}
	template <typename T = uintptr_t> T IENormal(uintptr_t part) {
		return ((T (*)(SettlementRankScoreView*, uintptr_t))(Il2CppBase() + 0x297B7A8))(this, part);
	}
	template <typename T = uintptr_t> T IEFinalStep(uintptr_t part) {
		return ((T (*)(SettlementRankScoreView*, uintptr_t))(Il2CppBase() + 0x297B954))(this, part);
	}
	template <typename T = uintptr_t> T IEFirstStep(uintptr_t part) {
		return ((T (*)(SettlementRankScoreView*, uintptr_t))(Il2CppBase() + 0x297BA98))(this, part);
	}
	template <typename T = void> T PreRankShowOffm__0() {
		return ((T (*)(SettlementRankScoreView*))(Il2CppBase() + 0x297BC44))(this);
	}
	template <typename T = bool> T RankShowOffm__1(uintptr_t s) {
		return ((T (*)(SettlementRankScoreView*, uintptr_t))(Il2CppBase() + 0x297BC48))(this, s);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SettlementRankScoreView*))(Il2CppBase() + 0x297BC98))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnViewShow() {
		return ((T (*)(SettlementRankScoreView*))(Il2CppBase() + 0x297BCA0))(this);
	}

};

}
