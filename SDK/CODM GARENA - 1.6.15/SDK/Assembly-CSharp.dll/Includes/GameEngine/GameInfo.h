#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class GameInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "GameInfo"));
	}

	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& PlayerInfoDic() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& AttackableTargetInfoDic() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& TeamMatePlayerInfos() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_GameModeCategory() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& m_ModeName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_MaxPlayerCount() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_NetMode() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_GameMode() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& m_ModeAcronym() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& m_IsMatchOver() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_MatchResult() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_MatchEndedReson() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& m_FriendsHurt() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_GameState() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int64_t> T& m_MatchStartTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& m_RoundEndTime() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& StoreInputConfigValueWhenStartGame() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& m_AllowChangeInputConfig() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& IsWeaponPartCombine() {
		return *(T*)((uintptr_t)this + 0x51);
	}
	template <typename T = bool> T& m_CanPickUpWeapon() {
		return *(T*)((uintptr_t)this + 0x52);
	}
	template <typename T = Il2CppVector3> T& m_LastHurtPos() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uint32_t> T& m_StandAloneActorId() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& WeaponAttchmentFireLogState() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& WeaponFireSoundLogicLogSwitch() {
		return *(T*)((uintptr_t)this + 0x65);
	}
	template <typename T = bool> T& DamageInfoLogSwitch() {
		return *(T*)((uintptr_t)this + 0x66);
	}
	template <typename T = bool> T& TacticalMaterialInfoLogSwitch() {
		return *(T*)((uintptr_t)this + 0x67);
	}
	template <typename T = bool> T& WeaponImpactEffectContinuousShow() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& ShowClosestCanPickGrenadeLog() {
		return *(T*)((uintptr_t)this + 0x69);
	}
	template <typename T = bool> T& bDuringRoundStart() {
		return *(T*)((uintptr_t)this + 0x6A);
	}
	template <typename T = bool> T& IsNeedSlowServerPkg() {
		return *(T*)((uintptr_t)this + 0x6B);
	}
	template <typename T = float> T& BanClickTime() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppDictionary<uint32_t, uint32_t>*> T& m_OtherPlayerPropertySyncCountMap() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppDictionary<uint32_t, uint32_t>*> T& m_SelfPlayerPropertySyncCountMap() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppDictionary<uint32_t, uint32_t>*> T& m_GamePropertySyncCountMap() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& m_IsLeaderDataReady() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Modifiers() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& m_TimeLimit() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& m_LeftTime() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& IsMidWay() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = float> T& RealLeftTime() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& LeftTimeUpdateTime() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& m_RoundNum() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& m_RemainAliveNum() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = int32_t> T& m_TotalJointNum() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& m_CurrentRoundCount() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = int32_t> T& m_TargetScore() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& m_GuarderScore() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = int32_t> T& m_TraitorScore() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& m_GuardSurvivorCount() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = int32_t> T& m_TraitorSurvivorCount() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& m_IsDoaTagEventActive() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = bool> T& m_IsMineTagEventActive() {
		return *(T*)((uintptr_t)this + 0xBD);
	}
	template <typename T = Il2CppDictionary<uint32_t, uint32_t>*> T& m_UAVActorInfoList() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppDictionary<uint32_t, uint32_t>*> T& m_CounterUAVActorInfoList() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = bool> T& m_ShowUAVPlayHighLightEffect() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& m_TacticalGPS() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& SparrowStickInfo() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& SparrowStickInfoStat() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& m_PrepareInfo() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& mPawnStateSwichContorl() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetStandAloneActorId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStartMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnExitMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEndMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SameTeamFromInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SameTeamFromPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SameTeamFromPlayerId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SameTeamFromParameters() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateAttackableTargetInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateLuaActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveLuaActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreatePlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerInfosExceptClientFakePawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerOBColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerOBColor4F() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveAttackableTargetInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemovePlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveAllAttackableInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAttackableTargetInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTeammatePlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVehicleInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetActorID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsUseMatchObserverFOV() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMPMatchObserverFOV() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsStandalone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanTriggerKnife() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowKnife() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInAssistAimRotateTimeAiming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPVEGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPVPGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSDGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSinglePVPGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBRGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBRTeamGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsTutorialGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBRTrainingGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMPPVEGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMPPropHuntGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInfectGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBanClickTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateUIBanClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBanClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsUIBanClickType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsUIBanClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StoreGameResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckEndGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncGameInfoProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OutputStats() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessUINT8VAR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncPlayerInfoProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncBitState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTeamInfoChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On3PWeaponChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OBRefreshTeamMateInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyTeamMateNumberChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyPlayerInfoChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SyncPlayerInfoProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_SyncPlayerInfoProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_SyncPlayerInfoProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncPlayerInfoProperty_DeadReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrevApplyDamage_InstantHit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SupportSkillButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RespawnAfterDead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInRoundPrepare() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDefaultStartSpot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitModifiers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ModifiersExists() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSceneActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSceneActorByClientUID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncSceneActorInfoProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PVPPlaySound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddSparrowStickInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveSparrowStickInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InsertSparrowStickInfoStat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRadarCompAssetIDList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SupportWeaponForProjectile1PView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SupportWeaponForProjectileTrackEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateProjectileTrackEffectPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopUpdateProjectileTrackEffectPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildMatchPrepareInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRoundElapsedTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessScoreChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessPawnNumberChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x164);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundCountDownOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x16C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x174);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayRoundEndMusic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundTimeChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x17C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncTeamUAV() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrepareModeInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x184);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPreparationStageBanFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInGameReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInGameFinalKillReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGameReplayInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x194);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedFinalKillReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Draw1PCamFirst() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x19C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearGameInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetModeText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetModeName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTeammateDiedIndicator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}

	template <typename T = bool> T get_ShouldDisableAimAssistance() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36CE17C))(this);
	}
	template <typename T = Il2CppString*> T get_ModeName() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36CE184))(this);
	}
	template <typename T = void> T set_ModeName(Il2CppString* value) {
		return ((T (*)(GameInfo*, Il2CppString*))(Il2CppBase() + 0x36CE18C))(this, value);
	}
	template <typename T = int32_t> T get_MapCapacity() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36CE194))(this);
	}
	template <typename T = void> T set_MapCapacity(int32_t value) {
		return ((T (*)(GameInfo*, int32_t))(Il2CppBase() + 0x36CE19C))(this, value);
	}
	template <typename T = uintptr_t> T get_GameModeCategory() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36CE1A4))(this);
	}
	template <typename T = void> T set_GameModeCategory(uintptr_t value) {
		return ((T (*)(GameInfo*, uintptr_t))(Il2CppBase() + 0x36CE1AC))(this, value);
	}
	template <typename T = uintptr_t> T get_NetMode() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36CE1B4))(this);
	}
	template <typename T = void> T set_NetMode(uintptr_t value) {
		return ((T (*)(GameInfo*, uintptr_t))(Il2CppBase() + 0x36CE1BC))(this, value);
	}
	template <typename T = bool> T get_CanPauseGame() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36CE1C4))(this);
	}
	template <typename T = bool> T get_ShouldLowPerfDeviceKeepOnlyLOD2() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36CE1DC))(this);
	}
	template <typename T = uintptr_t> T get_GameMode() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36CE1E4))(this);
	}
	template <typename T = void> T set_GameMode(uintptr_t value) {
		return ((T (*)(GameInfo*, uintptr_t))(Il2CppBase() + 0x36CE1EC))(this, value);
	}
	template <typename T = uintptr_t> T get_TeammateType() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36CE328))(this);
	}
	template <typename T = Il2CppString*> T get_ModeAcronym() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36CE330))(this);
	}
	template <typename T = bool> T get_IsMatchOver() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36CE338))(this);
	}
	template <typename T = uintptr_t> T get_MatchResult() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36CE340))(this);
	}
	template <typename T = void> T set_MatchResult(uintptr_t value) {
		return ((T (*)(GameInfo*, uintptr_t))(Il2CppBase() + 0x36CE348))(this, value);
	}
	template <typename T = bool> T get_ShouldSaveGameResult() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36CE350))(this);
	}
	template <typename T = uintptr_t> T get_MatchEndedReason() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36CE358))(this);
	}
	template <typename T = void> T set_MatchEndedReason(uintptr_t value) {
		return ((T (*)(GameInfo*, uintptr_t))(Il2CppBase() + 0x36CE360))(this, value);
	}
	template <typename T = bool> T get_FriendsHurt() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36CE368))(this);
	}
	template <typename T = void> T set_FriendsHurt(bool value) {
		return ((T (*)(GameInfo*, bool))(Il2CppBase() + 0x36CE370))(this, value);
	}
	template <typename T = uintptr_t> T get_GameState() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36CE378))(this);
	}
	template <typename T = void> T set_GameState(uintptr_t value) {
		return ((T (*)(GameInfo*, uintptr_t))(Il2CppBase() + 0x36CE380))(this, value);
	}
	template <typename T = int64_t> T get_MatchStartTime() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36CE388))(this);
	}
	template <typename T = void> T set_MatchStartTime(int64_t value) {
		return ((T (*)(GameInfo*, int64_t))(Il2CppBase() + 0x36CE390))(this, value);
	}
	template <typename T = float> T get_RoundEndTime() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36CE3A0))(this);
	}
	template <typename T = void> T set_RoundEndTime(float value) {
		return ((T (*)(GameInfo*, float))(Il2CppBase() + 0x36CE3A8))(this, value);
	}
	template <typename T = int32_t> T get_UntilMatchStartTime() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36CE3B0))(this);
	}
	template <typename T = bool> T get_AllowChangeInputConfig() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36CE4C8))(this);
	}
	template <typename T = bool> T get_CanThrowWeapon() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36CE4D0))(this);
	}
	template <typename T = bool> T get_OnlyShowMainWeapon() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36CE4D8))(this);
	}
	template <typename T = bool> T get_SpinerWithBulletTime() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36CE4E0))(this);
	}
	template <typename T = bool> T get_SniperFOVChange() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36CE4E8))(this);
	}
	template <typename T = void> T set_SniperFOVChange(bool value) {
		return ((T (*)(GameInfo*, bool))(Il2CppBase() + 0x36CE4F0))(this, value);
	}
	template <typename T = bool> T get_BeginFramerateMonitorOnGameStart() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36CE4F4))(this);
	}
	template <typename T = bool> T get_CanPickUpWeapon() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36CE4FC))(this);
	}
	template <typename T = void> T set_CanPickUpWeapon(bool value) {
		return ((T (*)(GameInfo*, bool))(Il2CppBase() + 0x36CE504))(this, value);
	}
	template <typename T = bool> T get_CanAutoPickUpWeapon() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36CE50C))(this);
	}
	template <typename T = bool> T get_CanUseULTSkill() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36CE514))(this);
	}
	template <typename T = bool> T get_IsShowPvpLoadout() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36CE51C))(this);
	}
	template <typename T = bool> T get_IsShowPvpStreak() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36CE620))(this);
	}
	template <typename T = uintptr_t> T get_PvpWeaponViewType() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36CE628))(this);
	}
	template <typename T = bool> T get_IsUseMlkUAV() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36CE630))(this);
	}
	template <typename T = bool> T get_IsSingleWeapon() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36CE638))(this);
	}
	template <typename T = Il2CppVector3> T get_LastHurtPos() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36CE674))(this);
	}
	template <typename T = void> T set_LastHurtPos(Il2CppVector3 value) {
		return ((T (*)(GameInfo*, Il2CppVector3))(Il2CppBase() + 0x36CE688))(this, value);
	}
	template <typename T = uint32_t> T GetStandAloneActorId() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36CE694))(this);
	}
	template <typename T = bool> T get_ShouldMedicalStationBoxUseDrone() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36CE73C))(this);
	}
	template <typename T = bool> T get_CanGrenadeReload() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36CE744))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36CE74C))(this);
	}
	template <typename T = void> T OnStartMatch() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36CE8A0))(this);
	}
	template <typename T = void> T OnExitMatch() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36CEA44))(this);
	}
	template <typename T = void> T OnEndMatch() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36CEB40))(this);
	}
	template <typename T = bool> T SameTeamFromInfo(uintptr_t player1, uintptr_t player2) {
		return ((T (*)(GameInfo*, uintptr_t, uintptr_t))(Il2CppBase() + 0x36CEBD8))(this, player1, player2);
	}
	template <typename T = bool> T SameTeamFromPawn(uintptr_t pawn1, uintptr_t pawn2) {
		return ((T (*)(GameInfo*, uintptr_t, uintptr_t))(Il2CppBase() + 0x36CECDC))(this, pawn1, pawn2);
	}
	template <typename T = bool> T SameTeamFromPlayerId(uint32_t playerId1, uint32_t playerId2) {
		return ((T (*)(GameInfo*, uint32_t, uint32_t))(Il2CppBase() + 0x36CEE98))(this, playerId1, playerId2);
	}
	template <typename T = bool> T SameTeamFromParameters(uint32_t id1, uint32_t id2, uintptr_t camp1, uintptr_t camp2) {
		return ((T (*)(GameInfo*, uint32_t, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x36CF090))(this, id1, id2, camp1, camp2);
	}
	template <typename T = uintptr_t> T CreateAttackableTargetInfo(uint32_t actorID, uintptr_t type) {
		return ((T (*)(GameInfo*, uint32_t, uintptr_t))(Il2CppBase() + 0x36CF160))(this, actorID, type);
	}
	template <typename T = void> T CreateLuaActor(uintptr_t luaActor, uint32_t actorID) {
		return ((T (*)(GameInfo*, uintptr_t, uint32_t))(Il2CppBase() + 0x36CF68C))(this, luaActor, actorID);
	}
	template <typename T = void> T RemoveLuaActor(uint32_t actorId) {
		return ((T (*)(GameInfo*, uint32_t))(Il2CppBase() + 0x36CF740))(this, actorId);
	}
	template <typename T = uintptr_t> T CreatePlayerInfo(uint32_t playerID, uint32_t actorID, uintptr_t type, uintptr_t camp, Il2CppString* nickName) {
		return ((T (*)(GameInfo*, uint32_t, uint32_t, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x36CF7E0))(this, playerID, actorID, type, camp, nickName);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetPlayerInfosExceptClientFakePawn() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36CFBB0))(this);
	}
	template <typename T = uintptr_t> T GetPlayerOBColor(uint32_t playerID) {
		return ((T (*)(GameInfo*, uint32_t))(Il2CppBase() + 0x36CFE78))(this, playerID);
	}
	template <typename T = uintptr_t> T GetPlayerOBColor4F(uint32_t playerID) {
		return ((T (*)(GameInfo*, uint32_t))(Il2CppBase() + 0x36CFF78))(this, playerID);
	}
	template <typename T = int32_t> T GetPlayerIndex(uint32_t playerID) {
		return ((T (*)(GameInfo*, uint32_t))(Il2CppBase() + 0x36D00D8))(this, playerID);
	}
	template <typename T = int32_t> T GetPlayerCount(uintptr_t targetCamp, bool aliveCount) {
		return ((T (*)(GameInfo*, uintptr_t, bool))(Il2CppBase() + 0x36D0198))(this, targetCamp, aliveCount);
	}
	template <typename T = void> T RemoveAttackableTargetInfo(uint32_t ActorId) {
		return ((T (*)(GameInfo*, uint32_t))(Il2CppBase() + 0x36D0428))(this, ActorId);
	}
	template <typename T = void> T RemovePlayerInfo(uint32_t playerID) {
		return ((T (*)(GameInfo*, uint32_t))(Il2CppBase() + 0x36D0754))(this, playerID);
	}
	template <typename T = void> T RemoveAllAttackableInfo() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x1E7F198))(this);
	}
	template <typename T = uintptr_t> T GetAttackableTargetInfo(uint32_t ActorId) {
		return ((T (*)(GameInfo*, uint32_t))(Il2CppBase() + 0x36CF584))(this, ActorId);
	}
	template <typename T = uintptr_t> T GetPlayerInfo(uint32_t playerID) {
		return ((T (*)(GameInfo*, uint32_t))(Il2CppBase() + 0x36CEF88))(this, playerID);
	}
	template <typename T = uintptr_t> T GetTeammatePlayerInfo(uint32_t playerID) {
		return ((T (*)(GameInfo*, uint32_t))(Il2CppBase() + 0x36D0A64))(this, playerID);
	}
	template <typename T = uintptr_t> T GetVehicleInfo(uint32_t ActorId) {
		return ((T (*)(GameInfo*, uint32_t))(Il2CppBase() + 0x36D0B6C))(this, ActorId);
	}
	template <typename T = uint32_t> T GetActorID(uint32_t playerID) {
		return ((T (*)(GameInfo*, uint32_t))(Il2CppBase() + 0x36D0C74))(this, playerID);
	}
	template <typename T = bool> T IsUseMatchObserverFOV() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36D0D94))(this);
	}
	template <typename T = float> T GetMPMatchObserverFOV() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36D0F48))(this);
	}
	template <typename T = bool> T IsStandalone() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36D1178))(this);
	}
	template <typename T = bool> T IsCanTriggerKnife() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36D1224))(this);
	}
	template <typename T = bool> T IsShowKnife() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36D12C4))(this);
	}
	template <typename T = bool> T IsInAssistAimRotateTimeAiming() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36D1364))(this);
	}
	template <typename T = bool> T IsPVEGame() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36D1404))(this);
	}
	template <typename T = bool> T IsPVPGame() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36D14A4))(this);
	}
	template <typename T = bool> T IsSDGame() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36D1544))(this);
	}
	template <typename T = bool> T IsSinglePVPGame() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36D1600))(this);
	}
	template <typename T = bool> T IsBRGame() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36D16A0))(this);
	}
	template <typename T = bool> T IsBRTeamGame() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36D1740))(this);
	}
	template <typename T = bool> T IsTutorialGame() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36CE578))(this);
	}
	template <typename T = bool> T IsBRTrainingGame() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36D17E0))(this);
	}
	template <typename T = bool> T IsMPPVEGame() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36D1880))(this);
	}
	template <typename T = bool> T IsMPPropHuntGame() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36D1920))(this);
	}
	template <typename T = bool> T IsInfectGame() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36D19C0))(this);
	}
	template <typename T = void> T PreTick(float deltaTime) {
		return ((T (*)(GameInfo*, float))(Il2CppBase() + 0x36D1A60))(this, deltaTime);
	}
	template <typename T = void> T SetBanClickTime(float time) {
		return ((T (*)(GameInfo*, float))(Il2CppBase() + 0x36D1B00))(this, time);
	}
	template <typename T = void> T UpdateUIBanClick(float dt) {
		return ((T (*)(GameInfo*, float))(Il2CppBase() + 0x36D1BE8))(this, dt);
	}
	template <typename T = bool> T IsBanClick() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36D1CA4))(this);
	}
	template <typename T = bool> T IsUIBanClickType(uintptr_t currentType, uintptr_t banType) {
		return ((T (*)(GameInfo*, uintptr_t, uintptr_t))(Il2CppBase() + 0x36D1D54))(this, currentType, banType);
	}
	template <typename T = bool> T IsUIBanClick(uintptr_t uiBanClickType, uintptr_t pawnSwitchState, bool isLog) {
		return ((T (*)(GameInfo*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x36D1E28))(this, uiBanClickType, pawnSwitchState, isLog);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(GameInfo*, float))(Il2CppBase() + 0x36D2454))(this, deltaTime);
	}
	template <typename T = void> T StoreGameResult(uintptr_t result, uintptr_t reason) {
		return ((T (*)(GameInfo*, uintptr_t, uintptr_t))(Il2CppBase() + 0x36D2598))(this, result, reason);
	}
	template <typename T = bool> T CheckEndGame() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36D26A8))(this);
	}
	template <typename T = void> T SyncGameInfoProperty(uint32_t propertyID, uint32_t value, uintptr_t varType) {
		return ((T (*)(GameInfo*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x36D2750))(this, propertyID, value, varType);
	}
	template <typename T = void> T OutputStats() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36D3040))(this);
	}
	template <typename T = void> T ProcessUINT8VAR(uintptr_t playerInfo, uint32_t propertyID, uint32_t value, uintptr_t playerInfoChanged, uintptr_t varType) {
		return ((T (*)(GameInfo*, uintptr_t, uint32_t, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x36D3B1C))(this, playerInfo, propertyID, value, playerInfoChanged, varType);
	}
	template <typename T = void> T SyncPlayerInfoProperty(uintptr_t playerInfo, uint32_t propertyID, uint32_t value, uintptr_t varType) {
		return ((T (*)(GameInfo*, uintptr_t, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x36D5030))(this, playerInfo, propertyID, value, varType);
	}
	template <typename T = void> T SyncBitState(uintptr_t info, uint32_t value) {
		return ((T (*)(GameInfo*, uintptr_t, uint32_t))(Il2CppBase() + 0x36D755C))(this, info, value);
	}
	template <typename T = void> T OnTeamInfoChanged(uint32_t playerID, uint32_t teamID, uint32_t teamSeatID) {
		return ((T (*)(GameInfo*, uint32_t, uint32_t, uint32_t))(Il2CppBase() + 0x36D763C))(this, playerID, teamID, teamSeatID);
	}
	template <typename T = void> T On3PWeaponChanged(uint32_t playerID, int32_t weaponID, int32_t actorID) {
		return ((T (*)(GameInfo*, uint32_t, int32_t, int32_t))(Il2CppBase() + 0x36D76F8))(this, playerID, weaponID, actorID);
	}
	template <typename T = void> T OBRefreshTeamMateInfo(uint32_t viewTargetTeamId) {
		return ((T (*)(GameInfo*, uint32_t))(Il2CppBase() + 0x36D795C))(this, viewTargetTeamId);
	}
	template <typename T = void> T NotifyTeamMateNumberChange(uintptr_t inPlayerInfo, uint32_t teamId) {
		return ((T (*)(GameInfo*, uintptr_t, uint32_t))(Il2CppBase() + 0x36D6A08))(this, inPlayerInfo, teamId);
	}
	template <typename T = void> T NotifyPlayerInfoChanged(uintptr_t playerInfo, uint32_t propertyID) {
		return ((T (*)(GameInfo*, uintptr_t, uint32_t))(Il2CppBase() + 0x36D7E2C))(this, playerInfo, propertyID);
	}
	template <typename T = void> T SyncPlayerInfoProperty_1(uint32_t PlayerID, Il2CppArray<uintptr_t>* propertyList, int32_t count, uintptr_t varType) {
		return ((T (*)(GameInfo*, uint32_t, Il2CppArray<uintptr_t>*, int32_t, uintptr_t))(Il2CppBase() + 0x36D8050))(this, PlayerID, propertyList, count, varType);
	}
	template <typename T = void> T SyncPlayerInfoProperty_2(uint32_t PlayerID, Il2CppArray<uintptr_t>* propertyList, int32_t count, uintptr_t varType) {
		return ((T (*)(GameInfo*, uint32_t, Il2CppArray<uintptr_t>*, int32_t, uintptr_t))(Il2CppBase() + 0x36D8428))(this, PlayerID, propertyList, count, varType);
	}
	template <typename T = void> T SyncPlayerInfoProperty_3(uint32_t PlayerID, Il2CppArray<uintptr_t>* propertyList, int32_t count, uintptr_t varType) {
		return ((T (*)(GameInfo*, uint32_t, Il2CppArray<uintptr_t>*, int32_t, uintptr_t))(Il2CppBase() + 0x36D86A0))(this, PlayerID, propertyList, count, varType);
	}
	template <typename T = void> T SyncPlayerInfoProperty_DeadReplay(uint32_t PlayerID, Il2CppArray<uintptr_t>* propertyList, int32_t count) {
		return ((T (*)(GameInfo*, uint32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x36D893C))(this, PlayerID, propertyList, count);
	}
	template <typename T = bool> T PrevApplyDamage_InstantHit(uintptr_t inWeapon, Il2CppList<uintptr_t>* inDamageInfo, Il2CppList<uintptr_t>* inImpactInfo) {
		return ((T (*)(GameInfo*, uintptr_t, Il2CppList<uintptr_t>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x36D89F8))(this, inWeapon, inDamageInfo, inImpactInfo);
	}
	template <typename T = bool> T SupportSkillButton(uintptr_t skillType) {
		return ((T (*)(GameInfo*, uintptr_t))(Il2CppBase() + 0x36D8AC0))(this, skillType);
	}
	template <typename T = bool> T get_ShowProjectile1PView() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36D8B68))(this);
	}
	template <typename T = bool> T RespawnAfterDead() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36D8B70))(this);
	}
	template <typename T = bool> T IsInRoundPrepare() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36D8C10))(this);
	}
	template <typename T = void> T GetDefaultStartSpot(uintptr_t pos, uintptr_t rot) {
		return ((T (*)(GameInfo*, uintptr_t, uintptr_t))(Il2CppBase() + 0x36D8F20))(this, pos, rot);
	}
	template <typename T = bool> T get_InfiniteCarriedAmmo() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36D9018))(this);
	}
	template <typename T = bool> T get_BloodEffectWithoutRestoreHP() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36D9020))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Modifiers() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36D9028))(this);
	}
	template <typename T = void> T set_Modifiers(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(GameInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x36D9030))(this, value);
	}
	template <typename T = void> T InitModifiers(Il2CppArray<uintptr_t>* modifiers) {
		return ((T (*)(GameInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x36D9038))(this, modifiers);
	}
	template <typename T = bool> T ModifiersExists(uintptr_t modifier) {
		return ((T (*)(GameInfo*, uintptr_t))(Il2CppBase() + 0x36D9160))(this, modifier);
	}
	template <typename T = uintptr_t> T GetSceneActor(uint32_t actorId) {
		return ((T (*)(GameInfo*, uint32_t))(Il2CppBase() + 0x36D82C8))(this, actorId);
	}
	template <typename T = uintptr_t> T GetSceneActorByClientUID(uint32_t uid) {
		return ((T (*)(GameInfo*, uint32_t))(Il2CppBase() + 0x36D923C))(this, uid);
	}
	template <typename T = void> T SyncSceneActorInfoProperty(uintptr_t sceneActorInfo, uint32_t propertyID, uint32_t value, uintptr_t varType) {
		return ((T (*)(GameInfo*, uintptr_t, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x36D94C0))(this, sceneActorInfo, propertyID, value, varType);
	}
	template <typename T = void> T PVPPlaySound(Il2CppString* soundEvent, bool bStartPaused, int32_t soundType) {
		return ((T (*)(GameInfo*, Il2CppString*, bool, int32_t))(Il2CppBase() + 0x36D95B0))(this, soundEvent, bStartPaused, soundType);
	}
	template <typename T = int32_t> T get_TimeLimit() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36D9714))(this);
	}
	template <typename T = void> T set_TimeLimit(int32_t value) {
		return ((T (*)(GameInfo*, int32_t))(Il2CppBase() + 0x36D2C10))(this, value);
	}
	template <typename T = int32_t> T get_LeftTime() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36D971C))(this);
	}
	template <typename T = void> T set_LeftTime(int32_t value) {
		return ((T (*)(GameInfo*, int32_t))(Il2CppBase() + 0x36D2C24))(this, value);
	}
	template <typename T = int32_t> T get_RoundNum() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36D9724))(this);
	}
	template <typename T = void> T set_RoundNum(int32_t value) {
		return ((T (*)(GameInfo*, int32_t))(Il2CppBase() + 0x36D2ED0))(this, value);
	}
	template <typename T = int32_t> T get_RemainAliveNum() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36D972C))(this);
	}
	template <typename T = void> T set_RemainAliveNum(int32_t value) {
		return ((T (*)(GameInfo*, int32_t))(Il2CppBase() + 0x36D2ED8))(this, value);
	}
	template <typename T = int32_t> T get_TotalJointNum() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36D9734))(this);
	}
	template <typename T = void> T set_TotalJointNum(int32_t value) {
		return ((T (*)(GameInfo*, int32_t))(Il2CppBase() + 0x36D2EE0))(this, value);
	}
	template <typename T = int32_t> T get_CurrentRoundCount() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36D973C))(this);
	}
	template <typename T = void> T set_CurrentRoundCount(int32_t value) {
		return ((T (*)(GameInfo*, int32_t))(Il2CppBase() + 0x36D9744))(this, value);
	}
	template <typename T = int32_t> T get_TargetScore() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36D974C))(this);
	}
	template <typename T = void> T set_TargetScore(int32_t value) {
		return ((T (*)(GameInfo*, int32_t))(Il2CppBase() + 0x36D2C68))(this, value);
	}
	template <typename T = int32_t> T get_GuarderScore() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36D9754))(this);
	}
	template <typename T = void> T set_GuarderScore(int32_t value) {
		return ((T (*)(GameInfo*, int32_t))(Il2CppBase() + 0x36D2D18))(this, value);
	}
	template <typename T = int32_t> T get_TraitorScore() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36D975C))(this);
	}
	template <typename T = void> T set_TraitorScore(int32_t value) {
		return ((T (*)(GameInfo*, int32_t))(Il2CppBase() + 0x36D2DDC))(this, value);
	}
	template <typename T = int32_t> T get_GuardSurvivorCount() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36D9764))(this);
	}
	template <typename T = void> T set_GuardSurvivorCount(int32_t value) {
		return ((T (*)(GameInfo*, int32_t))(Il2CppBase() + 0x36D2EA0))(this, value);
	}
	template <typename T = int32_t> T get_TraitorSurvivorCount() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36D976C))(this);
	}
	template <typename T = void> T set_TraitorSurvivorCount(int32_t value) {
		return ((T (*)(GameInfo*, int32_t))(Il2CppBase() + 0x36D2EB8))(this, value);
	}
	template <typename T = bool> T get_IsDoaTagEventActive() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36D9774))(this);
	}
	template <typename T = void> T set_IsDoaTagEventActive(bool value) {
		return ((T (*)(GameInfo*, bool))(Il2CppBase() + 0x36D2EE8))(this, value);
	}
	template <typename T = bool> T get_IsMineTagEventActive() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36D977C))(this);
	}
	template <typename T = void> T set_IsMineTagEventActive(bool value) {
		return ((T (*)(GameInfo*, bool))(Il2CppBase() + 0x36D9784))(this, value);
	}
	template <typename T = bool> T get_ShowTeammateOnRadar() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36D98DC))(this);
	}
	template <typename T = bool> T get_ShowEnemyOnRadar() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36D98E4))(this);
	}
	template <typename T = Il2CppDictionary<uint32_t, uint32_t>*> T get_UAVActorInfoList() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36D98F4))(this);
	}
	template <typename T = bool> T get_UAVEnabled() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36D98FC))(this);
	}
	template <typename T = Il2CppDictionary<uint32_t, uint32_t>*> T get_CounterUAVActorInfoList() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36D9E1C))(this);
	}
	template <typename T = bool> T get_CounterUAVEnabled() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36D9E24))(this);
	}
	template <typename T = bool> T get_ShowUAVPlayHighLightEffect() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36D9ECC))(this);
	}
	template <typename T = void> T set_ShowUAVPlayHighLightEffect(bool value) {
		return ((T (*)(GameInfo*, bool))(Il2CppBase() + 0x36D9ED4))(this, value);
	}
	template <typename T = uintptr_t> T get_TacticalGPS() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36D9EDC))(this);
	}
	template <typename T = void> T AddSparrowStickInfo(uintptr_t item) {
		return ((T (*)(GameInfo*, uintptr_t))(Il2CppBase() + 0x36DA030))(this, item);
	}
	template <typename T = void> T RemoveSparrowStickInfo(int32_t inProjectileID) {
		return ((T (*)(GameInfo*, int32_t))(Il2CppBase() + 0x36DA124))(this, inProjectileID);
	}
	template <typename T = void> T InsertSparrowStickInfoStat(uintptr_t inItem) {
		return ((T (*)(GameInfo*, uintptr_t))(Il2CppBase() + 0x36DA35C))(this, inItem);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetRadarCompAssetIDList() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36DA798))(this);
	}
	template <typename T = uintptr_t> T get_PrepareInfo() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36DA838))(this);
	}
	template <typename T = uintptr_t> T get_PawnStateContorl() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36DA84C))(this);
	}
	template <typename T = bool> T SupportWeaponForProjectile1PView(uintptr_t weapon) {
		return ((T (*)(GameInfo*, uintptr_t))(Il2CppBase() + 0x36DA8EC))(this, weapon);
	}
	template <typename T = bool> T get_ShowProjectileGlowEffect() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36DA994))(this);
	}
	template <typename T = bool> T get_ShowProjectileTrackEffect() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36DA99C))(this);
	}
	template <typename T = bool> T get_ShouldPlayCameraShake() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36DA9A4))(this);
	}
	template <typename T = bool> T SupportWeaponForProjectileTrackEffect(uintptr_t weapon) {
		return ((T (*)(GameInfo*, uintptr_t))(Il2CppBase() + 0x36DA9AC))(this, weapon);
	}
	template <typename T = void> T UpdateProjectileTrackEffectPosition(Il2CppVector3 pos) {
		return ((T (*)(GameInfo*, Il2CppVector3))(Il2CppBase() + 0x36DAA54))(this, pos);
	}
	template <typename T = void> T StopUpdateProjectileTrackEffectPosition() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36DAB10))(this);
	}
	template <typename T = void> T BuildMatchPrepareInfo(float prepareTime, float serverTime, bool isHalfwayJoin) {
		return ((T (*)(GameInfo*, float, float, bool))(Il2CppBase() + 0x36DABA8))(this, prepareTime, serverTime, isHalfwayJoin);
	}
	template <typename T = float> T GetRoundElapsedTime(bool inculdePrepare) {
		return ((T (*)(GameInfo*, bool))(Il2CppBase() + 0x36DAC80))(this, inculdePrepare);
	}
	template <typename T = void> T ProcessScoreChanged() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36DAD88))(this);
	}
	template <typename T = void> T ProcessPawnNumberChanged(bool isGuard) {
		return ((T (*)(GameInfo*, bool))(Il2CppBase() + 0x36DAE20))(this, isGuard);
	}
	template <typename T = void> T OnRoundStart(int32_t inTimeLimit, int32_t inLeftTime) {
		return ((T (*)(GameInfo*, int32_t, int32_t))(Il2CppBase() + 0x36DAEC0))(this, inTimeLimit, inLeftTime);
	}
	template <typename T = void> T OnRoundCountDownOver() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36DB304))(this);
	}
	template <typename T = void> T OnRoundEnd(uintptr_t inRoundResult, uint64_t inWarGodPlayerID) {
		return ((T (*)(GameInfo*, uintptr_t, uint64_t))(Il2CppBase() + 0x36DB4E0))(this, inRoundResult, inWarGodPlayerID);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36DB9F4))(this);
	}
	template <typename T = void> T PlayRoundEndMusic(uintptr_t inRoundResult) {
		return ((T (*)(GameInfo*, uintptr_t))(Il2CppBase() + 0x36DB7BC))(this, inRoundResult);
	}
	template <typename T = void> T OnRoundTimeChanged() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36DBCF4))(this);
	}
	template <typename T = void> T OnSyncTeamUAV(bool isCounterUAV, uint32_t playerID, uint32_t actorID, bool isActive, int32_t times) {
		return ((T (*)(GameInfo*, bool, uint32_t, uint32_t, bool, int32_t))(Il2CppBase() + 0x36DBD8C))(this, isCounterUAV, playerID, actorID, isActive, times);
	}
	template <typename T = Il2CppString*> T GetPrepareModeInfo() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36DBFFC))(this);
	}
	template <typename T = bool> T IsPreparationStageBanFire() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36DC09C))(this);
	}
	template <typename T = bool> T IsInGameReplay() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36DC13C))(this);
	}
	template <typename T = bool> T IsInGameFinalKillReplay() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36DC1DC))(this);
	}
	template <typename T = uintptr_t> T GetGameReplayInfo() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36DC27C))(this);
	}
	template <typename T = bool> T NeedFinalKillReplay() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36DC31C))(this);
	}
	template <typename T = bool> T Draw1PCamFirst() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36DC3BC))(this);
	}
	template <typename T = void> T ClearGameInfo() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36DCA68))(this);
	}
	template <typename T = Il2CppString*> T GetModeText() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36DCC8C))(this);
	}
	template <typename T = Il2CppString*> T GetModeName() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36DCD7C))(this);
	}
	template <typename T = void> T ApplyShift(Il2CppVector3 shift) {
		return ((T (*)(GameInfo*, Il2CppVector3))(Il2CppBase() + 0x36DCF38))(this, shift);
	}
	template <typename T = bool> T ShowTeammateDiedIndicator() {
		return ((T (*)(GameInfo*))(Il2CppBase() + 0x36DD174))(this);
	}

};

}
