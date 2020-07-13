#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class JumpWeaponShakeModeEx
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "JumpWeaponShakeModeEx"));
	}

	template <typename T = Il2CppVector3> T& RetOffset() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_ownerPawn() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_isEnd() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_ModeType() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_ModeDataType() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& ShakeData() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& m_down() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& m_up() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = float> T& m_vDir() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_diffOffset() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_VelocityBy() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& mState() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& mTouchMoveDataController() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& ignoreAiming() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppVector3> T& LastRotation() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppVector3> T& CurRotation() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppVector3> T& CurPosition() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppVector3> T& LastPosition() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& timer() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = bool> T& m_IsLandAfterJumpingForRotationOffset() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& m_curVelocityBy() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& m_RotSpeed() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& m_PosSpeed() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& m_diffOffsetY() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& m_isLand() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& m_isOnGround() {
		return *(T*)((uintptr_t)this + 0x8D);
	}
	template <typename T = float> T& m_vDirY() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& m_downY0() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = bool> T& m_upY() {
		return *(T*)((uintptr_t)this + 0x95);
	}
	template <typename T = bool> T& m_downY1() {
		return *(T*)((uintptr_t)this + 0x96);
	}
	template <typename T = float> T& m_vBy() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppVector3> T& m_retPositionOffset() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = bool> T& m_IsLandAfterJumpingForPositionOffset() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& JumpTopHeight() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = float> T& UpYHeight() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& DownHeight() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = float> T& DownSpeed() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> T& DownRotationY() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = float> T& mTime() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = float> T& mOnLandPow() {
		return *(T*)((uintptr_t)this + 0xC4);
	}

	template <typename T = float> T get_VelocityBy() {
		return ((T (*)(JumpWeaponShakeModeEx*))(Il2CppBase() + 0x2479148))(this);
	}
	template <typename T = void> T set_VelocityBy(float value) {
		return ((T (*)(JumpWeaponShakeModeEx*, float))(Il2CppBase() + 0x2479150))(this, value);
	}
	template <typename T = uintptr_t> T GetModeType() {
		return ((T (*)(JumpWeaponShakeModeEx*))(Il2CppBase() + 0x2479158))(this);
	}
	template <typename T = uintptr_t> T GetModeDataType() {
		return ((T (*)(JumpWeaponShakeModeEx*))(Il2CppBase() + 0x2479160))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(JumpWeaponShakeModeEx*))(Il2CppBase() + 0x2479168))(this);
	}
	template <typename T = void> T Init(uintptr_t modeType, uintptr_t modeDataType, uintptr_t owerPawn) {
		return ((T (*)(JumpWeaponShakeModeEx*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x247916C))(this, modeType, modeDataType, owerPawn);
	}
	template <typename T = bool> T get_ignoreAiming() {
		return ((T (*)(JumpWeaponShakeModeEx*))(Il2CppBase() + 0x2479320))(this);
	}
	template <typename T = void> T set_ignoreAiming(bool value) {
		return ((T (*)(JumpWeaponShakeModeEx*, bool))(Il2CppBase() + 0x2479328))(this, value);
	}
	template <typename T = void> T SetEnd() {
		return ((T (*)(JumpWeaponShakeModeEx*))(Il2CppBase() + 0x2479330))(this);
	}
	template <typename T = bool> T IsEnd() {
		return ((T (*)(JumpWeaponShakeModeEx*))(Il2CppBase() + 0x2479364))(this);
	}
	template <typename T = float> T GetPositionY() {
		return ((T (*)(JumpWeaponShakeModeEx*))(Il2CppBase() + 0x247936C))(this);
	}
	template <typename T = Il2CppVector3> T get_LastRotation() {
		return ((T (*)(JumpWeaponShakeModeEx*))(Il2CppBase() + 0x2479374))(this);
	}
	template <typename T = void> T set_LastRotation(Il2CppVector3 value) {
		return ((T (*)(JumpWeaponShakeModeEx*, Il2CppVector3))(Il2CppBase() + 0x2479388))(this, value);
	}
	template <typename T = Il2CppVector3> T get_CurRotation() {
		return ((T (*)(JumpWeaponShakeModeEx*))(Il2CppBase() + 0x2479394))(this);
	}
	template <typename T = void> T set_CurRotation(Il2CppVector3 value) {
		return ((T (*)(JumpWeaponShakeModeEx*, Il2CppVector3))(Il2CppBase() + 0x24793A8))(this, value);
	}
	template <typename T = Il2CppVector3> T get_CurPosition() {
		return ((T (*)(JumpWeaponShakeModeEx*))(Il2CppBase() + 0x24793B4))(this);
	}
	template <typename T = void> T set_CurPosition(Il2CppVector3 value) {
		return ((T (*)(JumpWeaponShakeModeEx*, Il2CppVector3))(Il2CppBase() + 0x24793C8))(this, value);
	}
	template <typename T = Il2CppVector3> T get_LastPosition() {
		return ((T (*)(JumpWeaponShakeModeEx*))(Il2CppBase() + 0x24793D4))(this);
	}
	template <typename T = void> T set_LastPosition(Il2CppVector3 value) {
		return ((T (*)(JumpWeaponShakeModeEx*, Il2CppVector3))(Il2CppBase() + 0x24793E8))(this, value);
	}
	template <typename T = float> T get_timer() {
		return ((T (*)(JumpWeaponShakeModeEx*))(Il2CppBase() + 0x24793F4))(this);
	}
	template <typename T = void> T set_timer(float value) {
		return ((T (*)(JumpWeaponShakeModeEx*, float))(Il2CppBase() + 0x24793FC))(this, value);
	}
	template <typename T = Il2CppVector3> T UpdateRotationOffset(float deltaTime, bool inState) {
		return ((T (*)(JumpWeaponShakeModeEx*, float, bool))(Il2CppBase() + 0x2479404))(this, deltaTime, inState);
	}
	template <typename T = Il2CppVector3> T UpdatePositionOffset(float deltaTime, bool inState) {
		return ((T (*)(JumpWeaponShakeModeEx*, float, bool))(Il2CppBase() + 0x247996C))(this, deltaTime, inState);
	}

};

}
