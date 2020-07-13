#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.TrainingGame {

class TrainingTargetMgr
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.TrainingGame", "TrainingTargetMgr"));
	}

	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& Targets_Static() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& Targets_Move() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& TargetSpots_Static() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& TargetSpots_Fly() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& TargetSpots_Move() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Destroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLevelTraingTargetSpotStaticRegister() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLevelTrainingTargetSpotMoveRegister() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLevelTrainingTargetSpotFlyRegister() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLevelTrainingTargetSpotStaticUnRegister() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLevelTrainingTargetSpotMoveUnRegister() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLevelTrainingTargetSpotFlyUnRegister() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTrainingTargetSpot_Fly() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelaySpawnFly() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnTrainingTarget_Fly() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTrainingTargetMoveLocation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnTrainingTarget_Move() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnTrainingTarget_Static() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAllTrainingTargets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHitByGrenade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = void> T Destroy() {
		return ((T (*)(TrainingTargetMgr*))(Il2CppBase() + 0x3D9264C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(TrainingTargetMgr*))(Il2CppBase() + 0x3D92E6C))(this);
	}
	template <typename T = void> T OnLevelTraingTargetSpotStaticRegister(uintptr_t target) {
		return ((T (*)(TrainingTargetMgr*, uintptr_t))(Il2CppBase() + 0x3D8C7E0))(this, target);
	}
	template <typename T = void> T OnLevelTrainingTargetSpotMoveRegister(uintptr_t target) {
		return ((T (*)(TrainingTargetMgr*, uintptr_t))(Il2CppBase() + 0x3D8C900))(this, target);
	}
	template <typename T = void> T OnLevelTrainingTargetSpotFlyRegister(uintptr_t target) {
		return ((T (*)(TrainingTargetMgr*, uintptr_t))(Il2CppBase() + 0x3D8CA20))(this, target);
	}
	template <typename T = void> T OnLevelTrainingTargetSpotStaticUnRegister(uintptr_t target) {
		return ((T (*)(TrainingTargetMgr*, uintptr_t))(Il2CppBase() + 0x3D8CCF8))(this, target);
	}
	template <typename T = void> T OnLevelTrainingTargetSpotMoveUnRegister(uintptr_t target) {
		return ((T (*)(TrainingTargetMgr*, uintptr_t))(Il2CppBase() + 0x3D8CE6C))(this, target);
	}
	template <typename T = void> T OnLevelTrainingTargetSpotFlyUnRegister(uintptr_t target) {
		return ((T (*)(TrainingTargetMgr*, uintptr_t))(Il2CppBase() + 0x3D8CF88))(this, target);
	}
	template <typename T = uintptr_t> T GetTrainingTargetSpot_Fly(uint32_t id) {
		return ((T (*)(TrainingTargetMgr*, uint32_t))(Il2CppBase() + 0x3D92F74))(this, id);
	}
	template <typename T = void> T DelaySpawnFly() {
		return ((T (*)(TrainingTargetMgr*))(Il2CppBase() + 0x3D93054))(this);
	}
	template <typename T = void> T SpawnTrainingTarget_Fly(uint32_t uid, Il2CppVector3 spawnLocation) {
		return ((T (*)(TrainingTargetMgr*, uint32_t, Il2CppVector3))(Il2CppBase() + 0x3D8F424))(this, uid, spawnLocation);
	}
	template <typename T = void> T UpdateTrainingTargetMoveLocation(uint32_t uid, Il2CppVector3 startLoc, Il2CppVector3 endLoc) {
		return ((T (*)(TrainingTargetMgr*, uint32_t, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x3D8E088))(this, uid, startLoc, endLoc);
	}
	template <typename T = void> T SpawnTrainingTarget_Move(uint32_t uid, int32_t inActorID, Il2CppVector3 startLocation) {
		return ((T (*)(TrainingTargetMgr*, uint32_t, int32_t, Il2CppVector3))(Il2CppBase() + 0x3D8EE84))(this, uid, inActorID, startLocation);
	}
	template <typename T = void> T SpawnTrainingTarget_Static(uint32_t uid, int32_t inActorID) {
		return ((T (*)(TrainingTargetMgr*, uint32_t, int32_t))(Il2CppBase() + 0x3D8E878))(this, uid, inActorID);
	}
	template <typename T = void> T ClearAllTrainingTargets() {
		return ((T (*)(TrainingTargetMgr*))(Il2CppBase() + 0x3D927C8))(this);
	}
	template <typename T = void> T OnHitByGrenade(uint32_t uid) {
		return ((T (*)(TrainingTargetMgr*, uint32_t))(Il2CppBase() + 0x3D8FD80))(this, uid);
	}
	template <typename T = void> T xLuaBaseProxy_Destroy() {
		return ((T (*)(TrainingTargetMgr*))(Il2CppBase() + 0x3D934EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(TrainingTargetMgr*))(Il2CppBase() + 0x3D934F4))(this);
	}

};

}
