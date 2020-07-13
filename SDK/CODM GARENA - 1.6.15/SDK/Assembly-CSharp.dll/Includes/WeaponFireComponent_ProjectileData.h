#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponFireComponentProjectileData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponFireComponent_ProjectileData"));
	}

	template <typename T = bool> T& ShowIndicator() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = float> T& DamageRadius() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = float> T& DamageMinHitSoundTime() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = float> T& DamageMaxHitSoundTime() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = bool> T& ExplodeInWater() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = float> T& DecreaseUpSpeed() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = Il2CppVector3> T& ModityOffset() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = float> T& LifeSpan() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = float> T& ExplosionLifeSpan() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = int32_t> T& ProjExplosionAssetID() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = int32_t> T& BRProjExplosionAssetID() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = bool> T& CanBounce() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = bool> T& TouchExplode() {
		return *(T*)((uintptr_t)this + 0x15D);
	}
	template <typename T = float> T& PawnBounceRate() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = float> T& GroundBounceRate() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = float> T& WallBounceRate() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = int32_t> T& ProjAssetID() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = int32_t> T& ProjectOcclusionEffectID() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = bool> T& CauseFlashEffect() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = bool> T& CauseRepulseEffect() {
		return *(T*)((uintptr_t)this + 0x175);
	}
	template <typename T = float> T& RepulseRadius() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = float> T& RepulseDuration() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = float> T& RepulseSpeedScale() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = float> T& HitDamage() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = float> T& SpecialDamage() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = float> T& MinDuration() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = float> T& MaxDuration() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = float> T& SelfMaxDamage() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = float> T& SelfMinDamage() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = float> T& SelfMaxDuration() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = float> T& SelfMinDuration() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = Il2CppString*> T& ProjectileType() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = int32_t> T& ProjectileType_IntValue() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = float> T& MaxThrowDistance() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = float> T& FireAnimTime() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = float> T& SwitchWeaponElapseScale() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = float> T& FireStart2EndTime() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = bool> T& IgnoreSameCamp() {
		return *(T*)((uintptr_t)this + 0x1BC);
	}
	template <typename T = bool> T& IsHoldFire() {
		return *(T*)((uintptr_t)this + 0x1BD);
	}
	template <typename T = bool> T& ShowFirstImpactPointEffect() {
		return *(T*)((uintptr_t)this + 0x1BE);
	}
	template <typename T = bool> T& CanBePick() {
		return *(T*)((uintptr_t)this + 0x1BF);
	}
	template <typename T = float> T& PickDistance() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = float> T& QuickThrowPrepareTime() {
		return *(T*)((uintptr_t)this + 0x1C4);
	}
	template <typename T = float> T& QuickThrowEndTime() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = float> T& ShotSpreadAngle() {
		return *(T*)((uintptr_t)this + 0x1CC);
	}
	template <typename T = bool> T& ExplodeOnlyOnce() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = float> T& MinInvalidDuration() {
		return *(T*)((uintptr_t)this + 0x1D4);
	}
	template <typename T = float> T& MaxInvalidDuration() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = int32_t> T& MaxBounceCount() {
		return *(T*)((uintptr_t)this + 0x1DC);
	}
	template <typename T = float> T& FlyMaxDistance() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = bool> T& HitGroundStop() {
		return *(T*)((uintptr_t)this + 0x1E4);
	}
	template <typename T = int32_t> T& BuffAreaBuffID() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = int32_t> T& BuffAreaBuffID1() {
		return *(T*)((uintptr_t)this + 0x1EC);
	}
	template <typename T = int32_t> T& BuffAreaBuffID2() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = int32_t> T& BuffAreaBuffID3() {
		return *(T*)((uintptr_t)this + 0x1F4);
	}
	template <typename T = float> T& BuffAreaRadius() {
		return *(T*)((uintptr_t)this + 0x1F8);
	}
	template <typename T = float> T& BuffAreaLife() {
		return *(T*)((uintptr_t)this + 0x1FC);
	}
	template <typename T = int32_t> T& BuffArea1BuffID() {
		return *(T*)((uintptr_t)this + 0x200);
	}
	template <typename T = int32_t> T& BuffArea1BuffID1() {
		return *(T*)((uintptr_t)this + 0x204);
	}
	template <typename T = int32_t> T& BuffArea1BuffID2() {
		return *(T*)((uintptr_t)this + 0x208);
	}
	template <typename T = int32_t> T& BuffArea1BuffID3() {
		return *(T*)((uintptr_t)this + 0x20C);
	}
	template <typename T = float> T& BuffArea1Radius() {
		return *(T*)((uintptr_t)this + 0x210);
	}
	template <typename T = float> T& BuffArea1Life() {
		return *(T*)((uintptr_t)this + 0x214);
	}
	template <typename T = float> T& DelayShowProjectileTime() {
		return *(T*)((uintptr_t)this + 0x218);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T get_ProjectileType_Enum() {
		return ((T (*)(WeaponFireComponentProjectileData*))(Il2CppBase() + 0x48A7590))(this);
	}
	template <typename T = void> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position, uintptr_t targetType, uintptr_t mask, uintptr_t index, uintptr_t interrupt) {
		return ((T (*)(WeaponFireComponentProjectileData*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x48A189C))(this, bytes, position, targetType, mask, index, interrupt);
	}
	template <typename T = void> T xLuaBaseProxy_Deserialize(Il2CppArray<uintptr_t>* P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4, uintptr_t P5) {
		return ((T (*)(WeaponFireComponentProjectileData*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x48A7670))(this, P0, P1, P2, P3, P4, P5);
	}

};

}
