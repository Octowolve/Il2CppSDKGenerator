#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponSoundConfigItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponSoundConfigItem"));
	}

	template <typename T = Il2CppString*> T& RaiseSound() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& PutdownSound() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& ClipOutAsset() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& ClipInAsset() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& BoltRelaseBackAsset() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& SecondaryAttackSound() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& SecondaryAttackPrepareSound() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& SecondaryAttackCancelSound() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& SecondaryAttackClipInSound() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& SecondaryAttackClipOutSound() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& SecondaryAttackBoltBackSound() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& SecondaryAttackInsertSound() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& FirstAttackSound() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& SecondAttackSound() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& StabSound() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> T& PrepareSound() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& OpenCoverSound() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppString*> T& PressSound() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& PlantOKSound() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppString*> T& FireSound() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& FireSound_Compressor() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppString*> T& FireSoundOnSkill() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppString*> T& WeaponIdleSound() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& WeaponUsingLoopSound() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& UsingLoopSoundOnSkill() {
		return *(T*)((uintptr_t)this + 0x71);
	}
	template <typename T = int32_t> T& StepSoundRangeOverride() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppString*> T& FireingVoicePrefix() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppString*> T& SecondaryFireSound() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppString*> T& WeaponBank1() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppString*> T& WeaponBank2() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& WeaponSpecialType() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppString*> T& LockingSound() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppString*> T& LockedSound() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppString*> T& HitOnSand() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppString*> T& HitOnGrass() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppString*> T& HitOnSnow() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppString*> T& HitOnMetal() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppString*> T& HitOnWater() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppString*> T& HitOnWood() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppString*> T& HitOnGlass() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = Il2CppString*> T& HitOnStone() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppString*> T& HitOnPenetrateStone() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppString*> T& HitOnIce() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppString*> T& NoAmmoSound() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = Il2CppString*> T& SilencerInstalled1() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppString*> T& ActivateSound() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = Il2CppString*> T& DeActivateSound() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppString*> T& ZoomInSound() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = Il2CppString*> T& ZoomOutSound() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppString*> T& FirstBulletSound() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = Il2CppString*> T& FirstBulletSoundSilencer() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = Il2CppString*> T& FirstBulletSound2() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = Il2CppString*> T& FirstBulletSoundSilencer2() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppString*> T& FirstBulletSoundOnSkill() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = Il2CppString*> T& CancelFireSound() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppString*> T& FireStopSound() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = Il2CppString*> T& FireStopSound2() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = Il2CppString*> T& FireStopSoundOnSkill() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = Il2CppString*> T& FriendWarnSound() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = Il2CppString*> T& EnemyWarnSound() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = Il2CppString*> T& CancelFireSoundSilencer() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = Il2CppString*> T& FireStopSoundSilencer() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = Il2CppString*> T& BulletFlyBySound() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = Il2CppString*> T& BulletFlyByVox() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = float> T& FarFireSoundVault() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = Il2CppString*> T& FarFireSound() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = bool> T& UsingLoopSoundSilencer() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = Il2CppString*> T& OverHotSound() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = Il2CppString*> T& SingleFireSound() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = Il2CppString*> T& SilencerSingleFireSound() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = Il2CppString*> T& RTPCBulletInterval() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = Il2CppString*> T& HitOnCloth() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = Il2CppString*> T& HitOnCotton() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = Il2CppString*> T& HitOnRubber() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = Il2CppString*> T& HitOncarton() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = Il2CppString*> T& HitOnWoodBox() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = Il2CppString*> T& HitOnPlastic() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = Il2CppString*> T& HitOnCeramics() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = int32_t> T& AssetIdTrans() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetValueFromString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T GetValueFromString(Il2CppString* strInput, uintptr_t pRet) {
		return ((T (*)(WeaponSoundConfigItem*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x33BADF0))(this, strInput, pRet);
	}

};

}
