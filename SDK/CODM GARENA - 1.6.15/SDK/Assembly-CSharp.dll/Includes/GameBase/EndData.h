#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class EndData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "EndData"));
	}

	template <typename T = Il2CppString*> T& DataName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& BattleID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& ClientEndTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& ClientVersion() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& UserIP() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Result() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& RoundEndType() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& RoundTimeUse() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& RoundRate() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& RoundScore() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& RoundStage() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& RoundExp() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& RoundGold() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& RoundMoney() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& RoundPoints() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& DropItemType1() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& DropItemCount1() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& DropItemType2() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> T& DropItemCount2() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& RoundCostMoney1() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& UserKillCount() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& UserKillComboMax() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& UserKillHeadShootTotal() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& RoleDeathCount() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& RoleReviveCount() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& RoleSpeciallCount() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppString*> T& ReplaceWeaponID() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& PlayerInitHP() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& PlayerHealHPCount() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& PlayerHealHPMax() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& PlayerHealHPMin() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& PlayerHealHPTotal() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& PlayerDamageHPCount() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& PlayerDamageHPMax() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& PlayerDamageHPMin() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& PlayerDamageHPTotal() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& PlayerEndHP() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& HpBottleUse() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = int32_t> T& HpBottleAdd() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& InvincibleCount() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = int32_t> T& InvincibleTimeMax() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& InvincibleTimeMin() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = int32_t> T& InvincibleTimeTotal() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& BeAtkShootCount1() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = int32_t> T& BeAtkShootCount2() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& BeAtkShootCount3() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = int32_t> T& BeAtkShootCount4() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = int32_t> T& BeAtkShootCount5() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = Il2CppString*> T& BeAtkShootCountInfo() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppString*> T& BeAtkMax1() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = Il2CppString*> T& BeAtkMin1() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = int32_t> T& BeAtkTotal1() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = int32_t> T& BeAtkMax2() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = int32_t> T& BeAtkMin2() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = int32_t> T& BeAtkTotal2() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = int32_t> T& BeAtkMax3() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = int32_t> T& BeAtkMin3() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = int32_t> T& BeAtkTotal3() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = int32_t> T& BeAtkMax4() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = int32_t> T& BeAtkMin4() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = int32_t> T& BeAtkTotal4() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = int32_t> T& BeAtkMax5() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = int32_t> T& BeAtkMin5() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = int32_t> T& BeAtkTotal5() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = int32_t> T& BeAtkInvalidCount() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = int32_t> T& EnemyCount() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = int32_t> T& EnemyEndCount() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = int32_t> T& EnemyCount1() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = int32_t> T& EnemyCount2() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = int32_t> T& EnemyCount3() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = int32_t> T& BossCount() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = int32_t> T& BossKillCount() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = int32_t> T& EnemyDownCount1() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = int32_t> T& EnemyDownCount2() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = int32_t> T& BossInitHPMax() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = int32_t> T& BossInitHPMin() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = int32_t> T& BossDamageMax() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = int32_t> T& BossDamageMin() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = int32_t> T& BossDamageTotal() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = int32_t> T& BossInitHPTotal() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = int32_t> T& EnemyInitHPMax() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = int32_t> T& EnemyInitHPMin() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = int32_t> T& EnemyDamageMax() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = int32_t> T& EnemyDamageMin() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = int32_t> T& EnemyDamageTotal() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = int32_t> T& EnemyInitHPTotal() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = int32_t> T& BossAttackCount() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = int32_t> T& BossMissCount() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = int32_t> T& BossTimeTotal() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = int32_t> T& BossMoveTotal() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = int32_t> T& BossAttackMax() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = int32_t> T& BossAttackMin() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = int32_t> T& BossAttackTotal() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = int32_t> T& MonsterAttackCount() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = int32_t> T& MonsterMissCount() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = int32_t> T& MonsterTimeTotal() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = int32_t> T& MonsterMoveTotal() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = int32_t> T& MonsterAttackMax() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = int32_t> T& MonsterAttackMin() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = int32_t> T& MonsterAttackTotal() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = int32_t> T& MainWeaponShootCount1() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = int32_t> T& MainWeaponShootCount2() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = int32_t> T& MainWeaponShootCount3() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = int32_t> T& MainWeaponDamageMax() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = int32_t> T& MainWeaponDamageMin() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = int32_t> T& MainWeaponDamageTotal() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = int32_t> T& PistolWeaponShootCount1() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = int32_t> T& PistolWeaponShootCount2() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = int32_t> T& PistolWeaponShootCount3() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = int32_t> T& PistolWeaponDamageMax() {
		return *(T*)((uintptr_t)this + 0x1BC);
	}
	template <typename T = int32_t> T& PistolWeaponDamageMin() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = int32_t> T& PistolWeaponDamageTotal() {
		return *(T*)((uintptr_t)this + 0x1C4);
	}
	template <typename T = int32_t> T& KnifeWeaponShootCount1() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = int32_t> T& KnifeWeaponShootCount2() {
		return *(T*)((uintptr_t)this + 0x1CC);
	}
	template <typename T = int32_t> T& KnifeWeaponShootCount3() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = int32_t> T& KnifeWeaponDamageMax() {
		return *(T*)((uintptr_t)this + 0x1D4);
	}
	template <typename T = int32_t> T& KnifeWeaponDamageMin() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = int32_t> T& KnifeWeaponDamageTotal() {
		return *(T*)((uintptr_t)this + 0x1DC);
	}
	template <typename T = int32_t> T& MainWeaponAttackCDMax() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = int32_t> T& MainWeaponAttackCDMin() {
		return *(T*)((uintptr_t)this + 0x1E4);
	}
	template <typename T = int32_t> T& MainWeaponReloadTimeMax() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = int32_t> T& MainWeaponReloadTimeMin() {
		return *(T*)((uintptr_t)this + 0x1EC);
	}
	template <typename T = int32_t> T& MainWeaponReloadCount1() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = int32_t> T& MainWeaponReloadCount2() {
		return *(T*)((uintptr_t)this + 0x1F4);
	}
	template <typename T = int32_t> T& MainWeaponReloadMax() {
		return *(T*)((uintptr_t)this + 0x1F8);
	}
	template <typename T = int32_t> T& MainWeaponBulletFillingCount() {
		return *(T*)((uintptr_t)this + 0x1FC);
	}
	template <typename T = int32_t> T& PistolWeaponAttackCDMax() {
		return *(T*)((uintptr_t)this + 0x200);
	}
	template <typename T = int32_t> T& PistolWeaponAttackCDMin() {
		return *(T*)((uintptr_t)this + 0x204);
	}
	template <typename T = int32_t> T& PistolWeaponReloadTimeMax() {
		return *(T*)((uintptr_t)this + 0x208);
	}
	template <typename T = int32_t> T& PistolWeaponReloadTimeMin() {
		return *(T*)((uintptr_t)this + 0x20C);
	}
	template <typename T = int32_t> T& PistolWeaponReloadCount1() {
		return *(T*)((uintptr_t)this + 0x210);
	}
	template <typename T = int32_t> T& PistolWeaponReloadCount2() {
		return *(T*)((uintptr_t)this + 0x214);
	}
	template <typename T = int32_t> T& PistolWeaponReloadMax() {
		return *(T*)((uintptr_t)this + 0x218);
	}
	template <typename T = int32_t> T& PistolWeaponBulletFillingCount() {
		return *(T*)((uintptr_t)this + 0x21C);
	}
	template <typename T = int32_t> T& GrenadesCount1() {
		return *(T*)((uintptr_t)this + 0x220);
	}
	template <typename T = int32_t> T& GrenadesDamageMax() {
		return *(T*)((uintptr_t)this + 0x224);
	}
	template <typename T = int32_t> T& GrenadesDamageMin() {
		return *(T*)((uintptr_t)this + 0x228);
	}
	template <typename T = int32_t> T& GrenadesDamageTotal() {
		return *(T*)((uintptr_t)this + 0x22C);
	}
	template <typename T = int32_t> T& RPGCount1() {
		return *(T*)((uintptr_t)this + 0x230);
	}
	template <typename T = int32_t> T& RPGDamageMax() {
		return *(T*)((uintptr_t)this + 0x234);
	}
	template <typename T = int32_t> T& RPGDamageMin() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = int32_t> T& RPGDamageTotal() {
		return *(T*)((uintptr_t)this + 0x23C);
	}
	template <typename T = int32_t> T& JumpCount() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = int32_t> T& DownCount() {
		return *(T*)((uintptr_t)this + 0x244);
	}
	template <typename T = int32_t> T& FireCount() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = int32_t> T& ChangeGunTimes() {
		return *(T*)((uintptr_t)this + 0x24C);
	}
	template <typename T = int32_t> T& KillOverTheWall() {
		return *(T*)((uintptr_t)this + 0x250);
	}
	template <typename T = int32_t> T& NormalMoveSpeedMax() {
		return *(T*)((uintptr_t)this + 0x254);
	}
	template <typename T = int32_t> T& NormalMoveSpeedMin() {
		return *(T*)((uintptr_t)this + 0x258);
	}
	template <typename T = int32_t> T& OnceMoveMax() {
		return *(T*)((uintptr_t)this + 0x25C);
	}
	template <typename T = int32_t> T& OnceMoveMin() {
		return *(T*)((uintptr_t)this + 0x260);
	}
	template <typename T = int32_t> T& RoleMarkEnemyTotal() {
		return *(T*)((uintptr_t)this + 0x264);
	}
	template <typename T = int32_t> T& PauseCount() {
		return *(T*)((uintptr_t)this + 0x268);
	}
	template <typename T = Il2CppString*> T& KillDetail() {
		return *(T*)((uintptr_t)this + 0x26C);
	}
	template <typename T = Il2CppString*> T& UserDeadDetail() {
		return *(T*)((uintptr_t)this + 0x270);
	}
	template <typename T = uintptr_t> T& RoundStartTime() {
		return *(T*)((uintptr_t)this + 0x278);
	}
	template <typename T = int32_t> T& HeadDamageTimes() {
		return *(T*)((uintptr_t)this + 0x288);
	}
	template <typename T = int32_t> T& BodyDamageTimes() {
		return *(T*)((uintptr_t)this + 0x28C);
	}
	template <typename T = int32_t> T& LimbsDamageTimes() {
		return *(T*)((uintptr_t)this + 0x290);
	}
	template <typename T = int32_t> T& HeadMaxDamage() {
		return *(T*)((uintptr_t)this + 0x294);
	}
	template <typename T = int32_t> T& BodyMaxDamage() {
		return *(T*)((uintptr_t)this + 0x298);
	}
	template <typename T = int32_t> T& LimbsMaxDamage() {
		return *(T*)((uintptr_t)this + 0x29C);
	}
	template <typename T = int32_t> T& HeadMinDamage() {
		return *(T*)((uintptr_t)this + 0x2A0);
	}
	template <typename T = int32_t> T& BodyMinDamage() {
		return *(T*)((uintptr_t)this + 0x2A4);
	}
	template <typename T = int32_t> T& LimbsMinDamage() {
		return *(T*)((uintptr_t)this + 0x2A8);
	}
	template <typename T = int32_t> T& MoveTotal() {
		return *(T*)((uintptr_t)this + 0x2AC);
	}
	template <typename T = int32_t> T& PositionCheck1() {
		return *(T*)((uintptr_t)this + 0x2B0);
	}
	template <typename T = int32_t> T& PositionCheck2() {
		return *(T*)((uintptr_t)this + 0x2B4);
	}
	template <typename T = int32_t> T& MainWeaponBulletFillingCount1() {
		return *(T*)((uintptr_t)this + 0x2B8);
	}
	template <typename T = int32_t> T& PistolWeaponBulletCount1() {
		return *(T*)((uintptr_t)this + 0x2BC);
	}
	template <typename T = int32_t> T& WeaponRealMaxDamage() {
		return *(T*)((uintptr_t)this + 0x2C0);
	}
	template <typename T = int32_t> T& beAttackedTimes() {
		return *(T*)((uintptr_t)this + 0x2C4);
	}
	template <typename T = bool> T& bFirstRecord() {
		return *(T*)((uintptr_t)this + 0x2C8);
	}
	template <typename T = float> T& recordSpeedTime() {
		return *(T*)((uintptr_t)this + 0x2CC);
	}
	template <typename T = Il2CppVector3> T& lastPosition() {
		return *(T*)((uintptr_t)this + 0x2D0);
	}
	template <typename T = float> T& lastKillTime() {
		return *(T*)((uintptr_t)this + 0x2DC);
	}
	template <typename T = float> T& lastDeadTime() {
		return *(T*)((uintptr_t)this + 0x2E0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordReload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordReloadAutoOrManual() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordGrenadeAndRocketLauncherDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordTakeDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FillGetPropData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FillHitGroupData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordRecoverHPData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordReduceHPData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnAEnemy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AEnemyKilled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordBossInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordEnemyInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordEnemyAttackInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordPlayerDamagedInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordPlayerMoveInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLocalPawnPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordIntervalKillEnemyTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordIntervalDeadTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordMaxDisFromGround() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordMaxWeaponInitBulletCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordMainWeaponBaseDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}

	template <typename T = void> T InitData() {
		return ((T (*)(EndData*))(Il2CppBase() + 0x40FE950))(this);
	}
	template <typename T = void> T RecordFire(int32_t inventoryType, int32_t inventoryID, int32_t deltaMS) {
		return ((T (*)(EndData*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x40FEA38))(this, inventoryType, inventoryID, deltaMS);
	}
	template <typename T = void> T RecordReload(int32_t inventoryType, int32_t deltaMS, int32_t deltaAmmo) {
		return ((T (*)(EndData*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x40FEAF4))(this, inventoryType, deltaMS, deltaAmmo);
	}
	template <typename T = void> T RecordReloadAutoOrManual(int32_t inventoryType, bool isAuto) {
		return ((T (*)(EndData*, int32_t, bool))(Il2CppBase() + 0x40FEBB0))(this, inventoryType, isAuto);
	}
	template <typename T = void> T RecordDamage(uintptr_t inDamageInfo, uintptr_t inImpactInfo, int32_t inventoryType, int32_t inventoryID) {
		return ((T (*)(EndData*, uintptr_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x40FEC64))(this, inDamageInfo, inImpactInfo, inventoryType, inventoryID);
	}
	template <typename T = void> T RecordGrenadeAndRocketLauncherDamage(uintptr_t damageInfo) {
		return ((T (*)(EndData*, uintptr_t))(Il2CppBase() + 0x40FED24))(this, damageInfo);
	}
	template <typename T = void> T RecordTakeDamage(uintptr_t damageInfo) {
		return ((T (*)(EndData*, uintptr_t))(Il2CppBase() + 0x40FEDC4))(this, damageInfo);
	}
	template <typename T = void> T FillGetPropData(uint64_t propID, int32_t deltaCount) {
		return ((T (*)(EndData*, uint64_t, int32_t))(Il2CppBase() + 0x40FEE64))(this, propID, deltaCount);
	}
	template <typename T = void> T FillHitGroupData() {
		return ((T (*)(EndData*))(Il2CppBase() + 0x40FF1C8))(this);
	}
	template <typename T = void> T RecordRecoverHPData(float onceRecover) {
		return ((T (*)(EndData*, float))(Il2CppBase() + 0x40FF980))(this, onceRecover);
	}
	template <typename T = void> T RecordReduceHPData(float onceReduce) {
		return ((T (*)(EndData*, float))(Il2CppBase() + 0x40FFD7C))(this, onceReduce);
	}
	template <typename T = void> T SpawnAEnemy(bool bBoss) {
		return ((T (*)(EndData*, bool))(Il2CppBase() + 0x40FFF10))(this, bBoss);
	}
	template <typename T = void> T AEnemyKilled(bool bBoss, bool bSpecialKilled, bool mainWeapon) {
		return ((T (*)(EndData*, bool, bool, bool))(Il2CppBase() + 0x41000A0))(this, bBoss, bSpecialKilled, mainWeapon);
	}
	template <typename T = void> T RecordBossInfo(float hpValue, bool bInitState) {
		return ((T (*)(EndData*, float, bool))(Il2CppBase() + 0x4100288))(this, hpValue, bInitState);
	}
	template <typename T = void> T RecordEnemyInfo(float hpValue, bool bInitState) {
		return ((T (*)(EndData*, float, bool))(Il2CppBase() + 0x4100464))(this, hpValue, bInitState);
	}
	template <typename T = void> T RecordEnemyAttackInfo(bool bBoss) {
		return ((T (*)(EndData*, bool))(Il2CppBase() + 0x4100640))(this, bBoss);
	}
	template <typename T = void> T RecordPlayerDamagedInfo(uintptr_t damageInfo) {
		return ((T (*)(EndData*, uintptr_t))(Il2CppBase() + 0x4100770))(this, damageInfo);
	}
	template <typename T = void> T RecordPlayerMoveInfo(int32_t moveSpeed, float deltaTime) {
		return ((T (*)(EndData*, int32_t, float))(Il2CppBase() + 0x4100BB4))(this, moveSpeed, deltaTime);
	}
	template <typename T = Il2CppVector3> T GetLocalPawnPosition() {
		return ((T (*)(EndData*))(Il2CppBase() + 0x4101000))(this);
	}
	template <typename T = void> T RecordIntervalKillEnemyTime() {
		return ((T (*)(EndData*))(Il2CppBase() + 0x41012D4))(this);
	}
	template <typename T = void> T RecordIntervalDeadTime() {
		return ((T (*)(EndData*))(Il2CppBase() + 0x4101500))(this);
	}
	template <typename T = void> T RecordMaxDisFromGround() {
		return ((T (*)(EndData*))(Il2CppBase() + 0x410172C))(this);
	}
	template <typename T = void> T RecordMaxWeaponInitBulletCount(uintptr_t weapon) {
		return ((T (*)(EndData*, uintptr_t))(Il2CppBase() + 0x4101A78))(this, weapon);
	}
	template <typename T = void> T RecordMainWeaponBaseDamage(float baseDamage) {
		return ((T (*)(EndData*, float))(Il2CppBase() + 0x4101C18))(this, baseDamage);
	}
	template <typename T = uintptr_t> T GetData() {
		return ((T (*)(EndData*))(Il2CppBase() + 0x4101D24))(this);
	}

};

}
