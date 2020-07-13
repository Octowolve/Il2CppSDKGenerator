#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class GameEventChannel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "GameEventChannel"));
	}

	template <typename T = uintptr_t> T& m_Game() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> static T& CTX_RECONNECT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CTX_BACKTOFRONTEND() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& bResumeFlushProcessProtocol() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_PickupInWaterOffset() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_CheckWaterLineLength() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_LayerWaterMask() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& mSpeedLine() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uint32_t>*> T& buffUIDList() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_FireEffectDuration() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncCombatArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncClientEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNtfSwitchLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncSceneObjectsValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNtfSceneObjectState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncExtraDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncProjectileLockTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBeginFPSMonitor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStopFPSMonitor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCreatePlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessInt8SimulateGameInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessInt32SimulateGameInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendGameResultToZone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisconnectMessageBoxCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryReconnectDS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisconnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReconnectDS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDSReset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IgnoreDSReset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUdpAbnormal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConfirmDSReset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNetWorkInstabilityNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReConnectComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSimulateGameInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSimulateSelfPlayerInfoUINT8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSimulateSelfPlayerInfoUINT32() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSimulateOtherPlayerInfoUINT8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSimulateOtherPlayerInfoUINT32() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayerLogout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnKickOff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNtyGameTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncPvePassTask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncBuilding() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEndMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReSpawnPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckOtherPawnReset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckBagIDChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsKillerInReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_KillerRespawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckLocalPawnRespawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayerLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAddActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDelActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IgnoreInGamePlay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSpawnNewProjectile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNtfProjectileStick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncProjectileStick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnServerSyncUseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnServerSyncEndUseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnServerSyncPerkData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayerChangeMoveState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayerStartSprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayerStopSprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSpawnDroppedPickUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAddDroppedPickUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDeleteDroppedPickUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBatchDeleteDroppedPickUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckInWater() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAddVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AutoGetOnVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDeleteVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncUseVehicleSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncUseVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncVehicleInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncBreakObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncBuffTakeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayFeedback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckBuffType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSpeedline() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideSpeedline() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncBuffInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncModifiers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncGameMission() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMatchPreparation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MakeAllPawnFullHealth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUseUltRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTryUseUltCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncAreaEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEffectLoadOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncDomArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncHardPointInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResDSTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x164);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncServerTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNtfTestRespawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x16C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayerSyncBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DealWithActorPose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x174);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayerTransferBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnServerDebugInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x17C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnServerAIDebugInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnServerDebugDraw() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x184);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncRelevantInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncIRRelevantInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSynUseIndividuationItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResPickUpItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x194);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyGVoiceID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResOpenBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x19C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncPickupNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncLua() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReceiveBatchAIMoveData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShakeOffDizzy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1AC);
	}

	template <typename T = void> T Init() {
		return ((T (*)(GameEventChannel*))(Il2CppBase() + 0x31F7948))(this);
	}
	template <typename T = void> T OnSyncCombatArea(uintptr_t Msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x31F9580))(this, Msg);
	}
	template <typename T = void> T OnSyncClientEvent(uintptr_t Msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x31F9784))(this, Msg);
	}
	template <typename T = void> T OnNtfSwitchLevel(uintptr_t inMsg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x31F99BC))(this, inMsg);
	}
	template <typename T = void> T OnSyncSceneObjectsValue(uintptr_t Msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x31F9B10))(this, Msg);
	}
	template <typename T = void> T OnNtfSceneObjectState(uintptr_t Msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x31F9D24))(this, Msg);
	}
	template <typename T = void> T OnSyncExtraDamage(uintptr_t Msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x31F9F14))(this, Msg);
	}
	template <typename T = void> T OnSyncProjectileLockTarget(uintptr_t Msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x31FAC4C))(this, Msg);
	}
	template <typename T = void> T OnBeginFPSMonitor(uintptr_t inMsg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x31FB428))(this, inMsg);
	}
	template <typename T = void> T OnStopFPSMonitor(uintptr_t inMsg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x31FB4EC))(this, inMsg);
	}
	template <typename T = void> T OnCreatePlayer(uintptr_t msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x31FB5B0))(this, msg);
	}
	template <typename T = void> T ProcessInt8SimulateGameInfo(uintptr_t msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x31FB7A8))(this, msg);
	}
	template <typename T = void> T ProcessInt32SimulateGameInfo(uintptr_t msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x31FB99C))(this, msg);
	}
	template <typename T = void> T SendGameResultToZone(bool isquit) {
		return ((T (*)(GameEventChannel*, bool))(Il2CppBase() + 0x31FBB90))(this, isquit);
	}
	template <typename T = void> T OnDisconnectMessageBoxCallback(uintptr_t result, int32_t userContext) {
		return ((T (*)(GameEventChannel*, uintptr_t, int32_t))(Il2CppBase() + 0x31FBC30))(this, result, userContext);
	}
	template <typename T = void> T TryReconnectDS() {
		return ((T (*)(GameEventChannel*))(Il2CppBase() + 0x31FBF24))(this);
	}
	template <typename T = void> T OnDisconnect(uintptr_t Msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x31FC1FC))(this, Msg);
	}
	template <typename T = void> T OnReconnectDS(uintptr_t Msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x31FC518))(this, Msg);
	}
	template <typename T = void> T OnDSReset(uintptr_t Msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x31FC5C4))(this, Msg);
	}
	template <typename T = bool> T IgnoreDSReset() {
		return ((T (*)(GameEventChannel*))(Il2CppBase() + 0x31FC87C))(this);
	}
	template <typename T = void> T OnUdpAbnormal(uintptr_t Msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x31FC9C8))(this, Msg);
	}
	template <typename T = void> T OnConfirmDSReset(uintptr_t result, int32_t userContext) {
		return ((T (*)(GameEventChannel*, uintptr_t, int32_t))(Il2CppBase() + 0x31FCBEC))(this, result, userContext);
	}
	template <typename T = void> T OnNetWorkInstabilityNotify(uintptr_t msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x31FCD1C))(this, msg);
	}
	template <typename T = void> T OnReConnectComplete(uintptr_t msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x31FCE08))(this, msg);
	}
	template <typename T = void> T OnSimulateGameInfo(uintptr_t Msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x31FD3C4))(this, Msg);
	}
	template <typename T = void> T OnSimulateSelfPlayerInfoUINT8(uintptr_t Msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x31FD4F0))(this, Msg);
	}
	template <typename T = void> T OnSimulateSelfPlayerInfoUINT32(uintptr_t Msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x31FD6E0))(this, Msg);
	}
	template <typename T = void> T OnSimulateOtherPlayerInfoUINT8(uintptr_t Msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x31FD8D0))(this, Msg);
	}
	template <typename T = void> T OnSimulateOtherPlayerInfoUINT32(uintptr_t Msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x31FDAAC))(this, Msg);
	}
	template <typename T = void> T OnPlayerLogout(uintptr_t Msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x31FDC88))(this, Msg);
	}
	template <typename T = void> T OnKickOff(uintptr_t Msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x31FDFC0))(this, Msg);
	}
	template <typename T = void> T OnSyncNotify(uintptr_t Msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x31FE2D8))(this, Msg);
	}
	template <typename T = void> T OnNtyGameTips(uintptr_t msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x3201A48))(this, msg);
	}
	template <typename T = void> T OnSyncPvePassTask(uintptr_t msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x3201DB8))(this, msg);
	}
	template <typename T = void> T OnSyncBuilding(uintptr_t msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x3202018))(this, msg);
	}
	template <typename T = void> T OnEndMatch(uintptr_t Msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x3202238))(this, Msg);
	}
	template <typename T = void> T OnRoundStart(uintptr_t Msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x3202608))(this, Msg);
	}
	template <typename T = void> T OnRoundEnd(uintptr_t Msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x32030B0))(this, Msg);
	}
	template <typename T = void> T OnReSpawnPlayer(uintptr_t Msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x3203150))(this, Msg);
	}
	template <typename T = bool> T CheckOtherPawnReset(uintptr_t playerInfo, uintptr_t oldPawn) {
		return ((T (*)(GameEventChannel*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3204488))(this, playerInfo, oldPawn);
	}
	template <typename T = bool> T CheckBagIDChanged(uintptr_t playerInfo, uintptr_t syncRespawnMsg) {
		return ((T (*)(GameEventChannel*, uintptr_t, uintptr_t))(Il2CppBase() + 0x320437C))(this, playerInfo, syncRespawnMsg);
	}
	template <typename T = bool> T IsKillerInReplay(uint32_t playerID) {
		return ((T (*)(GameEventChannel*, uint32_t))(Il2CppBase() + 0x320402C))(this, playerID);
	}
	template <typename T = void> T KillerRespawn(uintptr_t pawn, uint64_t roleID) {
		return ((T (*)(GameEventChannel*, uintptr_t, uint64_t))(Il2CppBase() + 0x32041A8))(this, pawn, roleID);
	}
	template <typename T = uintptr_t> T CheckLocalPawnRespawn(uintptr_t playerInfo, uintptr_t oldPawn) {
		return ((T (*)(GameEventChannel*, uintptr_t, uintptr_t))(Il2CppBase() + 0x32045A8))(this, playerInfo, oldPawn);
	}
	template <typename T = void> T OnPlayerLogin(uintptr_t Msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x32047CC))(this, Msg);
	}
	template <typename T = void> T OnAddActor(uintptr_t msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x3204B44))(this, msg);
	}
	template <typename T = void> T OnDelActor(uintptr_t msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x3204DCC))(this, msg);
	}
	template <typename T = bool> T IgnoreInGamePlay(uintptr_t ct) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x3204F44))(this, ct);
	}
	template <typename T = void> T OnSpawnNewProjectile(uintptr_t Msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x320517C))(this, Msg);
	}
	template <typename T = void> T OnNtfProjectileStick(uintptr_t Msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x320603C))(this, Msg);
	}
	template <typename T = void> T OnSyncProjectileStick(uintptr_t Msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x3206640))(this, Msg);
	}
	template <typename T = void> T OnServerSyncUseItem(uintptr_t Msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x3206B98))(this, Msg);
	}
	template <typename T = void> T OnServerSyncEndUseItem(uintptr_t inMsg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x3206C38))(this, inMsg);
	}
	template <typename T = void> T OnServerSyncPerkData(uintptr_t Msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x3206CD8))(this, Msg);
	}
	template <typename T = void> T OnPlayerChangeMoveState(uintptr_t inMsg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x3206F78))(this, inMsg);
	}
	template <typename T = void> T OnPlayerStartSprint(uintptr_t inMsg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x3207A2C))(this, inMsg);
	}
	template <typename T = void> T OnPlayerStopSprint(uintptr_t inMsg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x3207C78))(this, inMsg);
	}
	template <typename T = void> T OnSpawnDroppedPickUp(uintptr_t pickupObj, Il2CppQuaternion rot) {
		return ((T (*)(GameEventChannel*, uintptr_t, Il2CppQuaternion))(Il2CppBase() + 0x3207EC4))(this, pickupObj, rot);
	}
	template <typename T = void> T OnAddDroppedPickUp(uintptr_t inMsg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x3207F90))(this, inMsg);
	}
	template <typename T = void> T OnDeleteDroppedPickUp(uintptr_t inMsg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x32094D4))(this, inMsg);
	}
	template <typename T = void> T OnBatchDeleteDroppedPickUp(uintptr_t inMsg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x3209CCC))(this, inMsg);
	}
	template <typename T = bool> T CheckInWater(uintptr_t transform) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x320932C))(this, transform);
	}
	template <typename T = void> T OnAddVehicle(uintptr_t inMsg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x3209D6C))(this, inMsg);
	}
	template <typename T = uintptr_t> T AutoGetOnVehicle(uint32_t OwnerId, uintptr_t physicVehicle) {
		return ((T (*)(GameEventChannel*, uint32_t, uintptr_t))(Il2CppBase() + 0x320A3E8))(this, OwnerId, physicVehicle);
	}
	template <typename T = void> T OnDeleteVehicle(uintptr_t inMsg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x320A4F4))(this, inMsg);
	}
	template <typename T = void> T OnSyncUseVehicleSkill(uintptr_t inMsg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x320A698))(this, inMsg);
	}
	template <typename T = void> T OnSyncUseVehicle(uintptr_t inMsg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x320AAD0))(this, inMsg);
	}
	template <typename T = void> T OnSyncVehicleInfo(uintptr_t inMsg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x320B194))(this, inMsg);
	}
	template <typename T = void> T OnSyncBreakObject(uintptr_t inMsg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x320BA64))(this, inMsg);
	}
	template <typename T = void> T OnSyncBuffTakeEffect(uintptr_t inMsg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x320BBD4))(this, inMsg);
	}
	template <typename T = void> T PlayFeedback(uintptr_t inBuff, uint32_t targetID) {
		return ((T (*)(GameEventChannel*, uintptr_t, uint32_t))(Il2CppBase() + 0x320C1FC))(this, inBuff, targetID);
	}
	template <typename T = bool> T CheckBuffType(uintptr_t inBuff, Il2CppString* inBuffType) {
		return ((T (*)(GameEventChannel*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x320C594))(this, inBuff, inBuffType);
	}
	template <typename T = void> T ShowSpeedline(float inLifeTime) {
		return ((T (*)(GameEventChannel*, float))(Il2CppBase() + 0x320C73C))(this, inLifeTime);
	}
	template <typename T = void> T HideSpeedline() {
		return ((T (*)(GameEventChannel*))(Il2CppBase() + 0x320CAD0))(this);
	}
	template <typename T = void> T OnSyncBuffInfo(uintptr_t inMsg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x320CC28))(this, inMsg);
	}
	template <typename T = void> T OnSyncModifiers(uintptr_t msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x320DA68))(this, msg);
	}
	template <typename T = void> T OnSyncGameMission(uintptr_t Msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x320DD24))(this, Msg);
	}
	template <typename T = void> T OnMatchPreparation(uintptr_t Msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x320DDC4))(this, Msg);
	}
	template <typename T = void> T MakeAllPawnFullHealth() {
		return ((T (*)(GameEventChannel*))(Il2CppBase() + 0x320E2D0))(this);
	}
	template <typename T = void> T OnUseUltRes(uintptr_t Msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x320E568))(this, Msg);
	}
	template <typename T = void> T OnTryUseUltCallBack(bool bSuccess) {
		return ((T (*)(GameEventChannel*, bool))(Il2CppBase() + 0x320EE2C))(this, bSuccess);
	}
	template <typename T = void> T OnSyncAreaEvent(uintptr_t Msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x320EECC))(this, Msg);
	}
	template <typename T = void> T PlayEffect(int32_t resourceId, Il2CppVector3 areaLocation, float timeInSecond) {
		return ((T (*)(GameEventChannel*, int32_t, Il2CppVector3, float))(Il2CppBase() + 0x320F1D8))(this, resourceId, areaLocation, timeInSecond);
	}
	template <typename T = void> T OnEffectLoadOver(uintptr_t fireEffect) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x320F374))(this, fireEffect);
	}
	template <typename T = void> T OnSyncDomArea(uintptr_t Msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x320F6E4))(this, Msg);
	}
	template <typename T = void> T OnSyncHardPointInfo(uintptr_t Msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x321004C))(this, Msg);
	}
	template <typename T = void> T OnResDSTime(uintptr_t Msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x32103D4))(this, Msg);
	}
	template <typename T = void> T OnSyncServerTime(uintptr_t msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x3210558))(this, msg);
	}
	template <typename T = void> T OnNtfTestRespawn(uintptr_t msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x32106D4))(this, msg);
	}
	template <typename T = void> T OnPlayerSyncBuffer(uintptr_t Msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x3210804))(this, Msg);
	}
	template <typename T = void> T DealWithActorPose(uintptr_t actorPose) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x321302C))(this, actorPose);
	}
	template <typename T = void> T OnPlayerTransferBuffer(uintptr_t Msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x321337C))(this, Msg);
	}
	template <typename T = void> T OnServerDebugInfo(uintptr_t msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x321341C))(this, msg);
	}
	template <typename T = void> T OnServerAIDebugInfo(uintptr_t msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x32138DC))(this, msg);
	}
	template <typename T = void> T OnServerDebugDraw(uintptr_t msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x3213A5C))(this, msg);
	}
	template <typename T = void> T OnSyncRelevantInfo(uintptr_t msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x3213AFC))(this, msg);
	}
	template <typename T = void> T OnSyncIRRelevantInfo(uintptr_t msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x3213B9C))(this, msg);
	}
	template <typename T = void> T OnSynUseIndividuationItem(uintptr_t baseMsg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x3213C3C))(this, baseMsg);
	}
	template <typename T = void> T ResPickUpItem(uintptr_t Msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x3213F64))(this, Msg);
	}
	template <typename T = void> T OnNotifyGVoiceID(uintptr_t msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x3214E18))(this, msg);
	}
	template <typename T = void> T OnResOpenBox(uintptr_t msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x32150F8))(this, msg);
	}
	template <typename T = void> T OnSyncPickupNtf(uintptr_t msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x3215198))(this, msg);
	}
	template <typename T = void> T OnSyncLua(uintptr_t msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x3215238))(this, msg);
	}
	template <typename T = void> T OnReceiveBatchAIMoveData(uintptr_t inMsg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x3215AFC))(this, inMsg);
	}
	template <typename T = void> T OnShakeOffDizzy(uintptr_t Msg) {
		return ((T (*)(GameEventChannel*, uintptr_t))(Il2CppBase() + 0x3215F28))(this, Msg);
	}
	template <typename T = void> static T OnSyncNotifym__0() {
		return ((T (*)(void *))(Il2CppBase() + 0x3216154))(0);
	}
	template <typename T = void> static T OnEffectLoadOverm__1(uintptr_t ob) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3216220))(0, ob);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(GameEventChannel*))(Il2CppBase() + 0x32162DC))(this);
	}

};

}
