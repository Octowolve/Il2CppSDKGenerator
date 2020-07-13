#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class CarBomb
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "CarBomb"));
	}

	template <typename T = uintptr_t> T& whiteSmokeEffectConfig() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_WhiteSmokeEffect() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& darkSmokeEffectConfig() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& m_DarkSmokeEffect() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& fireEffectConfig() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& m_FireEffect() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& destructVehicleConfig() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& m_CurrentMesh() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& m_CurrentAssetId() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uint32_t> T& m_Status_1() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& DelayClearTime() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = bool> static T& ms_EnablePVSOcc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_OccInited() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_OccBounds() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_AllRenderers() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& m_OccVisible() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = bool> T& m_LastOccVisible() {
		return *(T*)((uintptr_t)this + 0xBD);
	}
	template <typename T = float> T& m_CheckVisibilityTime() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = float> static T& kInterval_Test_BecomeInvisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& kInterval_Test_BecomeVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHitGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanBeDamagedBy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanBeDamagedByMeleeWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TakeDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateTakeDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpdateHealth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnDestructEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveDestructEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnExplode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAllDestructEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopWhiteSmokeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadCarAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreloadEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitCarBomb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Respawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Create() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeOcc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearOcc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CollectRenderersAndBuildBounds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateBounds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetVisibility() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickOccQuery() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickOccChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsVisibleNow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDebug() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEnableCarPVSOcc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}

	template <typename T = uintptr_t> T GetHitGroup(uintptr_t hitObject) {
		return ((T (*)(CarBomb*, uintptr_t))(Il2CppBase() + 0x3C4F8D0))(this, hitObject);
	}
	template <typename T = bool> T CanBeDamagedBy(uintptr_t pawn) {
		return ((T (*)(CarBomb*, uintptr_t))(Il2CppBase() + 0x3C4F9A8))(this, pawn);
	}
	template <typename T = bool> T CanBeDamagedByMeleeWeapon() {
		return ((T (*)(CarBomb*))(Il2CppBase() + 0x3C4FA80))(this);
	}
	template <typename T = bool> T get_IsAlive() {
		return ((T (*)(CarBomb*))(Il2CppBase() + 0x3C4FB50))(this);
	}
	template <typename T = bool> T get_CanLockedByRPG() {
		return ((T (*)(CarBomb*))(Il2CppBase() + 0x3C4FB80))(this);
	}
	template <typename T = Il2CppVector3> T get_TargetCenterPostion() {
		return ((T (*)(CarBomb*))(Il2CppBase() + 0x3C4FB88))(this);
	}
	template <typename T = Il2CppVector3> T get_TargetTopPostion() {
		return ((T (*)(CarBomb*))(Il2CppBase() + 0x3C4FBA4))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(CarBomb*, float))(Il2CppBase() + 0x3C4FC30))(this, deltaTime);
	}
	template <typename T = void> T SyncStatus(float hp, uint32_t status_1, uint32_t status_2) {
		return ((T (*)(CarBomb*, float, uint32_t, uint32_t))(Il2CppBase() + 0x3C500AC))(this, hp, status_1, status_2);
	}
	template <typename T = void> T TakeDamage(uintptr_t damageInfo) {
		return ((T (*)(CarBomb*, uintptr_t))(Il2CppBase() + 0x3C50330))(this, damageInfo);
	}
	template <typename T = void> T SimulateTakeDamage(uintptr_t damageInfo) {
		return ((T (*)(CarBomb*, uintptr_t))(Il2CppBase() + 0x3C5043C))(this, damageInfo);
	}
	template <typename T = void> T OnUpdateHealth(float newVal, float oldVal) {
		return ((T (*)(CarBomb*, float, float))(Il2CppBase() + 0x3C505A4))(this, newVal, oldVal);
	}
	template <typename T = uintptr_t> T SpawnDestructEffect(uintptr_t type) {
		return ((T (*)(CarBomb*, uintptr_t))(Il2CppBase() + 0x3C50B40))(this, type);
	}
	template <typename T = void> T RemoveDestructEffect(uintptr_t type) {
		return ((T (*)(CarBomb*, uintptr_t))(Il2CppBase() + 0x3C51494))(this, type);
	}
	template <typename T = void> T OnExplode() {
		return ((T (*)(CarBomb*))(Il2CppBase() + 0x3C50D98))(this);
	}
	template <typename T = void> T ClearAllDestructEffect() {
		return ((T (*)(CarBomb*))(Il2CppBase() + 0x3C5196C))(this);
	}
	template <typename T = void> T StopWhiteSmokeEffect() {
		return ((T (*)(CarBomb*))(Il2CppBase() + 0x3C51A5C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(CarBomb*))(Il2CppBase() + 0x3C51B34))(this);
	}
	template <typename T = void> T LoadCarAsset(int32_t assetId) {
		return ((T (*)(CarBomb*, int32_t))(Il2CppBase() + 0x3C51798))(this, assetId);
	}
	template <typename T = void> T PreloadEffect() {
		return ((T (*)(CarBomb*))(Il2CppBase() + 0x3C51C2C))(this);
	}
	template <typename T = void> T InitCarBomb(uintptr_t type, uint32_t actorid, uint32_t uid, float maxHealth, float currentHealth, uint32_t glassStatus) {
		return ((T (*)(CarBomb*, uintptr_t, uint32_t, uint32_t, float, float, uint32_t))(Il2CppBase() + 0x3C5204C))(this, type, actorid, uid, maxHealth, currentHealth, glassStatus);
	}
	template <typename T = void> T Respawn(float hp) {
		return ((T (*)(CarBomb*, float))(Il2CppBase() + 0x3C50210))(this, hp);
	}
	template <typename T = uintptr_t> static T Create(uintptr_t game, uint32_t actorId, uint32_t uid, int32_t assetId, Il2CppVector3 position, Il2CppQuaternion rotation, float maxHealth, float currentHealth, uint32_t glassStatus) {
		return ((T (*)(void *, uintptr_t, uint32_t, uint32_t, int32_t, Il2CppVector3, Il2CppQuaternion, float, float, uint32_t))(Il2CppBase() + 0x3C522EC))(0, game, actorId, uid, assetId, position, rotation, maxHealth, currentHealth, glassStatus);
	}
	template <typename T = void> T InitializeOcc() {
		return ((T (*)(CarBomb*))(Il2CppBase() + 0x3C526D8))(this);
	}
	template <typename T = void> T ClearOcc() {
		return ((T (*)(CarBomb*))(Il2CppBase() + 0x3C52200))(this);
	}
	template <typename T = void> T CollectRenderersAndBuildBounds() {
		return ((T (*)(CarBomb*))(Il2CppBase() + 0x3C5295C))(this);
	}
	template <typename T = void> static T CalculateBounds(uintptr_t bounds, Il2CppArray<uintptr_t>* list) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3C52D44))(0, bounds, list);
	}
	template <typename T = void> T SetVisibility(bool occVisible) {
		return ((T (*)(CarBomb*, bool))(Il2CppBase() + 0x3C5316C))(this, occVisible);
	}
	template <typename T = void> T TickOccQuery() {
		return ((T (*)(CarBomb*))(Il2CppBase() + 0x3C4FD78))(this);
	}
	template <typename T = void> T TickOccChange() {
		return ((T (*)(CarBomb*))(Il2CppBase() + 0x3C4FF9C))(this);
	}
	template <typename T = bool> T IsVisibleNow() {
		return ((T (*)(CarBomb*))(Il2CppBase() + 0x3C5345C))(this);
	}
	template <typename T = void> T SetDebug(bool enable) {
		return ((T (*)(CarBomb*, bool))(Il2CppBase() + 0x3C5352C))(this, enable);
	}
	template <typename T = void> static T SetEnableCarPVSOcc(bool enable) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x3C535FC))(0, enable);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetHitGroup(uintptr_t P0) {
		return ((T (*)(CarBomb*, uintptr_t))(Il2CppBase() + 0x3C53788))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_CanBeDamagedBy(uintptr_t P0) {
		return ((T (*)(CarBomb*, uintptr_t))(Il2CppBase() + 0x3C53790))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_CanBeDamagedByMeleeWeapon() {
		return ((T (*)(CarBomb*))(Il2CppBase() + 0x3C53798))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(CarBomb*, float))(Il2CppBase() + 0x3C537A0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SyncStatus(float P0, uint32_t P1, uint32_t P2) {
		return ((T (*)(CarBomb*, float, uint32_t, uint32_t))(Il2CppBase() + 0x3C537A8))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_TakeDamage(uintptr_t P0) {
		return ((T (*)(CarBomb*, uintptr_t))(Il2CppBase() + 0x3C537C8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SimulateTakeDamage(uintptr_t P0) {
		return ((T (*)(CarBomb*, uintptr_t))(Il2CppBase() + 0x3C537D0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnUpdateHealth(float P0, float P1) {
		return ((T (*)(CarBomb*, float, float))(Il2CppBase() + 0x3C537D8))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(CarBomb*))(Il2CppBase() + 0x3C537E0))(this);
	}

};

}
