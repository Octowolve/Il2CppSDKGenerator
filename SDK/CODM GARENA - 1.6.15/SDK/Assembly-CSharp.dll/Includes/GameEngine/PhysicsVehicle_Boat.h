#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class PhysicsVehicleBoat
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "PhysicsVehicle_Boat"));
	}

	template <typename T = Il2CppVector3> T& thrustPosition() {
		return *(T*)((uintptr_t)this + 0x348);
	}
	template <typename T = float> T& subMergeHeight() {
		return *(T*)((uintptr_t)this + 0x354);
	}
	template <typename T = float> T& thrust() {
		return *(T*)((uintptr_t)this + 0x358);
	}
	template <typename T = bool> T& inWater() {
		return *(T*)((uintptr_t)this + 0x35C);
	}
	template <typename T = Il2CppVector3> T& rudderDirection() {
		return *(T*)((uintptr_t)this + 0x360);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& propellerTransform() {
		return *(T*)((uintptr_t)this + 0x36C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& rudderTransform() {
		return *(T*)((uintptr_t)this + 0x370);
	}
	template <typename T = float> T& rpm() {
		return *(T*)((uintptr_t)this + 0x374);
	}
	template <typename T = float> T& propellerRpmRatio() {
		return *(T*)((uintptr_t)this + 0x378);
	}
	template <typename T = float> T& maxThrust() {
		return *(T*)((uintptr_t)this + 0x37C);
	}
	template <typename T = float> T& maxRudderForce() {
		return *(T*)((uintptr_t)this + 0x380);
	}
	template <typename T = float> T& minRPM() {
		return *(T*)((uintptr_t)this + 0x384);
	}
	template <typename T = float> T& maxRPM() {
		return *(T*)((uintptr_t)this + 0x388);
	}
	template <typename T = float> T& reverseThrustCoefficient() {
		return *(T*)((uintptr_t)this + 0x38C);
	}
	template <typename T = float> T& spinVelocity() {
		return *(T*)((uintptr_t)this + 0x390);
	}
	template <typename T = float> T& spinUpTime() {
		return *(T*)((uintptr_t)this + 0x394);
	}
	template <typename T = float> T& rudderAngle() {
		return *(T*)((uintptr_t)this + 0x398);
	}
	template <typename T = float> T& rotationSpeed() {
		return *(T*)((uintptr_t)this + 0x39C);
	}
	template <typename T = uintptr_t> T& thrustSpeedCurve() {
		return *(T*)((uintptr_t)this + 0x3A0);
	}
	template <typename T = uintptr_t> T& steerSpeedRadioCurve() {
		return *(T*)((uintptr_t)this + 0x3A4);
	}
	template <typename T = float> T& boostThrustMultiplier() {
		return *(T*)((uintptr_t)this + 0x3A8);
	}
	template <typename T = uintptr_t> T& steeringWheel() {
		return *(T*)((uintptr_t)this + 0x3AC);
	}
	template <typename T = uintptr_t> T& floatingObject() {
		return *(T*)((uintptr_t)this + 0x3B0);
	}
	template <typename T = uintptr_t> T& waterFx() {
		return *(T*)((uintptr_t)this + 0x3B4);
	}
	template <typename T = uintptr_t> T& waterFxRight() {
		return *(T*)((uintptr_t)this + 0x3B8);
	}
	template <typename T = uintptr_t> T& waterFxLeft() {
		return *(T*)((uintptr_t)this + 0x3BC);
	}
	template <typename T = bool> T& isMoveBackward() {
		return *(T*)((uintptr_t)this + 0x3C0);
	}
	template <typename T = uintptr_t> T& boatResourceConfig() {
		return *(T*)((uintptr_t)this + 0x3C4);
	}
	template <typename T = uintptr_t> T& m_SpringArmComp() {
		return *(T*)((uintptr_t)this + 0x3C8);
	}
	template <typename T = Il2CppVector3> T& DriverSpringArmRotCache() {
		return *(T*)((uintptr_t)this + 0x3CC);
	}
	template <typename T = float> T& m_DriverCameraPitchMin() {
		return *(T*)((uintptr_t)this + 0x3D8);
	}
	template <typename T = float> T& m_DriverCameraPitchMax() {
		return *(T*)((uintptr_t)this + 0x3DC);
	}
	template <typename T = uintptr_t> static T& s_VehicleDebugger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_EnableDebugVehicle() {
		return *(T*)((uintptr_t)this + 0x3E0);
	}
	template <typename T = bool> T& m_AlwaysDebugVehicle() {
		return *(T*)((uintptr_t)this + 0x3E1);
	}
	template <typename T = int32_t> static T& s_LastFrameCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVehicleResourceConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshVehicleBroken() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_isAvailable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckTurnOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTurnOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DealWithPropeller() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DealwithRudderDirection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOffVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FixedUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshInWaterState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateWaterFx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddSpringArmRot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcFollowCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpdateRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOnVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeSeat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleDrawDebug() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawDebugMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}

	template <typename T = uintptr_t> T GetVehicleResourceConfig() {
		return ((T (*)(PhysicsVehicleBoat*))(Il2CppBase() + 0x1D78ECC))(this);
	}
	template <typename T = void> T InitVehicle(uint32_t actorID, uintptr_t vehicleType) {
		return ((T (*)(PhysicsVehicleBoat*, uint32_t, uintptr_t))(Il2CppBase() + 0x1D78F9C))(this, actorID, vehicleType);
	}
	template <typename T = void> T OnLoadComplete(int32_t assetID, uintptr_t CallBackData) {
		return ((T (*)(PhysicsVehicleBoat*, int32_t, uintptr_t))(Il2CppBase() + 0x1D79268))(this, assetID, CallBackData);
	}
	template <typename T = void> T RefreshVehicleBroken() {
		return ((T (*)(PhysicsVehicleBoat*))(Il2CppBase() + 0x1D79580))(this);
	}
	template <typename T = bool> T isAvailable() {
		return ((T (*)(PhysicsVehicleBoat*))(Il2CppBase() + 0x1D7975C))(this);
	}
	template <typename T = void> T CheckTurnOver() {
		return ((T (*)(PhysicsVehicleBoat*))(Il2CppBase() + 0x1D79838))(this);
	}
	template <typename T = void> T OnTurnOver() {
		return ((T (*)(PhysicsVehicleBoat*))(Il2CppBase() + 0x1D79A7C))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(PhysicsVehicleBoat*, float))(Il2CppBase() + 0x1D79B6C))(this, deltaTime);
	}
	template <typename T = void> T DealWithPropeller(float deltaTime) {
		return ((T (*)(PhysicsVehicleBoat*, float))(Il2CppBase() + 0x1D79D9C))(this, deltaTime);
	}
	template <typename T = void> T DealwithRudderDirection() {
		return ((T (*)(PhysicsVehicleBoat*))(Il2CppBase() + 0x1D79FCC))(this);
	}
	template <typename T = void> T GetOffVehicle(uintptr_t pawn, Il2CppVector3 offPosition) {
		return ((T (*)(PhysicsVehicleBoat*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x1D7A200))(this, pawn, offPosition);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(PhysicsVehicleBoat*))(Il2CppBase() + 0x1D7A40C))(this);
	}
	template <typename T = void> T RefreshInWaterState() {
		return ((T (*)(PhysicsVehicleBoat*))(Il2CppBase() + 0x1D7AA64))(this);
	}
	template <typename T = void> T UpdateWaterFx() {
		return ((T (*)(PhysicsVehicleBoat*))(Il2CppBase() + 0x1D7AC38))(this);
	}
	template <typename T = void> T AddSpringArmRot(Il2CppVector3 deltaRotation) {
		return ((T (*)(PhysicsVehicleBoat*, Il2CppVector3))(Il2CppBase() + 0x1D7B198))(this, deltaRotation);
	}
	template <typename T = void> T CalcFollowCamera(uintptr_t camera, uintptr_t* cam_pos, uintptr_t* cam_rot) {
		return ((T (*)(PhysicsVehicleBoat*, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x1D7B534))(this, camera, cam_pos, cam_rot);
	}
	template <typename T = void> T OnUpdateRotation(Il2CppVector3 rotAngle) {
		return ((T (*)(PhysicsVehicleBoat*, Il2CppVector3))(Il2CppBase() + 0x1D7B698))(this, rotAngle);
	}
	template <typename T = void> T GetOnVehicle(uintptr_t pawn, uintptr_t seat) {
		return ((T (*)(PhysicsVehicleBoat*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1D7B7A0))(this, pawn, seat);
	}
	template <typename T = void> T ChangeSeat(uintptr_t pawn, uintptr_t newSeat) {
		return ((T (*)(PhysicsVehicleBoat*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1D7B9B4))(this, pawn, newSeat);
	}
	template <typename T = void> T ToggleDrawDebug() {
		return ((T (*)(PhysicsVehicleBoat*))(Il2CppBase() + 0x1D7BBC8))(this);
	}
	template <typename T = void> T DrawDebugMsg() {
		return ((T (*)(PhysicsVehicleBoat*))(Il2CppBase() + 0x1D7BEB4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetVehicleResourceConfig() {
		return ((T (*)(PhysicsVehicleBoat*))(Il2CppBase() + 0x1D7BF80))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitVehicle(uint32_t P0, uintptr_t P1) {
		return ((T (*)(PhysicsVehicleBoat*, uint32_t, uintptr_t))(Il2CppBase() + 0x1D7BF88))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnLoadComplete(int32_t P0, uintptr_t P1) {
		return ((T (*)(PhysicsVehicleBoat*, int32_t, uintptr_t))(Il2CppBase() + 0x1D7BF90))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshVehicleBroken() {
		return ((T (*)(PhysicsVehicleBoat*))(Il2CppBase() + 0x1D7BF98))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_isAvailable() {
		return ((T (*)(PhysicsVehicleBoat*))(Il2CppBase() + 0x1D7BFA0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CheckTurnOver() {
		return ((T (*)(PhysicsVehicleBoat*))(Il2CppBase() + 0x1D7BFA8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnTurnOver() {
		return ((T (*)(PhysicsVehicleBoat*))(Il2CppBase() + 0x1D7BFB0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(PhysicsVehicleBoat*, float))(Il2CppBase() + 0x1D7BFB8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_GetOffVehicle(uintptr_t P0, Il2CppVector3 P1) {
		return ((T (*)(PhysicsVehicleBoat*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x1D7BFC0))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_FixedUpdate() {
		return ((T (*)(PhysicsVehicleBoat*))(Il2CppBase() + 0x1D7BFE4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CalcFollowCamera(uintptr_t P0, uintptr_t* P1, uintptr_t* P2) {
		return ((T (*)(PhysicsVehicleBoat*, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x1D7BFEC))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_OnUpdateRotation(Il2CppVector3 P0) {
		return ((T (*)(PhysicsVehicleBoat*, Il2CppVector3))(Il2CppBase() + 0x1D7C00C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_GetOnVehicle(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(PhysicsVehicleBoat*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1D7C02C))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_ChangeSeat(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(PhysicsVehicleBoat*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1D7C034))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_ToggleDrawDebug() {
		return ((T (*)(PhysicsVehicleBoat*))(Il2CppBase() + 0x1D7C03C))(this);
	}

};

}
