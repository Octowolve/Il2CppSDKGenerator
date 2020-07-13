#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AvatarRotationComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AvatarRotationComponent"));
	}

	template <typename T = bool> T& m_IsInAvatarRotation() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = bool> T& m_IsRecover() {
		return *(T*)((uintptr_t)this + 0x12);
	}
	template <typename T = float> T& m_ReccoverTickTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_ReccoverTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_StartAngleY() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_CurrentLateralSpeed() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_TargetLateralSpeed() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_TargetForwardSpeed() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& RecoverLateralLerpSpeed() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& SprintLateralLerpSpeed() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& CrouchLateralLerpSpeed() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& RunLateralLerpSpeed() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& SprintRotateRecoverSpeed() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& m_InSprintLean() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint32_t> T& m_AvatarRotationType() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& m_ShouldCheckAvatarRotate() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> static T& MinEulerAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_ProcessDyingTickCount() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& m_Maxm_ProcessDyingTickLimit() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& m_ProcessDyingRayHeight() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartRecorver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopRecorver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessRecover() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeYEulerAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessSprintRotate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessForceSetRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAvatarRotate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStartRotate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStopRotate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLaterialSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessDying() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = bool> T get_InSprintLean() {
		return ((T (*)(AvatarRotationComponent*))(Il2CppBase() + 0x3608E88))(this);
	}
	template <typename T = void> T set_InSprintLean(bool value) {
		return ((T (*)(AvatarRotationComponent*, bool))(Il2CppBase() + 0x3608E90))(this, value);
	}
	template <typename T = void> T set_ShouldCheckAvatarRotate(bool value) {
		return ((T (*)(AvatarRotationComponent*, bool))(Il2CppBase() + 0x3608E98))(this, value);
	}
	template <typename T = bool> T get_ShouldCheckAvatarRotate() {
		return ((T (*)(AvatarRotationComponent*))(Il2CppBase() + 0x3608EA0))(this);
	}
	template <typename T = void> T StartRecorver() {
		return ((T (*)(AvatarRotationComponent*))(Il2CppBase() + 0x3608EA8))(this);
	}
	template <typename T = void> T StopRecorver(bool reset) {
		return ((T (*)(AvatarRotationComponent*, bool))(Il2CppBase() + 0x360902C))(this, reset);
	}
	template <typename T = void> T ProcessRecover(float deltaTime) {
		return ((T (*)(AvatarRotationComponent*, float))(Il2CppBase() + 0x3609198))(this, deltaTime);
	}
	template <typename T = void> T ChangeYEulerAngle(uintptr_t trans, float YEuler) {
		return ((T (*)(AvatarRotationComponent*, uintptr_t, float))(Il2CppBase() + 0x360934C))(this, trans, YEuler);
	}
	template <typename T = void> T ProcessSprintRotate(float deltaTime) {
		return ((T (*)(AvatarRotationComponent*, float))(Il2CppBase() + 0x36094C4))(this, deltaTime);
	}
	template <typename T = void> T OnSwitchView() {
		return ((T (*)(AvatarRotationComponent*))(Il2CppBase() + 0x3609564))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AvatarRotationComponent*))(Il2CppBase() + 0x3609648))(this);
	}
	template <typename T = void> T ProcessForceSetRotation() {
		return ((T (*)(AvatarRotationComponent*))(Il2CppBase() + 0x3609700))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(AvatarRotationComponent*, float))(Il2CppBase() + 0x36099C0))(this, deltaTime);
	}
	template <typename T = void> T CheckAvatarRotate() {
		return ((T (*)(AvatarRotationComponent*))(Il2CppBase() + 0x3609BB8))(this);
	}
	template <typename T = void> T OnStartRotate(uintptr_t avatarRotationType) {
		return ((T (*)(AvatarRotationComponent*, uintptr_t))(Il2CppBase() + 0x360A524))(this, avatarRotationType);
	}
	template <typename T = void> T OnStopRotate(uintptr_t avatarRotationType) {
		return ((T (*)(AvatarRotationComponent*, uintptr_t))(Il2CppBase() + 0x360A5F0))(this, avatarRotationType);
	}
	template <typename T = void> T SetLaterialSpeed(float forwardSpeed, float lateralSpeed) {
		return ((T (*)(AvatarRotationComponent*, float, float))(Il2CppBase() + 0x360A6AC))(this, forwardSpeed, lateralSpeed);
	}
	template <typename T = void> T ProcessDying(float deltaTime) {
		return ((T (*)(AvatarRotationComponent*, float))(Il2CppBase() + 0x3609D70))(this, deltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_OnSwitchView() {
		return ((T (*)(AvatarRotationComponent*))(Il2CppBase() + 0x360A864))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(AvatarRotationComponent*))(Il2CppBase() + 0x360A86C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(AvatarRotationComponent*, float))(Il2CppBase() + 0x360A874))(this, P0);
	}

};

}
