#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class CameraShaker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "CameraShaker"));
	}

	template <typename T = uintptr_t> T& mCurve() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& AnimType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_ShakeDuration() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_Enabled() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_AutoStop() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = float> T& m_ShakeElapsedTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_ShakeSpeedScale() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& m_IsLoop() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_SoftStopTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_SoftStopElapsedTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_SoftStopDuration() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_SoftStartTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_SoftStartElapsedTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& m_SoftStartDuration() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppVector3> T& m_LastOffsetPos() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppQuaternion> T& m_LastOffsetRot() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_PengingCallbackFunc() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = uintptr_t> T get_Curve() {
		return ((T (*)(CameraShaker*))(Il2CppBase() + 0x41925EC))(this);
	}
	template <typename T = uintptr_t> T get_AnimType() {
		return ((T (*)(CameraShaker*))(Il2CppBase() + 0x41925F4))(this);
	}
	template <typename T = void> T set_AnimType(uintptr_t value) {
		return ((T (*)(CameraShaker*, uintptr_t))(Il2CppBase() + 0x41925FC))(this, value);
	}
	template <typename T = void> T SetCurves(uintptr_t clipData, float inBlendTime) {
		return ((T (*)(CameraShaker*, uintptr_t, float))(Il2CppBase() + 0x4192604))(this, clipData, inBlendTime);
	}
	template <typename T = float> T get_ShakeDuration() {
		return ((T (*)(CameraShaker*))(Il2CppBase() + 0x41926E0))(this);
	}
	template <typename T = float> T get_Speed() {
		return ((T (*)(CameraShaker*))(Il2CppBase() + 0x41926E8))(this);
	}
	template <typename T = void> T set_Speed(float value) {
		return ((T (*)(CameraShaker*, float))(Il2CppBase() + 0x41926F0))(this, value);
	}
	template <typename T = bool> T get_Enabled() {
		return ((T (*)(CameraShaker*))(Il2CppBase() + 0x41926F8))(this);
	}
	template <typename T = bool> T get_IsSoftStoping() {
		return ((T (*)(CameraShaker*))(Il2CppBase() + 0x4192700))(this);
	}
	template <typename T = void> T Update(float deltaTime) {
		return ((T (*)(CameraShaker*, float))(Il2CppBase() + 0x4192718))(this, deltaTime);
	}
	template <typename T = void> T PengingToNext(uintptr_t func) {
		return ((T (*)(CameraShaker*, uintptr_t))(Il2CppBase() + 0x4192B74))(this, func);
	}
	template <typename T = void> T Start(float duration, float speedScale, bool isLoop, bool isNeedStartTransition, uintptr_t inAnimType) {
		return ((T (*)(CameraShaker*, float, float, bool, bool, uintptr_t))(Il2CppBase() + 0x4192B8C))(this, duration, speedScale, isLoop, isNeedStartTransition, inAnimType);
	}
	template <typename T = void> T Stop() {
		return ((T (*)(CameraShaker*))(Il2CppBase() + 0x4192C08))(this);
	}
	template <typename T = void> T SetSoftStop() {
		return ((T (*)(CameraShaker*))(Il2CppBase() + 0x4192C0C))(this);
	}
	template <typename T = void> T SetSoftStopDuration(float softTime) {
		return ((T (*)(CameraShaker*, float))(Il2CppBase() + 0x4192C34))(this, softTime);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(CameraShaker*))(Il2CppBase() + 0x4192588))(this);
	}
	template <typename T = Il2CppVector3> T GetPositionOffset() {
		return ((T (*)(CameraShaker*))(Il2CppBase() + 0x4192CEC))(this);
	}
	template <typename T = Il2CppQuaternion> T GetRotationOffset(uintptr_t type) {
		return ((T (*)(CameraShaker*, uintptr_t))(Il2CppBase() + 0x4192E48))(this, type);
	}

};

}
