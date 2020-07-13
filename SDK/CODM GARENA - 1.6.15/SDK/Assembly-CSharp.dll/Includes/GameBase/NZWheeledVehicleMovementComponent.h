#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class NZWheeledVehicleMovementComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "NZWheeledVehicleMovementComponent"));
	}

	template <typename T = uintptr_t> T& baseMovement() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& vehicleRigidbody() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& ownerVehicle() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& isBraking() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& vehicleSpeed() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& logicWheelList() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_ReplicatedState() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& rawSteeringInput() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& rawThrottleInput() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& rawBrakeInput() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& isRawHandbrakeInput() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& isRawGearUpInput() {
		return *(T*)((uintptr_t)this + 0x35);
	}
	template <typename T = bool> T& isRawGearDownInput() {
		return *(T*)((uintptr_t)this + 0x36);
	}
	template <typename T = bool> T& m_IsMotorUp() {
		return *(T*)((uintptr_t)this + 0x37);
	}
	template <typename T = bool> T& m_IsMotorDown() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& initFriction() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& enableTickTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& nextServerUpdateTime() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& ServerUpdateInterval() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& LastNonPassengerUpdateWheelTime() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& s_VehicleDebugger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_EnableDebugVehicle() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& m_AlwaysDebugVehicle() {
		return *(T*)((uintptr_t)this + 0x51);
	}
	template <typename T = int32_t> static T& s_LastFrameCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FixedUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableVehicleTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateVehicleMassProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWheelsFrictionScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInAir() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_IsInAir() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WheelInAirNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsWheelsCanMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInGround() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHandBrake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchGearReverse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshServerState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ServerUpdateState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcSteeringInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcBrakeInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcHandbrakeInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcThrottleInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAllInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearRawInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWheelBroken() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWheelBrokenInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWheelRadius() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWheelSteerAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWheelLongStiffValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWheelLatLongStiffValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWheelFrictionScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBoostTorqueMultiplier() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSlipThreshold() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentGear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEngineMaxRotationSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEngineRotationSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetForwardSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetForwardSpeedKPH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMaxLongSlip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMaxSpringForce() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMaxSuspension() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRawSteeringInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRawThrottleInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSteeringInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetThrottleInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBrakeInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUseAutoGears() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBrakeInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHandbrakeInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSteeringInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTargetGear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetThrottleInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopMovementImmediately() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUseAutoGears() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetIsLocallyControlled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateWheelRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleDrawDebug() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAlwaysDebugVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawDebugMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DragSingleDebugInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InterpInputValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecvVehicleInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetVehicleThrottle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}

	template <typename T = bool> T get_IsBraking() {
		return ((T (*)(NZWheeledVehicleMovementComponent*))(Il2CppBase() + 0x1619DE4))(this);
	}
	template <typename T = bool> T get_IsMotorUp() {
		return ((T (*)(NZWheeledVehicleMovementComponent*))(Il2CppBase() + 0x1619DEC))(this);
	}
	template <typename T = void> T set_IsMotorUp(bool value) {
		return ((T (*)(NZWheeledVehicleMovementComponent*, bool))(Il2CppBase() + 0x1619DF4))(this, value);
	}
	template <typename T = bool> T get_IsMotorDown() {
		return ((T (*)(NZWheeledVehicleMovementComponent*))(Il2CppBase() + 0x1619E50))(this);
	}
	template <typename T = void> T set_IsMotorDown(bool value) {
		return ((T (*)(NZWheeledVehicleMovementComponent*, bool))(Il2CppBase() + 0x1619E58))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(NZWheeledVehicleMovementComponent*))(Il2CppBase() + 0x1619EB4))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(NZWheeledVehicleMovementComponent*))(Il2CppBase() + 0x161A55C))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(NZWheeledVehicleMovementComponent*))(Il2CppBase() + 0x161AD1C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(NZWheeledVehicleMovementComponent*))(Il2CppBase() + 0x161AE38))(this);
	}
	template <typename T = void> T EnableVehicleTick(bool isEnabled) {
		return ((T (*)(NZWheeledVehicleMovementComponent*, bool))(Il2CppBase() + 0x161B5FC))(this, isEnabled);
	}
	template <typename T = void> T UpdateVehicleMassProperties() {
		return ((T (*)(NZWheeledVehicleMovementComponent*))(Il2CppBase() + 0x161B848))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(NZWheeledVehicleMovementComponent*))(Il2CppBase() + 0x161B9F0))(this);
	}
	template <typename T = void> T SetWheelsFrictionScale(float frictionScale) {
		return ((T (*)(NZWheeledVehicleMovementComponent*, float))(Il2CppBase() + 0x161BB30))(this, frictionScale);
	}
	template <typename T = bool> T IsInAir(int32_t wheelIdx) {
		return ((T (*)(NZWheeledVehicleMovementComponent*, int32_t))(Il2CppBase() + 0x161BC58))(this, wheelIdx);
	}
	template <typename T = bool> T IsInAir_1() {
		return ((T (*)(NZWheeledVehicleMovementComponent*))(Il2CppBase() + 0x161BD78))(this);
	}
	template <typename T = int32_t> T WheelInAirNum() {
		return ((T (*)(NZWheeledVehicleMovementComponent*))(Il2CppBase() + 0x161BEB4))(this);
	}
	template <typename T = bool> T IsWheelsCanMove() {
		return ((T (*)(NZWheeledVehicleMovementComponent*))(Il2CppBase() + 0x161BFE8))(this);
	}
	template <typename T = bool> T IsInGround() {
		return ((T (*)(NZWheeledVehicleMovementComponent*))(Il2CppBase() + 0x161C148))(this);
	}
	template <typename T = void> T SetHandBrake(bool bIsBrakeEnable) {
		return ((T (*)(NZWheeledVehicleMovementComponent*, bool))(Il2CppBase() + 0x161C284))(this, bIsBrakeEnable);
	}
	template <typename T = void> T UpdateState(float DeltaTime) {
		return ((T (*)(NZWheeledVehicleMovementComponent*, float))(Il2CppBase() + 0x161C440))(this, DeltaTime);
	}
	template <typename T = void> T SwitchGearReverse() {
		return ((T (*)(NZWheeledVehicleMovementComponent*))(Il2CppBase() + 0x161C964))(this);
	}
	template <typename T = void> T RefreshServerState() {
		return ((T (*)(NZWheeledVehicleMovementComponent*))(Il2CppBase() + 0x161D0C0))(this);
	}
	template <typename T = void> T ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32_t CurrentGear) {
		return ((T (*)(NZWheeledVehicleMovementComponent*, float, float, float, float, int32_t))(Il2CppBase() + 0x161D478))(this, InSteeringInput, InThrottleInput, InBrakeInput, InHandbrakeInput, CurrentGear);
	}
	template <typename T = float> T CalcSteeringInput() {
		return ((T (*)(NZWheeledVehicleMovementComponent*))(Il2CppBase() + 0x161CB9C))(this);
	}
	template <typename T = float> T CalcBrakeInput() {
		return ((T (*)(NZWheeledVehicleMovementComponent*))(Il2CppBase() + 0x161D6A8))(this);
	}
	template <typename T = float> T CalcHandbrakeInput() {
		return ((T (*)(NZWheeledVehicleMovementComponent*))(Il2CppBase() + 0x161CFD8))(this);
	}
	template <typename T = float> T CalcThrottleInput() {
		return ((T (*)(NZWheeledVehicleMovementComponent*))(Il2CppBase() + 0x161CE30))(this);
	}
	template <typename T = void> T ClearAllInput() {
		return ((T (*)(NZWheeledVehicleMovementComponent*))(Il2CppBase() + 0x161A93C))(this);
	}
	template <typename T = void> T ClearInput() {
		return ((T (*)(NZWheeledVehicleMovementComponent*))(Il2CppBase() + 0x161D938))(this);
	}
	template <typename T = void> T ClearRawInput() {
		return ((T (*)(NZWheeledVehicleMovementComponent*))(Il2CppBase() + 0x161DB38))(this);
	}
	template <typename T = void> T OnWheelBroken(int32_t index) {
		return ((T (*)(NZWheeledVehicleMovementComponent*, int32_t))(Il2CppBase() + 0x161DC18))(this, index);
	}
	template <typename T = uintptr_t> T GetWheelBrokenInfo(int32_t index) {
		return ((T (*)(NZWheeledVehicleMovementComponent*, int32_t))(Il2CppBase() + 0x161DDE8))(this, index);
	}
	template <typename T = void> T SetWheelRadius(int32_t wheelIndex, float NewRaduis) {
		return ((T (*)(NZWheeledVehicleMovementComponent*, int32_t, float))(Il2CppBase() + 0x161DFD0))(this, wheelIndex, NewRaduis);
	}
	template <typename T = void> T SetWheelSteerAngle(int32_t wheelIndex, float NewAngle) {
		return ((T (*)(NZWheeledVehicleMovementComponent*, int32_t, float))(Il2CppBase() + 0x161E0E4))(this, wheelIndex, NewAngle);
	}
	template <typename T = void> T SetWheelLongStiffValue(int32_t wheelIndex, float longStiffValue) {
		return ((T (*)(NZWheeledVehicleMovementComponent*, int32_t, float))(Il2CppBase() + 0x161E1F8))(this, wheelIndex, longStiffValue);
	}
	template <typename T = void> T SetWheelLatLongStiffValue(int32_t wheelIndex, float latStiffMaxLoad, float latStiffValue) {
		return ((T (*)(NZWheeledVehicleMovementComponent*, int32_t, float, float))(Il2CppBase() + 0x161E30C))(this, wheelIndex, latStiffMaxLoad, latStiffValue);
	}
	template <typename T = void> T SetWheelFrictionScale(int32_t wheelIndex, float newFrictionScale) {
		return ((T (*)(NZWheeledVehicleMovementComponent*, int32_t, float))(Il2CppBase() + 0x161E434))(this, wheelIndex, newFrictionScale);
	}
	template <typename T = void> T SetBoostTorqueMultiplier(float newTorqueMultiplier) {
		return ((T (*)(NZWheeledVehicleMovementComponent*, float))(Il2CppBase() + 0x161E548))(this, newTorqueMultiplier);
	}
	template <typename T = bool> T CheckSlipThreshold(float AbsLongSlipThreshold, float AbsLatSlipThreshold) {
		return ((T (*)(NZWheeledVehicleMovementComponent*, float, float))(Il2CppBase() + 0x161E640))(this, AbsLongSlipThreshold, AbsLatSlipThreshold);
	}
	template <typename T = int32_t> T GetCurrentGear() {
		return ((T (*)(NZWheeledVehicleMovementComponent*))(Il2CppBase() + 0x161E750))(this);
	}
	template <typename T = float> T GetEngineMaxRotationSpeed() {
		return ((T (*)(NZWheeledVehicleMovementComponent*))(Il2CppBase() + 0x161E83C))(this);
	}
	template <typename T = float> T GetEngineRotationSpeed() {
		return ((T (*)(NZWheeledVehicleMovementComponent*))(Il2CppBase() + 0x161E928))(this);
	}
	template <typename T = float> T GetForwardSpeed() {
		return ((T (*)(NZWheeledVehicleMovementComponent*))(Il2CppBase() + 0x161D38C))(this);
	}
	template <typename T = float> T GetForwardSpeedKPH() {
		return ((T (*)(NZWheeledVehicleMovementComponent*))(Il2CppBase() + 0x161EA14))(this);
	}
	template <typename T = float> T GetMaxLongSlip() {
		return ((T (*)(NZWheeledVehicleMovementComponent*))(Il2CppBase() + 0x161EAFC))(this);
	}
	template <typename T = float> T GetMaxSpringForce() {
		return ((T (*)(NZWheeledVehicleMovementComponent*))(Il2CppBase() + 0x161EBE8))(this);
	}
	template <typename T = float> T GetMaxSuspension() {
		return ((T (*)(NZWheeledVehicleMovementComponent*))(Il2CppBase() + 0x161ECD4))(this);
	}
	template <typename T = float> T GetRawSteeringInput() {
		return ((T (*)(NZWheeledVehicleMovementComponent*))(Il2CppBase() + 0x161EDC0))(this);
	}
	template <typename T = float> T GetRawThrottleInput() {
		return ((T (*)(NZWheeledVehicleMovementComponent*))(Il2CppBase() + 0x161EE90))(this);
	}
	template <typename T = float> T GetSteeringInput() {
		return ((T (*)(NZWheeledVehicleMovementComponent*))(Il2CppBase() + 0x161EF60))(this);
	}
	template <typename T = float> T GetThrottleInput() {
		return ((T (*)(NZWheeledVehicleMovementComponent*))(Il2CppBase() + 0x161F04C))(this);
	}
	template <typename T = float> T GetBrakeInput() {
		return ((T (*)(NZWheeledVehicleMovementComponent*))(Il2CppBase() + 0x161F138))(this);
	}
	template <typename T = bool> T GetUseAutoGears() {
		return ((T (*)(NZWheeledVehicleMovementComponent*))(Il2CppBase() + 0x161F224))(this);
	}
	template <typename T = void> T SetBrakeInput(float Brake) {
		return ((T (*)(NZWheeledVehicleMovementComponent*, float))(Il2CppBase() + 0x161F310))(this, Brake);
	}
	template <typename T = void> T SetHandbrakeInput(bool bNewHandbrake) {
		return ((T (*)(NZWheeledVehicleMovementComponent*, bool))(Il2CppBase() + 0x161C368))(this, bNewHandbrake);
	}
	template <typename T = void> T SetSteeringInput(float Steering) {
		return ((T (*)(NZWheeledVehicleMovementComponent*, float))(Il2CppBase() + 0x161F44C))(this, Steering);
	}
	template <typename T = void> T SetTargetGear(int32_t GearNum, bool bImmediate) {
		return ((T (*)(NZWheeledVehicleMovementComponent*, int32_t, bool))(Il2CppBase() + 0x161D278))(this, GearNum, bImmediate);
	}
	template <typename T = void> T SetThrottleInput(float Throttle) {
		return ((T (*)(NZWheeledVehicleMovementComponent*, float))(Il2CppBase() + 0x161F588))(this, Throttle);
	}
	template <typename T = void> T StopMovementImmediately() {
		return ((T (*)(NZWheeledVehicleMovementComponent*))(Il2CppBase() + 0x161F6C4))(this);
	}
	template <typename T = void> T SetUseAutoGears(bool bUseAuto) {
		return ((T (*)(NZWheeledVehicleMovementComponent*, bool))(Il2CppBase() + 0x161F7B8))(this, bUseAuto);
	}
	template <typename T = void> T SetIsLocallyControlled(bool bIsLocallyControlled) {
		return ((T (*)(NZWheeledVehicleMovementComponent*, bool))(Il2CppBase() + 0x161F8B0))(this, bIsLocallyControlled);
	}
	template <typename T = void> T UpdateWheelRotation() {
		return ((T (*)(NZWheeledVehicleMovementComponent*))(Il2CppBase() + 0x161AFF8))(this);
	}
	template <typename T = void> T ToggleDrawDebug() {
		return ((T (*)(NZWheeledVehicleMovementComponent*))(Il2CppBase() + 0x161AA30))(this);
	}
	template <typename T = void> T SetAlwaysDebugVehicle() {
		return ((T (*)(NZWheeledVehicleMovementComponent*))(Il2CppBase() + 0x161F9A8))(this);
	}
	template <typename T = void> T DrawDebugMsg() {
		return ((T (*)(NZWheeledVehicleMovementComponent*))(Il2CppBase() + 0x161FB90))(this);
	}
	template <typename T = void> T DragSingleDebugInfo(Il2CppString* title, uintptr_t basement) {
		return ((T (*)(NZWheeledVehicleMovementComponent*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x161FC58))(this, title, basement);
	}
	template <typename T = float> T InterpInputValue(float riseRate, float fallRate, float DeltaTime, float CurrentValue, float NewValue) {
		return ((T (*)(NZWheeledVehicleMovementComponent*, float, float, float, float, float))(Il2CppBase() + 0x161CC6C))(this, riseRate, fallRate, DeltaTime, CurrentValue, NewValue);
	}
	template <typename T = void> T OnRecvVehicleInput(uintptr_t moveMsg) {
		return ((T (*)(NZWheeledVehicleMovementComponent*, uintptr_t))(Il2CppBase() + 0x16221A8))(this, moveMsg);
	}
	template <typename T = void> T ResetVehicleThrottle() {
		return ((T (*)(NZWheeledVehicleMovementComponent*))(Il2CppBase() + 0x1622394))(this);
	}

};

}
