#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class WheeledVehicleMovementComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "WheeledVehicleMovementComponent"));
	}

	template <typename T = uintptr_t> T& OnUpdateSimulation() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T get_isReverseAsBrake() {
		return ((T (*)(WheeledVehicleMovementComponent*))(Il2CppBase() + 0x4D3E8F8))(this);
	}
	template <typename T = bool> T get_tickEnabled() {
		return ((T (*)(WheeledVehicleMovementComponent*))(Il2CppBase() + 0x4D3E990))(this);
	}
	template <typename T = void> T set_tickEnabled(bool value) {
		return ((T (*)(WheeledVehicleMovementComponent*, bool))(Il2CppBase() + 0x4D3EA28))(this, value);
	}
	template <typename T = void> T set_updateRigidbody(uintptr_t value) {
		return ((T (*)(WheeledVehicleMovementComponent*, uintptr_t))(Il2CppBase() + 0x4D3EAC8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_wheelSetups() {
		return ((T (*)(WheeledVehicleMovementComponent*))(Il2CppBase() + 0x4D3EB68))(this);
	}
	template <typename T = uintptr_t> T get_vehicleDebugInfo() {
		return ((T (*)(WheeledVehicleMovementComponent*))(Il2CppBase() + 0x4D3EC00))(this);
	}
	template <typename T = void> T set_isLocalControlled(bool value) {
		return ((T (*)(WheeledVehicleMovementComponent*, bool))(Il2CppBase() + 0x4D3EC98))(this, value);
	}
	template <typename T = float> T get_idleBrakeInput() {
		return ((T (*)(WheeledVehicleMovementComponent*))(Il2CppBase() + 0x4D3ED38))(this);
	}
	template <typename T = float> T get_stopThreshold() {
		return ((T (*)(WheeledVehicleMovementComponent*))(Il2CppBase() + 0x4D3EDD0))(this);
	}
	template <typename T = float> T get_wrongDirectionThreshold() {
		return ((T (*)(WheeledVehicleMovementComponent*))(Il2CppBase() + 0x4D3EE68))(this);
	}
	template <typename T = uintptr_t> T get_throttleInputRate() {
		return ((T (*)(WheeledVehicleMovementComponent*))(Il2CppBase() + 0x4D3EF00))(this);
	}
	template <typename T = uintptr_t> T get_brakeInputRate() {
		return ((T (*)(WheeledVehicleMovementComponent*))(Il2CppBase() + 0x4D3EF98))(this);
	}
	template <typename T = uintptr_t> T get_handbrakeInputRate() {
		return ((T (*)(WheeledVehicleMovementComponent*))(Il2CppBase() + 0x4D3F030))(this);
	}
	template <typename T = uintptr_t> T get_steeringInputRate() {
		return ((T (*)(WheeledVehicleMovementComponent*))(Il2CppBase() + 0x4D3F0C8))(this);
	}
	template <typename T = float> T get_steeringInput() {
		return ((T (*)(WheeledVehicleMovementComponent*))(Il2CppBase() + 0x4D3F160))(this);
	}
	template <typename T = void> T set_steeringInput(float value) {
		return ((T (*)(WheeledVehicleMovementComponent*, float))(Il2CppBase() + 0x4D3F1F8))(this, value);
	}
	template <typename T = float> T get_throttleInput() {
		return ((T (*)(WheeledVehicleMovementComponent*))(Il2CppBase() + 0x4D3F298))(this);
	}
	template <typename T = void> T set_throttleInput(float value) {
		return ((T (*)(WheeledVehicleMovementComponent*, float))(Il2CppBase() + 0x4D3F330))(this, value);
	}
	template <typename T = float> T get_brakeInput() {
		return ((T (*)(WheeledVehicleMovementComponent*))(Il2CppBase() + 0x4D3F3D0))(this);
	}
	template <typename T = void> T set_brakeInput(float value) {
		return ((T (*)(WheeledVehicleMovementComponent*, float))(Il2CppBase() + 0x4D3F468))(this, value);
	}
	template <typename T = float> T get_handbrakeInput() {
		return ((T (*)(WheeledVehicleMovementComponent*))(Il2CppBase() + 0x4D3F508))(this);
	}
	template <typename T = void> T set_handbrakeInput(float value) {
		return ((T (*)(WheeledVehicleMovementComponent*, float))(Il2CppBase() + 0x4D3F5A0))(this, value);
	}
	template <typename T = bool> T CheckSlipThreshold(float AbsLongSlipThreshold, float AbsLatSlipThreshold) {
		return ((T (*)(WheeledVehicleMovementComponent*, float, float))(Il2CppBase() + 0x4D3F640))(this, AbsLongSlipThreshold, AbsLatSlipThreshold);
	}
	template <typename T = bool> static T INTERNAL_CALL_CheckSlipThreshold(uintptr_t self, float AbsLongSlipThreshold, float AbsLatSlipThreshold) {
		return ((T (*)(void *, uintptr_t, float, float))(Il2CppBase() + 0x4D3F664))(0, self, AbsLongSlipThreshold, AbsLatSlipThreshold);
	}
	template <typename T = float> T GetMaxLongSlip() {
		return ((T (*)(WheeledVehicleMovementComponent*))(Il2CppBase() + 0x4D3F70C))(this);
	}
	template <typename T = float> static T INTERNAL_CALL_GetMaxLongSlip(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D3F714))(0, self);
	}
	template <typename T = float> T GetMaxSpringForce() {
		return ((T (*)(WheeledVehicleMovementComponent*))(Il2CppBase() + 0x4D3F7AC))(this);
	}
	template <typename T = float> static T INTERNAL_CALL_GetMaxSpringForce(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D3F7B4))(0, self);
	}
	template <typename T = float> T GetMaxSuspension() {
		return ((T (*)(WheeledVehicleMovementComponent*))(Il2CppBase() + 0x4D3F84C))(this);
	}
	template <typename T = float> static T INTERNAL_CALL_GetMaxSuspension(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D3F854))(0, self);
	}
	template <typename T = void> T SetTargetGear(int32_t GearNum, bool bImmediate) {
		return ((T (*)(WheeledVehicleMovementComponent*, int32_t, bool))(Il2CppBase() + 0x4D3F8EC))(this, GearNum, bImmediate);
	}
	template <typename T = void> static T INTERNAL_CALL_SetTargetGear(uintptr_t self, int32_t GearNum, bool bImmediate) {
		return ((T (*)(void *, uintptr_t, int32_t, bool))(Il2CppBase() + 0x4D3F910))(0, self, GearNum, bImmediate);
	}
	template <typename T = void> T SetUseAutoGears(bool bUseAuto) {
		return ((T (*)(WheeledVehicleMovementComponent*, bool))(Il2CppBase() + 0x4D3F9B8))(this, bUseAuto);
	}
	template <typename T = void> static T INTERNAL_CALL_SetUseAutoGears(uintptr_t self, bool bUseAuto) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x4D3F9C4))(0, self, bUseAuto);
	}
	template <typename T = float> T GetForwardSpeed() {
		return ((T (*)(WheeledVehicleMovementComponent*))(Il2CppBase() + 0x4D3FA64))(this);
	}
	template <typename T = float> static T INTERNAL_CALL_GetForwardSpeed(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D3FA6C))(0, self);
	}
	template <typename T = float> T GetEngineRotationSpeed() {
		return ((T (*)(WheeledVehicleMovementComponent*))(Il2CppBase() + 0x4D3FB04))(this);
	}
	template <typename T = float> static T INTERNAL_CALL_GetEngineRotationSpeed(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D3FB0C))(0, self);
	}
	template <typename T = float> T GetEngineMaxRotationSpeed() {
		return ((T (*)(WheeledVehicleMovementComponent*))(Il2CppBase() + 0x4D3FBA4))(this);
	}
	template <typename T = float> static T INTERNAL_CALL_GetEngineMaxRotationSpeed(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D3FBAC))(0, self);
	}
	template <typename T = int32_t> T GetCurrentGear() {
		return ((T (*)(WheeledVehicleMovementComponent*))(Il2CppBase() + 0x4D3FC44))(this);
	}
	template <typename T = int32_t> static T INTERNAL_CALL_GetCurrentGear(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D3FC4C))(0, self);
	}
	template <typename T = bool> T GetUseAutoGears() {
		return ((T (*)(WheeledVehicleMovementComponent*))(Il2CppBase() + 0x4D3FCE4))(this);
	}
	template <typename T = bool> static T INTERNAL_CALL_GetUseAutoGears(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D3FCEC))(0, self);
	}
	template <typename T = int32_t> T GetTargetGear() {
		return ((T (*)(WheeledVehicleMovementComponent*))(Il2CppBase() + 0x4D3FD84))(this);
	}
	template <typename T = int32_t> static T INTERNAL_CALL_GetTargetGear(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D3FD8C))(0, self);
	}
	template <typename T = void> T OnCreatePhysicsState() {
		return ((T (*)(WheeledVehicleMovementComponent*))(Il2CppBase() + 0x4D3FE24))(this);
	}
	template <typename T = void> static T INTERNAL_CALL_OnCreatePhysicsState(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D3FE2C))(0, self);
	}
	template <typename T = void> T OnDestroyPhysicsState() {
		return ((T (*)(WheeledVehicleMovementComponent*))(Il2CppBase() + 0x4D3FEC4))(this);
	}
	template <typename T = void> static T INTERNAL_CALL_OnDestroyPhysicsState(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D3FECC))(0, self);
	}
	template <typename T = void> T StopMovementImmediately() {
		return ((T (*)(WheeledVehicleMovementComponent*))(Il2CppBase() + 0x4D3FF64))(this);
	}
	template <typename T = void> static T INTERNAL_CALL_StopMovementImmediately(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D3FF6C))(0, self);
	}
	template <typename T = void> T UpdateVehicleMassProperties() {
		return ((T (*)(WheeledVehicleMovementComponent*))(Il2CppBase() + 0x4D40004))(this);
	}
	template <typename T = void> static T INTERNAL_CALL_UpdateVehicleMassProperties(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D4000C))(0, self);
	}
	template <typename T = void> T SetWheelRadius(int32_t wheelIndex, float NewRaduis) {
		return ((T (*)(WheeledVehicleMovementComponent*, int32_t, float))(Il2CppBase() + 0x4D400A4))(this, wheelIndex, NewRaduis);
	}
	template <typename T = void> static T INTERNAL_CALL_SetWheelRadius(uintptr_t self, int32_t wheelIndex, float NewRaduis) {
		return ((T (*)(void *, uintptr_t, int32_t, float))(Il2CppBase() + 0x4D400C8))(0, self, wheelIndex, NewRaduis);
	}
	template <typename T = void> T SetWheelSteerAngle(int32_t wheelIndex, float NewAngle) {
		return ((T (*)(WheeledVehicleMovementComponent*, int32_t, float))(Il2CppBase() + 0x4D40170))(this, wheelIndex, NewAngle);
	}
	template <typename T = void> static T INTERNAL_CALL_SetWheelSteerAngle(uintptr_t self, int32_t wheelIndex, float NewAngle) {
		return ((T (*)(void *, uintptr_t, int32_t, float))(Il2CppBase() + 0x4D40194))(0, self, wheelIndex, NewAngle);
	}
	template <typename T = void> T SetWheelLongStiffValue(int32_t wheelIndex, float longStiffValue) {
		return ((T (*)(WheeledVehicleMovementComponent*, int32_t, float))(Il2CppBase() + 0x4D4023C))(this, wheelIndex, longStiffValue);
	}
	template <typename T = void> static T INTERNAL_CALL_SetWheelLongStiffValue(uintptr_t self, int32_t wheelIndex, float longStiffValue) {
		return ((T (*)(void *, uintptr_t, int32_t, float))(Il2CppBase() + 0x4D40260))(0, self, wheelIndex, longStiffValue);
	}
	template <typename T = void> T SetWheelLatLongStiffValue(int32_t wheelIndex, float latStiffMaxLoad, float latStiffValue) {
		return ((T (*)(WheeledVehicleMovementComponent*, int32_t, float, float))(Il2CppBase() + 0x4D40308))(this, wheelIndex, latStiffMaxLoad, latStiffValue);
	}
	template <typename T = void> static T INTERNAL_CALL_SetWheelLatLongStiffValue(uintptr_t self, int32_t wheelIndex, float latStiffMaxLoad, float latStiffValue) {
		return ((T (*)(void *, uintptr_t, int32_t, float, float))(Il2CppBase() + 0x4D40334))(0, self, wheelIndex, latStiffMaxLoad, latStiffValue);
	}
	template <typename T = void> T SetWheelFrictionScale(int32_t wheelIndex, float newFrictionScale) {
		return ((T (*)(WheeledVehicleMovementComponent*, int32_t, float))(Il2CppBase() + 0x4D403EC))(this, wheelIndex, newFrictionScale);
	}
	template <typename T = void> static T INTERNAL_CALL_SetWheelFrictionScale(uintptr_t self, int32_t wheelIndex, float newFrictionScale) {
		return ((T (*)(void *, uintptr_t, int32_t, float))(Il2CppBase() + 0x4D40410))(0, self, wheelIndex, newFrictionScale);
	}
	template <typename T = void> T SetBoostTorqueMultiplier(float newTorqueMultiplier) {
		return ((T (*)(WheeledVehicleMovementComponent*, float))(Il2CppBase() + 0x4D404B8))(this, newTorqueMultiplier);
	}
	template <typename T = void> static T INTERNAL_CALL_SetBoostTorqueMultiplier(uintptr_t self, float newTorqueMultiplier) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x4D404C4))(0, self, newTorqueMultiplier);
	}
	template <typename T = float> T GetSteeringInput() {
		return ((T (*)(WheeledVehicleMovementComponent*))(Il2CppBase() + 0x4D40564))(this);
	}
	template <typename T = float> static T INTERNAL_CALL_GetSteeringInput(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D4056C))(0, self);
	}
	template <typename T = float> T GetThrottleInput() {
		return ((T (*)(WheeledVehicleMovementComponent*))(Il2CppBase() + 0x4D40604))(this);
	}
	template <typename T = float> static T INTERNAL_CALL_GetThrottleInput(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D4060C))(0, self);
	}
	template <typename T = float> T GetBrakeInput() {
		return ((T (*)(WheeledVehicleMovementComponent*))(Il2CppBase() + 0x4D406A4))(this);
	}
	template <typename T = float> static T INTERNAL_CALL_GetBrakeInput(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D406AC))(0, self);
	}
	template <typename T = void> T GetWheelInfos(Il2CppList<uintptr_t>* resultInfo) {
		return ((T (*)(WheeledVehicleMovementComponent*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4D40744))(this, resultInfo);
	}
	template <typename T = void> T GetWheelInfosInternal(uintptr_t type, uintptr_t results) {
		return ((T (*)(WheeledVehicleMovementComponent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D40818))(this, type, results);
	}

};

}
