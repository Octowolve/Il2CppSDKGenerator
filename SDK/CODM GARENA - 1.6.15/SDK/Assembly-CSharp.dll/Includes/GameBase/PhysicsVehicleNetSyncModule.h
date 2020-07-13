#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PhysicsVehicleNetSyncModule
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PhysicsVehicleNetSyncModule"));
	}

	template <typename T = uintptr_t> T& m_vehicle() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_SendMoveFreQuency() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_LastPhysicsState() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& m_LastSendPos() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector3> T& m_LastSendRotation() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector3> T& m_LastSendVelocity() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& m_LastSendServerMoveTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& m_LastForceAdjustPosTime() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uint32_t> T& m_LastServerMoveTimeStamp() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint32_t> T& m_LatestMoveDataTimeStampFromServer() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int64_t> T& m_AvgTimeStampDiffBetweenClientAndServer() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> static T& MIN_SYNC_DISTANCE_THRESHOLD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& MIN_SYNC_ANGLE_SQUARE_THRESHOLD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& MIN_FORCE_DRAG_INTERVAL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_SimulateMoveDataList() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppDictionary<uint32_t, float>*> T& touchCDTime() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcSimulateDistanceXZ() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSimulateMoveData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncUseVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsServerMoveIntervalPassed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_VehicleServerMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_VehicleServerGetOn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_VehicleServerChangeSeat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_VehicleServerGetOff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ServerSendTouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartVehicleSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ServerSendUse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ServerSendMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSimulateDistanceXZ() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetSimulateDistanceXZ() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PredictCurrentServerMovement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MaxClientForceMoveDistance1PSqr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Sync1PWithServerIfNeeded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}

	template <typename T = void> T set_LastForceAdjustPosTime(float value) {
		return ((T (*)(PhysicsVehicleNetSyncModule*, float))(Il2CppBase() + 0x16DCBE8))(this, value);
	}
	template <typename T = float> T get_LastForceAdjustPosTime() {
		return ((T (*)(PhysicsVehicleNetSyncModule*))(Il2CppBase() + 0x16DCBF0))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_SimulateMoveDataList() {
		return ((T (*)(PhysicsVehicleNetSyncModule*))(Il2CppBase() + 0x16DCBF8))(this);
	}
	template <typename T = void> T set_SimulateMoveDataList(Il2CppList<uintptr_t>* value) {
		return ((T (*)(PhysicsVehicleNetSyncModule*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x16DCC00))(this, value);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PhysicsVehicleNetSyncModule*))(Il2CppBase() + 0x16DCC08))(this);
	}
	template <typename T = float> static T CalcSimulateDistanceXZ(Il2CppList<uintptr_t>* dataList, Il2CppVector3 startPos, int32_t beginIdx, int32_t endIdx) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, Il2CppVector3, int32_t, int32_t))(Il2CppBase() + 0x16DCD08))(0, dataList, startPos, beginIdx, endIdx);
	}
	template <typename T = void> T OnSimulateMoveData(uintptr_t moveData) {
		return ((T (*)(PhysicsVehicleNetSyncModule*, uintptr_t))(Il2CppBase() + 0x16DCEEC))(this, moveData);
	}
	template <typename T = void> T SyncUseVehicle(uintptr_t pawn, uintptr_t data) {
		return ((T (*)(PhysicsVehicleNetSyncModule*, uintptr_t, uintptr_t))(Il2CppBase() + 0x16DDB50))(this, pawn, data);
	}
	template <typename T = bool> T IsServerMoveIntervalPassed() {
		return ((T (*)(PhysicsVehicleNetSyncModule*))(Il2CppBase() + 0x16DDE28))(this);
	}
	template <typename T = void> T VehicleServerMove() {
		return ((T (*)(PhysicsVehicleNetSyncModule*))(Il2CppBase() + 0x16DDEF8))(this);
	}
	template <typename T = void> T VehicleServerGetOn(uintptr_t pawn, uintptr_t seat) {
		return ((T (*)(PhysicsVehicleNetSyncModule*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1640ED0))(this, pawn, seat);
	}
	template <typename T = void> T VehicleServerChangeSeat(uintptr_t pawn, uintptr_t seat) {
		return ((T (*)(PhysicsVehicleNetSyncModule*, uintptr_t, uintptr_t))(Il2CppBase() + 0x16410EC))(this, pawn, seat);
	}
	template <typename T = void> T VehicleServerGetOff(uintptr_t pawn, bool forceGetOff) {
		return ((T (*)(PhysicsVehicleNetSyncModule*, uintptr_t, bool))(Il2CppBase() + 0x16412E8))(this, pawn, forceGetOff);
	}
	template <typename T = bool> T ServerSendTouch(uintptr_t target, Il2CppVector3 hitLocation, Il2CppVector3 hitVelocity, uintptr_t touchRegion) {
		return ((T (*)(PhysicsVehicleNetSyncModule*, uintptr_t, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x16DECA4))(this, target, hitLocation, hitVelocity, touchRegion);
	}
	template <typename T = void> T StartVehicleSkill() {
		return ((T (*)(PhysicsVehicleNetSyncModule*))(Il2CppBase() + 0x16DF49C))(this);
	}
	template <typename T = void> T ServerSendUse(uintptr_t pawn, uintptr_t useType, Il2CppVector3 offPos, uintptr_t seat) {
		return ((T (*)(PhysicsVehicleNetSyncModule*, uintptr_t, uintptr_t, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x16DE988))(this, pawn, useType, offPos, seat);
	}
	template <typename T = void> T ServerSendMove(Il2CppVector3 position, Il2CppVector3 angles, Il2CppVector3 velocity, Il2CppVector3 acceleration, Il2CppVector3 angularVelocity) {
		return ((T (*)(PhysicsVehicleNetSyncModule*, Il2CppVector3, Il2CppVector3, Il2CppVector3, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x16DE0D0))(this, position, angles, velocity, acceleration, angularVelocity);
	}
	template <typename T = void> T ApplyShift(Il2CppVector3 shift) {
		return ((T (*)(PhysicsVehicleNetSyncModule*, Il2CppVector3))(Il2CppBase() + 0x16DF60C))(this, shift);
	}
	template <typename T = float> T GetSimulateDistanceXZ(int32_t beginIdx, int32_t endIdx) {
		return ((T (*)(PhysicsVehicleNetSyncModule*, int32_t, int32_t))(Il2CppBase() + 0x16DF824))(this, beginIdx, endIdx);
	}
	template <typename T = float> T GetSimulateDistanceXZ_1() {
		return ((T (*)(PhysicsVehicleNetSyncModule*))(Il2CppBase() + 0x16DF928))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(PhysicsVehicleNetSyncModule*))(Il2CppBase() + 0x16DFA90))(this);
	}
	template <typename T = void> T PredictCurrentServerMovement(uintptr_t moveData, uintptr_t* pos, uintptr_t* vel) {
		return ((T (*)(PhysicsVehicleNetSyncModule*, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x16DFB64))(this, moveData, pos, vel);
	}
	template <typename T = float> T MaxClientForceMoveDistance1PSqr(Il2CppVector3 velocity) {
		return ((T (*)(PhysicsVehicleNetSyncModule*, Il2CppVector3))(Il2CppBase() + 0x16DFF58))(this, velocity);
	}
	template <typename T = bool> T Sync1PWithServerIfNeeded(uintptr_t moveData) {
		return ((T (*)(PhysicsVehicleNetSyncModule*, uintptr_t))(Il2CppBase() + 0x16DD360))(this, moveData);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PhysicsVehicleNetSyncModule*))(Il2CppBase() + 0x16E008C))(this);
	}

};

}
