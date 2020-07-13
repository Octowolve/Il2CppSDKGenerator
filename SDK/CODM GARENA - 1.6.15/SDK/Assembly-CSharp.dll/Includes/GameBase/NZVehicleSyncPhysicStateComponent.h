#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class NZVehicleSyncPhysicStateComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "NZVehicleSyncPhysicStateComponent"));
	}

	template <typename T = float> static T& VEHICLE_SMALL_LINEAR_VEL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& VEHICLE_SMALL_ANGULAR_VEL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& VEHICLE_POSTION_UP_TOLORENCE_VALUE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& VEHICLE_POSTION_TOLORENCE_VALUE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& VEHICLE_ROTATION_TOLORENCE_VALUE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& VEHICLE_POSTION_LARGE_TOLORENCE_VALUE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& VEHICLE_ROTATION_LARGE_TOLORENCE_VALUE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& LastPhysicState() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& CurrentState() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& LastPrintLogTime() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& PhysicErrorCorrection() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& NoDriverPhysicErrorCorrection() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& recvVehicleStateMsgCount() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = int32_t> T& recvUsefulVehicleStateMsgCount() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = int32_t> T& RecentRecvCount() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = float> T& RecvCountPerSecond() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = float> T& LastCalcuRecvSpeedTime() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> T& LastPrintTime() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> T& LastDrawDebugInfoTime() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitSyncPhysicState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyStateFromLastWheeledSimulateData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetLastPhysicState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecvLastVehicleState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDistDiffFromDirection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PhysicTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SmoothingReceivePhysicState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ModifyLocationByTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ModifyDeltaLocationConsiderCollision() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T InitSyncPhysicState(uintptr_t OwnerVehcle) {
		return ((T (*)(NZVehicleSyncPhysicStateComponent*, uintptr_t))(Il2CppBase() + 0x19E6B38))(this, OwnerVehcle);
	}
	template <typename T = void> T CopyStateFromLastWheeledSimulateData(uintptr_t OwnerVehcle) {
		return ((T (*)(NZVehicleSyncPhysicStateComponent*, uintptr_t))(Il2CppBase() + 0x19E6DCC))(this, OwnerVehcle);
	}
	template <typename T = void> T ResetLastPhysicState(uintptr_t OwnerVehcle) {
		return ((T (*)(NZVehicleSyncPhysicStateComponent*, uintptr_t))(Il2CppBase() + 0x19E6C74))(this, OwnerVehcle);
	}
	template <typename T = void> T OnRecvLastVehicleState(uintptr_t OwnerVehicle, uintptr_t moveMsg) {
		return ((T (*)(NZVehicleSyncPhysicStateComponent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x19E780C))(this, OwnerVehicle, moveMsg);
	}
	template <typename T = void> T ApplyShift(Il2CppVector3 shift) {
		return ((T (*)(NZVehicleSyncPhysicStateComponent*, Il2CppVector3))(Il2CppBase() + 0x19E7A80))(this, shift);
	}
	template <typename T = Il2CppVector2> T GetDistDiffFromDirection(uintptr_t OwnerVehicle, Il2CppVector3 currentDirection, Il2CppVector3 serverDirection) {
		return ((T (*)(NZVehicleSyncPhysicStateComponent*, uintptr_t, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x19E7B80))(this, OwnerVehicle, currentDirection, serverDirection);
	}
	template <typename T = void> T PhysicTick(uintptr_t OwnerVehicle, float DeltaTime) {
		return ((T (*)(NZVehicleSyncPhysicStateComponent*, uintptr_t, float))(Il2CppBase() + 0x19E7E60))(this, OwnerVehicle, DeltaTime);
	}
	template <typename T = Il2CppVector3> T SmoothingReceivePhysicState(uintptr_t OwnerVehicle, uintptr_t NewState) {
		return ((T (*)(NZVehicleSyncPhysicStateComponent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x19E8998))(this, OwnerVehicle, NewState);
	}
	template <typename T = Il2CppVector3> T ModifyLocationByTime(uintptr_t ownerVehicle, uintptr_t CurrState, uintptr_t NewState, float PredictServerTime) {
		return ((T (*)(NZVehicleSyncPhysicStateComponent*, uintptr_t, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x19E8DE8))(this, ownerVehicle, CurrState, NewState, PredictServerTime);
	}
	template <typename T = Il2CppVector3> T ModifyDeltaLocationConsiderCollision(uintptr_t ownerVehicle, uintptr_t PredictLoc, uintptr_t OldPosition, uintptr_t OldQuation, uintptr_t DeltaLocation, float DeltaTime, uintptr_t Velocity) {
		return ((T (*)(NZVehicleSyncPhysicStateComponent*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, float, uintptr_t))(Il2CppBase() + 0x19EA0AC))(this, ownerVehicle, PredictLoc, OldPosition, OldQuation, DeltaLocation, DeltaTime, Velocity);
	}

};

}
