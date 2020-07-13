#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class MPGameEventChannel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "MPGameEventChannel"));
	}

	template <typename T = uintptr_t> T& m_GameBuilder() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& m_SpawnNPCInLevel() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncLocalPlayerSaveResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnServerSyncUseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReSpawnPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReceiveBatchAIMoveData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReceiveBatchEffectData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReceiveRewardLevelDropInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReConnectComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReconnectDS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZoneActived() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncAreaEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustAreaLocationToGround() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAddDroppedPickUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBuffMachineBuffStateChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBuildableObstacleStateChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNtfSwitchLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBRChatMsgRespond() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBRChatShortcutRespond() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResPerkCoin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncBuffInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayerSyncBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}

	template <typename T = void> T Init() {
		return ((T (*)(MPGameEventChannel*))(Il2CppBase() + 0x4609810))(this);
	}
	template <typename T = void> T OnRoundStart(uintptr_t Msg) {
		return ((T (*)(MPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x4609CE0))(this, Msg);
	}
	template <typename T = void> T OnSyncLocalPlayerSaveResult(uintptr_t inMsg) {
		return ((T (*)(MPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x4609FA4))(this, inMsg);
	}
	template <typename T = void> T OnServerSyncUseItem(uintptr_t Msg) {
		return ((T (*)(MPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x460B1C4))(this, Msg);
	}
	template <typename T = void> T OnRoundEnd(uintptr_t Msg) {
		return ((T (*)(MPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x460B98C))(this, Msg);
	}
	template <typename T = void> T OnReSpawnPlayer(uintptr_t Msg) {
		return ((T (*)(MPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x460BC3C))(this, Msg);
	}
	template <typename T = void> T OnReceiveBatchAIMoveData(uintptr_t inMsg) {
		return ((T (*)(MPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x460C434))(this, inMsg);
	}
	template <typename T = void> T OnReceiveBatchEffectData(uintptr_t inMsg) {
		return ((T (*)(MPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x460C7D4))(this, inMsg);
	}
	template <typename T = void> T OnReceiveRewardLevelDropInfo(uintptr_t inMsg) {
		return ((T (*)(MPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x460CA4C))(this, inMsg);
	}
	template <typename T = void> T OnReConnectComplete(uintptr_t msg) {
		return ((T (*)(MPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x460CCF0))(this, msg);
	}
	template <typename T = void> T OnReconnectDS(uintptr_t Msg) {
		return ((T (*)(MPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x460CEC4))(this, Msg);
	}
	template <typename T = void> T OnZoneActived(uintptr_t Msg) {
		return ((T (*)(MPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x460CFB8))(this, Msg);
	}
	template <typename T = void> T OnSyncNotify(uintptr_t Msg) {
		return ((T (*)(MPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x460D254))(this, Msg);
	}
	template <typename T = void> T OnSyncAreaEvent(uintptr_t Msg) {
		return ((T (*)(MPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x460D8DC))(this, Msg);
	}
	template <typename T = Il2CppVector3> T AdjustAreaLocationToGround(Il2CppVector3 areaLocation) {
		return ((T (*)(MPGameEventChannel*, Il2CppVector3))(Il2CppBase() + 0x460DFAC))(this, areaLocation);
	}
	template <typename T = void> T PlayEffect(int32_t resourceId, Il2CppVector3 areaLocation, float timeInSecond) {
		return ((T (*)(MPGameEventChannel*, int32_t, Il2CppVector3, float))(Il2CppBase() + 0x460E300))(this, resourceId, areaLocation, timeInSecond);
	}
	template <typename T = void> T OnAddDroppedPickUp(uintptr_t inMsg) {
		return ((T (*)(MPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x460E754))(this, inMsg);
	}
	template <typename T = void> T OnBuffMachineBuffStateChange(uintptr_t inMsg) {
		return ((T (*)(MPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x460EC80))(this, inMsg);
	}
	template <typename T = void> T OnNotifyBuildableObstacleStateChanged(uintptr_t inMsg) {
		return ((T (*)(MPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x460F004))(this, inMsg);
	}
	template <typename T = void> T OnNtfSwitchLevel(uintptr_t inMsg) {
		return ((T (*)(MPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x460F1F0))(this, inMsg);
	}
	template <typename T = void> T OnNotifyBRChatMsgRespond(uintptr_t msg) {
		return ((T (*)(MPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x460FABC))(this, msg);
	}
	template <typename T = void> T OnNotifyBRChatShortcutRespond(uintptr_t msg) {
		return ((T (*)(MPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x460FBD4))(this, msg);
	}
	template <typename T = void> T OnResPerkCoin(uintptr_t msg) {
		return ((T (*)(MPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x460FCEC))(this, msg);
	}
	template <typename T = void> T OnSyncBuffInfo(uintptr_t inMsg) {
		return ((T (*)(MPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x4610D34))(this, inMsg);
	}
	template <typename T = void> T OnPlayerSyncBuffer(uintptr_t Msg) {
		return ((T (*)(MPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x46111E0))(this, Msg);
	}
	template <typename T = void> static T PlayEffectm__0(uintptr_t ob) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4611840))(0, ob);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(MPGameEventChannel*))(Il2CppBase() + 0x46118FC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundStart(uintptr_t P0) {
		return ((T (*)(MPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x4611904))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnServerSyncUseItem(uintptr_t P0) {
		return ((T (*)(MPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x461190C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundEnd(uintptr_t P0) {
		return ((T (*)(MPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x4611914))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnReSpawnPlayer(uintptr_t P0) {
		return ((T (*)(MPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x461191C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnReceiveBatchAIMoveData(uintptr_t P0) {
		return ((T (*)(MPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x4611924))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnReConnectComplete(uintptr_t P0) {
		return ((T (*)(MPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x461192C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnReconnectDS(uintptr_t P0) {
		return ((T (*)(MPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x4611934))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncNotify(uintptr_t P0) {
		return ((T (*)(MPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x461193C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncAreaEvent(uintptr_t P0) {
		return ((T (*)(MPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x4611944))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnAddDroppedPickUp(uintptr_t P0) {
		return ((T (*)(MPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x461194C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnNtfSwitchLevel(uintptr_t P0) {
		return ((T (*)(MPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x4611954))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncBuffInfo(uintptr_t P0) {
		return ((T (*)(MPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x461195C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnPlayerSyncBuffer(uintptr_t P0) {
		return ((T (*)(MPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x4611964))(this, P0);
	}

};

}
