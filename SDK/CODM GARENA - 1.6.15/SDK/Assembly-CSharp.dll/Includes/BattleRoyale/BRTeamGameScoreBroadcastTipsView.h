#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRTeamGameScoreBroadcastTipsView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRTeamGameScoreBroadcastTipsView"));
	}

	template <typename T = uintptr_t> T& SelfScoreLabel() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& OtherScoreLabel() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& SelfScoreUpdateRoot() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& OtherScoreUpdateRoot() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& LeftTimeLabelBGSprite() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& LeftTimeLabelBGSpriteWidth() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& LeftTimeLabel() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = float> T& LabelOffset() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& m_TimeText() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = int32_t> T& m_LastSelfScore() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& m_LastOtherScore() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = int32_t> T& m_showScore() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& m_TargetLabel() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = int32_t> T& m_SelfShowScore() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& m_OtherShowScore() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& SelfScoreUpdateAnim() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& OtherScoreUpdateAnim() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = float> T& AnimDuration() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = float> T& AnimFadeoutDuration() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateScore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_UpdateScore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateScoreWithoutAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLeftTimeLable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleLastMinutesOn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleLeftTimeLastMinutesOff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayUpdateScore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayUpdateSelfScore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayUpdateOtherScore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideGameScoreView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayHideGameScoreView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAnimState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = void> T Init() {
		return ((T (*)(BRTeamGameScoreBroadcastTipsView*))(Il2CppBase() + 0x2625A08))(this);
	}
	template <typename T = void> T UpdateScore(int32_t inScore, bool bSelfScoreChanged, bool bFadeOutAfterAnimPlayed) {
		return ((T (*)(BRTeamGameScoreBroadcastTipsView*, int32_t, bool, bool))(Il2CppBase() + 0x26243FC))(this, inScore, bSelfScoreChanged, bFadeOutAfterAnimPlayed);
	}
	template <typename T = void> T UpdateScore_1(int32_t inSelfScore, int32_t inOtherScore) {
		return ((T (*)(BRTeamGameScoreBroadcastTipsView*, int32_t, int32_t))(Il2CppBase() + 0x26240BC))(this, inSelfScore, inOtherScore);
	}
	template <typename T = void> T UpdateScoreWithoutAnimation(int32_t inSelfScore, int32_t inOtherScore) {
		return ((T (*)(BRTeamGameScoreBroadcastTipsView*, int32_t, int32_t))(Il2CppBase() + 0x2624B90))(this, inSelfScore, inOtherScore);
	}
	template <typename T = void> T UpdateLeftTimeLable(int32_t inLeftTime) {
		return ((T (*)(BRTeamGameScoreBroadcastTipsView*, int32_t))(Il2CppBase() + 0x2624ECC))(this, inLeftTime);
	}
	template <typename T = void> T ToggleLastMinutesOn() {
		return ((T (*)(BRTeamGameScoreBroadcastTipsView*))(Il2CppBase() + 0x2625240))(this);
	}
	template <typename T = void> T ToggleLeftTimeLastMinutesOff() {
		return ((T (*)(BRTeamGameScoreBroadcastTipsView*))(Il2CppBase() + 0x2625800))(this);
	}
	template <typename T = void> T DelayUpdateScore() {
		return ((T (*)(BRTeamGameScoreBroadcastTipsView*))(Il2CppBase() + 0x2625E08))(this);
	}
	template <typename T = void> T DelayUpdateSelfScore() {
		return ((T (*)(BRTeamGameScoreBroadcastTipsView*))(Il2CppBase() + 0x2625EF8))(this);
	}
	template <typename T = void> T DelayUpdateOtherScore() {
		return ((T (*)(BRTeamGameScoreBroadcastTipsView*))(Il2CppBase() + 0x2626040))(this);
	}
	template <typename T = void> T HideGameScoreView() {
		return ((T (*)(BRTeamGameScoreBroadcastTipsView*))(Il2CppBase() + 0x2626188))(this);
	}
	template <typename T = void> T DelayHideGameScoreView(float delayTime, bool bNeedToHide) {
		return ((T (*)(BRTeamGameScoreBroadcastTipsView*, float, bool))(Il2CppBase() + 0x2625C40))(this, delayTime, bNeedToHide);
	}
	template <typename T = bool> T CheckAnimState(uintptr_t animStateInfo, Il2CppString* animStateName) {
		return ((T (*)(BRTeamGameScoreBroadcastTipsView*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x26262D4))(this, animStateInfo, animStateName);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRTeamGameScoreBroadcastTipsView*))(Il2CppBase() + 0x262647C))(this);
	}

};

}
