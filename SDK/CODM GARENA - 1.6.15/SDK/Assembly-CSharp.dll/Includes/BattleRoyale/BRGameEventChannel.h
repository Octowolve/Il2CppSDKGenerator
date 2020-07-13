#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRGameEventChannel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRGameEventChannel"));
	}

	template <typename T = Il2CppDictionary<uint32_t, float>*> T& m_LastReceiveHelpTimeDict() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& ReceiveHelpCoolDown() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncMinimapMark() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAddArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDelArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncFlyStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncAircraftStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnVehicleMachineError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasterGrenadeHit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAddDroppedPickUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDeleteDroppedPickUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBatchDeleteDroppedPickUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChoiceProfessionChipResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPreChoiceProfessionChipNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetOwnProfessionChipInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncZombieZoneData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncCollectionItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncLotteryMachine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSpawnBRChipMachine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncBRChipMachine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncBRSkillLevelUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAddBRMapMarks() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncLocalPlayerSaveResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReConnectComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncRelevantInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncIRRelevantInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BaseRespawnPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckLocalPawnRespawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReSpawnPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBrRevive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrRevive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAddVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDeleteVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAddProp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDelProp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnModifyProp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncSwitchWeaponPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResSwitchWeaponPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncAllProp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncUseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncEndUseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUseUltRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResPickUpItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyDiscaredItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyEquipPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyUnEquipPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTipsHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBritemFeedback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayerSyncBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayerTransferBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncAirDropPlane() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncAirDrop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReceiveBatchAIMoveData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResOpenBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncPickupNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncBrokenWindows() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncBreakWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncBreakObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncBuffTakeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncExtraDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNtfAddBRMark() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNtfDelBRMark() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNtfResponseBRMark() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncTeamBRMark() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNtfKeyEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoleTalk() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncProcessAirborneActorStat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreatFixedAirborne() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshFixedAirborne() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncProcessEjectorActorStat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncProcessElectricTripWireBaseStat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncActorStat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZoneActived() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnExitObserver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSpectatePlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTryUseUltCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncActorLinkStat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncAddZipline() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReceiveHelpMeMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncPickupAreaInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}

	template <typename T = void> T Init() {
		return ((T (*)(BRGameEventChannel*))(Il2CppBase() + 0x1906714))(this);
	}
	template <typename T = void> T OnSyncMinimapMark(uintptr_t msg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x1907364))(this, msg);
	}
	template <typename T = void> T OnAddArea(uintptr_t msg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x1907D5C))(this, msg);
	}
	template <typename T = void> T OnDelArea(uintptr_t msg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x19085AC))(this, msg);
	}
	template <typename T = void> T OnSyncFlyStatus(uintptr_t Msg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x19088B4))(this, Msg);
	}
	template <typename T = void> T SyncAircraftStatus(uintptr_t inMsg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x19089D0))(this, inMsg);
	}
	template <typename T = void> T OnSyncNotify(uintptr_t Msg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x1908C94))(this, Msg);
	}
	template <typename T = void> T OnVehicleMachineError(uint32_t playerId) {
		return ((T (*)(BRGameEventChannel*, uint32_t))(Il2CppBase() + 0x190B050))(this, playerId);
	}
	template <typename T = void> T OnEasterGrenadeHit(uint32_t attPlayerId, uint32_t hitPlayerId) {
		return ((T (*)(BRGameEventChannel*, uint32_t, uint32_t))(Il2CppBase() + 0x190AB44))(this, attPlayerId, hitPlayerId);
	}
	template <typename T = void> T OnAddDroppedPickUp(uintptr_t inMsg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x190B2C0))(this, inMsg);
	}
	template <typename T = void> T OnDeleteDroppedPickUp(uintptr_t inMsg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x190C578))(this, inMsg);
	}
	template <typename T = void> T OnBatchDeleteDroppedPickUp(uintptr_t inMsg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x190C974))(this, inMsg);
	}
	template <typename T = void> T OnChoiceProfessionChipResponse(uintptr_t inMsg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x190CBA0))(this, inMsg);
	}
	template <typename T = void> T OnPreChoiceProfessionChipNotify(uintptr_t inMsg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x190CD4C))(this, inMsg);
	}
	template <typename T = void> T OnGetOwnProfessionChipInfo(uintptr_t inMsg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x190CDEC))(this, inMsg);
	}
	template <typename T = void> T OnSyncZombieZoneData(uintptr_t inMsg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x190D040))(this, inMsg);
	}
	template <typename T = void> T OnSyncCollectionItem(uintptr_t inMsg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x190D170))(this, inMsg);
	}
	template <typename T = void> T OnSyncLotteryMachine(uintptr_t inMsg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x190D2DC))(this, inMsg);
	}
	template <typename T = void> T OnSpawnBRChipMachine(uintptr_t inMsg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x190D598))(this, inMsg);
	}
	template <typename T = void> T OnSyncBRChipMachine(uintptr_t inMsg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x190D708))(this, inMsg);
	}
	template <typename T = void> T OnSyncBRSkillLevelUp(uintptr_t inMsg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x190D838))(this, inMsg);
	}
	template <typename T = void> T OnAddBRMapMarks(uintptr_t inMsg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x190DAA8))(this, inMsg);
	}
	template <typename T = void> T OnSyncLocalPlayerSaveResult(uintptr_t inMsg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x190DF00))(this, inMsg);
	}
	template <typename T = void> T OnRoundStart(uintptr_t Msg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x190E824))(this, Msg);
	}
	template <typename T = void> T OnRoundEnd(uintptr_t Msg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x190E9BC))(this, Msg);
	}
	template <typename T = void> T OnReConnectComplete(uintptr_t msg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x190EA5C))(this, msg);
	}
	template <typename T = void> T OnSyncRelevantInfo(uintptr_t msg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x190F074))(this, msg);
	}
	template <typename T = void> T OnSyncIRRelevantInfo(uintptr_t msg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x190F410))(this, msg);
	}
	template <typename T = void> T BaseRespawnPlayer(uintptr_t Msg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x1902204))(this, Msg);
	}
	template <typename T = uintptr_t> T CheckLocalPawnRespawn(uintptr_t playerInfo, uintptr_t oldPawn) {
		return ((T (*)(BRGameEventChannel*, uintptr_t, uintptr_t))(Il2CppBase() + 0x190F68C))(this, playerInfo, oldPawn);
	}
	template <typename T = void> T OnReSpawnPlayer(uintptr_t Msg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x190F74C))(this, Msg);
	}
	template <typename T = bool> T IsBrRevive(uintptr_t syncRespawnMsg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x191072C))(this, syncRespawnMsg);
	}
	template <typename T = void> T OnBrRevive(uintptr_t syncRespawnMsg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x190FA28))(this, syncRespawnMsg);
	}
	template <typename T = void> T OnAddVehicle(uintptr_t inMsg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x1910A28))(this, inMsg);
	}
	template <typename T = void> T OnDeleteVehicle(uintptr_t inMsg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x1910C5C))(this, inMsg);
	}
	template <typename T = void> T OnAddProp(uintptr_t msg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x19110A4))(this, msg);
	}
	template <typename T = void> T OnDelProp(uintptr_t msg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x191183C))(this, msg);
	}
	template <typename T = void> T OnModifyProp(uintptr_t msg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x1911BDC))(this, msg);
	}
	template <typename T = void> T OnSyncSwitchWeaponPos(uintptr_t msg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x1911FE4))(this, msg);
	}
	template <typename T = void> T OnResSwitchWeaponPos(uintptr_t msg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x19123E4))(this, msg);
	}
	template <typename T = void> T OnSyncAllProp(uintptr_t msg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x1912830))(this, msg);
	}
	template <typename T = void> T OnSyncUseItem(uintptr_t msg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x1912A08))(this, msg);
	}
	template <typename T = void> T OnSyncEndUseItem(uintptr_t msg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x1913350))(this, msg);
	}
	template <typename T = void> T OnUseUltRes(uintptr_t Msg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x1913898))(this, Msg);
	}
	template <typename T = void> T ResPickUpItem(uintptr_t Msg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x1913A30))(this, Msg);
	}
	template <typename T = void> T OnNotifyDiscaredItem(uintptr_t msg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x1913F0C))(this, msg);
	}
	template <typename T = void> T OnNotifyEquipPart(uintptr_t msg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x19140A0))(this, msg);
	}
	template <typename T = void> T OnNotifyUnEquipPart(uintptr_t msg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x19141D4))(this, msg);
	}
	template <typename T = void> static T ShowTipsHandler(int32_t errorCode, int32_t curItemId, int32_t ownerItemId) {
		return ((T (*)(void *, int32_t, int32_t, int32_t))(Il2CppBase() + 0x1912758))(0, errorCode, curItemId, ownerItemId);
	}
	template <typename T = void> T OnNotifyBritemFeedback(uintptr_t msg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x1914308))(this, msg);
	}
	template <typename T = void> T OnPlayerSyncBuffer(uintptr_t Msg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x1914454))(this, Msg);
	}
	template <typename T = void> T OnPlayerTransferBuffer(uintptr_t Msg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x19149F0))(this, Msg);
	}
	template <typename T = void> T OnSyncAirDropPlane(uintptr_t Msg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x1914C34))(this, Msg);
	}
	template <typename T = void> T OnSyncAirDrop(uintptr_t Msg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x1914D90))(this, Msg);
	}
	template <typename T = void> T OnReceiveBatchAIMoveData(uintptr_t inMsg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x1914EEC))(this, inMsg);
	}
	template <typename T = void> T OnResOpenBox(uintptr_t msg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x191528C))(this, msg);
	}
	template <typename T = void> T OnSyncPickupNtf(uintptr_t msg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x1915608))(this, msg);
	}
	template <typename T = void> T OnSyncBrokenWindows(uintptr_t Msg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x1915770))(this, Msg);
	}
	template <typename T = void> T OnSyncBreakWindow(uintptr_t Msg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x19158DC))(this, Msg);
	}
	template <typename T = void> T OnSyncBreakObject(uintptr_t inMsg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x1915B30))(this, inMsg);
	}
	template <typename T = void> T OnSyncBuffTakeEffect(uintptr_t inMsg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x1915D28))(this, inMsg);
	}
	template <typename T = void> T OnSyncExtraDamage(uintptr_t Msg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x1916194))(this, Msg);
	}
	template <typename T = void> T OnNtfAddBRMark(uintptr_t Msg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x19166D8))(this, Msg);
	}
	template <typename T = void> T OnNtfDelBRMark(uintptr_t Msg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x1916950))(this, Msg);
	}
	template <typename T = void> T OnNtfResponseBRMark(uintptr_t Msg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x1916AF4))(this, Msg);
	}
	template <typename T = void> T OnSyncTeamBRMark(uintptr_t Msg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x1916C90))(this, Msg);
	}
	template <typename T = void> T OnSyncItems(uintptr_t Msg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x1916E20))(this, Msg);
	}
	template <typename T = void> T OnNtfKeyEvent(uintptr_t Msg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x1917408))(this, Msg);
	}
	template <typename T = void> T OnRoleTalk(uintptr_t Msg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x1917CF4))(this, Msg);
	}
	template <typename T = void> T OnSyncProcessAirborneActorStat(uintptr_t actorStat, bool isFixed) {
		return ((T (*)(BRGameEventChannel*, uintptr_t, bool))(Il2CppBase() + 0x19180A4))(this, actorStat, isFixed);
	}
	template <typename T = void> T CreatFixedAirborne(uintptr_t actorStat, uintptr_t airborneExtParam) {
		return ((T (*)(BRGameEventChannel*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1918FFC))(this, actorStat, airborneExtParam);
	}
	template <typename T = void> T RefreshFixedAirborne(uintptr_t actorStat, uintptr_t airborneExtParam) {
		return ((T (*)(BRGameEventChannel*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1919548))(this, actorStat, airborneExtParam);
	}
	template <typename T = void> T OnSyncProcessEjectorActorStat(uintptr_t actorStat) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x1919784))(this, actorStat);
	}
	template <typename T = void> T OnSyncProcessElectricTripWireBaseStat(uintptr_t actorStat) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x191A9F0))(this, actorStat);
	}
	template <typename T = void> T OnSyncActorStat(uintptr_t Msg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x191AAAC))(this, Msg);
	}
	template <typename T = void> T OnZoneActived(uintptr_t Msg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x191ACC8))(this, Msg);
	}
	template <typename T = void> T OnExitObserver(uintptr_t Msg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x191B090))(this, Msg);
	}
	template <typename T = void> T OnSpectatePlayer(uintptr_t Msg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x191B154))(this, Msg);
	}
	template <typename T = void> T OnTryUseUltCallBack(bool bSuccess) {
		return ((T (*)(BRGameEventChannel*, bool))(Il2CppBase() + 0x191B2A8))(this, bSuccess);
	}
	template <typename T = void> T OnSyncActorLinkStat(uintptr_t Msg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x191B35C))(this, Msg);
	}
	template <typename T = void> T OnSyncAddZipline(uintptr_t Msg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x191B498))(this, Msg);
	}
	template <typename T = void> T OnReceiveHelpMeMsg(uint32_t playerID, bool isPickupOrUse) {
		return ((T (*)(BRGameEventChannel*, uint32_t, bool))(Il2CppBase() + 0x190A990))(this, playerID, isPickupOrUse);
	}
	template <typename T = void> T OnSyncPickupAreaInfo(uintptr_t Msg) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x191B974))(this, Msg);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRGameEventChannel*))(Il2CppBase() + 0x191BB68))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncFlyStatus(uintptr_t P0) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x191BB70))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncNotify(uintptr_t P0) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x191BB78))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnAddDroppedPickUp(uintptr_t P0) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x191BB80))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnDeleteDroppedPickUp(uintptr_t P0) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x191BB88))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnBatchDeleteDroppedPickUp(uintptr_t P0) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x191BB90))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundStart(uintptr_t P0) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x191BB98))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundEnd(uintptr_t P0) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x191BBA0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnReConnectComplete(uintptr_t P0) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x191BBA8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncRelevantInfo(uintptr_t P0) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x191BBB0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncIRRelevantInfo(uintptr_t P0) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x191BBB8))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_CheckLocalPawnRespawn(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(BRGameEventChannel*, uintptr_t, uintptr_t))(Il2CppBase() + 0x191BBC0))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnReSpawnPlayer(uintptr_t P0) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x191BBC8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnAddVehicle(uintptr_t P0) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x191BBD0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnDeleteVehicle(uintptr_t P0) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x191BBD8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnUseUltRes(uintptr_t P0) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x191BBE0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ResPickUpItem(uintptr_t P0) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x191BBE8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnPlayerSyncBuffer(uintptr_t P0) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x191BBF0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnPlayerTransferBuffer(uintptr_t P0) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x191BBF8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnReceiveBatchAIMoveData(uintptr_t P0) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x191BC00))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnResOpenBox(uintptr_t P0) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x191BC08))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncPickupNtf(uintptr_t P0) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x191BC10))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncBreakObject(uintptr_t P0) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x191BC18))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncBuffTakeEffect(uintptr_t P0) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x191BC20))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncExtraDamage(uintptr_t P0) {
		return ((T (*)(BRGameEventChannel*, uintptr_t))(Il2CppBase() + 0x191BC28))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnTryUseUltCallBack(bool P0) {
		return ((T (*)(BRGameEventChannel*, bool))(Il2CppBase() + 0x191BC30))(this, P0);
	}

};

}
