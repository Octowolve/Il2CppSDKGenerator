#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class PVPGameInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "PVPGameInfo"));
	}

	template <typename T = int32_t> static T& ACE_MIN_KILL_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& SECONDARY_KILL_DIFF() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& lastScoreState() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& targetScoreState() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = float> static T& PLAY_SCORE_CHANGE_SOUND() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& fPlayScoreNextTime() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = bool> T& hasPlayLastStanding() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& m_KillerIndicator() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& m_CurrentRoundResult() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& m_CurRoundEndReason() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& m_PlayerNames() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = float> T& m_RoundEndTime() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = bool> T& HasReceiveMatchPrepare() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_TeammateDiedIndicators() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_MlkTFEnemyIndicators() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncPlayerInfoProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncPlayerInfoProperty_DeadReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndSlowDownTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayRoundEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetDelayRoundEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundTimeChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRoundEndReason() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInGameReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInGameFinalKillReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGameReplayInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedFinalKillReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPVPGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanTriggerKnife() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowKnife() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessScoreChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ScoreChangedSoundTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSuppressScoreChangeSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayScoreChangedSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrScoreState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCampIconName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddEnemyPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetModeText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}

	template <typename T = float> T get_DelayRoundEndTime() {
		return ((T (*)(PVPGameInfo*))(Il2CppBase() + 0x2AEB4F0))(this);
	}
	template <typename T = uintptr_t> T get_KillerIndicator() {
		return ((T (*)(PVPGameInfo*))(Il2CppBase() + 0x2AEB4FC))(this);
	}
	template <typename T = void> T set_KillerIndicator(uintptr_t value) {
		return ((T (*)(PVPGameInfo*, uintptr_t))(Il2CppBase() + 0x2ADF89C))(this, value);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T get_PlayerNames() {
		return ((T (*)(PVPGameInfo*))(Il2CppBase() + 0x2AEB504))(this);
	}
	template <typename T = bool> T get_CanUseULTSkill() {
		return ((T (*)(PVPGameInfo*))(Il2CppBase() + 0x2AEB50C))(this);
	}
	template <typename T = float> T get_RoundEndTime() {
		return ((T (*)(PVPGameInfo*))(Il2CppBase() + 0x2AEB514))(this);
	}
	template <typename T = bool> T get_HasReceiveMatchPrepare() {
		return ((T (*)(PVPGameInfo*))(Il2CppBase() + 0x2AEB51C))(this);
	}
	template <typename T = void> T set_HasReceiveMatchPrepare(bool value) {
		return ((T (*)(PVPGameInfo*, bool))(Il2CppBase() + 0x2AEA6A8))(this, value);
	}
	template <typename T = void> T SyncPlayerInfoProperty(uintptr_t pInfo, uint32_t propertyID, uint32_t value, uintptr_t varType) {
		return ((T (*)(PVPGameInfo*, uintptr_t, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x2AEB524))(this, pInfo, propertyID, value, varType);
	}
	template <typename T = void> T SyncPlayerInfoProperty_DeadReplay(uint32_t playerID, Il2CppArray<uintptr_t>* propertyList, int32_t count) {
		return ((T (*)(PVPGameInfo*, uint32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x2AEBC14))(this, playerID, propertyList, count);
	}
	template <typename T = void> T OnRoundStart(int32_t inTimeLimit, int32_t inLeftTime) {
		return ((T (*)(PVPGameInfo*, int32_t, int32_t))(Il2CppBase() + 0x2AEBEB4))(this, inTimeLimit, inLeftTime);
	}
	template <typename T = void> T OnRoundEnd(uintptr_t inRoundResult, uint64_t inWarGodPlayerID) {
		return ((T (*)(PVPGameInfo*, uintptr_t, uint64_t))(Il2CppBase() + 0x2AEC10C))(this, inRoundResult, inWarGodPlayerID);
	}
	template <typename T = void> T EndSlowDownTime() {
		return ((T (*)(PVPGameInfo*))(Il2CppBase() + 0x2AEC4E4))(this);
	}
	template <typename T = void> T DelayRoundEnd(uintptr_t inRoundResult, uintptr_t inReason, uint64_t inWarGodPlayerID) {
		return ((T (*)(PVPGameInfo*, uintptr_t, uintptr_t, uint64_t))(Il2CppBase() + 0x2AEC834))(this, inRoundResult, inReason, inWarGodPlayerID);
	}
	template <typename T = void> T ResetDelayRoundEnd() {
		return ((T (*)(PVPGameInfo*))(Il2CppBase() + 0x2AECB04))(this);
	}
	template <typename T = void> T PreTick(float deltaTime) {
		return ((T (*)(PVPGameInfo*, float))(Il2CppBase() + 0x2AECC64))(this, deltaTime);
	}
	template <typename T = void> T OnRoundTimeChanged() {
		return ((T (*)(PVPGameInfo*))(Il2CppBase() + 0x2AECEBC))(this);
	}
	template <typename T = Il2CppString*> T GetRoundEndReason() {
		return ((T (*)(PVPGameInfo*))(Il2CppBase() + 0x2AED0D8))(this);
	}
	template <typename T = bool> T IsInGameReplay() {
		return ((T (*)(PVPGameInfo*))(Il2CppBase() + 0x2AED228))(this);
	}
	template <typename T = bool> T IsInGameFinalKillReplay() {
		return ((T (*)(PVPGameInfo*))(Il2CppBase() + 0x2AED394))(this);
	}
	template <typename T = uintptr_t> T GetGameReplayInfo() {
		return ((T (*)(PVPGameInfo*))(Il2CppBase() + 0x2AED504))(this);
	}
	template <typename T = bool> T NeedFinalKillReplay() {
		return ((T (*)(PVPGameInfo*))(Il2CppBase() + 0x2AED684))(this);
	}
	template <typename T = bool> T IsPVPGame() {
		return ((T (*)(PVPGameInfo*))(Il2CppBase() + 0x2AED730))(this);
	}
	template <typename T = bool> T IsCanTriggerKnife() {
		return ((T (*)(PVPGameInfo*))(Il2CppBase() + 0x2AED7D0))(this);
	}
	template <typename T = bool> T IsShowKnife() {
		return ((T (*)(PVPGameInfo*))(Il2CppBase() + 0x2AED870))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_TeammateDiedIndicators() {
		return ((T (*)(PVPGameInfo*))(Il2CppBase() + 0x2AEACA0))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_MlkTFEnemyIndicators() {
		return ((T (*)(PVPGameInfo*))(Il2CppBase() + 0x2AEDB9C))(this);
	}
	template <typename T = void> T ProcessScoreChanged() {
		return ((T (*)(PVPGameInfo*))(Il2CppBase() + 0x2AEDBA4))(this);
	}
	template <typename T = void> T ScoreChangedSoundTick() {
		return ((T (*)(PVPGameInfo*))(Il2CppBase() + 0x2AECDC0))(this);
	}
	template <typename T = bool> T IsSuppressScoreChangeSound() {
		return ((T (*)(PVPGameInfo*))(Il2CppBase() + 0x2AEE1F4))(this);
	}
	template <typename T = void> T PlayScoreChangedSound(uintptr_t scoreState) {
		return ((T (*)(PVPGameInfo*, uintptr_t))(Il2CppBase() + 0x2AEE050))(this, scoreState);
	}
	template <typename T = uintptr_t> T GetCurrScoreState() {
		return ((T (*)(PVPGameInfo*))(Il2CppBase() + 0x2AEDDAC))(this);
	}
	template <typename T = Il2CppString*> T GetCampIconName(uintptr_t camp) {
		return ((T (*)(PVPGameInfo*, uintptr_t))(Il2CppBase() + 0x2AEE294))(this, camp);
	}
	template <typename T = void> T AddEnemyPlayerInfo(uint32_t ownerId, uint32_t exposedPawnId, float duration) {
		return ((T (*)(PVPGameInfo*, uint32_t, uint32_t, float))(Il2CppBase() + 0x2AEE364))(this, ownerId, exposedPawnId, duration);
	}
	template <typename T = Il2CppString*> T GetModeText() {
		return ((T (*)(PVPGameInfo*))(Il2CppBase() + 0x2AEE704))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SyncPlayerInfoProperty(uintptr_t P0, uint32_t P1, uint32_t P2, uintptr_t P3) {
		return ((T (*)(PVPGameInfo*, uintptr_t, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x2AEE904))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T xLuaBaseProxy_SyncPlayerInfoProperty_DeadReplay(uint32_t P0, Il2CppArray<uintptr_t>* P1, int32_t P2) {
		return ((T (*)(PVPGameInfo*, uint32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x2AEE928))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundStart(int32_t P0, int32_t P1) {
		return ((T (*)(PVPGameInfo*, int32_t, int32_t))(Il2CppBase() + 0x2AEE948))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundEnd(uintptr_t P0, uint64_t P1) {
		return ((T (*)(PVPGameInfo*, uintptr_t, uint64_t))(Il2CppBase() + 0x2AEE950))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_PreTick(float P0) {
		return ((T (*)(PVPGameInfo*, float))(Il2CppBase() + 0x2AEE970))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundTimeChanged() {
		return ((T (*)(PVPGameInfo*))(Il2CppBase() + 0x2AEE978))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsInGameReplay() {
		return ((T (*)(PVPGameInfo*))(Il2CppBase() + 0x2AEE980))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsInGameFinalKillReplay() {
		return ((T (*)(PVPGameInfo*))(Il2CppBase() + 0x2AEE988))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetGameReplayInfo() {
		return ((T (*)(PVPGameInfo*))(Il2CppBase() + 0x2AEE990))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_NeedFinalKillReplay() {
		return ((T (*)(PVPGameInfo*))(Il2CppBase() + 0x2AEE998))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsPVPGame() {
		return ((T (*)(PVPGameInfo*))(Il2CppBase() + 0x2AEE9A0))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsCanTriggerKnife() {
		return ((T (*)(PVPGameInfo*))(Il2CppBase() + 0x2AEE9A8))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsShowKnife() {
		return ((T (*)(PVPGameInfo*))(Il2CppBase() + 0x2AEE9B0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ProcessScoreChanged() {
		return ((T (*)(PVPGameInfo*))(Il2CppBase() + 0x2AEE9B8))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetModeText() {
		return ((T (*)(PVPGameInfo*))(Il2CppBase() + 0x2AEE9C0))(this);
	}

};

}
