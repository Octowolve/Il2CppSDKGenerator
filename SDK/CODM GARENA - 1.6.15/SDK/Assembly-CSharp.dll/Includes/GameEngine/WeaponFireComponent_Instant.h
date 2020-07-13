#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponFireComponentInstant
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponFireComponent_Instant"));
	}

	template <typename T = float> T& m_LongShotDistance() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = int32_t> T& m_ShotFired() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = float> T& m_DisperseRate() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = bool> T& m_RecoilFireInterval() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = float> T& m_FallInterval() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = float> T& m_InaccuracyModifierCrouching() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = float> T& m_InaccuracyModifierProning() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = float> T& m_InaccuracyModifierSliding() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = float> T& m_ZoomingGetHitPunchAngleX() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = float> T& m_ZoomingGetHitPunchAngleXDecreaseSpeed() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = float> T& m_ReachMaxCrosshairDropPerc() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = float> T& m_UnreachMaxCrosshairDropPerc() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_DamageRange() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_DamageValue() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_PVEDamageValue() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_DamageRangeHitRate() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_DamageRangeAccuracy() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = float> T& m_PVEPenetrationDamageModifier() {
		return *(T*)((uintptr_t)this + 0x1BC);
	}
	template <typename T = int32_t> T& m_MaxThroughWall() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = int32_t> T& m_PVEMaxThroughWall() {
		return *(T*)((uintptr_t)this + 0x1C4);
	}
	template <typename T = bool> T& m_bReachUpMax() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = bool> T& m_bReachSideMax() {
		return *(T*)((uintptr_t)this + 0x1C9);
	}
	template <typename T = int32_t> T& m_CurrentRecoilDirection() {
		return *(T*)((uintptr_t)this + 0x1CC);
	}
	template <typename T = Il2CppVector2> T& m_PunchAngle() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = float> T& m_ShotSpreadSize() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = Il2CppVector2> T& m_ShotSpread() {
		return *(T*)((uintptr_t)this + 0x1DC);
	}
	template <typename T = bool> T& m_bRecoverRecoilByGetHit() {
		return *(T*)((uintptr_t)this + 0x1E4);
	}
	template <typename T = float> T& m_CrossHairSizeBase() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = float> T& m_CrossHairSizeModifier() {
		return *(T*)((uintptr_t)this + 0x1EC);
	}
	template <typename T = float> T& m_CrossHairLengthBase() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = float> T& m_CrossHairLengthModifier() {
		return *(T*)((uintptr_t)this + 0x1F4);
	}
	template <typename T = float> T& m_CrossHairSizeSprintingBase() {
		return *(T*)((uintptr_t)this + 0x1F8);
	}
	template <typename T = float> T& m_CrossHairSizeSprintingModifier() {
		return *(T*)((uintptr_t)this + 0x1FC);
	}
	template <typename T = float> T& m_CrossHairLengthSprintingBase() {
		return *(T*)((uintptr_t)this + 0x200);
	}
	template <typename T = float> T& m_CrossHairLengthSprintingModifier() {
		return *(T*)((uintptr_t)this + 0x204);
	}
	template <typename T = float> T& m_CrossHairSizeWalkingBase() {
		return *(T*)((uintptr_t)this + 0x208);
	}
	template <typename T = float> T& m_CrossHairSizeWalkingModifier() {
		return *(T*)((uintptr_t)this + 0x20C);
	}
	template <typename T = float> T& m_CrossHairLengthWalkingBase() {
		return *(T*)((uintptr_t)this + 0x210);
	}
	template <typename T = float> T& m_CrossHairLengthWalkingModifier() {
		return *(T*)((uintptr_t)this + 0x214);
	}
	template <typename T = float> T& m_CrossHairSizeJumpingBase() {
		return *(T*)((uintptr_t)this + 0x218);
	}
	template <typename T = float> T& m_CrossHairSizeJumpingModifier() {
		return *(T*)((uintptr_t)this + 0x21C);
	}
	template <typename T = float> T& m_CrossHairLengthJumpingBase() {
		return *(T*)((uintptr_t)this + 0x220);
	}
	template <typename T = float> T& m_CrossHairLengthJumpingModifier() {
		return *(T*)((uintptr_t)this + 0x224);
	}
	template <typename T = float> T& m_CrosshairInaccuracyIncrement() {
		return *(T*)((uintptr_t)this + 0x228);
	}
	template <typename T = float> T& m_CrosshairInaccuracyDecrement() {
		return *(T*)((uintptr_t)this + 0x22C);
	}
	template <typename T = float> T& m_CurrentCrosshairInaccuracy() {
		return *(T*)((uintptr_t)this + 0x230);
	}
	template <typename T = int32_t> T& m_LastStateIdx() {
		return *(T*)((uintptr_t)this + 0x234);
	}
	template <typename T = Il2CppVector2> T& m_BreatheTremblingRange() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = Il2CppVector2> T& m_BreatheTremblingRate() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = Il2CppVector2> T& m_BreatheTremblingAccel() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = Il2CppVector2> T& m_BreatheTremblingCurRate() {
		return *(T*)((uintptr_t)this + 0x250);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_HitPartRate() {
		return *(T*)((uintptr_t)this + 0x258);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_PVEHitPartRate() {
		return *(T*)((uintptr_t)this + 0x25C);
	}
	template <typename T = Il2CppVector2> T& ValidPort() {
		return *(T*)((uintptr_t)this + 0x260);
	}
	template <typename T = Il2CppVector2> T& ValidPort2() {
		return *(T*)((uintptr_t)this + 0x268);
	}
	template <typename T = uintptr_t> T& m_BulletType() {
		return *(T*)((uintptr_t)this + 0x270);
	}
	template <typename T = float> T& m_DecayScale() {
		return *(T*)((uintptr_t)this + 0x274);
	}
	template <typename T = float> static T& MinDist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& MinDecayRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& MaxThickness() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& OpenDamageLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_ThroughWallNum() {
		return *(T*)((uintptr_t)this + 0x278);
	}
	template <typename T = int32_t> T& m_ThroughPlayerNum() {
		return *(T*)((uintptr_t)this + 0x27C);
	}
	template <typename T = float> T& m_DamageRate() {
		return *(T*)((uintptr_t)this + 0x280);
	}
	template <typename T = float> T& m_BulletFlyDistance() {
		return *(T*)((uintptr_t)this + 0x284);
	}
	template <typename T = bool> T& m_IsDecay() {
		return *(T*)((uintptr_t)this + 0x288);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& impactList() {
		return *(T*)((uintptr_t)this + 0x28C);
	}
	template <typename T = bool> T& m_FireEnded() {
		return *(T*)((uintptr_t)this + 0x290);
	}
	template <typename T = float> T& m_ShotSpreadLerpTime() {
		return *(T*)((uintptr_t)this + 0x294);
	}
	template <typename T = Il2CppVector2> T& m_LastPunch() {
		return *(T*)((uintptr_t)this + 0x298);
	}
	template <typename T = Il2CppVector2> T& m_LastShotSpread() {
		return *(T*)((uintptr_t)this + 0x2A0);
	}
	template <typename T = Il2CppVector2> T& m_LastRotationMod() {
		return *(T*)((uintptr_t)this + 0x2A8);
	}
	template <typename T = int32_t> T& m_LastUpdateRotationFrame() {
		return *(T*)((uintptr_t)this + 0x2B0);
	}
	template <typename T = int32_t> T& m_UpdateLerpFrame() {
		return *(T*)((uintptr_t)this + 0x2B4);
	}
	template <typename T = float> T& m_AngleScale() {
		return *(T*)((uintptr_t)this + 0x2B8);
	}
	template <typename T = float> T& m_ShotSpreadInterval() {
		return *(T*)((uintptr_t)this + 0x2BC);
	}
	template <typename T = bool> T& m_CloseSpreadAdjustedAimDir() {
		return *(T*)((uintptr_t)this + 0x2C0);
	}
	template <typename T = bool> T& m_IsAimedFire() {
		return *(T*)((uintptr_t)this + 0x2C1);
	}
	template <typename T = Il2CppVector2> T& m_LastShotSpreadByCamera() {
		return *(T*)((uintptr_t)this + 0x2C4);
	}
	template <typename T = Il2CppVector2> T& m_BreatheTremblingPos() {
		return *(T*)((uintptr_t)this + 0x2CC);
	}
	template <typename T = bool> T& IsModeAimRotation() {
		return *(T*)((uintptr_t)this + 0x2D4);
	}
	template <typename T = bool> T& IsIgnore() {
		return *(T*)((uintptr_t)this + 0x2D5);
	}
	template <typename T = bool> T& m_UseFixDeltaTime() {
		return *(T*)((uintptr_t)this + 0x2D6);
	}
	template <typename T = float> T& m_TargetDeltaTime() {
		return *(T*)((uintptr_t)this + 0x2D8);
	}
	template <typename T = float> T& LastDt() {
		return *(T*)((uintptr_t)this + 0x2DC);
	}
	template <typename T = float> T& LLastDt() {
		return *(T*)((uintptr_t)this + 0x2E0);
	}
	template <typename T = int32_t> T& m_LastUpdateCrosshairSizeFrame() {
		return *(T*)((uintptr_t)this + 0x2E4);
	}
	template <typename T = bool> T& mLock() {
		return *(T*)((uintptr_t)this + 0x2E8);
	}
	template <typename T = float> T& m_LockDist() {
		return *(T*)((uintptr_t)this + 0x2EC);
	}
	template <typename T = float> T& m_UnlockDist() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = int32_t> T& m_MaxShotsFired() {
		return *(T*)((uintptr_t)this + 0x2F4);
	}
	template <typename T = float> T& m_MinInaccuracy() {
		return *(T*)((uintptr_t)this + 0x2F8);
	}
	template <typename T = float> T& m_MaxInaccuracy() {
		return *(T*)((uintptr_t)this + 0x2FC);
	}
	template <typename T = float> T& m_DisperseBase() {
		return *(T*)((uintptr_t)this + 0x300);
	}
	template <typename T = float> T& m_DisperseModifierStanding() {
		return *(T*)((uintptr_t)this + 0x304);
	}
	template <typename T = float> T& m_DisperseModifierJumping() {
		return *(T*)((uintptr_t)this + 0x308);
	}
	template <typename T = float> T& m_DisperseModifierWalking() {
		return *(T*)((uintptr_t)this + 0x30C);
	}
	template <typename T = float> T& m_PunchAngleXDecreaseSpeed() {
		return *(T*)((uintptr_t)this + 0x310);
	}
	template <typename T = float> T& m_PunchAngleYDecreaseSpeed() {
		return *(T*)((uintptr_t)this + 0x314);
	}
	template <typename T = float> T& m_RecoilUpBase() {
		return *(T*)((uintptr_t)this + 0x318);
	}
	template <typename T = float> T& m_RecoilUpModifier() {
		return *(T*)((uintptr_t)this + 0x31C);
	}
	template <typename T = float> T& m_RecoilUpMax() {
		return *(T*)((uintptr_t)this + 0x320);
	}
	template <typename T = float> T& m_RecoilLateralBase() {
		return *(T*)((uintptr_t)this + 0x324);
	}
	template <typename T = float> T& m_RecoilLateralModifier() {
		return *(T*)((uintptr_t)this + 0x328);
	}
	template <typename T = float> T& m_RecoilLateralMax() {
		return *(T*)((uintptr_t)this + 0x32C);
	}
	template <typename T = float> T& m_RecoilScaleStanding() {
		return *(T*)((uintptr_t)this + 0x330);
	}
	template <typename T = float> T& m_RecoilScaleWalking() {
		return *(T*)((uintptr_t)this + 0x334);
	}
	template <typename T = float> T& m_RecoilScaleJumping() {
		return *(T*)((uintptr_t)this + 0x338);
	}
	template <typename T = float> T& m_ReachMaxDirectionChangePerc() {
		return *(T*)((uintptr_t)this + 0x33C);
	}
	template <typename T = float> T& m_UnreachMaxDirectionChangePerc() {
		return *(T*)((uintptr_t)this + 0x340);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHitPartRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcWeaponFireForPVE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CaleThickStartPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcBarrierThickness() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetThroughParams() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcWeaponFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTraceFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SingleLineCheckPhysics() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAccuracyHit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CaleDetailDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CaleDamageDecay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustedDecay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDistanceDamageRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDistanceDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetActualDamageValues() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDistanceAccuracy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPreAdjustAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FireAmmunition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SupportExtraBullet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateBulletLine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IncreaseFireShot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostFireAmmunition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RandomShotSpread() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRealSpreadModifier() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcShotSpreadSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcPunchAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAdjustedAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcPunch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcAdjustedAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAdjustedCameraAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAdjustedWeaponAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitBreatheTrembling() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBreatheTrembling() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPunchAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetChangeDt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLerpParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCrosshairSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeGetHitPunchAngleConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangePunchAngleByGetHit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsIntant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WeaponAttributeAdditionLoadOverCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInPort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WorldToPortPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasEnemyInPort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcAimedPortPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyFireParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLockTargetInAutoMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateBulletProjectile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcWeaponFires() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MaxShotsFired() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MinInaccuracy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MaxInaccuracy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisperseBase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisperseModifierStanding() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisperseModifierJumping() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisperseModifierWalking() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PunchAngleXDecreaseSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PunchAngleYDecreaseSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecoilUpBase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecoilUpModifier() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecoilUpMax() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecoilLateralBase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecoilLateralModifier() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecoilLateralMax() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecoilScaleStanding() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecoilScaleWalking() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecoilScaleJumping() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReachMaxDirectionChangePerc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnreachMaxDirectionChangePerc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponFireComponentInstant*, uintptr_t, bool))(Il2CppBase() + 0x23D0FF8))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23DB884))(this);
	}
	template <typename T = float> T get_DisperseRate() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23DB940))(this);
	}
	template <typename T = float> T get_InaccuracyModifierCrouching() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23DB948))(this);
	}
	template <typename T = float> T get_InaccuracyModifierProning() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23DBA54))(this);
	}
	template <typename T = float> T get_InaccuracyModifierSliding() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23DBB60))(this);
	}
	template <typename T = float> T get_PVEPenetrationDamageModifier() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23DBC6C))(this);
	}
	template <typename T = void> T set_PVEPenetrationDamageModifier(float value) {
		return ((T (*)(WeaponFireComponentInstant*, float))(Il2CppBase() + 0x23DBC74))(this, value);
	}
	template <typename T = int32_t> T get_MaxThroughWall() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23DBC7C))(this);
	}
	template <typename T = void> T set_MaxThroughWall(int32_t value) {
		return ((T (*)(WeaponFireComponentInstant*, int32_t))(Il2CppBase() + 0x23DBE34))(this, value);
	}
	template <typename T = Il2CppVector2> T get_PunchAngle() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23DBE3C))(this);
	}
	template <typename T = Il2CppVector2> T get_ShotSpread() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23DBE50))(this);
	}
	template <typename T = Il2CppVector2> T get_BreatheTremblingRange() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23DBE64))(this);
	}
	template <typename T = uintptr_t> T get_BulletType() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23DBFBC))(this);
	}
	template <typename T = bool> T get_IsAiming() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23DBFC4))(this);
	}
	template <typename T = bool> T get_IsPlayAiming() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23DC0AC))(this);
	}
	template <typename T = bool> T get_IsAimingProcess() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23DC194))(this);
	}
	template <typename T = bool> T get_IsDowningProcess() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23DC27C))(this);
	}
	template <typename T = float> T get_DecayScale() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23DC364))(this);
	}
	template <typename T = void> T set_DecayScale(float value) {
		return ((T (*)(WeaponFireComponentInstant*, float))(Il2CppBase() + 0x23DC36C))(this, value);
	}
	template <typename T = float> T GetHitPartRate(uintptr_t group, bool forPVE) {
		return ((T (*)(WeaponFireComponentInstant*, uintptr_t, bool))(Il2CppBase() + 0x23DC374))(this, group, forPVE);
	}
	template <typename T = bool> T CalcWeaponFireForPVE(Il2CppVector3 startPos, Il2CppVector3 dir, uintptr_t impactList) {
		return ((T (*)(WeaponFireComponentInstant*, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x23DC5E0))(this, startPos, dir, impactList);
	}
	template <typename T = void> T CaleThickStartPos(Il2CppVector3 hitPoint, Il2CppVector3 dir, uintptr_t col, uintptr_t* startPos) {
		return ((T (*)(WeaponFireComponentInstant*, Il2CppVector3, Il2CppVector3, uintptr_t, uintptr_t*))(Il2CppBase() + 0x23DD2E4))(this, hitPoint, dir, col, startPos);
	}
	template <typename T = float> T CalcBarrierThickness(Il2CppVector3 hitPoint, Il2CppVector3 dir, uintptr_t col, uintptr_t* outPoint) {
		return ((T (*)(WeaponFireComponentInstant*, Il2CppVector3, Il2CppVector3, uintptr_t, uintptr_t*))(Il2CppBase() + 0x23DD448))(this, hitPoint, dir, col, outPoint);
	}
	template <typename T = int32_t> T get_ThroughWallNum() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23DD840))(this);
	}
	template <typename T = int32_t> T get_ThroughPlayerNum() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23DD848))(this);
	}
	template <typename T = float> T get_DamageRate() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23DD850))(this);
	}
	template <typename T = float> T get_BulletFlyDistance() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23DD858))(this);
	}
	template <typename T = bool> T get_IsDecay() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23DD860))(this);
	}
	template <typename T = void> T SetThroughParams(int32_t throughWallNum, int32_t throughPlayerNum, float damageRate, float realDistance) {
		return ((T (*)(WeaponFireComponentInstant*, int32_t, int32_t, float, float))(Il2CppBase() + 0x23DD868))(this, throughWallNum, throughPlayerNum, damageRate, realDistance);
	}
	template <typename T = bool> T CalcWeaponFire(Il2CppVector3 startPos, Il2CppVector3 dir, uintptr_t impactList, float checkRange, bool resetThroughParams) {
		return ((T (*)(WeaponFireComponentInstant*, Il2CppVector3, Il2CppVector3, uintptr_t, float, bool))(Il2CppBase() + 0x23CC7D8))(this, startPos, dir, impactList, checkRange, resetThroughParams);
	}
	template <typename T = int32_t> T GetTraceFlag() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23DD978))(this);
	}
	template <typename T = bool> T SingleLineCheckPhysics(uintptr_t hitType, uintptr_t hitTarget, Il2CppVector3 startPos, Il2CppVector3 dir, uintptr_t impactInfo) {
		return ((T (*)(WeaponFireComponentInstant*, uintptr_t, uintptr_t, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x23DDAD4))(this, hitType, hitTarget, startPos, dir, impactInfo);
	}
	template <typename T = bool> T IsAccuracyHit(int32_t playerCount, float realDistance) {
		return ((T (*)(WeaponFireComponentInstant*, int32_t, float))(Il2CppBase() + 0x23DE054))(this, playerCount, realDistance);
	}
	template <typename T = uintptr_t> T CaleDetailDamage(Il2CppVector3 startPos, uintptr_t range, Il2CppVector3 dir, uintptr_t realHitInfo, Il2CppList<uintptr_t>* impactList) {
		return ((T (*)(WeaponFireComponentInstant*, Il2CppVector3, uintptr_t, Il2CppVector3, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x23DE454))(this, startPos, range, dir, realHitInfo, impactList);
	}
	template <typename T = bool> T CaleDamageDecay(uintptr_t hitType, Il2CppVector3 hitPoint, Il2CppVector3 dir, uintptr_t impactInfo) {
		return ((T (*)(WeaponFireComponentInstant*, uintptr_t, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x23DF688))(this, hitType, hitPoint, dir, impactInfo);
	}
	template <typename T = float> T AdjustedDecay(float initDecay) {
		return ((T (*)(WeaponFireComponentInstant*, float))(Il2CppBase() + 0x23DD154))(this, initDecay);
	}
	template <typename T = float> T GetDistanceDamageRate(float dist) {
		return ((T (*)(WeaponFireComponentInstant*, float))(Il2CppBase() + 0x23DFBB0))(this, dist);
	}
	template <typename T = float> T GetDistanceDamage(float dist) {
		return ((T (*)(WeaponFireComponentInstant*, float))(Il2CppBase() + 0x23CCDCC))(this, dist);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetActualDamageValues() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23DFCC8))(this);
	}
	template <typename T = float> T GetDistanceAccuracy(float dist) {
		return ((T (*)(WeaponFireComponentInstant*, float))(Il2CppBase() + 0x23DE260))(this, dist);
	}
	template <typename T = void> T EndFire() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23DFE5C))(this);
	}
	template <typename T = Il2CppQuaternion> T GetPreAdjustAim() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23DFF48))(this);
	}
	template <typename T = void> T FireAmmunition() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23E00B4))(this);
	}
	template <typename T = bool> T SupportExtraBullet() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23E1418))(this);
	}
	template <typename T = void> T CreateBulletLine(Il2CppVector3 startPos, Il2CppVector3 dir) {
		return ((T (*)(WeaponFireComponentInstant*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x23E0784))(this, startPos, dir);
	}
	template <typename T = void> T IncreaseFireShot() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23E05D0))(this);
	}
	template <typename T = void> T PostFireAmmunition() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23E1C5C))(this);
	}
	template <typename T = void> T RandomShotSpread() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23E1610))(this);
	}
	template <typename T = float> T GetRealSpreadModifier() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23E1DB8))(this);
	}
	template <typename T = float> T CalcShotSpreadSize() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23E27B8))(this);
	}
	template <typename T = void> T CalcPunchAngle() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23E1724))(this);
	}
	template <typename T = Il2CppQuaternion> T GetAdjustedAim(Il2CppQuaternion initAim) {
		return ((T (*)(WeaponFireComponentInstant*, Il2CppQuaternion))(Il2CppBase() + 0x23E4E34))(this, initAim);
	}
	template <typename T = Il2CppVector2> T CalcPunch() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23E14E8))(this);
	}
	template <typename T = Il2CppQuaternion> T CalcAdjustedAim(Il2CppQuaternion initAim, float sRate, float pRate, bool includeShotSpread, bool isCameraAim, bool isWeaponRot) {
		return ((T (*)(WeaponFireComponentInstant*, Il2CppQuaternion, float, float, bool, bool, bool))(Il2CppBase() + 0x23E4FFC))(this, initAim, sRate, pRate, includeShotSpread, isCameraAim, isWeaponRot);
	}
	template <typename T = float> T get_ShotSpreadInterval() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23E5620))(this);
	}
	template <typename T = Il2CppQuaternion> T GetAdjustedCameraAim(Il2CppQuaternion initAim) {
		return ((T (*)(WeaponFireComponentInstant*, Il2CppQuaternion))(Il2CppBase() + 0x23E5644))(this, initAim);
	}
	template <typename T = Il2CppQuaternion> T GetAdjustedWeaponAim(Il2CppQuaternion initAim) {
		return ((T (*)(WeaponFireComponentInstant*, Il2CppQuaternion))(Il2CppBase() + 0x23E580C))(this, initAim);
	}
	template <typename T = void> T InitBreatheTrembling() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23E5AA4))(this);
	}
	template <typename T = void> T UpdateBreatheTrembling(float dt) {
		return ((T (*)(WeaponFireComponentInstant*, float))(Il2CppBase() + 0x23E5C8C))(this, dt);
	}
	template <typename T = Il2CppVector2> T GetPunchAngle() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23E5FEC))(this);
	}
	template <typename T = float> T GetChangeDt(float dt) {
		return ((T (*)(WeaponFireComponentInstant*, float))(Il2CppBase() + 0x23E60CC))(this, dt);
	}
	template <typename T = void> T UpdateLerpParam(float dt) {
		return ((T (*)(WeaponFireComponentInstant*, float))(Il2CppBase() + 0x23E61EC))(this, dt);
	}
	template <typename T = void> T UpdateCrosshairSize(float DeltaTime) {
		return ((T (*)(WeaponFireComponentInstant*, float))(Il2CppBase() + 0x23E69E4))(this, DeltaTime);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponFireComponentInstant*, float))(Il2CppBase() + 0x23CB994))(this, DeltaTime);
	}
	template <typename T = void> T ChangeGetHitPunchAngleConfig(float GetHitPunchAngleX, float GetHitPunchAngleXDecreseSpeed) {
		return ((T (*)(WeaponFireComponentInstant*, float, float))(Il2CppBase() + 0x23E6FD8))(this, GetHitPunchAngleX, GetHitPunchAngleXDecreseSpeed);
	}
	template <typename T = void> T ChangePunchAngleByGetHit() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23E7244))(this);
	}
	template <typename T = bool> T IsIntant() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23E74F0))(this);
	}
	template <typename T = void> T WeaponAttributeAdditionLoadOverCallback() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23E75C0))(this);
	}
	template <typename T = bool> T IsInPort(Il2CppVector3 pos) {
		return ((T (*)(WeaponFireComponentInstant*, Il2CppVector3))(Il2CppBase() + 0x23E7A68))(this, pos);
	}
	template <typename T = Il2CppVector3> T WorldToPortPos(Il2CppVector3 pos) {
		return ((T (*)(WeaponFireComponentInstant*, Il2CppVector3))(Il2CppBase() + 0x23E7C08))(this, pos);
	}
	template <typename T = bool> T HasEnemyInPort(bool traceAssist) {
		return ((T (*)(WeaponFireComponentInstant*, bool))(Il2CppBase() + 0x23E7EA4))(this, traceAssist);
	}
	template <typename T = bool> T CheckTarget(uintptr_t target, Il2CppVector3 startPos, Il2CppVector3 rayDir, int32_t flag, float range) {
		return ((T (*)(WeaponFireComponentInstant*, uintptr_t, Il2CppVector3, Il2CppVector3, int32_t, float))(Il2CppBase() + 0x23E8724))(this, target, startPos, rayDir, flag, range);
	}
	template <typename T = bool> T CalcAimedPortPos(uintptr_t target, uintptr_t portPos, bool traceAssist) {
		return ((T (*)(WeaponFireComponentInstant*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x23E8B7C))(this, target, portPos, traceAssist);
	}
	template <typename T = void> T LoadProperties(Il2CppString* path) {
		return ((T (*)(WeaponFireComponentInstant*, Il2CppString*))(Il2CppBase() + 0x23CB458))(this, path);
	}
	template <typename T = void> T ApplyFireParam(bool aimedFire) {
		return ((T (*)(WeaponFireComponentInstant*, bool))(Il2CppBase() + 0x23E90F4))(this, aimedFire);
	}
	template <typename T = bool> T IsLockTargetInAutoMode(uintptr_t target) {
		return ((T (*)(WeaponFireComponentInstant*, uintptr_t))(Il2CppBase() + 0x23E9380))(this, target);
	}
	template <typename T = void> T CreateBulletProjectile(Il2CppVector3 startPos, Il2CppVector3 dir, uintptr_t weaponImpact, int32_t itemID, int32_t flySmokeAssetID) {
		return ((T (*)(WeaponFireComponentInstant*, Il2CppVector3, Il2CppVector3, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x23E9618))(this, startPos, dir, weaponImpact, itemID, flySmokeAssetID);
	}
	template <typename T = bool> T CalcWeaponFires(Il2CppVector3 startPos, Il2CppVector3 dir, uintptr_t impactList, float checkRange, bool resetThroughParams) {
		return ((T (*)(WeaponFireComponentInstant*, Il2CppVector3, Il2CppVector3, uintptr_t, float, bool))(Il2CppBase() + 0x23E9A0C))(this, startPos, dir, impactList, checkRange, resetThroughParams);
	}
	template <typename T = uintptr_t> T get_ConfigData_Hip() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23E9B60))(this);
	}
	template <typename T = uintptr_t> T get_ConfigData() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23E9C24))(this);
	}
	template <typename T = int32_t> T MaxShotsFired() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23E2994))(this);
	}
	template <typename T = float> T MinInaccuracy() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23E2A64))(this);
	}
	template <typename T = float> T MaxInaccuracy() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23E9CE8))(this);
	}
	template <typename T = float> T DisperseBase() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23E2F34))(this);
	}
	template <typename T = float> T DisperseModifierStanding() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23E2528))(this);
	}
	template <typename T = float> T DisperseModifierJumping() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23E2008))(this);
	}
	template <typename T = float> T DisperseModifierWalking() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23E2298))(this);
	}
	template <typename T = float> T PunchAngleXDecreaseSpeed() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23E67DC))(this);
	}
	template <typename T = float> T PunchAngleYDecreaseSpeed() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23EA1B8))(this);
	}
	template <typename T = float> T RecoilUpBase() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23E31C4))(this);
	}
	template <typename T = float> T RecoilUpModifier() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23E3458))(this);
	}
	template <typename T = float> T RecoilUpMax() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23E3C14))(this);
	}
	template <typename T = float> T RecoilLateralBase() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23E36EC))(this);
	}
	template <typename T = float> T RecoilLateralModifier() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23E3980))(this);
	}
	template <typename T = float> T RecoilLateralMax() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23E3EAC))(this);
	}
	template <typename T = float> T RecoilScaleStanding() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23E4674))(this);
	}
	template <typename T = float> T RecoilScaleWalking() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23E43DC))(this);
	}
	template <typename T = float> T RecoilScaleJumping() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23E4144))(this);
	}
	template <typename T = float> T ReachMaxDirectionChangePerc() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23E4BA0))(this);
	}
	template <typename T = float> T UnreachMaxDirectionChangePerc() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23E490C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CopyProperties(uintptr_t P0, bool P1) {
		return ((T (*)(WeaponFireComponentInstant*, uintptr_t, bool))(Il2CppBase() + 0x23EA3C4))(this, P0, P1);
	}
	template <typename T = bool> T xLuaBaseProxy_SingleLineCheckPhysics(uintptr_t P0, uintptr_t P1, Il2CppVector3 P2, Il2CppVector3 P3, uintptr_t P4) {
		return ((T (*)(WeaponFireComponentInstant*, uintptr_t, uintptr_t, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x23EA3CC))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T xLuaBaseProxy_EndFire() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23EA418))(this);
	}
	template <typename T = void> T xLuaBaseProxy_FireAmmunition() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23EA420))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_SupportExtraBullet() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23EA428))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PostFireAmmunition() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23EA430))(this);
	}
	template <typename T = Il2CppQuaternion> T xLuaBaseProxy_GetAdjustedAim(Il2CppQuaternion P0) {
		return ((T (*)(WeaponFireComponentInstant*, Il2CppQuaternion))(Il2CppBase() + 0x23EA438))(this, P0);
	}
	template <typename T = Il2CppQuaternion> T xLuaBaseProxy_GetAdjustedCameraAim(Il2CppQuaternion P0) {
		return ((T (*)(WeaponFireComponentInstant*, Il2CppQuaternion))(Il2CppBase() + 0x23EA464))(this, P0);
	}
	template <typename T = Il2CppQuaternion> T xLuaBaseProxy_GetAdjustedWeaponAim(Il2CppQuaternion P0) {
		return ((T (*)(WeaponFireComponentInstant*, Il2CppQuaternion))(Il2CppBase() + 0x23EA490))(this, P0);
	}
	template <typename T = Il2CppVector2> T xLuaBaseProxy_GetPunchAngle() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23EA4BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponFireComponentInstant*, float))(Il2CppBase() + 0x23EA4D0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ChangeGetHitPunchAngleConfig(float P0, float P1) {
		return ((T (*)(WeaponFireComponentInstant*, float, float))(Il2CppBase() + 0x23EA4D8))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_ChangePunchAngleByGetHit() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23EA4E0))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsIntant() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23EA4E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WeaponAttributeAdditionLoadOverCallback() {
		return ((T (*)(WeaponFireComponentInstant*))(Il2CppBase() + 0x23EA4F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_LoadProperties(Il2CppString* P0) {
		return ((T (*)(WeaponFireComponentInstant*, Il2CppString*))(Il2CppBase() + 0x23EA4F8))(this, P0);
	}

};

}
