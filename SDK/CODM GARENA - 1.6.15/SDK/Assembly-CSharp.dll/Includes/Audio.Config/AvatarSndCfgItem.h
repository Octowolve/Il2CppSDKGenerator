#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.Config {

class AvatarSndCfgItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.Config", "AvatarSndCfgItem"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& Description() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int64_t> T& RoleID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Camp() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& PawnCategoryType() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& Is3P() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& Bank1() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& Bank2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& Bank3() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& StepSand() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& StepLadder() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& SprintSand() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& DyingMove() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& AmingMoveStepSand() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& JumpUpSand() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& JumpUpGrass() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& JumpUpSnow() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> T& JumpUpMetal() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& JumpUpWater() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppString*> T& JumpUpWood() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& JumpUpGlass() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppString*> T& JumpUpStone() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& JumpUpPenetrateStone() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppString*> T& JumpDownSand() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppString*> T& JumpDownGrass() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppString*> T& JumpDownSnow() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppString*> T& JumpDownMetal() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppString*> T& JumpDownWater() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppString*> T& JumpDownWood() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppString*> T& JumpDownGlass() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppString*> T& JumpDownStone() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppString*> T& JumpDownPenetrateStone() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppString*> T& JumpDownHeavySand() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppString*> T& JumpDownHeavyGrass() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppString*> T& JumpDownHeavySnow() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppString*> T& JumpDownHeavyMetal() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppString*> T& JumpDownHeavyWater() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppString*> T& JumpDownHeavyWood() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppString*> T& JumpDownHeavyGlass() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppString*> T& JumpDownHeavyStone() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppString*> T& JumpDownHeavyPenetrateStone() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = Il2CppString*> T& ClimbUp() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppString*> T& ClimbOver() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppString*> T& HurtBodyEvent() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppString*> T& HurtHeadEvent() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = Il2CppString*> T& HurtEventBeat() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppString*> T& HurtEventFire() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = Il2CppString*> T& HurtEventPoison() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppString*> T& HurtEventPoisonEnv() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = Il2CppString*> T& HurtEventElectric() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppString*> T& DeadEvent() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = Il2CppString*> T& SpecialDeadEvent() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = Il2CppString*> T& BombThrowEvent() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = Il2CppString*> T& FlashThrowEvent() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppString*> T& SmokeThrowEvent() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = Il2CppString*> T& EMPThrowEvent() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppString*> T& StickBombThrowEvent() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = Il2CppString*> T& ClaymoreThrowEvent() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = Il2CppString*> T& TripMineThrowEvent() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = Il2CppString*> T& SemtexThrowEvent() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = Il2CppString*> T& ConcussionThrowEvent() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = Il2CppString*> T& ClusterThrowEvent() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = Il2CppString*> T& MeleeAttackEvent() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = Il2CppString*> T& MeleeStabEvent() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = Il2CppString*> T& NormalKillEvent() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = Il2CppString*> T& HeadShotEvent() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = Il2CppString*> T& KillSniperSnd() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = Il2CppString*> T& HeadShotKillSniperSnd() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = Il2CppString*> T& KnifeKillEvent() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = Il2CppString*> T& KnifeKillSniperEvent() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = Il2CppString*> T& KilledBySniper() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = Il2CppString*> T& SelfKillEnemyWithHeadShot() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = Il2CppString*> T& KillCountRTPC() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = Il2CppString*> T& PlayerInited() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = Il2CppString*> T& DestroyEvent() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = Il2CppString*> T& InjuredSound() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = Il2CppString*> T& InjureCuredSound() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = Il2CppString*> T& HealthRegainSound() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = Il2CppString*> T& Become1P() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = Il2CppString*> T& Become3P() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = Il2CppString*> T& ChangingMag() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = Il2CppString*> T& OpenScope() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = Il2CppString*> T& OpenScopeAndAimingTarget() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = Il2CppString*> T& CloseScope() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = float> T& EnemySpotSndInterval() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = Il2CppString*> T& EnemySpotSnd() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = Il2CppString*> T& SniperSpotSnd() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = Il2CppString*> T& NoAmmoSnd() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = Il2CppString*> T& BuyWeapon() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = Il2CppString*> T& SmokeNearby() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = Il2CppString*> T& GrenadeNearby() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = Il2CppString*> T& FlashNearby() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = Il2CppString*> T& StickyNearby() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = Il2CppString*> T& EMPNearby() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = Il2CppString*> T& ClusterNearby() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = float> T& InjureHp() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ExtCfgs() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
