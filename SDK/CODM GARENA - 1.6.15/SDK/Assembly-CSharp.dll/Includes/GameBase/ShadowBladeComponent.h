#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class ShadowBladeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "ShadowBladeComponent"));
	}

	template <typename T = float> T& m_MiddleDistance() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_NearDistance() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_SprintDistance() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_RotateSpeed() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_SearchDuration() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_SprintMaxTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_MiddleAngle() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_HighLimit() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_LockViewAngle() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppVector3> T& m_TPSCameraOffset() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_MoveSmokeDistance() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& m_SprintSmokeDistance() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_State() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_PhysicState() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_AttackDistanceState() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& m_AttackDirectionState() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_ShadowBladeAnimate() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& m_IsUseShadowBlade() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& m_IsFirstUse() {
		return *(T*)((uintptr_t)this + 0x61);
	}
	template <typename T = uintptr_t> T& m_TargetPawn() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& m_SearchTime() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = unsigned char> T& m_FireMode() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& m_SprintTime() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& m_ResetDataTime() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = bool> T& m_WaitSwitchRole() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& m_SimulateWaitSwitchRole() {
		return *(T*)((uintptr_t)this + 0x79);
	}
	template <typename T = uintptr_t> T& m_LastViewType() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& m_ReconnectFireMode() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> static T& CanUseKillStreak() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppVector3> T& dir() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& distance() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchRole() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSpectatingEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSpectatingViewChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBeginDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDie() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAnimationComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetStateName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoShadowBladeAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LockInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndPhysicSprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEmptyAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayNearAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayMiddleAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Fire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TakeDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FireEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateStartSprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateEndSprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTargetEnemy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetTargetEnemy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SearchingTargetEnemy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Rotate2TargetPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Rotate2TargetPawnDirect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDirection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsHitWall() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanUseStreak() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanUseUlt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetShadowBladeState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTickEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFireMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateFireMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Set3PPlayerIdleType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDistanceRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsUsefulFireMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVelocity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSmokePos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSprintTimeEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsDeadReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShadowBladeWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShadowBladeWeaponAttachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(ShadowBladeComponent*, uintptr_t, bool))(Il2CppBase() + 0x2E06BD8))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(ShadowBladeComponent*))(Il2CppBase() + 0x2E06D3C))(this);
	}
	template <typename T = float> T get_MiddleDistance() {
		return ((T (*)(ShadowBladeComponent*))(Il2CppBase() + 0x2E06DF8))(this);
	}
	template <typename T = float> T get_NearDistance() {
		return ((T (*)(ShadowBladeComponent*))(Il2CppBase() + 0x2E06E00))(this);
	}
	template <typename T = float> T get_SprintDistance() {
		return ((T (*)(ShadowBladeComponent*))(Il2CppBase() + 0x2E06E08))(this);
	}
	template <typename T = float> T get_RotateSpeed() {
		return ((T (*)(ShadowBladeComponent*))(Il2CppBase() + 0x2E06E10))(this);
	}
	template <typename T = float> T get_SearchDuration() {
		return ((T (*)(ShadowBladeComponent*))(Il2CppBase() + 0x2E06E18))(this);
	}
	template <typename T = float> T get_SprintMaxTime() {
		return ((T (*)(ShadowBladeComponent*))(Il2CppBase() + 0x2E06E20))(this);
	}
	template <typename T = float> T get_MiddleAngle() {
		return ((T (*)(ShadowBladeComponent*))(Il2CppBase() + 0x2E06E28))(this);
	}
	template <typename T = float> T get_HighLimit() {
		return ((T (*)(ShadowBladeComponent*))(Il2CppBase() + 0x2E06E30))(this);
	}
	template <typename T = float> T get_LockViewAngle() {
		return ((T (*)(ShadowBladeComponent*))(Il2CppBase() + 0x2E06E38))(this);
	}
	template <typename T = Il2CppVector3> T get_TPSCameraOffset() {
		return ((T (*)(ShadowBladeComponent*))(Il2CppBase() + 0x2DEBC88))(this);
	}
	template <typename T = float> T get_MoveSmokeDistance() {
		return ((T (*)(ShadowBladeComponent*))(Il2CppBase() + 0x2E06E40))(this);
	}
	template <typename T = float> T get_SprintSmokeDistance() {
		return ((T (*)(ShadowBladeComponent*))(Il2CppBase() + 0x2E06E48))(this);
	}
	template <typename T = bool> T get_IsUseShadowBlade() {
		return ((T (*)(ShadowBladeComponent*))(Il2CppBase() + 0x2E06E50))(this);
	}
	template <typename T = bool> T get_IsFirstUse() {
		return ((T (*)(ShadowBladeComponent*))(Il2CppBase() + 0x2E06E58))(this);
	}
	template <typename T = uintptr_t> T get_TargetPawn() {
		return ((T (*)(ShadowBladeComponent*))(Il2CppBase() + 0x2E06E6C))(this);
	}
	template <typename T = unsigned char> T get_FireMode() {
		return ((T (*)(ShadowBladeComponent*))(Il2CppBase() + 0x2E06E74))(this);
	}
	template <typename T = void> T set_FireMode(unsigned char value) {
		return ((T (*)(ShadowBladeComponent*, unsigned char))(Il2CppBase() + 0x2E06E7C))(this, value);
	}
	template <typename T = float> T get_SprintTime() {
		return ((T (*)(ShadowBladeComponent*))(Il2CppBase() + 0x2E06E84))(this);
	}
	template <typename T = void> T set_SprintTime(float value) {
		return ((T (*)(ShadowBladeComponent*, float))(Il2CppBase() + 0x2E06E8C))(this, value);
	}
	template <typename T = uintptr_t> T get_LastViewType() {
		return ((T (*)(ShadowBladeComponent*))(Il2CppBase() + 0x2E06E94))(this);
	}
	template <typename T = void> T Init(uintptr_t pawn) {
		return ((T (*)(ShadowBladeComponent*, uintptr_t))(Il2CppBase() + 0x2E06EA8))(this, pawn);
	}
	template <typename T = void> T OnSwitchRole() {
		return ((T (*)(ShadowBladeComponent*))(Il2CppBase() + 0x2E07308))(this);
	}
	template <typename T = void> T OnSpectatingEnd() {
		return ((T (*)(ShadowBladeComponent*))(Il2CppBase() + 0x2E0763C))(this);
	}
	template <typename T = void> T OnSpectatingViewChange(uintptr_t spectatingViewType) {
		return ((T (*)(ShadowBladeComponent*, uintptr_t))(Il2CppBase() + 0x2E077FC))(this, spectatingViewType);
	}
	template <typename T = void> T OnBeginDestroy() {
		return ((T (*)(ShadowBladeComponent*))(Il2CppBase() + 0x2E07A3C))(this);
	}
	template <typename T = void> T OnDie() {
		return ((T (*)(ShadowBladeComponent*))(Il2CppBase() + 0x2E07B28))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ShadowBladeComponent*))(Il2CppBase() + 0x2E07F58))(this);
	}
	template <typename T = bool> T CheckAnimationComponent() {
		return ((T (*)(ShadowBladeComponent*))(Il2CppBase() + 0x2E085A8))(this);
	}
	template <typename T = void> T PlayAttack(uintptr_t animate, float speed) {
		return ((T (*)(ShadowBladeComponent*, uintptr_t, float))(Il2CppBase() + 0x2E08740))(this, animate, speed);
	}
	template <typename T = Il2CppString*> T GetStateName(uintptr_t animate) {
		return ((T (*)(ShadowBladeComponent*, uintptr_t))(Il2CppBase() + 0x2E08AAC))(this, animate);
	}
	template <typename T = bool> T DoShadowBladeAttack() {
		return ((T (*)(ShadowBladeComponent*))(Il2CppBase() + 0x2E08BD8))(this);
	}
	template <typename T = void> T LockInput(bool isLock) {
		return ((T (*)(ShadowBladeComponent*, bool))(Il2CppBase() + 0x2E07D8C))(this, isLock);
	}
	template <typename T = void> T EndPhysicSprint(bool attack) {
		return ((T (*)(ShadowBladeComponent*, bool))(Il2CppBase() + 0x2E09364))(this, attack);
	}
	template <typename T = void> T PlayEmptyAttack() {
		return ((T (*)(ShadowBladeComponent*))(Il2CppBase() + 0x2E08FFC))(this);
	}
	template <typename T = void> T PlayNearAttack() {
		return ((T (*)(ShadowBladeComponent*))(Il2CppBase() + 0x2E090F4))(this);
	}
	template <typename T = void> T PlayMiddleAttack() {
		return ((T (*)(ShadowBladeComponent*))(Il2CppBase() + 0x2E09234))(this);
	}
	template <typename T = void> T Fire() {
		return ((T (*)(ShadowBladeComponent*))(Il2CppBase() + 0x2E098EC))(this);
	}
	template <typename T = void> T CancelFire() {
		return ((T (*)(ShadowBladeComponent*))(Il2CppBase() + 0x2E09454))(this);
	}
	template <typename T = void> T TakeDamage() {
		return ((T (*)(ShadowBladeComponent*))(Il2CppBase() + 0x2E09DC0))(this);
	}
	template <typename T = void> T FireEnd() {
		return ((T (*)(ShadowBladeComponent*))(Il2CppBase() + 0x2E09E98))(this);
	}
	template <typename T = void> T SimulateStartSprint() {
		return ((T (*)(ShadowBladeComponent*))(Il2CppBase() + 0x2E09F70))(this);
	}
	template <typename T = void> T SimulateEndSprint() {
		return ((T (*)(ShadowBladeComponent*))(Il2CppBase() + 0x2E0A038))(this);
	}
	template <typename T = void> T ResetData() {
		return ((T (*)(ShadowBladeComponent*))(Il2CppBase() + 0x2E09804))(this);
	}
	template <typename T = uintptr_t> T GetTargetEnemy(uintptr_t* state, uintptr_t* attackDistance, uintptr_t* direction) {
		return ((T (*)(ShadowBladeComponent*, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x2E08E40))(this, state, attackDistance, direction);
	}
	template <typename T = uintptr_t> T GetTargetEnemy_1(uintptr_t* minDistance) {
		return ((T (*)(ShadowBladeComponent*, uintptr_t*))(Il2CppBase() + 0x2E0A100))(this, minDistance);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(ShadowBladeComponent*, float))(Il2CppBase() + 0x2E0B148))(this, deltaTime);
	}
	template <typename T = void> T SearchingTargetEnemy() {
		return ((T (*)(ShadowBladeComponent*))(Il2CppBase() + 0x2E0B36C))(this);
	}
	template <typename T = void> T Rotate2TargetPawn() {
		return ((T (*)(ShadowBladeComponent*))(Il2CppBase() + 0x2E09B28))(this);
	}
	template <typename T = void> T Rotate2TargetPawnDirect() {
		return ((T (*)(ShadowBladeComponent*))(Il2CppBase() + 0x2E09674))(this);
	}
	template <typename T = uintptr_t> T GetDirection(uintptr_t targetPawn) {
		return ((T (*)(ShadowBladeComponent*, uintptr_t))(Il2CppBase() + 0x2E0A694))(this, targetPawn);
	}
	template <typename T = bool> T IsHitWall(uintptr_t targetPawn) {
		return ((T (*)(ShadowBladeComponent*, uintptr_t))(Il2CppBase() + 0x2E0AD24))(this, targetPawn);
	}
	template <typename T = bool> T IsInView(uintptr_t targetPawn) {
		return ((T (*)(ShadowBladeComponent*, uintptr_t))(Il2CppBase() + 0x2E0A948))(this, targetPawn);
	}
	template <typename T = bool> T CanUseStreak() {
		return ((T (*)(ShadowBladeComponent*))(Il2CppBase() + 0x2E0B6F0))(this);
	}
	template <typename T = bool> T CanUseUlt() {
		return ((T (*)(ShadowBladeComponent*))(Il2CppBase() + 0x2E0B814))(this);
	}
	template <typename T = void> T SetShadowBladeState(bool state, bool setView, bool oldState) {
		return ((T (*)(ShadowBladeComponent*, bool, bool, bool))(Il2CppBase() + 0x2E0BD00))(this, state, setView, oldState);
	}
	template <typename T = void> T SetTickEnable(bool enable) {
		return ((T (*)(ShadowBladeComponent*, bool))(Il2CppBase() + 0x2E071C4))(this, enable);
	}
	template <typename T = void> T SetFireMode(unsigned char fireMode) {
		return ((T (*)(ShadowBladeComponent*, unsigned char))(Il2CppBase() + 0x2E07434))(this, fireMode);
	}
	template <typename T = void> T SimulateFireMode(unsigned char fireMode) {
		return ((T (*)(ShadowBladeComponent*, unsigned char))(Il2CppBase() + 0x2E07558))(this, fireMode);
	}
	template <typename T = void> T Set3PPlayerIdleType(unsigned char fireMode) {
		return ((T (*)(ShadowBladeComponent*, unsigned char))(Il2CppBase() + 0x2E083A0))(this, fireMode);
	}
	template <typename T = void> T SetView(bool to1P) {
		return ((T (*)(ShadowBladeComponent*, bool))(Il2CppBase() + 0x2E0C058))(this, to1P);
	}
	template <typename T = float> T GetDistanceRate(float distance) {
		return ((T (*)(ShadowBladeComponent*, float))(Il2CppBase() + 0x2E0C6A8))(this, distance);
	}
	template <typename T = bool> T IsUsefulFireMode() {
		return ((T (*)(ShadowBladeComponent*))(Il2CppBase() + 0x2E0C7C4))(this);
	}
	template <typename T = void> T OnWeaponChanged() {
		return ((T (*)(ShadowBladeComponent*))(Il2CppBase() + 0x2E0C8A0))(this);
	}
	template <typename T = Il2CppVector3> T GetVelocity(uintptr_t distance) {
		return ((T (*)(ShadowBladeComponent*, uintptr_t))(Il2CppBase() + 0x2E0D220))(this, distance);
	}
	template <typename T = Il2CppVector3> T GetSmokePos() {
		return ((T (*)(ShadowBladeComponent*))(Il2CppBase() + 0x2E0D658))(this);
	}
	template <typename T = bool> T IsSprintTimeEnd() {
		return ((T (*)(ShadowBladeComponent*))(Il2CppBase() + 0x2E0D570))(this);
	}
	template <typename T = bool> T IsDeadReplay() {
		return ((T (*)(ShadowBladeComponent*))(Il2CppBase() + 0x2E0D92C))(this);
	}
	template <typename T = bool> T IsShadowBladeWeapon() {
		return ((T (*)(ShadowBladeComponent*))(Il2CppBase() + 0x2E0CF08))(this);
	}
	template <typename T = bool> T IsShadowBladeWeaponAttachment() {
		return ((T (*)(ShadowBladeComponent*))(Il2CppBase() + 0x2E0D09C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(ShadowBladeComponent*, uintptr_t))(Il2CppBase() + 0x2E0DB0C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnSwitchRole() {
		return ((T (*)(ShadowBladeComponent*))(Il2CppBase() + 0x2E0DB14))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnSpectatingEnd() {
		return ((T (*)(ShadowBladeComponent*))(Il2CppBase() + 0x2E0DB1C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnSpectatingViewChange(uintptr_t P0) {
		return ((T (*)(ShadowBladeComponent*, uintptr_t))(Il2CppBase() + 0x2E0DB24))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnBeginDestroy() {
		return ((T (*)(ShadowBladeComponent*))(Il2CppBase() + 0x2E0DB2C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDie() {
		return ((T (*)(ShadowBladeComponent*))(Il2CppBase() + 0x2E0DB34))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(ShadowBladeComponent*))(Il2CppBase() + 0x2E0DB3C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(ShadowBladeComponent*, float))(Il2CppBase() + 0x2E0DB44))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnWeaponChanged() {
		return ((T (*)(ShadowBladeComponent*))(Il2CppBase() + 0x2E0DB4C))(this);
	}

};

}
