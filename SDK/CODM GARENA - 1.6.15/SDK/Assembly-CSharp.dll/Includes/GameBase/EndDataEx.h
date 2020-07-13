#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class EndDataEx
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "EndDataEx"));
	}

	template <typename T = int32_t> T& PlayerHPCount() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& PlayerFinalHPCount() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& PlayerRecoverHPCount() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& PlayerDamageHPCount() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& PlayerDamageHPMax() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& PlayerDamageHPMin() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& PlayerDamageHPTotal() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& MonsterDamageCount() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& MonsterDamageHPMax() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& BossDamageCount() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& BossDamageHPMax() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& MonsterSpawnCount() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& MonsterKillCount() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& MonsterHeadShotCount() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& NormalMoveSpeedMax() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& SecondMoveDistanceMax() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& PlayerWeaponInfoList() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint32_t> T& RandomValue() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& RoundTimeMin() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uint32_t> T& AIPawnCanAttackTestCount() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uint32_t> T& MonsterColliderRadiusMax() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uint32_t> T& MonsterColliderHeightMax() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uint32_t> T& BossColliderRadiusMax() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uint32_t> T& BossColliderHeightMax() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uint32_t> T& PlayerColliderRadiusMin() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uint32_t> T& PlayerColliderHeightMin() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& PlayerSkillInfoList() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& RoundStartTime() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& IntervalComparePlayerCollider() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& IntervalCompareMonsterCollider() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyRoundStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordWeaponInitData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyRoundEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordAWeaponFinalInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordPlayerFinalInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordPlayerWeaponDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordAIPawnCanAttackTest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordPlayerWeaponDamageRadius() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordPlayerWithoutCostAmmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordPlayerAddAmmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordPlayerWeaponInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordPlayerRecoverHP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordPlayerHPInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordPlayerColliderSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordMonsterColliderSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordEnemyHPInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordPlayerMoveSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordPlayerMoveDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordPlayerSkillInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EncodeValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EncodeIntValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}

	template <typename T = void> T NotifyRoundStart() {
		return ((T (*)(EndDataEx*))(Il2CppBase() + 0x4105E78))(this);
	}
	template <typename T = void> T RecordWeaponInitData(uintptr_t inv) {
		return ((T (*)(EndDataEx*, uintptr_t))(Il2CppBase() + 0x4105F8C))(this, inv);
	}
	template <typename T = void> T NotifyRoundEnd() {
		return ((T (*)(EndDataEx*))(Il2CppBase() + 0x410631C))(this);
	}
	template <typename T = void> T RecordAWeaponFinalInfo(uintptr_t inv) {
		return ((T (*)(EndDataEx*, uintptr_t))(Il2CppBase() + 0x41064B0))(this, inv);
	}
	template <typename T = void> T RecordPlayerFinalInfo(uintptr_t recordBy) {
		return ((T (*)(EndDataEx*, uintptr_t))(Il2CppBase() + 0x410679C))(this, recordBy);
	}
	template <typename T = void> T RecordPlayerWeaponDamage(int32_t weaponItemID, float damage) {
		return ((T (*)(EndDataEx*, int32_t, float))(Il2CppBase() + 0x4106CB0))(this, weaponItemID, damage);
	}
	template <typename T = void> T RecordAIPawnCanAttackTest() {
		return ((T (*)(EndDataEx*))(Il2CppBase() + 0x4106EF8))(this);
	}
	template <typename T = void> T RecordPlayerWeaponDamageRadius(int32_t weaponItemID, float DamageRadius) {
		return ((T (*)(EndDataEx*, int32_t, float))(Il2CppBase() + 0x4107004))(this, weaponItemID, DamageRadius);
	}
	template <typename T = void> T RecordPlayerWithoutCostAmmo(uintptr_t weap, int32_t AmmoCount) {
		return ((T (*)(EndDataEx*, uintptr_t, int32_t))(Il2CppBase() + 0x4107210))(this, weap, AmmoCount);
	}
	template <typename T = void> T RecordPlayerAddAmmo(uintptr_t weap, int32_t AmmoCount) {
		return ((T (*)(EndDataEx*, uintptr_t, int32_t))(Il2CppBase() + 0x4107444))(this, weap, AmmoCount);
	}
	template <typename T = void> T RecordPlayerWeaponInfo(uintptr_t weap, float ShotSpeed) {
		return ((T (*)(EndDataEx*, uintptr_t, float))(Il2CppBase() + 0x4107678))(this, weap, ShotSpeed);
	}
	template <typename T = void> T RecordPlayerRecoverHP(int32_t value) {
		return ((T (*)(EndDataEx*, int32_t))(Il2CppBase() + 0x40FFC68))(this, value);
	}
	template <typename T = void> T RecordPlayerHPInfo(float damage) {
		return ((T (*)(EndDataEx*, float))(Il2CppBase() + 0x410792C))(this, damage);
	}
	template <typename T = void> T RecordPlayerColliderSize(float radius, float height, float deltaTime) {
		return ((T (*)(EndDataEx*, float, float, float))(Il2CppBase() + 0x4107AC0))(this, radius, height, deltaTime);
	}
	template <typename T = void> T RecordMonsterColliderSize(bool bBoss, float radius, float height, float deltaTime) {
		return ((T (*)(EndDataEx*, bool, float, float, float))(Il2CppBase() + 0x4107CD4))(this, bBoss, radius, height, deltaTime);
	}
	template <typename T = void> T RecordEnemyHPInfo(float damage, bool bBoss) {
		return ((T (*)(EndDataEx*, float, bool))(Il2CppBase() + 0x4107F84))(this, damage, bBoss);
	}
	template <typename T = void> T RecordPlayerMoveSpeed(int32_t moveSpeed) {
		return ((T (*)(EndDataEx*, int32_t))(Il2CppBase() + 0x4100EE8))(this, moveSpeed);
	}
	template <typename T = void> T RecordPlayerMoveDistance(int32_t moveDis) {
		return ((T (*)(EndDataEx*, int32_t))(Il2CppBase() + 0x41011BC))(this, moveDis);
	}
	template <typename T = void> T RecordPlayerSkillInfo(int32_t id, int32_t entryId, int32_t entryLevel) {
		return ((T (*)(EndDataEx*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x4108128))(this, id, entryId, entryLevel);
	}
	template <typename T = uint32_t> T EncodeValue(int32_t value) {
		return ((T (*)(EndDataEx*, int32_t))(Il2CppBase() + 0x410828C))(this, value);
	}
	template <typename T = int32_t> T EncodeIntValue(int32_t value) {
		return ((T (*)(EndDataEx*, int32_t))(Il2CppBase() + 0x41083A0))(this, value);
	}
	template <typename T = uintptr_t> T GetData() {
		return ((T (*)(EndDataEx*))(Il2CppBase() + 0x41084B4))(this);
	}

};

}
