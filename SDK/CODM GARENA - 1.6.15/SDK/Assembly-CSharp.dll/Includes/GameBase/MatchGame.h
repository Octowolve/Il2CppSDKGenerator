#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class MatchGame
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "MatchGame"));
	}

	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_ActorEventHandlerMap() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_InfoEventHandlerMap() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_DroppedPickUpList() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_LadderVolumeList() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& DomAreaManager() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& HPManager() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& AttackableColliderMap() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& UnAttackableColliderMap() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& SkillComponentMgr() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& PaintManager() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& BuffMgr() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& MatchPingMgr() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& RaycastMgr() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& WeaponSocketMgr() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& DestructibleMgr() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& MatineeDirector() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& FsmMgr() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& m_FramerateMonitor() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = bool> T& m_IsFramerateMonitorActive() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& m_BeaconFramerateMonitor() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = int32_t> T& m_DefaultOpMode() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_OpModeAvailability() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_allAIPawnList() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& luaMsgContent() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = float> T& pawnSoundEmitterTickTime() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = float> T& pawnSoundEmitterCDTime() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uint64_t> T& mLastTickedPlayerID() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& m_CommonUseCharacterController() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = bool> T& m_IsInStandaloneTest() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = uintptr_t> T& m_WeaponSoundBankMgr() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateGameComponents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickPawnSoundEmitter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MonitorFramerate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartFramerateMonitor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopFramerateMonitor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartBeaconFramerateMonitor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopBeaconFramerateMonitor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitGameEventChannel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitZoneNetEventChannel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessZoneEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartMatch_IDataRecord() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStartMatchIgnoreReconnet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExitMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportULTStatData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoInGameExperienceDataBeaconReporter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayQuitGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQuitGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayerLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayerLogout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncTacticalTeamPawnLogInOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RestartPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadScreenAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddLocalPlayerInventory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddInventoryFor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddLocalPlayerItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AllStopFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAIPawnsList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnLocalPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnOtherPawnWithoutReused() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoSpawnPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyAllActorsExceptLocal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddActorEventHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetActorEventProcessor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveActorEventProcessor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemovePawnRef() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddInfoEventHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInfoEventProcessor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveInfoEventProcessor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AccessEffectInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegistPlayerBuffMgr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnregistPlayerBuffMgr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBuffTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearBuff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearDelayBuff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddBuff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveBuff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveNotExistBuff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBuffState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitGamePhysics() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnActorEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_OnActorEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleActorEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickDroppedPickUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryDeleteDroppedPickUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BatchDeleteDroppedPickUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAllDroppedPickUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDroppedPickUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncDroppedPickUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowDroppedPickUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDeadReplayBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDeadReplayEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnDroppedPickUpProjectile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnDroppedPickUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnKillConfirmDroppedPickUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnPVEProjectile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLevelObjectRegistered() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLevelObjectUnregistered() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldHideDynamicObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindObjectByActorID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitTLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TLogProcess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearCommonUseCharacterController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeToStandalone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeToReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecvLuaMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecvLuaSyncLevelObjectNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecvLuaClientPerformanceNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSpawnNonPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPickupList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindNearstLadderVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x164);
	}

	template <typename T = bool> T get_IsMatchGame() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19AF750))(this);
	}
	template <typename T = bool> T get_IsNeedRunGameHandle() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19AF758))(this);
	}
	template <typename T = bool> T get_IsClearAllDroppedPickUpOnRoundStart() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19AF760))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_DroppedPickUpList() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19AF768))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_LadderVolumeList() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19AF770))(this);
	}
	template <typename T = uintptr_t> T get_DomAreaManager() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19AF778))(this);
	}
	template <typename T = void> T set_DomAreaManager(uintptr_t value) {
		return ((T (*)(MatchGame*, uintptr_t))(Il2CppBase() + 0x19AF780))(this, value);
	}
	template <typename T = uintptr_t> T get_HPManager() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19AF788))(this);
	}
	template <typename T = void> T set_HPManager(uintptr_t value) {
		return ((T (*)(MatchGame*, uintptr_t))(Il2CppBase() + 0x19AF790))(this, value);
	}
	template <typename T = uintptr_t> T get_AttackableColliderMap() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19AF798))(this);
	}
	template <typename T = void> T set_AttackableColliderMap(uintptr_t value) {
		return ((T (*)(MatchGame*, uintptr_t))(Il2CppBase() + 0x19AF7A0))(this, value);
	}
	template <typename T = uintptr_t> T get_UnAttackableColliderMap() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19AF7A8))(this);
	}
	template <typename T = void> T set_UnAttackableColliderMap(uintptr_t value) {
		return ((T (*)(MatchGame*, uintptr_t))(Il2CppBase() + 0x19AF7B0))(this, value);
	}
	template <typename T = uintptr_t> T get_SkillComponentMgr() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19AF7B8))(this);
	}
	template <typename T = void> T set_SkillComponentMgr(uintptr_t value) {
		return ((T (*)(MatchGame*, uintptr_t))(Il2CppBase() + 0x19AF7C0))(this, value);
	}
	template <typename T = uintptr_t> T get_PaintManager() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19AF7C8))(this);
	}
	template <typename T = void> T set_PaintManager(uintptr_t value) {
		return ((T (*)(MatchGame*, uintptr_t))(Il2CppBase() + 0x19AF7D0))(this, value);
	}
	template <typename T = uintptr_t> T get_BuffMgr() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19AF7D8))(this);
	}
	template <typename T = void> T set_BuffMgr(uintptr_t value) {
		return ((T (*)(MatchGame*, uintptr_t))(Il2CppBase() + 0x19AF7E0))(this, value);
	}
	template <typename T = uintptr_t> T get_MatchPingMgr() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19AF7E8))(this);
	}
	template <typename T = void> T set_MatchPingMgr(uintptr_t value) {
		return ((T (*)(MatchGame*, uintptr_t))(Il2CppBase() + 0x19AF7F0))(this, value);
	}
	template <typename T = uintptr_t> T get_RaycastMgr() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19AF7F8))(this);
	}
	template <typename T = void> T set_RaycastMgr(uintptr_t value) {
		return ((T (*)(MatchGame*, uintptr_t))(Il2CppBase() + 0x19AF800))(this, value);
	}
	template <typename T = uintptr_t> T get_WeaponSocketMgr() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19AF808))(this);
	}
	template <typename T = void> T set_WeaponSocketMgr(uintptr_t value) {
		return ((T (*)(MatchGame*, uintptr_t))(Il2CppBase() + 0x19AF810))(this, value);
	}
	template <typename T = uintptr_t> T get_DestructibleMgr() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19AF818))(this);
	}
	template <typename T = void> T set_DestructibleMgr(uintptr_t value) {
		return ((T (*)(MatchGame*, uintptr_t))(Il2CppBase() + 0x19AF820))(this, value);
	}
	template <typename T = uintptr_t> T get_MatineeDirector() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19AF828))(this);
	}
	template <typename T = void> T set_MatineeDirector(uintptr_t value) {
		return ((T (*)(MatchGame*, uintptr_t))(Il2CppBase() + 0x19AF830))(this, value);
	}
	template <typename T = uintptr_t> T get_FsmMgr() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19AF838))(this);
	}
	template <typename T = void> T set_FsmMgr(uintptr_t value) {
		return ((T (*)(MatchGame*, uintptr_t))(Il2CppBase() + 0x19AF840))(this, value);
	}
	template <typename T = uintptr_t> T get_luaMsgContent() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19AF848))(this);
	}
	template <typename T = void> T set_luaMsgContent(uintptr_t value) {
		return ((T (*)(MatchGame*, uintptr_t))(Il2CppBase() + 0x19AF850))(this, value);
	}
	template <typename T = void> T Init() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19AF858))(this);
	}
	template <typename T = void> T CreateGameComponents() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19AFBDC))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19AFE20))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(MatchGame*, float))(Il2CppBase() + 0x19B017C))(this, deltaTime);
	}
	template <typename T = void> T TickPawnSoundEmitter() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19B03EC))(this);
	}
	template <typename T = void> T MonitorFramerate() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19B0264))(this);
	}
	template <typename T = void> T StartFramerateMonitor() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19B0B00))(this);
	}
	template <typename T = void> T StopFramerateMonitor() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19B0BD8))(this);
	}
	template <typename T = void> T StartBeaconFramerateMonitor() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19B0C9C))(this);
	}
	template <typename T = void> T StopBeaconFramerateMonitor() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19B0D6C))(this);
	}
	template <typename T = void> T InitGameEventChannel() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19B0E3C))(this);
	}
	template <typename T = void> T InitZoneNetEventChannel() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19B1060))(this);
	}
	template <typename T = void> T ProcessZoneEvent(uintptr_t msg) {
		return ((T (*)(MatchGame*, uintptr_t))(Il2CppBase() + 0x19B1288))(this, msg);
	}
	template <typename T = void> T StartMatch() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19B1394))(this);
	}
	template <typename T = void> T StartMatch_IDataRecord() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19B159C))(this);
	}
	template <typename T = void> T OnStartMatchIgnoreReconnet() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19B1778))(this);
	}
	template <typename T = void> T ExitMatch() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19B185C))(this);
	}
	template <typename T = void> T ReportULTStatData() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19B228C))(this);
	}
	template <typename T = void> T DoInGameExperienceDataBeaconReporter() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19B1AD8))(this);
	}
	template <typename T = void> T EndMatch() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19B2780))(this);
	}
	template <typename T = void> T DelayQuitGame() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19B2FEC))(this);
	}
	template <typename T = void> T OnQuitGame() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19B32D0))(this);
	}
	template <typename T = void> T PlayerLogin(uint32_t playerID, uint32_t actorID, uintptr_t camp, Il2CppString* nickName, unsigned char loginMsg, int32_t picId, int32_t frameId, Il2CppString* PicUrl, int32_t LadderScore, uint64_t roleID, int32_t moveState, int32_t LadderLevel, uint32_t ownerPlayerID) {
		return ((T (*)(MatchGame*, uint32_t, uint32_t, uintptr_t, Il2CppString*, unsigned char, int32_t, int32_t, Il2CppString*, int32_t, uint64_t, int32_t, int32_t, uint32_t))(Il2CppBase() + 0x19B3590))(this, playerID, actorID, camp, nickName, loginMsg, picId, frameId, PicUrl, LadderScore, roleID, moveState, LadderLevel, ownerPlayerID);
	}
	template <typename T = void> T PlayerLogout(uint32_t playerID) {
		return ((T (*)(MatchGame*, uint32_t))(Il2CppBase() + 0x19B3B08))(this, playerID);
	}
	template <typename T = void> T SyncTacticalTeamPawnLogInOut(uint32_t playerID, bool isLogin) {
		return ((T (*)(MatchGame*, uint32_t, bool))(Il2CppBase() + 0x19B3860))(this, playerID, isLogin);
	}
	template <typename T = void> T RestartPlayer() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19B3DD4))(this);
	}
	template <typename T = void> T LoadScreenAsset() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19B4198))(this);
	}
	template <typename T = void> T AddLocalPlayerInventory() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19B42BC))(this);
	}
	template <typename T = void> T AddInventoryFor(uintptr_t PlayerPawn) {
		return ((T (*)(MatchGame*, uintptr_t))(Il2CppBase() + 0x19B448C))(this, PlayerPawn);
	}
	template <typename T = void> T AddLocalPlayerItem() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19B456C))(this);
	}
	template <typename T = void> T AllStopFire() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19B2C40))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetAIPawnsList() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19B4804))(this);
	}
	template <typename T = uintptr_t> T SpawnLocalPawn(uintptr_t controller, uint32_t PlayerID, uint64_t RoleID, uint32_t actorID, Il2CppVector3 SpawnLocation, Il2CppQuaternion SpawnRotation, uintptr_t camp) {
		return ((T (*)(MatchGame*, uintptr_t, uint32_t, uint64_t, uint32_t, Il2CppVector3, Il2CppQuaternion, uintptr_t))(Il2CppBase() + 0x19B4A94))(this, controller, PlayerID, RoleID, actorID, SpawnLocation, SpawnRotation, camp);
	}
	template <typename T = uintptr_t> T SpawnOtherPawnWithoutReused(uint32_t PlayerID, uint64_t RoleID, uint32_t actorID, Il2CppVector3 SpawnLocation, Il2CppQuaternion SpawnRotation, uintptr_t camp) {
		return ((T (*)(MatchGame*, uint32_t, uint64_t, uint32_t, Il2CppVector3, Il2CppQuaternion, uintptr_t))(Il2CppBase() + 0x19B4E14))(this, PlayerID, RoleID, actorID, SpawnLocation, SpawnRotation, camp);
	}
	template <typename T = uintptr_t> T DoSpawnPawn(uint32_t playerID, uint64_t roleID, uint32_t actorID, bool isLocalPawn, uintptr_t camp, Il2CppString* pawnCfgPath, int32_t pawnType, Il2CppVector3 SpawnLocation, Il2CppQuaternion SpawnRotation) {
		return ((T (*)(MatchGame*, uint32_t, uint64_t, uint32_t, bool, uintptr_t, Il2CppString*, int32_t, Il2CppVector3, Il2CppQuaternion))(Il2CppBase() + 0x19B5048))(this, playerID, roleID, actorID, isLocalPawn, camp, pawnCfgPath, pawnType, SpawnLocation, SpawnRotation);
	}
	template <typename T = void> T DestroyPawn(uint32_t PlayerID) {
		return ((T (*)(MatchGame*, uint32_t))(Il2CppBase() + 0x19B51DC))(this, PlayerID);
	}
	template <typename T = void> T DestroyAllActorsExceptLocal() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19B53B4))(this);
	}
	template <typename T = void> T AddActorEventHandler(uint32_t actorID, uintptr_t NetHandler) {
		return ((T (*)(MatchGame*, uint32_t, uintptr_t))(Il2CppBase() + 0x19B4CDC))(this, actorID, NetHandler);
	}
	template <typename T = uintptr_t> T GetActorEventProcessor(uint32_t PlayerID) {
		return ((T (*)(MatchGame*, uint32_t))(Il2CppBase() + 0x19B545C))(this, PlayerID);
	}
	template <typename T = void> T RemoveActorEventProcessor(uint32_t playerID) {
		return ((T (*)(MatchGame*, uint32_t))(Il2CppBase() + 0x19B529C))(this, playerID);
	}
	template <typename T = void> T RemovePawnRef(uintptr_t pawn) {
		return ((T (*)(MatchGame*, uintptr_t))(Il2CppBase() + 0x19B5598))(this, pawn);
	}
	template <typename T = void> T AddInfoEventHandler(uint32_t actorID, uintptr_t NetHandler) {
		return ((T (*)(MatchGame*, uint32_t, uintptr_t))(Il2CppBase() + 0x19B5710))(this, actorID, NetHandler);
	}
	template <typename T = uintptr_t> T GetInfoEventProcessor(uint32_t actorID) {
		return ((T (*)(MatchGame*, uint32_t))(Il2CppBase() + 0x19B5848))(this, actorID);
	}
	template <typename T = void> T RemoveInfoEventProcessor(uint32_t actorID) {
		return ((T (*)(MatchGame*, uint32_t))(Il2CppBase() + 0x19B5984))(this, actorID);
	}
	template <typename T = uintptr_t> T AccessEffectInstance(uint32_t targetID) {
		return ((T (*)(MatchGame*, uint32_t))(Il2CppBase() + 0x334C594))(this, targetID);
	}
	template <typename T = void> T RegistPlayerBuffMgr(uint32_t playerID) {
		return ((T (*)(MatchGame*, uint32_t))(Il2CppBase() + 0x19B5A64))(this, playerID);
	}
	template <typename T = void> T UnregistPlayerBuffMgr(uint32_t playerID) {
		return ((T (*)(MatchGame*, uint32_t))(Il2CppBase() + 0x19B5B3C))(this, playerID);
	}
	template <typename T = void> T SetBuffTarget(uint32_t playerID, uintptr_t pawn) {
		return ((T (*)(MatchGame*, uint32_t, uintptr_t))(Il2CppBase() + 0x19B5C14))(this, playerID, pawn);
	}
	template <typename T = void> T ClearBuff(uint32_t targetID, uint32_t buffUID, int32_t buffID) {
		return ((T (*)(MatchGame*, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x19B5D0C))(this, targetID, buffUID, buffID);
	}
	template <typename T = void> T ClearDelayBuff(uint32_t targetID) {
		return ((T (*)(MatchGame*, uint32_t))(Il2CppBase() + 0x19B5DF4))(this, targetID);
	}
	template <typename T = void> T AddBuff(uint32_t targetID, uint32_t givenByID, uint32_t buffUID, int32_t buffID) {
		return ((T (*)(MatchGame*, uint32_t, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x19B5EBC))(this, targetID, givenByID, buffUID, buffID);
	}
	template <typename T = void> T RemoveBuff(uint32_t targetID, uint32_t buffUID, int32_t buffID) {
		return ((T (*)(MatchGame*, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x19B5FD4))(this, targetID, buffUID, buffID);
	}
	template <typename T = void> T RemoveNotExistBuff(uint32_t targetID, Il2CppList<uint32_t>* buffUIDList) {
		return ((T (*)(MatchGame*, uint32_t, Il2CppList<uint32_t>*))(Il2CppBase() + 0x19B60E0))(this, targetID, buffUIDList);
	}
	template <typename T = void> T UpdateBuffState(uint32_t targetID, uint32_t buffUID, bool active, int32_t layer, float duration) {
		return ((T (*)(MatchGame*, uint32_t, uint32_t, bool, int32_t, float))(Il2CppBase() + 0x19B61D8))(this, targetID, buffUID, active, layer, duration);
	}
	template <typename T = void> T InitGamePhysics() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19B6318))(this);
	}
	template <typename T = void> T OnActorEvent(uintptr_t msg) {
		return ((T (*)(MatchGame*, uintptr_t))(Il2CppBase() + 0x19B650C))(this, msg);
	}
	template <typename T = void> T OnActorEvent_1(uintptr_t msg) {
		return ((T (*)(MatchGame*, uintptr_t))(Il2CppBase() + 0x19B65C8))(this, msg);
	}
	template <typename T = bool> T HandleActorEvent(uintptr_t msg) {
		return ((T (*)(MatchGame*, uintptr_t))(Il2CppBase() + 0x19B6684))(this, msg);
	}
	template <typename T = void> T OnRoundStart() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19B6BA8))(this);
	}
	template <typename T = void> T OnRoundEnd() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19B6E28))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19B6F24))(this);
	}
	template <typename T = void> T TickDroppedPickUp(float deltaTime) {
		return ((T (*)(MatchGame*, float))(Il2CppBase() + 0x19B6FE0))(this, deltaTime);
	}
	template <typename T = void> T TryDeleteDroppedPickUp(int32_t inActorID, uint32_t pickedByPlayerId) {
		return ((T (*)(MatchGame*, int32_t, uint32_t))(Il2CppBase() + 0x19B71A0))(this, inActorID, pickedByPlayerId);
	}
	template <typename T = void> T BatchDeleteDroppedPickUp(int32_t inActorID) {
		return ((T (*)(MatchGame*, int32_t))(Il2CppBase() + 0x19B7568))(this, inActorID);
	}
	template <typename T = void> T ClearAllDroppedPickUp() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19B76CC))(this);
	}
	template <typename T = uintptr_t> T GetDroppedPickUp(int32_t inActorID) {
		return ((T (*)(MatchGame*, int32_t))(Il2CppBase() + 0x19B73E4))(this, inActorID);
	}
	template <typename T = void> T SyncDroppedPickUp(int32_t inActorID, int32_t inItemID, Il2CppVector3 inSyncPosition, float duration, Il2CppArray<uintptr_t>* attachments, Il2CppArray<uintptr_t>* skills, uint32_t skinID, uintptr_t type) {
		return ((T (*)(MatchGame*, int32_t, int32_t, Il2CppVector3, float, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, uint32_t, uintptr_t))(Il2CppBase() + 0x19B7860))(this, inActorID, inItemID, inSyncPosition, duration, attachments, skills, skinID, type);
	}
	template <typename T = void> T ShowDroppedPickUp(bool show) {
		return ((T (*)(MatchGame*, bool))(Il2CppBase() + 0x19B7A18))(this, show);
	}
	template <typename T = void> T OnDeadReplayBegin() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19B7BB0))(this);
	}
	template <typename T = void> T OnDeadReplayEnd() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19B7C64))(this);
	}
	template <typename T = void> T SpawnDroppedPickUpProjectile(uintptr_t inParameterData, bool needPickupConfirm) {
		return ((T (*)(MatchGame*, uintptr_t, bool))(Il2CppBase() + 0x19B7E98))(this, inParameterData, needPickupConfirm);
	}
	template <typename T = uintptr_t> T SpawnDroppedPickUp(Il2CppVector3 inDroppedPosition, int32_t actorID, int32_t itemID, Il2CppArray<uintptr_t>* attachmentID, Il2CppArray<uintptr_t>* weaponSkillID, bool needPickupConfirm, int32_t duration, uint32_t skinID, int32_t itemNum, uintptr_t type, int32_t param1) {
		return ((T (*)(MatchGame*, Il2CppVector3, int32_t, int32_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool, int32_t, uint32_t, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x19B80DC))(this, inDroppedPosition, actorID, itemID, attachmentID, weaponSkillID, needPickupConfirm, duration, skinID, itemNum, type, param1);
	}
	template <typename T = uintptr_t> T SpawnKillConfirmDroppedPickUp(Il2CppVector3 inDroppedPosition, int32_t actorID, int32_t itemID, Il2CppArray<uintptr_t>* attachmentID, Il2CppArray<uintptr_t>* weaponSkillID, bool needPickupConfirm, int32_t duration, uint32_t skinID, int32_t itemNum, uintptr_t type, int32_t param1) {
		return ((T (*)(MatchGame*, Il2CppVector3, int32_t, int32_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool, int32_t, uint32_t, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x19B849C))(this, inDroppedPosition, actorID, itemID, attachmentID, weaponSkillID, needPickupConfirm, duration, skinID, itemNum, type, param1);
	}
	template <typename T = uintptr_t> T SpawnPVEProjectile(Il2CppVector3 startLocation, Il2CppVector3 InitVel, uint32_t OwnerID, int32_t ProjectileID, int32_t weaponID, uint32_t skinID) {
		return ((T (*)(MatchGame*, Il2CppVector3, Il2CppVector3, uint32_t, int32_t, int32_t, uint32_t))(Il2CppBase() + 0x19B88D0))(this, startLocation, InitVel, OwnerID, ProjectileID, weaponID, skinID);
	}
	template <typename T = void> T OnLevelObjectRegistered(uintptr_t levelObject) {
		return ((T (*)(MatchGame*, uintptr_t))(Il2CppBase() + 0x19B8D6C))(this, levelObject);
	}
	template <typename T = void> T OnLevelObjectUnregistered(uintptr_t levelObject) {
		return ((T (*)(MatchGame*, uintptr_t))(Il2CppBase() + 0x19B8F40))(this, levelObject);
	}
	template <typename T = bool> T ShouldHideDynamicObject() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19B90D8))(this);
	}
	template <typename T = uintptr_t> T FindObjectByActorID(int32_t actorID) {
		return ((T (*)(MatchGame*, int32_t))(Il2CppBase() + 0x19B9194))(this, actorID);
	}
	template <typename T = void> T InitTLog() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19B93C4))(this);
	}
	template <typename T = void> T TLogProcess() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19B9508))(this);
	}
	template <typename T = uintptr_t> T get_CommonUseCharacterController() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19B96A4))(this);
	}
	template <typename T = void> T ClearCommonUseCharacterController() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19B001C))(this);
	}
	template <typename T = bool> T get_IsInStandaloneTest() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19B9974))(this);
	}
	template <typename T = void> T ChangeToStandalone() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19B997C))(this);
	}
	template <typename T = void> T ChangeToReplay() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19B9C28))(this);
	}
	template <typename T = void> T OnRecvLuaMsg(uintptr_t luaMsg) {
		return ((T (*)(MatchGame*, uintptr_t))(Il2CppBase() + 0x19B9ED8))(this, luaMsg);
	}
	template <typename T = void> T OnRecvLuaSyncLevelObjectNotify(uint32_t actorid, uint32_t notifyType, int32_t value) {
		return ((T (*)(MatchGame*, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x19B9F80))(this, actorid, notifyType, value);
	}
	template <typename T = void> T OnRecvLuaClientPerformanceNotify(uint32_t notifyType, Il2CppString* value, Il2CppString* value2) {
		return ((T (*)(MatchGame*, uint32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x19BA0F0))(this, notifyType, value, value2);
	}
	template <typename T = uintptr_t> T OnSpawnNonPlayer(uintptr_t Msg) {
		return ((T (*)(MatchGame*, uintptr_t))(Il2CppBase() + 0x19BA760))(this, Msg);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetPickupList(bool OnlyGetVisible) {
		return ((T (*)(MatchGame*, bool))(Il2CppBase() + 0x19BAAE8))(this, OnlyGetVisible);
	}
	template <typename T = uintptr_t> T FindNearstLadderVolume(Il2CppVector3 position, float minXZDistSqr) {
		return ((T (*)(MatchGame*, Il2CppVector3, float))(Il2CppBase() + 0x19BAD08))(this, position, minXZDistSqr);
	}
	template <typename T = uintptr_t> T get_WeaponSoundBankMgr() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19BAFC8))(this);
	}
	template <typename T = void> T set_WeaponSoundBankMgr(uintptr_t value) {
		return ((T (*)(MatchGame*, uintptr_t))(Il2CppBase() + 0x19AFE18))(this, value);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19BAFD0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CreateGameComponents() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19BAFD8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19BAFE0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(MatchGame*, float))(Il2CppBase() + 0x19BAFE8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_InitGameEventChannel() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19BAFF0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitZoneNetEventChannel() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19BAFF8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ProcessZoneEvent(uintptr_t P0) {
		return ((T (*)(MatchGame*, uintptr_t))(Il2CppBase() + 0x19BB000))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_StartMatch() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19BB008))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ExitMatch() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19BB010))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndMatch() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19BB018))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayerLogin(uint32_t P0, uint32_t P1, uintptr_t P2, Il2CppString* P3, unsigned char P4, int32_t P5, int32_t P6, Il2CppString* P7, int32_t P8, uint64_t P9, int32_t P10, int32_t P11, uint32_t P12) {
		return ((T (*)(MatchGame*, uint32_t, uint32_t, uintptr_t, Il2CppString*, unsigned char, int32_t, int32_t, Il2CppString*, int32_t, uint64_t, int32_t, int32_t, uint32_t))(Il2CppBase() + 0x19BB020))(this, P0, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12);
	}
	template <typename T = void> T xLuaBaseProxy_PlayerLogout(uint32_t P0) {
		return ((T (*)(MatchGame*, uint32_t))(Il2CppBase() + 0x19BB090))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_RestartPlayer() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19BB098))(this);
	}
	template <typename T = void> T xLuaBaseProxy_LoadScreenAsset() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19BB0A0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_SpawnLocalPawn(uintptr_t P0, uint32_t P1, uint64_t P2, uint32_t P3, Il2CppVector3 P4, Il2CppQuaternion P5, uintptr_t P6) {
		return ((T (*)(MatchGame*, uintptr_t, uint32_t, uint64_t, uint32_t, Il2CppVector3, Il2CppQuaternion, uintptr_t))(Il2CppBase() + 0x19BB0A8))(this, P0, P1, P2, P3, P4, P5, P6);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_DoSpawnPawn(uint32_t P0, uint64_t P1, uint32_t P2, bool P3, uintptr_t P4, Il2CppString* P5, int32_t P6, Il2CppVector3 P7, Il2CppQuaternion P8) {
		return ((T (*)(MatchGame*, uint32_t, uint64_t, uint32_t, bool, uintptr_t, Il2CppString*, int32_t, Il2CppVector3, Il2CppQuaternion))(Il2CppBase() + 0x19BB108))(this, P0, P1, P2, P3, P4, P5, P6, P7, P8);
	}
	template <typename T = void> T xLuaBaseProxy_DestroyPawn(uint32_t P0) {
		return ((T (*)(MatchGame*, uint32_t))(Il2CppBase() + 0x19BB180))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_DestroyAllActorsExceptLocal() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19BB188))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RemovePawnRef(uintptr_t P0) {
		return ((T (*)(MatchGame*, uintptr_t))(Il2CppBase() + 0x19BB190))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_RegistPlayerBuffMgr(uint32_t P0) {
		return ((T (*)(MatchGame*, uint32_t))(Il2CppBase() + 0x19BB198))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_UnregistPlayerBuffMgr(uint32_t P0) {
		return ((T (*)(MatchGame*, uint32_t))(Il2CppBase() + 0x19BB1A0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SetBuffTarget(uint32_t P0, uintptr_t P1) {
		return ((T (*)(MatchGame*, uint32_t, uintptr_t))(Il2CppBase() + 0x19BB1A8))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_ClearBuff(uint32_t P0, uint32_t P1, int32_t P2) {
		return ((T (*)(MatchGame*, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x19BB1B0))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_ClearDelayBuff(uint32_t P0) {
		return ((T (*)(MatchGame*, uint32_t))(Il2CppBase() + 0x19BB1D0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_AddBuff(uint32_t P0, uint32_t P1, uint32_t P2, int32_t P3) {
		return ((T (*)(MatchGame*, uint32_t, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x19BB1D8))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T xLuaBaseProxy_RemoveBuff(uint32_t P0, uint32_t P1, int32_t P2) {
		return ((T (*)(MatchGame*, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x19BB1FC))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_RemoveNotExistBuff(uint32_t P0, Il2CppList<uint32_t>* P1) {
		return ((T (*)(MatchGame*, uint32_t, Il2CppList<uint32_t>*))(Il2CppBase() + 0x19BB21C))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateBuffState(uint32_t P0, uint32_t P1, bool P2, int32_t P3, float P4) {
		return ((T (*)(MatchGame*, uint32_t, uint32_t, bool, int32_t, float))(Il2CppBase() + 0x19BB224))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundStart() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19BB254))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundEnd() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19BB25C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19BB264))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnLevelObjectRegistered(uintptr_t P0) {
		return ((T (*)(MatchGame*, uintptr_t))(Il2CppBase() + 0x19BB26C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnLevelObjectUnregistered(uintptr_t P0) {
		return ((T (*)(MatchGame*, uintptr_t))(Il2CppBase() + 0x19BB274))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_ShouldHideDynamicObject() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19BB27C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_FindObjectByActorID(int32_t P0) {
		return ((T (*)(MatchGame*, int32_t))(Il2CppBase() + 0x19BB284))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_InitTLog() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19BB28C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TLogProcess() {
		return ((T (*)(MatchGame*))(Il2CppBase() + 0x19BB294))(this);
	}

};

}
