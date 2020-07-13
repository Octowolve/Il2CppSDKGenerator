#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class SentryGunPawn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "SentryGunPawn"));
	}

	template <typename T = uint32_t> T& m_SentryGunID() {
		return *(T*)((uintptr_t)this + 0xBCC);
	}
	template <typename T = uintptr_t> T& m_PropertySet() {
		return *(T*)((uintptr_t)this + 0xBD0);
	}
	template <typename T = float> T& m_AliveTime() {
		return *(T*)((uintptr_t)this + 0xBD4);
	}
	template <typename T = uintptr_t> T& m_ActorRoot() {
		return *(T*)((uintptr_t)this + 0xBD8);
	}
	template <typename T = int32_t> T& m_DamageSmokeEffectID() {
		return *(T*)((uintptr_t)this + 0xBDC);
	}
	template <typename T = int32_t> T& m_DamageSparkEffectID() {
		return *(T*)((uintptr_t)this + 0xBE0);
	}
	template <typename T = uintptr_t> T& m_DamageSmokeEffect() {
		return *(T*)((uintptr_t)this + 0xBE4);
	}
	template <typename T = uintptr_t> T& m_DamageSparkEffect() {
		return *(T*)((uintptr_t)this + 0xBE8);
	}
	template <typename T = uintptr_t> T& m_CSVData() {
		return *(T*)((uintptr_t)this + 0xBEC);
	}
	template <typename T = uintptr_t> T& m_SentryGunWeaponComponent() {
		return *(T*)((uintptr_t)this + 0xBF0);
	}
	template <typename T = Il2CppVector3> T& m_CenterOffset() {
		return *(T*)((uintptr_t)this + 0xBF4);
	}
	template <typename T = bool> T& m_InitAddComponent() {
		return *(T*)((uintptr_t)this + 0xC00);
	}
	template <typename T = bool> T& m_StartIdleState() {
		return *(T*)((uintptr_t)this + 0xC01);
	}
	template <typename T = uintptr_t> T& m_InvalidEffect() {
		return *(T*)((uintptr_t)this + 0xC04);
	}
	template <typename T = bool> T& m_IsInDizzyState() {
		return *(T*)((uintptr_t)this + 0xC08);
	}
	template <typename T = uint32_t> T& m_LockTargetID() {
		return *(T*)((uintptr_t)this + 0xC0C);
	}
	template <typename T = float> T& m_LockTargetStartTime() {
		return *(T*)((uintptr_t)this + 0xC10);
	}
	template <typename T = bool> T& m_IsStartFiring() {
		return *(T*)((uintptr_t)this + 0xC14);
	}
	template <typename T = Il2CppVector3> T& fireDir() {
		return *(T*)((uintptr_t)this + 0xC18);
	}
	template <typename T = float> T& m_RemainingInvalidStateTime() {
		return *(T*)((uintptr_t)this + 0xC24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMeshAssetID_3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSentryGunPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHPChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoPlaySmokeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreLoadAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreLoadAssetAsyncCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddAllInventory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFireDir() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponAimRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySelfDieAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoDie() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyPartical() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayDestroyPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayPlayDieEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoPlayDieEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayInitSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDieSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFireTarget() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_InitAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldCalBoundary() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRemainingInvalidStateTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginInvalidState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndInvalidState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitInvalidEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}

	template <typename T = uint32_t> T get_PlayerID() {
		return ((T (*)(SentryGunPawn*))(Il2CppBase() + 0x2E00DA0))(this);
	}
	template <typename T = uintptr_t> T get_PropertySet() {
		return ((T (*)(SentryGunPawn*))(Il2CppBase() + 0x2E00DB0))(this);
	}
	template <typename T = int32_t> T get_DeathEffectID() {
		return ((T (*)(SentryGunPawn*))(Il2CppBase() + 0x2E00DB8))(this);
	}
	template <typename T = float> T get_DeathEffectLifeTime() {
		return ((T (*)(SentryGunPawn*))(Il2CppBase() + 0x2E00DC4))(this);
	}
	template <typename T = float> T get_PlayDieAnimTime() {
		return ((T (*)(SentryGunPawn*))(Il2CppBase() + 0x2E00DD0))(this);
	}
	template <typename T = Il2CppString*> T get_DamageEffectSocketName() {
		return ((T (*)(SentryGunPawn*))(Il2CppBase() + 0x2E00DD8))(this);
	}
	template <typename T = int32_t> T GetMeshAssetID_3P() {
		return ((T (*)(SentryGunPawn*))(Il2CppBase() + 0x2DF49F0))(this);
	}
	template <typename T = uintptr_t> T get_FireColliderShape() {
		return ((T (*)(SentryGunPawn*))(Il2CppBase() + 0x2E00E50))(this);
	}
	template <typename T = bool> T get_DisplayImpactEffect() {
		return ((T (*)(SentryGunPawn*))(Il2CppBase() + 0x2E00E58))(this);
	}
	template <typename T = uintptr_t> T get_ServerType() {
		return ((T (*)(SentryGunPawn*))(Il2CppBase() + 0x2E00E60))(this);
	}
	template <typename T = bool> T get_IsInDizzyState() {
		return ((T (*)(SentryGunPawn*))(Il2CppBase() + 0x2DF138C))(this);
	}
	template <typename T = void> T set_IsInDizzyState(bool value) {
		return ((T (*)(SentryGunPawn*, bool))(Il2CppBase() + 0x2E00E68))(this, value);
	}
	template <typename T = bool> T get_IsAvatarLoadSync() {
		return ((T (*)(SentryGunPawn*))(Il2CppBase() + 0x2E00E70))(this);
	}
	template <typename T = bool> T IsSentryGunPawn() {
		return ((T (*)(SentryGunPawn*))(Il2CppBase() + 0x2E00E78))(this);
	}
	template <typename T = void> T OnHPChange() {
		return ((T (*)(SentryGunPawn*))(Il2CppBase() + 0x2E00F18))(this);
	}
	template <typename T = void> T DoPlaySmokeEffect() {
		return ((T (*)(SentryGunPawn*))(Il2CppBase() + 0x2E00FDC))(this);
	}
	template <typename T = Il2CppVector3> T get_TargetCenterPostion() {
		return ((T (*)(SentryGunPawn*))(Il2CppBase() + 0x2E013F0))(this);
	}
	template <typename T = Il2CppVector3> T get_TargetTopPostion() {
		return ((T (*)(SentryGunPawn*))(Il2CppBase() + 0x2E0144C))(this);
	}
	template <typename T = uint32_t> T get_LockTargetID() {
		return ((T (*)(SentryGunPawn*))(Il2CppBase() + 0x2E014C4))(this);
	}
	template <typename T = void> T set_LockTargetID(uint32_t value) {
		return ((T (*)(SentryGunPawn*, uint32_t))(Il2CppBase() + 0x2E00D80))(this, value);
	}
	template <typename T = bool> T get_IsStartFiring() {
		return ((T (*)(SentryGunPawn*))(Il2CppBase() + 0x2E014CC))(this);
	}
	template <typename T = Il2CppVector3> T get_FireDir() {
		return ((T (*)(SentryGunPawn*))(Il2CppBase() + 0x2E014D4))(this);
	}
	template <typename T = void> T InitPawn(uintptr_t info) {
		return ((T (*)(SentryGunPawn*, uintptr_t))(Il2CppBase() + 0x2DF1B68))(this, info);
	}
	template <typename T = void> T PreLoadAsset() {
		return ((T (*)(SentryGunPawn*))(Il2CppBase() + 0x2E014F0))(this);
	}
	template <typename T = void> T PreLoadAssetAsyncCallback(int32_t assetID, uintptr_t param) {
		return ((T (*)(SentryGunPawn*, int32_t, uintptr_t))(Il2CppBase() + 0x2E01918))(this, assetID, param);
	}
	template <typename T = void> T AddAllInventory() {
		return ((T (*)(SentryGunPawn*))(Il2CppBase() + 0x2E019CC))(this);
	}
	template <typename T = void> T InitPlayerInfo(uintptr_t info) {
		return ((T (*)(SentryGunPawn*, uintptr_t))(Il2CppBase() + 0x2E01A64))(this, info);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(SentryGunPawn*, float))(Il2CppBase() + 0x2E01B88))(this, deltaTime);
	}
	template <typename T = void> T StartFire() {
		return ((T (*)(SentryGunPawn*))(Il2CppBase() + 0x2E02120))(this);
	}
	template <typename T = void> T StopFire() {
		return ((T (*)(SentryGunPawn*))(Il2CppBase() + 0x2E0237C))(this);
	}
	template <typename T = void> T SetFireDir(Il2CppVector3 tempFireDir) {
		return ((T (*)(SentryGunPawn*, Il2CppVector3))(Il2CppBase() + 0x2E02464))(this, tempFireDir);
	}
	template <typename T = void> T InitComponent() {
		return ((T (*)(SentryGunPawn*))(Il2CppBase() + 0x2DF2458))(this);
	}
	template <typename T = void> T AddComponent() {
		return ((T (*)(SentryGunPawn*))(Il2CppBase() + 0x2DF4AA8))(this);
	}
	template <typename T = void> T RemoveComponent() {
		return ((T (*)(SentryGunPawn*))(Il2CppBase() + 0x2DF4C78))(this);
	}
	template <typename T = Il2CppQuaternion> T GetWeaponAimRotation() {
		return ((T (*)(SentryGunPawn*))(Il2CppBase() + 0x2DF4DA0))(this);
	}
	template <typename T = void> T PlaySelfDieAnim() {
		return ((T (*)(SentryGunPawn*))(Il2CppBase() + 0x2DF5044))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(SentryGunPawn*))(Il2CppBase() + 0x2E02E90))(this);
	}
	template <typename T = void> T DestroyPawn() {
		return ((T (*)(SentryGunPawn*))(Il2CppBase() + 0x2E03050))(this);
	}
	template <typename T = void> T DoDie(uintptr_t byType) {
		return ((T (*)(SentryGunPawn*, uintptr_t))(Il2CppBase() + 0x2DF36C4))(this, byType);
	}
	template <typename T = void> T SetHidden(bool isHidden) {
		return ((T (*)(SentryGunPawn*, bool))(Il2CppBase() + 0x2E03384))(this, isHidden);
	}
	template <typename T = void> T DestroyPartical() {
		return ((T (*)(SentryGunPawn*))(Il2CppBase() + 0x2E031FC))(this);
	}
	template <typename T = void> T DelayDestroyPawn() {
		return ((T (*)(SentryGunPawn*))(Il2CppBase() + 0x2E03564))(this);
	}
	template <typename T = void> T DelayPlayDieEffect() {
		return ((T (*)(SentryGunPawn*))(Il2CppBase() + 0x2E03660))(this);
	}
	template <typename T = void> T DoPlayDieEffect() {
		return ((T (*)(SentryGunPawn*))(Il2CppBase() + 0x2E03740))(this);
	}
	template <typename T = void> T PlayInitSound() {
		return ((T (*)(SentryGunPawn*))(Il2CppBase() + 0x2DF5180))(this);
	}
	template <typename T = void> T PlayDieSound() {
		return ((T (*)(SentryGunPawn*))(Il2CppBase() + 0x2DF54AC))(this);
	}
	template <typename T = void> T SetFireTarget(uint32_t targetID) {
		return ((T (*)(SentryGunPawn*, uint32_t))(Il2CppBase() + 0x2DF4ED4))(this, targetID);
	}
	template <typename T = void> T PlayHitBloodEffect(Il2CppVector3 pos, uintptr_t info) {
		return ((T (*)(SentryGunPawn*, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x2E03BE0))(this, pos, info);
	}
	template <typename T = bool> T BornShowOnRadarForEnemy() {
		return ((T (*)(SentryGunPawn*))(Il2CppBase() + 0x2E03CA0))(this);
	}
	template <typename T = Il2CppString*> T TacticalRadarViewTeammateSprite(uintptr_t eTacticalPawnState) {
		return ((T (*)(SentryGunPawn*, uintptr_t))(Il2CppBase() + 0x2DF5750))(this, eTacticalPawnState);
	}
	template <typename T = Il2CppString*> T TacticalRadarViewEnemySprite() {
		return ((T (*)(SentryGunPawn*))(Il2CppBase() + 0x2DF5814))(this);
	}
	template <typename T = int32_t> T TacticalRadarViewSpriteDepth(uintptr_t spriteType) {
		return ((T (*)(SentryGunPawn*, uintptr_t))(Il2CppBase() + 0x2DF58D0))(this, spriteType);
	}
	template <typename T = void> T InitAnim() {
		return ((T (*)(SentryGunPawn*))(Il2CppBase() + 0x2DF26CC))(this);
	}
	template <typename T = bool> T ShouldCalBoundary() {
		return ((T (*)(SentryGunPawn*))(Il2CppBase() + 0x2DF5984))(this);
	}
	template <typename T = bool> T get_IsCanBeQuickKnife() {
		return ((T (*)(SentryGunPawn*))(Il2CppBase() + 0x2E03D40))(this);
	}
	template <typename T = void> T UpdateRemainingInvalidStateTime(float deltaTime) {
		return ((T (*)(SentryGunPawn*, float))(Il2CppBase() + 0x2E01E44))(this, deltaTime);
	}
	template <typename T = void> T BeginInvalidState(float duration) {
		return ((T (*)(SentryGunPawn*, float))(Il2CppBase() + 0x2E03D48))(this, duration);
	}
	template <typename T = void> T EndInvalidState() {
		return ((T (*)(SentryGunPawn*))(Il2CppBase() + 0x2E04048))(this);
	}
	template <typename T = void> T InitInvalidEffect() {
		return ((T (*)(SentryGunPawn*))(Il2CppBase() + 0x2E0176C))(this);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetMeshAssetID_3P() {
		return ((T (*)(SentryGunPawn*))(Il2CppBase() + 0x2E04260))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsSentryGunPawn() {
		return ((T (*)(SentryGunPawn*))(Il2CppBase() + 0x2E04268))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnHPChange() {
		return ((T (*)(SentryGunPawn*))(Il2CppBase() + 0x2E04270))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitPawn(uintptr_t P0) {
		return ((T (*)(SentryGunPawn*, uintptr_t))(Il2CppBase() + 0x2E04278))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_AddAllInventory() {
		return ((T (*)(SentryGunPawn*))(Il2CppBase() + 0x2E04280))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitPlayerInfo(uintptr_t P0) {
		return ((T (*)(SentryGunPawn*, uintptr_t))(Il2CppBase() + 0x2E04288))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(SentryGunPawn*, float))(Il2CppBase() + 0x2E04290))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_StartFire() {
		return ((T (*)(SentryGunPawn*))(Il2CppBase() + 0x2E04298))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopFire() {
		return ((T (*)(SentryGunPawn*))(Il2CppBase() + 0x2E042A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetFireDir(Il2CppVector3 P0) {
		return ((T (*)(SentryGunPawn*, Il2CppVector3))(Il2CppBase() + 0x2E042A8))(this, P0);
	}
	template <typename T = Il2CppQuaternion> T xLuaBaseProxy_GetWeaponAimRotation() {
		return ((T (*)(SentryGunPawn*))(Il2CppBase() + 0x2E042C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(SentryGunPawn*))(Il2CppBase() + 0x2E042DC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DestroyPawn() {
		return ((T (*)(SentryGunPawn*))(Il2CppBase() + 0x2E042E4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetHidden(bool P0) {
		return ((T (*)(SentryGunPawn*, bool))(Il2CppBase() + 0x2E042EC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayHitBloodEffect(Il2CppVector3 P0, uintptr_t P1) {
		return ((T (*)(SentryGunPawn*, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x2E042F4))(this, P0, P1);
	}
	template <typename T = bool> T xLuaBaseProxy_BornShowOnRadarForEnemy() {
		return ((T (*)(SentryGunPawn*))(Il2CppBase() + 0x2E04318))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_TacticalRadarViewTeammateSprite(uintptr_t P0) {
		return ((T (*)(SentryGunPawn*, uintptr_t))(Il2CppBase() + 0x2E04320))(this, P0);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_TacticalRadarViewEnemySprite() {
		return ((T (*)(SentryGunPawn*))(Il2CppBase() + 0x2E04328))(this);
	}
	template <typename T = int32_t> T xLuaBaseProxy_TacticalRadarViewSpriteDepth(uintptr_t P0) {
		return ((T (*)(SentryGunPawn*, uintptr_t))(Il2CppBase() + 0x2E04330))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_InitAnim() {
		return ((T (*)(SentryGunPawn*))(Il2CppBase() + 0x2E04338))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_ShouldCalBoundary() {
		return ((T (*)(SentryGunPawn*))(Il2CppBase() + 0x2E04340))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginInvalidState(float P0) {
		return ((T (*)(SentryGunPawn*, float))(Il2CppBase() + 0x2E04348))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_EndInvalidState() {
		return ((T (*)(SentryGunPawn*))(Il2CppBase() + 0x2E04350))(this);
	}

};

}
