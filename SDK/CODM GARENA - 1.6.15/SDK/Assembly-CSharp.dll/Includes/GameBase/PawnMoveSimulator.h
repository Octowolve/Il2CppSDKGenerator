#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PawnMoveSimulator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PawnMoveSimulator"));
	}

	template <typename T = Il2CppVector3> T& m_DestinationPosition() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> static T& m_fAllowDelayTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_fSimulateSpeed() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> static T& m_fSimulateIncAccelSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& m_fSimulateDecAccelSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& m_fMinSimulateSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& m_fMaxSimulateSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& m_fClientMaxSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& ClientDelaySimulateTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& AccelScaleUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = float> T& m_fServerSpeed() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_SimulateMoveDataList() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_Owner() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> static T& SimulatedAcceleration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSimulateMoveData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PushNextDestination() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddPredictData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PopDestination() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcSimulteMoveSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentSimulatedSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcVelocity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcVelocityEx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CharControllerMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MoveActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCollisionWithLocalPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareSimulateData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = float> static T get_MaxSimulateSpeed() {
		return ((T (*)(void *))(Il2CppBase() + 0x16C002C))(0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_SimulateMoveDataList() {
		return ((T (*)(PawnMoveSimulator*))(Il2CppBase() + 0x16C0038))(this);
	}
	template <typename T = float> T get_SimulateSpeed() {
		return ((T (*)(PawnMoveSimulator*))(Il2CppBase() + 0x16C0040))(this);
	}
	template <typename T = void> T set_SimulateSpeed(float value) {
		return ((T (*)(PawnMoveSimulator*, float))(Il2CppBase() + 0x16C0048))(this, value);
	}
	template <typename T = void> T ApplyShift(Il2CppVector3 shift) {
		return ((T (*)(PawnMoveSimulator*, Il2CppVector3))(Il2CppBase() + 0x16C0050))(this, shift);
	}
	template <typename T = void> T SetSimulateMoveData(Il2CppList<uintptr_t>* InSimulateMoveDataList, uintptr_t pawn, bool bSimulateAllPos) {
		return ((T (*)(PawnMoveSimulator*, Il2CppList<uintptr_t>*, uintptr_t, bool))(Il2CppBase() + 0x16C0334))(this, InSimulateMoveDataList, pawn, bSimulateAllPos);
	}
	template <typename T = void> T PushNextDestination(Il2CppVector3 NextPostion) {
		return ((T (*)(PawnMoveSimulator*, Il2CppVector3))(Il2CppBase() + 0x16C0B18))(this, NextPostion);
	}
	template <typename T = void> T AddPredictData(uintptr_t moveData) {
		return ((T (*)(PawnMoveSimulator*, uintptr_t))(Il2CppBase() + 0x16C0C18))(this, moveData);
	}
	template <typename T = void> T PopDestination() {
		return ((T (*)(PawnMoveSimulator*))(Il2CppBase() + 0x16C0E4C))(this);
	}
	template <typename T = void> T ClearAll() {
		return ((T (*)(PawnMoveSimulator*))(Il2CppBase() + 0x16C093C))(this);
	}
	template <typename T = float> T CalcSimulteMoveSpeed(float fTotalWasteTime) {
		return ((T (*)(PawnMoveSimulator*, float))(Il2CppBase() + 0x16C100C))(this, fTotalWasteTime);
	}
	template <typename T = float> T GetCurrentSimulatedSpeed() {
		return ((T (*)(PawnMoveSimulator*))(Il2CppBase() + 0x16C1430))(this);
	}
	template <typename T = Il2CppVector3> T CalcVelocity(float fDeltaTime, float fSpeed, bool IsStopSimulate) {
		return ((T (*)(PawnMoveSimulator*, float, float, bool))(Il2CppBase() + 0x16C1500))(this, fDeltaTime, fSpeed, IsStopSimulate);
	}
	template <typename T = Il2CppVector3> T CalcVelocityEx(float fDeltaTime, float fSpeed, bool IsStopSimulate) {
		return ((T (*)(PawnMoveSimulator*, float, float, bool))(Il2CppBase() + 0x16C1960))(this, fDeltaTime, fSpeed, IsStopSimulate);
	}
	template <typename T = void> T CharControllerMove(Il2CppVector3 delta) {
		return ((T (*)(PawnMoveSimulator*, Il2CppVector3))(Il2CppBase() + 0x16C1DA0))(this, delta);
	}
	template <typename T = bool> T MoveActor(Il2CppVector3 Delta, bool needCheckCollision) {
		return ((T (*)(PawnMoveSimulator*, Il2CppVector3, bool))(Il2CppBase() + 0x16C1F00))(this, Delta, needCheckCollision);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(PawnMoveSimulator*))(Il2CppBase() + 0x16C24E0))(this);
	}
	template <typename T = void> T CheckCollisionWithLocalPlayer(Il2CppVector3 desiredPosition) {
		return ((T (*)(PawnMoveSimulator*, Il2CppVector3))(Il2CppBase() + 0x16C21A0))(this, desiredPosition);
	}
	template <typename T = uintptr_t> T PrepareSimulateData() {
		return ((T (*)(PawnMoveSimulator*))(Il2CppBase() + 0x16C25E4))(this);
	}

};

}
