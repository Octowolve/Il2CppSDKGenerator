#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class AirDropPlaneMovement
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "AirDropPlaneMovement"));
	}

	template <typename T = float> T& RotateDegree() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& FallingDown() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_Pawn() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_IsMoving() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& m_Velocity() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector3> T& m_LastReceiveMovingInfoPosition() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_LastReceiveMovingInfoTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& m_LastStartFallingDownTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMovementInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStopMoving() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartFallingDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T Init(uintptr_t pawn) {
		return ((T (*)(AirDropPlaneMovement*, uintptr_t))(Il2CppBase() + 0x2C57B5C))(this, pawn);
	}
	template <typename T = void> T UpdateMovementInfo(Il2CppVector3 newPosition, Il2CppVector3 newVelocity) {
		return ((T (*)(AirDropPlaneMovement*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x2C5A26C))(this, newPosition, newVelocity);
	}
	template <typename T = void> T Update() {
		return ((T (*)(AirDropPlaneMovement*))(Il2CppBase() + 0x2C5A960))(this);
	}
	template <typename T = void> T OnStopMoving() {
		return ((T (*)(AirDropPlaneMovement*))(Il2CppBase() + 0x2C5ACB8))(this);
	}
	template <typename T = void> T StartFallingDown() {
		return ((T (*)(AirDropPlaneMovement*))(Il2CppBase() + 0x2C5AAF0))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(AirDropPlaneMovement*))(Il2CppBase() + 0x2C5AD50))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(AirDropPlaneMovement*))(Il2CppBase() + 0x2C5AE34))(this);
	}
	template <typename T = void> T ApplyShift(Il2CppVector3 shift) {
		return ((T (*)(AirDropPlaneMovement*, Il2CppVector3))(Il2CppBase() + 0x2C5AF18))(this, shift);
	}

};

}
