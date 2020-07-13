#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class MoveHandle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "MoveHandle"));
	}

	template <typename T = int32_t> static T& MIN_MOVEMENT_DELTA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MIN_FIRST_MOVEMENT_DELTA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MIN_ADS_MOVEMENT_DELTA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& MAX_MOVEMENT_DELTA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_TouchForce() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector2> T& m_MovementAccel() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& mIsSprinting() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& mIsInputContinuouslySprinting() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = int32_t> T& mLastMoveInputInitFrame() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_LastMovementAccelInitTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& mIsFirstMove() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_SprintAngle() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcMovementVector() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InMovementArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_InMovementArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHandleImplType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessSprinting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMovementAcceleration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = Il2CppVector2> T get_MovementAccel() {
		return ((T (*)(MoveHandle*))(Il2CppBase() + 0x2710278))(this);
	}
	template <typename T = void> T Init(Il2CppVector2 pos, Il2CppVector2 size) {
		return ((T (*)(MoveHandle*, Il2CppVector2, Il2CppVector2))(Il2CppBase() + 0x271028C))(this, pos, size);
	}
	template <typename T = void> T set_IsSprinting(bool value) {
		return ((T (*)(MoveHandle*, bool))(Il2CppBase() + 0x27103E0))(this, value);
	}
	template <typename T = bool> T get_IsSprinting() {
		return ((T (*)(MoveHandle*))(Il2CppBase() + 0x27103E8))(this);
	}
	template <typename T = void> T set_IsInputContinuouslySprinting(bool value) {
		return ((T (*)(MoveHandle*, bool))(Il2CppBase() + 0x27103F0))(this, value);
	}
	template <typename T = bool> T get_IsInputContinuouslySprinting() {
		return ((T (*)(MoveHandle*))(Il2CppBase() + 0x27103F8))(this);
	}
	template <typename T = float> T get_LastMovementAccelInitTime() {
		return ((T (*)(MoveHandle*))(Il2CppBase() + 0x2710400))(this);
	}
	template <typename T = Il2CppVector2> T CalcMovementVector(uintptr_t MoveInput) {
		return ((T (*)(MoveHandle*, uintptr_t))(Il2CppBase() + 0x2710408))(this, MoveInput);
	}
	template <typename T = bool> T InMovementArea(uintptr_t playerInput) {
		return ((T (*)(MoveHandle*, uintptr_t))(Il2CppBase() + 0x27107E8))(this, playerInput);
	}
	template <typename T = bool> T InMovementArea_1(Il2CppVector2 iniPos) {
		return ((T (*)(MoveHandle*, Il2CppVector2))(Il2CppBase() + 0x27108D0))(this, iniPos);
	}
	template <typename T = uintptr_t> T GetHandleImplType() {
		return ((T (*)(MoveHandle*))(Il2CppBase() + 0x27109F4))(this);
	}
	template <typename T = float> T get_SprintAngle() {
		return ((T (*)(MoveHandle*))(Il2CppBase() + 0x2710A94))(this);
	}
	template <typename T = void> T set_SprintAngle(float value) {
		return ((T (*)(MoveHandle*, float))(Il2CppBase() + 0x2710AC0))(this, value);
	}
	template <typename T = void> T ProcessSprinting() {
		return ((T (*)(MoveHandle*))(Il2CppBase() + 0x2710B98))(this);
	}
	template <typename T = void> T UpdateMovementAcceleration() {
		return ((T (*)(MoveHandle*))(Il2CppBase() + 0x2710EF0))(this);
	}

};

}
