#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.FFAGame {

class FFAGameScoreView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.FFAGame", "FFAGameScoreView"));
	}

	template <typename T = uintptr_t> T& TimeLabel() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& TargetScoreLabel() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& IndividualScoreLabel() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& HighestScoreLabel() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& SelfRankLabel() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& SelfRankSmallLabel() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& HighestScoreRankLabel() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& SelfBar() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& EnemyBar() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& TargetHintLabel() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& RankDescLabel() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& mIndividualScoreText() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = int32_t> T& mIndividualScore() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = int32_t> T& mHighestScore() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = bool> T& bParallelFirst() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurLeadingStateText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateScore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSpecialTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRankInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRankDesLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLeadingStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateGameTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTimeColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCustomTimeWarningInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRoundEndedStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePlayerCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayRoundEndWarned() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayHalfWarned() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = void> T WillShow() {
		return ((T (*)(FFAGameScoreView*))(Il2CppBase() + 0x4018410))(this);
	}
	template <typename T = void> T Reset(uintptr_t resetType) {
		return ((T (*)(FFAGameScoreView*, uintptr_t))(Il2CppBase() + 0x4018520))(this, resetType);
	}
	template <typename T = Il2CppString*> T GetCurLeadingStateText() {
		return ((T (*)(FFAGameScoreView*))(Il2CppBase() + 0x4018684))(this);
	}
	template <typename T = void> T UpdateScore(uintptr_t data, bool force) {
		return ((T (*)(FFAGameScoreView*, uintptr_t, bool))(Il2CppBase() + 0x4018748))(this, data, force);
	}
	template <typename T = bool> T IsSpecialTarget() {
		return ((T (*)(FFAGameScoreView*))(Il2CppBase() + 0x4019118))(this);
	}
	template <typename T = void> T UpdateRankInfo() {
		return ((T (*)(FFAGameScoreView*))(Il2CppBase() + 0x40191B8))(this);
	}
	template <typename T = void> T SetRankDesLabel(int32_t rank) {
		return ((T (*)(FFAGameScoreView*, int32_t))(Il2CppBase() + 0x40198EC))(this, rank);
	}
	template <typename T = void> T UpdateLeadingStatus(uintptr_t leadingState, uintptr_t data) {
		return ((T (*)(FFAGameScoreView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4019B8C))(this, leadingState, data);
	}
	template <typename T = void> T UpdateGameTime(int32_t totalTime, int32_t leftTime) {
		return ((T (*)(FFAGameScoreView*, int32_t, int32_t))(Il2CppBase() + 0x4019C58))(this, totalTime, leftTime);
	}
	template <typename T = void> T SetTimeColor(uintptr_t color, float interval) {
		return ((T (*)(FFAGameScoreView*, uintptr_t, float))(Il2CppBase() + 0x4019D34))(this, color, interval);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCustomTimeWarningInfo() {
		return ((T (*)(FFAGameScoreView*))(Il2CppBase() + 0x4019E2C))(this);
	}
	template <typename T = void> T UpdateRoundEndedStatus() {
		return ((T (*)(FFAGameScoreView*))(Il2CppBase() + 0x4019ECC))(this);
	}
	template <typename T = void> T UpdatePlayerCount() {
		return ((T (*)(FFAGameScoreView*))(Il2CppBase() + 0x40185EC))(this);
	}
	template <typename T = void> T PlayRoundEndWarned(bool bRoundTimeEnd, int32_t selfScore, int32_t enemyScore) {
		return ((T (*)(FFAGameScoreView*, bool, int32_t, int32_t))(Il2CppBase() + 0x4019F64))(this, bRoundTimeEnd, selfScore, enemyScore);
	}
	template <typename T = void> T PlayHalfWarned() {
		return ((T (*)(FFAGameScoreView*))(Il2CppBase() + 0x401A048))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(FFAGameScoreView*))(Il2CppBase() + 0x401A2A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset(uintptr_t P0) {
		return ((T (*)(FFAGameScoreView*, uintptr_t))(Il2CppBase() + 0x401A2A8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayRoundEndWarned(bool P0, int32_t P1, int32_t P2) {
		return ((T (*)(FFAGameScoreView*, bool, int32_t, int32_t))(Il2CppBase() + 0x401A2B0))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_PlayHalfWarned() {
		return ((T (*)(FFAGameScoreView*))(Il2CppBase() + 0x401A2D0))(this);
	}

};

}
