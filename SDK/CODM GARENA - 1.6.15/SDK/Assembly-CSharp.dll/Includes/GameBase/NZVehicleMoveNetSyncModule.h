#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class NZVehicleMoveNetSyncModule
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "NZVehicleMoveNetSyncModule"));
	}

	template <typename T = uintptr_t> T& m_Vehicle() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& m_CachedRawReq() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_WheeledSimulateMoveDataList() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& LastWheeledSimulateMoveData() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& m_LastTransferTime() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& m_TransferInterval() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& cachedSyncDriveMsg() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSimulateWheeledMoveData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TransferMsgToShadowVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayerServerMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SeverSendMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecvForceUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecvDebugMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_WheeledSimulateMoveDataList() {
		return ((T (*)(NZVehicleMoveNetSyncModule*))(Il2CppBase() + 0x19E1F68))(this);
	}
	template <typename T = void> T set_WheeledSimulateMoveDataList(Il2CppList<uintptr_t>* value) {
		return ((T (*)(NZVehicleMoveNetSyncModule*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x19E1F70))(this, value);
	}
	template <typename T = void> T PreInit() {
		return ((T (*)(NZVehicleMoveNetSyncModule*))(Il2CppBase() + 0x19E1F78))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(NZVehicleMoveNetSyncModule*))(Il2CppBase() + 0x19E20BC))(this);
	}
	template <typename T = void> T OnSimulateWheeledMoveData(uintptr_t MoveData) {
		return ((T (*)(NZVehicleMoveNetSyncModule*, uintptr_t))(Il2CppBase() + 0x19E2580))(this, MoveData);
	}
	template <typename T = void> T TransferMsgToShadowVehicle(uintptr_t reqMsg) {
		return ((T (*)(NZVehicleMoveNetSyncModule*, uintptr_t))(Il2CppBase() + 0x19E2CB0))(this, reqMsg);
	}
	template <typename T = void> T PlayerServerMove(uintptr_t state) {
		return ((T (*)(NZVehicleMoveNetSyncModule*, uintptr_t))(Il2CppBase() + 0x19E3094))(this, state);
	}
	template <typename T = void> T SeverSendMove(Il2CppVector3 inPawnLocation, Il2CppVector3 inPawnAngles, Il2CppVector3 inPawnVelocity, Il2CppVector3 inPawnAngVel, float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32_t CurrentGear, bool IsMotorUp, bool IsMotorDown, float leftThrust, float rightThrust, float leftBrake, float rightBrake, uintptr_t MoveState) {
		return ((T (*)(NZVehicleMoveNetSyncModule*, Il2CppVector3, Il2CppVector3, Il2CppVector3, Il2CppVector3, float, float, float, float, int32_t, bool, bool, float, float, float, float, uintptr_t))(Il2CppBase() + 0x19E330C))(this, inPawnLocation, inPawnAngles, inPawnVelocity, inPawnAngVel, InSteeringInput, InThrottleInput, InBrakeInput, InHandbrakeInput, CurrentGear, IsMotorUp, IsMotorDown, leftThrust, rightThrust, leftBrake, rightBrake, MoveState);
	}
	template <typename T = void> T OnRecvForceUpdate(uintptr_t Msg) {
		return ((T (*)(NZVehicleMoveNetSyncModule*, uintptr_t))(Il2CppBase() + 0x19E3AD8))(this, Msg);
	}
	template <typename T = void> T OnRecvDebugMsg(uintptr_t Msg) {
		return ((T (*)(NZVehicleMoveNetSyncModule*, uintptr_t))(Il2CppBase() + 0x19E44F0))(this, Msg);
	}
	template <typename T = void> T xLuaBaseProxy_PreInit() {
		return ((T (*)(NZVehicleMoveNetSyncModule*))(Il2CppBase() + 0x19E4738))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(NZVehicleMoveNetSyncModule*))(Il2CppBase() + 0x19E473C))(this);
	}

};

}
