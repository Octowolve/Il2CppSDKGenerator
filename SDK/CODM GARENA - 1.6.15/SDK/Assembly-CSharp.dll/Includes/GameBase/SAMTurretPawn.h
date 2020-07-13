#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class SAMTurretPawn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "SAMTurretPawn"));
	}

	template <typename T = uintptr_t> T& m_SAMTurretComponent() {
		return *(T*)((uintptr_t)this + 0xC28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_FireSocketNames() {
		return *(T*)((uintptr_t)this + 0xC2C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_FireSocketTransforemList() {
		return *(T*)((uintptr_t)this + 0xC30);
	}
	template <typename T = uintptr_t> T& m_Target() {
		return *(T*)((uintptr_t)this + 0xC34);
	}
	template <typename T = uint32_t> T& m_TargetID() {
		return *(T*)((uintptr_t)this + 0xC38);
	}
	template <typename T = int32_t> T& m_FireSocketIndex() {
		return *(T*)((uintptr_t)this + 0xC3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMeshAssetID_3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSAMTurretPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponAimRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFireTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySelfDieAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoDie() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayInitSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDieSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAvatarLoadCompleted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ServerNotifyStartFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestStartFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TacticalRadarViewTeammateSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TacticalRadarViewEnemySprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TacticalRadarViewSpriteDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldCalBoundary() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}

	template <typename T = Il2CppString*> T get_DamageEffectSocketName() {
		return ((T (*)(SAMTurretPawn*))(Il2CppBase() + 0x2DF194C))(this);
	}
	template <typename T = int32_t> T get_DeathEffectID() {
		return ((T (*)(SAMTurretPawn*))(Il2CppBase() + 0x2DF1954))(this);
	}
	template <typename T = float> T get_DeathEffectLifeTime() {
		return ((T (*)(SAMTurretPawn*))(Il2CppBase() + 0x2DF1960))(this);
	}
	template <typename T = int32_t> T GetMeshAssetID_3P() {
		return ((T (*)(SAMTurretPawn*))(Il2CppBase() + 0x2DF196C))(this);
	}
	template <typename T = bool> T IsSAMTurretPawn() {
		return ((T (*)(SAMTurretPawn*))(Il2CppBase() + 0x2DF1A10))(this);
	}
	template <typename T = void> T InitPawn(uintptr_t info) {
		return ((T (*)(SAMTurretPawn*, uintptr_t))(Il2CppBase() + 0x2DF1AB0))(this, info);
	}
	template <typename T = void> T InitAnim() {
		return ((T (*)(SAMTurretPawn*))(Il2CppBase() + 0x2DF2524))(this);
	}
	template <typename T = void> T AddComponent() {
		return ((T (*)(SAMTurretPawn*))(Il2CppBase() + 0x2DF2878))(this);
	}
	template <typename T = void> T RemoveComponent() {
		return ((T (*)(SAMTurretPawn*))(Il2CppBase() + 0x2DF2A80))(this);
	}
	template <typename T = Il2CppQuaternion> T get_AimRotation() {
		return ((T (*)(SAMTurretPawn*))(Il2CppBase() + 0x2DF2B98))(this);
	}
	template <typename T = Il2CppQuaternion> T GetWeaponAimRotation() {
		return ((T (*)(SAMTurretPawn*))(Il2CppBase() + 0x2DF2C88))(this);
	}
	template <typename T = void> T SetFireTarget(uint32_t targetID) {
		return ((T (*)(SAMTurretPawn*, uint32_t))(Il2CppBase() + 0x2DF2DB8))(this, targetID);
	}
	template <typename T = void> T PlaySelfDieAnim() {
		return ((T (*)(SAMTurretPawn*))(Il2CppBase() + 0x2DF3130))(this);
	}
	template <typename T = void> T DoDie(uintptr_t byType) {
		return ((T (*)(SAMTurretPawn*, uintptr_t))(Il2CppBase() + 0x2DF3264))(this, byType);
	}
	template <typename T = void> T PlayInitSound() {
		return ((T (*)(SAMTurretPawn*))(Il2CppBase() + 0x2DF39C8))(this);
	}
	template <typename T = void> T PlayDieSound() {
		return ((T (*)(SAMTurretPawn*))(Il2CppBase() + 0x2DF3C08))(this);
	}
	template <typename T = void> T OnAvatarLoadCompleted() {
		return ((T (*)(SAMTurretPawn*))(Il2CppBase() + 0x2DF3D28))(this);
	}
	template <typename T = void> T ServerNotifyStartFire() {
		return ((T (*)(SAMTurretPawn*))(Il2CppBase() + 0x2DF3E88))(this);
	}
	template <typename T = void> T RequestStartFire() {
		return ((T (*)(SAMTurretPawn*))(Il2CppBase() + 0x2DF4088))(this);
	}
	template <typename T = Il2CppString*> T TacticalRadarViewTeammateSprite(uintptr_t eTacticalPawnState) {
		return ((T (*)(SAMTurretPawn*, uintptr_t))(Il2CppBase() + 0x2DF4724))(this, eTacticalPawnState);
	}
	template <typename T = Il2CppString*> T TacticalRadarViewEnemySprite() {
		return ((T (*)(SAMTurretPawn*))(Il2CppBase() + 0x2DF47E4))(this);
	}
	template <typename T = int32_t> T TacticalRadarViewSpriteDepth(uintptr_t spriteType) {
		return ((T (*)(SAMTurretPawn*, uintptr_t))(Il2CppBase() + 0x2DF489C))(this, spriteType);
	}
	template <typename T = bool> T ShouldCalBoundary() {
		return ((T (*)(SAMTurretPawn*))(Il2CppBase() + 0x2DF494C))(this);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetMeshAssetID_3P() {
		return ((T (*)(SAMTurretPawn*))(Il2CppBase() + 0x2DF49EC))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsSAMTurretPawn() {
		return ((T (*)(SAMTurretPawn*))(Il2CppBase() + 0x2DF4A94))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitPawn(uintptr_t P0) {
		return ((T (*)(SAMTurretPawn*, uintptr_t))(Il2CppBase() + 0x2DF4A9C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_InitAnim() {
		return ((T (*)(SAMTurretPawn*))(Il2CppBase() + 0x2DF4AA0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_AddComponent() {
		return ((T (*)(SAMTurretPawn*))(Il2CppBase() + 0x2DF4AA4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RemoveComponent() {
		return ((T (*)(SAMTurretPawn*))(Il2CppBase() + 0x2DF4C74))(this);
	}
	template <typename T = Il2CppQuaternion> T xLuaBaseProxy_GetWeaponAimRotation() {
		return ((T (*)(SAMTurretPawn*))(Il2CppBase() + 0x2DF4D90))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetFireTarget(uint32_t P0) {
		return ((T (*)(SAMTurretPawn*, uint32_t))(Il2CppBase() + 0x2DF4ED0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlaySelfDieAnim() {
		return ((T (*)(SAMTurretPawn*))(Il2CppBase() + 0x2DF5040))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DoDie(uintptr_t P0) {
		return ((T (*)(SAMTurretPawn*, uintptr_t))(Il2CppBase() + 0x2DF5178))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayInitSound() {
		return ((T (*)(SAMTurretPawn*))(Il2CppBase() + 0x2DF517C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayDieSound() {
		return ((T (*)(SAMTurretPawn*))(Il2CppBase() + 0x2DF54A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnAvatarLoadCompleted() {
		return ((T (*)(SAMTurretPawn*))(Il2CppBase() + 0x2DF5744))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_TacticalRadarViewTeammateSprite(uintptr_t P0) {
		return ((T (*)(SAMTurretPawn*, uintptr_t))(Il2CppBase() + 0x2DF574C))(this, P0);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_TacticalRadarViewEnemySprite() {
		return ((T (*)(SAMTurretPawn*))(Il2CppBase() + 0x2DF5810))(this);
	}
	template <typename T = int32_t> T xLuaBaseProxy_TacticalRadarViewSpriteDepth(uintptr_t P0) {
		return ((T (*)(SAMTurretPawn*, uintptr_t))(Il2CppBase() + 0x2DF58CC))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_ShouldCalBoundary() {
		return ((T (*)(SAMTurretPawn*))(Il2CppBase() + 0x2DF5980))(this);
	}

};

}
