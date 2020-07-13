#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponFireComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponFireComponent"));
	}

	template <typename T = uintptr_t> T& m_WeaponEntity() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_Weapon() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_Owner() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_AdditionHelper() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_WeaponRange() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_AIShootScope() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_BOT_FireRange() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_FireInterval() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_FireIntervalOfExtraBullet() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& m_IsFireExtraBullet() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& m_IsBurstAutoFire() {
		return *(T*)((uintptr_t)this + 0x2D);
	}
	template <typename T = int32_t> T& m_FireTimesInGroup() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& m_FireTimesInGropClient() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& m_FireGroupEndAnimTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_FireGroupEndTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> static T& ConsumeAmmoCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& StartBurstFireInGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = float> T& m_AimingFireAnimClipTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& m_ClipAmmoCount() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& m_CarriedAmmoCount() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& m_ShotCost() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& m_PVEClipAmmoCount() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& m_PVECarriedAmmoCount() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& m_PVEMaxAmmoCount() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& m_AmmoCount() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& m_MaxAmmoCount() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& m_FireBoltTime() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& m_DamageType() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& m_ExtraDamageType() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& m_Damage() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& m_PVEDamage() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& m_MinDamageValue() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& m_PVEMinDamageValue() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppVector2> T& m_PortSizeToScreen() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& m_PVEDamageRate() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& m_AimedChangeClipTime() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = float> T& m_ChangeClipTime() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& m_ChangeClipMultiAnims() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = float> T& m_ChangeClipStartTime() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> T& m_ChangeClipLoopTime() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = float> T& m_ChangeClipEndTime() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = float> T& m_ChangeClipStart02Time() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = float> T& m_ChangeClipLoopPreTime() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& m_AllowQuickChangeClip() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = float> T& m_QuickChangeClipTime() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& m_HasQuickAnimation() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& ChangeClipSate() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> T& m_ChangeClipAnimRate() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = bool> T& m_UseSSAnimator() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = float> T& m_PutDownTime() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = float> T& m_EquipTime() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = float> T& m_UnequipTime() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> T& m_EquipAnimClipTime() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> T& m_UnequipAnimClipTime() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = float> T& m_SpecialEquipAnimRate() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = float> T& m_EquipAddition() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = Il2CppString*> T& m_CrosshairTexName() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = bool> T& m_IsSingleShot() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = bool> T& IsSingleShotConst() {
		return *(T*)((uintptr_t)this + 0xE5);
	}
	template <typename T = float> T& m_SingleShotStopFireTime() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = float> T& m_ADSModeSingleShotStopFireTime() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = bool> T& m_ForcePlaySingleFireAnim() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = float> T& m_InitSpeed() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = float> T& m_AccelSpeed() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = float> T& m_MaxSpeed() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = float> T& m_GravityScale() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = int32_t> T& m_ProjFlightAssetID() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = int32_t> T& m_ProjFlightAssetID3P() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = bool> T& m_NonInstant() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = int32_t> T& m_ExtraDamageScreenEffectID() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = bool> T& m_UseInWater() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = float> T& m_SpeedDecayInWater() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = float> T& m_WaterBuoyancy() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = bool> T& m_IsInWater() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = float> T& m_LastCheckTime() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = Il2CppString*> T& m_CrossHairCircleName() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = float> T& m_CrossHairCircleInitSize() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = bool> T& m_CrosshairEnabled() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = float> T& m_GetHitPunchAngleX() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = float> T& m_GetHitPunchAngleXDecreaseSpeed() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = float> T& m_GetHitPunchAngleXInUse() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = float> T& m_GetHitPunchAngleXDecreaseSpeedInUse() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = int32_t> T& DefaultClipAmmoCount() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = int32_t> T& DefaultCarriedAmmoCount() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = int32_t> T& DefaultMaxAmmoCount() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = int32_t> T& DefaultPVEClipAmmoCount() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = int32_t> T& DefaultPVECarriedAmmoCount() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = int32_t> T& DefaultPVEMaxAmmoCount() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = unsigned char> T& m_FireMode() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = uintptr_t> T& m_ComponentData() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& m_HipComponentData() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> static T& s_FireComponentDataDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_BRFireModes() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& NewFireModes() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = uintptr_t> T& mCurBrFireType() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = float> T& fireInterval() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = float> static T& m_StartTracePosOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& m_AllHitInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAdditionHelperStaticValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRealFireInterval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRealFireGroupInterval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFireInterval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InBurstFireGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InFireGroupEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetBurstData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBurstFireInGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MustCompleteBurst() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBulletInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDamageForGameMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDamageForGameMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMinDamageValueForGameMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGravityScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSpeedDecay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UseInWater() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckInWater() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateByName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Create() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOwner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordDefault() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ModifyPropertiesForPVE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ModifyPropertiesForBR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetActualDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFireMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FireAmmunition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostFireAmmunition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ServerStartFire_Controllable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ServerStartFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ServerStopFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAdjustedAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAdjustedCameraAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAdjustedWeaponAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeGetHitPunchAngleConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangePunchAngleByGetHit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AmmoCanFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddAmmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFullAmmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FullAmmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasAmmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddCarriedAmmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddCurrentAmmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ModifyAmmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetReAmmoCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeClipAmmoCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshClipAmmoCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsIntant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMelee() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsQuickKnife() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsProjectile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPlacing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WeaponAttributeAdditionLoadOverCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFireComponentData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreBeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreEndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBrFireModes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSpectatingSingleShot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitBrFireMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeFireMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNonInstant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcFireAnimationSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldAdjustFireAimRatation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SupportExtraBullet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAdjustedFireAimRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetAdjustedFireAimRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Get3PFireAimTargetPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPunchAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAdditionByBase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SingleLineCheckPhysics() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponFireComponent*, uintptr_t, bool))(Il2CppBase() + 0x2EBAF4C))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBB2BC))(this);
	}
	template <typename T = uintptr_t> T get_WeaponEntity() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBB378))(this);
	}
	template <typename T = float> T get_WeaponRange() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EABE00))(this);
	}
	template <typename T = float> T get_BOT_FireRangeFor() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBB380))(this);
	}
	template <typename T = bool> T get_IsFireExtraBullet() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBB388))(this);
	}
	template <typename T = void> T set_IsFireExtraBullet(bool value) {
		return ((T (*)(WeaponFireComponent*, bool))(Il2CppBase() + 0x2EBB390))(this, value);
	}
	template <typename T = void> T ResetAdditionHelperStaticValue() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBB398))(this);
	}
	template <typename T = float> T GetRealFireInterval(float fireInterval) {
		return ((T (*)(WeaponFireComponent*, float))(Il2CppBase() + 0x2EBB474))(this, fireInterval);
	}
	template <typename T = float> T GetRealFireGroupInterval(float fireInterval) {
		return ((T (*)(WeaponFireComponent*, float))(Il2CppBase() + 0x2EBB684))(this, fireInterval);
	}
	template <typename T = float> T get_FireInterval() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBB844))(this);
	}
	template <typename T = void> T set_FireInterval(float value) {
		return ((T (*)(WeaponFireComponent*, float))(Il2CppBase() + 0x2EBB84C))(this, value);
	}
	template <typename T = float> T GetFireInterval(float beginFireTime, float stopFireTime) {
		return ((T (*)(WeaponFireComponent*, float, float))(Il2CppBase() + 0x2EBB854))(this, beginFireTime, stopFireTime);
	}
	template <typename T = bool> T get_IsBurstAutoFire() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBBAC4))(this);
	}
	template <typename T = int32_t> T get_FireTimesInGropClient() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBBA90))(this);
	}
	template <typename T = float> T get_FireGroupEndAnimTime() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBBACC))(this);
	}
	template <typename T = float> T get_FireGroupEndTime() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBBA98))(this);
	}
	template <typename T = bool> T get_IsAmmoGroupMo() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBBAD4))(this);
	}
	template <typename T = bool> T InBurstFireGroup() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBBBF4))(this);
	}
	template <typename T = bool> T InFireGroupEnd() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBBD78))(this);
	}
	template <typename T = void> T ResetBurstData() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBBF78))(this);
	}
	template <typename T = void> T SetBurstFireInGroup() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBC0A0))(this);
	}
	template <typename T = bool> T MustCompleteBurst() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBC280))(this);
	}
	template <typename T = int32_t> T get_BaseClipAmmoCount() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBC4D8))(this);
	}
	template <typename T = int32_t> T get_ClipAmmoCount() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EAAC74))(this);
	}
	template <typename T = void> T set_ClipAmmoCount(int32_t value) {
		return ((T (*)(WeaponFireComponent*, int32_t))(Il2CppBase() + 0x2EBC658))(this, value);
	}
	template <typename T = int32_t> T get_CarriedAmmoCount() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBC660))(this);
	}
	template <typename T = void> T set_CarriedAmmoCount(int32_t value) {
		return ((T (*)(WeaponFireComponent*, int32_t))(Il2CppBase() + 0x2EBC668))(this, value);
	}
	template <typename T = int32_t> T get_ShotCost() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBC670))(this);
	}
	template <typename T = int32_t> T get_PVEClipAmmoCount() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBC678))(this);
	}
	template <typename T = int32_t> T get_PVECarriedAmmoCount() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBC680))(this);
	}
	template <typename T = int32_t> T get_PVEMaxAmmoCount() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBC688))(this);
	}
	template <typename T = void> T UpdateBulletInfo() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBC690))(this);
	}
	template <typename T = int32_t> T get_AmmoCount() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBBD70))(this);
	}
	template <typename T = void> T set_AmmoCount(int32_t value) {
		return ((T (*)(WeaponFireComponent*, int32_t))(Il2CppBase() + 0x2EBC8BC))(this, value);
	}
	template <typename T = int32_t> T get_MaxAmmoCount() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBC8C4))(this);
	}
	template <typename T = void> T set_MaxAmmoCount(int32_t value) {
		return ((T (*)(WeaponFireComponent*, int32_t))(Il2CppBase() + 0x2EBCAD4))(this, value);
	}
	template <typename T = float> T get_FireBoltTime() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBCADC))(this);
	}
	template <typename T = uintptr_t> T get_DamageType() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBCBF8))(this);
	}
	template <typename T = float> T GetDamageForGameMode() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBCC00))(this);
	}
	template <typename T = void> T SetDamageForGameMode(float value) {
		return ((T (*)(WeaponFireComponent*, float))(Il2CppBase() + 0x2EBCD9C))(this, value);
	}
	template <typename T = Il2CppVector2> T get_PortSizeToScreen() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBCF40))(this);
	}
	template <typename T = float> T GetMinDamageValueForGameMode() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBCF54))(this);
	}
	template <typename T = float> T get_BaseDamage() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EB4040))(this);
	}
	template <typename T = void> T set_BaseDamage(float value) {
		return ((T (*)(WeaponFireComponent*, float))(Il2CppBase() + 0x2EBD0F0))(this, value);
	}
	template <typename T = float> T get_Damage() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBD0F4))(this);
	}
	template <typename T = float> T get_PVEDamageRate() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBD0F8))(this);
	}
	template <typename T = float> T get_AimedChangeClipTime() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBD100))(this);
	}
	template <typename T = float> T get_ChangeClipTime() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBD108))(this);
	}
	template <typename T = float> T get_ChangeClipStartTime() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBD13C))(this);
	}
	template <typename T = float> T get_ChangeClipLoopTime() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBD144))(this);
	}
	template <typename T = float> T get_ChangeClipEndTime() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBD14C))(this);
	}
	template <typename T = float> T get_ChangeClipStart02Time() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBD154))(this);
	}
	template <typename T = float> T get_ChangeClipLoopPreTime() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBD15C))(this);
	}
	template <typename T = bool> T get_AllowQuickChangeClip() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBD164))(this);
	}
	template <typename T = float> T get_QuickChangeClipTime() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBD16C))(this);
	}
	template <typename T = bool> T get_HasQuickAnimation() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBD174))(this);
	}
	template <typename T = bool> T get_UseSSAnimator() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBD17C))(this);
	}
	template <typename T = float> T get_PutDownTime() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBD184))(this);
	}
	template <typename T = float> T get_EquipTime() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBD18C))(this);
	}
	template <typename T = float> T get_UnequipTime() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EA5D54))(this);
	}
	template <typename T = float> T get_EquipAnimClipTime() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBD194))(this);
	}
	template <typename T = float> T get_UnequipAnimClipTime() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBD19C))(this);
	}
	template <typename T = float> T get_SpecialEquipAnimRate() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBD1A4))(this);
	}
	template <typename T = void> T set_SpecialEquipAnimRate(float value) {
		return ((T (*)(WeaponFireComponent*, float))(Il2CppBase() + 0x2EBD1AC))(this, value);
	}
	template <typename T = float> T get_EquipAddition() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBD1B4))(this);
	}
	template <typename T = Il2CppString*> T get_CrosshairTexName() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBD1BC))(this);
	}
	template <typename T = bool> T get_IsSingleShot() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2E98450))(this);
	}
	template <typename T = float> T get_SingleShotStopFireTime() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBD1C4))(this);
	}
	template <typename T = float> T get_ADSModeSingleShotStopFireTime() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBD1CC))(this);
	}
	template <typename T = bool> T get_ForcePlaySingleFireAnim() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2E984D8))(this);
	}
	template <typename T = float> T get_InitSpeed() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBD1D4))(this);
	}
	template <typename T = float> T GetGravityScale(int32_t otherFactor) {
		return ((T (*)(WeaponFireComponent*, int32_t))(Il2CppBase() + 0x2EBD23C))(this, otherFactor);
	}
	template <typename T = float> T GetSpeedDecay(int32_t otherFactor) {
		return ((T (*)(WeaponFireComponent*, int32_t))(Il2CppBase() + 0x2EBD32C))(this, otherFactor);
	}
	template <typename T = float> T get_SpeedDecayInWater() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBD410))(this);
	}
	template <typename T = float> T get_WaterBuoyancy() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBD324))(this);
	}
	template <typename T = bool> T UseInWater() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBD418))(this);
	}
	template <typename T = bool> T CheckInWater(Il2CppVector3 position, bool forceCheck, float checkInterval) {
		return ((T (*)(WeaponFireComponent*, Il2CppVector3, bool, float))(Il2CppBase() + 0x2EBD4F0))(this, position, forceCheck, checkInterval);
	}
	template <typename T = Il2CppString*> T get_CrossHairCircleName() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBD6B0))(this);
	}
	template <typename T = float> T get_CrossHairCircleInitSize() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBD6B8))(this);
	}
	template <typename T = bool> T get_CrosshairEnabled() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBD6C0))(this);
	}
	template <typename T = unsigned char> T get_FireMode() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBD6C8))(this);
	}
	template <typename T = uintptr_t> T get_ComponentData() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EA9BA0))(this);
	}
	template <typename T = void> T set_ComponentData(uintptr_t value) {
		return ((T (*)(WeaponFireComponent*, uintptr_t))(Il2CppBase() + 0x2EBD6D0))(this, value);
	}
	template <typename T = uintptr_t> T get_HipComponentData() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBD6D8))(this);
	}
	template <typename T = void> T set_HipComponentData(uintptr_t value) {
		return ((T (*)(WeaponFireComponent*, uintptr_t))(Il2CppBase() + 0x2EBD6E0))(this, value);
	}
	template <typename T = uintptr_t> static T CreateByName(Il2CppString* typeName, Il2CppString* iniPath, uintptr_t owner, uintptr_t pawnOwner) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2EA1B54))(0, typeName, iniPath, owner, pawnOwner);
	}
	template <typename T = uintptr_t> static T Create(uintptr_t type, Il2CppString* iniPath, uintptr_t owner, uintptr_t pawnOwner) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2EBD6E8))(0, type, iniPath, owner, pawnOwner);
	}
	template <typename T = void> T SetOwner(uintptr_t owner, uintptr_t pawnOwner) {
		return ((T (*)(WeaponFireComponent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2EBDB30))(this, owner, pawnOwner);
	}
	template <typename T = void> T RecordDefault() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBDC7C))(this);
	}
	template <typename T = void> T ModifyPropertiesForPVE() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBDD80))(this);
	}
	template <typename T = void> T ModifyPropertiesForBR() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBDE98))(this);
	}
	template <typename T = float> T GetActualDamage() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBDF6C))(this);
	}
	template <typename T = void> T SetFireMode(unsigned char inFireMode) {
		return ((T (*)(WeaponFireComponent*, unsigned char))(Il2CppBase() + 0x2EBE190))(this, inFireMode);
	}
	template <typename T = void> T InitData() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBE314))(this);
	}
	template <typename T = void> T LoadProperties(Il2CppString* path) {
		return ((T (*)(WeaponFireComponent*, Il2CppString*))(Il2CppBase() + 0x2EBE3DC))(this, path);
	}
	template <typename T = void> T FireAmmunition() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBE570))(this);
	}
	template <typename T = void> T PostFireAmmunition() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBE638))(this);
	}
	template <typename T = void> T StartFire() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBE700))(this);
	}
	template <typename T = void> T ServerStartFire_Controllable(Il2CppVector3 DstPos) {
		return ((T (*)(WeaponFireComponent*, Il2CppVector3))(Il2CppBase() + 0x2EBE7C8))(this, DstPos);
	}
	template <typename T = void> T ServerStartFire() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBE984))(this);
	}
	template <typename T = void> T ServerStopFire(int32_t costAmmo) {
		return ((T (*)(WeaponFireComponent*, int32_t))(Il2CppBase() + 0x2EBEB78))(this, costAmmo);
	}
	template <typename T = void> T EndFire() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBED80))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponFireComponent*, float))(Il2CppBase() + 0x2EBEE48))(this, DeltaTime);
	}
	template <typename T = Il2CppQuaternion> T GetAdjustedAim(Il2CppQuaternion initialAim) {
		return ((T (*)(WeaponFireComponent*, Il2CppQuaternion))(Il2CppBase() + 0x2EBEF18))(this, initialAim);
	}
	template <typename T = Il2CppQuaternion> T GetAdjustedCameraAim(Il2CppQuaternion initialAim) {
		return ((T (*)(WeaponFireComponent*, Il2CppQuaternion))(Il2CppBase() + 0x2EBF02C))(this, initialAim);
	}
	template <typename T = Il2CppQuaternion> T GetAdjustedWeaponAim(Il2CppQuaternion initialAim) {
		return ((T (*)(WeaponFireComponent*, Il2CppQuaternion))(Il2CppBase() + 0x2EBF140))(this, initialAim);
	}
	template <typename T = void> T ChangeGetHitPunchAngleConfig(float GetHitPunchAngleX, float GetHitPunchAngleXDecreseSpeed) {
		return ((T (*)(WeaponFireComponent*, float, float))(Il2CppBase() + 0x2EBF270))(this, GetHitPunchAngleX, GetHitPunchAngleXDecreseSpeed);
	}
	template <typename T = void> T ChangePunchAngleByGetHit() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBF478))(this);
	}
	template <typename T = bool> T AmmoCanFire() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBF540))(this);
	}
	template <typename T = void> T AddAmmo(int32_t ammoCount) {
		return ((T (*)(WeaponFireComponent*, int32_t))(Il2CppBase() + 0x2EBF620))(this, ammoCount);
	}
	template <typename T = bool> T IsFullAmmo() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBF718))(this);
	}
	template <typename T = void> T FullAmmo() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBF814))(this);
	}
	template <typename T = bool> T HasAmmo() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBFAC8))(this);
	}
	template <typename T = void> T AddCarriedAmmo(int32_t addCount) {
		return ((T (*)(WeaponFireComponent*, int32_t))(Il2CppBase() + 0x2EBFCC4))(this, addCount);
	}
	template <typename T = void> T AddCurrentAmmo(int32_t addCount) {
		return ((T (*)(WeaponFireComponent*, int32_t))(Il2CppBase() + 0x2EBFDD0))(this, addCount);
	}
	template <typename T = void> T ModifyAmmo(int32_t inCurrentAmmo, int32_t inCurrentCarriedAmmo, bool isDiff, int32_t clibNumBase) {
		return ((T (*)(WeaponFireComponent*, int32_t, int32_t, bool, int32_t))(Il2CppBase() + 0x2EC0040))(this, inCurrentAmmo, inCurrentCarriedAmmo, isDiff, clibNumBase);
	}
	template <typename T = bool> T get_infiniteCarriedAmmo() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EBFBB0))(this);
	}
	template <typename T = int32_t> T GetReAmmoCount() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EC02F4))(this);
	}
	template <typename T = void> T ChangeClipAmmoCount(int32_t addAmmoCount) {
		return ((T (*)(WeaponFireComponent*, int32_t))(Il2CppBase() + 0x2EC0438))(this, addAmmoCount);
	}
	template <typename T = void> T RefreshClipAmmoCount() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EC06E4))(this);
	}
	template <typename T = bool> T IsIntant() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EC07D8))(this);
	}
	template <typename T = bool> T IsMelee() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EC08A8))(this);
	}
	template <typename T = bool> T IsQuickKnife() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EC0978))(this);
	}
	template <typename T = bool> T IsProjectile() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EC0A48))(this);
	}
	template <typename T = bool> T IsPlacing() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EC0B18))(this);
	}
	template <typename T = void> T WeaponAttributeAdditionLoadOverCallback() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EC0BE8))(this);
	}
	template <typename T = uintptr_t> static T GetFireComponentData(int32_t inItemID, bool isSecondFireComonent) {
		return ((T (*)(void *, int32_t, bool))(Il2CppBase() + 0x2EC0CB0))(0, inItemID, isSecondFireComonent);
	}
	template <typename T = void> T OnActive(bool active) {
		return ((T (*)(WeaponFireComponent*, bool))(Il2CppBase() + 0x2EC11F0))(this, active);
	}
	template <typename T = void> T PreBeginState(uintptr_t newState) {
		return ((T (*)(WeaponFireComponent*, uintptr_t))(Il2CppBase() + 0x2EC12C0))(this, newState);
	}
	template <typename T = void> T PreEndState(uintptr_t eWeaponStateType) {
		return ((T (*)(WeaponFireComponent*, uintptr_t))(Il2CppBase() + 0x2EC1390))(this, eWeaponStateType);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_BRFireModes() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EC1460))(this);
	}
	template <typename T = void> T SetBrFireModes(Il2CppArray<uintptr_t>* data) {
		return ((T (*)(WeaponFireComponent*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2EC1488))(this, data);
	}
	template <typename T = void> T set_CurFireType(uintptr_t value) {
		return ((T (*)(WeaponFireComponent*, uintptr_t))(Il2CppBase() + 0x2EC15B0))(this, value);
	}
	template <typename T = uintptr_t> T get_CurFireType() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EC181C))(this);
	}
	template <typename T = void> T SetSpectatingSingleShot(bool isSingleShot) {
		return ((T (*)(WeaponFireComponent*, bool))(Il2CppBase() + 0x2EC1824))(this, isSingleShot);
	}
	template <typename T = void> T InitBrFireMode() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EC1670))(this);
	}
	template <typename T = void> T ChangeFireMode() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EC18FC))(this);
	}
	template <typename T = bool> T IsNonInstant() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EC1A7C))(this);
	}
	template <typename T = float> T CalcFireAnimationSpeed(float clipLength) {
		return ((T (*)(WeaponFireComponent*, float))(Il2CppBase() + 0x2EC1B54))(this, clipLength);
	}
	template <typename T = bool> T ShouldAdjustFireAimRatation() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EC1CCC))(this);
	}
	template <typename T = bool> T SupportExtraBullet() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EC1DC4))(this);
	}
	template <typename T = Il2CppQuaternion> T GetAdjustedFireAimRotation(Il2CppQuaternion curFireAimRot, Il2CppVector3 inFirePos) {
		return ((T (*)(WeaponFireComponent*, Il2CppQuaternion, Il2CppVector3))(Il2CppBase() + 0x2EA9614))(this, curFireAimRot, inFirePos);
	}
	template <typename T = Il2CppQuaternion> T GetAdjustedFireAimRotation_1(Il2CppQuaternion curFireAimRot, uintptr_t* outTargetPos, uintptr_t* outFirePos, Il2CppVector3 inFirePos) {
		return ((T (*)(WeaponFireComponent*, Il2CppQuaternion, uintptr_t*, uintptr_t*, Il2CppVector3))(Il2CppBase() + 0x2EC1E94))(this, curFireAimRot, outTargetPos, outFirePos, inFirePos);
	}
	template <typename T = Il2CppVector3> T Get3PFireAimTargetPos(uintptr_t owner, Il2CppVector3 cameraPos, Il2CppVector3 cameraDir, float fireDistance, Il2CppVector3 weaponFirePos) {
		return ((T (*)(WeaponFireComponent*, uintptr_t, Il2CppVector3, Il2CppVector3, float, Il2CppVector3))(Il2CppBase() + 0x2EC22B8))(this, owner, cameraPos, cameraDir, fireDistance, weaponFirePos);
	}
	template <typename T = Il2CppVector2> T GetPunchAngle() {
		return ((T (*)(WeaponFireComponent*))(Il2CppBase() + 0x2EC2F14))(this);
	}
	template <typename T = float> T GetAdditionByBase(uintptr_t weaponAttributeType, float baseValue) {
		return ((T (*)(WeaponFireComponent*, uintptr_t, float))(Il2CppBase() + 0x2EBC4E0))(this, weaponAttributeType, baseValue);
	}
	template <typename T = bool> T SingleLineCheckPhysics(uintptr_t hitType, uintptr_t hitTarget, Il2CppVector3 startPos, Il2CppVector3 dir, uintptr_t impactInfo) {
		return ((T (*)(WeaponFireComponent*, uintptr_t, uintptr_t, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x2EC2FF4))(this, hitType, hitTarget, startPos, dir, impactInfo);
	}

};

}
