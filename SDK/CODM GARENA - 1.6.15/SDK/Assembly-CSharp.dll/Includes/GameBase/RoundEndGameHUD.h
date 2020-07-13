#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class RoundEndGameHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "RoundEndGameHUD"));
	}

	template <typename T = uintptr_t> T& SDMatchDetailAnimator() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& Win() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& Draw() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& Fail() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& ChangeSide() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& WinResultReason() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& DrawResultReason() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& FailResultReason() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& ChangeSideResultReason() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& SDMatchDetail() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& SDScoreLeft() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& SDScoreRight() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& SDCampLeft() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& SDCampRight() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& SDLeftCampIcon() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& SDRightCampIcon() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& SDLeftCampIconBG() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& SDRightCampIconBG() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& LeftTotalRound() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& LeftComplete() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& LeftAlphaAnim() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& LeftScaleAnim() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& RightTotalRound() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& RightComplete() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& RightAlphaAnim() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& RightScaleAnim() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& SDTargetScore() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& OBVSRoot() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& OBDrawRoot() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& OBLeftWinRoot() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& OBRightWinRoot() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& OBLeftWinCamp() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& OBRightWinCamp() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& LeftCompleteRoot() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& RightCompleteRoot() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& LeftCampRoot() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& RightCampRoot() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& DOMMatchDetail() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& DOMScoreLeft() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& DOMScoreRight() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& DOMCampLeft() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& DOMCampRight() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& DOMLeftCampIcon() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& DOMRightCampIcon() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& DOMLeftCampIconBG() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> T& DOMRightCampIconBG() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& CTFMatchDetail() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& CTFCampLeft() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& CTFCampRight() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = uintptr_t> T& CTFLeftCampIcon() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& CTFRightCampIcon() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& CTFLeftScores() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& CTFRightScores() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = uintptr_t> T& WinAnimator() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& DrawAnimator() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = uintptr_t> T& FailAnimator() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& LeftTweenScale() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = uintptr_t> T& RightTweenScale() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& ChangeSideAnimator() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = uintptr_t> T& BGAnim() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = float> T& DelayEndGame() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = Il2CppString*> T& m_winAnimationName() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = Il2CppString*> T& m_failAnimationName() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = int32_t> T& leftAnimIndex() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = int32_t> T& rightAnimIndex() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeforeLoadLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowRoundResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCurrentScore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayerScoreAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayChangeSideAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginSettlement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(RoundEndGameHUD*))(Il2CppBase() + 0x2DECD04))(this);
	}
	template <typename T = uint64_t> T get_ActiveGameHudState() {
		return ((T (*)(RoundEndGameHUD*))(Il2CppBase() + 0x2DECD0C))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(RoundEndGameHUD*))(Il2CppBase() + 0x2DECD18))(this);
	}
	template <typename T = void> T BeforeLoadLevel(uintptr_t msg) {
		return ((T (*)(RoundEndGameHUD*, uintptr_t))(Il2CppBase() + 0x2DED028))(this, msg);
	}
	template <typename T = void> T ResetData() {
		return ((T (*)(RoundEndGameHUD*))(Il2CppBase() + 0x2DECDC8))(this);
	}
	template <typename T = void> T ShowRoundResult(uintptr_t inGameResult) {
		return ((T (*)(RoundEndGameHUD*, uintptr_t))(Il2CppBase() + 0x2DED0D4))(this, inGameResult);
	}
	template <typename T = void> T ShowCurrentScore() {
		return ((T (*)(RoundEndGameHUD*))(Il2CppBase() + 0x2DEED74))(this);
	}
	template <typename T = void> T PlayerScoreAnimation() {
		return ((T (*)(RoundEndGameHUD*))(Il2CppBase() + 0x2DEF068))(this);
	}
	template <typename T = void> T PlayChangeSideAnimation() {
		return ((T (*)(RoundEndGameHUD*))(Il2CppBase() + 0x2DEF788))(this);
	}
	template <typename T = void> T BeginSettlement() {
		return ((T (*)(RoundEndGameHUD*))(Il2CppBase() + 0x2DEF8C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(RoundEndGameHUD*))(Il2CppBase() + 0x2DEFB0C))(this);
	}

};

}
