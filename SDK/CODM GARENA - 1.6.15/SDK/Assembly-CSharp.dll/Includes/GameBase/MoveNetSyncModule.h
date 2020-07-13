#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class MoveNetSyncModule
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "MoveNetSyncModule"));
	}

	template <typename T = float> T& FORCESETPOS_MAX_HEIGHT_OFFSET() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> static T& IsForceSyncLocalPawnServerPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_IsStop() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_LastPhysicsState() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& m_LastSendPos() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector3> T& m_LastRotate() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector3> T& m_LastVelocity() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& m_LastProne() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = unsigned char> T& m_CheckSeq() {
		return *(T*)((uintptr_t)this + 0x41);
	}
	template <typename T = uintptr_t> T& m_Pawn() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& m_LastSendServerMoveTime() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> static T& MAX_SEND_SERVER_MOVE_DELTA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_SimulateMoveDataList() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uint32_t> T& m_MoveFrame() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& m_LastForceAdjustPosTime() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> static T& MinMoveDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = float> static T& MinPawnStopDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = bool> static T& OpenCheckDebugServerPawnInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = bool> static T& m_IsDebugServerPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD);
	}
	template <typename T = uintptr_t> T& m_ServerObj() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppVector3> T& m_Position() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppVector3> T& m_Scale() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSimulateMoveData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSimulateMoveDataPacked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_OnSimulateMoveDataPacked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnForceSetPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisableForceServerPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetJumpDiff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveSimulatedMoveData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckForceSyncPostion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceSetServerMoveState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestChangeMoveState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayerServerMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ServerSendMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ServerSendZiplineMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceServerMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopServerMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSimulateDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecycleDebugServerPawnInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DebugServerPawnInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_SimulateMoveDataList() {
		return ((T (*)(MoveNetSyncModule*))(Il2CppBase() + 0x19D4F54))(this);
	}
	template <typename T = void> T PreInit() {
		return ((T (*)(MoveNetSyncModule*))(Il2CppBase() + 0x19D4F5C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(MoveNetSyncModule*))(Il2CppBase() + 0x19D5210))(this);
	}
	template <typename T = void> T ApplyShift(Il2CppVector3 shift) {
		return ((T (*)(MoveNetSyncModule*, Il2CppVector3))(Il2CppBase() + 0x19D53C8))(this, shift);
	}
	template <typename T = void> T OnSimulateMoveData(uintptr_t Msg) {
		return ((T (*)(MoveNetSyncModule*, uintptr_t))(Il2CppBase() + 0x19D56A4))(this, Msg);
	}
	template <typename T = void> T OnSimulateMoveDataPacked(uintptr_t singleData) {
		return ((T (*)(MoveNetSyncModule*, uintptr_t))(Il2CppBase() + 0x19C0E7C))(this, singleData);
	}
	template <typename T = void> T OnSimulateMoveDataPacked_1(uintptr_t singleData) {
		return ((T (*)(MoveNetSyncModule*, uintptr_t))(Il2CppBase() + 0x19D5A04))(this, singleData);
	}
	template <typename T = void> T OnForceSetPosition(uintptr_t moveData, uintptr_t MoveState) {
		return ((T (*)(MoveNetSyncModule*, uintptr_t, uintptr_t))(Il2CppBase() + 0x19D5B88))(this, moveData, MoveState);
	}
	template <typename T = void> T DisableForceServerPosition(float duration) {
		return ((T (*)(MoveNetSyncModule*, float))(Il2CppBase() + 0x19D5DC0))(this, duration);
	}
	template <typename T = float> T GetJumpDiff() {
		return ((T (*)(MoveNetSyncModule*))(Il2CppBase() + 0x19D5EBC))(this);
	}
	template <typename T = void> T SaveSimulatedMoveData(uint32_t LogicalFrame, Il2CppVector3 SimulateLocation, Il2CppVector3 SimulateDirection, Il2CppVector3 SimulateVelocity, uintptr_t MoveState, unsigned char extraByte, unsigned char checkSeq) {
		return ((T (*)(MoveNetSyncModule*, uint32_t, Il2CppVector3, Il2CppVector3, Il2CppVector3, uintptr_t, unsigned char, unsigned char))(Il2CppBase() + 0x19D5F8C))(this, LogicalFrame, SimulateLocation, SimulateDirection, SimulateVelocity, MoveState, extraByte, checkSeq);
	}
	template <typename T = void> T CheckForceSyncPostion(uint32_t LogicalFrame, uintptr_t MoveState, uintptr_t moveData) {
		return ((T (*)(MoveNetSyncModule*, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x19D657C))(this, LogicalFrame, MoveState, moveData);
	}
	template <typename T = void> T ForceSetServerMoveState(unsigned char checkSeq, uintptr_t moveData) {
		return ((T (*)(MoveNetSyncModule*, unsigned char, uintptr_t))(Il2CppBase() + 0x19D7144))(this, checkSeq, moveData);
	}
	template <typename T = void> T RequestChangeMoveState() {
		return ((T (*)(MoveNetSyncModule*))(Il2CppBase() + 0x19D7458))(this);
	}
	template <typename T = void> T PlayerServerMove() {
		return ((T (*)(MoveNetSyncModule*))(Il2CppBase() + 0x19D7758))(this);
	}
	template <typename T = void> T ServerSendMove(Il2CppVector3 PawnLocation, Il2CppVector3 PawnAngles, Il2CppVector3 PawnVelocity, uintptr_t physicsState, bool isCrouching, uintptr_t curClimbType, bool isProneing, bool isClimbWall, unsigned char extraByte, float rotationX, unsigned char checkSeq) {
		return ((T (*)(MoveNetSyncModule*, Il2CppVector3, Il2CppVector3, Il2CppVector3, uintptr_t, bool, uintptr_t, bool, bool, unsigned char, float, unsigned char))(Il2CppBase() + 0x19D8258))(this, PawnLocation, PawnAngles, PawnVelocity, physicsState, isCrouching, curClimbType, isProneing, isClimbWall, extraByte, rotationX, checkSeq);
	}
	template <typename T = void> T ServerSendZiplineMove(Il2CppVector3 PawnLocation, Il2CppVector3 PawnAngles, Il2CppVector3 PawnVelocity, unsigned char checkSeq) {
		return ((T (*)(MoveNetSyncModule*, Il2CppVector3, Il2CppVector3, Il2CppVector3, unsigned char))(Il2CppBase() + 0x19D84E8))(this, PawnLocation, PawnAngles, PawnVelocity, checkSeq);
	}
	template <typename T = void> T ForceServerMove() {
		return ((T (*)(MoveNetSyncModule*))(Il2CppBase() + 0x19D8774))(this);
	}
	template <typename T = void> T StopServerMove() {
		return ((T (*)(MoveNetSyncModule*))(Il2CppBase() + 0x19D8AB4))(this);
	}
	template <typename T = float> T GetSimulateDistance(Il2CppVector3 startPos) {
		return ((T (*)(MoveNetSyncModule*, Il2CppVector3))(Il2CppBase() + 0x19D8D6C))(this, startPos);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(MoveNetSyncModule*))(Il2CppBase() + 0x19D8FA4))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(MoveNetSyncModule*))(Il2CppBase() + 0x19D9288))(this);
	}
	template <typename T = bool> static T get_IsDebugServerPosition() {
		return ((T (*)(void *))(Il2CppBase() + 0x19D935C))(0);
	}
	template <typename T = void> static T set_IsDebugServerPosition(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x19D940C))(0, value);
	}
	template <typename T = void> T RecycleDebugServerPawnInfo() {
		return ((T (*)(MoveNetSyncModule*))(Il2CppBase() + 0x19D9118))(this);
	}
	template <typename T = void> T DebugServerPawnInfo(uintptr_t moveData) {
		return ((T (*)(MoveNetSyncModule*, uintptr_t))(Il2CppBase() + 0x19D94E0))(this, moveData);
	}
	template <typename T = void> T xLuaBaseProxy_PreInit() {
		return ((T (*)(MoveNetSyncModule*))(Il2CppBase() + 0x19D9A38))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(MoveNetSyncModule*))(Il2CppBase() + 0x19D9A3C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(MoveNetSyncModule*))(Il2CppBase() + 0x19D9A40))(this);
	}

};

}
