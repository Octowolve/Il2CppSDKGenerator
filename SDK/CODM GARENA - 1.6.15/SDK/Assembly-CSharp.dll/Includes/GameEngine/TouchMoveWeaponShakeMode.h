#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class TouchMoveWeaponShakeMode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "TouchMoveWeaponShakeMode"));
	}

	template <typename T = Il2CppVector3> T& m_offsetRet() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_ownerPawn() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector3> T& m_maxOffset() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& m_curOffset() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& m_vel() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector3> T& m_accel() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_PopupTime() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& m_KickbackTime() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& m_staticMoveDiffTime() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& m_TimeScale() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& m_isEnd() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& m_angle() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& m_ModeType() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& m_ModeDataType() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& m_TurnCameraOffset() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& m_TurnCameraPopup() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& m_TumCameraKickback() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& m_curOffsetState() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& mTimer() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& mFucOnRun() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_TouchMoveDataController() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& ignoreAiming() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = bool> T& tryEnd() {
		return *(T*)((uintptr_t)this + 0x85);
	}
	template <typename T = float> T& m_dynamicSpeed() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppVector2> T& m_Dir() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppVector2> T& m_LastDir() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = float> T& m_LastMagnitude() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = float> T& m_LerpSpeed() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppVector3> T& LastRotation() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppVector3> T& CurRotation() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppVector3> T& CurPosition() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = Il2CppVector3> T& LastPosition() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = float> T& timer() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = float> T& m_lerpMagnitude() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = float> T& m_changeAngle() {
		return *(T*)((uintptr_t)this + 0xDC);
	}

	template <typename T = void> T set_mOffsetState(uintptr_t value) {
		return ((T (*)(TouchMoveWeaponShakeMode*, uintptr_t))(Il2CppBase() + 0x3438FC8))(this, value);
	}
	template <typename T = uintptr_t> T get_mOffsetState() {
		return ((T (*)(TouchMoveWeaponShakeMode*))(Il2CppBase() + 0x3438FD0))(this);
	}
	template <typename T = uintptr_t> T GetModeType() {
		return ((T (*)(TouchMoveWeaponShakeMode*))(Il2CppBase() + 0x3438FD8))(this);
	}
	template <typename T = uintptr_t> T GetModeDataType() {
		return ((T (*)(TouchMoveWeaponShakeMode*))(Il2CppBase() + 0x3438FE0))(this);
	}
	template <typename T = float> T GetPositionY() {
		return ((T (*)(TouchMoveWeaponShakeMode*))(Il2CppBase() + 0x3438FE8))(this);
	}
	template <typename T = Il2CppVector3> T UpdatePositionOffset(float deltaTime, bool inState) {
		return ((T (*)(TouchMoveWeaponShakeMode*, float, bool))(Il2CppBase() + 0x3438FF0))(this, deltaTime, inState);
	}
	template <typename T = void> T ResetData() {
		return ((T (*)(TouchMoveWeaponShakeMode*))(Il2CppBase() + 0x3439008))(this);
	}
	template <typename T = void> T Init(uintptr_t modeType, uintptr_t modeDataType, uintptr_t owerPawn) {
		return ((T (*)(TouchMoveWeaponShakeMode*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x34393B8))(this, modeType, modeDataType, owerPawn);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(TouchMoveWeaponShakeMode*))(Il2CppBase() + 0x3439480))(this);
	}
	template <typename T = bool> T get_ignoreAiming() {
		return ((T (*)(TouchMoveWeaponShakeMode*))(Il2CppBase() + 0x3439484))(this);
	}
	template <typename T = void> T set_ignoreAiming(bool value) {
		return ((T (*)(TouchMoveWeaponShakeMode*, bool))(Il2CppBase() + 0x343948C))(this, value);
	}
	template <typename T = void> T SetEnd() {
		return ((T (*)(TouchMoveWeaponShakeMode*))(Il2CppBase() + 0x3439494))(this);
	}
	template <typename T = bool> T IsEnd() {
		return ((T (*)(TouchMoveWeaponShakeMode*))(Il2CppBase() + 0x3439604))(this);
	}
	template <typename T = void> T UpdateStaticDiffTime(float deltaTime) {
		return ((T (*)(TouchMoveWeaponShakeMode*, float))(Il2CppBase() + 0x343960C))(this, deltaTime);
	}
	template <typename T = float> T GetMagnitude() {
		return ((T (*)(TouchMoveWeaponShakeMode*))(Il2CppBase() + 0x34396EC))(this);
	}
	template <typename T = Il2CppVector3> T GetOffsetDir() {
		return ((T (*)(TouchMoveWeaponShakeMode*))(Il2CppBase() + 0x34399B4))(this);
	}
	template <typename T = Il2CppVector3> T get_LastRotation() {
		return ((T (*)(TouchMoveWeaponShakeMode*))(Il2CppBase() + 0x3439BEC))(this);
	}
	template <typename T = void> T set_LastRotation(Il2CppVector3 value) {
		return ((T (*)(TouchMoveWeaponShakeMode*, Il2CppVector3))(Il2CppBase() + 0x34395D4))(this, value);
	}
	template <typename T = Il2CppVector3> T get_CurRotation() {
		return ((T (*)(TouchMoveWeaponShakeMode*))(Il2CppBase() + 0x3439C00))(this);
	}
	template <typename T = void> T set_CurRotation(Il2CppVector3 value) {
		return ((T (*)(TouchMoveWeaponShakeMode*, Il2CppVector3))(Il2CppBase() + 0x34395E0))(this, value);
	}
	template <typename T = Il2CppVector3> T get_CurPosition() {
		return ((T (*)(TouchMoveWeaponShakeMode*))(Il2CppBase() + 0x3439C14))(this);
	}
	template <typename T = void> T set_CurPosition(Il2CppVector3 value) {
		return ((T (*)(TouchMoveWeaponShakeMode*, Il2CppVector3))(Il2CppBase() + 0x34395F8))(this, value);
	}
	template <typename T = Il2CppVector3> T get_LastPosition() {
		return ((T (*)(TouchMoveWeaponShakeMode*))(Il2CppBase() + 0x3439C28))(this);
	}
	template <typename T = void> T set_LastPosition(Il2CppVector3 value) {
		return ((T (*)(TouchMoveWeaponShakeMode*, Il2CppVector3))(Il2CppBase() + 0x34395EC))(this, value);
	}
	template <typename T = float> T get_timer() {
		return ((T (*)(TouchMoveWeaponShakeMode*))(Il2CppBase() + 0x3439C3C))(this);
	}
	template <typename T = void> T set_timer(float value) {
		return ((T (*)(TouchMoveWeaponShakeMode*, float))(Il2CppBase() + 0x3439C44))(this, value);
	}
	template <typename T = Il2CppVector3> T UpdateRotationOffset(float deltaTime, bool inState) {
		return ((T (*)(TouchMoveWeaponShakeMode*, float, bool))(Il2CppBase() + 0x3439C4C))(this, deltaTime, inState);
	}
	template <typename T = void> T ResetMaxOffset(Il2CppVector3 wantOffset, float magnitude) {
		return ((T (*)(TouchMoveWeaponShakeMode*, Il2CppVector3, float))(Il2CppBase() + 0x343A174))(this, wantOffset, magnitude);
	}
	template <typename T = void> T UpdateOffsetState() {
		return ((T (*)(TouchMoveWeaponShakeMode*))(Il2CppBase() + 0x343A2A4))(this);
	}

};

}
