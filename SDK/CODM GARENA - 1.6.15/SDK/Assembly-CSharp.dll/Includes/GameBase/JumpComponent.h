#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class JumpComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "JumpComponent"));
	}

	template <typename T = uintptr_t> T& m_PawnAnimationComponent() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& LandFinishTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& m_IsLanded() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_LandStartTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_JumpTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& m_IsFallingLoop() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_FadeToJumpTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_Hit() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_PreJumpPhysicsState() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& m_ForceLandHard() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& m_LastFallingEndTime() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& m_FallingStartTime() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& m_StartTime() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLanded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoJump() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateDoJump() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckLandFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEndFalling() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStartFalling() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FadeToJumpIdle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Land() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckLand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanJumpMeleeFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = bool> T IsLanded() {
		return ((T (*)(JumpComponent*))(Il2CppBase() + 0x2E21B2C))(this);
	}
	template <typename T = bool> T get_ForceLandHard() {
		return ((T (*)(JumpComponent*))(Il2CppBase() + 0x2E21BD4))(this);
	}
	template <typename T = void> T set_ForceLandHard(bool value) {
		return ((T (*)(JumpComponent*, bool))(Il2CppBase() + 0x2E21BDC))(this, value);
	}
	template <typename T = float> T get_LastFallingEndTime() {
		return ((T (*)(JumpComponent*))(Il2CppBase() + 0x2E21BE4))(this);
	}
	template <typename T = void> T Init(uintptr_t pawn) {
		return ((T (*)(JumpComponent*, uintptr_t))(Il2CppBase() + 0x2E21BEC))(this, pawn);
	}
	template <typename T = void> T DoJump() {
		return ((T (*)(JumpComponent*))(Il2CppBase() + 0x2E21CCC))(this);
	}
	template <typename T = void> T SimulateDoJump() {
		return ((T (*)(JumpComponent*))(Il2CppBase() + 0x2E22010))(this);
	}
	template <typename T = bool> T CheckLandFinish() {
		return ((T (*)(JumpComponent*))(Il2CppBase() + 0x2E22388))(this);
	}
	template <typename T = void> T OnEndFalling(uintptr_t newState) {
		return ((T (*)(JumpComponent*, uintptr_t))(Il2CppBase() + 0x2E22494))(this, newState);
	}
	template <typename T = void> T OnStartFalling(uintptr_t preState) {
		return ((T (*)(JumpComponent*, uintptr_t))(Il2CppBase() + 0x2E226E0))(this, preState);
	}
	template <typename T = void> T FadeToJumpIdle(float fadeTime) {
		return ((T (*)(JumpComponent*, float))(Il2CppBase() + 0x2E22820))(this, fadeTime);
	}
	template <typename T = void> T Land(float landTime) {
		return ((T (*)(JumpComponent*, float))(Il2CppBase() + 0x2E22A8C))(this, landTime);
	}
	template <typename T = void> T CheckLand(float delaTime) {
		return ((T (*)(JumpComponent*, float))(Il2CppBase() + 0x2E22EF4))(this, delaTime);
	}
	template <typename T = bool> T CanJumpMeleeFire() {
		return ((T (*)(JumpComponent*))(Il2CppBase() + 0x2E23340))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(JumpComponent*, uintptr_t))(Il2CppBase() + 0x2E23554))(this, P0);
	}

};

}
