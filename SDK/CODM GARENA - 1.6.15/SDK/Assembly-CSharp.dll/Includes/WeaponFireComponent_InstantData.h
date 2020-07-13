#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponFireComponentInstantData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponFireComponent_InstantData"));
	}

	template <typename T = float> T& LongShotDistance() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = bool> T& RecoilFireInterval() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = float> T& FallInterval() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = float> T& InaccuracyModifierCrouching() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = float> T& InaccuracyModifierProning() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = float> T& InaccuracyModifierSliding() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = float> T& ZoomingGetHitPunchAngleX() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = float> T& ZoomingGetHitPunchAngleXDecreaseSpeed() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = float> T& ReachMaxCrosshairDropPerc() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = float> T& UnreachMaxCrosshairDropPerc() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& DamageRange() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& DamageValue() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& PVEDamageValue() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& DamageRangeHitRate() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& DamageRangeAccuracy() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = float> T& PVEPenetrationDamageModifier() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = int32_t> T& MaxThroughWall() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = int32_t> T& PVEMaxThroughWall() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = float> T& CrossHairSizeBase() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = float> T& CrossHairSizeModifier() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = float> T& CrossHairLengthBase() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = float> T& CrossHairLengthModifier() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = float> T& CrossHairSizeSprintingBase() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = float> T& CrossHairSizeSprintingModifier() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = float> T& CrossHairLengthSprintingBase() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = float> T& CrossHairLengthSprintingModifier() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = float> T& CrossHairSizeWalkingBase() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = float> T& CrossHairSizeWalkingModifier() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = float> T& CrossHairLengthWalkingBase() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = float> T& CrossHairLengthWalkingModifier() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = float> T& CrossHairSizeJumpingBase() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = float> T& CrossHairSizeJumpingModifier() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = float> T& CrossHairLengthJumpingBase() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = float> T& CrossHairLengthJumpingModifier() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = float> T& CrosshairInaccuracyIncrement() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = float> T& CrosshairInaccuracyDecrement() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = Il2CppVector2> T& BreatheTremblingRange() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = Il2CppVector2> T& BreatheTremblingRate() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = Il2CppVector2> T& BreatheTremblingAccel() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& HitPartRate() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& PVEHitPartRate() {
		return *(T*)((uintptr_t)this + 0x1D4);
	}
	template <typename T = Il2CppString*> T& BulletType() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = int32_t> T& BulletType_IntValue() {
		return *(T*)((uintptr_t)this + 0x1DC);
	}
	template <typename T = float> T& AngleScale() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = float> T& ShotSpreadInterval() {
		return *(T*)((uintptr_t)this + 0x1E4);
	}
	template <typename T = bool> T& CloseSpreadAdjustedAimDir() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = bool> T& UseFixDeltaTime() {
		return *(T*)((uintptr_t)this + 0x1E9);
	}
	template <typename T = float> T& LockDist() {
		return *(T*)((uintptr_t)this + 0x1EC);
	}
	template <typename T = float> T& UnlockDist() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = int32_t> T& MaxShotsFired() {
		return *(T*)((uintptr_t)this + 0x1F4);
	}
	template <typename T = float> T& MinInaccuracy() {
		return *(T*)((uintptr_t)this + 0x1F8);
	}
	template <typename T = float> T& MaxInaccuracy() {
		return *(T*)((uintptr_t)this + 0x1FC);
	}
	template <typename T = float> T& DisperseBase() {
		return *(T*)((uintptr_t)this + 0x200);
	}
	template <typename T = float> T& DisperseModifierStanding() {
		return *(T*)((uintptr_t)this + 0x204);
	}
	template <typename T = float> T& DisperseModifierJumping() {
		return *(T*)((uintptr_t)this + 0x208);
	}
	template <typename T = float> T& DisperseModifierWalking() {
		return *(T*)((uintptr_t)this + 0x20C);
	}
	template <typename T = float> T& PunchAngleXDecreaseSpeed() {
		return *(T*)((uintptr_t)this + 0x210);
	}
	template <typename T = float> T& PunchAngleYDecreaseSpeed() {
		return *(T*)((uintptr_t)this + 0x214);
	}
	template <typename T = float> T& RecoilUpBase() {
		return *(T*)((uintptr_t)this + 0x218);
	}
	template <typename T = float> T& RecoilUpModifier() {
		return *(T*)((uintptr_t)this + 0x21C);
	}
	template <typename T = float> T& RecoilUpMax() {
		return *(T*)((uintptr_t)this + 0x220);
	}
	template <typename T = float> T& RecoilLateralBase() {
		return *(T*)((uintptr_t)this + 0x224);
	}
	template <typename T = float> T& RecoilLateralModifier() {
		return *(T*)((uintptr_t)this + 0x228);
	}
	template <typename T = float> T& RecoilLateralMax() {
		return *(T*)((uintptr_t)this + 0x22C);
	}
	template <typename T = float> T& RecoilScaleStanding() {
		return *(T*)((uintptr_t)this + 0x230);
	}
	template <typename T = float> T& RecoilScaleWalking() {
		return *(T*)((uintptr_t)this + 0x234);
	}
	template <typename T = float> T& RecoilScaleJumping() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = float> T& ReachMaxDirectionChangePerc() {
		return *(T*)((uintptr_t)this + 0x23C);
	}
	template <typename T = float> T& UnreachMaxDirectionChangePerc() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T get_BulletType_Enum() {
		return ((T (*)(WeaponFireComponentInstantData*))(Il2CppBase() + 0x48A5E94))(this);
	}
	template <typename T = void> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position, uintptr_t targetType, uintptr_t mask, uintptr_t index, uintptr_t interrupt) {
		return ((T (*)(WeaponFireComponentInstantData*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x489D1D4))(this, bytes, position, targetType, mask, index, interrupt);
	}
	template <typename T = void> T xLuaBaseProxy_Deserialize(Il2CppArray<uintptr_t>* P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4, uintptr_t P5) {
		return ((T (*)(WeaponFireComponentInstantData*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x48A5F74))(this, P0, P1, P2, P3, P4, P5);
	}

};

}
