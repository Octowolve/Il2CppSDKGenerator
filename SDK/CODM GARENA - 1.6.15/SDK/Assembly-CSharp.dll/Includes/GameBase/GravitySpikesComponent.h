#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class GravitySpikesComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "GravitySpikesComponent"));
	}

	template <typename T = float> T& m_MaxJumpHeightRatio() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_HorizontalSpeedRatio() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_VerticalSpeedRatio() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_GravityUpRatio() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_GravityDownRatio() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_GravitySpikesEyeHight() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_GravitySpikesEyeSpeed() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_GravitySpikesEyeRatio() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_GravitySpikesJumpLandHeightRatio() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& m_GravitySpikesDownHeight() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_GravitySpikesLandStandTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_State() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& m_CurrentEyeHeight() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& m_IsAttackLowPos() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& m_IsLand() {
		return *(T*)((uintptr_t)this + 0x49);
	}
	template <typename T = bool> T& m_IsFire() {
		return *(T*)((uintptr_t)this + 0x4A);
	}
	template <typename T = uintptr_t> T& m_Hit() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAnimationComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetStateName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSyncAnimName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanUseUlt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoJumpUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoJumpDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoJumpLoop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEndFalling() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateJumpUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateJumpLoop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateJumpDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateEndFalling() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoIdle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Land() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoLandEyeHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEyeHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsDeadReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsGravitySpikesWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(GravitySpikesComponent*, uintptr_t, bool))(Il2CppBase() + 0x1ED0330))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(GravitySpikesComponent*))(Il2CppBase() + 0x1ED0454))(this);
	}
	template <typename T = float> T get_MaxJumpHeightRatio() {
		return ((T (*)(GravitySpikesComponent*))(Il2CppBase() + 0x1ED0510))(this);
	}
	template <typename T = float> T get_HorizontalSpeedRatio() {
		return ((T (*)(GravitySpikesComponent*))(Il2CppBase() + 0x1ED0518))(this);
	}
	template <typename T = float> T get_VerticalSpeedRatio() {
		return ((T (*)(GravitySpikesComponent*))(Il2CppBase() + 0x1ED0520))(this);
	}
	template <typename T = float> T get_GravityUpRatio() {
		return ((T (*)(GravitySpikesComponent*))(Il2CppBase() + 0x1ED0528))(this);
	}
	template <typename T = float> T get_GravityDownRatio() {
		return ((T (*)(GravitySpikesComponent*))(Il2CppBase() + 0x1ED0530))(this);
	}
	template <typename T = float> T get_GravitySpikesEyeHight() {
		return ((T (*)(GravitySpikesComponent*))(Il2CppBase() + 0x1ED0538))(this);
	}
	template <typename T = float> T get_GravitySpikesEyeSpeed() {
		return ((T (*)(GravitySpikesComponent*))(Il2CppBase() + 0x1ED0540))(this);
	}
	template <typename T = float> T get_GravitySpikesEyeRatio() {
		return ((T (*)(GravitySpikesComponent*))(Il2CppBase() + 0x1ED0548))(this);
	}
	template <typename T = float> T get_GravitySpikesJumpLandHeightRatio() {
		return ((T (*)(GravitySpikesComponent*))(Il2CppBase() + 0x1ED0550))(this);
	}
	template <typename T = float> T get_GravitySpikesDownHeight() {
		return ((T (*)(GravitySpikesComponent*))(Il2CppBase() + 0x1ED0558))(this);
	}
	template <typename T = float> T get_GravitySpikesLandStandTime() {
		return ((T (*)(GravitySpikesComponent*))(Il2CppBase() + 0x1ED0560))(this);
	}
	template <typename T = void> T set_IsLand(bool value) {
		return ((T (*)(GravitySpikesComponent*, bool))(Il2CppBase() + 0x1ED0568))(this, value);
	}
	template <typename T = bool> T get_IsFire() {
		return ((T (*)(GravitySpikesComponent*))(Il2CppBase() + 0x1ED0574))(this);
	}
	template <typename T = void> T Init(uintptr_t pawn) {
		return ((T (*)(GravitySpikesComponent*, uintptr_t))(Il2CppBase() + 0x1ED057C))(this, pawn);
	}
	template <typename T = bool> T CheckAnimationComponent() {
		return ((T (*)(GravitySpikesComponent*))(Il2CppBase() + 0x1ED0724))(this);
	}
	template <typename T = void> T SetState(uintptr_t state, float speed) {
		return ((T (*)(GravitySpikesComponent*, uintptr_t, float))(Il2CppBase() + 0x1ED088C))(this, state, speed);
	}
	template <typename T = Il2CppString*> T GetStateName(uintptr_t state) {
		return ((T (*)(GravitySpikesComponent*, uintptr_t))(Il2CppBase() + 0x1ED0FE8))(this, state);
	}
	template <typename T = uintptr_t> T GetSyncAnimName(uintptr_t state) {
		return ((T (*)(GravitySpikesComponent*, uintptr_t))(Il2CppBase() + 0x1ED116C))(this, state);
	}
	template <typename T = bool> T CanUseUlt(uintptr_t* use) {
		return ((T (*)(GravitySpikesComponent*, uintptr_t*))(Il2CppBase() + 0x1ED123C))(this, use);
	}
	template <typename T = void> T TriggerStart() {
		return ((T (*)(GravitySpikesComponent*))(Il2CppBase() + 0x1ED1714))(this);
	}
	template <typename T = void> T DoJumpUp() {
		return ((T (*)(GravitySpikesComponent*))(Il2CppBase() + 0x1ED1924))(this);
	}
	template <typename T = void> T DoJumpDown() {
		return ((T (*)(GravitySpikesComponent*))(Il2CppBase() + 0x1ED1D4C))(this);
	}
	template <typename T = void> T DoJumpLoop() {
		return ((T (*)(GravitySpikesComponent*))(Il2CppBase() + 0x1ED1E08))(this);
	}
	template <typename T = void> T OnEndFalling() {
		return ((T (*)(GravitySpikesComponent*))(Il2CppBase() + 0x1ED1EC4))(this);
	}
	template <typename T = void> T SimulateJumpUp() {
		return ((T (*)(GravitySpikesComponent*))(Il2CppBase() + 0x1ED21CC))(this);
	}
	template <typename T = void> T SimulateJumpLoop() {
		return ((T (*)(GravitySpikesComponent*))(Il2CppBase() + 0x1ED2328))(this);
	}
	template <typename T = void> T SimulateJumpDown() {
		return ((T (*)(GravitySpikesComponent*))(Il2CppBase() + 0x1ED23CC))(this);
	}
	template <typename T = void> T SimulateEndFalling() {
		return ((T (*)(GravitySpikesComponent*))(Il2CppBase() + 0x1ED2470))(this);
	}
	template <typename T = void> T DoIdle() {
		return ((T (*)(GravitySpikesComponent*))(Il2CppBase() + 0x1ED1CA0))(this);
	}
	template <typename T = void> T Land() {
		return ((T (*)(GravitySpikesComponent*))(Il2CppBase() + 0x1ED2514))(this);
	}
	template <typename T = void> T CheckDown(float delaTime) {
		return ((T (*)(GravitySpikesComponent*, float))(Il2CppBase() + 0x1ED25BC))(this, delaTime);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(GravitySpikesComponent*, float))(Il2CppBase() + 0x1ED2894))(this, deltaTime);
	}
	template <typename T = bool> T DoLandEyeHeight(float deltaTime) {
		return ((T (*)(GravitySpikesComponent*, float))(Il2CppBase() + 0x1ED2968))(this, deltaTime);
	}
	template <typename T = void> T SetEyeHeight(float newEyeHeight) {
		return ((T (*)(GravitySpikesComponent*, float))(Il2CppBase() + 0x1ED2BF4))(this, newEyeHeight);
	}
	template <typename T = void> T OnWeaponChanged() {
		return ((T (*)(GravitySpikesComponent*))(Il2CppBase() + 0x1ED2D18))(this);
	}
	template <typename T = bool> T IsDeadReplay() {
		return ((T (*)(GravitySpikesComponent*))(Il2CppBase() + 0x1ED1A10))(this);
	}
	template <typename T = bool> T IsGravitySpikesWeapon() {
		return ((T (*)(GravitySpikesComponent*))(Il2CppBase() + 0x1ED1B3C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(GravitySpikesComponent*, uintptr_t))(Il2CppBase() + 0x1ED33BC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(GravitySpikesComponent*, float))(Il2CppBase() + 0x1ED33C4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnWeaponChanged() {
		return ((T (*)(GravitySpikesComponent*))(Il2CppBase() + 0x1ED33CC))(this);
	}

};

}
