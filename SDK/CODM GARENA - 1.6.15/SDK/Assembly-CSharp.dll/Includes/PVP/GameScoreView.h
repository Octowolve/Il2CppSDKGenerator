#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class GameScoreView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "GameScoreView"));
	}

	template <typename T = Il2CppString*> T& m_BlueCampSpriteName() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppString*> T& m_RedCampSpriteName() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_LastScoreData() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_TimeText() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& m_TargetScoreText() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& m_SelfScoreText() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& m_EnemyScoreText() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& m_TargetHintText() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_LeadingColors() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_LeadingSounds() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& OpeningBGM() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = int32_t> T& EndingBGM() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& m_OpeninBGMPlayed() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = bool> T& m_EndingBGMPlayed() {
		return *(T*)((uintptr_t)this + 0xAD);
	}
	template <typename T = float> T& m_EnterGameTime() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& m_RoundStartTime() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = bool> T& RoundEndWarned() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& RoundHalfWarned() {
		return *(T*)((uintptr_t)this + 0xB9);
	}
	template <typename T = bool> T& m_FindTopRoot() {
		return *(T*)((uintptr_t)this + 0xBA);
	}
	template <typename T = uintptr_t> T& m_TopAnchor() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& m_CurLeadingStatus() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = bool> T& bShowTargetHintTips() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = bool> T& bLastShowTargetHint() {
		return *(T*)((uintptr_t)this + 0xC5);
	}
	template <typename T = uintptr_t> T& LastShowLeadingStatus() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> static T& kSelfAliveColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& kSelfDeadColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& kEnemyAliveColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& kEnemyDeadColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckUpdateTargetHintTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpateTargetHintState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetTopRootRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCampInfoInner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCurLeadingStatusShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayRoundEndWarned() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateScoreInner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTargetScoreInner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLeadingStatusInner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePlayerCountInner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePlayerSpritesCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPawnSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayHalfWarned() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateGameTimeInner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTimeColorInner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEndingBGM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateEndRoundScores() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(GameScoreView*))(Il2CppBase() + 0x347C974))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(GameScoreView*))(Il2CppBase() + 0x347C97C))(this);
	}
	template <typename T = void> T set_CurLeadingStatus(uintptr_t value) {
		return ((T (*)(GameScoreView*, uintptr_t))(Il2CppBase() + 0x347C98C))(this, value);
	}
	template <typename T = uintptr_t> T get_CurLeadingStatus() {
		return ((T (*)(GameScoreView*))(Il2CppBase() + 0x347C994))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(GameScoreView*))(Il2CppBase() + 0x347C99C))(this);
	}
	template <typename T = void> T CheckUpdateTargetHintTips(uintptr_t HintLabel) {
		return ((T (*)(GameScoreView*, uintptr_t))(Il2CppBase() + 0x347CDD4))(this, HintLabel);
	}
	template <typename T = void> T UpateTargetHintState() {
		return ((T (*)(GameScoreView*))(Il2CppBase() + 0x347D034))(this);
	}
	template <typename T = void> T ResetTopRootRotation() {
		return ((T (*)(GameScoreView*))(Il2CppBase() + 0x347CB08))(this);
	}
	template <typename T = void> T Reset(uintptr_t resetType) {
		return ((T (*)(GameScoreView*, uintptr_t))(Il2CppBase() + 0x347D10C))(this, resetType);
	}
	template <typename T = void> T SetCampInfoInner(uintptr_t campSprite) {
		return ((T (*)(GameScoreView*, uintptr_t))(Il2CppBase() + 0x347D220))(this, campSprite);
	}
	template <typename T = void> T UpdateCurLeadingStatusShow(uintptr_t inTargetHintLabel) {
		return ((T (*)(GameScoreView*, uintptr_t))(Il2CppBase() + 0x347D3BC))(this, inTargetHintLabel);
	}
	template <typename T = void> T PlayRoundEndWarned(bool bRoundTimeEnd, int32_t selfScore, int32_t enemyScore) {
		return ((T (*)(GameScoreView*, bool, int32_t, int32_t))(Il2CppBase() + 0x347D58C))(this, bRoundTimeEnd, selfScore, enemyScore);
	}
	template <typename T = void> T UpdateScoreInner(uintptr_t data, uintptr_t selfScoreLabel, uintptr_t enemyScoreLabel, uintptr_t selfBarSprite, uintptr_t enemyBarSprite, uintptr_t targetHintLabel, bool force) {
		return ((T (*)(GameScoreView*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x347D778))(this, data, selfScoreLabel, enemyScoreLabel, selfBarSprite, enemyBarSprite, targetHintLabel, force);
	}
	template <typename T = void> T UpdateTargetScoreInner(uintptr_t data, uintptr_t targetScoreLabel, bool force) {
		return ((T (*)(GameScoreView*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x347E4C8))(this, data, targetScoreLabel, force);
	}
	template <typename T = void> T UpdateLeadingStatusInner(uintptr_t status, uintptr_t data, Il2CppArray<uintptr_t>* sounds, uintptr_t statusLabel, Il2CppArray<uintptr_t>* colors) {
		return ((T (*)(GameScoreView*, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x347EC48))(this, status, data, sounds, statusLabel, colors);
	}
	template <typename T = void> T UpdatePlayerCountInner(Il2CppArray<uintptr_t>* selfSpriteList, Il2CppArray<uintptr_t>* enemySpriteList) {
		return ((T (*)(GameScoreView*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x347F018))(this, selfSpriteList, enemySpriteList);
	}
	template <typename T = void> T UpdatePlayerSpritesCount(Il2CppArray<uintptr_t>* pawnSprites, uintptr_t camp, uintptr_t aliveColor, uintptr_t deadColor) {
		return ((T (*)(GameScoreView*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x347F290))(this, pawnSprites, camp, aliveColor, deadColor);
	}
	template <typename T = void> T ShowPawnSprite(uintptr_t sprite, bool show) {
		return ((T (*)(GameScoreView*, uintptr_t, bool))(Il2CppBase() + 0x347F584))(this, sprite, show);
	}
	template <typename T = void> T PlayHalfWarned() {
		return ((T (*)(GameScoreView*))(Il2CppBase() + 0x347F6BC))(this);
	}
	template <typename T = void> T UpdateGameTimeInner(int32_t totalTime, int32_t leftTime, uintptr_t timeLabel, uintptr_t secondTimeLabel) {
		return ((T (*)(GameScoreView*, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x347FB4C))(this, totalTime, leftTime, timeLabel, secondTimeLabel);
	}
	template <typename T = void> T SetTimeColorInner(uintptr_t color, uintptr_t timeLabel) {
		return ((T (*)(GameScoreView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3480880))(this, color, timeLabel);
	}
	template <typename T = void> T PlayEndingBGM() {
		return ((T (*)(GameScoreView*))(Il2CppBase() + 0x3480504))(this);
	}
	template <typename T = void> T UpdateEndRoundScores() {
		return ((T (*)(GameScoreView*))(Il2CppBase() + 0x3480A04))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(GameScoreView*))(Il2CppBase() + 0x3480C54))(this);
	}

};

}
