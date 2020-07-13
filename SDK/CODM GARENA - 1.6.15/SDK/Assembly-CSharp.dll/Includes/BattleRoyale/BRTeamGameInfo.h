#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRTeamGameInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRTeamGameInfo"));
	}

	template <typename T = float> T& m_CampLineRotateAngleY() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = bool> T& bBroadcastedOnHalf() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = bool> T& bBroadcastedOnHundred() {
		return *(T*)((uintptr_t)this + 0x185);
	}
	template <typename T = bool> T& bBroadcastedOnWillWin() {
		return *(T*)((uintptr_t)this + 0x186);
	}
	template <typename T = bool> T& bBroadcastedLeftTimeLastMinute() {
		return *(T*)((uintptr_t)this + 0x187);
	}
	template <typename T = Il2CppList<float>*> T& m_circleScaleRateArray() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = Il2CppString*> static T& willWinBGM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& bPlayWillWinBGM() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = int32_t> T& m_CachedSelfScore() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = int32_t> T& m_CachedOtherScore() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = int32_t> static T& Interval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MileStoneScore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBRGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBRTeamGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSoundConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSoundRTPC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSoundScaleFactor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessPawnAndNoPawnSoundEmitter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AsyncPreloadLastCircleAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncGameInfoProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncLeftAirplanePlayerNumByCamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncLeftAirplanePlayerNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SameTeamFromInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SameTeamFromPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessScoreChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsScoreChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundScoreChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckMilestone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundTimeChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundCountDownOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShouldShowSoundTypeByPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}

	template <typename T = bool> T IsBRGame() {
		return ((T (*)(BRTeamGameInfo*))(Il2CppBase() + 0x26206A8))(this);
	}
	template <typename T = bool> T IsBRTeamGame() {
		return ((T (*)(BRTeamGameInfo*))(Il2CppBase() + 0x2620750))(this);
	}
	template <typename T = uintptr_t> T get_TeammateType() {
		return ((T (*)(BRTeamGameInfo*))(Il2CppBase() + 0x26207F0))(this);
	}
	template <typename T = float> T get_CampLineRotateAngleY() {
		return ((T (*)(BRTeamGameInfo*))(Il2CppBase() + 0x26207F8))(this);
	}
	template <typename T = void> T set_CampLineRotateAngleY(float value) {
		return ((T (*)(BRTeamGameInfo*, float))(Il2CppBase() + 0x2620800))(this, value);
	}
	template <typename T = bool> T get_ShouldMedicalStationBoxUseDrone() {
		return ((T (*)(BRTeamGameInfo*))(Il2CppBase() + 0x2620808))(this);
	}
	template <typename T = bool> T get_ShouldShowSelectChipHUDSelectRootImmediately() {
		return ((T (*)(BRTeamGameInfo*))(Il2CppBase() + 0x2620810))(this);
	}
	template <typename T = bool> T get_ShouldLowPerfDeviceKeepOnlyLOD2() {
		return ((T (*)(BRTeamGameInfo*))(Il2CppBase() + 0x2620818))(this);
	}
	template <typename T = int32_t> T get_CurrentAreaWave() {
		return ((T (*)(BRTeamGameInfo*))(Il2CppBase() + 0x2620820))(this);
	}
	template <typename T = void> T set_CurrentAreaWave(int32_t value) {
		return ((T (*)(BRTeamGameInfo*, int32_t))(Il2CppBase() + 0x2620828))(this, value);
	}
	template <typename T = void> T UpdateSoundConfig(int32_t currentWaveNum) {
		return ((T (*)(BRTeamGameInfo*, int32_t))(Il2CppBase() + 0x2620D78))(this, currentWaveNum);
	}
	template <typename T = void> T UpdateSoundRTPC(int32_t currentWaveNum) {
		return ((T (*)(BRTeamGameInfo*, int32_t))(Il2CppBase() + 0x2620E34))(this, currentWaveNum);
	}
	template <typename T = void> T UpdateSoundScaleFactor(int32_t currentWaveNum) {
		return ((T (*)(BRTeamGameInfo*, int32_t))(Il2CppBase() + 0x2620F44))(this, currentWaveNum);
	}
	template <typename T = void> T ProcessPawnAndNoPawnSoundEmitter(uintptr_t pawnData, int32_t currentWave) {
		return ((T (*)(BRTeamGameInfo*, uintptr_t, int32_t))(Il2CppBase() + 0x26211FC))(this, pawnData, currentWave);
	}
	template <typename T = void> T AsyncPreloadLastCircleAsset() {
		return ((T (*)(BRTeamGameInfo*))(Il2CppBase() + 0x2620C34))(this);
	}
	template <typename T = void> T SyncGameInfoProperty(uint32_t propertyID, uint32_t value, uintptr_t varType) {
		return ((T (*)(BRTeamGameInfo*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x2621564))(this, propertyID, value, varType);
	}
	template <typename T = void> T OnSyncLeftAirplanePlayerNumByCamp(uint32_t inValue) {
		return ((T (*)(BRTeamGameInfo*, uint32_t))(Il2CppBase() + 0x26216F4))(this, inValue);
	}
	template <typename T = void> T OnSyncLeftAirplanePlayerNum(uint32_t inValue) {
		return ((T (*)(BRTeamGameInfo*, uint32_t))(Il2CppBase() + 0x26218C4))(this, inValue);
	}
	template <typename T = bool> T SameTeamFromInfo(uintptr_t player1, uintptr_t player2) {
		return ((T (*)(BRTeamGameInfo*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2621964))(this, player1, player2);
	}
	template <typename T = bool> T SameTeamFromPawn(uintptr_t pawn1, uintptr_t pawn2) {
		return ((T (*)(BRTeamGameInfo*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2621A68))(this, pawn1, pawn2);
	}
	template <typename T = void> T ProcessScoreChanged() {
		return ((T (*)(BRTeamGameInfo*))(Il2CppBase() + 0x2621C24))(this);
	}
	template <typename T = bool> T IsScoreChanged(int32_t selfScore, int32_t otherScore, bool IsSelf) {
		return ((T (*)(BRTeamGameInfo*, int32_t, int32_t, bool))(Il2CppBase() + 0x26225A8))(this, selfScore, otherScore, IsSelf);
	}
	template <typename T = void> T OnRoundScoreChanged(uint32_t playerID, int32_t score) {
		return ((T (*)(BRTeamGameInfo*, uint32_t, int32_t))(Il2CppBase() + 0x26226AC))(this, playerID, score);
	}
	template <typename T = bool> T CheckMilestone(int32_t score) {
		return ((T (*)(BRTeamGameInfo*, int32_t))(Il2CppBase() + 0x2622844))(this, score);
	}
	template <typename T = void> T OnRoundTimeChanged() {
		return ((T (*)(BRTeamGameInfo*))(Il2CppBase() + 0x26229C4))(this);
	}
	template <typename T = void> T OnRoundCountDownOver() {
		return ((T (*)(BRTeamGameInfo*))(Il2CppBase() + 0x2622BF0))(this);
	}
	template <typename T = bool> T CheckShouldShowSoundTypeByPlayerInfo(uintptr_t localOrViewTargetPawn, uintptr_t localOrViewTargetPlayerInfo, uintptr_t playerInfo, uint32_t playerID) {
		return ((T (*)(BRTeamGameInfo*, uintptr_t, uintptr_t, uintptr_t, uint32_t))(Il2CppBase() + 0x2622D50))(this, localOrViewTargetPawn, localOrViewTargetPlayerInfo, playerInfo, playerID);
	}
	template <typename T = bool> T xLuaBaseProxy_IsBRGame() {
		return ((T (*)(BRTeamGameInfo*))(Il2CppBase() + 0x2622FE0))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsBRTeamGame() {
		return ((T (*)(BRTeamGameInfo*))(Il2CppBase() + 0x2622FE8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SyncGameInfoProperty(uint32_t P0, uint32_t P1, uintptr_t P2) {
		return ((T (*)(BRTeamGameInfo*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x2622FF0))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncLeftAirplanePlayerNum(uint32_t P0) {
		return ((T (*)(BRTeamGameInfo*, uint32_t))(Il2CppBase() + 0x2623010))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_SameTeamFromInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(BRTeamGameInfo*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2623018))(this, P0, P1);
	}
	template <typename T = bool> T xLuaBaseProxy_SameTeamFromPawn(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(BRTeamGameInfo*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2623020))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_ProcessScoreChanged() {
		return ((T (*)(BRTeamGameInfo*))(Il2CppBase() + 0x2623028))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundScoreChanged(uint32_t P0, int32_t P1) {
		return ((T (*)(BRTeamGameInfo*, uint32_t, int32_t))(Il2CppBase() + 0x2623030))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundTimeChanged() {
		return ((T (*)(BRTeamGameInfo*))(Il2CppBase() + 0x2623038))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundCountDownOver() {
		return ((T (*)(BRTeamGameInfo*))(Il2CppBase() + 0x2623040))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CheckShouldShowSoundTypeByPlayerInfo(uintptr_t P0, uintptr_t P1, uintptr_t P2, uint32_t P3) {
		return ((T (*)(BRTeamGameInfo*, uintptr_t, uintptr_t, uintptr_t, uint32_t))(Il2CppBase() + 0x2623048))(this, P0, P1, P2, P3);
	}

};

}
