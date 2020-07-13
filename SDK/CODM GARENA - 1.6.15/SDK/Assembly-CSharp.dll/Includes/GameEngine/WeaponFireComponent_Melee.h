#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponFireComponentMelee
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponFireComponent_Melee"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& m_HitPartRate() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = float> T& m_JumpFireDamage() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = int32_t> T& m_MeleeWeaponAngle() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = float> T& m_CalcDamageTime() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = float> T& m_StartCaleDamageTime() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = int32_t> T& m_FireFirstEffectAssetID1P() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = int32_t> T& m_FireFirstEffectAssetID3P() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& forcedTarget() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = float> T& m_FireIntervalCut() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = bool> T& m_HasHitImpact() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = bool> T& m_DelayFiring() {
		return *(T*)((uintptr_t)this + 0x19D);
	}
	template <typename T = float> T& m_ExpectFireTime() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = float> T& m_FireStartTime() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = uintptr_t> T& m_FirstImpactTarget() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = float> T& m_PunchAngle_X() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = Il2CppVector3> T& m_LastColliderPos() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_RayCastHits() {
		return *(T*)((uintptr_t)this + 0x1BC);
	}
	template <typename T = uintptr_t> T& m_MeleeCollider() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = bool> T& IsJumpFire() {
		return *(T*)((uintptr_t)this + 0x1C4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& impactList() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDblclickAnimTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasAmmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FireStageFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetActualDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindAttackTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangePunchAngleByGetHit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAdjustedAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAdjustedCameraAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcWeaponFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FireAmmunition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateMeleeWeaponCollider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RealMeleeFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RaycastMeleeOBB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetImpactInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanBeDamagedBy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHitPartRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMelee() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponFireComponentMelee*, uintptr_t, bool))(Il2CppBase() + 0x23ED25C))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponFireComponentMelee*))(Il2CppBase() + 0x23ED400))(this);
	}
	template <typename T = int32_t> T get_FireFirstEffectAssetID3P() {
		return ((T (*)(WeaponFireComponentMelee*))(Il2CppBase() + 0x23ED4BC))(this);
	}
	template <typename T = uintptr_t> T get_forcedTarget() {
		return ((T (*)(WeaponFireComponentMelee*))(Il2CppBase() + 0x23ED4C4))(this);
	}
	template <typename T = void> T set_forcedTarget(uintptr_t value) {
		return ((T (*)(WeaponFireComponentMelee*, uintptr_t))(Il2CppBase() + 0x23ED4CC))(this, value);
	}
	template <typename T = float> T GetDblclickAnimTime() {
		return ((T (*)(WeaponFireComponentMelee*))(Il2CppBase() + 0x23ED4D4))(this);
	}
	template <typename T = float> T get_FireInterval() {
		return ((T (*)(WeaponFireComponentMelee*))(Il2CppBase() + 0x23ED7DC))(this);
	}
	template <typename T = void> T set_FireIntervalCut(float value) {
		return ((T (*)(WeaponFireComponentMelee*, float))(Il2CppBase() + 0x23ED998))(this, value);
	}
	template <typename T = bool> T get_HasDelayFire() {
		return ((T (*)(WeaponFireComponentMelee*))(Il2CppBase() + 0x23ED9A0))(this);
	}
	template <typename T = uintptr_t> T get_MeleeCollider() {
		return ((T (*)(WeaponFireComponentMelee*))(Il2CppBase() + 0x23ED9F4))(this);
	}
	template <typename T = bool> T HasAmmo() {
		return ((T (*)(WeaponFireComponentMelee*))(Il2CppBase() + 0x23ED9FC))(this);
	}
	template <typename T = void> T set_IsJumpFire(bool value) {
		return ((T (*)(WeaponFireComponentMelee*, bool))(Il2CppBase() + 0x23EDA9C))(this, value);
	}
	template <typename T = bool> T get_IsJumpFire() {
		return ((T (*)(WeaponFireComponentMelee*))(Il2CppBase() + 0x23EDAA4))(this);
	}
	template <typename T = int32_t> T FireStageFlag() {
		return ((T (*)(WeaponFireComponentMelee*))(Il2CppBase() + 0x23EDAAC))(this);
	}
	template <typename T = float> T GetActualDamage() {
		return ((T (*)(WeaponFireComponentMelee*))(Il2CppBase() + 0x23EDB54))(this);
	}
	template <typename T = bool> T CheckTarget(uintptr_t target, Il2CppVector3 StartFirePos, uintptr_t impactInfo, float rangeFactor, uintptr_t dirRatio) {
		return ((T (*)(WeaponFireComponentMelee*, uintptr_t, Il2CppVector3, uintptr_t, float, uintptr_t))(Il2CppBase() + 0x23EDD60))(this, target, StartFirePos, impactInfo, rangeFactor, dirRatio);
	}
	template <typename T = uintptr_t> T FindAttackTarget(uintptr_t dirRatio, float rangeFactor) {
		return ((T (*)(WeaponFireComponentMelee*, uintptr_t, float))(Il2CppBase() + 0x23EE804))(this, dirRatio, rangeFactor);
	}
	template <typename T = void> T ChangePunchAngleByGetHit() {
		return ((T (*)(WeaponFireComponentMelee*))(Il2CppBase() + 0x23EEC94))(this);
	}
	template <typename T = Il2CppQuaternion> T GetAdjustedAim(Il2CppQuaternion initialAim) {
		return ((T (*)(WeaponFireComponentMelee*, Il2CppQuaternion))(Il2CppBase() + 0x23EED40))(this, initialAim);
	}
	template <typename T = Il2CppQuaternion> T GetAdjustedCameraAim(Il2CppQuaternion initialAim) {
		return ((T (*)(WeaponFireComponentMelee*, Il2CppQuaternion))(Il2CppBase() + 0x23EEE68))(this, initialAim);
	}
	template <typename T = bool> T CalcWeaponFire(Il2CppVector3 startPos, Il2CppVector3 dir, uintptr_t impactList) {
		return ((T (*)(WeaponFireComponentMelee*, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x23EEF90))(this, startPos, dir, impactList);
	}
	template <typename T = void> T FireAmmunition() {
		return ((T (*)(WeaponFireComponentMelee*))(Il2CppBase() + 0x23EFC38))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(WeaponFireComponentMelee*, float))(Il2CppBase() + 0x23F01E8))(this, dt);
	}
	template <typename T = bool> T CreateMeleeWeaponCollider() {
		return ((T (*)(WeaponFireComponentMelee*))(Il2CppBase() + 0x23F0A44))(this);
	}
	template <typename T = void> T RealMeleeFire() {
		return ((T (*)(WeaponFireComponentMelee*))(Il2CppBase() + 0x23F0374))(this);
	}
	template <typename T = bool> T RaycastMeleeOBB(uintptr_t col, Il2CppVector3 start, int32_t traceFlag, uintptr_t dir, uintptr_t hitTarget) {
		return ((T (*)(WeaponFireComponentMelee*, uintptr_t, Il2CppVector3, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x23F0E34))(this, col, start, traceFlag, dir, hitTarget);
	}
	template <typename T = bool> T GetImpactInfo(Il2CppArray<uintptr_t>* colliderAll, Il2CppVector3 start, uintptr_t dir, uintptr_t hitTarget) {
		return ((T (*)(WeaponFireComponentMelee*, Il2CppArray<uintptr_t>*, Il2CppVector3, uintptr_t, uintptr_t))(Il2CppBase() + 0x23F1950))(this, colliderAll, start, dir, hitTarget);
	}
	template <typename T = bool> T CanBeDamagedBy(uintptr_t col, Il2CppVector3 start, uintptr_t dir, uintptr_t hitTarget) {
		return ((T (*)(WeaponFireComponentMelee*, uintptr_t, Il2CppVector3, uintptr_t, uintptr_t))(Il2CppBase() + 0x23F1BB8))(this, col, start, dir, hitTarget);
	}
	template <typename T = float> T GetHitPartRate(uintptr_t group) {
		return ((T (*)(WeaponFireComponentMelee*, uintptr_t))(Il2CppBase() + 0x23F2230))(this, group);
	}
	template <typename T = bool> T IsMelee() {
		return ((T (*)(WeaponFireComponentMelee*))(Il2CppBase() + 0x23F2410))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CopyProperties(uintptr_t P0, bool P1) {
		return ((T (*)(WeaponFireComponentMelee*, uintptr_t, bool))(Il2CppBase() + 0x23F24B0))(this, P0, P1);
	}
	template <typename T = bool> T xLuaBaseProxy_HasAmmo() {
		return ((T (*)(WeaponFireComponentMelee*))(Il2CppBase() + 0x23F24B8))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetActualDamage() {
		return ((T (*)(WeaponFireComponentMelee*))(Il2CppBase() + 0x23F24C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ChangePunchAngleByGetHit() {
		return ((T (*)(WeaponFireComponentMelee*))(Il2CppBase() + 0x23F24C8))(this);
	}
	template <typename T = Il2CppQuaternion> T xLuaBaseProxy_GetAdjustedAim(Il2CppQuaternion P0) {
		return ((T (*)(WeaponFireComponentMelee*, Il2CppQuaternion))(Il2CppBase() + 0x23F24D0))(this, P0);
	}
	template <typename T = Il2CppQuaternion> T xLuaBaseProxy_GetAdjustedCameraAim(Il2CppQuaternion P0) {
		return ((T (*)(WeaponFireComponentMelee*, Il2CppQuaternion))(Il2CppBase() + 0x23F24FC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_FireAmmunition() {
		return ((T (*)(WeaponFireComponentMelee*))(Il2CppBase() + 0x23F2528))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponFireComponentMelee*, float))(Il2CppBase() + 0x23F2530))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_IsMelee() {
		return ((T (*)(WeaponFireComponentMelee*))(Il2CppBase() + 0x23F2538))(this);
	}

};

}
