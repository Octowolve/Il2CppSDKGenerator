#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class PawnSocketTransformAdjustComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "PawnSocketTransformAdjustComponent"));
	}

	template <typename T = Il2CppVector3> T& Default_Position() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector3> T& Default_Angle() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& m_cacheFirstPersonSocketLocalPositionSet() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppVector3> T& m_cacheFirstPersonSocketLocalEulerAnglesSet() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppVector3> T& m_curFirstPersonSocketLocalPosition() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppQuaternion> T& m_curFirstPersonSocketLocalRotation() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppVector3> T& m_aimFirstPersonSocketLocalPosition() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppQuaternion> T& m_aimFirstPersonSocketLocalRotation() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& m_FirstPersonSocketTickAddTime() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& m_FirstPersonSocketLerp() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& m_IsUseNewMode() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecoverFirstPersonSocketTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateFirstPersonSocketTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldUseNewMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustFirstPersonSocketTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponBeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T get_FirstPersonWeaponSocket() {
		return ((T (*)(PawnSocketTransformAdjustComponent*))(Il2CppBase() + 0x2739FB0))(this);
	}
	template <typename T = uintptr_t> T get_FirstPersonArmSocket() {
		return ((T (*)(PawnSocketTransformAdjustComponent*))(Il2CppBase() + 0x273A090))(this);
	}
	template <typename T = void> T RecoverFirstPersonSocketTransform() {
		return ((T (*)(PawnSocketTransformAdjustComponent*))(Il2CppBase() + 0x273A170))(this);
	}
	template <typename T = void> T UpdateFirstPersonSocketTransform(float deltaTime) {
		return ((T (*)(PawnSocketTransformAdjustComponent*, float))(Il2CppBase() + 0x273A354))(this, deltaTime);
	}
	template <typename T = bool> T ShouldUseNewMode(uintptr_t activeWeapon) {
		return ((T (*)(PawnSocketTransformAdjustComponent*, uintptr_t))(Il2CppBase() + 0x273A7C8))(this, activeWeapon);
	}
	template <typename T = void> T AdjustFirstPersonSocketTransform(uintptr_t activeWeapon) {
		return ((T (*)(PawnSocketTransformAdjustComponent*, uintptr_t))(Il2CppBase() + 0x273A98C))(this, activeWeapon);
	}
	template <typename T = void> T OnWeaponBeginState(uintptr_t stateType) {
		return ((T (*)(PawnSocketTransformAdjustComponent*, uintptr_t))(Il2CppBase() + 0x273AC7C))(this, stateType);
	}
	template <typename T = void> T Init(uintptr_t pawn) {
		return ((T (*)(PawnSocketTransformAdjustComponent*, uintptr_t))(Il2CppBase() + 0x273B054))(this, pawn);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(PawnSocketTransformAdjustComponent*, float))(Il2CppBase() + 0x273B10C))(this, deltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(PawnSocketTransformAdjustComponent*, uintptr_t))(Il2CppBase() + 0x273B1D8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(PawnSocketTransformAdjustComponent*, float))(Il2CppBase() + 0x273B1DC))(this, P0);
	}

};

}
