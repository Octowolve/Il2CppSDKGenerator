#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRLeanComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRLeanComponent"));
	}

	template <typename T = uintptr_t> T& m_BRPawn() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_PawnAnimationComponent() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_LeftAngleZOffset() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_RightAngleZOffset() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_LeftPosOffsetX() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_RightPosOffsetX() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_LeftPosAimingOffsetX() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_RightPosAimingOffsetX() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_LeftPosAimingOffsetY() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& m_RightPosAimingOffsetY() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_LeanSpeed() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_LeftLeanWeight() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& m_RightLeanWieght() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& m_CurrentPosOffsetX() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppVector3> T& m_CurrentPosAimingOffset() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& m_CurrentAngleZOffset() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& m_CurrentLeanWeight() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& m_StartPosOffsetX() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppVector3> T& m_StartPosAimingOffset() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& m_StartAngleZOffset() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& m_StartLeanWeight() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& m_TargetPosOffsetX() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppVector3> T& m_TargetPosAimingOffset() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& m_TargetAngleZOffset() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& m_TargetLeanWeight() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = float> T& m_TransitionTime() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& m_TickTransitionTime() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = bool> T& m_IsTick() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& m_CurrentLeanState() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& m_TargetLeanState() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopLean() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceResetLeanAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OverAimResetAnimatorParams() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnLean() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LeanLeft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LeanRight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateUnLean() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateLeanLeft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateLeanRight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLeanStateToPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickTransition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartTransition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetCached3PAvatarAnimatorParams() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = uintptr_t> T get_CurrentLeanState() {
		return ((T (*)(BRLeanComponent*))(Il2CppBase() + 0x194C7AC))(this);
	}
	template <typename T = uintptr_t> T get_TargetLeanState() {
		return ((T (*)(BRLeanComponent*))(Il2CppBase() + 0x194C7B4))(this);
	}
	template <typename T = void> T Init(uintptr_t pawn) {
		return ((T (*)(BRLeanComponent*, uintptr_t))(Il2CppBase() + 0x194C7BC))(this, pawn);
	}
	template <typename T = bool> T get_IsLeanLeft() {
		return ((T (*)(BRLeanComponent*))(Il2CppBase() + 0x194C9C8))(this);
	}
	template <typename T = bool> T get_IsLeanRight() {
		return ((T (*)(BRLeanComponent*))(Il2CppBase() + 0x194C9DC))(this);
	}
	template <typename T = bool> T get_IsLean() {
		return ((T (*)(BRLeanComponent*))(Il2CppBase() + 0x194C9F0))(this);
	}
	template <typename T = void> T StopLean() {
		return ((T (*)(BRLeanComponent*))(Il2CppBase() + 0x194CA08))(this);
	}
	template <typename T = void> T ForceResetLeanAnimation() {
		return ((T (*)(BRLeanComponent*))(Il2CppBase() + 0x194CC94))(this);
	}
	template <typename T = void> T OverAimResetAnimatorParams() {
		return ((T (*)(BRLeanComponent*))(Il2CppBase() + 0x194CE20))(this);
	}
	template <typename T = void> T UnLean(bool isForce) {
		return ((T (*)(BRLeanComponent*, bool))(Il2CppBase() + 0x194CAC0))(this, isForce);
	}
	template <typename T = void> T LeanLeft() {
		return ((T (*)(BRLeanComponent*))(Il2CppBase() + 0x194D4AC))(this);
	}
	template <typename T = void> T LeanRight() {
		return ((T (*)(BRLeanComponent*))(Il2CppBase() + 0x194D664))(this);
	}
	template <typename T = void> T SimulateUnLean(bool isForce) {
		return ((T (*)(BRLeanComponent*, bool))(Il2CppBase() + 0x194D81C))(this, isForce);
	}
	template <typename T = void> T SimulateLeanLeft() {
		return ((T (*)(BRLeanComponent*))(Il2CppBase() + 0x194D8F4))(this);
	}
	template <typename T = void> T SimulateLeanRight() {
		return ((T (*)(BRLeanComponent*))(Il2CppBase() + 0x194DA4C))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(BRLeanComponent*, float))(Il2CppBase() + 0x194DBA4))(this, deltaTime);
	}
	template <typename T = void> T SetLeanStateToPawn() {
		return ((T (*)(BRLeanComponent*))(Il2CppBase() + 0x194CF58))(this);
	}
	template <typename T = bool> T TickTransition(float deltaTime) {
		return ((T (*)(BRLeanComponent*, float))(Il2CppBase() + 0x194DDF0))(this, deltaTime);
	}
	template <typename T = void> T StartTransition(float targetLeanWeight, float targetAngleZOffset, float targetPosOffset, float targetPosAimingOffsetX, float targetPosAimingOffsetY) {
		return ((T (*)(BRLeanComponent*, float, float, float, float, float))(Il2CppBase() + 0x194D0E8))(this, targetLeanWeight, targetAngleZOffset, targetPosOffset, targetPosAimingOffsetX, targetPosAimingOffsetY);
	}
	template <typename T = void> T ResetCached3PAvatarAnimatorParams() {
		return ((T (*)(BRLeanComponent*))(Il2CppBase() + 0x194D27C))(this);
	}
	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(BRLeanComponent*, uintptr_t, bool))(Il2CppBase() + 0x194E030))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(BRLeanComponent*))(Il2CppBase() + 0x194E144))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(BRLeanComponent*, uintptr_t))(Il2CppBase() + 0x194E200))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRLeanComponent*, float))(Il2CppBase() + 0x194E208))(this, P0);
	}

};

}
