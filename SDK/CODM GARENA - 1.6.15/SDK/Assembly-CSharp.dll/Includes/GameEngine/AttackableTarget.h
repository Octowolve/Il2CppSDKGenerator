#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AttackableTarget
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AttackableTarget"));
	}

	template <typename T = uint32_t> T& m_ActorID() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_AttackableInfo() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& m_IsHidden() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& IsLocked() {
		return *(T*)((uintptr_t)this + 0x35);
	}
	template <typename T = uint32_t> T& LockedByPlayer() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& m_DamageAddition() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& HasInit() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& m_MeleeAttackRadius() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_FireColliderList() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_FireBoundingCollider() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ColliderList() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& disableAutoFire() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& isForward() {
		return *(T*)((uintptr_t)this + 0x69);
	}
	template <typename T = float> T& refreshForwardTime() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& refreshForwardCDTime() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InfoType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAttackableInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAttackableInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAttackableInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsDead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CorrectionActorID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanBeDamagedBy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanBeDamagedByMeleeWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSameCamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanAssistAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanDampAndMagnAssistAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanThrowWeaponBounce() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetForwardAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsForward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshForwardState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAttackablePoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TakeDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOngoingDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayHitScore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRealPawnHeadPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateTakeDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayTakeDamageEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustExplodeDamageRadius() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableFireCollider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CacheColliders() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveCachedCollider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterAttackableColliders() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnregisterAttackableColliders() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginConcussionEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndConcussionEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginFlashEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndFlashEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginEMPEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndEMPEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginInvalidState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndInvalidState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHitGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFireDir() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanAimmingTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanBeStick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHitImpactTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanBeHitType_DestructibleObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}

	template <typename T = uint32_t> T get_ActorID() {
		return ((T (*)(AttackableTarget*))(Il2CppBase() + 0x35CD8A8))(this);
	}
	template <typename T = void> T set_ActorID(uint32_t value) {
		return ((T (*)(AttackableTarget*, uint32_t))(Il2CppBase() + 0x35CD8B0))(this, value);
	}
	template <typename T = bool> T get_IsCanDirectAutoFire() {
		return ((T (*)(AttackableTarget*))(Il2CppBase() + 0x35CDC24))(this);
	}
	template <typename T = uintptr_t> T InfoType() {
		return ((T (*)(AttackableTarget*))(Il2CppBase() + 0x35CDC2C))(this);
	}
	template <typename T = uintptr_t> T get_AttackableInfo() {
		return ((T (*)(AttackableTarget*))(Il2CppBase() + 0x35CDD28))(this);
	}
	template <typename T = void> T UpdateAttackableInfo() {
		return ((T (*)(AttackableTarget*))(Il2CppBase() + 0x35CDAE4))(this);
	}
	template <typename T = void> T SetAttackableInfo(uintptr_t info) {
		return ((T (*)(AttackableTarget*, uintptr_t))(Il2CppBase() + 0x35CDEBC))(this, info);
	}
	template <typename T = void> T ResetAttackableInfo() {
		return ((T (*)(AttackableTarget*))(Il2CppBase() + 0x35CDF64))(this);
	}
	template <typename T = float> T get_Health() {
		return ((T (*)(AttackableTarget*))(Il2CppBase() + 0x35CE008))(this);
	}
	template <typename T = void> T set_Health(float value) {
		return ((T (*)(AttackableTarget*, float))(Il2CppBase() + 0x35CE03C))(this, value);
	}
	template <typename T = float> T get_MaxHealth() {
		return ((T (*)(AttackableTarget*))(Il2CppBase() + 0x35CE078))(this);
	}
	template <typename T = void> T set_MaxHealth(float value) {
		return ((T (*)(AttackableTarget*, float))(Il2CppBase() + 0x35CE0AC))(this, value);
	}
	template <typename T = uintptr_t> T get_Camp() {
		return ((T (*)(AttackableTarget*))(Il2CppBase() + 0x35CE0E8))(this);
	}
	template <typename T = bool> T get_IsHidden() {
		return ((T (*)(AttackableTarget*))(Il2CppBase() + 0x35CE11C))(this);
	}
	template <typename T = bool> T get_IsAlive() {
		return ((T (*)(AttackableTarget*))(Il2CppBase() + 0x35CE124))(this);
	}
	template <typename T = bool> T IsDead() {
		return ((T (*)(AttackableTarget*))(Il2CppBase() + 0x35CE12C))(this);
	}
	template <typename T = void> T CorrectionActorID(uint32_t actorID) {
		return ((T (*)(AttackableTarget*, uint32_t))(Il2CppBase() + 0x35CE1E0))(this, actorID);
	}
	template <typename T = bool> T get_CanLockedByRPG() {
		return ((T (*)(AttackableTarget*))(Il2CppBase() + 0x35CE29C))(this);
	}
	template <typename T = bool> T get_IsLocked() {
		return ((T (*)(AttackableTarget*))(Il2CppBase() + 0x35CE2A4))(this);
	}
	template <typename T = void> T set_IsLocked(bool value) {
		return ((T (*)(AttackableTarget*, bool))(Il2CppBase() + 0x35CE2AC))(this, value);
	}
	template <typename T = uintptr_t> T get_MoveAblePartTransform() {
		return ((T (*)(AttackableTarget*))(Il2CppBase() + 0x35CE2B4))(this);
	}
	template <typename T = uint32_t> T get_LockedByPlayer() {
		return ((T (*)(AttackableTarget*))(Il2CppBase() + 0x35CE2BC))(this);
	}
	template <typename T = void> T set_LockedByPlayer(uint32_t value) {
		return ((T (*)(AttackableTarget*, uint32_t))(Il2CppBase() + 0x35CE2C4))(this, value);
	}
	template <typename T = void> T set_DamageAddition(int32_t value) {
		return ((T (*)(AttackableTarget*, int32_t))(Il2CppBase() + 0x35CE2CC))(this, value);
	}
	template <typename T = int32_t> T get_DamageAddition() {
		return ((T (*)(AttackableTarget*))(Il2CppBase() + 0x35CE2D4))(this);
	}
	template <typename T = bool> T get_ShouldCheckDetailCollider() {
		return ((T (*)(AttackableTarget*))(Il2CppBase() + 0x35CE2DC))(this);
	}
	template <typename T = bool> T get_ShouldDisplayHP() {
		return ((T (*)(AttackableTarget*))(Il2CppBase() + 0x35CE2E4))(this);
	}
	template <typename T = bool> T get_HasInit() {
		return ((T (*)(AttackableTarget*))(Il2CppBase() + 0x35CE2EC))(this);
	}
	template <typename T = void> T set_HasInit(bool value) {
		return ((T (*)(AttackableTarget*, bool))(Il2CppBase() + 0x35CE2F4))(this, value);
	}
	template <typename T = float> T get_MeleeAttackRadius() {
		return ((T (*)(AttackableTarget*))(Il2CppBase() + 0x35CE2FC))(this);
	}
	template <typename T = Il2CppVector3> T get_CenterOffset() {
		return ((T (*)(AttackableTarget*))(Il2CppBase() + 0x35CE304))(this);
	}
	template <typename T = Il2CppVector3> T get_TargetCenterPostion() {
		return ((T (*)(AttackableTarget*))(Il2CppBase() + 0x35CE33C))(this);
	}
	template <typename T = Il2CppVector3> T get_TargetTopPostion() {
		return ((T (*)(AttackableTarget*))(Il2CppBase() + 0x35CE3B8))(this);
	}
	template <typename T = Il2CppVector3> T get_AimAssistOffset() {
		return ((T (*)(AttackableTarget*))(Il2CppBase() + 0x35CE44C))(this);
	}
	template <typename T = bool> T get_CanBeAssistAimed() {
		return ((T (*)(AttackableTarget*))(Il2CppBase() + 0x35CE464))(this);
	}
	template <typename T = float> T get_Radius() {
		return ((T (*)(AttackableTarget*))(Il2CppBase() + 0x35CE46C))(this);
	}
	template <typename T = float> T get_Height() {
		return ((T (*)(AttackableTarget*))(Il2CppBase() + 0x35CE478))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_FireColliderList() {
		return ((T (*)(AttackableTarget*))(Il2CppBase() + 0x35CE484))(this);
	}
	template <typename T = uintptr_t> T get_FireColliderHeadTf() {
		return ((T (*)(AttackableTarget*))(Il2CppBase() + 0x35CE48C))(this);
	}
	template <typename T = uintptr_t> T get_FireBoundingCollider() {
		return ((T (*)(AttackableTarget*))(Il2CppBase() + 0x35CE640))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_ColliderList() {
		return ((T (*)(AttackableTarget*))(Il2CppBase() + 0x35CE658))(this);
	}
	template <typename T = uintptr_t> T get_TargetPriority() {
		return ((T (*)(AttackableTarget*))(Il2CppBase() + 0x35CE660))(this);
	}
	template <typename T = uintptr_t> T get_FireColliderShape() {
		return ((T (*)(AttackableTarget*))(Il2CppBase() + 0x35CE668))(this);
	}
	template <typename T = bool> T get_DisplayImpactEffect() {
		return ((T (*)(AttackableTarget*))(Il2CppBase() + 0x35CE670))(this);
	}
	template <typename T = uintptr_t> T get_ServerType() {
		return ((T (*)(AttackableTarget*))(Il2CppBase() + 0x35CE678))(this);
	}
	template <typename T = bool> T CanBeDamagedBy(uintptr_t target) {
		return ((T (*)(AttackableTarget*, uintptr_t))(Il2CppBase() + 0x35CE680))(this, target);
	}
	template <typename T = bool> T CanBeDamagedByMeleeWeapon() {
		return ((T (*)(AttackableTarget*))(Il2CppBase() + 0x35CE7AC))(this);
	}
	template <typename T = bool> T IsSameCamp(uintptr_t target) {
		return ((T (*)(AttackableTarget*, uintptr_t))(Il2CppBase() + 0x35CE84C))(this, target);
	}
	template <typename T = bool> T CanAssistAim() {
		return ((T (*)(AttackableTarget*))(Il2CppBase() + 0x35CE998))(this);
	}
	template <typename T = bool> T CanDampAndMagnAssistAim() {
		return ((T (*)(AttackableTarget*))(Il2CppBase() + 0x35CEA6C))(this);
	}
	template <typename T = bool> T CanThrowWeaponBounce() {
		return ((T (*)(AttackableTarget*))(Il2CppBase() + 0x35CEB0C))(this);
	}
	template <typename T = bool> T get_disableAutoFire() {
		return ((T (*)(AttackableTarget*))(Il2CppBase() + 0x35CEBAC))(this);
	}
	template <typename T = void> T set_disableAutoFire(bool value) {
		return ((T (*)(AttackableTarget*, bool))(Il2CppBase() + 0x35CEBB4))(this, value);
	}
	template <typename T = float> T GetForwardAngle() {
		return ((T (*)(AttackableTarget*))(Il2CppBase() + 0x35CEBBC))(this);
	}
	template <typename T = bool> T IsForward() {
		return ((T (*)(AttackableTarget*))(Il2CppBase() + 0x35CEEF8))(this);
	}
	template <typename T = void> T RefreshForwardState() {
		return ((T (*)(AttackableTarget*))(Il2CppBase() + 0x35CF068))(this);
	}
	template <typename T = Il2CppVector3> T GetAttackablePoint(Il2CppVector3 pawnPosition) {
		return ((T (*)(AttackableTarget*, Il2CppVector3))(Il2CppBase() + 0x35CF164))(this, pawnPosition);
	}
	template <typename T = void> T TakeDamage(uintptr_t damageInfo) {
		return ((T (*)(AttackableTarget*, uintptr_t))(Il2CppBase() + 0x35CF244))(this, damageInfo);
	}
	template <typename T = void> T SetOngoingDamage(float remainingTime, uintptr_t dps, int32_t assetID) {
		return ((T (*)(AttackableTarget*, float, uintptr_t, int32_t))(Il2CppBase() + 0x35CF2E4))(this, remainingTime, dps, assetID);
	}
	template <typename T = void> T PlayHitScore(float damageValue, Il2CppVector3 hitPos, bool bHitHeadOrWeak) {
		return ((T (*)(AttackableTarget*, float, Il2CppVector3, bool))(Il2CppBase() + 0x35CF3A0))(this, damageValue, hitPos, bHitHeadOrWeak);
	}
	template <typename T = Il2CppVector3> T GetRealPawnHeadPosition() {
		return ((T (*)(AttackableTarget*))(Il2CppBase() + 0x35CF464))(this);
	}
	template <typename T = void> T AdjustDamage(uintptr_t damageInfo) {
		return ((T (*)(AttackableTarget*, uintptr_t))(Il2CppBase() + 0x35CF514))(this, damageInfo);
	}
	template <typename T = void> T SimulateTakeDamage(uintptr_t damageInfo) {
		return ((T (*)(AttackableTarget*, uintptr_t))(Il2CppBase() + 0x35CF5B4))(this, damageInfo);
	}
	template <typename T = void> T PlayTakeDamageEffect(uintptr_t damageInfo) {
		return ((T (*)(AttackableTarget*, uintptr_t))(Il2CppBase() + 0x35CF654))(this, damageInfo);
	}
	template <typename T = float> T AdjustExplodeDamageRadius() {
		return ((T (*)(AttackableTarget*))(Il2CppBase() + 0x35CF6F4))(this);
	}
	template <typename T = void> T EnableFireCollider(bool isEnable) {
		return ((T (*)(AttackableTarget*, bool))(Il2CppBase() + 0x35CF794))(this, isEnable);
	}
	template <typename T = void> T CacheColliders(uintptr_t go, bool clearCache) {
		return ((T (*)(AttackableTarget*, uintptr_t, bool))(Il2CppBase() + 0x35CF8E8))(this, go, clearCache);
	}
	template <typename T = void> T RemoveCachedCollider(uintptr_t coll) {
		return ((T (*)(AttackableTarget*, uintptr_t))(Il2CppBase() + 0x35CFCE4))(this, coll);
	}
	template <typename T = void> T RegisterAttackableColliders() {
		return ((T (*)(AttackableTarget*))(Il2CppBase() + 0x35CFF94))(this);
	}
	template <typename T = void> T UnregisterAttackableColliders() {
		return ((T (*)(AttackableTarget*))(Il2CppBase() + 0x35D03A0))(this);
	}
	template <typename T = bool> T get_InterstedInOriginShift() {
		return ((T (*)(AttackableTarget*))(Il2CppBase() + 0x35D06E4))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(AttackableTarget*))(Il2CppBase() + 0x35D06EC))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(AttackableTarget*))(Il2CppBase() + 0x35D09D8))(this);
	}
	template <typename T = void> T ApplyShift(Il2CppVector3 shift) {
		return ((T (*)(AttackableTarget*, Il2CppVector3))(Il2CppBase() + 0x35D0C50))(this, shift);
	}
	template <typename T = void> T BeginConcussionEffect(float duration, bool needToShowWhiteScreenEffect, float whiteScreenIntensityScale) {
		return ((T (*)(AttackableTarget*, float, bool, float))(Il2CppBase() + 0x35D0D0C))(this, duration, needToShowWhiteScreenEffect, whiteScreenIntensityScale);
	}
	template <typename T = void> T EndConcussionEffect() {
		return ((T (*)(AttackableTarget*))(Il2CppBase() + 0x35D0DCC))(this);
	}
	template <typename T = void> T BeginFlashEffect(float duration) {
		return ((T (*)(AttackableTarget*, float))(Il2CppBase() + 0x35D0E64))(this, duration);
	}
	template <typename T = void> T EndFlashEffect() {
		return ((T (*)(AttackableTarget*))(Il2CppBase() + 0x35D0F04))(this);
	}
	template <typename T = void> T BeginEMPEffect(float duration, uintptr_t range) {
		return ((T (*)(AttackableTarget*, float, uintptr_t))(Il2CppBase() + 0x35D0F9C))(this, duration, range);
	}
	template <typename T = void> T EndEMPEffect() {
		return ((T (*)(AttackableTarget*))(Il2CppBase() + 0x35D1068))(this);
	}
	template <typename T = void> T BeginInvalidState(float duration) {
		return ((T (*)(AttackableTarget*, float))(Il2CppBase() + 0x35D1100))(this, duration);
	}
	template <typename T = void> T EndInvalidState() {
		return ((T (*)(AttackableTarget*))(Il2CppBase() + 0x35D11A0))(this);
	}
	template <typename T = uintptr_t> T GetHitGroup(uintptr_t hitObject) {
		return ((T (*)(AttackableTarget*, uintptr_t))(Il2CppBase() + 0x35D1238))(this, hitObject);
	}
	template <typename T = void> T SetFireDir(Il2CppVector3 dir) {
		return ((T (*)(AttackableTarget*, Il2CppVector3))(Il2CppBase() + 0x35D1368))(this, dir);
	}
	template <typename T = bool> T IsCanAimmingTarget(uintptr_t pawn) {
		return ((T (*)(AttackableTarget*, uintptr_t))(Il2CppBase() + 0x35D1424))(this, pawn);
	}
	template <typename T = bool> T IsCanBeStick() {
		return ((T (*)(AttackableTarget*))(Il2CppBase() + 0x35D151C))(this);
	}
	template <typename T = uintptr_t> T GetHitImpactTarget() {
		return ((T (*)(AttackableTarget*))(Il2CppBase() + 0x35D15BC))(this);
	}
	template <typename T = bool> T CanBeHitType_DestructibleObject() {
		return ((T (*)(AttackableTarget*))(Il2CppBase() + 0x35D1664))(this);
	}

};

}
