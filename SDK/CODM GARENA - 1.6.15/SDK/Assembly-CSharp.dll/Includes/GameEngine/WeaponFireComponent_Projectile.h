#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponFireComponentProjectile
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponFireComponent_Projectile"));
	}

	template <typename T = bool> T& m_ShowIndicator() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = float> T& m_DamageRadius() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = float> T& m_DamageMinHitSoundTime() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = float> T& m_DamageMaxHitSoundTime() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = bool> T& m_ExplodeInWater() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = float> T& m_DecreaseUpSpeed() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = Il2CppVector3> T& m_ModityOffset() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = float> T& m_LifeSpan() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = float> T& m_ExplosionLifeSpan() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = int32_t> T& m_ProjExplosionAssetID() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = int32_t> T& m_BRProjExplosionAssetID() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = bool> T& m_CanBounce() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = bool> T& m_TouchExplode() {
		return *(T*)((uintptr_t)this + 0x1AD);
	}
	template <typename T = float> T& m_PawnBounceRate() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = float> T& m_GroundBounceRate() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = float> T& m_WallBounceRate() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = int32_t> T& m_ProjAssetID() {
		return *(T*)((uintptr_t)this + 0x1BC);
	}
	template <typename T = int32_t> T& m_ProjectOcclusionEffectID() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = bool> T& m_CauseFlashEffect() {
		return *(T*)((uintptr_t)this + 0x1C4);
	}
	template <typename T = bool> T& m_CauseRepulseEffect() {
		return *(T*)((uintptr_t)this + 0x1C5);
	}
	template <typename T = float> T& m_RepulseRadius() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = float> T& m_RepulseDuration() {
		return *(T*)((uintptr_t)this + 0x1CC);
	}
	template <typename T = float> T& m_RepulseSpeedScale() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = float> T& m_HitDamage() {
		return *(T*)((uintptr_t)this + 0x1D4);
	}
	template <typename T = float> T& m_SpecialDamage() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = float> T& m_MinDuration() {
		return *(T*)((uintptr_t)this + 0x1DC);
	}
	template <typename T = float> T& m_MaxDuration() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = float> T& m_SelfMaxDamage() {
		return *(T*)((uintptr_t)this + 0x1E4);
	}
	template <typename T = float> T& m_SelfMinDamage() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = float> T& m_SelfMaxDuration() {
		return *(T*)((uintptr_t)this + 0x1EC);
	}
	template <typename T = float> T& m_SelfMinDuration() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = uintptr_t> T& m_ProjectileType() {
		return *(T*)((uintptr_t)this + 0x1F4);
	}
	template <typename T = float> T& m_MaxThrowDistance() {
		return *(T*)((uintptr_t)this + 0x1F8);
	}
	template <typename T = float> T& m_FireAnimTime() {
		return *(T*)((uintptr_t)this + 0x1FC);
	}
	template <typename T = float> T& m_SwitchWeaponElapseScale() {
		return *(T*)((uintptr_t)this + 0x200);
	}
	template <typename T = float> T& m_FireStart2EndTime() {
		return *(T*)((uintptr_t)this + 0x204);
	}
	template <typename T = bool> T& m_IgnoreSameCamp() {
		return *(T*)((uintptr_t)this + 0x208);
	}
	template <typename T = bool> T& m_IsHoldFire() {
		return *(T*)((uintptr_t)this + 0x209);
	}
	template <typename T = bool> T& m_ShowFirstImpactPointEffect() {
		return *(T*)((uintptr_t)this + 0x20A);
	}
	template <typename T = bool> T& m_CanBePick() {
		return *(T*)((uintptr_t)this + 0x20B);
	}
	template <typename T = float> T& m_PickDistance() {
		return *(T*)((uintptr_t)this + 0x20C);
	}
	template <typename T = float> T& m_QuickThrowPrepareTime() {
		return *(T*)((uintptr_t)this + 0x210);
	}
	template <typename T = float> T& m_QuickThrowEndTime() {
		return *(T*)((uintptr_t)this + 0x214);
	}
	template <typename T = float> T& m_PunchAngle_X() {
		return *(T*)((uintptr_t)this + 0x218);
	}
	template <typename T = float> T& m_ShotSpreadAngle() {
		return *(T*)((uintptr_t)this + 0x21C);
	}
	template <typename T = bool> T& m_ExplodeOnlyOnce() {
		return *(T*)((uintptr_t)this + 0x220);
	}
	template <typename T = float> T& m_MinInvalidDuration() {
		return *(T*)((uintptr_t)this + 0x224);
	}
	template <typename T = float> T& m_MaxInvalidDuration() {
		return *(T*)((uintptr_t)this + 0x228);
	}
	template <typename T = int32_t> T& m_MaxBounceCount() {
		return *(T*)((uintptr_t)this + 0x22C);
	}
	template <typename T = float> T& m_FlyMaxDistance() {
		return *(T*)((uintptr_t)this + 0x230);
	}
	template <typename T = bool> T& m_HitGroundStop() {
		return *(T*)((uintptr_t)this + 0x234);
	}
	template <typename T = int32_t> T& m_BuffAreaBuffID() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = int32_t> T& m_BuffAreaBuffID1() {
		return *(T*)((uintptr_t)this + 0x23C);
	}
	template <typename T = int32_t> T& m_BuffAreaBuffID2() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = int32_t> T& m_BuffAreaBuffID3() {
		return *(T*)((uintptr_t)this + 0x244);
	}
	template <typename T = float> T& m_BuffAreaRadius() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = float> T& m_BuffAreaLife() {
		return *(T*)((uintptr_t)this + 0x24C);
	}
	template <typename T = int32_t> T& m_BuffArea1BuffID() {
		return *(T*)((uintptr_t)this + 0x250);
	}
	template <typename T = int32_t> T& m_BuffArea1BuffID1() {
		return *(T*)((uintptr_t)this + 0x254);
	}
	template <typename T = int32_t> T& m_BuffArea1BuffID2() {
		return *(T*)((uintptr_t)this + 0x258);
	}
	template <typename T = int32_t> T& m_BuffArea1BuffID3() {
		return *(T*)((uintptr_t)this + 0x25C);
	}
	template <typename T = float> T& m_BuffArea1Radius() {
		return *(T*)((uintptr_t)this + 0x260);
	}
	template <typename T = float> T& m_BuffArea1Life() {
		return *(T*)((uintptr_t)this + 0x264);
	}
	template <typename T = float> T& m_DelayShowProjectileTime() {
		return *(T*)((uintptr_t)this + 0x268);
	}
	template <typename T = int32_t> T& m_LastProjectileID() {
		return *(T*)((uintptr_t)this + 0x26C);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& m_trackPositionList() {
		return *(T*)((uintptr_t)this + 0x270);
	}
	template <typename T = Il2CppVector3> T& m_LastStartPos() {
		return *(T*)((uintptr_t)this + 0x274);
	}
	template <typename T = Il2CppVector3> T& m_LastVelocity() {
		return *(T*)((uintptr_t)this + 0x280);
	}
	template <typename T = uintptr_t> T& m_OldImpactInfo() {
		return *(T*)((uintptr_t)this + 0x28C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcInitVelocity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcRealStartPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangePunchAngleByGetHit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAdjustedAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAdjustedCameraAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcFireAnimationSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FireAmmunition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetExplosionInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ServerStartFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ServerStopFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RealStartFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPostRealStartFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsProjectile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanPenetrateStone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearTrackPositionList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetProjectileTrackPositionsAndFirstImpactInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponFireComponentProjectile*, uintptr_t, bool))(Il2CppBase() + 0x23CE214))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponFireComponentProjectile*))(Il2CppBase() + 0x23F31AC))(this);
	}
	template <typename T = float> T get_DamageRadius() {
		return ((T (*)(WeaponFireComponentProjectile*))(Il2CppBase() + 0x23D4580))(this);
	}
	template <typename T = float> T get_LifeSpan() {
		return ((T (*)(WeaponFireComponentProjectile*))(Il2CppBase() + 0x23F3268))(this);
	}
	template <typename T = int32_t> T get_ProjectOcclusionEffectID() {
		return ((T (*)(WeaponFireComponentProjectile*))(Il2CppBase() + 0x23F3270))(this);
	}
	template <typename T = uintptr_t> T get_ProjectileType() {
		return ((T (*)(WeaponFireComponentProjectile*))(Il2CppBase() + 0x23F3278))(this);
	}
	template <typename T = float> T get_MaxThrowDistance() {
		return ((T (*)(WeaponFireComponentProjectile*))(Il2CppBase() + 0x23F3280))(this);
	}
	template <typename T = float> T get_FireAnimTime() {
		return ((T (*)(WeaponFireComponentProjectile*))(Il2CppBase() + 0x23F3288))(this);
	}
	template <typename T = float> T get_SwitchWeaponElapseScale() {
		return ((T (*)(WeaponFireComponentProjectile*))(Il2CppBase() + 0x23F3290))(this);
	}
	template <typename T = float> T get_FireStart2EndTime() {
		return ((T (*)(WeaponFireComponentProjectile*))(Il2CppBase() + 0x23F3298))(this);
	}
	template <typename T = bool> T get_IsHoldFire() {
		return ((T (*)(WeaponFireComponentProjectile*))(Il2CppBase() + 0x23F32A0))(this);
	}
	template <typename T = bool> T get_ShowFirstImpactPointEffect() {
		return ((T (*)(WeaponFireComponentProjectile*))(Il2CppBase() + 0x23F32A8))(this);
	}
	template <typename T = float> T get_QuickThrowPrepareTime() {
		return ((T (*)(WeaponFireComponentProjectile*))(Il2CppBase() + 0x23F32B0))(this);
	}
	template <typename T = float> T get_QuickThrowEndTime() {
		return ((T (*)(WeaponFireComponentProjectile*))(Il2CppBase() + 0x23F3328))(this);
	}
	template <typename T = bool> T get_HitGroundStop() {
		return ((T (*)(WeaponFireComponentProjectile*))(Il2CppBase() + 0x23F3330))(this);
	}
	template <typename T = Il2CppVector3> T CalcInitVelocity() {
		return ((T (*)(WeaponFireComponentProjectile*))(Il2CppBase() + 0x23CECF4))(this);
	}
	template <typename T = Il2CppVector3> T CalcRealStartPos() {
		return ((T (*)(WeaponFireComponentProjectile*))(Il2CppBase() + 0x23CEC34))(this);
	}
	template <typename T = void> T ChangePunchAngleByGetHit() {
		return ((T (*)(WeaponFireComponentProjectile*))(Il2CppBase() + 0x23F3338))(this);
	}
	template <typename T = Il2CppQuaternion> T GetAdjustedAim(Il2CppQuaternion initialAim) {
		return ((T (*)(WeaponFireComponentProjectile*, Il2CppQuaternion))(Il2CppBase() + 0x23D6A30))(this, initialAim);
	}
	template <typename T = Il2CppQuaternion> T GetAdjustedCameraAim(Il2CppQuaternion initialAim) {
		return ((T (*)(WeaponFireComponentProjectile*, Il2CppQuaternion))(Il2CppBase() + 0x23F33E4))(this, initialAim);
	}
	template <typename T = float> T CalcFireAnimationSpeed(float clipLength) {
		return ((T (*)(WeaponFireComponentProjectile*, float))(Il2CppBase() + 0x23F350C))(this, clipLength);
	}
	template <typename T = void> T FireAmmunition() {
		return ((T (*)(WeaponFireComponentProjectile*))(Il2CppBase() + 0x23F35B4))(this);
	}
	template <typename T = void> T GetExplosionInfo(Il2CppVector3 startPos, Il2CppVector3 velocity, uintptr_t projectileData, uintptr_t* eplosionTime, uintptr_t* targetPos) {
		return ((T (*)(WeaponFireComponentProjectile*, Il2CppVector3, Il2CppVector3, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x23D8758))(this, startPos, velocity, projectileData, eplosionTime, targetPos);
	}
	template <typename T = void> T ServerStartFire() {
		return ((T (*)(WeaponFireComponentProjectile*))(Il2CppBase() + 0x23F3818))(this);
	}
	template <typename T = void> T ServerStopFire(int32_t costAmmo) {
		return ((T (*)(WeaponFireComponentProjectile*, int32_t))(Il2CppBase() + 0x23D7C6C))(this, costAmmo);
	}
	template <typename T = int32_t> T get_LastProjectileID() {
		return ((T (*)(WeaponFireComponentProjectile*))(Il2CppBase() + 0x23F3B64))(this);
	}
	template <typename T = uintptr_t> T RealStartFire() {
		return ((T (*)(WeaponFireComponentProjectile*))(Il2CppBase() + 0x23D5B28))(this);
	}
	template <typename T = void> T OnPostRealStartFire(Il2CppVector3 startPos, Il2CppVector3 velocity, uintptr_t curProjectile) {
		return ((T (*)(WeaponFireComponentProjectile*, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x23D5558))(this, startPos, velocity, curProjectile);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponFireComponentProjectile*, float))(Il2CppBase() + 0x23D4680))(this, DeltaTime);
	}
	template <typename T = bool> T IsProjectile() {
		return ((T (*)(WeaponFireComponentProjectile*))(Il2CppBase() + 0x23F3C44))(this);
	}
	template <typename T = bool> T CanPenetrateStone() {
		return ((T (*)(WeaponFireComponentProjectile*))(Il2CppBase() + 0x23F375C))(this);
	}
	template <typename T = void> T ClearTrackPositionList() {
		return ((T (*)(WeaponFireComponentProjectile*))(Il2CppBase() + 0x23F3CE4))(this);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T GetProjectileTrackPositionsAndFirstImpactInfo(uintptr_t firstImpactInfo, bool canPenetrateStoneMaterialCollider, int32_t maxPointNum) {
		return ((T (*)(WeaponFireComponentProjectile*, uintptr_t, bool, int32_t))(Il2CppBase() + 0x23F3DB8))(this, firstImpactInfo, canPenetrateStoneMaterialCollider, maxPointNum);
	}
	template <typename T = void> T xLuaBaseProxy_CopyProperties(uintptr_t P0, bool P1) {
		return ((T (*)(WeaponFireComponentProjectile*, uintptr_t, bool))(Il2CppBase() + 0x23F4138))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_ChangePunchAngleByGetHit() {
		return ((T (*)(WeaponFireComponentProjectile*))(Il2CppBase() + 0x23F4140))(this);
	}
	template <typename T = Il2CppQuaternion> T xLuaBaseProxy_GetAdjustedAim(Il2CppQuaternion P0) {
		return ((T (*)(WeaponFireComponentProjectile*, Il2CppQuaternion))(Il2CppBase() + 0x23F4148))(this, P0);
	}
	template <typename T = Il2CppQuaternion> T xLuaBaseProxy_GetAdjustedCameraAim(Il2CppQuaternion P0) {
		return ((T (*)(WeaponFireComponentProjectile*, Il2CppQuaternion))(Il2CppBase() + 0x23F4174))(this, P0);
	}
	template <typename T = float> T xLuaBaseProxy_CalcFireAnimationSpeed(float P0) {
		return ((T (*)(WeaponFireComponentProjectile*, float))(Il2CppBase() + 0x23F41A0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_FireAmmunition() {
		return ((T (*)(WeaponFireComponentProjectile*))(Il2CppBase() + 0x23F41A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ServerStartFire() {
		return ((T (*)(WeaponFireComponentProjectile*))(Il2CppBase() + 0x23F41B0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ServerStopFire(int32_t P0) {
		return ((T (*)(WeaponFireComponentProjectile*, int32_t))(Il2CppBase() + 0x23F41B8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponFireComponentProjectile*, float))(Il2CppBase() + 0x23F41C0))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_IsProjectile() {
		return ((T (*)(WeaponFireComponentProjectile*))(Il2CppBase() + 0x23F41C8))(this);
	}

};

}
