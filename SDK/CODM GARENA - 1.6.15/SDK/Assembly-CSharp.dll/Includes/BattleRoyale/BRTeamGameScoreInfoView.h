#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRTeamGameScoreInfoView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRTeamGameScoreInfoView"));
	}

	template <typename T = uintptr_t> T& OpenScorePanelButton() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& TargetLabel() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& SelfScoreLabel() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& OtherScoreLabel() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& BgSprite() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& CountDownTimeLabel() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& BgSpriteOriWidth() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& m_TimeText() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& KillCountSprite() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& KillCountLabel() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppVector3> T& m_KillCountSpriteOriLocalPos() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& DogTagSprite() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& DogCountLabel() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppVector3> T& m_DogTagSpriteOriLocalPos() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& m_LastScoreData() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& SelfScoreAddEffect() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& OtherScoreAddEffect() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& SelfWillWinScoreEffect() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& OtherWillWinScoreEffect() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = bool> T& bReachSelfWillWinStatus() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = bool> T& bReachOtherWillWinStatus() {
		return *(T*)((uintptr_t)this + 0xD9);
	}
	template <typename T = int32_t> T& OFFSET() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = float> T& WILL_WIN_SCORE_PERCENT() {
		return *(T*)((uintptr_t)this + 0xE0);
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
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLocalPlayerKillCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLocalPlayerDogTagCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGameEnterLastStage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGameEnterLastMinute() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateGameTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateGameTimeInner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateScoreInner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RoundDownToMultiplesOfTen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySelfScoreAddEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopSelfScoreAddEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayOtherScoreAddEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopOtherScoreAddEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopSelfWillWinEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopOtherWillWinEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTargetScoreInner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = void> T Init() {
		return ((T (*)(BRTeamGameScoreInfoView*))(Il2CppBase() + 0x2629814))(this);
	}
	template <typename T = void> T UpdateScore(uintptr_t data, bool force) {
		return ((T (*)(BRTeamGameScoreInfoView*, uintptr_t, bool))(Il2CppBase() + 0x2628DAC))(this, data, force);
	}
	template <typename T = void> T UpdateLocalPlayerKillCount(int32_t inKillCount) {
		return ((T (*)(BRTeamGameScoreInfoView*, int32_t))(Il2CppBase() + 0x2628FA4))(this, inKillCount);
	}
	template <typename T = void> T UpdateLocalPlayerDogTagCount(uint32_t inDogTagCount) {
		return ((T (*)(BRTeamGameScoreInfoView*, uint32_t))(Il2CppBase() + 0x26291B4))(this, inDogTagCount);
	}
	template <typename T = void> T OnGameEnterLastStage() {
		return ((T (*)(BRTeamGameScoreInfoView*))(Il2CppBase() + 0x26284A0))(this);
	}
	template <typename T = void> T OnGameEnterLastMinute() {
		return ((T (*)(BRTeamGameScoreInfoView*))(Il2CppBase() + 0x26288D8))(this);
	}
	template <typename T = void> T UpdateGameTime(int32_t leftTime) {
		return ((T (*)(BRTeamGameScoreInfoView*, int32_t))(Il2CppBase() + 0x262964C))(this, leftTime);
	}
	template <typename T = void> T UpdateGameTimeInner(int32_t leftTime, uintptr_t timeLabel) {
		return ((T (*)(BRTeamGameScoreInfoView*, int32_t, uintptr_t))(Il2CppBase() + 0x262A6A4))(this, leftTime, timeLabel);
	}
	template <typename T = void> T UpdateScoreInner(uintptr_t data, bool force) {
		return ((T (*)(BRTeamGameScoreInfoView*, uintptr_t, bool))(Il2CppBase() + 0x2629F08))(this, data, force);
	}
	template <typename T = int32_t> T RoundDownToMultiplesOfTen(int32_t num) {
		return ((T (*)(BRTeamGameScoreInfoView*, int32_t))(Il2CppBase() + 0x262A9D0))(this, num);
	}
	template <typename T = void> T PlaySelfScoreAddEffect() {
		return ((T (*)(BRTeamGameScoreInfoView*))(Il2CppBase() + 0x262A8B4))(this);
	}
	template <typename T = void> T StopSelfScoreAddEffect() {
		return ((T (*)(BRTeamGameScoreInfoView*))(Il2CppBase() + 0x2629AA0))(this);
	}
	template <typename T = void> T PlayOtherScoreAddEffect() {
		return ((T (*)(BRTeamGameScoreInfoView*))(Il2CppBase() + 0x262AA9C))(this);
	}
	template <typename T = void> T StopOtherScoreAddEffect() {
		return ((T (*)(BRTeamGameScoreInfoView*))(Il2CppBase() + 0x2629BBC))(this);
	}
	template <typename T = void> T StopSelfWillWinEffect() {
		return ((T (*)(BRTeamGameScoreInfoView*))(Il2CppBase() + 0x2629CD8))(this);
	}
	template <typename T = void> T StopOtherWillWinEffect() {
		return ((T (*)(BRTeamGameScoreInfoView*))(Il2CppBase() + 0x2629DF0))(this);
	}
	template <typename T = void> T UpdateTargetScoreInner(uintptr_t data, bool force) {
		return ((T (*)(BRTeamGameScoreInfoView*, uintptr_t, bool))(Il2CppBase() + 0x262A4E8))(this, data, force);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRTeamGameScoreInfoView*))(Il2CppBase() + 0x262ABB8))(this);
	}

};

}
