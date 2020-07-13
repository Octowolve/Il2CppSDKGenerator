#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRAvatarRotationComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRAvatarRotationComponent"));
	}

	template <typename T = float> T& m_ProcessFallingTime() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& m_ProcessFallingTurnTime() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& m_LandTickTime() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& m_LandTime() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& m_FallingTargetAngle() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& m_FallingStartAngle() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& m_CurrentVerticalAngle() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& m_TargetVerticalAngle() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& VerticalAngleSpeed() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& MaxAngle() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& m_StartSprintDelayTime() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& m_StartTime() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_BRPawn() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& m_PawnAnimationComponent() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessFallingRotate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessLand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessClimb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessSwim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStartRotate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStopRotate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAllRotate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessSprintRotate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T Init(uintptr_t pawn) {
		return ((T (*)(BRAvatarRotationComponent*, uintptr_t))(Il2CppBase() + 0x24D05E4))(this, pawn);
	}
	template <typename T = void> T ProcessFallingRotate(float deltaTime) {
		return ((T (*)(BRAvatarRotationComponent*, float))(Il2CppBase() + 0x24D07CC))(this, deltaTime);
	}
	template <typename T = void> T ProcessLand(float deltaTime) {
		return ((T (*)(BRAvatarRotationComponent*, float))(Il2CppBase() + 0x24D0A04))(this, deltaTime);
	}
	template <typename T = void> T ProcessClimb(float deltaTime) {
		return ((T (*)(BRAvatarRotationComponent*, float))(Il2CppBase() + 0x24D0BAC))(this, deltaTime);
	}
	template <typename T = void> T ProcessSwim(float deltaTime) {
		return ((T (*)(BRAvatarRotationComponent*, float))(Il2CppBase() + 0x24D0EF4))(this, deltaTime);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(BRAvatarRotationComponent*, float))(Il2CppBase() + 0x24D1418))(this, deltaTime);
	}
	template <typename T = void> T OnStartRotate(uintptr_t avatarRotationType) {
		return ((T (*)(BRAvatarRotationComponent*, uintptr_t))(Il2CppBase() + 0x24D1690))(this, avatarRotationType);
	}
	template <typename T = void> T OnStopRotate(uintptr_t avatarRotationType) {
		return ((T (*)(BRAvatarRotationComponent*, uintptr_t))(Il2CppBase() + 0x24D1B44))(this, avatarRotationType);
	}
	template <typename T = void> T StopAllRotate() {
		return ((T (*)(BRAvatarRotationComponent*))(Il2CppBase() + 0x24D1CD4))(this);
	}
	template <typename T = void> T ProcessSprintRotate(float deltaTime) {
		return ((T (*)(BRAvatarRotationComponent*, float))(Il2CppBase() + 0x24D1E50))(this, deltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(BRAvatarRotationComponent*, uintptr_t))(Il2CppBase() + 0x24D1F2C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRAvatarRotationComponent*, float))(Il2CppBase() + 0x24D1F34))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnStartRotate(uintptr_t P0) {
		return ((T (*)(BRAvatarRotationComponent*, uintptr_t))(Il2CppBase() + 0x24D1F3C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnStopRotate(uintptr_t P0) {
		return ((T (*)(BRAvatarRotationComponent*, uintptr_t))(Il2CppBase() + 0x24D1F44))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ProcessSprintRotate(float P0) {
		return ((T (*)(BRAvatarRotationComponent*, float))(Il2CppBase() + 0x24D1F4C))(this, P0);
	}

};

}
