#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponProjectile
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponProjectile"));
	}

	template <typename T = uintptr_t> T& GroundObject() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& m_MaxDamageValue() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_MinDamageValue() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_InitTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& m_ProjFlightAssetID() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& m_ProjExplosionAssetID() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& m_DamageRadius() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& m_ExplosionLifeSpan() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& bHasExplode() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& m_CanBeDestroyed() {
		return *(T*)((uintptr_t)this + 0x55);
	}
	template <typename T = bool> T& bStopMoving() {
		return *(T*)((uintptr_t)this + 0x56);
	}
	template <typename T = float> T& m_ExceptDestroyTime() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_ExplosionEffect() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& m_SpawnOwnerCamp() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uint32_t> T& m_SpawnOwnerID() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& m_SpawnOwner() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& m_ProjectileID() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& m_ProjFlightEffect() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& m_Simulator() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& m_TotalDeltaTime() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> static T& INITIAL_POSITION_ERROR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_WeaponItemID() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_SubCategory() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uint32_t> T& m_WeaponSkinID() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> static T& IndicatorRadiusOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_CauseDamage() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& HaveProjectileID() {
		return *(T*)((uintptr_t)this + 0x89);
	}
	template <typename T = Il2CppVector3> T& m_CacheHoldPositionOffset() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppVector3> T& m_CacheHoldForward() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& m_IsHoldProjectile() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = int32_t> T& m_ClientProjectileID() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_RendererList() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = bool> T& m_IsHidden() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& m_Data() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = bool> T& mIsStopMoveALCalled() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& mOwnerWeapon() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& m_ProjectileType() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& ExplodeType() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = Il2CppList<int32_t>*> T& m_LoadSkinAssetIDList() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = float> T& mHideProjectleTime() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = bool> T& mIsHide() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppVector3> T& InitFlightEuler() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = bool> static T& UseNewCheckInWater() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_HasOcclusionEffect() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsProjectile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOwnerID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSpawnByLocalPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateSimulator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOwnerWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeProjParms() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeSkin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSkinLoadReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPickUpByPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HoldProjectileThrowOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetLocationAndVelocity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitFlightEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayFlightEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitDamageParams() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateOneTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsReplayActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSimulatorPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetExplodePosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessHitInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckWindowCollision() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__CheckProjectileNearByVox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyByTrophySystem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanExplode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateExplode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayExplosionEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_PlayExplosionEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessSoundVisualNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Explode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyProj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroySelf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Destroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TakeRadiusDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DamageAttackableTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TakeRadiusFlashBangExplode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TakeRadiusRepulseExplode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateOnSpawned() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRadarIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowInRadar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IgnoreRadarEdge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsStick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsExplodeVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsDestoryWhenPawnDied() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldCalBoundary() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNotCheckCloset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshLifeTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDeadReplayEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddOcclusionEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveOcclusionEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableOcclusionEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}

	template <typename T = int32_t> T get_ProjFlightAssetID() {
		return ((T (*)(WeaponProjectile*))(Il2CppBase() + 0x24236C8))(this);
	}
	template <typename T = bool> T get_CanBeDestroyed() {
		return ((T (*)(WeaponProjectile*))(Il2CppBase() + 0x24236D0))(this);
	}
	template <typename T = float> T get_ExplosionLifeSpan() {
		return ((T (*)(WeaponProjectile*))(Il2CppBase() + 0x24236D8))(this);
	}
	template <typename T = uintptr_t> T get_Camp() {
		return ((T (*)(WeaponProjectile*))(Il2CppBase() + 0x24236E0))(this);
	}
	template <typename T = uint32_t> T get_OwnerID() {
		return ((T (*)(WeaponProjectile*))(Il2CppBase() + 0x24236E8))(this);
	}
	template <typename T = bool> T IsProjectile(uintptr_t type) {
		return ((T (*)(WeaponProjectile*, uintptr_t))(Il2CppBase() + 0x24236F0))(this, type);
	}
	template <typename T = void> T SetOwnerID(uint32_t ownerID) {
		return ((T (*)(WeaponProjectile*, uint32_t))(Il2CppBase() + 0x24237D4))(this, ownerID);
	}
	template <typename T = uintptr_t> T get_SubCategory() {
		return ((T (*)(WeaponProjectile*))(Il2CppBase() + 0x24239AC))(this);
	}
	template <typename T = uint32_t> T get_WeaponSkinID() {
		return ((T (*)(WeaponProjectile*))(Il2CppBase() + 0x24239B4))(this);
	}
	template <typename T = int32_t> T get_WeaponItemID() {
		return ((T (*)(WeaponProjectile*))(Il2CppBase() + 0x24239BC))(this);
	}
	template <typename T = void> T set_WeaponItemID(int32_t value) {
		return ((T (*)(WeaponProjectile*, int32_t))(Il2CppBase() + 0x24239C4))(this, value);
	}
	template <typename T = bool> T IsSpawnByLocalPlayer() {
		return ((T (*)(WeaponProjectile*))(Il2CppBase() + 0x24239E8))(this);
	}
	template <typename T = float> T get_IndicatorRadius() {
		return ((T (*)(WeaponProjectile*))(Il2CppBase() + 0x2423B38))(this);
	}
	template <typename T = Il2CppVector3> T get_Position() {
		return ((T (*)(WeaponProjectile*))(Il2CppBase() + 0x2423B50))(this);
	}
	template <typename T = Il2CppQuaternion> T get_Rotation() {
		return ((T (*)(WeaponProjectile*))(Il2CppBase() + 0x2423B90))(this);
	}
	template <typename T = bool> T get_HasExploded() {
		return ((T (*)(WeaponProjectile*))(Il2CppBase() + 0x2423BD0))(this);
	}
	template <typename T = bool> T get_IsMoving() {
		return ((T (*)(WeaponProjectile*))(Il2CppBase() + 0x2423BD8))(this);
	}
	template <typename T = bool> T get_CauseDamage() {
		return ((T (*)(WeaponProjectile*))(Il2CppBase() + 0x2423BEC))(this);
	}
	template <typename T = void> T set_CauseDamage(bool value) {
		return ((T (*)(WeaponProjectile*, bool))(Il2CppBase() + 0x2423BF4))(this, value);
	}
	template <typename T = int32_t> T get_ProjectileID() {
		return ((T (*)(WeaponProjectile*))(Il2CppBase() + 0x23D71B8))(this);
	}
	template <typename T = void> T set_ProjectileID(int32_t value) {
		return ((T (*)(WeaponProjectile*, int32_t))(Il2CppBase() + 0x2423BFC))(this, value);
	}
	template <typename T = bool> T get_ShowIndicator() {
		return ((T (*)(WeaponProjectile*))(Il2CppBase() + 0x2423C04))(this);
	}
	template <typename T = bool> T get_IsHoldProjectile() {
		return ((T (*)(WeaponProjectile*))(Il2CppBase() + 0x2423C24))(this);
	}
	template <typename T = void> T set_IsHoldProjectile(bool value) {
		return ((T (*)(WeaponProjectile*, bool))(Il2CppBase() + 0x23D78BC))(this, value);
	}
	template <typename T = int32_t> T get_ClientProjectileID() {
		return ((T (*)(WeaponProjectile*))(Il2CppBase() + 0x2423C2C))(this);
	}
	template <typename T = void> T set_ClientProjectileID(int32_t value) {
		return ((T (*)(WeaponProjectile*, int32_t))(Il2CppBase() + 0x23D4588))(this, value);
	}
	template <typename T = float> T get_LeftTime() {
		return ((T (*)(WeaponProjectile*))(Il2CppBase() + 0x2423C34))(this);
	}
	template <typename T = void> T set_LeftTime(float value) {
		return ((T (*)(WeaponProjectile*, float))(Il2CppBase() + 0x2423C4C))(this, value);
	}
	template <typename T = float> T get_PickDistance() {
		return ((T (*)(WeaponProjectile*))(Il2CppBase() + 0x2423C60))(this);
	}
	template <typename T = bool> T get_CanBePick() {
		return ((T (*)(WeaponProjectile*))(Il2CppBase() + 0x2423C84))(this);
	}
	template <typename T = void> T SetHidden(bool isHidden) {
		return ((T (*)(WeaponProjectile*, bool))(Il2CppBase() + 0x23FFA5C))(this, isHidden);
	}
	template <typename T = uintptr_t> T GetOwner() {
		return ((T (*)(WeaponProjectile*))(Il2CppBase() + 0x2423CA4))(this);
	}
	template <typename T = uintptr_t> T CreateSimulator(uintptr_t data, Il2CppVector3 inInitLoc, Il2CppVector3 inInitVel, uintptr_t inHandler) {
		return ((T (*)(WeaponProjectile*, uintptr_t, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x2423D74))(this, data, inInitLoc, inInitVel, inHandler);
	}
	template <typename T = void> T SetOwnerWeapon(uintptr_t weapon) {
		return ((T (*)(WeaponProjectile*, uintptr_t))(Il2CppBase() + 0x23F3B6C))(this, weapon);
	}
	template <typename T = uintptr_t> T get_ExplodeType() {
		return ((T (*)(WeaponProjectile*))(Il2CppBase() + 0x2423EF0))(this);
	}
	template <typename T = void> T set_ExplodeType(uintptr_t value) {
		return ((T (*)(WeaponProjectile*, uintptr_t))(Il2CppBase() + 0x2423EF8))(this, value);
	}
	template <typename T = uintptr_t> T get_EffectLoadPriority() {
		return ((T (*)(WeaponProjectile*))(Il2CppBase() + 0x2423F00))(this);
	}
	template <typename T = void> T InitializeProjParms(Il2CppVector3 InitLocation, Il2CppVector3 InitVelocity, uintptr_t data, int32_t weaponID, uint32_t skinID, uint32_t SpawnOwnerID, int32_t SpawnProjectileID) {
		return ((T (*)(WeaponProjectile*, Il2CppVector3, Il2CppVector3, uintptr_t, int32_t, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x2423F08))(this, InitLocation, InitVelocity, data, weaponID, skinID, SpawnOwnerID, SpawnProjectileID);
	}
	template <typename T = void> T ChangeSkin() {
		return ((T (*)(WeaponProjectile*))(Il2CppBase() + 0x24247A0))(this);
	}
	template <typename T = void> T OnSkinLoadReady(int32_t assetID, uintptr_t obj) {
		return ((T (*)(WeaponProjectile*, int32_t, uintptr_t))(Il2CppBase() + 0x2424CB0))(this, assetID, obj);
	}
	template <typename T = void> T OnPickUpByPawn(uint32_t pawnPlayerID, Il2CppVector3 resetLocation) {
		return ((T (*)(WeaponProjectile*, uint32_t, Il2CppVector3))(Il2CppBase() + 0x2424F2C))(this, pawnPlayerID, resetLocation);
	}
	template <typename T = void> T HoldProjectileThrowOut(Il2CppVector3 resetLocation, Il2CppVector3 resetVelocity) {
		return ((T (*)(WeaponProjectile*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x23FF924))(this, resetLocation, resetVelocity);
	}
	template <typename T = void> T ResetLocationAndVelocity(Il2CppVector3 resetLocation, Il2CppVector3 resetVelocity) {
		return ((T (*)(WeaponProjectile*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x2425088))(this, resetLocation, resetVelocity);
	}
	template <typename T = void> T InitFlightEffect() {
		return ((T (*)(WeaponProjectile*))(Il2CppBase() + 0x24251FC))(this);
	}
	template <typename T = void> T PlayFlightEffect() {
		return ((T (*)(WeaponProjectile*))(Il2CppBase() + 0x242544C))(this);
	}
	template <typename T = void> T InitDamageParams(float DamageValue, float MinDamageValue, float DamageRadius) {
		return ((T (*)(WeaponProjectile*, float, float, float))(Il2CppBase() + 0x2425640))(this, DamageValue, MinDamageValue, DamageRadius);
	}
	template <typename T = bool> T SimulateOneTick(float inUpateTime) {
		return ((T (*)(WeaponProjectile*, float))(Il2CppBase() + 0x242574C))(this, inUpateTime);
	}
	template <typename T = bool> T IsReplayActor() {
		return ((T (*)(WeaponProjectile*))(Il2CppBase() + 0x2425A98))(this);
	}
	template <typename T = void> T StopMove() {
		return ((T (*)(WeaponProjectile*))(Il2CppBase() + 0x2425BEC))(this);
	}
	template <typename T = Il2CppVector3> T GetSimulatorPosition() {
		return ((T (*)(WeaponProjectile*))(Il2CppBase() + 0x2425DB0))(this);
	}
	template <typename T = Il2CppVector3> T GetExplodePosition() {
		return ((T (*)(WeaponProjectile*))(Il2CppBase() + 0x2426050))(this);
	}
	template <typename T = void> T ProcessHitInfo(uintptr_t info) {
		return ((T (*)(WeaponProjectile*, uintptr_t))(Il2CppBase() + 0x242613C))(this, info);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponProjectile*, float))(Il2CppBase() + 0x242620C))(this, DeltaTime);
	}
	template <typename T = void> T CheckWindowCollision(Il2CppVector3 startPosition, Il2CppVector3 targetPosition) {
		return ((T (*)(WeaponProjectile*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x24268BC))(this, startPosition, targetPosition);
	}
	template <typename T = void> T _CheckProjectileNearByVox() {
		return ((T (*)(WeaponProjectile*))(Il2CppBase() + 0x2426C28))(this);
	}
	template <typename T = void> T DestroyByTrophySystem() {
		return ((T (*)(WeaponProjectile*))(Il2CppBase() + 0x2426D28))(this);
	}
	template <typename T = bool> T CanExplode(uintptr_t impactInfo) {
		return ((T (*)(WeaponProjectile*, uintptr_t))(Il2CppBase() + 0x2426E08))(this, impactInfo);
	}
	template <typename T = void> T SimulateExplode(int32_t weaponID, Il2CppVector3 ExplodeLocation, uintptr_t type, uintptr_t data, float atTime, bool canBeDestroyed) {
		return ((T (*)(WeaponProjectile*, int32_t, Il2CppVector3, uintptr_t, uintptr_t, float, bool))(Il2CppBase() + 0x2427128))(this, weaponID, ExplodeLocation, type, data, atTime, canBeDestroyed);
	}
	template <typename T = void> T PlayExplosionEffect() {
		return ((T (*)(WeaponProjectile*))(Il2CppBase() + 0x2427498))(this);
	}
	template <typename T = void> T PlayExplosionEffect_1(Il2CppVector3 pos, float atTime) {
		return ((T (*)(WeaponProjectile*, Il2CppVector3, float))(Il2CppBase() + 0x24276D0))(this, pos, atTime);
	}
	template <typename T = void> T ProcessSoundVisualNotify() {
		return ((T (*)(WeaponProjectile*))(Il2CppBase() + 0x2427964))(this);
	}
	template <typename T = void> T Explode(Il2CppVector3 ExplodeLocation, bool bCauseDamage, uintptr_t hitTarget) {
		return ((T (*)(WeaponProjectile*, Il2CppVector3, bool, uintptr_t))(Il2CppBase() + 0x2427CB8))(this, ExplodeLocation, bCauseDamage, hitTarget);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(WeaponProjectile*))(Il2CppBase() + 0x2429438))(this);
	}
	template <typename T = void> T DestroyProj() {
		return ((T (*)(WeaponProjectile*))(Il2CppBase() + 0x24296B8))(this);
	}
	template <typename T = void> T DestroySelf() {
		return ((T (*)(WeaponProjectile*))(Il2CppBase() + 0x2429CD0))(this);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(WeaponProjectile*))(Il2CppBase() + 0x2429DB0))(this);
	}
	template <typename T = void> T TakeRadiusDamage(Il2CppVector3 ExplodeLocation, uintptr_t impactInfo) {
		return ((T (*)(WeaponProjectile*, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x2428338))(this, ExplodeLocation, impactInfo);
	}
	template <typename T = void> T DamageAttackableTarget(Il2CppVector3 ExplodeLocation, uintptr_t explodeTarget, uintptr_t impactInfo) {
		return ((T (*)(WeaponProjectile*, Il2CppVector3, uintptr_t, uintptr_t))(Il2CppBase() + 0x242A298))(this, ExplodeLocation, explodeTarget, impactInfo);
	}
	template <typename T = void> T TakeRadiusFlashBangExplode(Il2CppVector3 ExplodeLocation) {
		return ((T (*)(WeaponProjectile*, Il2CppVector3))(Il2CppBase() + 0x24287C0))(this, ExplodeLocation);
	}
	template <typename T = void> T TakeRadiusRepulseExplode(Il2CppVector3 explodeLoc) {
		return ((T (*)(WeaponProjectile*, Il2CppVector3))(Il2CppBase() + 0x242903C))(this, explodeLoc);
	}
	template <typename T = void> T SimulateOnSpawned(bool isHoldProjectile) {
		return ((T (*)(WeaponProjectile*, bool))(Il2CppBase() + 0x242AA7C))(this, isHoldProjectile);
	}
	template <typename T = Il2CppString*> T GetRadarIcon() {
		return ((T (*)(WeaponProjectile*))(Il2CppBase() + 0x242AB5C))(this);
	}
	template <typename T = bool> T ShowInRadar() {
		return ((T (*)(WeaponProjectile*))(Il2CppBase() + 0x242AC7C))(this);
	}
	template <typename T = bool> T IgnoreRadarEdge() {
		return ((T (*)(WeaponProjectile*))(Il2CppBase() + 0x242AD4C))(this);
	}
	template <typename T = uintptr_t> T GetActor() {
		return ((T (*)(WeaponProjectile*))(Il2CppBase() + 0x242AE1C))(this);
	}
	template <typename T = bool> T IsStick(uint32_t pawnID) {
		return ((T (*)(WeaponProjectile*, uint32_t))(Il2CppBase() + 0x242AEEC))(this, pawnID);
	}
	template <typename T = bool> T IsExplodeVisible(Il2CppVector3 pos) {
		return ((T (*)(WeaponProjectile*, Il2CppVector3))(Il2CppBase() + 0x242AFC4))(this, pos);
	}
	template <typename T = bool> T IsDestoryWhenPawnDied() {
		return ((T (*)(WeaponProjectile*))(Il2CppBase() + 0x242B16C))(this);
	}
	template <typename T = bool> T ShouldCalBoundary() {
		return ((T (*)(WeaponProjectile*))(Il2CppBase() + 0x242B23C))(this);
	}
	template <typename T = bool> T IsNotCheckCloset() {
		return ((T (*)(WeaponProjectile*))(Il2CppBase() + 0x242B30C))(this);
	}
	template <typename T = void> T RefreshLifeTime() {
		return ((T (*)(WeaponProjectile*))(Il2CppBase() + 0x242B3F8))(this);
	}
	template <typename T = void> T OnDeadReplayEnd() {
		return ((T (*)(WeaponProjectile*))(Il2CppBase() + 0x242B4D8))(this);
	}
	template <typename T = bool> T get_SupportOcclusion() {
		return ((T (*)(WeaponProjectile*))(Il2CppBase() + 0x242B5A0))(this);
	}
	template <typename T = void> T AddOcclusionEffect() {
		return ((T (*)(WeaponProjectile*))(Il2CppBase() + 0x242B5A8))(this);
	}
	template <typename T = void> T RemoveOcclusionEffect() {
		return ((T (*)(WeaponProjectile*))(Il2CppBase() + 0x242B6D0))(this);
	}
	template <typename T = void> T EnableOcclusionEffect() {
		return ((T (*)(WeaponProjectile*))(Il2CppBase() + 0x242B82C))(this);
	}
	template <typename T = void> T PlayFlightEffectm__0(uintptr_t projFlightEff) {
		return ((T (*)(WeaponProjectile*, uintptr_t))(Il2CppBase() + 0x242BA18))(this, projFlightEff);
	}
	template <typename T = void> T Destroym__1() {
		return ((T (*)(WeaponProjectile*))(Il2CppBase() + 0x242BC44))(this);
	}

};

}
