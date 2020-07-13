#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class CarePackagePlanePawn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "CarePackagePlanePawn"));
	}

	template <typename T = uintptr_t> T& m_PawnMovement() {
		return *(T*)((uintptr_t)this + 0xBCC);
	}
	template <typename T = uintptr_t> T& m_ActorRoot() {
		return *(T*)((uintptr_t)this + 0xBD0);
	}
	template <typename T = uintptr_t> T& m_PawnManager() {
		return *(T*)((uintptr_t)this + 0xBD4);
	}
	template <typename T = int32_t> T& m_DeathEffectID() {
		return *(T*)((uintptr_t)this + 0xBD8);
	}
	template <typename T = Il2CppString*> static T& m_DamageEffectSocketName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_DamageSmokeEffectID() {
		return *(T*)((uintptr_t)this + 0xBDC);
	}
	template <typename T = uintptr_t> T& m_DamageSmokeEffect() {
		return *(T*)((uintptr_t)this + 0xBE0);
	}
	template <typename T = bool> T& m_IsShowingDamageSmokeEffect() {
		return *(T*)((uintptr_t)this + 0xBE4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSwitchRoleComponentType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMeshAssetID_3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPawnManager() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldCalBoundary() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TacticalRadarViewTeammateSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TacticalRadarViewEnemySprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TacticalRadarViewSpriteDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHPChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSmokeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RawSwitchAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchVehicleController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDieEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyDamageEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IgnoreRadarEdge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = uintptr_t> T get_ServerType() {
		return ((T (*)(CarePackagePlanePawn*))(Il2CppBase() + 0x3C60FD8))(this);
	}
	template <typename T = uintptr_t> T GetSwitchRoleComponentType() {
		return ((T (*)(CarePackagePlanePawn*))(Il2CppBase() + 0x3C60FE0))(this);
	}
	template <typename T = uint32_t> T get_PlayerID() {
		return ((T (*)(CarePackagePlanePawn*))(Il2CppBase() + 0x3C610DC))(this);
	}
	template <typename T = uintptr_t> T get_PawnMovement() {
		return ((T (*)(CarePackagePlanePawn*))(Il2CppBase() + 0x3C610EC))(this);
	}
	template <typename T = int32_t> T GetMeshAssetID_3P() {
		return ((T (*)(CarePackagePlanePawn*))(Il2CppBase() + 0x3C610F4))(this);
	}
	template <typename T = uintptr_t> T get_FireColliderShape() {
		return ((T (*)(CarePackagePlanePawn*))(Il2CppBase() + 0x3C61198))(this);
	}
	template <typename T = bool> T get_DisplayImpactEffect() {
		return ((T (*)(CarePackagePlanePawn*))(Il2CppBase() + 0x3C611A0))(this);
	}
	template <typename T = bool> T get_IsAvatarLoadSync() {
		return ((T (*)(CarePackagePlanePawn*))(Il2CppBase() + 0x3C611A8))(this);
	}
	template <typename T = bool> T get_EnableAnimatorLOD() {
		return ((T (*)(CarePackagePlanePawn*))(Il2CppBase() + 0x3C611B0))(this);
	}
	template <typename T = void> T InitPawn(uintptr_t info) {
		return ((T (*)(CarePackagePlanePawn*, uintptr_t))(Il2CppBase() + 0x3C611B8))(this, info);
	}
	template <typename T = void> T DestroyPawn() {
		return ((T (*)(CarePackagePlanePawn*))(Il2CppBase() + 0x3C614C8))(this);
	}
	template <typename T = void> T SetPawnManager(uintptr_t PawnManager) {
		return ((T (*)(CarePackagePlanePawn*, uintptr_t))(Il2CppBase() + 0x3C61840))(this, PawnManager);
	}
	template <typename T = bool> T ShouldCalBoundary() {
		return ((T (*)(CarePackagePlanePawn*))(Il2CppBase() + 0x3C618E8))(this);
	}
	template <typename T = Il2CppString*> T TacticalRadarViewTeammateSprite(uintptr_t eTacticalPawnState) {
		return ((T (*)(CarePackagePlanePawn*, uintptr_t))(Il2CppBase() + 0x3C61988))(this, eTacticalPawnState);
	}
	template <typename T = Il2CppString*> T TacticalRadarViewEnemySprite() {
		return ((T (*)(CarePackagePlanePawn*))(Il2CppBase() + 0x3C61A48))(this);
	}
	template <typename T = int32_t> T TacticalRadarViewSpriteDepth(uintptr_t spriteType) {
		return ((T (*)(CarePackagePlanePawn*, uintptr_t))(Il2CppBase() + 0x3C61B00))(this, spriteType);
	}
	template <typename T = void> T OnHPChange() {
		return ((T (*)(CarePackagePlanePawn*))(Il2CppBase() + 0x3C61BB0))(this);
	}
	template <typename T = void> T ShowSmokeEffect() {
		return ((T (*)(CarePackagePlanePawn*))(Il2CppBase() + 0x3C61C74))(this);
	}
	template <typename T = void> T SetHidden(bool isHidden) {
		return ((T (*)(CarePackagePlanePawn*, bool))(Il2CppBase() + 0x3C620A8))(this, isHidden);
	}
	template <typename T = void> T RawSwitchAnimatorController(uintptr_t controller) {
		return ((T (*)(CarePackagePlanePawn*, uintptr_t))(Il2CppBase() + 0x3C622C4))(this, controller);
	}
	template <typename T = void> T SwitchVehicleController(uintptr_t controller, bool firstPersonAnimator) {
		return ((T (*)(CarePackagePlanePawn*, uintptr_t, bool))(Il2CppBase() + 0x3C624DC))(this, controller, firstPersonAnimator);
	}
	template <typename T = void> T SwitchAnimatorController(uintptr_t controller, bool firstPersonAnimator) {
		return ((T (*)(CarePackagePlanePawn*, uintptr_t, bool))(Il2CppBase() + 0x3C62700))(this, controller, firstPersonAnimator);
	}
	template <typename T = void> T PlayDieEffect() {
		return ((T (*)(CarePackagePlanePawn*))(Il2CppBase() + 0x3C62924))(this);
	}
	template <typename T = void> T DestroyDamageEffect() {
		return ((T (*)(CarePackagePlanePawn*))(Il2CppBase() + 0x3C62C58))(this);
	}
	template <typename T = bool> T IgnoreRadarEdge() {
		return ((T (*)(CarePackagePlanePawn*))(Il2CppBase() + 0x3C62D74))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetSwitchRoleComponentType() {
		return ((T (*)(CarePackagePlanePawn*))(Il2CppBase() + 0x3C62E14))(this);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetMeshAssetID_3P() {
		return ((T (*)(CarePackagePlanePawn*))(Il2CppBase() + 0x3C62E1C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitPawn(uintptr_t P0) {
		return ((T (*)(CarePackagePlanePawn*, uintptr_t))(Il2CppBase() + 0x3C62E24))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_DestroyPawn() {
		return ((T (*)(CarePackagePlanePawn*))(Il2CppBase() + 0x3C62E2C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_ShouldCalBoundary() {
		return ((T (*)(CarePackagePlanePawn*))(Il2CppBase() + 0x3C62E34))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_TacticalRadarViewTeammateSprite(uintptr_t P0) {
		return ((T (*)(CarePackagePlanePawn*, uintptr_t))(Il2CppBase() + 0x3C62E3C))(this, P0);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_TacticalRadarViewEnemySprite() {
		return ((T (*)(CarePackagePlanePawn*))(Il2CppBase() + 0x3C62E44))(this);
	}
	template <typename T = int32_t> T xLuaBaseProxy_TacticalRadarViewSpriteDepth(uintptr_t P0) {
		return ((T (*)(CarePackagePlanePawn*, uintptr_t))(Il2CppBase() + 0x3C62E4C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnHPChange() {
		return ((T (*)(CarePackagePlanePawn*))(Il2CppBase() + 0x3C62E54))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetHidden(bool P0) {
		return ((T (*)(CarePackagePlanePawn*, bool))(Il2CppBase() + 0x3C62E5C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_RawSwitchAnimatorController(uintptr_t P0) {
		return ((T (*)(CarePackagePlanePawn*, uintptr_t))(Il2CppBase() + 0x3C62E64))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SwitchVehicleController(uintptr_t P0, bool P1) {
		return ((T (*)(CarePackagePlanePawn*, uintptr_t, bool))(Il2CppBase() + 0x3C62E6C))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_SwitchAnimatorController(uintptr_t P0, bool P1) {
		return ((T (*)(CarePackagePlanePawn*, uintptr_t, bool))(Il2CppBase() + 0x3C62E74))(this, P0, P1);
	}
	template <typename T = bool> T xLuaBaseProxy_IgnoreRadarEdge() {
		return ((T (*)(CarePackagePlanePawn*))(Il2CppBase() + 0x3C62E7C))(this);
	}

};

}
