#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponProjectileSimulator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponProjectileSimulator"));
	}

	template <typename T = float> static T& FIX_UPDATE_TIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& MaxBounceCount() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> static T& EntityRadius() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& NoBounceSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppVector3> T& m_CurrentPosition() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& m_CurrentVelocity() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_LeftTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& m_BounceCount() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& m_SpecialStop() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& m_CanStickTarget() {
		return *(T*)((uintptr_t)this + 0x2D);
	}
	template <typename T = bool> T& m_CanStickNonTarget() {
		return *(T*)((uintptr_t)this + 0x2E);
	}
	template <typename T = bool> T& m_CanStickVehicle() {
		return *(T*)((uintptr_t)this + 0x2F);
	}
	template <typename T = bool> T& m_CanCheckPawn() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& m_IsSticked() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = bool> T& m_IsExploded() {
		return *(T*)((uintptr_t)this + 0x32);
	}
	template <typename T = uintptr_t> T& CanExplodeHandler() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& m_DelayExplode() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& m_TouchGroundExplode() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = uintptr_t> T& friendCamp() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_Data() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_Type() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& m_CheckPVEPawn() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& m_HadSpeedDecay() {
		return *(T*)((uintptr_t)this + 0x49);
	}
	template <typename T = bool> T& m_CanPenetrateStoneMaterialCollider() {
		return *(T*)((uintptr_t)this + 0x4A);
	}
	template <typename T = bool> T& ignorePawn() {
		return *(T*)((uintptr_t)this + 0x4B);
	}
	template <typename T = int32_t> T& m_ProjectileID() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& m_IsInWater() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& m_LastCheckTime() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> static T& UseNewCheckInWater() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& MaxSimulateTimes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = bool> T& mIsLocalSpawn() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& PawnColliderScale() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> static T& m_SimulatoForPositions() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_CanExplodeHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_CanExplodeHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshLifeTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetProjectileID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPickupByPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanBounceWhenHitPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpecialInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetLocationAndVelocity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetExplosionPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetProjectilePositionsAndFirstImpactInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateStick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateVelocity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckInWater() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGravityVelocity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVelocityScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExplodeOnTouchGround() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SingleLineCheck() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCorrectHitNormal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreOneTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanPenetrate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckVehicleHitAvaliable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPawnCollider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldFilterImpact() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRadiusScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanExplodeByHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTraceFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayStopSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsHitGroundStop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BounceImpact() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsColliderOwnerPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameReplayObjectCanStickTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldCheckNoPhysics() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsOnGroud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ServerBounce() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ServerBounce() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyBounce() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__PlayBounceSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetExplosionPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetProjectilePositionsAndFirstImpactInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsStop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEntityRadius() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}

	template <typename T = void> T add_CanExplodeHandler(uintptr_t value) {
		return ((T (*)(WeaponProjectileSimulator*, uintptr_t))(Il2CppBase() + 0x339C744))(this, value);
	}
	template <typename T = void> T remove_CanExplodeHandler(uintptr_t value) {
		return ((T (*)(WeaponProjectileSimulator*, uintptr_t))(Il2CppBase() + 0x339C96C))(this, value);
	}
	template <typename T = bool> T get_Sticked() {
		return ((T (*)(WeaponProjectileSimulator*))(Il2CppBase() + 0x3396B24))(this);
	}
	template <typename T = void> T set_Sticked(bool value) {
		return ((T (*)(WeaponProjectileSimulator*, bool))(Il2CppBase() + 0x339CB94))(this, value);
	}
	template <typename T = Il2CppVector3> T get_Position() {
		return ((T (*)(WeaponProjectileSimulator*))(Il2CppBase() + 0x3398270))(this);
	}
	template <typename T = Il2CppVector3> T GetPosition() {
		return ((T (*)(WeaponProjectileSimulator*))(Il2CppBase() + 0x339CB9C))(this);
	}
	template <typename T = float> T get_Speed() {
		return ((T (*)(WeaponProjectileSimulator*))(Il2CppBase() + 0x3397210))(this);
	}
	template <typename T = Il2CppVector3> T get_Direction() {
		return ((T (*)(WeaponProjectileSimulator*))(Il2CppBase() + 0x3398258))(this);
	}
	template <typename T = Il2CppVector3> T get_HitOffset() {
		return ((T (*)(WeaponProjectileSimulator*))(Il2CppBase() + 0x3398144))(this);
	}
	template <typename T = float> T get_LeftTime() {
		return ((T (*)(WeaponProjectileSimulator*))(Il2CppBase() + 0x339CC80))(this);
	}
	template <typename T = void> T set_LeftTime(float value) {
		return ((T (*)(WeaponProjectileSimulator*, float))(Il2CppBase() + 0x339CC88))(this, value);
	}
	template <typename T = bool> T get_CanPenetrateStoneMaterialCollider() {
		return ((T (*)(WeaponProjectileSimulator*))(Il2CppBase() + 0x339CC90))(this);
	}
	template <typename T = void> T set_CanPenetrateStoneMaterialCollider(bool value) {
		return ((T (*)(WeaponProjectileSimulator*, bool))(Il2CppBase() + 0x339CC98))(this, value);
	}
	template <typename T = bool> T get_ignorePawn() {
		return ((T (*)(WeaponProjectileSimulator*))(Il2CppBase() + 0x339CCA0))(this);
	}
	template <typename T = void> T set_ignorePawn(bool value) {
		return ((T (*)(WeaponProjectileSimulator*, bool))(Il2CppBase() + 0x339CCA8))(this, value);
	}
	template <typename T = void> T Init(Il2CppVector3 initalPosition, Il2CppVector3 initalVelocity, uintptr_t data, uintptr_t handler) {
		return ((T (*)(WeaponProjectileSimulator*, Il2CppVector3, Il2CppVector3, uintptr_t, uintptr_t))(Il2CppBase() + 0x339CCB0))(this, initalPosition, initalVelocity, data, handler);
	}
	template <typename T = void> T RefreshLifeTime() {
		return ((T (*)(WeaponProjectileSimulator*))(Il2CppBase() + 0x339D0D0))(this);
	}
	template <typename T = void> T SetProjectileID(int32_t id) {
		return ((T (*)(WeaponProjectileSimulator*, int32_t))(Il2CppBase() + 0x339D1B4))(this, id);
	}
	template <typename T = void> T OnPickupByPawn() {
		return ((T (*)(WeaponProjectileSimulator*))(Il2CppBase() + 0x339D28C))(this);
	}
	template <typename T = bool> T IsCanBounceWhenHitPawn() {
		return ((T (*)(WeaponProjectileSimulator*))(Il2CppBase() + 0x339D360))(this);
	}
	template <typename T = bool> T get_canStickNonTarget() {
		return ((T (*)(WeaponProjectileSimulator*))(Il2CppBase() + 0x339D430))(this);
	}
	template <typename T = void> T set_canStickNonTarget(bool value) {
		return ((T (*)(WeaponProjectileSimulator*, bool))(Il2CppBase() + 0x339D438))(this, value);
	}
	template <typename T = void> T SpecialInit(uintptr_t type) {
		return ((T (*)(WeaponProjectileSimulator*, uintptr_t))(Il2CppBase() + 0x339CF00))(this, type);
	}
	template <typename T = void> T ResetLocationAndVelocity(Il2CppVector3 resetLocation, Il2CppVector3 resetVelocity) {
		return ((T (*)(WeaponProjectileSimulator*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x339D440))(this, resetLocation, resetVelocity);
	}
	template <typename T = Il2CppVector3> T GetExplosionPosition(uintptr_t* explosionTime) {
		return ((T (*)(WeaponProjectileSimulator*, uintptr_t*))(Il2CppBase() + 0x339D564))(this, explosionTime);
	}
	template <typename T = void> T GetProjectilePositionsAndFirstImpactInfo(Il2CppList<Il2CppVector3>* outPositionList, int32_t maxPointNum, uintptr_t owner, uintptr_t firstImpactInfo) {
		return ((T (*)(WeaponProjectileSimulator*, Il2CppList<Il2CppVector3>*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x339D7B4))(this, outPositionList, maxPointNum, owner, firstImpactInfo);
	}
	template <typename T = void> T SimulateStick(bool sticked) {
		return ((T (*)(WeaponProjectileSimulator*, bool))(Il2CppBase() + 0x3398B28))(this, sticked);
	}
	template <typename T = void> T UpdateVelocity(float dt) {
		return ((T (*)(WeaponProjectileSimulator*, float))(Il2CppBase() + 0x339D944))(this, dt);
	}
	template <typename T = bool> T CheckInWater(Il2CppVector3 position, bool forceCheck, float checkInterval) {
		return ((T (*)(WeaponProjectileSimulator*, Il2CppVector3, bool, float))(Il2CppBase() + 0x339DB80))(this, position, forceCheck, checkInterval);
	}
	template <typename T = float> T GetGravityVelocity(float dt) {
		return ((T (*)(WeaponProjectileSimulator*, float))(Il2CppBase() + 0x339DDDC))(this, dt);
	}
	template <typename T = float> T GetVelocityScale(float dt) {
		return ((T (*)(WeaponProjectileSimulator*, float))(Il2CppBase() + 0x339DF50))(this, dt);
	}
	template <typename T = bool> T ExplodeOnTouchGround() {
		return ((T (*)(WeaponProjectileSimulator*))(Il2CppBase() + 0x339E0D4))(this);
	}
	template <typename T = bool> T SingleLineCheck(Il2CppVector3 startPos, Il2CppVector3 dir, float dist, int32_t traceFlag, uintptr_t impactInfo) {
		return ((T (*)(WeaponProjectileSimulator*, Il2CppVector3, Il2CppVector3, float, int32_t, uintptr_t))(Il2CppBase() + 0x339E1D0))(this, startPos, dir, dist, traceFlag, impactInfo);
	}
	template <typename T = Il2CppVector3> T GetCorrectHitNormal(Il2CppVector3 hitNormal) {
		return ((T (*)(WeaponProjectileSimulator*, Il2CppVector3))(Il2CppBase() + 0x339EB88))(this, hitNormal);
	}
	template <typename T = bool> T PreOneTick(uintptr_t deltaTime) {
		return ((T (*)(WeaponProjectileSimulator*, uintptr_t))(Il2CppBase() + 0x339ED00))(this, deltaTime);
	}
	template <typename T = bool> T CanPenetrate(uintptr_t mat) {
		return ((T (*)(WeaponProjectileSimulator*, uintptr_t))(Il2CppBase() + 0x339EA40))(this, mat);
	}
	template <typename T = bool> T CheckVehicleHitAvaliable(uintptr_t impactInfo, bool isIgnoreLocalPlayer) {
		return ((T (*)(WeaponProjectileSimulator*, uintptr_t, bool))(Il2CppBase() + 0x339EF48))(this, impactInfo, isIgnoreLocalPlayer);
	}
	template <typename T = bool> T IsPawnCollider(uintptr_t impactInfo) {
		return ((T (*)(WeaponProjectileSimulator*, uintptr_t))(Il2CppBase() + 0x339F254))(this, impactInfo);
	}
	template <typename T = bool> T ShouldFilterImpact(uintptr_t impactInfo) {
		return ((T (*)(WeaponProjectileSimulator*, uintptr_t))(Il2CppBase() + 0x339F468))(this, impactInfo);
	}
	template <typename T = float> T GetRadiusScale() {
		return ((T (*)(WeaponProjectileSimulator*))(Il2CppBase() + 0x339F540))(this);
	}
	template <typename T = bool> T SimulateTick(bool once, bool traceLocalPlayer, uintptr_t impactInfo, uintptr_t firstImpactInfo, float inUpdateTime, Il2CppList<Il2CppVector3>* outPositionList, uintptr_t throwOwnerPawn, int32_t maxOutPointsNum) {
		return ((T (*)(WeaponProjectileSimulator*, bool, bool, uintptr_t, uintptr_t, float, Il2CppList<Il2CppVector3>*, uintptr_t, int32_t))(Il2CppBase() + 0x339F610))(this, once, traceLocalPlayer, impactInfo, firstImpactInfo, inUpdateTime, outPositionList, throwOwnerPawn, maxOutPointsNum);
	}
	template <typename T = bool> T CanExplodeByHandler(uintptr_t impactInfo) {
		return ((T (*)(WeaponProjectileSimulator*, uintptr_t))(Il2CppBase() + 0x33A0E08))(this, impactInfo);
	}
	template <typename T = int32_t> T GetTraceFlag(bool traceLocalPlayer) {
		return ((T (*)(WeaponProjectileSimulator*, bool))(Il2CppBase() + 0x33A0A7C))(this, traceLocalPlayer);
	}
	template <typename T = void> T PlayStopSound() {
		return ((T (*)(WeaponProjectileSimulator*))(Il2CppBase() + 0x33A11AC))(this);
	}
	template <typename T = bool> T IsHitGroundStop() {
		return ((T (*)(WeaponProjectileSimulator*))(Il2CppBase() + 0x33A1274))(this);
	}
	template <typename T = void> T BounceImpact(uintptr_t info) {
		return ((T (*)(WeaponProjectileSimulator*, uintptr_t))(Il2CppBase() + 0x33A135C))(this, info);
	}
	template <typename T = bool> T IsColliderOwnerPawn(uintptr_t impactInfo, uintptr_t throwOwnerPawn) {
		return ((T (*)(WeaponProjectileSimulator*, uintptr_t, uintptr_t))(Il2CppBase() + 0x33A0B6C))(this, impactInfo, throwOwnerPawn);
	}
	template <typename T = uintptr_t> T CheckPawn(uintptr_t impactInfo, Il2CppVector3 direction, float distance) {
		return ((T (*)(WeaponProjectileSimulator*, uintptr_t, Il2CppVector3, float))(Il2CppBase() + 0x33A142C))(this, impactInfo, direction, distance);
	}
	template <typename T = bool> T GameReplayObjectCanStickTarget(uintptr_t target) {
		return ((T (*)(WeaponProjectileSimulator*, uintptr_t))(Il2CppBase() + 0x33A1CF0))(this, target);
	}
	template <typename T = bool> T ShouldCheckNoPhysics() {
		return ((T (*)(WeaponProjectileSimulator*))(Il2CppBase() + 0x33A1F20))(this);
	}
	template <typename T = bool> T IsOnGroud() {
		return ((T (*)(WeaponProjectileSimulator*))(Il2CppBase() + 0x33A2004))(this);
	}
	template <typename T = void> T ServerBounce(uintptr_t targetType, uint32_t targetID, Il2CppVector3 hitNormal) {
		return ((T (*)(WeaponProjectileSimulator*, uintptr_t, uint32_t, Il2CppVector3))(Il2CppBase() + 0x33A21AC))(this, targetType, targetID, hitNormal);
	}
	template <typename T = void> T ServerBounce_1(uintptr_t resType, Il2CppVector3 pos, Il2CppVector3 velocity, uintptr_t targetType, uint32_t targetID, Il2CppVector3 hitNormal) {
		return ((T (*)(WeaponProjectileSimulator*, uintptr_t, Il2CppVector3, Il2CppVector3, uintptr_t, uint32_t, Il2CppVector3))(Il2CppBase() + 0x33A22EC))(this, resType, pos, velocity, targetType, targetID, hitNormal);
	}
	template <typename T = void> T ApplyBounce(Il2CppVector3 hitNormal, float bounceRate, uintptr_t pPhyMaterial, bool isRealBounce) {
		return ((T (*)(WeaponProjectileSimulator*, Il2CppVector3, float, uintptr_t, bool))(Il2CppBase() + 0x33A0EFC))(this, hitNormal, bounceRate, pPhyMaterial, isRealBounce);
	}
	template <typename T = void> T _PlayBounceSound(uintptr_t pPhyMaterial) {
		return ((T (*)(WeaponProjectileSimulator*, uintptr_t))(Il2CppBase() + 0x33A2668))(this, pPhyMaterial);
	}
	template <typename T = Il2CppVector3> static T GetExplosionPosition_1(Il2CppVector3 initalPosition, Il2CppVector3 initalVelocity, uintptr_t data, uintptr_t* explosionTime, bool canPenetrateStoneMaterialCollider) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, uintptr_t, uintptr_t*, bool))(Il2CppBase() + 0x33A2DF8))(0, initalPosition, initalVelocity, data, explosionTime, canPenetrateStoneMaterialCollider);
	}
	template <typename T = void> static T GetProjectilePositionsAndFirstImpactInfo_1(Il2CppVector3 initalPosition, Il2CppVector3 initalVelocity, uintptr_t data, Il2CppList<Il2CppVector3>* outPositionList, uintptr_t owner, uintptr_t firstImpactInfo, bool canPenetrateStoneMaterialCollider, int32_t maxPointNum) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, uintptr_t, Il2CppList<Il2CppVector3>*, uintptr_t, uintptr_t, bool, int32_t))(Il2CppBase() + 0x33A2F90))(0, initalPosition, initalVelocity, data, outPositionList, owner, firstImpactInfo, canPenetrateStoneMaterialCollider, maxPointNum);
	}
	template <typename T = bool> T IsStop() {
		return ((T (*)(WeaponProjectileSimulator*))(Il2CppBase() + 0x33A32E8))(this);
	}
	template <typename T = float> T GetEntityRadius() {
		return ((T (*)(WeaponProjectileSimulator*))(Il2CppBase() + 0x33A340C))(this);
	}

};

}
