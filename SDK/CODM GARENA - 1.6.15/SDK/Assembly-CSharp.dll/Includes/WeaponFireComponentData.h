#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponFireComponentData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponFireComponentData"));
	}

	template <typename T = float> T& WeaponRange() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& AIShootScope() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& BOT_FireRange() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& FireInterval() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& FireIntervalOfExtraBullet() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& IsBurstAutoFire() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& FireTimesInGroup() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& FireTimesInGropClient() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& FireGroupEndAnimTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& FireGroupEndTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& AimingFireAnimClipTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& ClipAmmoCount() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& CarriedAmmoCount() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& ShotCost() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& PVEClipAmmoCount() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& PVECarriedAmmoCount() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& PVEMaxAmmoCount() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& MaxAmmoCount() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& FireBoltTime() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppString*> T& DamageType() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& DamageType_IntValue() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppString*> T& ExtraDamageType() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& ExtraDamageType_IntValue() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& Damage() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& PVEDamage() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& MinDamageValue() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& PVEMinDamageValue() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppVector2> T& PortSizeToScreen() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& PVEDamageRate() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& AimedChangeClipTime() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& ChangeClipTime() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& ChangeClipMultiAnims() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = float> T& ChangeClipStartTime() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& ChangeClipLoopTime() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = float> T& ChangeClipEndTime() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> T& ChangeClipStart02Time() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = float> T& ChangeClipLoopPreTime() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& AllowQuickChangeClip() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = float> T& QuickChangeClipTime() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& HasQuickAnimation() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = float> T& ChangeClipAnimRate() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& UseSSAnimator() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = float> T& PutDownTime() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> T& EquipTime() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = float> T& UnequipTime() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = float> T& EquipAnimClipTime() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = float> T& UnequipAnimClipTime() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = float> T& EquipAddition() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = Il2CppString*> T& CrosshairTexName() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = bool> T& IsSingleShot() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = float> T& SingleShotStopFireTime() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = float> T& ADSModeSingleShotStopFireTime() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = bool> T& ForcePlaySingleFireAnim() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = float> T& InitSpeed() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = float> T& AccelSpeed() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = float> T& MaxSpeed() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = float> T& GravityScale() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = int32_t> T& ProjFlightAssetID() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = int32_t> T& ProjFlightAssetID3P() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = bool> T& NonInstant() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = int32_t> T& ExtraDamageScreenEffectID() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = bool> T& UseInWater() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = float> T& SpeedDecayInWater() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = float> T& WaterBuoyancy() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = Il2CppString*> T& CrossHairCircleName() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = float> T& CrossHairCircleInitSize() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = bool> T& CrosshairEnabled() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = float> T& GetHitPunchAngleX() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = float> T& GetHitPunchAngleXDecreaseSpeed() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& BRFireModes() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T get_DamageType_Enum() {
		return ((T (*)(WeaponFireComponentData*))(Il2CppBase() + 0x4C42AB4))(this);
	}
	template <typename T = uintptr_t> T get_ExtraDamageType_Enum() {
		return ((T (*)(WeaponFireComponentData*))(Il2CppBase() + 0x4C42B94))(this);
	}
	template <typename T = void> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position, uintptr_t targetType, uintptr_t mask, uintptr_t index, uintptr_t interrupt) {
		return ((T (*)(WeaponFireComponentData*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4C3CA54))(this, bytes, position, targetType, mask, index, interrupt);
	}
	template <typename T = void> T xLuaBaseProxy_Deserialize(Il2CppArray<uintptr_t>* P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4, uintptr_t P5) {
		return ((T (*)(WeaponFireComponentData*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4C42C74))(this, P0, P1, P2, P3, P4, P5);
	}

};

}
