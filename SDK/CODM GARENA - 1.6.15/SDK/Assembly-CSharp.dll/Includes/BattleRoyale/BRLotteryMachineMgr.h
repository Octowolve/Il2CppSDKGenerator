#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRLotteryMachineMgr
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRLotteryMachineMgr"));
	}

	template <typename T = float> T& LoadAssetDis() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& UnloadAssetDis() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector3> T& m_LastCheckPos() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_LotteryInfoMap() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppDictionary<int32_t, uint32_t>*> T& m_ItemActorIdToMachineUID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_LotteryMachinePointMap() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_LotteryMachineMap() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_LotteryMachinePointCreateMap() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& LotteryCDTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& LotteryMachineHeight() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLevelObjectRegistered() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLevelObjectUnRegistered() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Register() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegister() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPointInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickLoadMachine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickUnloadMachine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckGameMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckLoadDis() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckUnloadDis() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOrCreatInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncLotteryMachine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMachineStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_UpdateMachineStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanUse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanPickupItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLotteryMachineByItemActorID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSpawnVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLotteryMachine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMachineAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnMachine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DespawnMachine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}

	template <typename T = void> T OnLevelObjectRegistered(uintptr_t levelObject) {
		return ((T (*)(BRLotteryMachineMgr*, uintptr_t))(Il2CppBase() + 0x194F9B8))(this, levelObject);
	}
	template <typename T = void> T OnLevelObjectUnRegistered(uintptr_t levelObject) {
		return ((T (*)(BRLotteryMachineMgr*, uintptr_t))(Il2CppBase() + 0x194FCE4))(this, levelObject);
	}
	template <typename T = void> T Register(uintptr_t lotteryPoint) {
		return ((T (*)(BRLotteryMachineMgr*, uintptr_t))(Il2CppBase() + 0x194FB10))(this, lotteryPoint);
	}
	template <typename T = void> T UnRegister(uintptr_t lotteryPoint) {
		return ((T (*)(BRLotteryMachineMgr*, uintptr_t))(Il2CppBase() + 0x194FE3C))(this, lotteryPoint);
	}
	template <typename T = uintptr_t> T GetPointInfo(uint32_t uid) {
		return ((T (*)(BRLotteryMachineMgr*, uint32_t))(Il2CppBase() + 0x19502C0))(this, uid);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(BRLotteryMachineMgr*, float))(Il2CppBase() + 0x19503C0))(this, deltaTime);
	}
	template <typename T = void> T TickLoadMachine() {
		return ((T (*)(BRLotteryMachineMgr*))(Il2CppBase() + 0x1950564))(this);
	}
	template <typename T = void> T TickUnloadMachine() {
		return ((T (*)(BRLotteryMachineMgr*))(Il2CppBase() + 0x1950980))(this);
	}
	template <typename T = bool> T CheckGameMode(uintptr_t point) {
		return ((T (*)(BRLotteryMachineMgr*, uintptr_t))(Il2CppBase() + 0x1950CD8))(this, point);
	}
	template <typename T = bool> T CheckLoadDis(Il2CppVector3 pos) {
		return ((T (*)(BRLotteryMachineMgr*, Il2CppVector3))(Il2CppBase() + 0x1950E58))(this, pos);
	}
	template <typename T = bool> T CheckUnloadDis(Il2CppVector3 pos) {
		return ((T (*)(BRLotteryMachineMgr*, Il2CppVector3))(Il2CppBase() + 0x19513CC))(this, pos);
	}
	template <typename T = uintptr_t> T GetOrCreatInfo(uint32_t MachineId) {
		return ((T (*)(BRLotteryMachineMgr*, uint32_t))(Il2CppBase() + 0x19514F4))(this, MachineId);
	}
	template <typename T = void> T OnSyncLotteryMachine(uintptr_t recData) {
		return ((T (*)(BRLotteryMachineMgr*, uintptr_t))(Il2CppBase() + 0x190D408))(this, recData);
	}
	template <typename T = void> T UpdateMachineStatus(uint32_t MachineId, bool spawnOrSync) {
		return ((T (*)(BRLotteryMachineMgr*, uint32_t, bool))(Il2CppBase() + 0x1951840))(this, MachineId, spawnOrSync);
	}
	template <typename T = void> T UpdateMachineStatus_1(uintptr_t info, bool spawnOrSync) {
		return ((T (*)(BRLotteryMachineMgr*, uintptr_t, bool))(Il2CppBase() + 0x1951664))(this, info, spawnOrSync);
	}
	template <typename T = bool> T IsCanUse(uint32_t uid) {
		return ((T (*)(BRLotteryMachineMgr*, uint32_t))(Il2CppBase() + 0x194F680))(this, uid);
	}
	template <typename T = bool> T IsCanPickupItem(int32_t actorID) {
		return ((T (*)(BRLotteryMachineMgr*, int32_t))(Il2CppBase() + 0x18C3E64))(this, actorID);
	}
	template <typename T = uintptr_t> T GetLotteryMachineByItemActorID(int32_t itemActorID) {
		return ((T (*)(BRLotteryMachineMgr*, int32_t))(Il2CppBase() + 0x18B2030))(this, itemActorID);
	}
	template <typename T = void> T OnSpawnVehicle(uint32_t actorID, Il2CppVector3 SpawnLocation, Il2CppQuaternion SpawnRotation) {
		return ((T (*)(BRLotteryMachineMgr*, uint32_t, Il2CppVector3, Il2CppQuaternion))(Il2CppBase() + 0x19044AC))(this, actorID, SpawnLocation, SpawnRotation);
	}
	template <typename T = uintptr_t> T GetLotteryMachine(uint32_t uid) {
		return ((T (*)(BRLotteryMachineMgr*, uint32_t))(Il2CppBase() + 0x1950F80))(this, uid);
	}
	template <typename T = int32_t> T GetMachineAssetID(uintptr_t type) {
		return ((T (*)(BRLotteryMachineMgr*, uintptr_t))(Il2CppBase() + 0x1951958))(this, type);
	}
	template <typename T = void> T SpawnMachine(uintptr_t lotteryPoint) {
		return ((T (*)(BRLotteryMachineMgr*, uintptr_t))(Il2CppBase() + 0x1951090))(this, lotteryPoint);
	}
	template <typename T = void> T DespawnMachine(uintptr_t lotteryPoint) {
		return ((T (*)(BRLotteryMachineMgr*, uintptr_t))(Il2CppBase() + 0x194FFB8))(this, lotteryPoint);
	}
	template <typename T = void> T xLuaBaseProxy_OnLevelObjectRegistered(uintptr_t P0) {
		return ((T (*)(BRLotteryMachineMgr*, uintptr_t))(Il2CppBase() + 0x1951A30))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnLevelObjectUnRegistered(uintptr_t P0) {
		return ((T (*)(BRLotteryMachineMgr*, uintptr_t))(Il2CppBase() + 0x1951A38))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRLotteryMachineMgr*, float))(Il2CppBase() + 0x1951A40))(this, P0);
	}

};

}
