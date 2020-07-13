#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class CrouchComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "CrouchComponent"));
	}

	template <typename T = float> T& m_CrouchingEyeHeight() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_EyeHeightDropDownSpeedForCrouching() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_UpdateEyeHeightIntervalDuringCrouching() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_PawnEyeHeightTransitionTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_TickPawnEyeHeightTransitionTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& m_IsInPawnEyeHeightTransition() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_TransitionStartEyeHeight() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_CurrentTranstionTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> static T& CheckUnCrouchRayDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceStopTransition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartCrouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndCrouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanUnCrouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecoverEyeHeightForCrouching() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DropDownEyeHeightForCrouching() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPhysicsStateChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEyeHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayCrouchAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopCrouchAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCrouchVisibility() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetServerRelevant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = float> T get_CrouchingEyeHeight() {
		return ((T (*)(CrouchComponent*))(Il2CppBase() + 0x41AABB8))(this);
	}
	template <typename T = bool> T get_IsInTransition() {
		return ((T (*)(CrouchComponent*))(Il2CppBase() + 0x41AABC0))(this);
	}
	template <typename T = void> T set_IsInTransition(bool value) {
		return ((T (*)(CrouchComponent*, bool))(Il2CppBase() + 0x41AABC8))(this, value);
	}
	template <typename T = void> T Init(uintptr_t pawn) {
		return ((T (*)(CrouchComponent*, uintptr_t))(Il2CppBase() + 0x41AABD4))(this, pawn);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(CrouchComponent*, float))(Il2CppBase() + 0x41AACC4))(this, deltaTime);
	}
	template <typename T = void> T ForceStopTransition() {
		return ((T (*)(CrouchComponent*))(Il2CppBase() + 0x41AB164))(this);
	}
	template <typename T = void> T StartCrouch(uintptr_t pawn, bool immediately, bool needPlayAnim, bool force) {
		return ((T (*)(CrouchComponent*, uintptr_t, bool, bool, bool))(Il2CppBase() + 0x41AB23C))(this, pawn, immediately, needPlayAnim, force);
	}
	template <typename T = void> T EndCrouch(uintptr_t pawn, bool immediately, bool setEyeHeightInImmediately) {
		return ((T (*)(CrouchComponent*, uintptr_t, bool, bool))(Il2CppBase() + 0x41AB92C))(this, pawn, immediately, setEyeHeightInImmediately);
	}
	template <typename T = bool> T CanUnCrouch(uintptr_t pawn) {
		return ((T (*)(CrouchComponent*, uintptr_t))(Il2CppBase() + 0x41ABCA4))(this, pawn);
	}
	template <typename T = void> T RecoverEyeHeightForCrouching(uintptr_t pawn) {
		return ((T (*)(CrouchComponent*, uintptr_t))(Il2CppBase() + 0x41AC8C0))(this, pawn);
	}
	template <typename T = void> T DropDownEyeHeightForCrouching(uintptr_t pawn) {
		return ((T (*)(CrouchComponent*, uintptr_t))(Il2CppBase() + 0x41ACA70))(this, pawn);
	}
	template <typename T = void> T OnPhysicsStateChanged(uintptr_t preState, uintptr_t curState) {
		return ((T (*)(CrouchComponent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x41ACC2C))(this, preState, curState);
	}
	template <typename T = void> T SetEyeHeight(uintptr_t pawn, float newEyeHeight) {
		return ((T (*)(CrouchComponent*, uintptr_t, float))(Il2CppBase() + 0x41AAFF8))(this, pawn, newEyeHeight);
	}
	template <typename T = void> T PlayCrouchAnim() {
		return ((T (*)(CrouchComponent*))(Il2CppBase() + 0x41AB614))(this);
	}
	template <typename T = float> T StopCrouchAnim(bool immediately) {
		return ((T (*)(CrouchComponent*, bool))(Il2CppBase() + 0x41AC5E8))(this, immediately);
	}
	template <typename T = bool> T CheckCrouchVisibility(float distance) {
		return ((T (*)(CrouchComponent*, float))(Il2CppBase() + 0x41ACDC0))(this, distance);
	}
	template <typename T = void> T SetServerRelevant(bool isRelevant) {
		return ((T (*)(CrouchComponent*, bool))(Il2CppBase() + 0x41AD0B4))(this, isRelevant);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(CrouchComponent*, uintptr_t))(Il2CppBase() + 0x41AD3D8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(CrouchComponent*, float))(Il2CppBase() + 0x41AD3E0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SetServerRelevant(bool P0) {
		return ((T (*)(CrouchComponent*, bool))(Il2CppBase() + 0x41AD3E8))(this, P0);
	}

};

}
