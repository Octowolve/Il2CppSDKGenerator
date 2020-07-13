#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRGameInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRGameInfo"));
	}

	template <typename T = uintptr_t> T& m_GasCirCleAreaInfo() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& m_SafeCirCleAreaInfo() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& m_UnpilotedArea() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = int32_t> static T& MAX_SPARROW_AREA_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_SparrowAreaInfo() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& BREquipmentManagerCollection() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& BRDroppedPickUpMgr() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_BRMapMarkList() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& ZombieBoxEffectDic() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& noneUseUnpilotedVehicle() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = float> T& MAX_UNPILOTEDSPRITE_STAY_TIME() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& m_ActiveZombieZone() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = Il2CppDictionary<uint32_t, Il2CppVector3>*> T& m_AllSyncTacticalMapPos() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = int32_t> T& m_CurrentAreaWave() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = int32_t> T& m_TotalAreaWave() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = int32_t> T& m_MatchTeamType() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = int32_t> T& m_MatchTeamAliveNum() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = int32_t> T& m_MatchTeamTotalNum() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = int32_t> T& m_PlaySantaRadio() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = Il2CppDictionary<uint32_t, float>*> T& VisibleStepShouldNotBeDisplayedBeforeTime() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& PickUpAreaInfoList() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_SoundPlayingDict() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppDictionary<uint32_t, uintptr_t>*>*> T& m_SoundCollectionDict() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = float> T& m_LastUpdateSoundTime() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = float> T& kUpdateSoundInterval() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = float> T& VISUABLESOUND_LAST_TIME() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = Il2CppList<uint32_t>*> static T& OutdateKeys() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& PlayerMarkInfoList() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = uintptr_t> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBRGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanTriggerKnife() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowKnife() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPreparationStageBanFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncGameInfoProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncLeftAirplanePlayerNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncPlayerInfoProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSynTacticalMapPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyVirtualWeaponChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncSceneActorInfoProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTeamInfoChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundScoreChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On3PWeaponChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddUnusedUnpilotedInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeleteUnusedUnpilotedInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddGasArea_Circle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddSafeArea_Circle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAddSafeAreaSoundForLocalPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddSparrowArea_Circle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSparrowArea_Circle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddUnpiloted_Circle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateUnpiloted_Circle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelSparrowArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelFunctionalArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MarkAllAreaChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SameTeamFromInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SameTeamFromPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SameTeamFromParameters() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterNewSoundPlayingInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_RegisterNewSoundPlayingInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckDistanceInRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSoundInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearTimeoutPlayingInfoDict() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSoundList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldShowSoundType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShouldShowSoundTypeByPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordTheDurationStaticSoundAndWindowSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMutuallyExclusiveSoundExist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifySoundPlayed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_NotifySoundPlayed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifySoundPlayedFromSoundName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_NotifySoundPlayedFromSoundName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyPawnMoveSoundPlayed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyWeaponFireSoundPlayed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyVehicleSoundPlayed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDroneVehicleSoundPlayed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyStaticSoundPlayed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyWindowStaticSoundPlayed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyWeaponFireStopSoundPlayed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddPlayerMark() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemovePlayerMark() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryGetAllBRMapMark() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBRMapMarks() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddSparrowStickInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveSparrowStickInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundCountDownOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessScoreChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreatePlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemovePlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Draw1PCamFirst() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSkydivingLeaderInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddActiveZombieZone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckZombieZone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedFinalKillReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}

	template <typename T = bool> T get_CanAutoPickUpWeapon() {
		return ((T (*)(BRGameInfo*))(Il2CppBase() + 0x191BEFC))(this);
	}
	template <typename T = uintptr_t> T get_TeammateType() {
		return ((T (*)(BRGameInfo*))(Il2CppBase() + 0x191BF04))(this);
	}
	template <typename T = uintptr_t> T get_GasCirCleAreaInfo() {
		return ((T (*)(BRGameInfo*))(Il2CppBase() + 0x191BF0C))(this);
	}
	template <typename T = uintptr_t> T get_SafeCirCleAreaInfo() {
		return ((T (*)(BRGameInfo*))(Il2CppBase() + 0x191BF14))(this);
	}
	template <typename T = uintptr_t> T get_UnpilotedArea() {
		return ((T (*)(BRGameInfo*))(Il2CppBase() + 0x191BF1C))(this);
	}
	template <typename T = uintptr_t> T get_SparrowAreaInfo() {
		return ((T (*)(BRGameInfo*))(Il2CppBase() + 0x191BF24))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_BRMapMarkList() {
		return ((T (*)(BRGameInfo*))(Il2CppBase() + 0x191BF2C))(this);
	}
	template <typename T = int32_t> T get_ActiveZombieZoneCount() {
		return ((T (*)(BRGameInfo*))(Il2CppBase() + 0x191C17C))(this);
	}
	template <typename T = Il2CppDictionary<uint32_t, Il2CppVector3>*> T get_AllSyncTacticalMapPos() {
		return ((T (*)(BRGameInfo*))(Il2CppBase() + 0x191C210))(this);
	}
	template <typename T = int32_t> T get_CurrentAreaWave() {
		return ((T (*)(BRGameInfo*))(Il2CppBase() + 0x191C218))(this);
	}
	template <typename T = void> T set_CurrentAreaWave(int32_t value) {
		return ((T (*)(BRGameInfo*, int32_t))(Il2CppBase() + 0x191C220))(this, value);
	}
	template <typename T = int32_t> T get_TotalAreaWave() {
		return ((T (*)(BRGameInfo*))(Il2CppBase() + 0x191C228))(this);
	}
	template <typename T = void> T set_TotalAreaWave(int32_t value) {
		return ((T (*)(BRGameInfo*, int32_t))(Il2CppBase() + 0x191C230))(this, value);
	}
	template <typename T = int32_t> T get_MatchTeamType() {
		return ((T (*)(BRGameInfo*))(Il2CppBase() + 0x191C238))(this);
	}
	template <typename T = int32_t> T get_MatchTeamAliveNum() {
		return ((T (*)(BRGameInfo*))(Il2CppBase() + 0x191C240))(this);
	}
	template <typename T = int32_t> T get_MatchTeamTotalNum() {
		return ((T (*)(BRGameInfo*))(Il2CppBase() + 0x191C248))(this);
	}
	template <typename T = int32_t> T get_PlaySantaRadio() {
		return ((T (*)(BRGameInfo*))(Il2CppBase() + 0x191C250))(this);
	}
	template <typename T = void> T set_PlaySantaRadio(int32_t value) {
		return ((T (*)(BRGameInfo*, int32_t))(Il2CppBase() + 0x191C258))(this, value);
	}
	template <typename T = bool> T get_ShouldShowSelectChipHUDSelectRootImmediately() {
		return ((T (*)(BRGameInfo*))(Il2CppBase() + 0x191C3DC))(this);
	}
	template <typename T = int32_t> T get_DelayRequestProfessionChipInfoTime() {
		return ((T (*)(BRGameInfo*))(Il2CppBase() + 0x191C3E4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BRGameInfo*))(Il2CppBase() + 0x191C3EC))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(BRGameInfo*))(Il2CppBase() + 0x191C5D4))(this);
	}
	template <typename T = bool> T IsBRGame() {
		return ((T (*)(BRGameInfo*))(Il2CppBase() + 0x191C728))(this);
	}
	template <typename T = bool> T IsCanTriggerKnife() {
		return ((T (*)(BRGameInfo*))(Il2CppBase() + 0x191C7F8))(this);
	}
	template <typename T = bool> T IsShowKnife() {
		return ((T (*)(BRGameInfo*))(Il2CppBase() + 0x191C8C8))(this);
	}
	template <typename T = bool> T get_CanPauseGame() {
		return ((T (*)(BRGameInfo*))(Il2CppBase() + 0x191C998))(this);
	}
	template <typename T = bool> T IsPreparationStageBanFire() {
		return ((T (*)(BRGameInfo*))(Il2CppBase() + 0x191C9A8))(this);
	}
	template <typename T = void> T SyncGameInfoProperty(uint32_t propertyID, uint32_t value, uintptr_t varType) {
		return ((T (*)(BRGameInfo*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x191CA78))(this, propertyID, value, varType);
	}
	template <typename T = void> T OnSyncLeftAirplanePlayerNum(uint32_t inValue) {
		return ((T (*)(BRGameInfo*, uint32_t))(Il2CppBase() + 0x191D0C0))(this, inValue);
	}
	template <typename T = void> T SyncPlayerInfoProperty(uintptr_t playerInfo, uint32_t propertyID, uint32_t value, uintptr_t varType) {
		return ((T (*)(BRGameInfo*, uintptr_t, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x191D2A8))(this, playerInfo, propertyID, value, varType);
	}
	template <typename T = void> T OnSynTacticalMapPos(uint32_t playerId, uint32_t value, bool isX) {
		return ((T (*)(BRGameInfo*, uint32_t, uint32_t, bool))(Il2CppBase() + 0x191DB68))(this, playerId, value, isX);
	}
	template <typename T = void> T NotifyVirtualWeaponChange(uintptr_t playerInfo) {
		return ((T (*)(BRGameInfo*, uintptr_t))(Il2CppBase() + 0x191D8FC))(this, playerInfo);
	}
	template <typename T = void> T SyncSceneActorInfoProperty(uintptr_t sceneActorInfo, uint32_t propertyID, uint32_t value, uintptr_t varType) {
		return ((T (*)(BRGameInfo*, uintptr_t, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x191DE24))(this, sceneActorInfo, propertyID, value, varType);
	}
	template <typename T = void> T OnTeamInfoChanged(uint32_t playerID, uint32_t teamID, uint32_t teamSeatID) {
		return ((T (*)(BRGameInfo*, uint32_t, uint32_t, uint32_t))(Il2CppBase() + 0x191E00C))(this, playerID, teamID, teamSeatID);
	}
	template <typename T = void> T OnRoundScoreChanged(uint32_t playerID, int32_t score) {
		return ((T (*)(BRGameInfo*, uint32_t, int32_t))(Il2CppBase() + 0x191E254))(this, playerID, score);
	}
	template <typename T = void> T On3PWeaponChanged(uint32_t playerID, int32_t weaponID, int32_t actorID) {
		return ((T (*)(BRGameInfo*, uint32_t, int32_t, int32_t))(Il2CppBase() + 0x191E338))(this, playerID, weaponID, actorID);
	}
	template <typename T = void> T AddUnusedUnpilotedInfo(uintptr_t vehicleType, Il2CppVector3 location, Il2CppQuaternion quaternion) {
		return ((T (*)(BRGameInfo*, uintptr_t, Il2CppVector3, Il2CppQuaternion))(Il2CppBase() + 0x191EA8C))(this, vehicleType, location, quaternion);
	}
	template <typename T = void> T DeleteUnusedUnpilotedInfo() {
		return ((T (*)(BRGameInfo*))(Il2CppBase() + 0x191EC30))(this);
	}
	template <typename T = void> T AddGasArea_Circle(int32_t id, Il2CppVector3 pos, float createTime, float iniRadius, float shrinkDuration, float targetRadius, Il2CppVector3 targetPos, float delayTime) {
		return ((T (*)(BRGameInfo*, int32_t, Il2CppVector3, float, float, float, float, Il2CppVector3, float))(Il2CppBase() + 0x19081E8))(this, id, pos, createTime, iniRadius, shrinkDuration, targetRadius, targetPos, delayTime);
	}
	template <typename T = void> T AddSafeArea_Circle(int32_t id, Il2CppVector3 pos, float iniRadius) {
		return ((T (*)(BRGameInfo*, int32_t, Il2CppVector3, float))(Il2CppBase() + 0x19083FC))(this, id, pos, iniRadius);
	}
	template <typename T = void> T PlayAddSafeAreaSoundForLocalPlayer(uintptr_t safeArea) {
		return ((T (*)(BRGameInfo*, uintptr_t))(Il2CppBase() + 0x191EE24))(this, safeArea);
	}
	template <typename T = void> T AddSparrowArea_Circle(int32_t id, Il2CppVector3 pos, float circleContinuousTime, float targetRadius) {
		return ((T (*)(BRGameInfo*, int32_t, Il2CppVector3, float, float))(Il2CppBase() + 0x191F274))(this, id, pos, circleContinuousTime, targetRadius);
	}
	template <typename T = void> T UpdateSparrowArea_Circle(int32_t id, Il2CppVector3 pos, int32_t projectileID) {
		return ((T (*)(BRGameInfo*, int32_t, Il2CppVector3, int32_t))(Il2CppBase() + 0x191F468))(this, id, pos, projectileID);
	}
	template <typename T = void> T AddUnpiloted_Circle(int32_t id, Il2CppVector3 pos, float radius) {
		return ((T (*)(BRGameInfo*, int32_t, Il2CppVector3, float))(Il2CppBase() + 0x191F690))(this, id, pos, radius);
	}
	template <typename T = void> T UpdateUnpiloted_Circle(int32_t id, Il2CppVector3 pos) {
		return ((T (*)(BRGameInfo*, int32_t, Il2CppVector3))(Il2CppBase() + 0x191F834))(this, id, pos);
	}
	template <typename T = void> T DelSparrowArea(int32_t id) {
		return ((T (*)(BRGameInfo*, int32_t))(Il2CppBase() + 0x191F954))(this, id);
	}
	template <typename T = void> T DelFunctionalArea(int32_t id) {
		return ((T (*)(BRGameInfo*, int32_t))(Il2CppBase() + 0x1908774))(this, id);
	}
	template <typename T = void> T MarkAllAreaChanged() {
		return ((T (*)(BRGameInfo*))(Il2CppBase() + 0x191ED18))(this);
	}
	template <typename T = bool> T SameTeamFromInfo(uintptr_t player1, uintptr_t player2) {
		return ((T (*)(BRGameInfo*, uintptr_t, uintptr_t))(Il2CppBase() + 0x191FA4C))(this, player1, player2);
	}
	template <typename T = bool> T SameTeamFromPawn(uintptr_t pawn1, uintptr_t pawn2) {
		return ((T (*)(BRGameInfo*, uintptr_t, uintptr_t))(Il2CppBase() + 0x191FB74))(this, pawn1, pawn2);
	}
	template <typename T = bool> T SameTeamFromParameters(uint32_t id1, uint32_t id2, uintptr_t camp1, uintptr_t camp2) {
		return ((T (*)(BRGameInfo*, uint32_t, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x191FD60))(this, id1, id2, camp1, camp2);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T get_SoundPlayingDict() {
		return ((T (*)(BRGameInfo*))(Il2CppBase() + 0x191FE60))(this);
	}
	template <typename T = void> T RegisterNewSoundPlayingInfo(uint32_t identifier, Il2CppVector3 pos, float duration, bool isLoopSound, uintptr_t type, uintptr_t soundID, bool isTempory) {
		return ((T (*)(BRGameInfo*, uint32_t, Il2CppVector3, float, bool, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x191FE68))(this, identifier, pos, duration, isLoopSound, type, soundID, isTempory);
	}
	template <typename T = void> T RegisterNewSoundPlayingInfo_1(uint32_t identifier, uint32_t instigatorID, Il2CppVector3 pos, float duration, bool isLoopSound, uintptr_t type, uintptr_t soundID, bool isTempory) {
		return ((T (*)(BRGameInfo*, uint32_t, uint32_t, Il2CppVector3, float, bool, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x19204CC))(this, identifier, instigatorID, pos, duration, isLoopSound, type, soundID, isTempory);
	}
	template <typename T = bool> T CheckDistanceInRange(uint32_t PlayerID, Il2CppVector3 soundPosition, uintptr_t soundID, uintptr_t eSNT) {
		return ((T (*)(BRGameInfo*, uint32_t, Il2CppVector3, uintptr_t, uintptr_t))(Il2CppBase() + 0x19209D8))(this, PlayerID, soundPosition, soundID, eSNT);
	}
	template <typename T = void> T UpdateSoundInfo() {
		return ((T (*)(BRGameInfo*))(Il2CppBase() + 0x192034C))(this);
	}
	template <typename T = void> T ClearTimeoutPlayingInfoDict(Il2CppDictionary<uint32_t, uintptr_t>* idToDict, bool shouldRemoveWhileCountDown) {
		return ((T (*)(BRGameInfo*, Il2CppDictionary<uint32_t, uintptr_t>*, bool))(Il2CppBase() + 0x1920F48))(this, idToDict, shouldRemoveWhileCountDown);
	}
	template <typename T = void> T UpdateSoundList(uintptr_t type, bool shouldRemoveWhileCountDown) {
		return ((T (*)(BRGameInfo*, uintptr_t, bool))(Il2CppBase() + 0x19218FC))(this, type, shouldRemoveWhileCountDown);
	}
	template <typename T = bool> T ShouldShowSoundType(Il2CppString* iSoundName, uint32_t playerID, bool identifierIsPlayerId) {
		return ((T (*)(BRGameInfo*, Il2CppString*, uint32_t, bool))(Il2CppBase() + 0x1922738))(this, iSoundName, playerID, identifierIsPlayerId);
	}
	template <typename T = bool> T CheckShouldShowSoundTypeByPlayerInfo(uintptr_t localOrViewTargetPawn, uintptr_t localOrViewTargetPlayerInfo, uintptr_t playerInfo, uint32_t playerID) {
		return ((T (*)(BRGameInfo*, uintptr_t, uintptr_t, uintptr_t, uint32_t))(Il2CppBase() + 0x1922C38))(this, localOrViewTargetPawn, localOrViewTargetPlayerInfo, playerInfo, playerID);
	}
	template <typename T = void> T RecordTheDurationStaticSoundAndWindowSound(uintptr_t type, uint32_t playerID, float duration) {
		return ((T (*)(BRGameInfo*, uintptr_t, uint32_t, float))(Il2CppBase() + 0x192200C))(this, type, playerID, duration);
	}
	template <typename T = bool> T IsMutuallyExclusiveSoundExist(uintptr_t type, uint32_t playerID) {
		return ((T (*)(BRGameInfo*, uintptr_t, uint32_t))(Il2CppBase() + 0x19225B8))(this, type, playerID);
	}
	template <typename T = void> T NotifySoundPlayed(uint32_t playerID, uintptr_t eSNT, Il2CppString* iSoundName, float fDuration, float fMaxRange, Il2CppVector3 position) {
		return ((T (*)(BRGameInfo*, uint32_t, uintptr_t, Il2CppString*, float, float, Il2CppVector3))(Il2CppBase() + 0x1922F40))(this, playerID, eSNT, iSoundName, fDuration, fMaxRange, position);
	}
	template <typename T = void> T NotifySoundPlayed_1(uint32_t playerID, uint32_t instigatorID, uintptr_t eSNT, Il2CppString* iSoundName, float fDuration, float fMaxRange, Il2CppVector3 position) {
		return ((T (*)(BRGameInfo*, uint32_t, uint32_t, uintptr_t, Il2CppString*, float, float, Il2CppVector3))(Il2CppBase() + 0x1923148))(this, playerID, instigatorID, eSNT, iSoundName, fDuration, fMaxRange, position);
	}
	template <typename T = void> T NotifySoundPlayedFromSoundName(Il2CppString* iSoundName, uint32_t identifier, Il2CppVector3 position, uintptr_t eSNT, bool identifierIsPlayerId) {
		return ((T (*)(BRGameInfo*, Il2CppString*, uint32_t, Il2CppVector3, uintptr_t, bool))(Il2CppBase() + 0x1923364))(this, iSoundName, identifier, position, eSNT, identifierIsPlayerId);
	}
	template <typename T = void> T NotifySoundPlayedFromSoundName_1(Il2CppString* iSoundName, uint32_t identifier, uint32_t instigatorID, Il2CppVector3 position, uintptr_t eSNT, bool identifierIsPlayerId) {
		return ((T (*)(BRGameInfo*, Il2CppString*, uint32_t, uint32_t, Il2CppVector3, uintptr_t, bool))(Il2CppBase() + 0x19235D4))(this, iSoundName, identifier, instigatorID, position, eSNT, identifierIsPlayerId);
	}
	template <typename T = void> T NotifyPawnMoveSoundPlayed(Il2CppString* soundEvent, uint32_t playerID, Il2CppVector3 position) {
		return ((T (*)(BRGameInfo*, Il2CppString*, uint32_t, Il2CppVector3))(Il2CppBase() + 0x1923858))(this, soundEvent, playerID, position);
	}
	template <typename T = void> T NotifyWeaponFireSoundPlayed(Il2CppString* soundEvent, uint32_t playerID, Il2CppVector3 position) {
		return ((T (*)(BRGameInfo*, Il2CppString*, uint32_t, Il2CppVector3))(Il2CppBase() + 0x1923984))(this, soundEvent, playerID, position);
	}
	template <typename T = void> T NotifyVehicleSoundPlayed(Il2CppString* iSoundName, uint32_t playerID, Il2CppVector3 position) {
		return ((T (*)(BRGameInfo*, Il2CppString*, uint32_t, Il2CppVector3))(Il2CppBase() + 0x1923B28))(this, iSoundName, playerID, position);
	}
	template <typename T = void> T NotifyDroneVehicleSoundPlayed(Il2CppString* iSoundName, uint32_t playerID, Il2CppVector3 position) {
		return ((T (*)(BRGameInfo*, Il2CppString*, uint32_t, Il2CppVector3))(Il2CppBase() + 0x1923C54))(this, iSoundName, playerID, position);
	}
	template <typename T = void> T NotifyStaticSoundPlayed(Il2CppString* iSoundName, uint32_t playerID, uint32_t instigatorID, Il2CppVector3 soundPosition) {
		return ((T (*)(BRGameInfo*, Il2CppString*, uint32_t, uint32_t, Il2CppVector3))(Il2CppBase() + 0x1923D80))(this, iSoundName, playerID, instigatorID, soundPosition);
	}
	template <typename T = void> T NotifyWindowStaticSoundPlayed(Il2CppString* iSoundName, uint32_t uid, uint32_t instigatorID, Il2CppVector3 soundPosition) {
		return ((T (*)(BRGameInfo*, Il2CppString*, uint32_t, uint32_t, Il2CppVector3))(Il2CppBase() + 0x1924078))(this, iSoundName, uid, instigatorID, soundPosition);
	}
	template <typename T = void> T NotifyWeaponFireStopSoundPlayed(uint32_t playerID) {
		return ((T (*)(BRGameInfo*, uint32_t))(Il2CppBase() + 0x1924370))(this, playerID);
	}
	template <typename T = void> T AddPlayerMark(uint32_t PlayerID, Il2CppVector3 worldUnshifPos) {
		return ((T (*)(BRGameInfo*, uint32_t, Il2CppVector3))(Il2CppBase() + 0x192458C))(this, PlayerID, worldUnshifPos);
	}
	template <typename T = void> T RemovePlayerMark(uint32_t PlayerID) {
		return ((T (*)(BRGameInfo*, uint32_t))(Il2CppBase() + 0x1924A9C))(this, PlayerID);
	}
	template <typename T = void> T TryGetAllBRMapMark() {
		return ((T (*)(BRGameInfo*))(Il2CppBase() + 0x191BFD8))(this);
	}
	template <typename T = void> T SetBRMapMarks(Il2CppArray<uintptr_t>* mapMarkList) {
		return ((T (*)(BRGameInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x190DC2C))(this, mapMarkList);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(BRGameInfo*, float))(Il2CppBase() + 0x1924DDC))(this, deltaTime);
	}
	template <typename T = void> T AddSparrowStickInfo(uintptr_t item) {
		return ((T (*)(BRGameInfo*, uintptr_t))(Il2CppBase() + 0x1924FF0))(this, item);
	}
	template <typename T = void> T RemoveSparrowStickInfo(int32_t inProjectileID) {
		return ((T (*)(BRGameInfo*, int32_t))(Il2CppBase() + 0x19253B4))(this, inProjectileID);
	}
	template <typename T = void> T OnRoundStart(int32_t inTimeLimit, int32_t inLeftTime) {
		return ((T (*)(BRGameInfo*, int32_t, int32_t))(Il2CppBase() + 0x19255E4))(this, inTimeLimit, inLeftTime);
	}
	template <typename T = void> T OnRoundCountDownOver() {
		return ((T (*)(BRGameInfo*))(Il2CppBase() + 0x19256E4))(this);
	}
	template <typename T = void> T ProcessScoreChanged() {
		return ((T (*)(BRGameInfo*))(Il2CppBase() + 0x19257D0))(this);
	}
	template <typename T = uintptr_t> T CreatePlayerInfo(uint32_t playerID, uint32_t actorID, uintptr_t type, uintptr_t camp, Il2CppString* nickName) {
		return ((T (*)(BRGameInfo*, uint32_t, uint32_t, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1925898))(this, playerID, actorID, type, camp, nickName);
	}
	template <typename T = void> T RemovePlayerInfo(uint32_t playerID) {
		return ((T (*)(BRGameInfo*, uint32_t))(Il2CppBase() + 0x19259C0))(this, playerID);
	}
	template <typename T = bool> T Draw1PCamFirst() {
		return ((T (*)(BRGameInfo*))(Il2CppBase() + 0x1925ABC))(this);
	}
	template <typename T = uintptr_t> T GetSkydivingLeaderInfo() {
		return ((T (*)(BRGameInfo*))(Il2CppBase() + 0x1925B8C))(this);
	}
	template <typename T = void> T AddActiveZombieZone(Il2CppString* zoneName) {
		return ((T (*)(BRGameInfo*, Il2CppString*))(Il2CppBase() + 0x191AF34))(this, zoneName);
	}
	template <typename T = bool> T CheckZombieZone(Il2CppString* zoneName) {
		return ((T (*)(BRGameInfo*, Il2CppString*))(Il2CppBase() + 0x1925E4C))(this, zoneName);
	}
	template <typename T = bool> T NeedFinalKillReplay() {
		return ((T (*)(BRGameInfo*))(Il2CppBase() + 0x1926150))(this);
	}
	template <typename T = void> static T SyncGameInfoPropertym__0() {
		return ((T (*)(void *))(Il2CppBase() + 0x19262D0))(0);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRGameInfo*))(Il2CppBase() + 0x1926370))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(BRGameInfo*))(Il2CppBase() + 0x1926378))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsBRGame() {
		return ((T (*)(BRGameInfo*))(Il2CppBase() + 0x1926380))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsCanTriggerKnife() {
		return ((T (*)(BRGameInfo*))(Il2CppBase() + 0x1926388))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsShowKnife() {
		return ((T (*)(BRGameInfo*))(Il2CppBase() + 0x1926390))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsPreparationStageBanFire() {
		return ((T (*)(BRGameInfo*))(Il2CppBase() + 0x1926398))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SyncGameInfoProperty(uint32_t P0, uint32_t P1, uintptr_t P2) {
		return ((T (*)(BRGameInfo*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x19263A0))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_SyncPlayerInfoProperty(uintptr_t P0, uint32_t P1, uint32_t P2, uintptr_t P3) {
		return ((T (*)(BRGameInfo*, uintptr_t, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x19263C0))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T xLuaBaseProxy_SyncSceneActorInfoProperty(uintptr_t P0, uint32_t P1, uint32_t P2, uintptr_t P3) {
		return ((T (*)(BRGameInfo*, uintptr_t, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x19263E4))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T xLuaBaseProxy_OnTeamInfoChanged(uint32_t P0, uint32_t P1, uint32_t P2) {
		return ((T (*)(BRGameInfo*, uint32_t, uint32_t, uint32_t))(Il2CppBase() + 0x1926408))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_On3PWeaponChanged(uint32_t P0, int32_t P1, int32_t P2) {
		return ((T (*)(BRGameInfo*, uint32_t, int32_t, int32_t))(Il2CppBase() + 0x1926428))(this, P0, P1, P2);
	}
	template <typename T = bool> T xLuaBaseProxy_SameTeamFromInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(BRGameInfo*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1926448))(this, P0, P1);
	}
	template <typename T = bool> T xLuaBaseProxy_SameTeamFromPawn(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(BRGameInfo*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1926450))(this, P0, P1);
	}
	template <typename T = bool> T xLuaBaseProxy_SameTeamFromParameters(uint32_t P0, uint32_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(BRGameInfo*, uint32_t, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1926458))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRGameInfo*, float))(Il2CppBase() + 0x192647C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_AddSparrowStickInfo(uintptr_t P0) {
		return ((T (*)(BRGameInfo*, uintptr_t))(Il2CppBase() + 0x1926484))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_RemoveSparrowStickInfo(int32_t P0) {
		return ((T (*)(BRGameInfo*, int32_t))(Il2CppBase() + 0x192648C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundStart(int32_t P0, int32_t P1) {
		return ((T (*)(BRGameInfo*, int32_t, int32_t))(Il2CppBase() + 0x1926494))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundCountDownOver() {
		return ((T (*)(BRGameInfo*))(Il2CppBase() + 0x192649C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ProcessScoreChanged() {
		return ((T (*)(BRGameInfo*))(Il2CppBase() + 0x19264A4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_CreatePlayerInfo(uint32_t P0, uint32_t P1, uintptr_t P2, uintptr_t P3, Il2CppString* P4) {
		return ((T (*)(BRGameInfo*, uint32_t, uint32_t, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x19264AC))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T xLuaBaseProxy_RemovePlayerInfo(uint32_t P0) {
		return ((T (*)(BRGameInfo*, uint32_t))(Il2CppBase() + 0x19264D8))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_Draw1PCamFirst() {
		return ((T (*)(BRGameInfo*))(Il2CppBase() + 0x19264E0))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_NeedFinalKillReplay() {
		return ((T (*)(BRGameInfo*))(Il2CppBase() + 0x19264E8))(this);
	}

};

}
