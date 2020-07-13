#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class PhysicsVehicleGround
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "PhysicsVehicle_Ground"));
	}

	template <typename T = float> T& maxMotorTorque() {
		return *(T*)((uintptr_t)this + 0x348);
	}
	template <typename T = float> T& autoBrakeSpeed() {
		return *(T*)((uintptr_t)this + 0x34C);
	}
	template <typename T = float> T& steeringSpeed() {
		return *(T*)((uintptr_t)this + 0x350);
	}
	template <typename T = float> T& recoverAngleSpeed() {
		return *(T*)((uintptr_t)this + 0x354);
	}
	template <typename T = uintptr_t> T& torqueSpeedCurve() {
		return *(T*)((uintptr_t)this + 0x358);
	}
	template <typename T = uintptr_t> T& torqueSpeedCurve_boost() {
		return *(T*)((uintptr_t)this + 0x35C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& axleInfos() {
		return *(T*)((uintptr_t)this + 0x360);
	}
	template <typename T = float> T& exhaustInWaterStartTime() {
		return *(T*)((uintptr_t)this + 0x364);
	}
	template <typename T = bool> T& waterDamaged() {
		return *(T*)((uintptr_t)this + 0x368);
	}
	template <typename T = uintptr_t> T& ExhaustPoint() {
		return *(T*)((uintptr_t)this + 0x36C);
	}
	template <typename T = uintptr_t> T& emissionColor() {
		return *(T*)((uintptr_t)this + 0x370);
	}
	template <typename T = float> T& emissionBrightness() {
		return *(T*)((uintptr_t)this + 0x380);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& wheelList() {
		return *(T*)((uintptr_t)this + 0x384);
	}
	template <typename T = bool> T& printException() {
		return *(T*)((uintptr_t)this + 0x388);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAtleast_N_WheelsGrounded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTorqueFactor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitRigidbody() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitWheels() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FixedUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBrake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_KeepUpright() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateNetAnchorTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EngineOutputLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWheelDriveData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncVehicleInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWheelExplode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = bool> T get_GasDown() {
		return ((T (*)(PhysicsVehicleGround*))(Il2CppBase() + 0x1D8A8B8))(this);
	}
	template <typename T = bool> T get_isBroken() {
		return ((T (*)(PhysicsVehicleGround*))(Il2CppBase() + 0x1D8A994))(this);
	}
	template <typename T = int32_t> T get_WheelCount() {
		return ((T (*)(PhysicsVehicleGround*))(Il2CppBase() + 0x1D8A9C8))(this);
	}
	template <typename T = bool> T get_isAllWheelGrounded() {
		return ((T (*)(PhysicsVehicleGround*))(Il2CppBase() + 0x1D8A9EC))(this);
	}
	template <typename T = bool> T get_isAnyWheelGrounded() {
		return ((T (*)(PhysicsVehicleGround*))(Il2CppBase() + 0x1D8AA78))(this);
	}
	template <typename T = bool> T IsAtleast_N_WheelsGrounded(int32_t N) {
		return ((T (*)(PhysicsVehicleGround*, int32_t))(Il2CppBase() + 0x1D8AA80))(this, N);
	}
	template <typename T = float> T GetTorqueFactor(float speedRatio) {
		return ((T (*)(PhysicsVehicleGround*, float))(Il2CppBase() + 0x1D8ABA8))(this, speedRatio);
	}
	template <typename T = void> T InitRigidbody() {
		return ((T (*)(PhysicsVehicleGround*))(Il2CppBase() + 0x1D8AC84))(this);
	}
	template <typename T = void> T InitWheels() {
		return ((T (*)(PhysicsVehicleGround*))(Il2CppBase() + 0x1D8AD34))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(PhysicsVehicleGround*))(Il2CppBase() + 0x1D8B010))(this);
	}
	template <typename T = void> T UpdateBrake(uintptr_t wheelCollider, bool isMotorWheel, bool brake) {
		return ((T (*)(PhysicsVehicleGround*, uintptr_t, bool, bool))(Il2CppBase() + 0x1D8B598))(this, wheelCollider, isMotorWheel, brake);
	}
	template <typename T = void> T KeepUpright() {
		return ((T (*)(PhysicsVehicleGround*))(Il2CppBase() + 0x1D8B7A4))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(PhysicsVehicleGround*, float))(Il2CppBase() + 0x1D8BF04))(this, deltaTime);
	}
	template <typename T = void> T TickEffect(float deltaTime) {
		return ((T (*)(PhysicsVehicleGround*, float))(Il2CppBase() + 0x1D8C454))(this, deltaTime);
	}
	template <typename T = void> T TickAudio(float deltaTime) {
		return ((T (*)(PhysicsVehicleGround*, float))(Il2CppBase() + 0x1D8C834))(this, deltaTime);
	}
	template <typename T = void> T UpdateNetAnchorTransform(float deltaTime) {
		return ((T (*)(PhysicsVehicleGround*, float))(Il2CppBase() + 0x1D8C8E8))(this, deltaTime);
	}
	template <typename T = float> T EngineOutputLevel() {
		return ((T (*)(PhysicsVehicleGround*))(Il2CppBase() + 0x1D8CC54))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetWheelDriveData() {
		return ((T (*)(PhysicsVehicleGround*))(Il2CppBase() + 0x1D8CDC4))(this);
	}
	template <typename T = void> T OnSyncVehicleInfo(uintptr_t vehicleInfo) {
		return ((T (*)(PhysicsVehicleGround*, uintptr_t))(Il2CppBase() + 0x1D8D0F4))(this, vehicleInfo);
	}
	template <typename T = void> T OnWheelExplode(int32_t wheelIndex, uintptr_t wheel) {
		return ((T (*)(PhysicsVehicleGround*, int32_t, uintptr_t))(Il2CppBase() + 0x1D8D2B4))(this, wheelIndex, wheel);
	}
	template <typename T = void> T xLuaBaseProxy_InitRigidbody() {
		return ((T (*)(PhysicsVehicleGround*))(Il2CppBase() + 0x1D8D898))(this);
	}
	template <typename T = void> T xLuaBaseProxy_FixedUpdate() {
		return ((T (*)(PhysicsVehicleGround*))(Il2CppBase() + 0x1D8D8A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(PhysicsVehicleGround*, float))(Il2CppBase() + 0x1D8D8A8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_TickEffect(float P0) {
		return ((T (*)(PhysicsVehicleGround*, float))(Il2CppBase() + 0x1D8D8B0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_TickAudio(float P0) {
		return ((T (*)(PhysicsVehicleGround*, float))(Il2CppBase() + 0x1D8D8B8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateNetAnchorTransform(float P0) {
		return ((T (*)(PhysicsVehicleGround*, float))(Il2CppBase() + 0x1D8D8C0))(this, P0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T xLuaBaseProxy_GetWheelDriveData() {
		return ((T (*)(PhysicsVehicleGround*))(Il2CppBase() + 0x1D8D8C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncVehicleInfo(uintptr_t P0) {
		return ((T (*)(PhysicsVehicleGround*, uintptr_t))(Il2CppBase() + 0x1D8D8D0))(this, P0);
	}

};

}
