#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class GuardDog
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "GuardDog"));
	}

	template <typename T = uintptr_t> T& m_PropertySet() {
		return *(T*)((uintptr_t)this + 0xBCC);
	}
	template <typename T = float> T& m_AliveTime() {
		return *(T*)((uintptr_t)this + 0xBD0);
	}
	template <typename T = float> T& m_LeftAliveTime() {
		return *(T*)((uintptr_t)this + 0xBD4);
	}
	template <typename T = float> T& m_StartTime() {
		return *(T*)((uintptr_t)this + 0xBD8);
	}
	template <typename T = uintptr_t> T& m_ActorRoot() {
		return *(T*)((uintptr_t)this + 0xBDC);
	}
	template <typename T = int32_t> T& m_DeathEffectID() {
		return *(T*)((uintptr_t)this + 0xBE0);
	}
	template <typename T = Il2CppVector3> T& focalPoint() {
		return *(T*)((uintptr_t)this + 0xBE4);
	}
	template <typename T = bool> T& focalPointSet() {
		return *(T*)((uintptr_t)this + 0xBF0);
	}
	template <typename T = uintptr_t> T& rotationTarget() {
		return *(T*)((uintptr_t)this + 0xBF4);
	}
	template <typename T = bool> T& rotationFollowVelocity() {
		return *(T*)((uintptr_t)this + 0xBF8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMeshAssetID_3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAvatarLoadCompleted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Die() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Die() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLocalPlayerInWarningDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TacticalRadarViewTeammateSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TacticalRadarViewEnemySprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = uintptr_t> T get_PawnCategoryType() {
		return ((T (*)(GuardDog*))(Il2CppBase() + 0x3480E0C))(this);
	}
	template <typename T = uintptr_t> T get_PropertySet() {
		return ((T (*)(GuardDog*))(Il2CppBase() + 0x3480E14))(this);
	}
	template <typename T = bool> T get_CanLockedByRPG() {
		return ((T (*)(GuardDog*))(Il2CppBase() + 0x3480E1C))(this);
	}
	template <typename T = uintptr_t> T get_FireColliderShape() {
		return ((T (*)(GuardDog*))(Il2CppBase() + 0x3480E24))(this);
	}
	template <typename T = bool> T get_DisplayImpactEffect() {
		return ((T (*)(GuardDog*))(Il2CppBase() + 0x3480E2C))(this);
	}
	template <typename T = uintptr_t> T get_ServerType() {
		return ((T (*)(GuardDog*))(Il2CppBase() + 0x3480E34))(this);
	}
	template <typename T = int32_t> T GetMeshAssetID_3P() {
		return ((T (*)(GuardDog*))(Il2CppBase() + 0x3480E3C))(this);
	}
	template <typename T = bool> T get_rotationFollowVelocity() {
		return ((T (*)(GuardDog*))(Il2CppBase() + 0x3480EE0))(this);
	}
	template <typename T = void> T set_rotationFollowVelocity(bool value) {
		return ((T (*)(GuardDog*, bool))(Il2CppBase() + 0x3480EE8))(this, value);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(GuardDog*))(Il2CppBase() + 0x3480EF0))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(GuardDog*, float))(Il2CppBase() + 0x3481028))(this, deltaTime);
	}
	template <typename T = void> T OnAvatarLoadCompleted() {
		return ((T (*)(GuardDog*))(Il2CppBase() + 0x348121C))(this);
	}
	template <typename T = void> T SyncPosition(Il2CppVector3 pos, bool checkColliders) {
		return ((T (*)(GuardDog*, Il2CppVector3, bool))(Il2CppBase() + 0x34812B4))(this, pos, checkColliders);
	}
	template <typename T = void> T InitPawn(uintptr_t info) {
		return ((T (*)(GuardDog*, uintptr_t))(Il2CppBase() + 0x348139C))(this, info);
	}
	template <typename T = void> T Die(uintptr_t byType) {
		return ((T (*)(GuardDog*, uintptr_t))(Il2CppBase() + 0x3481780))(this, byType);
	}
	template <typename T = void> T Die_1(bool isHeadShot, uintptr_t damageType) {
		return ((T (*)(GuardDog*, bool, uintptr_t))(Il2CppBase() + 0x34819F4))(this, isHeadShot, damageType);
	}
	template <typename T = bool> T IsLocalPlayerInWarningDistance() {
		return ((T (*)(GuardDog*))(Il2CppBase() + 0x3481B40))(this);
	}
	template <typename T = Il2CppString*> T TacticalRadarViewTeammateSprite(uintptr_t eTacticalPawnState) {
		return ((T (*)(GuardDog*, uintptr_t))(Il2CppBase() + 0x3481BE0))(this, eTacticalPawnState);
	}
	template <typename T = Il2CppString*> T TacticalRadarViewEnemySprite() {
		return ((T (*)(GuardDog*))(Il2CppBase() + 0x3481CD8))(this);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetMeshAssetID_3P() {
		return ((T (*)(GuardDog*))(Il2CppBase() + 0x3481DC8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(GuardDog*))(Il2CppBase() + 0x3481DD0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(GuardDog*, float))(Il2CppBase() + 0x3481DD8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnAvatarLoadCompleted() {
		return ((T (*)(GuardDog*))(Il2CppBase() + 0x3481DE0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SyncPosition(Il2CppVector3 P0, bool P1) {
		return ((T (*)(GuardDog*, Il2CppVector3, bool))(Il2CppBase() + 0x3481DE8))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_InitPawn(uintptr_t P0) {
		return ((T (*)(GuardDog*, uintptr_t))(Il2CppBase() + 0x3481E0C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Die(bool P0, uintptr_t P1) {
		return ((T (*)(GuardDog*, bool, uintptr_t))(Il2CppBase() + 0x3481E14))(this, P0, P1);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_TacticalRadarViewTeammateSprite(uintptr_t P0) {
		return ((T (*)(GuardDog*, uintptr_t))(Il2CppBase() + 0x3481E1C))(this, P0);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_TacticalRadarViewEnemySprite() {
		return ((T (*)(GuardDog*))(Il2CppBase() + 0x3481E24))(this);
	}

};

}
