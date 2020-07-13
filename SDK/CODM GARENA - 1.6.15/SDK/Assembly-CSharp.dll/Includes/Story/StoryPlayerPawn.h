#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Story {

class StoryPlayerPawn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Story", "StoryPlayerPawn"));
	}

	template <typename T = uintptr_t> T& playerObstacle_() {
		return *(T*)((uintptr_t)this + 0xBEC);
	}
	template <typename T = bool> T& followSpline() {
		return *(T*)((uintptr_t)this + 0xBF0);
	}
	template <typename T = Il2CppVector3> T& origColCenter() {
		return *(T*)((uintptr_t)this + 0xBF4);
	}
	template <typename T = bool> T& m_IsDuringRebornStrengthening() {
		return *(T*)((uintptr_t)this + 0xC00);
	}
	template <typename T = bool> T& lockHealth() {
		return *(T*)((uintptr_t)this + 0xC01);
	}
	template <typename T = bool> T& m_IsInDamageState_Prologue() {
		return *(T*)((uintptr_t)this + 0xC02);
	}
	template <typename T = float> T& m_nextStepTime() {
		return *(T*)((uintptr_t)this + 0xC04);
	}
	template <typename T = bool> T& m_wasWalking() {
		return *(T*)((uintptr_t)this + 0xC08);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRespawnProtection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitEventProcessor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckPawnCanReduceDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTakeDamageComponentType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldIgnoreAimTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Die() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddAllInventory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GiveWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Toggle1PModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayStartFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelDelayStartFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TogglePinDownToGround() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFollowSplineMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMeshAssetID_1P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = uintptr_t> T get_playerObstacle() {
		return ((T (*)(StoryPlayerPawn*))(Il2CppBase() + 0x3F2064C))(this);
	}
	template <typename T = bool> T get_lockHealth() {
		return ((T (*)(StoryPlayerPawn*))(Il2CppBase() + 0x3F20734))(this);
	}
	template <typename T = void> T set_lockHealth(bool value) {
		return ((T (*)(StoryPlayerPawn*, bool))(Il2CppBase() + 0x3F2073C))(this, value);
	}
	template <typename T = void> T InitMesh(uintptr_t model) {
		return ((T (*)(StoryPlayerPawn*, uintptr_t))(Il2CppBase() + 0x3F20744))(this, model);
	}
	template <typename T = void> T InitPawn(uintptr_t info) {
		return ((T (*)(StoryPlayerPawn*, uintptr_t))(Il2CppBase() + 0x3F2080C))(this, info);
	}
	template <typename T = void> T CheckRespawnProtection() {
		return ((T (*)(StoryPlayerPawn*))(Il2CppBase() + 0x3F20AB0))(this);
	}
	template <typename T = bool> T get_ShouldCheckDetailCollider() {
		return ((T (*)(StoryPlayerPawn*))(Il2CppBase() + 0x3F20C38))(this);
	}
	template <typename T = void> T InitEventProcessor() {
		return ((T (*)(StoryPlayerPawn*))(Il2CppBase() + 0x3F20C40))(this);
	}
	template <typename T = bool> T CheckPawnCanReduceDamage(uintptr_t explodeOwner) {
		return ((T (*)(StoryPlayerPawn*, uintptr_t))(Il2CppBase() + 0x3F0EC04))(this, explodeOwner);
	}
	template <typename T = uintptr_t> T GetTakeDamageComponentType() {
		return ((T (*)(StoryPlayerPawn*))(Il2CppBase() + 0x3F20D08))(this);
	}
	template <typename T = bool> T ShouldIgnoreAimTarget(uintptr_t target) {
		return ((T (*)(StoryPlayerPawn*, uintptr_t))(Il2CppBase() + 0x3F20E04))(this, target);
	}
	template <typename T = void> T Die(bool isHeadShot, uintptr_t damageType) {
		return ((T (*)(StoryPlayerPawn*, bool, uintptr_t))(Il2CppBase() + 0x3F20EAC))(this, isHeadShot, damageType);
	}
	template <typename T = void> T AddAllInventory() {
		return ((T (*)(StoryPlayerPawn*))(Il2CppBase() + 0x3F2102C))(this);
	}
	template <typename T = void> T GiveWeapon() {
		return ((T (*)(StoryPlayerPawn*))(Il2CppBase() + 0x3F211A8))(this);
	}
	template <typename T = void> T Toggle1PModel(bool isVisible) {
		return ((T (*)(StoryPlayerPawn*, bool))(Il2CppBase() + 0x3F21300))(this, isVisible);
	}
	template <typename T = void> T DelayStartFire(float delayTime) {
		return ((T (*)(StoryPlayerPawn*, float))(Il2CppBase() + 0x3F20268))(this, delayTime);
	}
	template <typename T = void> T CancelDelayStartFire() {
		return ((T (*)(StoryPlayerPawn*))(Il2CppBase() + 0x3F204D4))(this);
	}
	template <typename T = void> T TogglePinDownToGround(bool shouldEnable) {
		return ((T (*)(StoryPlayerPawn*, bool))(Il2CppBase() + 0x3F213F0))(this, shouldEnable);
	}
	template <typename T = void> T AdjustDamage(uintptr_t damageInfo) {
		return ((T (*)(StoryPlayerPawn*, uintptr_t))(Il2CppBase() + 0x3F21498))(this, damageInfo);
	}
	template <typename T = void> T SetFollowSplineMode(bool enable) {
		return ((T (*)(StoryPlayerPawn*, bool))(Il2CppBase() + 0x3F21628))(this, enable);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(StoryPlayerPawn*, float))(Il2CppBase() + 0x3F21864))(this, deltaTime);
	}
	template <typename T = int32_t> T GetMeshAssetID_1P() {
		return ((T (*)(StoryPlayerPawn*))(Il2CppBase() + 0x3F22210))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitMesh(uintptr_t P0) {
		return ((T (*)(StoryPlayerPawn*, uintptr_t))(Il2CppBase() + 0x3F22348))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_InitPawn(uintptr_t P0) {
		return ((T (*)(StoryPlayerPawn*, uintptr_t))(Il2CppBase() + 0x3F22350))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_CheckRespawnProtection() {
		return ((T (*)(StoryPlayerPawn*))(Il2CppBase() + 0x3F22358))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitEventProcessor() {
		return ((T (*)(StoryPlayerPawn*))(Il2CppBase() + 0x3F22360))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetTakeDamageComponentType() {
		return ((T (*)(StoryPlayerPawn*))(Il2CppBase() + 0x3F22368))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_ShouldIgnoreAimTarget(uintptr_t P0) {
		return ((T (*)(StoryPlayerPawn*, uintptr_t))(Il2CppBase() + 0x3F22370))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Die(bool P0, uintptr_t P1) {
		return ((T (*)(StoryPlayerPawn*, bool, uintptr_t))(Il2CppBase() + 0x3F22378))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_AddAllInventory() {
		return ((T (*)(StoryPlayerPawn*))(Il2CppBase() + 0x3F22380))(this);
	}
	template <typename T = void> T xLuaBaseProxy_GiveWeapon() {
		return ((T (*)(StoryPlayerPawn*))(Il2CppBase() + 0x3F22388))(this);
	}
	template <typename T = void> T xLuaBaseProxy_AdjustDamage(uintptr_t P0) {
		return ((T (*)(StoryPlayerPawn*, uintptr_t))(Il2CppBase() + 0x3F22390))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(StoryPlayerPawn*, float))(Il2CppBase() + 0x3F22398))(this, P0);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetMeshAssetID_1P() {
		return ((T (*)(StoryPlayerPawn*))(Il2CppBase() + 0x3F223A0))(this);
	}

};

}
