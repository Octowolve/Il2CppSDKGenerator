#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class BaseGame
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "BaseGame"));
	}

	template <typename T = Il2CppString*> T& m_GameConfigPath() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& m_AllowAutoFire() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_CarriedAmmoScale() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_CarriedAmmoScaleForRifle() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_ContinueBattleWhenEndMatch() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_EndMatchWaitTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_SprintAngle() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& ServerEndMatchWaitTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_AutoClimbUpTrrigerTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_AutoClimbOverTrrigerTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_InjuredEffectHealthFactor() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& m_ShowHitScore() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_ShowDropInventoryEffectDistance() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& m_MatchObserverFOV() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_ElectricTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& m_MatchInProgress() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint32_t> static T& StandalonePlayerID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_GameBuilder() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_GameComponents() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& WeaponSkinMgr() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& ModelOptimizer() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& luaActorMgr() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> static T& IsOpenAsyncLoadBank() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> T& m_TimerModule() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_World() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& m_ActorInfo() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& AllPawns() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& AllPawnsDict() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& TeamPawns() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& EnemyPawns() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& m_AttackableTargetsManager() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_AllAirBorneTacticalInfo() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_AllVehicles() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& m_AllVehicleSoundPaths() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& globalVehicleSoundBankCDTime() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, float>*> T& allVehicleSoundCDTimes() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppDictionary<uint32_t, uint32_t>*> T& m_AllProjectileLockTarget() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& m_enableJumping() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& m_enableCrouching() {
		return *(T*)((uintptr_t)this + 0x91);
	}
	template <typename T = bool> T& m_ReusePawn() {
		return *(T*)((uintptr_t)this + 0x92);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_LevelObjects() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_TickableObjects() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = void*> T& m_LevelObjectsIdSet() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_StartSpots() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_NavSpots() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_LuaSyncLevelObjects() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& mapOriginPoint() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& m_GameInfo() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& m_EventChannel() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& m_ZoneEventChannel() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& m_UIScene() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_WeaponProjectileList() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& m_WeaponControllerAssetRecorder() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& m_GameState() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = void*> T& pawnTakeDamageHandlers() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = void*> T& beginFireHandlers() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& GameCLMgr() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& mFireModeLockCmp() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddAirborneTacticalShowInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAirborneTacticalShowInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeleteAirborneTacticalShowInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadConfigProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitGameEventChannel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitZoneNetEventChannel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessGameEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessZoneEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitGameInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRelativePawnsForAircraft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTeamPawns() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayerLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayerLogout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMonster() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNPC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerPawnType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOtherPlayerPawnType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNonPlayerPawnType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreatePlayerController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CreatePlayerController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreatePlayerPawnInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindStartPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnDefaultPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SpawnDefaultPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPawnByActorId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAttackableTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExitMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterLevelObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterLevelObjects() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveLevelObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLevelObjectRegistered() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLevelObjectUnregistered() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ContainLevelObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindLevelObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_FindLevelObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindLevelObjects() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_FindLevelObjects() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLevelObjectType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindLuaSyncLevelObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSetLevelObjectEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLevelObjectStateChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncLevelObjectValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncLevelObjectUsability() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncInteractiveObjectCoolingDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldHideDynamicObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShutdownClearPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLeaveGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearVehicleSoundBank() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnLoadVehicleSoundBank() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindStartSpot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RestartPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadScreenAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnLocalPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnLocalPawnWithoutReused() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnLocalPawnByReused() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnOtherPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnOtherPawnWithoutReused() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnOtherPawnByReused() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoSpawnPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyAllDrones() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVehicleInfoTypeById() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerCamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSpecialPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemovePawnRef() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPlayerPawnExist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayerPawnExist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAllPawnHidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x164);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshTeamAndEnemyPawns() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x16C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyAllActorsExceptLocal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshTeamPawns() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x174);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PawnDied() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearTripMine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x17C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearProject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPawnCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x184);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOneEnemy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegistPlayerBuffMgr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnregistPlayerBuffMgr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBuffTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x194);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddBuff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveBuff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x19C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearDelayBuff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearBuff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveNotExistBuff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBuffState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnActorFromInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AttachActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnThrowWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCarriedAmmoScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentAmmoScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGamePause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanSpectate3pView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanSpectateOB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanSpectate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PushProjectile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1DC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnANewProjectile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SpawnANewProjectile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnControllableMissile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveWeaponHoldProjectile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1EC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveWeaponProjectile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetClosestGrenade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FilterFriendGrenade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerEyePos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1FC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetClosestCanPickGrenade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x200);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsClosestKnifeTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x204);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTriggerWeaponType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x208);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindProjectileByOwner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindProjectile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x210);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_FindProjectile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x214);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindControllableMissile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x218);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveAllWeaponProjectiles() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x21C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateWeaponProjectileRPGTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x220);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedProjectileExplosion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x224);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSmokeProjectile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x228);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInEnemySmoke() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x22C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInAllySmoke() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x230);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInSmoke() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x234);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSmokeInMiddle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x238);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSmokeClusterNotInSameSide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x23C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSmokeDis() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x240);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x244);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x248);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindActorInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DynamicModificationActorInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x250);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HadLargeKillStreakActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x254);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindObjectByActorID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x258);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateGameComponents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x25C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGameComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x260);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetGameComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x264);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddGameComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x268);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_AddGameComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x26C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitGameComponents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x270);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameComponents_PreTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x274);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameComponents_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x278);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameComponents_ForceTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x27C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameComponents_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x280);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameComponents_OnStartMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x284);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameComponents_OnRoundStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x288);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameComponents_OnRoundEnded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameComponents_OnExitMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x290);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameComponents_OnEndMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x294);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameComponents_RestartPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x298);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameComponents_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x29C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameComponents_ApplyWorldShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameComponents_OnLevelObjectRegistered() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameComponents_OnLevelObjectUnRegistered() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddSceneActorInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveSceneActorInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnActorRelevant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnActorIRRelevant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitTLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TLogProcess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponControllerAssetRecorder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadingSceneUnloadDelayTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordForHideInReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshAllPawnUpArmObjs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2D4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanSkipDeadReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2D8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LockCheck() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2DC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LockTotalInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2E0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveLockStateType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2E4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveTotalLockState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2E8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickWeaponFireModeLockComponents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2EC);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(BaseGame*, uintptr_t, bool))(Il2CppBase() + 0x3714294))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x37143F8))(this);
	}
	template <typename T = Il2CppString*> T get_GameConfigPath() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x37144B4))(this);
	}
	template <typename T = void> T set_GameConfigPath(Il2CppString* value) {
		return ((T (*)(BaseGame*, Il2CppString*))(Il2CppBase() + 0x37144BC))(this, value);
	}
	template <typename T = bool> T get_AllowAutoFire() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x37144C4))(this);
	}
	template <typename T = void> T set_AllowAutoFire(bool value) {
		return ((T (*)(BaseGame*, bool))(Il2CppBase() + 0x37144CC))(this, value);
	}
	template <typename T = bool> T get_ContinueBattleWhenEndMatch() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x37144D4))(this);
	}
	template <typename T = int32_t> T get_EndMatchWaitTime() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x37144DC))(this);
	}
	template <typename T = float> T get_SprintAngle() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x37144E4))(this);
	}
	template <typename T = float> T get_AutoClimbUpTrrigerTime() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x37144EC))(this);
	}
	template <typename T = float> T get_AutoClimbOverTrrigerTime() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x37144F4))(this);
	}
	template <typename T = float> T get_InjuredEffectHealthFactor() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x37144FC))(this);
	}
	template <typename T = bool> T get_ShowHitScore() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x3714504))(this);
	}
	template <typename T = float> T get_ShowDropInventoryEffectDistance() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x371450C))(this);
	}
	template <typename T = float> T get_MatchObserverFOV() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x3714514))(this);
	}
	template <typename T = float> T get_ElectricTime() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x371451C))(this);
	}
	template <typename T = bool> T get_MatchInProgress() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x3714524))(this);
	}
	template <typename T = uintptr_t> T get_GameBuilder() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x371452C))(this);
	}
	template <typename T = uintptr_t> T get_WeaponSkinMgr() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x3714534))(this);
	}
	template <typename T = void> T set_WeaponSkinMgr(uintptr_t value) {
		return ((T (*)(BaseGame*, uintptr_t))(Il2CppBase() + 0x371453C))(this, value);
	}
	template <typename T = uintptr_t> T get_ModelOptimizer() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x3714544))(this);
	}
	template <typename T = void> T set_ModelOptimizer(uintptr_t value) {
		return ((T (*)(BaseGame*, uintptr_t))(Il2CppBase() + 0x371454C))(this, value);
	}
	template <typename T = uintptr_t> T get_luaActorMgr() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x3714554))(this);
	}
	template <typename T = void> T set_luaActorMgr(uintptr_t value) {
		return ((T (*)(BaseGame*, uintptr_t))(Il2CppBase() + 0x371455C))(this, value);
	}
	template <typename T = bool> T get_IsPaused() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x3714564))(this);
	}
	template <typename T = uintptr_t> T get_TimerModule() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x3714590))(this);
	}
	template <typename T = uintptr_t> T get_AttackableTargetsManager() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x3714598))(this);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T get_AllAttackableTargetsDict() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x37145A0))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_AllAirBorneTacticalInfo() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x37145C4))(this);
	}
	template <typename T = void> T AddAirborneTacticalShowInfo(Il2CppVector3 position, Il2CppQuaternion rotation, uint32_t ownerID, uint32_t actorID) {
		return ((T (*)(BaseGame*, Il2CppVector3, Il2CppQuaternion, uint32_t, uint32_t))(Il2CppBase() + 0x37145CC))(this, position, rotation, ownerID, actorID);
	}
	template <typename T = void> T UpdateAirborneTacticalShowInfo(uint32_t actorID, Il2CppVector3 position, Il2CppQuaternion rotation, uint32_t ownerID) {
		return ((T (*)(BaseGame*, uint32_t, Il2CppVector3, Il2CppQuaternion, uint32_t))(Il2CppBase() + 0x3714794))(this, actorID, position, rotation, ownerID);
	}
	template <typename T = void> T DeleteAirborneTacticalShowInfo(uint32_t actorID) {
		return ((T (*)(BaseGame*, uint32_t))(Il2CppBase() + 0x37149C4))(this, actorID);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_allVehicles() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x3714C70))(this);
	}
	template <typename T = int32_t> T get_WheeledVehicleNum() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x3714C78))(this);
	}
	template <typename T = uintptr_t> T GetVehicle(uint32_t actorId) {
		return ((T (*)(BaseGame*, uint32_t))(Il2CppBase() + 0x3714E24))(this, actorId);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T get_allVehicleSoundPaths() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x37150D0))(this);
	}
	template <typename T = Il2CppDictionary<uint32_t, uint32_t>*> T get_AllProjectileLockTarget() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x37150D8))(this);
	}
	template <typename T = bool> T get_EnableJumping() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x37150E0))(this);
	}
	template <typename T = bool> T get_EnableCrouching() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x37150E8))(this);
	}
	template <typename T = bool> T get_EnableAutoCheckMantle() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x37150F0))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_StartSpots() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x37150F8))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_NavSpots() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x3715100))(this);
	}
	template <typename T = uintptr_t> T get_mapOriginPoint() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x3715108))(this);
	}
	template <typename T = void> T set_mapOriginPoint(uintptr_t value) {
		return ((T (*)(BaseGame*, uintptr_t))(Il2CppBase() + 0x3715110))(this, value);
	}
	template <typename T = bool> T get_IsMatchGame() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x3715118))(this);
	}
	template <typename T = bool> T get_IsNeedRunGameHandle() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x3715120))(this);
	}
	template <typename T = uintptr_t> T get_GameInfo() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x3715128))(this);
	}
	template <typename T = uintptr_t> T get_CurrentUIScene() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x3715130))(this);
	}
	template <typename T = int32_t> T get_UnusedProjectileID() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x3715138))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_WeaponProjectileList() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x3715214))(this);
	}
	template <typename T = uintptr_t> T get_GameState() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x371521C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x3715224))(this);
	}
	template <typename T = void> T LoadConfigProperties() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x37155BC))(this);
	}
	template <typename T = void> T InitGameEventChannel() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x3715924))(this);
	}
	template <typename T = void> T InitZoneNetEventChannel() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x37159EC))(this);
	}
	template <typename T = void> T ProcessGameEvent(uintptr_t Msg) {
		return ((T (*)(BaseGame*, uintptr_t))(Il2CppBase() + 0x3715AB4))(this, Msg);
	}
	template <typename T = void> T ProcessZoneEvent(uintptr_t msg) {
		return ((T (*)(BaseGame*, uintptr_t))(Il2CppBase() + 0x3715BA0))(this, msg);
	}
	template <typename T = void> T InitGameInfo() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x3715C8C))(this);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x3715F34))(this);
	}
	template <typename T = void> T GetRelativePawnsForAircraft(uintptr_t* relativePawnList) {
		return ((T (*)(BaseGame*, uintptr_t*))(Il2CppBase() + 0x3715FFC))(this, relativePawnList);
	}
	template <typename T = void> T GetTeamPawns(uintptr_t* teamPawnList) {
		return ((T (*)(BaseGame*, uintptr_t*))(Il2CppBase() + 0x37160E8))(this, teamPawnList);
	}
	template <typename T = void> T PlayerLogin(uint32_t playerID, uint32_t actorID, uintptr_t camp, Il2CppString* nickName, unsigned char loginMsg, int32_t picId, int32_t frameId, Il2CppString* PicUrl, int32_t ladderScore, uint64_t roleID, int32_t moveState, int32_t LadderLevel, uint32_t ownerPlayerID) {
		return ((T (*)(BaseGame*, uint32_t, uint32_t, uintptr_t, Il2CppString*, unsigned char, int32_t, int32_t, Il2CppString*, int32_t, uint64_t, int32_t, int32_t, uint32_t))(Il2CppBase() + 0x37164B4))(this, playerID, actorID, camp, nickName, loginMsg, picId, frameId, PicUrl, ladderScore, roleID, moveState, LadderLevel, ownerPlayerID);
	}
	template <typename T = void> T PlayerLogout(uint32_t playerID) {
		return ((T (*)(BaseGame*, uint32_t))(Il2CppBase() + 0x37167F4))(this, playerID);
	}
	template <typename T = void> T StartMatch() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x371690C))(this);
	}
	template <typename T = void> T OnRoundStart() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x3716E34))(this);
	}
	template <typename T = void> T OnRoundEnd() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x37170D4))(this);
	}
	template <typename T = bool> T IsMonster(uint64_t iRoleID) {
		return ((T (*)(BaseGame*, uint64_t))(Il2CppBase() + 0x3717D4C))(this, iRoleID);
	}
	template <typename T = bool> T IsNPC(uint64_t iRoleID) {
		return ((T (*)(BaseGame*, uint64_t))(Il2CppBase() + 0x3717E44))(this, iRoleID);
	}
	template <typename T = bool> T IsPlayer(uint64_t inRoleID) {
		return ((T (*)(BaseGame*, uint64_t))(Il2CppBase() + 0x3717F54))(this, inRoleID);
	}
	template <typename T = int32_t> T GetPlayerPawnType(uint64_t PlayerID, uint64_t RoleID, uintptr_t camp) {
		return ((T (*)(BaseGame*, uint64_t, uint64_t, uintptr_t))(Il2CppBase() + 0x3718090))(this, PlayerID, RoleID, camp);
	}
	template <typename T = int32_t> T GetOtherPlayerPawnType(uint64_t PlayerID, uint64_t RoleID, uintptr_t camp) {
		return ((T (*)(BaseGame*, uint64_t, uint64_t, uintptr_t))(Il2CppBase() + 0x3718190))(this, PlayerID, RoleID, camp);
	}
	template <typename T = int32_t> T GetNonPlayerPawnType(uint64_t PlayerID, uint64_t RoleID, uintptr_t camp) {
		return ((T (*)(BaseGame*, uint64_t, uint64_t, uintptr_t))(Il2CppBase() + 0x3718290))(this, PlayerID, RoleID, camp);
	}
	template <typename T = uintptr_t> T CreatePlayerController(uintptr_t camp, Il2CppVector3 SpawnLocation, Il2CppQuaternion SpawnRotation) {
		return ((T (*)(BaseGame*, uintptr_t, Il2CppVector3, Il2CppQuaternion))(Il2CppBase() + 0x37183CC))(this, camp, SpawnLocation, SpawnRotation);
	}
	template <typename T = uintptr_t> T CreatePlayerController_1(uintptr_t camp) {
		return ((T (*)(BaseGame*, uintptr_t))(Il2CppBase() + 0x3718DA8))(this, camp);
	}
	template <typename T = uintptr_t> T CreatePlayerPawnInfo(uintptr_t camp, uint32_t playerID, uint64_t roleID, bool is1P, uint32_t actorID) {
		return ((T (*)(BaseGame*, uintptr_t, uint32_t, uint64_t, bool, uint32_t))(Il2CppBase() + 0x37191E4))(this, camp, playerID, roleID, is1P, actorID);
	}
	template <typename T = void> T FindStartPosition(uintptr_t camp, uintptr_t spawnLocation, uintptr_t spawnRotation) {
		return ((T (*)(BaseGame*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3718F3C))(this, camp, spawnLocation, spawnRotation);
	}
	template <typename T = uintptr_t> T SpawnDefaultPawn(uintptr_t controller, uintptr_t camp) {
		return ((T (*)(BaseGame*, uintptr_t, uintptr_t))(Il2CppBase() + 0x371965C))(this, controller, camp);
	}
	template <typename T = uintptr_t> T SpawnDefaultPawn_1(uintptr_t controller, uintptr_t camp, Il2CppVector3 spawnLocation, Il2CppQuaternion spawnRotation) {
		return ((T (*)(BaseGame*, uintptr_t, uintptr_t, Il2CppVector3, Il2CppQuaternion))(Il2CppBase() + 0x37197E8))(this, controller, camp, spawnLocation, spawnRotation);
	}
	template <typename T = uintptr_t> T GetPawnByActorId(uint32_t actorId) {
		return ((T (*)(BaseGame*, uint32_t))(Il2CppBase() + 0x3719A70))(this, actorId);
	}
	template <typename T = uintptr_t> T GetPawn(uint32_t Id) {
		return ((T (*)(BaseGame*, uint32_t))(Il2CppBase() + 0x3719CE4))(this, Id);
	}
	template <typename T = uintptr_t> T GetAttackableTarget(uint32_t actorID) {
		return ((T (*)(BaseGame*, uint32_t))(Il2CppBase() + 0x3719BA8))(this, actorID);
	}
	template <typename T = void> T ExitMatch() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x3719EF8))(this);
	}
	template <typename T = void> T EndMatch() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x371A1A0))(this);
	}
	template <typename T = void> T RegisterLevelObject(uintptr_t InObject) {
		return ((T (*)(BaseGame*, uintptr_t))(Il2CppBase() + 0x371A534))(this, InObject);
	}
	template <typename T = void> T RegisterLevelObjects(Il2CppList<uintptr_t>* levelObjects) {
		return ((T (*)(BaseGame*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x371A8C0))(this, levelObjects);
	}
	template <typename T = void> T RemoveLevelObject(uintptr_t InObject) {
		return ((T (*)(BaseGame*, uintptr_t))(Il2CppBase() + 0x371AA08))(this, InObject);
	}
	template <typename T = void> T OnLevelObjectRegistered(uintptr_t levelObject) {
		return ((T (*)(BaseGame*, uintptr_t))(Il2CppBase() + 0x371ABC4))(this, levelObject);
	}
	template <typename T = void> T OnLevelObjectUnregistered(uintptr_t levelObject) {
		return ((T (*)(BaseGame*, uintptr_t))(Il2CppBase() + 0x371B0DC))(this, levelObject);
	}
	template <typename T = bool> T ContainLevelObject(uint32_t uid) {
		return ((T (*)(BaseGame*, uint32_t))(Il2CppBase() + 0x1B9A2AC))(this, uid);
	}
	template <typename T = uintptr_t> T FindLevelObject() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x334AEC4))(this);
	}
	template <typename T = uintptr_t> T FindLevelObject_1(uint32_t uid) {
		return ((T (*)(BaseGame*, uint32_t))(Il2CppBase() + 0x334B0AC))(this, uid);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T FindLevelObjects() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x4E420E8))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T FindLevelObjects_1(Il2CppString* note) {
		return ((T (*)(BaseGame*, Il2CppString*))(Il2CppBase() + 0x371B4E4))(this, note);
	}
	template <typename T = uintptr_t> T GetLevelObjectType(uint32_t uid) {
		return ((T (*)(BaseGame*, uint32_t))(Il2CppBase() + 0x371B68C))(this, uid);
	}
	template <typename T = uintptr_t> T FindLuaSyncLevelObject(uint32_t uid) {
		return ((T (*)(BaseGame*, uint32_t))(Il2CppBase() + 0x371B89C))(this, uid);
	}
	template <typename T = void> T OnSetLevelObjectEnable(uint32_t uid, bool enable) {
		return ((T (*)(BaseGame*, uint32_t, bool))(Il2CppBase() + 0x371B9D0))(this, uid, enable);
	}
	template <typename T = void> T OnLevelObjectStateChanged(bool bOn, uint32_t uid) {
		return ((T (*)(BaseGame*, bool, uint32_t))(Il2CppBase() + 0x371BC10))(this, bOn, uid);
	}
	template <typename T = void> T OnSyncLevelObjectValue(uint32_t uid, int32_t value) {
		return ((T (*)(BaseGame*, uint32_t, int32_t))(Il2CppBase() + 0x371BDA0))(this, uid, value);
	}
	template <typename T = void> T OnSyncLevelObjectUsability(uint32_t uid, bool available) {
		return ((T (*)(BaseGame*, uint32_t, bool))(Il2CppBase() + 0x371BF30))(this, uid, available);
	}
	template <typename T = void> T OnSyncInteractiveObjectCoolingDown(uint32_t uid, bool coolingDown) {
		return ((T (*)(BaseGame*, uint32_t, bool))(Il2CppBase() + 0x371C0C0))(this, uid, coolingDown);
	}
	template <typename T = bool> T ShouldHideDynamicObject() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x371C250))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x371C320))(this);
	}
	template <typename T = void> T OnShutdownClearPawn() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x371C798))(this);
	}
	template <typename T = void> T OnLeaveGame() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x371C9EC))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x371CAC0))(this);
	}
	template <typename T = void> T ClearVehicleSoundBank() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x371D080))(this);
	}
	template <typename T = void> T UnLoadVehicleSoundBank() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x371CEC8))(this);
	}
	template <typename T = uintptr_t> T FindStartSpot(uintptr_t Camp) {
		return ((T (*)(BaseGame*, uintptr_t))(Il2CppBase() + 0x37193EC))(this, Camp);
	}
	template <typename T = void> T RestartPlayer() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x371DA80))(this);
	}
	template <typename T = void> T LoadScreenAsset() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x371DCBC))(this);
	}
	template <typename T = void> T PreTick(float deltaTime) {
		return ((T (*)(BaseGame*, float))(Il2CppBase() + 0x371DD84))(this, deltaTime);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(BaseGame*, float))(Il2CppBase() + 0x371DFF8))(this, deltaTime);
	}
	template <typename T = uintptr_t> T SpawnLocalPawn(uintptr_t controller, uint32_t PlayerID, uint64_t RoleID, uint32_t actorID, Il2CppVector3 SpawnLocation, Il2CppQuaternion SpawnRotation, uintptr_t camp) {
		return ((T (*)(BaseGame*, uintptr_t, uint32_t, uint64_t, uint32_t, Il2CppVector3, Il2CppQuaternion, uintptr_t))(Il2CppBase() + 0x371E824))(this, controller, PlayerID, RoleID, actorID, SpawnLocation, SpawnRotation, camp);
	}
	template <typename T = uintptr_t> T SpawnLocalPawnWithoutReused(uint32_t PlayerID, uint64_t RoleID, Il2CppVector3 SpawnLocation, Il2CppQuaternion SpawnRotation, uintptr_t camp, uint32_t actorID) {
		return ((T (*)(BaseGame*, uint32_t, uint64_t, Il2CppVector3, Il2CppQuaternion, uintptr_t, uint32_t))(Il2CppBase() + 0x371EB20))(this, PlayerID, RoleID, SpawnLocation, SpawnRotation, camp, actorID);
	}
	template <typename T = uintptr_t> T SpawnLocalPawnByReused(uint32_t PlayerID, uint64_t RoleID, Il2CppVector3 SpawnLocation, Il2CppQuaternion SpawnRotation, uintptr_t camp, uint32_t actorID) {
		return ((T (*)(BaseGame*, uint32_t, uint64_t, Il2CppVector3, Il2CppQuaternion, uintptr_t, uint32_t))(Il2CppBase() + 0x371ED60))(this, PlayerID, RoleID, SpawnLocation, SpawnRotation, camp, actorID);
	}
	template <typename T = uintptr_t> T SpawnOtherPawn(uint32_t PlayerID, uint64_t RoleID, uint32_t actorID, Il2CppVector3 SpawnLocation, Il2CppQuaternion SpawnRotation, uintptr_t camp, int32_t BagIDFromRespawn) {
		return ((T (*)(BaseGame*, uint32_t, uint64_t, uint32_t, Il2CppVector3, Il2CppQuaternion, uintptr_t, int32_t))(Il2CppBase() + 0x371F09C))(this, PlayerID, RoleID, actorID, SpawnLocation, SpawnRotation, camp, BagIDFromRespawn);
	}
	template <typename T = uintptr_t> T SpawnOtherPawnWithoutReused(uint32_t PlayerID, uint64_t RoleID, uint32_t actorID, Il2CppVector3 SpawnLocation, Il2CppQuaternion SpawnRotation, uintptr_t camp) {
		return ((T (*)(BaseGame*, uint32_t, uint64_t, uint32_t, Il2CppVector3, Il2CppQuaternion, uintptr_t))(Il2CppBase() + 0x371F630))(this, PlayerID, RoleID, actorID, SpawnLocation, SpawnRotation, camp);
	}
	template <typename T = uintptr_t> T SpawnOtherPawnByReused(uint32_t PlayerID, uint64_t RoleID, uint32_t actorID, Il2CppVector3 SpawnLocation, Il2CppQuaternion SpawnRotation, uintptr_t camp, int32_t bagID) {
		return ((T (*)(BaseGame*, uint32_t, uint64_t, uint32_t, Il2CppVector3, Il2CppQuaternion, uintptr_t, int32_t))(Il2CppBase() + 0x371F264))(this, PlayerID, RoleID, actorID, SpawnLocation, SpawnRotation, camp, bagID);
	}
	template <typename T = uintptr_t> T DoSpawnPawn(uint32_t playerID, uint64_t roleID, uint32_t actorID, bool isLocalPawn, uintptr_t camp, Il2CppString* pawnCfgPath, int32_t pawnType, Il2CppVector3 SpawnLocation, Il2CppQuaternion SpawnRotation) {
		return ((T (*)(BaseGame*, uint32_t, uint64_t, uint32_t, bool, uintptr_t, Il2CppString*, int32_t, Il2CppVector3, Il2CppQuaternion))(Il2CppBase() + 0x371F970))(this, playerID, roleID, actorID, isLocalPawn, camp, pawnCfgPath, pawnType, SpawnLocation, SpawnRotation);
	}
	template <typename T = uintptr_t> T SpawnVehicle(uint32_t actorID, uintptr_t vehicleType, Il2CppVector3 SpawnLocation, Il2CppQuaternion SpawnRotation, void* CallbackFun) {
		return ((T (*)(BaseGame*, uint32_t, uintptr_t, Il2CppVector3, Il2CppQuaternion, void*))(Il2CppBase() + 0x371FC9C))(this, actorID, vehicleType, SpawnLocation, SpawnRotation, CallbackFun);
	}
	template <typename T = void> T DestroyVehicle(uintptr_t vehicle) {
		return ((T (*)(BaseGame*, uintptr_t))(Il2CppBase() + 0x37201A4))(this, vehicle);
	}
	template <typename T = void> T DestroyAllDrones() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x37176EC))(this);
	}
	template <typename T = uintptr_t> T GetVehicleInfoTypeById(int32_t typeId) {
		return ((T (*)(BaseGame*, int32_t))(Il2CppBase() + 0x37205C8))(this, typeId);
	}
	template <typename T = uintptr_t> T GetPlayerCamp(uint32_t PlayerID) {
		return ((T (*)(BaseGame*, uint32_t))(Il2CppBase() + 0x37206FC))(this, PlayerID);
	}
	template <typename T = uintptr_t> T GetSpecialPawn() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x334BAE4))(this);
	}
	template <typename T = uintptr_t> T GetPlayerPawn(uint32_t PlayerID) {
		return ((T (*)(BaseGame*, uint32_t))(Il2CppBase() + 0x3719DC4))(this, PlayerID);
	}
	template <typename T = void> T RemovePawnRef(uintptr_t pawn) {
		return ((T (*)(BaseGame*, uintptr_t))(Il2CppBase() + 0x3720874))(this, pawn);
	}
	template <typename T = bool> T IsPlayerPawnExist(uintptr_t InPawn) {
		return ((T (*)(BaseGame*, uintptr_t))(Il2CppBase() + 0x3720944))(this, InPawn);
	}
	template <typename T = bool> T PlayerPawnExist(uint32_t PlayerID) {
		return ((T (*)(BaseGame*, uint32_t))(Il2CppBase() + 0x371899C))(this, PlayerID);
	}
	template <typename T = void> T SetAllPawnHidden(bool isHidden) {
		return ((T (*)(BaseGame*, bool))(Il2CppBase() + 0x3720AFC))(this, isHidden);
	}
	template <typename T = void> T AddPawn(uintptr_t pawn) {
		return ((T (*)(BaseGame*, uintptr_t))(Il2CppBase() + 0x3720CEC))(this, pawn);
	}
	template <typename T = void> T RefreshTeamAndEnemyPawns() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x372101C))(this);
	}
	template <typename T = void> T DestroyPawn(uint32_t PlayerID) {
		return ((T (*)(BaseGame*, uint32_t))(Il2CppBase() + 0x3721310))(this, PlayerID);
	}
	template <typename T = void> T DestroyAllActorsExceptLocal() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x37215E8))(this);
	}
	template <typename T = void> T RefreshTeamPawns() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x37217F8))(this);
	}
	template <typename T = void> T PawnDied(uintptr_t pawn) {
		return ((T (*)(BaseGame*, uintptr_t))(Il2CppBase() + 0x37218C0))(this, pawn);
	}
	template <typename T = void> T ClearTripMine(uintptr_t pawn) {
		return ((T (*)(BaseGame*, uintptr_t))(Il2CppBase() + 0x3721A7C))(this, pawn);
	}
	template <typename T = void> T ClearProject(uintptr_t pawn) {
		return ((T (*)(BaseGame*, uintptr_t))(Il2CppBase() + 0x3721D78))(this, pawn);
	}
	template <typename T = int32_t> T GetPawnCount(uintptr_t camp) {
		return ((T (*)(BaseGame*, uintptr_t))(Il2CppBase() + 0x3721F78))(this, camp);
	}
	template <typename T = uintptr_t> T GetOneEnemy() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x37220F8))(this);
	}
	template <typename T = void> T RegistPlayerBuffMgr(uint32_t playerID) {
		return ((T (*)(BaseGame*, uint32_t))(Il2CppBase() + 0x3722318))(this, playerID);
	}
	template <typename T = void> T UnregistPlayerBuffMgr(uint32_t playerID) {
		return ((T (*)(BaseGame*, uint32_t))(Il2CppBase() + 0x37223E8))(this, playerID);
	}
	template <typename T = void> T SetBuffTarget(uint32_t playerID, uintptr_t pawn) {
		return ((T (*)(BaseGame*, uint32_t, uintptr_t))(Il2CppBase() + 0x37224B8))(this, playerID, pawn);
	}
	template <typename T = void> T AddBuff(uint32_t targetID, uint32_t givenByID, uint32_t buffUID, int32_t buffID) {
		return ((T (*)(BaseGame*, uint32_t, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x372259C))(this, targetID, givenByID, buffUID, buffID);
	}
	template <typename T = void> T RemoveBuff(uint32_t targetID, uint32_t buffUID, int32_t buffID) {
		return ((T (*)(BaseGame*, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x372268C))(this, targetID, buffUID, buffID);
	}
	template <typename T = void> T ClearDelayBuff(uint32_t targetID) {
		return ((T (*)(BaseGame*, uint32_t))(Il2CppBase() + 0x3722778))(this, targetID);
	}
	template <typename T = void> T ClearBuff(uint32_t targetID, uint32_t buffUID, int32_t buffID) {
		return ((T (*)(BaseGame*, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x3722848))(this, targetID, buffUID, buffID);
	}
	template <typename T = void> T RemoveNotExistBuff(uint32_t targetID, Il2CppList<uint32_t>* buffUIDList) {
		return ((T (*)(BaseGame*, uint32_t, Il2CppList<uint32_t>*))(Il2CppBase() + 0x3722934))(this, targetID, buffUIDList);
	}
	template <typename T = void> T UpdateBuffState(uint32_t targetID, uint32_t buffUID, bool active, int32_t layer, float duration) {
		return ((T (*)(BaseGame*, uint32_t, uint32_t, bool, int32_t, float))(Il2CppBase() + 0x3722A18))(this, targetID, buffUID, active, layer, duration);
	}
	template <typename T = uintptr_t> T SpawnActor(int32_t actorType, Il2CppVector3 SpawnLocation, Il2CppQuaternion SpawnRotation, void* CallbackFun) {
		return ((T (*)(BaseGame*, int32_t, Il2CppVector3, Il2CppQuaternion, void*))(Il2CppBase() + 0x3718ACC))(this, actorType, SpawnLocation, SpawnRotation, CallbackFun);
	}
	template <typename T = uintptr_t> T SpawnActorFromInfo(uintptr_t actorInfo, Il2CppVector3 SpawnLocation, Il2CppQuaternion SpawnRotation) {
		return ((T (*)(BaseGame*, uintptr_t, Il2CppVector3, Il2CppQuaternion))(Il2CppBase() + 0x3722B14))(this, actorInfo, SpawnLocation, SpawnRotation);
	}
	template <typename T = void> T DestroyActor(uintptr_t actorRoot) {
		return ((T (*)(BaseGame*, uintptr_t))(Il2CppBase() + 0x3722CEC))(this, actorRoot);
	}
	template <typename T = void> T AttachActor(uintptr_t actorRoot) {
		return ((T (*)(BaseGame*, uintptr_t))(Il2CppBase() + 0x3722DE4))(this, actorRoot);
	}
	template <typename T = void> T OnThrowWeapon(int32_t weapId, Il2CppVector3 inThrowPosition) {
		return ((T (*)(BaseGame*, int32_t, Il2CppVector3))(Il2CppBase() + 0x3722FF0))(this, weapId, inThrowPosition);
	}
	template <typename T = float> T GetCarriedAmmoScale(uintptr_t weapon) {
		return ((T (*)(BaseGame*, uintptr_t))(Il2CppBase() + 0x37230E0))(this, weapon);
	}
	template <typename T = float> T GetCurrentAmmoScale(uintptr_t weapon) {
		return ((T (*)(BaseGame*, uintptr_t))(Il2CppBase() + 0x37231B8))(this, weapon);
	}
	template <typename T = void> T SetGamePause(bool paused) {
		return ((T (*)(BaseGame*, bool))(Il2CppBase() + 0x3723290))(this, paused);
	}
	template <typename T = bool> T IsCanSpectate3pView() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x37233D0))(this);
	}
	template <typename T = bool> T CanSpectateOB(uint32_t playerId) {
		return ((T (*)(BaseGame*, uint32_t))(Il2CppBase() + 0x3723520))(this, playerId);
	}
	template <typename T = bool> T CanSpectate(uintptr_t viewTarget) {
		return ((T (*)(BaseGame*, uintptr_t))(Il2CppBase() + 0x37235F8))(this, viewTarget);
	}
	template <typename T = void> T PushProjectile(uintptr_t inProjectile) {
		return ((T (*)(BaseGame*, uintptr_t))(Il2CppBase() + 0x3723748))(this, inProjectile);
	}
	template <typename T = uintptr_t> T SpawnANewProjectile(Il2CppVector3 StartPos, Il2CppVector3 InitVel, uint32_t OwnerID, int32_t ProjectileID, uintptr_t InputConfig, int32_t weaponID, uint32_t skinID) {
		return ((T (*)(BaseGame*, Il2CppVector3, Il2CppVector3, uint32_t, int32_t, uintptr_t, int32_t, uint32_t))(Il2CppBase() + 0x372395C))(this, StartPos, InitVel, OwnerID, ProjectileID, InputConfig, weaponID, skinID);
	}
	template <typename T = uintptr_t> T SpawnANewProjectile_1(Il2CppVector3 StartPos, Il2CppVector3 InitVel, float Accel, float MaxSpeed, float GravityScale, float LifeSpan, float ExplosionLifeSpan, float GroundBounceRate, float WallBounceRate, int32_t FlightID, int32_t ExplodeID, uintptr_t Owner, uintptr_t ProjectileType, int32_t weaponID, uint32_t skinID, bool TouchExplode, bool CauseFlashEffect, bool CauseRepulseEffect) {
		return ((T (*)(BaseGame*, Il2CppVector3, Il2CppVector3, float, float, float, float, float, float, float, int32_t, int32_t, uintptr_t, uintptr_t, int32_t, uint32_t, bool, bool, bool))(Il2CppBase() + 0x3723EE4))(this, StartPos, InitVel, Accel, MaxSpeed, GravityScale, LifeSpan, ExplosionLifeSpan, GroundBounceRate, WallBounceRate, FlightID, ExplodeID, Owner, ProjectileType, weaponID, skinID, TouchExplode, CauseFlashEffect, CauseRepulseEffect);
	}
	template <typename T = uintptr_t> T SpawnControllableMissile(uintptr_t camp, uint32_t playerID, int32_t actorId, uintptr_t param, uintptr_t flyInfo) {
		return ((T (*)(BaseGame*, uintptr_t, uint32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x37242A4))(this, camp, playerID, actorId, param, flyInfo);
	}
	template <typename T = void> T RemoveWeaponHoldProjectile(uint32_t playerID) {
		return ((T (*)(BaseGame*, uint32_t))(Il2CppBase() + 0x37246A0))(this, playerID);
	}
	template <typename T = bool> T RemoveWeaponProjectile(uintptr_t Projectile) {
		return ((T (*)(BaseGame*, uintptr_t))(Il2CppBase() + 0x3721C5C))(this, Projectile);
	}
	template <typename T = uintptr_t> T GetClosestGrenade(uintptr_t relAngle) {
		return ((T (*)(BaseGame*, uintptr_t))(Il2CppBase() + 0x37249B4))(this, relAngle);
	}
	template <typename T = bool> T FilterFriendGrenade(uintptr_t proj) {
		return ((T (*)(BaseGame*, uintptr_t))(Il2CppBase() + 0x3725100))(this, proj);
	}
	template <typename T = Il2CppVector3> T GetPlayerEyePos() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x3725310))(this);
	}
	template <typename T = uintptr_t> T GetClosestCanPickGrenade() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x372561C))(this);
	}
	template <typename T = bool> T IsClosestKnifeTrigger() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x3725CB8))(this);
	}
	template <typename T = uintptr_t> T GetTriggerWeaponType() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x3725E84))(this);
	}
	template <typename T = uintptr_t> T FindProjectileByOwner(uint32_t ownerID) {
		return ((T (*)(BaseGame*, uint32_t))(Il2CppBase() + 0x334B668))(this, ownerID);
	}
	template <typename T = uintptr_t> T FindProjectile(int32_t projID) {
		return ((T (*)(BaseGame*, int32_t))(Il2CppBase() + 0x334B3D4))(this, projID);
	}
	template <typename T = uintptr_t> T FindProjectile_1(int32_t projID) {
		return ((T (*)(BaseGame*, int32_t))(Il2CppBase() + 0x3725FA8))(this, projID);
	}
	template <typename T = uintptr_t> T FindControllableMissile(int32_t ActorId) {
		return ((T (*)(BaseGame*, int32_t))(Il2CppBase() + 0x3726150))(this, ActorId);
	}
	template <typename T = void> T RemoveAllWeaponProjectiles() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x371730C))(this);
	}
	template <typename T = void> T UpdateWeaponProjectileRPGTarget(uint32_t ownerID, uint32_t targetID) {
		return ((T (*)(BaseGame*, uint32_t, uint32_t))(Il2CppBase() + 0x3726390))(this, ownerID, targetID);
	}
	template <typename T = void> T SimulatedProjectileExplosion(int32_t projID, int32_t weaponID, Il2CppVector3 ExplodeLocation, uintptr_t type, float atTime, bool canBeDestroyed) {
		return ((T (*)(BaseGame*, int32_t, int32_t, Il2CppVector3, uintptr_t, float, bool))(Il2CppBase() + 0x3726614))(this, projID, weaponID, ExplodeLocation, type, atTime, canBeDestroyed);
	}
	template <typename T = uintptr_t> T GetSmokeProjectile(uintptr_t type) {
		return ((T (*)(BaseGame*, uintptr_t))(Il2CppBase() + 0x3726A5C))(this, type);
	}
	template <typename T = bool> T IsInEnemySmoke(Il2CppVector3 point, uintptr_t pawn) {
		return ((T (*)(BaseGame*, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x3726C0C))(this, point, pawn);
	}
	template <typename T = bool> T IsInAllySmoke(Il2CppVector3 point, uintptr_t pawn) {
		return ((T (*)(BaseGame*, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x3726F5C))(this, point, pawn);
	}
	template <typename T = bool> T IsInSmoke(Il2CppVector3 point) {
		return ((T (*)(BaseGame*, Il2CppVector3))(Il2CppBase() + 0x37271D0))(this, point);
	}
	template <typename T = bool> T IsSmokeInMiddle(Il2CppVector3 source, Il2CppVector3 target) {
		return ((T (*)(BaseGame*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x3727480))(this, source, target);
	}
	template <typename T = bool> T IsSmokeClusterNotInSameSide(Il2CppVector3 source, Il2CppVector3 target) {
		return ((T (*)(BaseGame*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x3727708))(this, source, target);
	}
	template <typename T = int32_t> T GetSmokeDis() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x3727990))(this);
	}
	template <typename T = uintptr_t> T GetTarget(uint32_t targetID) {
		return ((T (*)(BaseGame*, uint32_t))(Il2CppBase() + 0x3727BB8))(this, targetID);
	}
	template <typename T = uintptr_t> T GetTarget_1(unsigned char targetType, uint32_t targetID) {
		return ((T (*)(BaseGame*, unsigned char, uint32_t))(Il2CppBase() + 0x3727D0C))(this, targetType, targetID);
	}
	template <typename T = uintptr_t> T FindActorInfo(int32_t actorType) {
		return ((T (*)(BaseGame*, int32_t))(Il2CppBase() + 0x3727F94))(this, actorType);
	}
	template <typename T = bool> T DynamicModificationActorInfo(uintptr_t actorType, int32_t assetID) {
		return ((T (*)(BaseGame*, uintptr_t, int32_t))(Il2CppBase() + 0x372811C))(this, actorType, assetID);
	}
	template <typename T = bool> T HadLargeKillStreakActor() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x3728234))(this);
	}
	template <typename T = uintptr_t> T FindObjectByActorID(int32_t actorID) {
		return ((T (*)(BaseGame*, int32_t))(Il2CppBase() + 0x37284B0))(this, actorID);
	}
	template <typename T = void> T CreateGameComponents() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x3728750))(this);
	}
	template <typename T = uintptr_t> T GetGameComponent(uintptr_t inType) {
		return ((T (*)(BaseGame*, uintptr_t))(Il2CppBase() + 0x3728898))(this, inType);
	}
	template <typename T = uintptr_t> T GetGameComponent_1() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x334B8FC))(this);
	}
	template <typename T = uintptr_t> T AddGameComponent(uintptr_t type) {
		return ((T (*)(BaseGame*, uintptr_t))(Il2CppBase() + 0x3728A40))(this, type);
	}
	template <typename T = uintptr_t> T AddGameComponent_1() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x334AC88))(this);
	}
	template <typename T = void> T InitGameComponents() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x37157B8))(this);
	}
	template <typename T = void> T GameComponents_PreTick(float deltaTime) {
		return ((T (*)(BaseGame*, float))(Il2CppBase() + 0x371DE84))(this, deltaTime);
	}
	template <typename T = void> T GameComponents_Tick(float deltaTime) {
		return ((T (*)(BaseGame*, float))(Il2CppBase() + 0x371E444))(this, deltaTime);
	}
	template <typename T = void> T GameComponents_ForceTick(float deltaTime) {
		return ((T (*)(BaseGame*, float))(Il2CppBase() + 0x371E5B8))(this, deltaTime);
	}
	template <typename T = void> T GameComponents_Shutdown() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x371CD60))(this);
	}
	template <typename T = void> T GameComponents_OnStartMatch() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x3716CCC))(this);
	}
	template <typename T = void> T GameComponents_OnRoundStart() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x3716F6C))(this);
	}
	template <typename T = void> T GameComponents_OnRoundEnded() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x3717584))(this);
	}
	template <typename T = void> T GameComponents_OnExitMatch() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x371A014))(this);
	}
	template <typename T = void> T GameComponents_OnEndMatch() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x371A3CC))(this);
	}
	template <typename T = void> T GameComponents_RestartPlayer() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x371DB54))(this);
	}
	template <typename T = void> T GameComponents_Reset() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x371C630))(this);
	}
	template <typename T = void> T GameComponents_ApplyWorldShift(Il2CppVector3 shift) {
		return ((T (*)(BaseGame*, Il2CppVector3))(Il2CppBase() + 0x3728BD8))(this, shift);
	}
	template <typename T = void> T GameComponents_OnLevelObjectRegistered(uintptr_t levelObject) {
		return ((T (*)(BaseGame*, uintptr_t))(Il2CppBase() + 0x371AF68))(this, levelObject);
	}
	template <typename T = void> T GameComponents_OnLevelObjectUnRegistered(uintptr_t levelObject) {
		return ((T (*)(BaseGame*, uintptr_t))(Il2CppBase() + 0x371B370))(this, levelObject);
	}
	template <typename T = void> T ApplyShift(Il2CppVector3 shift) {
		return ((T (*)(BaseGame*, Il2CppVector3))(Il2CppBase() + 0x3728D74))(this, shift);
	}
	template <typename T = void> T AddSceneActorInfo(uint32_t actorId, unsigned char actorType, uint32_t clientUID, unsigned char subType, Il2CppVector3 pos, Il2CppVector3 rot, uint32_t clientParam) {
		return ((T (*)(BaseGame*, uint32_t, unsigned char, uint32_t, unsigned char, Il2CppVector3, Il2CppVector3, uint32_t))(Il2CppBase() + 0x3728E7C))(this, actorId, actorType, clientUID, subType, pos, rot, clientParam);
	}
	template <typename T = void> T RemoveSceneActorInfo(uint32_t actorID) {
		return ((T (*)(BaseGame*, uint32_t))(Il2CppBase() + 0x3729D2C))(this, actorID);
	}
	template <typename T = void> T OnActorRelevant(uint32_t actorId, Il2CppVector3 position, Il2CppVector3 rotation, unsigned char relevantObjType) {
		return ((T (*)(BaseGame*, uint32_t, Il2CppVector3, Il2CppVector3, unsigned char))(Il2CppBase() + 0x3729EB4))(this, actorId, position, rotation, relevantObjType);
	}
	template <typename T = void> T OnActorIRRelevant(uint32_t actorId, unsigned char relevantObjtype) {
		return ((T (*)(BaseGame*, uint32_t, unsigned char))(Il2CppBase() + 0x372A07C))(this, actorId, relevantObjtype);
	}
	template <typename T = void> T InitTLog() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x372A160))(this);
	}
	template <typename T = void> T TLogProcess() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x372A228))(this);
	}
	template <typename T = uintptr_t> T GetWeaponControllerAssetRecorder() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x372A2F0))(this);
	}
	template <typename T = float> T LoadingSceneUnloadDelayTime() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x372A480))(this);
	}
	template <typename T = void> T RecordForHideInReplay(uintptr_t go) {
		return ((T (*)(BaseGame*, uintptr_t))(Il2CppBase() + 0x372A550))(this, go);
	}
	template <typename T = void> T RefreshAllPawnUpArmObjs() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x372A620))(this);
	}
	template <typename T = bool> T CanSkipDeadReplay() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x372A7D8))(this);
	}
	template <typename T = uintptr_t> T get_FireModeLockCmp() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x372A8A8))(this);
	}
	template <typename T = void> T LockCheck(uintptr_t stateType, float lockTime) {
		return ((T (*)(BaseGame*, uintptr_t, float))(Il2CppBase() + 0x372A8B0))(this, stateType, lockTime);
	}
	template <typename T = void> T LockTotalInput(float lockTime) {
		return ((T (*)(BaseGame*, float))(Il2CppBase() + 0x372A9D4))(this, lockTime);
	}
	template <typename T = void> T RemoveLockStateType(uintptr_t stateType) {
		return ((T (*)(BaseGame*, uintptr_t))(Il2CppBase() + 0x372AB08))(this, stateType);
	}
	template <typename T = void> T RemoveTotalLockState() {
		return ((T (*)(BaseGame*))(Il2CppBase() + 0x3717C60))(this);
	}
	template <typename T = void> T TickWeaponFireModeLockComponents(float deltaTime) {
		return ((T (*)(BaseGame*, float))(Il2CppBase() + 0x371E72C))(this, deltaTime);
	}
	template <typename T = bool> static T FindLevelObject_1m__0(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1B99FF0))(0, e);
	}
	template <typename T = bool> static T FindLevelObjects_1m__1(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1B9A0DC))(0, e);
	}
	template <typename T = bool> static T GetOneEnemym__2(uintptr_t s) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x372ACA4))(0, s);
	}
	template <typename T = bool> static T GetGameComponent_1m__3(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1B9A1C8))(0, e);
	}

};

}
