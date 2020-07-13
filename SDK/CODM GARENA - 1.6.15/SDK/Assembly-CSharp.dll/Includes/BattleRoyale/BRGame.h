#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRGame
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRGame"));
	}

	template <typename T = uintptr_t> T& OpenWorldMgr() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& AircrftMgr() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = uintptr_t> T& ReviveMgr() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& ZiplineMgr() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = uintptr_t> T& SkyPlatformMgr() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> T& MapMaskMgr() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = uintptr_t> T& MapAreaEdgeMgr() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = uintptr_t> T& DestructibleObjMgr() {
		return *(T*)((uintptr_t)this + 0x1BC);
	}
	template <typename T = uintptr_t> T& AirDropMgr() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = uintptr_t> T& AirDropPlaneMgr() {
		return *(T*)((uintptr_t)this + 0x1C4);
	}
	template <typename T = uintptr_t> T& ElectricTripWireBaseMgr() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = uintptr_t> T& ZombieZoneMgr() {
		return *(T*)((uintptr_t)this + 0x1CC);
	}
	template <typename T = uintptr_t> T& CollectionMgr() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = uintptr_t> T& LotteryMachineMgr() {
		return *(T*)((uintptr_t)this + 0x1D4);
	}
	template <typename T = uintptr_t> T& TeamStateMgr() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = uintptr_t> T& BossSantaMgr() {
		return *(T*)((uintptr_t)this + 0x1DC);
	}
	template <typename T = uintptr_t> T& ChristmasTreeMgr() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = uintptr_t> T& DoorMgr() {
		return *(T*)((uintptr_t)this + 0x1E4);
	}
	template <typename T = uintptr_t> T& WindowMgr() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = uintptr_t> T& FenceMgr() {
		return *(T*)((uintptr_t)this + 0x1EC);
	}
	template <typename T = uintptr_t> T& RelevantMgr() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = uintptr_t> T& ChipMachineMgr() {
		return *(T*)((uintptr_t)this + 0x1F4);
	}
	template <typename T = uintptr_t> T& MedicalStationBoxMgr() {
		return *(T*)((uintptr_t)this + 0x1F8);
	}
	template <typename T = uintptr_t> T& TreasureMapMgr() {
		return *(T*)((uintptr_t)this + 0x1FC);
	}
	template <typename T = uintptr_t> T& DanceFloorMgr() {
		return *(T*)((uintptr_t)this + 0x200);
	}
	template <typename T = uintptr_t> T& BRBlackMarketMonitorMgr() {
		return *(T*)((uintptr_t)this + 0x204);
	}
	template <typename T = uintptr_t> T& SceneStageShowMgr() {
		return *(T*)((uintptr_t)this + 0x208);
	}
	template <typename T = uintptr_t> T& SceneGuiMgr() {
		return *(T*)((uintptr_t)this + 0x20C);
	}
	template <typename T = Il2CppList<uint32_t>*> T& DyingTeammatesList() {
		return *(T*)((uintptr_t)this + 0x210);
	}
	template <typename T = float> static T& ms_LocalPlayerWorldCameraFOV() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_Landscape() {
		return *(T*)((uintptr_t)this + 0x214);
	}
	template <typename T = uintptr_t> T& SantaRadio() {
		return *(T*)((uintptr_t)this + 0x218);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& TeamMatePawns() {
		return *(T*)((uintptr_t)this + 0x21C);
	}
	template <typename T = uintptr_t> T& PPMode() {
		return *(T*)((uintptr_t)this + 0x220);
	}
	template <typename T = uintptr_t> T& SpectatingMode() {
		return *(T*)((uintptr_t)this + 0x224);
	}
	template <typename T = float> T& m_fPropPawnMgrCheckIntervalTime() {
		return *(T*)((uintptr_t)this + 0x228);
	}
	template <typename T = float> T& m_fPropPawnMgrCheckCurrTime() {
		return *(T*)((uintptr_t)this + 0x22C);
	}
	template <typename T = float> T& m_fUpdateAirborneMapShowIntervalTime() {
		return *(T*)((uintptr_t)this + 0x230);
	}
	template <typename T = float> T& m_fUpdateAirborneMapShowCurrTime() {
		return *(T*)((uintptr_t)this + 0x234);
	}
	template <typename T = float> T& MaxPickUpHorizontalDistanceSquare() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = float> T& MaxPickUpVerticalDistance() {
		return *(T*)((uintptr_t)this + 0x23C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_CurrentPickupDataList() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_CachePickupDataList() {
		return *(T*)((uintptr_t)this + 0x244);
	}
	template <typename T = uint32_t> T& PendingObservePlayerID() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = bool> T& m_HasShowObserverQuit() {
		return *(T*)((uintptr_t)this + 0x24C);
	}
	template <typename T = float> T& m_NextRefreshObserveUITime() {
		return *(T*)((uintptr_t)this + 0x250);
	}
	template <typename T = bool> T& m_IsFirstCheckObserver() {
		return *(T*)((uintptr_t)this + 0x254);
	}
	template <typename T = float> T& m_ShowNoObserverQuitTime() {
		return *(T*)((uintptr_t)this + 0x258);
	}
	template <typename T = uint32_t> T& SpectateEnemyID() {
		return *(T*)((uintptr_t)this + 0x25C);
	}
	template <typename T = uint32_t> T& SpectateEnemyID_Pending() {
		return *(T*)((uintptr_t)this + 0x260);
	}
	template <typename T = uintptr_t> T& m_PickupMsgScheduler() {
		return *(T*)((uintptr_t)this + 0x264);
	}
	template <typename T = uintptr_t> T& m_SandStormCylinder() {
		return *(T*)((uintptr_t)this + 0x268);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateGameComponents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshTeamPawns() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshTeamAndEnemyPawns() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTeamPawns() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetTeamPawns() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreatePlayerController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnOtherPawnWithoutReused() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnLocalPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayerLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPawnVirtualSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitMaxPickUpDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPickUpListInBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCurrentPickupList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNearbyViewShowItemCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsRaycastStaticActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPickupIgnoreCollider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsDroppedPickUpListChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IntervalUpdateAirborneMapShowInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PropPawnMgrCheck() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveOverTimePropPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetPropPawnMgr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanSpectate3pView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanSpectateOB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanSpectate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanSpectateCheckPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanSpectateCheckTeam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanSpectateCheckInAir_OB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanSpectateCheckInAir() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShowNoObserverQuit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoCheckShowNoObserverQuit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowNoObserverQuit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideNoObserverQuit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNoObserverQuit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpectateKillerAfterDead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddSceneActorInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnActorRelevant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnActorIRRelevant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickDroppedPickUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryDeleteDroppedPickUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BatchDeleteDroppedPickUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAllDroppedPickUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPickupBoxEntity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPickupEntity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForEachPickupEntity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForEachPickupBoxEntity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPickupData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickDroppedPickupBoxEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateSandStormCylinder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateNonBattleAreaEdge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddDyingTeammates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveDyingTeammates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveBRDoor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_RemoveBRDoor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReSpawnPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSpawnNonPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeToReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetInvisibleSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetProjectileLockTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FilterFriendGrenade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetSubWeaponInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetUpwardLaunchInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetBRLocalPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStartAirCraft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyPickupDespawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetPsychosisState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPawnEndSkyDiving() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitTLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TLogProcess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}

	template <typename T = uintptr_t> T get_OpenWorldMgr() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x18F910C))(this);
	}
	template <typename T = void> T set_OpenWorldMgr(uintptr_t value) {
		return ((T (*)(BRGame*, uintptr_t))(Il2CppBase() + 0x18F9114))(this, value);
	}
	template <typename T = uintptr_t> T get_AircrftMgr() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x18F911C))(this);
	}
	template <typename T = void> T set_AircrftMgr(uintptr_t value) {
		return ((T (*)(BRGame*, uintptr_t))(Il2CppBase() + 0x18F9124))(this, value);
	}
	template <typename T = uintptr_t> T get_ReviveMgr() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x18F912C))(this);
	}
	template <typename T = void> T set_ReviveMgr(uintptr_t value) {
		return ((T (*)(BRGame*, uintptr_t))(Il2CppBase() + 0x18F9134))(this, value);
	}
	template <typename T = uintptr_t> T get_ZiplineMgr() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x18F913C))(this);
	}
	template <typename T = void> T set_ZiplineMgr(uintptr_t value) {
		return ((T (*)(BRGame*, uintptr_t))(Il2CppBase() + 0x18F9144))(this, value);
	}
	template <typename T = uintptr_t> T get_SkyPlatformMgr() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x18F914C))(this);
	}
	template <typename T = void> T set_SkyPlatformMgr(uintptr_t value) {
		return ((T (*)(BRGame*, uintptr_t))(Il2CppBase() + 0x18F9154))(this, value);
	}
	template <typename T = uintptr_t> T get_MapMaskMgr() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x18F915C))(this);
	}
	template <typename T = void> T set_MapMaskMgr(uintptr_t value) {
		return ((T (*)(BRGame*, uintptr_t))(Il2CppBase() + 0x18F9164))(this, value);
	}
	template <typename T = uintptr_t> T get_MapAreaEdgeMgr() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x18F916C))(this);
	}
	template <typename T = void> T set_MapAreaEdgeMgr(uintptr_t value) {
		return ((T (*)(BRGame*, uintptr_t))(Il2CppBase() + 0x18F9174))(this, value);
	}
	template <typename T = uintptr_t> T get_DestructibleObjMgr() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x18F917C))(this);
	}
	template <typename T = void> T set_DestructibleObjMgr(uintptr_t value) {
		return ((T (*)(BRGame*, uintptr_t))(Il2CppBase() + 0x18F9184))(this, value);
	}
	template <typename T = uintptr_t> T get_AirDropMgr() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x18F918C))(this);
	}
	template <typename T = void> T set_AirDropMgr(uintptr_t value) {
		return ((T (*)(BRGame*, uintptr_t))(Il2CppBase() + 0x18F9194))(this, value);
	}
	template <typename T = uintptr_t> T get_AirDropPlaneMgr() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x18F919C))(this);
	}
	template <typename T = void> T set_AirDropPlaneMgr(uintptr_t value) {
		return ((T (*)(BRGame*, uintptr_t))(Il2CppBase() + 0x18F91A4))(this, value);
	}
	template <typename T = uintptr_t> T get_ElectricTripWireBaseMgr() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x18F91AC))(this);
	}
	template <typename T = void> T set_ElectricTripWireBaseMgr(uintptr_t value) {
		return ((T (*)(BRGame*, uintptr_t))(Il2CppBase() + 0x18F91B4))(this, value);
	}
	template <typename T = uintptr_t> T get_ZombieZoneMgr() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x18F91BC))(this);
	}
	template <typename T = void> T set_ZombieZoneMgr(uintptr_t value) {
		return ((T (*)(BRGame*, uintptr_t))(Il2CppBase() + 0x18F91C4))(this, value);
	}
	template <typename T = uintptr_t> T get_CollectionMgr() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x18F91CC))(this);
	}
	template <typename T = void> T set_CollectionMgr(uintptr_t value) {
		return ((T (*)(BRGame*, uintptr_t))(Il2CppBase() + 0x18F91D4))(this, value);
	}
	template <typename T = uintptr_t> T get_LotteryMachineMgr() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x18B4748))(this);
	}
	template <typename T = void> T set_LotteryMachineMgr(uintptr_t value) {
		return ((T (*)(BRGame*, uintptr_t))(Il2CppBase() + 0x18F91DC))(this, value);
	}
	template <typename T = uintptr_t> T get_TeamStateMgr() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x18F91E4))(this);
	}
	template <typename T = void> T set_TeamStateMgr(uintptr_t value) {
		return ((T (*)(BRGame*, uintptr_t))(Il2CppBase() + 0x18F91EC))(this, value);
	}
	template <typename T = uintptr_t> T get_BossSantaMgr() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x18F91F4))(this);
	}
	template <typename T = void> T set_BossSantaMgr(uintptr_t value) {
		return ((T (*)(BRGame*, uintptr_t))(Il2CppBase() + 0x18F91FC))(this, value);
	}
	template <typename T = uintptr_t> T get_ChristmasTreeMgr() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x18F9204))(this);
	}
	template <typename T = void> T set_ChristmasTreeMgr(uintptr_t value) {
		return ((T (*)(BRGame*, uintptr_t))(Il2CppBase() + 0x18F920C))(this, value);
	}
	template <typename T = uintptr_t> T get_DoorMgr() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x18F9214))(this);
	}
	template <typename T = void> T set_DoorMgr(uintptr_t value) {
		return ((T (*)(BRGame*, uintptr_t))(Il2CppBase() + 0x18F921C))(this, value);
	}
	template <typename T = uintptr_t> T get_WindowMgr() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x18F9224))(this);
	}
	template <typename T = void> T set_WindowMgr(uintptr_t value) {
		return ((T (*)(BRGame*, uintptr_t))(Il2CppBase() + 0x18F922C))(this, value);
	}
	template <typename T = uintptr_t> T get_FenceMgr() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x18F9234))(this);
	}
	template <typename T = void> T set_FenceMgr(uintptr_t value) {
		return ((T (*)(BRGame*, uintptr_t))(Il2CppBase() + 0x18F923C))(this, value);
	}
	template <typename T = uintptr_t> T get_RelevantMgr() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x18F9244))(this);
	}
	template <typename T = void> T set_RelevantMgr(uintptr_t value) {
		return ((T (*)(BRGame*, uintptr_t))(Il2CppBase() + 0x18F924C))(this, value);
	}
	template <typename T = uintptr_t> T get_ChipMachineMgr() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x18F9254))(this);
	}
	template <typename T = void> T set_ChipMachineMgr(uintptr_t value) {
		return ((T (*)(BRGame*, uintptr_t))(Il2CppBase() + 0x18F925C))(this, value);
	}
	template <typename T = uintptr_t> T get_MedicalStationBoxMgr() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x18F9264))(this);
	}
	template <typename T = void> T set_MedicalStationBoxMgr(uintptr_t value) {
		return ((T (*)(BRGame*, uintptr_t))(Il2CppBase() + 0x18F926C))(this, value);
	}
	template <typename T = uintptr_t> T get_TreasureMapMgr() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x18F9274))(this);
	}
	template <typename T = void> T set_TreasureMapMgr(uintptr_t value) {
		return ((T (*)(BRGame*, uintptr_t))(Il2CppBase() + 0x18F927C))(this, value);
	}
	template <typename T = uintptr_t> T get_DanceFloorMgr() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x18F9284))(this);
	}
	template <typename T = void> T set_DanceFloorMgr(uintptr_t value) {
		return ((T (*)(BRGame*, uintptr_t))(Il2CppBase() + 0x18F928C))(this, value);
	}
	template <typename T = uintptr_t> T get_BRBlackMarketMonitorMgr() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x18F9294))(this);
	}
	template <typename T = void> T set_BRBlackMarketMonitorMgr(uintptr_t value) {
		return ((T (*)(BRGame*, uintptr_t))(Il2CppBase() + 0x18F929C))(this, value);
	}
	template <typename T = uintptr_t> T get_SceneStageShowMgr() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x18F92A4))(this);
	}
	template <typename T = void> T set_SceneStageShowMgr(uintptr_t value) {
		return ((T (*)(BRGame*, uintptr_t))(Il2CppBase() + 0x18F92AC))(this, value);
	}
	template <typename T = uintptr_t> T get_SceneGuiMgr() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x18F92B4))(this);
	}
	template <typename T = void> T set_SceneGuiMgr(uintptr_t value) {
		return ((T (*)(BRGame*, uintptr_t))(Il2CppBase() + 0x18F92BC))(this, value);
	}
	template <typename T = uintptr_t> T get_Landscape() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x18F92C4))(this);
	}
	template <typename T = float> static T get_LocalPlayerWorldCameraFOV() {
		return ((T (*)(void *))(Il2CppBase() + 0x18F92CC))(0);
	}
	template <typename T = bool> T get_EnableAutoCheckMantle() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x18F946C))(this);
	}
	template <typename T = void> T CreateGameComponents() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x18F9474))(this);
	}
	template <typename T = void> T ApplyShift(Il2CppVector3 shift) {
		return ((T (*)(BRGame*, Il2CppVector3))(Il2CppBase() + 0x18F9838))(this, shift);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x18F9C0C))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x18FA63C))(this);
	}
	template <typename T = void> T AddPawn(uintptr_t pawn) {
		return ((T (*)(BRGame*, uintptr_t))(Il2CppBase() + 0x18FA82C))(this, pawn);
	}
	template <typename T = void> T RefreshTeamPawns() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x18FA8F4))(this);
	}
	template <typename T = void> T RefreshTeamAndEnemyPawns() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x18FACC0))(this);
	}
	template <typename T = void> T GetTeamPawns(uint32_t teamID, uintptr_t* teamPawnList) {
		return ((T (*)(BRGame*, uint32_t, uintptr_t*))(Il2CppBase() + 0x18FAD7C))(this, teamID, teamPawnList);
	}
	template <typename T = void> T GetTeamPawns_1(uintptr_t* teamPawnList) {
		return ((T (*)(BRGame*, uintptr_t*))(Il2CppBase() + 0x18FB02C))(this, teamPawnList);
	}
	template <typename T = uintptr_t> T CreatePlayerController(uintptr_t camp, Il2CppVector3 SpawnLocation, Il2CppQuaternion SpawnRotation) {
		return ((T (*)(BRGame*, uintptr_t, Il2CppVector3, Il2CppQuaternion))(Il2CppBase() + 0x18FB370))(this, camp, SpawnLocation, SpawnRotation);
	}
	template <typename T = uintptr_t> T SpawnOtherPawnWithoutReused(uint32_t PlayerID, uint64_t RoleID, uint32_t actorID, Il2CppVector3 SpawnLocation, Il2CppQuaternion SpawnRotation, uintptr_t camp) {
		return ((T (*)(BRGame*, uint32_t, uint64_t, uint32_t, Il2CppVector3, Il2CppQuaternion, uintptr_t))(Il2CppBase() + 0x18FB610))(this, PlayerID, RoleID, actorID, SpawnLocation, SpawnRotation, camp);
	}
	template <typename T = uintptr_t> T SpawnLocalPawn(uintptr_t controller, uint32_t PlayerID, uint64_t RoleID, uint32_t actorID, Il2CppVector3 SpawnLocation, Il2CppQuaternion SpawnRotation, uintptr_t camp) {
		return ((T (*)(BRGame*, uintptr_t, uint32_t, uint64_t, uint32_t, Il2CppVector3, Il2CppQuaternion, uintptr_t))(Il2CppBase() + 0x18FB7E0))(this, controller, PlayerID, RoleID, actorID, SpawnLocation, SpawnRotation, camp);
	}
	template <typename T = void> T PlayerLogin(uint32_t playerID, uint32_t actorID, uintptr_t camp, Il2CppString* nickName, unsigned char loginMsg, int32_t picId, int32_t frameId, Il2CppString* PicUrl, int32_t LadderScore, uint64_t roleID, int32_t moveState, int32_t LadderLevel, uint32_t ownerPlayerID) {
		return ((T (*)(BRGame*, uint32_t, uint32_t, uintptr_t, Il2CppString*, unsigned char, int32_t, int32_t, Il2CppString*, int32_t, uint64_t, int32_t, int32_t, uint32_t))(Il2CppBase() + 0x18FBB04))(this, playerID, actorID, camp, nickName, loginMsg, picId, frameId, PicUrl, LadderScore, roleID, moveState, LadderLevel, ownerPlayerID);
	}
	template <typename T = void> T InitPawnVirtualSound(uint32_t playerID) {
		return ((T (*)(BRGame*, uint32_t))(Il2CppBase() + 0x18FBC7C))(this, playerID);
	}
	template <typename T = void> T InitMaxPickUpDistance() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x18FA3E0))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetPickUpListInBox(int32_t boxActorId) {
		return ((T (*)(BRGame*, int32_t))(Il2CppBase() + 0x18FBE70))(this, boxActorId);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_CurrentPickupDataList() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x18FC084))(this);
	}
	template <typename T = bool> T UpdateCurrentPickupList() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x18FC08C))(this);
	}
	template <typename T = int32_t> T GetNearbyViewShowItemCount(uintptr_t nearbyType) {
		return ((T (*)(BRGame*, uintptr_t))(Il2CppBase() + 0x18FCD5C))(this, nearbyType);
	}
	template <typename T = bool> static T IsRaycastStaticActor(Il2CppVector3 playerPos, Il2CppVector3 targetPos, float distance) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x18FC6B0))(0, playerPos, targetPos, distance);
	}
	template <typename T = bool> static T IsPickupIgnoreCollider(uintptr_t collider) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x18FCE54))(0, collider);
	}
	template <typename T = bool> static T IsDroppedPickUpListChanged(Il2CppList<uintptr_t>* oldList, Il2CppList<uintptr_t>* newList) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x18FCB90))(0, oldList, newList);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(BRGame*, float))(Il2CppBase() + 0x18FCFC0))(this, deltaTime);
	}
	template <typename T = void> T IntervalUpdateAirborneMapShowInfo(float deltaTime) {
		return ((T (*)(BRGame*, float))(Il2CppBase() + 0x18FD9F4))(this, deltaTime);
	}
	template <typename T = void> T PropPawnMgrCheck(float deltaTime) {
		return ((T (*)(BRGame*, float))(Il2CppBase() + 0x18FD8A8))(this, deltaTime);
	}
	template <typename T = void> T RemoveOverTimePropPawn() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x18FDEC8))(this);
	}
	template <typename T = void> T ResetPropPawnMgr() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x18FE570))(this);
	}
	template <typename T = bool> T IsCanSpectate3pView() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x18FEB50))(this);
	}
	template <typename T = bool> T CanSpectateOB(uint32_t playerId) {
		return ((T (*)(BRGame*, uint32_t))(Il2CppBase() + 0x18FEC68))(this, playerId);
	}
	template <typename T = bool> T CanSpectate(uintptr_t viewTarget) {
		return ((T (*)(BRGame*, uintptr_t))(Il2CppBase() + 0x18FEEE8))(this, viewTarget);
	}
	template <typename T = bool> T CanSpectateCheckPawn(uintptr_t viewTarget) {
		return ((T (*)(BRGame*, uintptr_t))(Il2CppBase() + 0x18FF154))(this, viewTarget);
	}
	template <typename T = bool> T CanSpectateCheckTeam(uintptr_t viewTarget) {
		return ((T (*)(BRGame*, uintptr_t))(Il2CppBase() + 0x18FF2E0))(this, viewTarget);
	}
	template <typename T = bool> T CanSpectateCheckInAir_OB(uintptr_t viewTarget) {
		return ((T (*)(BRGame*, uintptr_t))(Il2CppBase() + 0x18FEDB8))(this, viewTarget);
	}
	template <typename T = bool> T CanSpectateCheckInAir(uintptr_t viewTarget) {
		return ((T (*)(BRGame*, uintptr_t))(Il2CppBase() + 0x18FF570))(this, viewTarget);
	}
	template <typename T = void> T CheckShowNoObserverQuit() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x18FD674))(this);
	}
	template <typename T = bool> T DoCheckShowNoObserverQuit() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x18FFA7C))(this);
	}
	template <typename T = void> T ShowNoObserverQuit() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x18FFF58))(this);
	}
	template <typename T = void> T HideNoObserverQuit() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x19001B0))(this);
	}
	template <typename T = void> T OnNoObserverQuit(uintptr_t result, int32_t context) {
		return ((T (*)(BRGame*, uintptr_t, int32_t))(Il2CppBase() + 0x1900298))(this, result, context);
	}
	template <typename T = bool> T SpectateKillerAfterDead(uintptr_t deadPlayer, uintptr_t damageType) {
		return ((T (*)(BRGame*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1900430))(this, deadPlayer, damageType);
	}
	template <typename T = void> T EndMatch() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x1900B14))(this);
	}
	template <typename T = void> T AddSceneActorInfo(uint32_t actorId, unsigned char actorType, uint32_t clientUID, unsigned char subType, Il2CppVector3 pos, Il2CppVector3 rot, uint32_t clientParam) {
		return ((T (*)(BRGame*, uint32_t, unsigned char, uint32_t, unsigned char, Il2CppVector3, Il2CppVector3, uint32_t))(Il2CppBase() + 0x1900BD0))(this, actorId, actorType, clientUID, subType, pos, rot, clientParam);
	}
	template <typename T = void> T OnActorRelevant(uint32_t id, Il2CppVector3 position, Il2CppVector3 rotation, unsigned char relevantObjType) {
		return ((T (*)(BRGame*, uint32_t, Il2CppVector3, Il2CppVector3, unsigned char))(Il2CppBase() + 0x1900F54))(this, id, position, rotation, relevantObjType);
	}
	template <typename T = void> T OnActorIRRelevant(uint32_t actorId, unsigned char relevantObjtype) {
		return ((T (*)(BRGame*, uint32_t, unsigned char))(Il2CppBase() + 0x19010E8))(this, actorId, relevantObjtype);
	}
	template <typename T = void> T TickDroppedPickUp(float deltaTime) {
		return ((T (*)(BRGame*, float))(Il2CppBase() + 0x190136C))(this, deltaTime);
	}
	template <typename T = void> T TryDeleteDroppedPickUp(int32_t inActorID, uint32_t pickedByPlayerId) {
		return ((T (*)(BRGame*, int32_t, uint32_t))(Il2CppBase() + 0x190140C))(this, inActorID, pickedByPlayerId);
	}
	template <typename T = void> T BatchDeleteDroppedPickUp(int32_t inActorID) {
		return ((T (*)(BRGame*, int32_t))(Il2CppBase() + 0x1901540))(this, inActorID);
	}
	template <typename T = void> T ClearAllDroppedPickUp() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x190165C))(this);
	}
	template <typename T = uintptr_t> T GetPickupBoxEntity(int32_t actorId) {
		return ((T (*)(BRGame*, int32_t))(Il2CppBase() + 0x1901768))(this, actorId);
	}
	template <typename T = uintptr_t> T GetPickupEntity(int32_t actorId) {
		return ((T (*)(BRGame*, int32_t))(Il2CppBase() + 0x190188C))(this, actorId);
	}
	template <typename T = void> T ForEachPickupEntity(void* callback) {
		return ((T (*)(BRGame*, void*))(Il2CppBase() + 0x19019B0))(this, callback);
	}
	template <typename T = void> T ForEachPickupBoxEntity(void* callback) {
		return ((T (*)(BRGame*, void*))(Il2CppBase() + 0x1901AD0))(this, callback);
	}
	template <typename T = uintptr_t> T GetPickupData(int32_t actorId) {
		return ((T (*)(BRGame*, int32_t))(Il2CppBase() + 0x1901BF0))(this, actorId);
	}
	template <typename T = uintptr_t> T get_PickupMsgScheduler() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x1901D34))(this);
	}
	template <typename T = void> T TickDroppedPickupBoxEffect() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x18FD3A8))(this);
	}
	template <typename T = void> T CreateSandStormCylinder() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x18FA12C))(this);
	}
	template <typename T = void> T CreateNonBattleAreaEdge() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x18FA2C8))(this);
	}
	template <typename T = void> T AddDyingTeammates(uint32_t playerid) {
		return ((T (*)(BRGame*, uint32_t))(Il2CppBase() + 0x1901D3C))(this, playerid);
	}
	template <typename T = void> T RemoveDyingTeammates(uint32_t playerid) {
		return ((T (*)(BRGame*, uint32_t))(Il2CppBase() + 0x1901E54))(this, playerid);
	}
	template <typename T = void> T RemoveBRDoor() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x1901F6C))(this);
	}
	template <typename T = void> T RemoveBRDoor_1(uint32_t uid) {
		return ((T (*)(BRGame*, uint32_t))(Il2CppBase() + 0x1902028))(this, uid);
	}
	template <typename T = bool> T OnReSpawnPlayer(uintptr_t syncRespawnMsg) {
		return ((T (*)(BRGame*, uintptr_t))(Il2CppBase() + 0x19020F0))(this, syncRespawnMsg);
	}
	template <typename T = uintptr_t> T OnSpawnNonPlayer(uintptr_t Msg) {
		return ((T (*)(BRGame*, uintptr_t))(Il2CppBase() + 0x19022B8))(this, Msg);
	}
	template <typename T = void> T ChangeToReplay() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x1902928))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x19029D8))(this);
	}
	template <typename T = void> T ResetInvisibleSound() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x1903BD4))(this);
	}
	template <typename T = void> T ResetProjectileLockTarget() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x1903514))(this);
	}
	template <typename T = bool> T FilterFriendGrenade(uintptr_t proj) {
		return ((T (*)(BRGame*, uintptr_t))(Il2CppBase() + 0x1903DBC))(this, proj);
	}
	template <typename T = void> T ResetSubWeaponInfo() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x19031FC))(this);
	}
	template <typename T = void> T ResetUpwardLaunchInfo() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x1903FB0))(this);
	}
	template <typename T = void> T ResetBRLocalPawn() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x1903394))(this);
	}
	template <typename T = void> T OnStartAirCraft() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x190414C))(this);
	}
	template <typename T = void> T OnNotifyPickupDespawn(uintptr_t pickup) {
		return ((T (*)(BRGame*, uintptr_t))(Il2CppBase() + 0x18C62C4))(this, pickup);
	}
	template <typename T = void> T ResetPsychosisState() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x1902FBC))(this);
	}
	template <typename T = uintptr_t> T SpawnVehicle(uint32_t actorID, uintptr_t vehicleType, Il2CppVector3 SpawnLocation, Il2CppQuaternion SpawnRotation, void* CallbackFun) {
		return ((T (*)(BRGame*, uint32_t, uintptr_t, Il2CppVector3, Il2CppQuaternion, void*))(Il2CppBase() + 0x190432C))(this, actorID, vehicleType, SpawnLocation, SpawnRotation, CallbackFun);
	}
	template <typename T = void> T OnLocalPawnEndSkyDiving() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x190458C))(this);
	}
	template <typename T = void> T InitTLog() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x1904624))(this);
	}
	template <typename T = void> T TLogProcess() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x1904768))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CreateGameComponents() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x1904930))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ApplyShift(Il2CppVector3 P0) {
		return ((T (*)(BRGame*, Il2CppVector3))(Il2CppBase() + 0x1904938))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x1904958))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x1904960))(this);
	}
	template <typename T = void> T xLuaBaseProxy_AddPawn(uintptr_t P0) {
		return ((T (*)(BRGame*, uintptr_t))(Il2CppBase() + 0x1904968))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshTeamPawns() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x1904970))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshTeamAndEnemyPawns() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x1904978))(this);
	}
	template <typename T = void> T xLuaBaseProxy_GetTeamPawns(uintptr_t* P0) {
		return ((T (*)(BRGame*, uintptr_t*))(Il2CppBase() + 0x1904980))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_CreatePlayerController(uintptr_t P0, Il2CppVector3 P1, Il2CppQuaternion P2) {
		return ((T (*)(BRGame*, uintptr_t, Il2CppVector3, Il2CppQuaternion))(Il2CppBase() + 0x1904988))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_SpawnOtherPawnWithoutReused(uint32_t P0, uint64_t P1, uint32_t P2, Il2CppVector3 P3, Il2CppQuaternion P4, uintptr_t P5) {
		return ((T (*)(BRGame*, uint32_t, uint64_t, uint32_t, Il2CppVector3, Il2CppQuaternion, uintptr_t))(Il2CppBase() + 0x19049CC))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_SpawnLocalPawn(uintptr_t P0, uint32_t P1, uint64_t P2, uint32_t P3, Il2CppVector3 P4, Il2CppQuaternion P5, uintptr_t P6) {
		return ((T (*)(BRGame*, uintptr_t, uint32_t, uint64_t, uint32_t, Il2CppVector3, Il2CppQuaternion, uintptr_t))(Il2CppBase() + 0x1904A28))(this, P0, P1, P2, P3, P4, P5, P6);
	}
	template <typename T = void> T xLuaBaseProxy_PlayerLogin(uint32_t P0, uint32_t P1, uintptr_t P2, Il2CppString* P3, unsigned char P4, int32_t P5, int32_t P6, Il2CppString* P7, int32_t P8, uint64_t P9, int32_t P10, int32_t P11, uint32_t P12) {
		return ((T (*)(BRGame*, uint32_t, uint32_t, uintptr_t, Il2CppString*, unsigned char, int32_t, int32_t, Il2CppString*, int32_t, uint64_t, int32_t, int32_t, uint32_t))(Il2CppBase() + 0x1904A88))(this, P0, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRGame*, float))(Il2CppBase() + 0x1904AF8))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_IsCanSpectate3pView() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x1904B00))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CanSpectateOB(uint32_t P0) {
		return ((T (*)(BRGame*, uint32_t))(Il2CppBase() + 0x1904B08))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_CanSpectate(uintptr_t P0) {
		return ((T (*)(BRGame*, uintptr_t))(Il2CppBase() + 0x1904B10))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_EndMatch() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x1904B18))(this);
	}
	template <typename T = void> T xLuaBaseProxy_AddSceneActorInfo(uint32_t P0, unsigned char P1, uint32_t P2, unsigned char P3, Il2CppVector3 P4, Il2CppVector3 P5, uint32_t P6) {
		return ((T (*)(BRGame*, uint32_t, unsigned char, uint32_t, unsigned char, Il2CppVector3, Il2CppVector3, uint32_t))(Il2CppBase() + 0x1904B20))(this, P0, P1, P2, P3, P4, P5, P6);
	}
	template <typename T = void> T xLuaBaseProxy_OnActorRelevant(uint32_t P0, Il2CppVector3 P1, Il2CppVector3 P2, unsigned char P3) {
		return ((T (*)(BRGame*, uint32_t, Il2CppVector3, Il2CppVector3, unsigned char))(Il2CppBase() + 0x1904B78))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T xLuaBaseProxy_OnActorIRRelevant(uint32_t P0, unsigned char P1) {
		return ((T (*)(BRGame*, uint32_t, unsigned char))(Il2CppBase() + 0x1904BBC))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_TickDroppedPickUp(float P0) {
		return ((T (*)(BRGame*, float))(Il2CppBase() + 0x1904BC4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_TryDeleteDroppedPickUp(int32_t P0, uint32_t P1) {
		return ((T (*)(BRGame*, int32_t, uint32_t))(Il2CppBase() + 0x1904BCC))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_BatchDeleteDroppedPickUp(int32_t P0) {
		return ((T (*)(BRGame*, int32_t))(Il2CppBase() + 0x1904BD4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ClearAllDroppedPickUp() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x1904BDC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_OnSpawnNonPlayer(uintptr_t P0) {
		return ((T (*)(BRGame*, uintptr_t))(Il2CppBase() + 0x1904BE4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ChangeToReplay() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x1904BEC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x1904BF4))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_FilterFriendGrenade(uintptr_t P0) {
		return ((T (*)(BRGame*, uintptr_t))(Il2CppBase() + 0x1904BFC))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_SpawnVehicle(uint32_t P0, uintptr_t P1, Il2CppVector3 P2, Il2CppQuaternion P3, void* P4) {
		return ((T (*)(BRGame*, uint32_t, uintptr_t, Il2CppVector3, Il2CppQuaternion, void*))(Il2CppBase() + 0x1904C04))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T xLuaBaseProxy_InitTLog() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x1904C50))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TLogProcess() {
		return ((T (*)(BRGame*))(Il2CppBase() + 0x1904C58))(this);
	}

};

}
