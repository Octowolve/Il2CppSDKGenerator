#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class TouchMoveLRWeaponShakeMode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "TouchMoveLRWeaponShakeMode"));
	}

	template <typename T = uintptr_t> T& m_ownerPawn() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector3> T& m_curOffset() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& m_vel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& ShakeData() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_staticMoveDiffTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& m_isEnd() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_ModeType() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_ModeDataType() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_curOffsetState() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& mTimer() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_TouchMoveDataController() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& ignoreAiming() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppVector3> T& LastRotation() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppVector3> T& CurRotation() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppVector3> T& CurPosition() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppVector3> T& LastPosition() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& timer() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = void> T set_mOffsetState(uintptr_t value) {
		return ((T (*)(TouchMoveLRWeaponShakeMode*, uintptr_t))(Il2CppBase() + 0x3437954))(this, value);
	}
	template <typename T = uintptr_t> T get_mOffsetState() {
		return ((T (*)(TouchMoveLRWeaponShakeMode*))(Il2CppBase() + 0x343795C))(this);
	}
	template <typename T = uintptr_t> T GetModeType() {
		return ((T (*)(TouchMoveLRWeaponShakeMode*))(Il2CppBase() + 0x3437964))(this);
	}
	template <typename T = uintptr_t> T GetModeDataType() {
		return ((T (*)(TouchMoveLRWeaponShakeMode*))(Il2CppBase() + 0x343796C))(this);
	}
	template <typename T = float> T GetPositionY() {
		return ((T (*)(TouchMoveLRWeaponShakeMode*))(Il2CppBase() + 0x3437974))(this);
	}
	template <typename T = Il2CppVector3> T UpdateRotationOffset(float deltaTime, bool inState) {
		return ((T (*)(TouchMoveLRWeaponShakeMode*, float, bool))(Il2CppBase() + 0x343797C))(this, deltaTime, inState);
	}
	template <typename T = Il2CppVector3> T UpdatePositionOffset(float deltaTime, bool inState) {
		return ((T (*)(TouchMoveLRWeaponShakeMode*, float, bool))(Il2CppBase() + 0x3438024))(this, deltaTime, inState);
	}
	template <typename T = void> T Init(uintptr_t modeType, uintptr_t modeDataType, uintptr_t owerPawn) {
		return ((T (*)(TouchMoveLRWeaponShakeMode*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3438560))(this, modeType, modeDataType, owerPawn);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(TouchMoveLRWeaponShakeMode*))(Il2CppBase() + 0x34387B0))(this);
	}
	template <typename T = bool> T get_ignoreAiming() {
		return ((T (*)(TouchMoveLRWeaponShakeMode*))(Il2CppBase() + 0x34387B4))(this);
	}
	template <typename T = void> T set_ignoreAiming(bool value) {
		return ((T (*)(TouchMoveLRWeaponShakeMode*, bool))(Il2CppBase() + 0x34387BC))(this, value);
	}
	template <typename T = void> T SetEnd() {
		return ((T (*)(TouchMoveLRWeaponShakeMode*))(Il2CppBase() + 0x34387C4))(this);
	}
	template <typename T = bool> T IsEnd() {
		return ((T (*)(TouchMoveLRWeaponShakeMode*))(Il2CppBase() + 0x3438830))(this);
	}
	template <typename T = float> T GetMagnitude() {
		return ((T (*)(TouchMoveLRWeaponShakeMode*))(Il2CppBase() + 0x34388FC))(this);
	}
	template <typename T = Il2CppVector3> T GetOffsetDir() {
		return ((T (*)(TouchMoveLRWeaponShakeMode*))(Il2CppBase() + 0x3437FF4))(this);
	}
	template <typename T = Il2CppVector3> T get_LastRotation() {
		return ((T (*)(TouchMoveLRWeaponShakeMode*))(Il2CppBase() + 0x3438D60))(this);
	}
	template <typename T = void> T set_LastRotation(Il2CppVector3 value) {
		return ((T (*)(TouchMoveLRWeaponShakeMode*, Il2CppVector3))(Il2CppBase() + 0x3438D74))(this, value);
	}
	template <typename T = Il2CppVector3> T get_CurRotation() {
		return ((T (*)(TouchMoveLRWeaponShakeMode*))(Il2CppBase() + 0x3438D80))(this);
	}
	template <typename T = void> T set_CurRotation(Il2CppVector3 value) {
		return ((T (*)(TouchMoveLRWeaponShakeMode*, Il2CppVector3))(Il2CppBase() + 0x3438D94))(this, value);
	}
	template <typename T = Il2CppVector3> T get_CurPosition() {
		return ((T (*)(TouchMoveLRWeaponShakeMode*))(Il2CppBase() + 0x3438DA0))(this);
	}
	template <typename T = void> T set_CurPosition(Il2CppVector3 value) {
		return ((T (*)(TouchMoveLRWeaponShakeMode*, Il2CppVector3))(Il2CppBase() + 0x3438DB4))(this, value);
	}
	template <typename T = Il2CppVector3> T get_LastPosition() {
		return ((T (*)(TouchMoveLRWeaponShakeMode*))(Il2CppBase() + 0x3438DC0))(this);
	}
	template <typename T = void> T set_LastPosition(Il2CppVector3 value) {
		return ((T (*)(TouchMoveLRWeaponShakeMode*, Il2CppVector3))(Il2CppBase() + 0x3438DD4))(this, value);
	}
	template <typename T = float> T get_timer() {
		return ((T (*)(TouchMoveLRWeaponShakeMode*))(Il2CppBase() + 0x3438DE0))(this);
	}
	template <typename T = void> T set_timer(float value) {
		return ((T (*)(TouchMoveLRWeaponShakeMode*, float))(Il2CppBase() + 0x3438DE8))(this, value);
	}

};

}
