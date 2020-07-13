#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class RecoilWeaponShakeMode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "RecoilWeaponShakeMode"));
	}

	template <typename T = uintptr_t> T& m_ownerPawn() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector3> T& m_vel() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_RecoilOnceTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_RecoilOnceTimeScale() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_RecoilLoopTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_RecoilLoopTimeScale() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_StopTIme() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_CurLoopStartTIme() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_LoopStartTIme() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& m_isEnd() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& m_IsGun() {
		return *(T*)((uintptr_t)this + 0x35);
	}
	template <typename T = uintptr_t> T& m_ModeType() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_ModeDataType() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_RecoilOnceCurve() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_RecoilLoopCurve() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_curOffsetState() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& mTimer() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& mFucOnRun() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_TouchMoveDataController() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& m_Close() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& mRecoilOnceLength() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& mRecoilLoopLength() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& ignoreAiming() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& tryEnd() {
		return *(T*)((uintptr_t)this + 0x65);
	}
	template <typename T = Il2CppVector3> T& LastRotation() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppVector3> T& CurRotation() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppVector3> T& CurPosition() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppVector3> T& LastPosition() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = float> T& timer() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> T& m_lerpMagnitude() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = float> T& m_changeAngle() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& FUpdatePosition() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = float> T& m_RecoilTop() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& mFired() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& f__mg$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T set_mOffsetState(uintptr_t value) {
		return ((T (*)(RecoilWeaponShakeMode*, uintptr_t))(Il2CppBase() + 0x1DFBA54))(this, value);
	}
	template <typename T = uintptr_t> T get_mOffsetState() {
		return ((T (*)(RecoilWeaponShakeMode*))(Il2CppBase() + 0x1DFBA5C))(this);
	}
	template <typename T = uintptr_t> T GetModeType() {
		return ((T (*)(RecoilWeaponShakeMode*))(Il2CppBase() + 0x1DFBA64))(this);
	}
	template <typename T = uintptr_t> T GetModeDataType() {
		return ((T (*)(RecoilWeaponShakeMode*))(Il2CppBase() + 0x1DFBA6C))(this);
	}
	template <typename T = float> T GetPositionY() {
		return ((T (*)(RecoilWeaponShakeMode*))(Il2CppBase() + 0x1DFBA74))(this);
	}
	template <typename T = void> T ResetData() {
		return ((T (*)(RecoilWeaponShakeMode*))(Il2CppBase() + 0x1DFBA7C))(this);
	}
	template <typename T = void> T ResetRecoilTime() {
		return ((T (*)(RecoilWeaponShakeMode*))(Il2CppBase() + 0x1DFC1F8))(this);
	}
	template <typename T = void> T Init(uintptr_t modeType, uintptr_t modeDataType, uintptr_t owerPawn) {
		return ((T (*)(RecoilWeaponShakeMode*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DFC384))(this, modeType, modeDataType, owerPawn);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(RecoilWeaponShakeMode*))(Il2CppBase() + 0x1DFC3EC))(this);
	}
	template <typename T = bool> T get_ignoreAiming() {
		return ((T (*)(RecoilWeaponShakeMode*))(Il2CppBase() + 0x1DFC3F0))(this);
	}
	template <typename T = void> T set_ignoreAiming(bool value) {
		return ((T (*)(RecoilWeaponShakeMode*, bool))(Il2CppBase() + 0x1DFC3F8))(this, value);
	}
	template <typename T = void> T SetEnd() {
		return ((T (*)(RecoilWeaponShakeMode*))(Il2CppBase() + 0x1DFC400))(this);
	}
	template <typename T = bool> T IsEnd() {
		return ((T (*)(RecoilWeaponShakeMode*))(Il2CppBase() + 0x1DFC5E8))(this);
	}
	template <typename T = Il2CppVector3> T get_LastRotation() {
		return ((T (*)(RecoilWeaponShakeMode*))(Il2CppBase() + 0x1DFC5F0))(this);
	}
	template <typename T = void> T set_LastRotation(Il2CppVector3 value) {
		return ((T (*)(RecoilWeaponShakeMode*, Il2CppVector3))(Il2CppBase() + 0x1DFC5B8))(this, value);
	}
	template <typename T = Il2CppVector3> T get_CurRotation() {
		return ((T (*)(RecoilWeaponShakeMode*))(Il2CppBase() + 0x1DFC604))(this);
	}
	template <typename T = void> T set_CurRotation(Il2CppVector3 value) {
		return ((T (*)(RecoilWeaponShakeMode*, Il2CppVector3))(Il2CppBase() + 0x1DFC5C4))(this, value);
	}
	template <typename T = Il2CppVector3> T get_CurPosition() {
		return ((T (*)(RecoilWeaponShakeMode*))(Il2CppBase() + 0x1DFC618))(this);
	}
	template <typename T = void> T set_CurPosition(Il2CppVector3 value) {
		return ((T (*)(RecoilWeaponShakeMode*, Il2CppVector3))(Il2CppBase() + 0x1DFC5DC))(this, value);
	}
	template <typename T = Il2CppVector3> T get_LastPosition() {
		return ((T (*)(RecoilWeaponShakeMode*))(Il2CppBase() + 0x1DFC62C))(this);
	}
	template <typename T = void> T set_LastPosition(Il2CppVector3 value) {
		return ((T (*)(RecoilWeaponShakeMode*, Il2CppVector3))(Il2CppBase() + 0x1DFC5D0))(this, value);
	}
	template <typename T = float> T get_timer() {
		return ((T (*)(RecoilWeaponShakeMode*))(Il2CppBase() + 0x1DFC640))(this);
	}
	template <typename T = void> T set_timer(float value) {
		return ((T (*)(RecoilWeaponShakeMode*, float))(Il2CppBase() + 0x1DFC648))(this, value);
	}
	template <typename T = Il2CppVector3> T UpdateRotationOffset(float deltaTime, bool inState) {
		return ((T (*)(RecoilWeaponShakeMode*, float, bool))(Il2CppBase() + 0x1DFC650))(this, deltaTime, inState);
	}
	template <typename T = Il2CppVector3> static T NullPosition(float inTime, bool inState) {
		return ((T (*)(void *, float, bool))(Il2CppBase() + 0x1DFC668))(0, inTime, inState);
	}
	template <typename T = Il2CppVector3> T RecoilInPosition(float inTime, bool inState) {
		return ((T (*)(RecoilWeaponShakeMode*, float, bool))(Il2CppBase() + 0x1DFC680))(this, inTime, inState);
	}
	template <typename T = Il2CppVector3> T LoopPosition(float inTime, bool inState) {
		return ((T (*)(RecoilWeaponShakeMode*, float, bool))(Il2CppBase() + 0x1DFC7CC))(this, inTime, inState);
	}
	template <typename T = Il2CppVector3> T RecoilOutPosition(float inTime, bool inState) {
		return ((T (*)(RecoilWeaponShakeMode*, float, bool))(Il2CppBase() + 0x1DFC8AC))(this, inTime, inState);
	}
	template <typename T = void> T CheckStop() {
		return ((T (*)(RecoilWeaponShakeMode*))(Il2CppBase() + 0x1DFC92C))(this);
	}
	template <typename T = Il2CppVector3> T UpdatePositionOffset(float deltaTime, bool inState) {
		return ((T (*)(RecoilWeaponShakeMode*, float, bool))(Il2CppBase() + 0x1DFCA78))(this, deltaTime, inState);
	}

};

}
