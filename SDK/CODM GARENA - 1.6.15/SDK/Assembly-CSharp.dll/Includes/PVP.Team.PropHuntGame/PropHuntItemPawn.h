#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.PropHuntGame {

class PropHuntItemPawn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.PropHuntGame", "PropHuntItemPawn"));
	}

	template <typename T = Il2CppString*> T& m_PropPawnConfigPath() {
		return *(T*)((uintptr_t)this + 0xBE8);
	}
	template <typename T = Il2CppQuaternion> T& m_LockingAimRotation() {
		return *(T*)((uintptr_t)this + 0xBEC);
	}
	template <typename T = uintptr_t> T& m_PHPlayerInfo() {
		return *(T*)((uintptr_t)this + 0xBFC);
	}
	template <typename T = uintptr_t> T& m_PropHuntSwitchRoleComponent() {
		return *(T*)((uintptr_t)this + 0xC00);
	}
	template <typename T = bool> T& m_IsLockState() {
		return *(T*)((uintptr_t)this + 0xC04);
	}
	template <typename T = Il2CppVector3> T& lastServerPos() {
		return *(T*)((uintptr_t)this + 0xC08);
	}
	template <typename T = float> static T& m_MinHigh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& m_MaxHigh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& max_radius() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& min_radius() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& PropItemJumpMoveScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDefaultAssetID_3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLockState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPawnDeadComponentType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPawnSoundComponentType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSoundEmitterType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLockState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSwitchRoleComponentType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Die() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDying() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TrySwitchWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndSwitchRole() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMeshAssetID_3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PropSwitchToTPSMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchTo3PView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Whistling() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTPSCameraOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoClimb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoJump() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PawnStandOnGroundWhenSpawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCameraPosition_FirstPerson() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableGPUSkin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePropItemStandColliderData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PhysFalling() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessAirSteering() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckJumpFaceWall() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LimitJumpHornzontalSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCurrentMaxTurnAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldRotate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartTickRotateToAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndTickRotateAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRotationRecoverSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalTickTurnRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalUpdateSetRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}

	template <typename T = Il2CppString*> T get_PawnConfigPath() {
		return ((T (*)(PropHuntItemPawn*))(Il2CppBase() + 0x34A98BC))(this);
	}
	template <typename T = void> T set_PawnConfigPath(Il2CppString* value) {
		return ((T (*)(PropHuntItemPawn*, Il2CppString*))(Il2CppBase() + 0x34A98C4))(this, value);
	}
	template <typename T = Il2CppVector3> T get_PawnServerMoveAngle() {
		return ((T (*)(PropHuntItemPawn*))(Il2CppBase() + 0x34A98CC))(this);
	}
	template <typename T = uintptr_t> T get_PHPlayerInfo() {
		return ((T (*)(PropHuntItemPawn*))(Il2CppBase() + 0x34A9950))(this);
	}
	template <typename T = uintptr_t> T get_PropHuntSwitchRoleComponent() {
		return ((T (*)(PropHuntItemPawn*))(Il2CppBase() + 0x34A9A24))(this);
	}
	template <typename T = float> T get_SpectateCameraRadiusScale() {
		return ((T (*)(PropHuntItemPawn*))(Il2CppBase() + 0x34A9AEC))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(PropHuntItemPawn*, float))(Il2CppBase() + 0x34A9AF8))(this, deltaTime);
	}
	template <typename T = int32_t> T GetDefaultAssetID_3P() {
		return ((T (*)(PropHuntItemPawn*))(Il2CppBase() + 0x34A9CE8))(this);
	}
	template <typename T = void> T UpdateLockState() {
		return ((T (*)(PropHuntItemPawn*))(Il2CppBase() + 0x34A9DBC))(this);
	}
	template <typename T = uintptr_t> T get_FireColliderShape() {
		return ((T (*)(PropHuntItemPawn*))(Il2CppBase() + 0x34AA114))(this);
	}
	template <typename T = Il2CppVector3> T get_DieEffectPosition() {
		return ((T (*)(PropHuntItemPawn*))(Il2CppBase() + 0x348FC8C))(this);
	}
	template <typename T = void> T InitPawn(uintptr_t info) {
		return ((T (*)(PropHuntItemPawn*, uintptr_t))(Il2CppBase() + 0x34AA27C))(this, info);
	}
	template <typename T = uintptr_t> T GetPawnDeadComponentType() {
		return ((T (*)(PropHuntItemPawn*))(Il2CppBase() + 0x34AA338))(this);
	}
	template <typename T = uintptr_t> T GetPawnSoundComponentType() {
		return ((T (*)(PropHuntItemPawn*))(Il2CppBase() + 0x34AA434))(this);
	}
	template <typename T = uintptr_t> T GetSoundEmitterType() {
		return ((T (*)(PropHuntItemPawn*))(Il2CppBase() + 0x34AA530))(this);
	}
	template <typename T = void> T SetLockState(bool isLock) {
		return ((T (*)(PropHuntItemPawn*, bool))(Il2CppBase() + 0x34A9ECC))(this, isLock);
	}
	template <typename T = uintptr_t> T GetSwitchRoleComponentType() {
		return ((T (*)(PropHuntItemPawn*))(Il2CppBase() + 0x34AA62C))(this);
	}
	template <typename T = void> T Die(bool isHeadShot, uintptr_t damageType) {
		return ((T (*)(PropHuntItemPawn*, bool, uintptr_t))(Il2CppBase() + 0x34AA728))(this, isHeadShot, damageType);
	}
	template <typename T = void> T PlayDying(bool isHeadShot, uintptr_t damageType) {
		return ((T (*)(PropHuntItemPawn*, bool, uintptr_t))(Il2CppBase() + 0x34AA8BC))(this, isHeadShot, damageType);
	}
	template <typename T = uintptr_t> T get_CurrentWeapon() {
		return ((T (*)(PropHuntItemPawn*))(Il2CppBase() + 0x34AAC40))(this);
	}
	template <typename T = void> T TrySwitchWeapon(int32_t itemId, unsigned char slot, int32_t actorID, int32_t itemLevel, uint32_t skinID, bool isServerData) {
		return ((T (*)(PropHuntItemPawn*, int32_t, unsigned char, int32_t, int32_t, uint32_t, bool))(Il2CppBase() + 0x34AAC48))(this, itemId, slot, actorID, itemLevel, skinID, isServerData);
	}
	template <typename T = void> T EndSwitchRole() {
		return ((T (*)(PropHuntItemPawn*))(Il2CppBase() + 0x34AAD1C))(this);
	}
	template <typename T = int32_t> T GetMeshAssetID_3P() {
		return ((T (*)(PropHuntItemPawn*))(Il2CppBase() + 0x34AB550))(this);
	}
	template <typename T = void> T PropSwitchToTPSMode() {
		return ((T (*)(PropHuntItemPawn*))(Il2CppBase() + 0x34AAEA4))(this);
	}
	template <typename T = void> T SwitchTo3PView() {
		return ((T (*)(PropHuntItemPawn*))(Il2CppBase() + 0x34AB71C))(this);
	}
	template <typename T = void> T ResetCamera() {
		return ((T (*)(PropHuntItemPawn*))(Il2CppBase() + 0x34AB684))(this);
	}
	template <typename T = void> T Whistling() {
		return ((T (*)(PropHuntItemPawn*))(Il2CppBase() + 0x349A5FC))(this);
	}
	template <typename T = Il2CppVector3> T GetTPSCameraOffset() {
		return ((T (*)(PropHuntItemPawn*))(Il2CppBase() + 0x34ABB94))(this);
	}
	template <typename T = void> T DoClimb() {
		return ((T (*)(PropHuntItemPawn*))(Il2CppBase() + 0x34ABC70))(this);
	}
	template <typename T = void> T DoJump() {
		return ((T (*)(PropHuntItemPawn*))(Il2CppBase() + 0x34ABD28))(this);
	}
	template <typename T = void> T PawnStandOnGroundWhenSpawn() {
		return ((T (*)(PropHuntItemPawn*))(Il2CppBase() + 0x34ABE84))(this);
	}
	template <typename T = void> T SyncPosition(Il2CppVector3 pos, bool checkColliders) {
		return ((T (*)(PropHuntItemPawn*, Il2CppVector3, bool))(Il2CppBase() + 0x34ABF1C))(this, pos, checkColliders);
	}
	template <typename T = bool> T get_ShouldCheckCollisionWithLocalPlayer() {
		return ((T (*)(PropHuntItemPawn*))(Il2CppBase() + 0x34AC058))(this);
	}
	template <typename T = Il2CppVector3> T GetCameraPosition_FirstPerson() {
		return ((T (*)(PropHuntItemPawn*))(Il2CppBase() + 0x34AC060))(this);
	}
	template <typename T = bool> T EnableGPUSkin() {
		return ((T (*)(PropHuntItemPawn*))(Il2CppBase() + 0x34AC110))(this);
	}
	template <typename T = float> T get_StandCharControllerHeight() {
		return ((T (*)(PropHuntItemPawn*))(Il2CppBase() + 0x34AC1B0))(this);
	}
	template <typename T = float> T get_StandCharControllerRadius() {
		return ((T (*)(PropHuntItemPawn*))(Il2CppBase() + 0x34AC51C))(this);
	}
	template <typename T = float> T get_CrouchCharControllerHight() {
		return ((T (*)(PropHuntItemPawn*))(Il2CppBase() + 0x34AC910))(this);
	}
	template <typename T = float> T get_ProneCharControllerHight() {
		return ((T (*)(PropHuntItemPawn*))(Il2CppBase() + 0x34AC928))(this);
	}
	template <typename T = void> T UpdatePropItemStandColliderData() {
		return ((T (*)(PropHuntItemPawn*))(Il2CppBase() + 0x34AB394))(this);
	}
	template <typename T = void> T PhysFalling(float deltaTime) {
		return ((T (*)(PropHuntItemPawn*, float))(Il2CppBase() + 0x34AC940))(this, deltaTime);
	}
	template <typename T = void> T ProcessAirSteering(float deltaTime) {
		return ((T (*)(PropHuntItemPawn*, float))(Il2CppBase() + 0x34ACA44))(this, deltaTime);
	}
	template <typename T = bool> T CheckJumpFaceWall() {
		return ((T (*)(PropHuntItemPawn*))(Il2CppBase() + 0x34ACE98))(this);
	}
	template <typename T = void> T LimitJumpHornzontalSpeed() {
		return ((T (*)(PropHuntItemPawn*))(Il2CppBase() + 0x34ACF38))(this);
	}
	template <typename T = void> T UpdateRotation(Il2CppVector3 deltaEulerAngles) {
		return ((T (*)(PropHuntItemPawn*, Il2CppVector3))(Il2CppBase() + 0x34ACFD0))(this, deltaEulerAngles);
	}
	template <typename T = void> T AddRotation(Il2CppQuaternion deltaRotation) {
		return ((T (*)(PropHuntItemPawn*, Il2CppQuaternion))(Il2CppBase() + 0x34AD0C0))(this, deltaRotation);
	}
	template <typename T = void> T UpdateCurrentMaxTurnAngle() {
		return ((T (*)(PropHuntItemPawn*))(Il2CppBase() + 0x34AD1F8))(this);
	}
	template <typename T = bool> T ShouldRotate(float diffAbs, uintptr_t isMax, uintptr_t maxDelta) {
		return ((T (*)(PropHuntItemPawn*, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x34AD2A0))(this, diffAbs, isMax, maxDelta);
	}
	template <typename T = void> T StartTickRotateToAngle() {
		return ((T (*)(PropHuntItemPawn*))(Il2CppBase() + 0x34AD48C))(this);
	}
	template <typename T = void> T EndTickRotateAngle() {
		return ((T (*)(PropHuntItemPawn*))(Il2CppBase() + 0x34AD54C))(this);
	}
	template <typename T = float> T GetRotationRecoverSpeed(float angleDiffAbs) {
		return ((T (*)(PropHuntItemPawn*, float))(Il2CppBase() + 0x34AD600))(this, angleDiffAbs);
	}
	template <typename T = void> T InternalTickTurnRotation(float deltaTime, float angleDiff) {
		return ((T (*)(PropHuntItemPawn*, float, float))(Il2CppBase() + 0x34AD7FC))(this, deltaTime, angleDiff);
	}
	template <typename T = void> T InternalUpdateSetRotation(float deltaTime) {
		return ((T (*)(PropHuntItemPawn*, float))(Il2CppBase() + 0x34ADA90))(this, deltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(PropHuntItemPawn*, float))(Il2CppBase() + 0x34AE780))(this, P0);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetDefaultAssetID_3P() {
		return ((T (*)(PropHuntItemPawn*))(Il2CppBase() + 0x34AE788))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitPawn(uintptr_t P0) {
		return ((T (*)(PropHuntItemPawn*, uintptr_t))(Il2CppBase() + 0x34AE790))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetPawnDeadComponentType() {
		return ((T (*)(PropHuntItemPawn*))(Il2CppBase() + 0x34AE798))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetPawnSoundComponentType() {
		return ((T (*)(PropHuntItemPawn*))(Il2CppBase() + 0x34AE7A0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetSoundEmitterType() {
		return ((T (*)(PropHuntItemPawn*))(Il2CppBase() + 0x34AE7A8))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetSwitchRoleComponentType() {
		return ((T (*)(PropHuntItemPawn*))(Il2CppBase() + 0x34AE7B0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Die(bool P0, uintptr_t P1) {
		return ((T (*)(PropHuntItemPawn*, bool, uintptr_t))(Il2CppBase() + 0x34AE7B8))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_PlayDying(bool P0, uintptr_t P1) {
		return ((T (*)(PropHuntItemPawn*, bool, uintptr_t))(Il2CppBase() + 0x34AE7C0))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_TrySwitchWeapon(int32_t P0, unsigned char P1, int32_t P2, int32_t P3, uint32_t P4, bool P5) {
		return ((T (*)(PropHuntItemPawn*, int32_t, unsigned char, int32_t, int32_t, uint32_t, bool))(Il2CppBase() + 0x34AE7C8))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = void> T xLuaBaseProxy_EndSwitchRole() {
		return ((T (*)(PropHuntItemPawn*))(Il2CppBase() + 0x34AE7FC))(this);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetMeshAssetID_3P() {
		return ((T (*)(PropHuntItemPawn*))(Il2CppBase() + 0x34AE804))(this);
	}
	template <typename T = Il2CppVector3> T xLuaBaseProxy_GetTPSCameraOffset() {
		return ((T (*)(PropHuntItemPawn*))(Il2CppBase() + 0x34AE80C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DoClimb() {
		return ((T (*)(PropHuntItemPawn*))(Il2CppBase() + 0x34AE820))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DoJump() {
		return ((T (*)(PropHuntItemPawn*))(Il2CppBase() + 0x34AE828))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PawnStandOnGroundWhenSpawn() {
		return ((T (*)(PropHuntItemPawn*))(Il2CppBase() + 0x34AE830))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SyncPosition(Il2CppVector3 P0, bool P1) {
		return ((T (*)(PropHuntItemPawn*, Il2CppVector3, bool))(Il2CppBase() + 0x34AE838))(this, P0, P1);
	}
	template <typename T = Il2CppVector3> T xLuaBaseProxy_GetCameraPosition_FirstPerson() {
		return ((T (*)(PropHuntItemPawn*))(Il2CppBase() + 0x34AE85C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_EnableGPUSkin() {
		return ((T (*)(PropHuntItemPawn*))(Il2CppBase() + 0x34AE870))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PhysFalling(float P0) {
		return ((T (*)(PropHuntItemPawn*, float))(Il2CppBase() + 0x34AE878))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ProcessAirSteering(float P0) {
		return ((T (*)(PropHuntItemPawn*, float))(Il2CppBase() + 0x34AE880))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_CheckJumpFaceWall() {
		return ((T (*)(PropHuntItemPawn*))(Il2CppBase() + 0x34AE888))(this);
	}
	template <typename T = void> T xLuaBaseProxy_LimitJumpHornzontalSpeed() {
		return ((T (*)(PropHuntItemPawn*))(Il2CppBase() + 0x34AE890))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateRotation(Il2CppVector3 P0) {
		return ((T (*)(PropHuntItemPawn*, Il2CppVector3))(Il2CppBase() + 0x34AE898))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_AddRotation(Il2CppQuaternion P0) {
		return ((T (*)(PropHuntItemPawn*, Il2CppQuaternion))(Il2CppBase() + 0x34AE8B8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_InternalUpdateSetRotation(float P0) {
		return ((T (*)(PropHuntItemPawn*, float))(Il2CppBase() + 0x34AE8DC))(this, P0);
	}

};

}
