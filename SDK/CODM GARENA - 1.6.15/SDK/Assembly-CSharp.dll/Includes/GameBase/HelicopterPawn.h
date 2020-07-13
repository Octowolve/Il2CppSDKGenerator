#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class HelicopterPawn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "HelicopterPawn"));
	}

	template <typename T = uint32_t> T& m_HelicopterNPCID() {
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
	template <typename T = int32_t> T& m_DeathEffectID() {
		return *(T*)((uintptr_t)this + 0xBDC);
	}
	template <typename T = Il2CppString*> static T& m_DamageEffectSocketName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_DamageSmokeEffectID() {
		return *(T*)((uintptr_t)this + 0xBE0);
	}
	template <typename T = uintptr_t> T& m_DamageSmokeEffect() {
		return *(T*)((uintptr_t)this + 0xBE4);
	}
	template <typename T = bool> T& m_IsShowingDamageSmokeEffect() {
		return *(T*)((uintptr_t)this + 0xBE8);
	}
	template <typename T = uintptr_t> T& m_CSVData() {
		return *(T*)((uintptr_t)this + 0xBEC);
	}
	template <typename T = uintptr_t> T& m_PawnMove() {
		return *(T*)((uintptr_t)this + 0xBF0);
	}
	template <typename T = int32_t> T& m_curLockTargetID() {
		return *(T*)((uintptr_t)this + 0xBF4);
	}
	template <typename T = Il2CppString*> static T& m_FireSocketNameVertical() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& m_FireSocketNameHorizontal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_FireSocketTransformVertical() {
		return *(T*)((uintptr_t)this + 0xBF8);
	}
	template <typename T = uintptr_t> T& m_FireSocketTransformHorizontal() {
		return *(T*)((uintptr_t)this + 0xBFC);
	}
	template <typename T = bool> T& m_helicopterFiring() {
		return *(T*)((uintptr_t)this + 0xC00);
	}
	template <typename T = Il2CppVector3> T& ms_FirePosOffset() {
		return *(T*)((uintptr_t)this + 0xC04);
	}
	template <typename T = Il2CppVector3> T& m_SetFireDir() {
		return *(T*)((uintptr_t)this + 0xC10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMeshAssetID_3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSwitchRoleComponentType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsHelicopterPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayInitSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponAttachmentLoadComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Die() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Die() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHPChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSmokeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LockTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponAimRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFirePos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFireDir() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateFireSocketRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayHitBloodEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldCalBoundary() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TacticalRadarViewTeammateSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TacticalRadarViewEnemySprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedToShowEnemySpriteOnRadar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TacticalRadarViewSpriteDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}

	template <typename T = uintptr_t> T get_LogicType() {
		return ((T (*)(HelicopterPawn*))(Il2CppBase() + 0x1EE46EC))(this);
	}
	template <typename T = uint32_t> T get_PlayerID() {
		return ((T (*)(HelicopterPawn*))(Il2CppBase() + 0x1EE46F4))(this);
	}
	template <typename T = uintptr_t> T get_PropertySet() {
		return ((T (*)(HelicopterPawn*))(Il2CppBase() + 0x1EE4704))(this);
	}
	template <typename T = uintptr_t> T get_CSVData() {
		return ((T (*)(HelicopterPawn*))(Il2CppBase() + 0x1EE470C))(this);
	}
	template <typename T = uintptr_t> T get_PawnMove() {
		return ((T (*)(HelicopterPawn*))(Il2CppBase() + 0x1EE4714))(this);
	}
	template <typename T = int32_t> T GetMeshAssetID_3P() {
		return ((T (*)(HelicopterPawn*))(Il2CppBase() + 0x1EE471C))(this);
	}
	template <typename T = uintptr_t> T get_FireColliderShape() {
		return ((T (*)(HelicopterPawn*))(Il2CppBase() + 0x1EE47D8))(this);
	}
	template <typename T = uintptr_t> T GetSwitchRoleComponentType() {
		return ((T (*)(HelicopterPawn*))(Il2CppBase() + 0x1EE47E0))(this);
	}
	template <typename T = bool> T get_DisplayImpactEffect() {
		return ((T (*)(HelicopterPawn*))(Il2CppBase() + 0x1EE48DC))(this);
	}
	template <typename T = uintptr_t> T get_ServerType() {
		return ((T (*)(HelicopterPawn*))(Il2CppBase() + 0x1EE48E4))(this);
	}
	template <typename T = bool> T get_IsAvatarLoadSync() {
		return ((T (*)(HelicopterPawn*))(Il2CppBase() + 0x1EE48EC))(this);
	}
	template <typename T = bool> T IsHelicopterPawn() {
		return ((T (*)(HelicopterPawn*))(Il2CppBase() + 0x1EE48F4))(this);
	}
	template <typename T = void> T InitPawn(uintptr_t info) {
		return ((T (*)(HelicopterPawn*, uintptr_t))(Il2CppBase() + 0x1EE4994))(this, info);
	}
	template <typename T = void> T PlayInitSound() {
		return ((T (*)(HelicopterPawn*))(Il2CppBase() + 0x1EE5368))(this);
	}
	template <typename T = void> T OnWeaponAttachmentLoadComplete() {
		return ((T (*)(HelicopterPawn*))(Il2CppBase() + 0x1EE55A8))(this);
	}
	template <typename T = void> T Die(uintptr_t byType) {
		return ((T (*)(HelicopterPawn*, uintptr_t))(Il2CppBase() + 0x1EE5650))(this, byType);
	}
	template <typename T = void> T DestroyPawn() {
		return ((T (*)(HelicopterPawn*))(Il2CppBase() + 0x1EE59CC))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(HelicopterPawn*))(Il2CppBase() + 0x1EE5E14))(this);
	}
	template <typename T = void> T Die_1(bool isHeadShot, uintptr_t damageType) {
		return ((T (*)(HelicopterPawn*, bool, uintptr_t))(Il2CppBase() + 0x1EE5FF8))(this, isHeadShot, damageType);
	}
	template <typename T = void> T OnHPChange() {
		return ((T (*)(HelicopterPawn*))(Il2CppBase() + 0x1EE6180))(this);
	}
	template <typename T = void> T ShowSmokeEffect() {
		return ((T (*)(HelicopterPawn*))(Il2CppBase() + 0x1EE6244))(this);
	}
	template <typename T = void> T LockTarget(int32_t targetID) {
		return ((T (*)(HelicopterPawn*, int32_t))(Il2CppBase() + 0x1EE6678))(this, targetID);
	}
	template <typename T = void> T DelayFire() {
		return ((T (*)(HelicopterPawn*))(Il2CppBase() + 0x1EE683C))(this);
	}
	template <typename T = void> T StartFire() {
		return ((T (*)(HelicopterPawn*))(Il2CppBase() + 0x1EE691C))(this);
	}
	template <typename T = void> T StopFire() {
		return ((T (*)(HelicopterPawn*))(Il2CppBase() + 0x1EE6C8C))(this);
	}
	template <typename T = Il2CppQuaternion> T GetWeaponAimRotation() {
		return ((T (*)(HelicopterPawn*))(Il2CppBase() + 0x1EE6F7C))(this);
	}
	template <typename T = void> T InitMesh(uintptr_t model) {
		return ((T (*)(HelicopterPawn*, uintptr_t))(Il2CppBase() + 0x1EE7390))(this, model);
	}
	template <typename T = Il2CppVector3> T GetFirePos() {
		return ((T (*)(HelicopterPawn*))(Il2CppBase() + 0x1EE722C))(this);
	}
	template <typename T = void> T SetFireDir(Il2CppVector3 fireDir) {
		return ((T (*)(HelicopterPawn*, Il2CppVector3))(Il2CppBase() + 0x1EE74D0))(this, fireDir);
	}
	template <typename T = void> T UpdateFireSocketRotation() {
		return ((T (*)(HelicopterPawn*))(Il2CppBase() + 0x1EE75BC))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(HelicopterPawn*))(Il2CppBase() + 0x1EE7AA4))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(HelicopterPawn*, float))(Il2CppBase() + 0x1EE7BA0))(this, deltaTime);
	}
	template <typename T = void> T PlayHitBloodEffect(Il2CppVector3 pos, uintptr_t info) {
		return ((T (*)(HelicopterPawn*, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x1EE7C54))(this, pos, info);
	}
	template <typename T = bool> T ShouldCalBoundary() {
		return ((T (*)(HelicopterPawn*))(Il2CppBase() + 0x1EE7D14))(this);
	}
	template <typename T = Il2CppString*> T TacticalRadarViewTeammateSprite(uintptr_t eTacticalPawnState) {
		return ((T (*)(HelicopterPawn*, uintptr_t))(Il2CppBase() + 0x1EE7DB4))(this, eTacticalPawnState);
	}
	template <typename T = Il2CppString*> T TacticalRadarViewEnemySprite() {
		return ((T (*)(HelicopterPawn*))(Il2CppBase() + 0x1EE7E74))(this);
	}
	template <typename T = bool> T NeedToShowEnemySpriteOnRadar() {
		return ((T (*)(HelicopterPawn*))(Il2CppBase() + 0x1EE7F2C))(this);
	}
	template <typename T = int32_t> T TacticalRadarViewSpriteDepth(uintptr_t spriteType) {
		return ((T (*)(HelicopterPawn*, uintptr_t))(Il2CppBase() + 0x1EE7FCC))(this, spriteType);
	}
	template <typename T = void> T SetHidden(bool isHidden) {
		return ((T (*)(HelicopterPawn*, bool))(Il2CppBase() + 0x1EE807C))(this, isHidden);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetMeshAssetID_3P() {
		return ((T (*)(HelicopterPawn*))(Il2CppBase() + 0x1EE8298))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetSwitchRoleComponentType() {
		return ((T (*)(HelicopterPawn*))(Il2CppBase() + 0x1EE82A0))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsHelicopterPawn() {
		return ((T (*)(HelicopterPawn*))(Il2CppBase() + 0x1EE82A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitPawn(uintptr_t P0) {
		return ((T (*)(HelicopterPawn*, uintptr_t))(Il2CppBase() + 0x1EE82B0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnWeaponAttachmentLoadComplete() {
		return ((T (*)(HelicopterPawn*))(Il2CppBase() + 0x1EE82B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DestroyPawn() {
		return ((T (*)(HelicopterPawn*))(Il2CppBase() + 0x1EE82C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(HelicopterPawn*))(Il2CppBase() + 0x1EE82C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Die(bool P0, uintptr_t P1) {
		return ((T (*)(HelicopterPawn*, bool, uintptr_t))(Il2CppBase() + 0x1EE82D0))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnHPChange() {
		return ((T (*)(HelicopterPawn*))(Il2CppBase() + 0x1EE82D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartFire() {
		return ((T (*)(HelicopterPawn*))(Il2CppBase() + 0x1EE82E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopFire() {
		return ((T (*)(HelicopterPawn*))(Il2CppBase() + 0x1EE82E8))(this);
	}
	template <typename T = Il2CppQuaternion> T xLuaBaseProxy_GetWeaponAimRotation() {
		return ((T (*)(HelicopterPawn*))(Il2CppBase() + 0x1EE82F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitMesh(uintptr_t P0) {
		return ((T (*)(HelicopterPawn*, uintptr_t))(Il2CppBase() + 0x1EE8304))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SetFireDir(Il2CppVector3 P0) {
		return ((T (*)(HelicopterPawn*, Il2CppVector3))(Il2CppBase() + 0x1EE830C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(HelicopterPawn*, float))(Il2CppBase() + 0x1EE832C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayHitBloodEffect(Il2CppVector3 P0, uintptr_t P1) {
		return ((T (*)(HelicopterPawn*, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x1EE8334))(this, P0, P1);
	}
	template <typename T = bool> T xLuaBaseProxy_ShouldCalBoundary() {
		return ((T (*)(HelicopterPawn*))(Il2CppBase() + 0x1EE8358))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_TacticalRadarViewTeammateSprite(uintptr_t P0) {
		return ((T (*)(HelicopterPawn*, uintptr_t))(Il2CppBase() + 0x1EE8360))(this, P0);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_TacticalRadarViewEnemySprite() {
		return ((T (*)(HelicopterPawn*))(Il2CppBase() + 0x1EE8368))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_NeedToShowEnemySpriteOnRadar() {
		return ((T (*)(HelicopterPawn*))(Il2CppBase() + 0x1EE8370))(this);
	}
	template <typename T = int32_t> T xLuaBaseProxy_TacticalRadarViewSpriteDepth(uintptr_t P0) {
		return ((T (*)(HelicopterPawn*, uintptr_t))(Il2CppBase() + 0x1EE8378))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SetHidden(bool P0) {
		return ((T (*)(HelicopterPawn*, bool))(Il2CppBase() + 0x1EE8380))(this, P0);
	}

};

}
