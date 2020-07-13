#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class VTOLPawn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "VTOLPawn"));
	}

	template <typename T = uint32_t> T& m_VTOLPawnID() {
		return *(T*)((uintptr_t)this + 0xBCC);
	}
	template <typename T = float> T& m_AliveTime() {
		return *(T*)((uintptr_t)this + 0xBD0);
	}
	template <typename T = uintptr_t> T& m_ActorRoot() {
		return *(T*)((uintptr_t)this + 0xBD4);
	}
	template <typename T = float> static T& DeathAnimTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& DeathEffectTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& DamageEffectSocketName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& DeathEffectID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& m_DamageSmokeEffectID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& m_HardDamageEffectID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_DamageSmokeEffect() {
		return *(T*)((uintptr_t)this + 0xBD8);
	}
	template <typename T = uintptr_t> T& m_HardDamageEffect() {
		return *(T*)((uintptr_t)this + 0xBDC);
	}
	template <typename T = Il2CppVector3> T& m_HardDamageEffectPosOffset() {
		return *(T*)((uintptr_t)this + 0xBE0);
	}
	template <typename T = uintptr_t> T& m_VTOLRotationComponent() {
		return *(T*)((uintptr_t)this + 0xBEC);
	}
	template <typename T = Il2CppVector3> T& m_SpawnPos() {
		return *(T*)((uintptr_t)this + 0xBF0);
	}
	template <typename T = Il2CppVector3> T& m_MapOriginPoint() {
		return *(T*)((uintptr_t)this + 0xBFC);
	}
	template <typename T = uintptr_t> T& m_PawnMove() {
		return *(T*)((uintptr_t)this + 0xC08);
	}
	template <typename T = uintptr_t> T& m_CSVData() {
		return *(T*)((uintptr_t)this + 0xC0C);
	}
	template <typename T = uintptr_t> T& m_curDieType() {
		return *(T*)((uintptr_t)this + 0xC10);
	}
	template <typename T = bool> T& m_IsObserver() {
		return *(T*)((uintptr_t)this + 0xC14);
	}
	template <typename T = Il2CppVector3> T& m_LastSyncAngle() {
		return *(T*)((uintptr_t)this + 0xC18);
	}
	template <typename T = Il2CppQuaternion> T& m_EndAimRotation() {
		return *(T*)((uintptr_t)this + 0xC24);
	}
	template <typename T = bool> T& m_BeginLerpAimRotation() {
		return *(T*)((uintptr_t)this + 0xC34);
	}
	template <typename T = uintptr_t> T& m_LeftEjectEffectSocket() {
		return *(T*)((uintptr_t)this + 0xC38);
	}
	template <typename T = uintptr_t> T& m_RightEjectEffectSocket() {
		return *(T*)((uintptr_t)this + 0xC3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMeshAssetID_3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayInitSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreLoadAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreLoadAssetAsyncCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddAllInventory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHPChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySmokeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayHardDamageEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRespawnProtection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoDie() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDieAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Delay1PVTOLDie() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PawnExitCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DieEndReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroyPawnDeal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayDestroyPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDeadEffectByKill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndSwitchRole() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordWeaponInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TrySwitchWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecoveToLocalPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessSprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessServerMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PerformPhysics() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayHitBloodEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BornShowOnRadarForEnemy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TacticalRadarViewTeammateSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TacticalRadarViewEnemySprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TacticalRadarViewSpriteDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartMissileFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ThirdPersonFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayStopFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ThirdPersonSecondFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayFirstPersonStartMissileFireSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TurnWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClampRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginDeadReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldCalBoundary() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginLerpAimRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEjectEffectsActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}

	template <typename T = uint32_t> T get_PlayerID() {
		return ((T (*)(VTOLPawn*))(Il2CppBase() + 0x1BEB6BC))(this);
	}
	template <typename T = Il2CppVector3> T get_MapOriginPoint() {
		return ((T (*)(VTOLPawn*))(Il2CppBase() + 0x1BEB6CC))(this);
	}
	template <typename T = uintptr_t> T get_PawnMove() {
		return ((T (*)(VTOLPawn*))(Il2CppBase() + 0x1BE7D14))(this);
	}
	template <typename T = uintptr_t> T get_CSVData() {
		return ((T (*)(VTOLPawn*))(Il2CppBase() + 0x1BEB6E8))(this);
	}
	template <typename T = uintptr_t> T get_CurDieType() {
		return ((T (*)(VTOLPawn*))(Il2CppBase() + 0x1BEB6F0))(this);
	}
	template <typename T = int32_t> T GetMeshAssetID_3P() {
		return ((T (*)(VTOLPawn*))(Il2CppBase() + 0x1BEB6F8))(this);
	}
	template <typename T = uintptr_t> T get_FireColliderShape() {
		return ((T (*)(VTOLPawn*))(Il2CppBase() + 0x1BEB79C))(this);
	}
	template <typename T = bool> T get_DisplayImpactEffect() {
		return ((T (*)(VTOLPawn*))(Il2CppBase() + 0x1BEB7A4))(this);
	}
	template <typename T = uintptr_t> T get_ServerType() {
		return ((T (*)(VTOLPawn*))(Il2CppBase() + 0x1BEB7AC))(this);
	}
	template <typename T = bool> T get_RecentlyRendered() {
		return ((T (*)(VTOLPawn*))(Il2CppBase() + 0x1BEB7B4))(this);
	}
	template <typename T = bool> T get_IsObserver() {
		return ((T (*)(VTOLPawn*))(Il2CppBase() + 0x1BEB7BC))(this);
	}
	template <typename T = void> T InitPawn(uintptr_t info) {
		return ((T (*)(VTOLPawn*, uintptr_t))(Il2CppBase() + 0x1BEB7C4))(this, info);
	}
	template <typename T = void> T PlayInitSound() {
		return ((T (*)(VTOLPawn*))(Il2CppBase() + 0x1BEC36C))(this);
	}
	template <typename T = void> T PreLoadAsset() {
		return ((T (*)(VTOLPawn*))(Il2CppBase() + 0x1BEC108))(this);
	}
	template <typename T = void> T PreLoadAssetAsyncCallback(int32_t AssetID, uintptr_t param) {
		return ((T (*)(VTOLPawn*, int32_t, uintptr_t))(Il2CppBase() + 0x1BEC5F4))(this, AssetID, param);
	}
	template <typename T = void> T AddAllInventory() {
		return ((T (*)(VTOLPawn*))(Il2CppBase() + 0x1BEC6A8))(this);
	}
	template <typename T = void> T InitPlayerInfo(uintptr_t info) {
		return ((T (*)(VTOLPawn*, uintptr_t))(Il2CppBase() + 0x1BEC740))(this, info);
	}
	template <typename T = void> T OnHPChange() {
		return ((T (*)(VTOLPawn*))(Il2CppBase() + 0x1BEC978))(this);
	}
	template <typename T = void> T PlaySmokeEffect() {
		return ((T (*)(VTOLPawn*))(Il2CppBase() + 0x1BECFB0))(this);
	}
	template <typename T = void> T PlayHardDamageEffect() {
		return ((T (*)(VTOLPawn*))(Il2CppBase() + 0x1BECB5C))(this);
	}
	template <typename T = void> T CheckRespawnProtection() {
		return ((T (*)(VTOLPawn*))(Il2CppBase() + 0x1BED37C))(this);
	}
	template <typename T = void> T BeginDestroy() {
		return ((T (*)(VTOLPawn*))(Il2CppBase() + 0x1BED414))(this);
	}
	template <typename T = void> T DoDie(uintptr_t byType, bool destroyedImmediately) {
		return ((T (*)(VTOLPawn*, uintptr_t, bool))(Il2CppBase() + 0x1BED7E8))(this, byType, destroyedImmediately);
	}
	template <typename T = void> T PlayDieAnim(bool isHeadShot) {
		return ((T (*)(VTOLPawn*, bool))(Il2CppBase() + 0x1BEE558))(this, isHeadShot);
	}
	template <typename T = void> T Delay1PVTOLDie() {
		return ((T (*)(VTOLPawn*))(Il2CppBase() + 0x1BEE694))(this);
	}
	template <typename T = void> T PawnExitCallBack() {
		return ((T (*)(VTOLPawn*))(Il2CppBase() + 0x1BEE834))(this);
	}
	template <typename T = void> T DieEndReplay() {
		return ((T (*)(VTOLPawn*))(Il2CppBase() + 0x1BEE8E4))(this);
	}
	template <typename T = void> T DestroyPawn() {
		return ((T (*)(VTOLPawn*))(Il2CppBase() + 0x1BEE9F8))(this);
	}
	template <typename T = void> T OnDestroyPawnDeal() {
		return ((T (*)(VTOLPawn*))(Il2CppBase() + 0x1BED550))(this);
	}
	template <typename T = void> T DelayDestroyPawn() {
		return ((T (*)(VTOLPawn*))(Il2CppBase() + 0x1BEEAA8))(this);
	}
	template <typename T = void> T PlayDeadEffectByKill() {
		return ((T (*)(VTOLPawn*))(Il2CppBase() + 0x1BEEB60))(this);
	}
	template <typename T = void> T EndSwitchRole() {
		return ((T (*)(VTOLPawn*))(Il2CppBase() + 0x1BEEEB8))(this);
	}
	template <typename T = void> T RecordWeaponInfo(uintptr_t pawn) {
		return ((T (*)(VTOLPawn*, uintptr_t))(Il2CppBase() + 0x1BEF594))(this, pawn);
	}
	template <typename T = void> T TrySwitchWeapon(int32_t itemId, unsigned char slot, int32_t actorID, int32_t itemLevel, uint32_t skinID, bool isServerData) {
		return ((T (*)(VTOLPawn*, int32_t, unsigned char, int32_t, int32_t, uint32_t, bool))(Il2CppBase() + 0x1BEF704))(this, itemId, slot, actorID, itemLevel, skinID, isServerData);
	}
	template <typename T = void> T OnWeaponChanged() {
		return ((T (*)(VTOLPawn*))(Il2CppBase() + 0x1BEF924))(this);
	}
	template <typename T = void> T RecoveToLocalPlayer() {
		return ((T (*)(VTOLPawn*))(Il2CppBase() + 0x1BEDF7C))(this);
	}
	template <typename T = Il2CppQuaternion> T get_AimRotation() {
		return ((T (*)(VTOLPawn*))(Il2CppBase() + 0x1BEFAFC))(this);
	}
	template <typename T = void> T ProcessSprint(float deltaTime) {
		return ((T (*)(VTOLPawn*, float))(Il2CppBase() + 0x1BEFC34))(this, deltaTime);
	}
	template <typename T = void> T ProcessServerMove(float deltaTime) {
		return ((T (*)(VTOLPawn*, float))(Il2CppBase() + 0x1BEFCD4))(this, deltaTime);
	}
	template <typename T = void> T PerformPhysics(float deltaTime) {
		return ((T (*)(VTOLPawn*, float))(Il2CppBase() + 0x1BEFF28))(this, deltaTime);
	}
	template <typename T = void> T PlayHitBloodEffect(Il2CppVector3 pos, uintptr_t info) {
		return ((T (*)(VTOLPawn*, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x1BEFFC8))(this, pos, info);
	}
	template <typename T = bool> T BornShowOnRadarForEnemy() {
		return ((T (*)(VTOLPawn*))(Il2CppBase() + 0x1BF0088))(this);
	}
	template <typename T = Il2CppString*> T TacticalRadarViewTeammateSprite(uintptr_t eTacticalPawnState) {
		return ((T (*)(VTOLPawn*, uintptr_t))(Il2CppBase() + 0x1BF0128))(this, eTacticalPawnState);
	}
	template <typename T = Il2CppString*> T TacticalRadarViewEnemySprite() {
		return ((T (*)(VTOLPawn*))(Il2CppBase() + 0x1BF01E8))(this);
	}
	template <typename T = int32_t> T TacticalRadarViewSpriteDepth(uintptr_t spriteType) {
		return ((T (*)(VTOLPawn*, uintptr_t))(Il2CppBase() + 0x1BF02A0))(this, spriteType);
	}
	template <typename T = void> T StartFire() {
		return ((T (*)(VTOLPawn*))(Il2CppBase() + 0x1BF0350))(this);
	}
	template <typename T = void> T StartMissileFire() {
		return ((T (*)(VTOLPawn*))(Il2CppBase() + 0x1BEADFC))(this);
	}
	template <typename T = void> T ThirdPersonFire(Il2CppVector3 startPos, Il2CppVector3 dir) {
		return ((T (*)(VTOLPawn*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x1BF0548))(this, startPos, dir);
	}
	template <typename T = void> T DelayStopFire() {
		return ((T (*)(VTOLPawn*))(Il2CppBase() + 0x1BF08B8))(this);
	}
	template <typename T = void> T ThirdPersonSecondFire(int32_t ProjectileID) {
		return ((T (*)(VTOLPawn*, int32_t))(Il2CppBase() + 0x1BF0A28))(this, ProjectileID);
	}
	template <typename T = void> T PlayFirstPersonStartMissileFireSound() {
		return ((T (*)(VTOLPawn*))(Il2CppBase() + 0x1BF0E28))(this);
	}
	template <typename T = void> T TurnWeapon(Il2CppVector3 aimEulerAngles) {
		return ((T (*)(VTOLPawn*, Il2CppVector3))(Il2CppBase() + 0x1BF0F9C))(this, aimEulerAngles);
	}
	template <typename T = void> T AddComponent() {
		return ((T (*)(VTOLPawn*))(Il2CppBase() + 0x1BF11AC))(this);
	}
	template <typename T = void> T RemoveComponent() {
		return ((T (*)(VTOLPawn*))(Il2CppBase() + 0x1BF16BC))(this);
	}
	template <typename T = Il2CppVector3> T ClampRotation(Il2CppVector3 eulerAngle) {
		return ((T (*)(VTOLPawn*, Il2CppVector3))(Il2CppBase() + 0x1BF1978))(this, eulerAngle);
	}
	template <typename T = void> T BeginDeadReplay() {
		return ((T (*)(VTOLPawn*))(Il2CppBase() + 0x1BF1A68))(this);
	}
	template <typename T = bool> T ShouldCalBoundary() {
		return ((T (*)(VTOLPawn*))(Il2CppBase() + 0x1BF1C08))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(VTOLPawn*, float))(Il2CppBase() + 0x1BF1CA8))(this, deltaTime);
	}
	template <typename T = void> T BeginLerpAimRotation(Il2CppQuaternion aimRotation) {
		return ((T (*)(VTOLPawn*, Il2CppQuaternion))(Il2CppBase() + 0x1BF1E74))(this, aimRotation);
	}
	template <typename T = void> T SetEjectEffectsActive(bool active) {
		return ((T (*)(VTOLPawn*, bool))(Il2CppBase() + 0x1BF1F54))(this, active);
	}
	template <typename T = void> T SetHidden(bool isHidden) {
		return ((T (*)(VTOLPawn*, bool))(Il2CppBase() + 0x1BF21F4))(this, isHidden);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetMeshAssetID_3P() {
		return ((T (*)(VTOLPawn*))(Il2CppBase() + 0x1BF22B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitPawn(uintptr_t P0) {
		return ((T (*)(VTOLPawn*, uintptr_t))(Il2CppBase() + 0x1BF22BC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_AddAllInventory() {
		return ((T (*)(VTOLPawn*))(Il2CppBase() + 0x1BF22C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitPlayerInfo(uintptr_t P0) {
		return ((T (*)(VTOLPawn*, uintptr_t))(Il2CppBase() + 0x1BF22CC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnHPChange() {
		return ((T (*)(VTOLPawn*))(Il2CppBase() + 0x1BF22D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CheckRespawnProtection() {
		return ((T (*)(VTOLPawn*))(Il2CppBase() + 0x1BF22DC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginDestroy() {
		return ((T (*)(VTOLPawn*))(Il2CppBase() + 0x1BF22E4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayDieAnim(bool P0) {
		return ((T (*)(VTOLPawn*, bool))(Il2CppBase() + 0x1BF22EC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_DestroyPawn() {
		return ((T (*)(VTOLPawn*))(Il2CppBase() + 0x1BF22F4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndSwitchRole() {
		return ((T (*)(VTOLPawn*))(Il2CppBase() + 0x1BF22FC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TrySwitchWeapon(int32_t P0, unsigned char P1, int32_t P2, int32_t P3, uint32_t P4, bool P5) {
		return ((T (*)(VTOLPawn*, int32_t, unsigned char, int32_t, int32_t, uint32_t, bool))(Il2CppBase() + 0x1BF2304))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = void> T xLuaBaseProxy_OnWeaponChanged() {
		return ((T (*)(VTOLPawn*))(Il2CppBase() + 0x1BF2338))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ProcessSprint(float P0) {
		return ((T (*)(VTOLPawn*, float))(Il2CppBase() + 0x1BF2340))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ProcessServerMove(float P0) {
		return ((T (*)(VTOLPawn*, float))(Il2CppBase() + 0x1BF2348))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PerformPhysics(float P0) {
		return ((T (*)(VTOLPawn*, float))(Il2CppBase() + 0x1BF2350))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayHitBloodEffect(Il2CppVector3 P0, uintptr_t P1) {
		return ((T (*)(VTOLPawn*, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x1BF2358))(this, P0, P1);
	}
	template <typename T = bool> T xLuaBaseProxy_BornShowOnRadarForEnemy() {
		return ((T (*)(VTOLPawn*))(Il2CppBase() + 0x1BF237C))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_TacticalRadarViewTeammateSprite(uintptr_t P0) {
		return ((T (*)(VTOLPawn*, uintptr_t))(Il2CppBase() + 0x1BF2384))(this, P0);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_TacticalRadarViewEnemySprite() {
		return ((T (*)(VTOLPawn*))(Il2CppBase() + 0x1BF238C))(this);
	}
	template <typename T = int32_t> T xLuaBaseProxy_TacticalRadarViewSpriteDepth(uintptr_t P0) {
		return ((T (*)(VTOLPawn*, uintptr_t))(Il2CppBase() + 0x1BF2394))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_StartFire() {
		return ((T (*)(VTOLPawn*))(Il2CppBase() + 0x1BF239C))(this);
	}
	template <typename T = Il2CppVector3> T xLuaBaseProxy_ClampRotation(Il2CppVector3 P0) {
		return ((T (*)(VTOLPawn*, Il2CppVector3))(Il2CppBase() + 0x1BF23A4))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_ShouldCalBoundary() {
		return ((T (*)(VTOLPawn*))(Il2CppBase() + 0x1BF23C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(VTOLPawn*, float))(Il2CppBase() + 0x1BF23D0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SetHidden(bool P0) {
		return ((T (*)(VTOLPawn*, bool))(Il2CppBase() + 0x1BF23D8))(this, P0);
	}

};

}
