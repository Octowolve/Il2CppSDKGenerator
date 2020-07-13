#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class AirDrop
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "AirDrop"));
	}

	template <typename T = uintptr_t> T& ParachuteGo() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& AirDropGo() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& SignalEffectGO() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& EnterTrigger() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Collider() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& LerpTransformTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& Mass() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& Drag() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& EnablePhysicsHeight() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& m_IsMoving() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector3> T& m_Velocity() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppVector3> T& m_LastReceiveMovingInfoPosition() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& m_LastReceiveMovingInfoTime() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& m_HideSignalEffectTime() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& m_HasPlayedOnGroundSound() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& m_RigidBody() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& m_LastRayCastTime() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& m_HasStopMoving() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& m_BeginLifeTime() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppVector3> T& m_BeginLerpPostion() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppQuaternion> T& m_BeginLerpRotation() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppVector3> T& m_DestPostion() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppQuaternion> T& m_DestRotation() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& m_BeginLerpToDestTransform() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = float> T& m_BeginLerpTransformTime() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = bool> T& m_StopInWater() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uint32_t> T& m_ActorID() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uint32_t> T& m_VehicleActorID() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uint32_t> T& m_DriverID() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& m_DropType() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& m_Opened() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMovementInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RotateOnGround() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopMoving() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSignalEffectState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnablePhysics() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisablePhysics() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayOnGroundSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LerpToDestTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanRegist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleTankVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = uint32_t> T get_ActorID() {
		return ((T (*)(AirDrop*))(Il2CppBase() + 0x2C53060))(this);
	}
	template <typename T = void> T set_ActorID(uint32_t value) {
		return ((T (*)(AirDrop*, uint32_t))(Il2CppBase() + 0x2C53068))(this, value);
	}
	template <typename T = uint32_t> T get_VehicleActorID() {
		return ((T (*)(AirDrop*))(Il2CppBase() + 0x2C53070))(this);
	}
	template <typename T = void> T set_VehicleActorID(uint32_t value) {
		return ((T (*)(AirDrop*, uint32_t))(Il2CppBase() + 0x2C53078))(this, value);
	}
	template <typename T = uint32_t> T get_DriverID() {
		return ((T (*)(AirDrop*))(Il2CppBase() + 0x2C53080))(this);
	}
	template <typename T = void> T set_DriverID(uint32_t value) {
		return ((T (*)(AirDrop*, uint32_t))(Il2CppBase() + 0x2C53088))(this, value);
	}
	template <typename T = uintptr_t> T get_DropType() {
		return ((T (*)(AirDrop*))(Il2CppBase() + 0x2C53090))(this);
	}
	template <typename T = void> T set_DropType(uintptr_t value) {
		return ((T (*)(AirDrop*, uintptr_t))(Il2CppBase() + 0x2C53098))(this, value);
	}
	template <typename T = bool> T get_Opened() {
		return ((T (*)(AirDrop*))(Il2CppBase() + 0x2C530A0))(this);
	}
	template <typename T = void> T set_Opened(bool value) {
		return ((T (*)(AirDrop*, bool))(Il2CppBase() + 0x2C530A8))(this, value);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(AirDrop*))(Il2CppBase() + 0x2C530B0))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(AirDrop*))(Il2CppBase() + 0x2C53194))(this);
	}
	template <typename T = void> T ApplyShift(Il2CppVector3 shift) {
		return ((T (*)(AirDrop*, Il2CppVector3))(Il2CppBase() + 0x2C53278))(this, shift);
	}
	template <typename T = void> T Start() {
		return ((T (*)(AirDrop*))(Il2CppBase() + 0x2C533E8))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(AirDrop*))(Il2CppBase() + 0x2C537B0))(this);
	}
	template <typename T = void> T UpdateMovementInfo(Il2CppVector3 newPosition, Il2CppQuaternion newQuaternion, Il2CppVector3 newVelocity, float hideSignalEffectTime, bool enablePhysics) {
		return ((T (*)(AirDrop*, Il2CppVector3, Il2CppQuaternion, Il2CppVector3, float, bool))(Il2CppBase() + 0x2C53860))(this, newPosition, newQuaternion, newVelocity, hideSignalEffectTime, enablePhysics);
	}
	template <typename T = void> T RotateOnGround(Il2CppVector3 newPosition, Il2CppQuaternion newQuaternion, float hideSignalEffectTime, bool enablePhysics) {
		return ((T (*)(AirDrop*, Il2CppVector3, Il2CppQuaternion, float, bool))(Il2CppBase() + 0x2C53FB8))(this, newPosition, newQuaternion, hideSignalEffectTime, enablePhysics);
	}
	template <typename T = void> T StopMoving(Il2CppVector3 newPosition, Il2CppQuaternion newQuaternion, float hideSignalEffectTime) {
		return ((T (*)(AirDrop*, Il2CppVector3, Il2CppQuaternion, float))(Il2CppBase() + 0x2C545CC))(this, newPosition, newQuaternion, hideSignalEffectTime);
	}
	template <typename T = void> T Update() {
		return ((T (*)(AirDrop*))(Il2CppBase() + 0x2C54A6C))(this);
	}
	template <typename T = void> T UpdateSignalEffectState() {
		return ((T (*)(AirDrop*))(Il2CppBase() + 0x2C53C50))(this);
	}
	template <typename T = void> T EnablePhysics() {
		return ((T (*)(AirDrop*))(Il2CppBase() + 0x2C554D0))(this);
	}
	template <typename T = void> T DisablePhysics() {
		return ((T (*)(AirDrop*))(Il2CppBase() + 0x2C5492C))(this);
	}
	template <typename T = void> T PlayOnGroundSound() {
		return ((T (*)(AirDrop*))(Il2CppBase() + 0x2C542AC))(this);
	}
	template <typename T = void> T LerpToDestTransform() {
		return ((T (*)(AirDrop*))(Il2CppBase() + 0x2C55A3C))(this);
	}
	template <typename T = bool> T CanRegist() {
		return ((T (*)(AirDrop*))(Il2CppBase() + 0x2C55DD4))(this);
	}
	template <typename T = void> T HandleTankVehicle() {
		return ((T (*)(AirDrop*))(Il2CppBase() + 0x2C5572C))(this);
	}
	template <typename T = void> T SwitchToVehicle() {
		return ((T (*)(AirDrop*))(Il2CppBase() + 0x2C55E74))(this);
	}

};

}
