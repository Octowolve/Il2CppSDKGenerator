#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AIPawnSpawnChecker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AIPawnSpawnChecker"));
	}

	template <typename T = uintptr_t> T& AIPawnPropertyConfigCenter() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& WanderChaserPointsCopyFrom() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_AIPawnFactory() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_CheckerController() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_CheckInterval() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& m_LastCheckTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& m_IsWanderSpawned() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& m_IsInited() {
		return *(T*)((uintptr_t)this + 0x3D);
	}
	template <typename T = bool> T& m_IsActive() {
		return *(T*)((uintptr_t)this + 0x3E);
	}
	template <typename T = int32_t> T& m_NextCheckChaserSpawnPointIndex() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ChaserSpawnPointList() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppList<int32_t>*> T& ChaserSpawnPointCountList() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& WanderSpawnPointList() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_AIPawnSpawnInfoList() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppDictionary<int32_t, int32_t>*> T& m_PawnTypeToIndex() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& m_IsRatioAliveCount() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& m_MaxAliveCount() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& m_MaxTotalCount() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& m_CurrentMaxTotalCount() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& m_CurrentAliveCount() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& m_CurrentTotalCount() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& m_RatioSum() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& m_RatioTimes() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppList<int32_t>*> T& m_SpawnedCountByType() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppList<int32_t>*> T& m_AliveCountByType() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_CurrentAliveList() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppList<int32_t>*> T& m_SequenceRatio() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_GlobalChecker() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppList<float>*> T& m_RebornTimeDict() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGlobalChecker() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanSpawnZombieNow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IncreaseAliveCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DecreaseAliveCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Activate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ActivateAndTransfer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deactivate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnAIPawnOnWanderPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnAllAIPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnAIPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnAIPawnOnChaserPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_QueueSpawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoSpawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenerateSequenceRatio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetALivePawnsCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyAIPawnDead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}

	template <typename T = void> T set_CheckerController(uintptr_t value) {
		return ((T (*)(AIPawnSpawnChecker*, uintptr_t))(Il2CppBase() + 0x49ABC04))(this, value);
	}
	template <typename T = int32_t> T get_MaxTotalCount() {
		return ((T (*)(AIPawnSpawnChecker*))(Il2CppBase() + 0x49ABC0C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(AIPawnSpawnChecker*))(Il2CppBase() + 0x49ABC40))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(AIPawnSpawnChecker*))(Il2CppBase() + 0x49ABF1C))(this);
	}
	template <typename T = void> T SetGlobalChecker(uintptr_t globalChecker) {
		return ((T (*)(AIPawnSpawnChecker*, uintptr_t))(Il2CppBase() + 0x49AC2B8))(this, globalChecker);
	}
	template <typename T = bool> T get_IsTickable() {
		return ((T (*)(AIPawnSpawnChecker*))(Il2CppBase() + 0x49AC360))(this);
	}
	template <typename T = void> T Tick(float fDeltaTime) {
		return ((T (*)(AIPawnSpawnChecker*, float))(Il2CppBase() + 0x49AC368))(this, fDeltaTime);
	}
	template <typename T = bool> T CanSpawnZombieNow() {
		return ((T (*)(AIPawnSpawnChecker*))(Il2CppBase() + 0x49ACCB4))(this);
	}
	template <typename T = void> T IncreaseAliveCount() {
		return ((T (*)(AIPawnSpawnChecker*))(Il2CppBase() + 0x49ACE28))(this);
	}
	template <typename T = void> T DecreaseAliveCount() {
		return ((T (*)(AIPawnSpawnChecker*))(Il2CppBase() + 0x49AD004))(this);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(AIPawnSpawnChecker*))(Il2CppBase() + 0x49AD1C8))(this);
	}
	template <typename T = void> T ActivateAndTransfer(uintptr_t from) {
		return ((T (*)(AIPawnSpawnChecker*, uintptr_t))(Il2CppBase() + 0x49AD4D8))(this, from);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(AIPawnSpawnChecker*))(Il2CppBase() + 0x49ADA30))(this);
	}
	template <typename T = void> T SpawnAIPawnOnWanderPoint() {
		return ((T (*)(AIPawnSpawnChecker*))(Il2CppBase() + 0x49AD2A4))(this);
	}
	template <typename T = void> T SpawnAllAIPawn() {
		return ((T (*)(AIPawnSpawnChecker*))(Il2CppBase() + 0x49AE0F0))(this);
	}
	template <typename T = void> T SpawnAIPawn(int32_t pawnType, int32_t spawnCount, uintptr_t spawnPoint) {
		return ((T (*)(AIPawnSpawnChecker*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x49AE1CC))(this, pawnType, spawnCount, spawnPoint);
	}
	template <typename T = void> T SpawnAIPawnOnChaserPoint() {
		return ((T (*)(AIPawnSpawnChecker*))(Il2CppBase() + 0x49AC568))(this);
	}
	template <typename T = void> T QueueSpawn(int32_t index, uintptr_t spawnPoint) {
		return ((T (*)(AIPawnSpawnChecker*, int32_t, uintptr_t))(Il2CppBase() + 0x49ADF08))(this, index, spawnPoint);
	}
	template <typename T = void> T DoSpawn(int32_t index, uintptr_t spawnPoint) {
		return ((T (*)(AIPawnSpawnChecker*, int32_t, uintptr_t))(Il2CppBase() + 0x49AE6DC))(this, index, spawnPoint);
	}
	template <typename T = void> T GenerateSequenceRatio() {
		return ((T (*)(AIPawnSpawnChecker*))(Il2CppBase() + 0x49ADAD4))(this);
	}
	template <typename T = int32_t> T GetALivePawnsCount() {
		return ((T (*)(AIPawnSpawnChecker*))(Il2CppBase() + 0x49AE9A8))(this);
	}
	template <typename T = void> T NotifyAIPawnDead(uintptr_t pawn) {
		return ((T (*)(AIPawnSpawnChecker*, uintptr_t))(Il2CppBase() + 0x49AEA7C))(this, pawn);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(AIPawnSpawnChecker*))(Il2CppBase() + 0x49AEEE0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(AIPawnSpawnChecker*, float))(Il2CppBase() + 0x49AEEE8))(this, P0);
	}

};

}
