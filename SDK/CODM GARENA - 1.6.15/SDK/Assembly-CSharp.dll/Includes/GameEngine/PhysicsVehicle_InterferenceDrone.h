#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class PhysicsVehicleInterferenceDrone
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "PhysicsVehicle_InterferenceDrone"));
	}

	template <typename T = uintptr_t> T& maxSpeedCurv() {
		return *(T*)((uintptr_t)this + 0x4C8);
	}
	template <typename T = float> T& autoHeightStrength() {
		return *(T*)((uintptr_t)this + 0x4CC);
	}
	template <typename T = float> T& autoHeightCooldown() {
		return *(T*)((uintptr_t)this + 0x4D0);
	}
	template <typename T = uintptr_t> T& MeshRenderer() {
		return *(T*)((uintptr_t)this + 0x4D4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& FollowingEffects() {
		return *(T*)((uintptr_t)this + 0x4D8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& InterferingEffects() {
		return *(T*)((uintptr_t)this + 0x4DC);
	}
	template <typename T = uintptr_t> T& FlyingTrailRenderer() {
		return *(T*)((uintptr_t)this + 0x4E0);
	}
	template <typename T = float> T& idealHeight() {
		return *(T*)((uintptr_t)this + 0x4E4);
	}
	template <typename T = float> T& currentIdealHeight() {
		return *(T*)((uintptr_t)this + 0x4E8);
	}
	template <typename T = float> T& manualHeightTime() {
		return *(T*)((uintptr_t)this + 0x4EC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& droneGroundObjectList() {
		return *(T*)((uintptr_t)this + 0x4F0);
	}
	template <typename T = float> T& droneGroundObjectListRefreshTime() {
		return *(T*)((uintptr_t)this + 0x4F4);
	}
	template <typename T = bool> T& m_IsOnVehicle() {
		return *(T*)((uintptr_t)this + 0x4F8);
	}
	template <typename T = bool> T& m_NeedToSyncPosition() {
		return *(T*)((uintptr_t)this + 0x4F9);
	}
	template <typename T = float> T& m_LastSyncPositionTime() {
		return *(T*)((uintptr_t)this + 0x4FC);
	}
	template <typename T = bool> T& m_IsOutOfFlyingRangeOld() {
		return *(T*)((uintptr_t)this + 0x500);
	}
	template <typename T = bool> T& m_IsOutOfFlyingRangeNew() {
		return *(T*)((uintptr_t)this + 0x501);
	}
	template <typename T = Il2CppVector3> T& m_CachedOwnerPawnPosition() {
		return *(T*)((uintptr_t)this + 0x504);
	}
	template <typename T = Il2CppVector3> T& m_OldVelocity() {
		return *(T*)((uintptr_t)this + 0x510);
	}
	template <typename T = Il2CppVector3> T& m_DestinationPosition() {
		return *(T*)((uintptr_t)this + 0x51C);
	}
	template <typename T = uintptr_t> T& m_FollowingOwnerEffect() {
		return *(T*)((uintptr_t)this + 0x528);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& m_FollowingOwnerEffectLinePoints() {
		return *(T*)((uintptr_t)this + 0x52C);
	}
	template <typename T = float> T& m_RemainingLifeTime() {
		return *(T*)((uintptr_t)this + 0x530);
	}
	template <typename T = float> T& m_LastForceRefreshTime() {
		return *(T*)((uintptr_t)this + 0x534);
	}
	template <typename T = bool> T& m_HasPlayedInterfereEffect() {
		return *(T*)((uintptr_t)this + 0x538);
	}
	template <typename T = uintptr_t> T& m_DroneNetState() {
		return *(T*)((uintptr_t)this + 0x53C);
	}
	template <typename T = uint32_t> T& m_ControlPlayerId() {
		return *(T*)((uintptr_t)this + 0x564);
	}
	template <typename T = bool> T& m_HasSendInterferOnce() {
		return *(T*)((uintptr_t)this + 0x568);
	}
	template <typename T = uintptr_t> T& m_OwnerTransform() {
		return *(T*)((uintptr_t)this + 0x56C);
	}
	template <typename T = bool> T& m_IsShowFollowingOwnerEffect() {
		return *(T*)((uintptr_t)this + 0x570);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ServerSyncAllFlyStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVehicleControlType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitRigidbody() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMoveControll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcFollowCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOnVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOffVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendServerMoveData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ServerSyncFlyStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickFlyingTrailEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateTakeDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginFlyDrone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndFlyDrone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckIsControled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReplaceBrokenMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMoveControll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowMapInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideMapInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayInterfereEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDestroyedEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsVisibleByCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowFollowingOwnerEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateFollowingOwnerEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideFollowingOwnerEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}

	template <typename T = uintptr_t> T get_DroneNetState() {
		return ((T (*)(PhysicsVehicleInterferenceDrone*))(Il2CppBase() + 0x1D9282C))(this);
	}
	template <typename T = void> static T ServerSyncAllFlyStatus(uintptr_t status) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1D92874))(0, status);
	}
	template <typename T = uint32_t> T get_ControlPlayerId() {
		return ((T (*)(PhysicsVehicleInterferenceDrone*))(Il2CppBase() + 0x1D944A8))(this);
	}
	template <typename T = bool> T get_onGround() {
		return ((T (*)(PhysicsVehicleInterferenceDrone*))(Il2CppBase() + 0x1D944B0))(this);
	}
	template <typename T = uintptr_t> T GetVehicleControlType() {
		return ((T (*)(PhysicsVehicleInterferenceDrone*))(Il2CppBase() + 0x1D944B8))(this);
	}
	template <typename T = void> T InitRigidbody() {
		return ((T (*)(PhysicsVehicleInterferenceDrone*))(Il2CppBase() + 0x1D94558))(this);
	}
	template <typename T = void> T InitVehicle(uint32_t actorID, uintptr_t vehicleType) {
		return ((T (*)(PhysicsVehicleInterferenceDrone*, uint32_t, uintptr_t))(Il2CppBase() + 0x1D9468C))(this, actorID, vehicleType);
	}
	template <typename T = void> T UpdateMoveControll(float throttle, float steering, float climbing) {
		return ((T (*)(PhysicsVehicleInterferenceDrone*, float, float, float))(Il2CppBase() + 0x1D94814))(this, throttle, steering, climbing);
	}
	template <typename T = void> T CalcFollowCamera(uintptr_t camera, uintptr_t* cam_pos, uintptr_t* cam_rot) {
		return ((T (*)(PhysicsVehicleInterferenceDrone*, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x1D94954))(this, camera, cam_pos, cam_rot);
	}
	template <typename T = void> T GetOnVehicle(uintptr_t pawn, uintptr_t seat) {
		return ((T (*)(PhysicsVehicleInterferenceDrone*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1D94A90))(this, pawn, seat);
	}
	template <typename T = void> T GetOffVehicle(uintptr_t pawn, Il2CppVector3 offPosition) {
		return ((T (*)(PhysicsVehicleInterferenceDrone*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x1D953FC))(this, pawn, offPosition);
	}
	template <typename T = void> T SendServerMoveData() {
		return ((T (*)(PhysicsVehicleInterferenceDrone*))(Il2CppBase() + 0x1D95B68))(this);
	}
	template <typename T = void> T ServerSyncFlyStatus(uintptr_t status) {
		return ((T (*)(PhysicsVehicleInterferenceDrone*, uintptr_t))(Il2CppBase() + 0x1D93008))(this, status);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(PhysicsVehicleInterferenceDrone*, float))(Il2CppBase() + 0x1D961F8))(this, deltaTime);
	}
	template <typename T = void> T TickAudio(float deltaTime) {
		return ((T (*)(PhysicsVehicleInterferenceDrone*, float))(Il2CppBase() + 0x1D96C8C))(this, deltaTime);
	}
	template <typename T = void> T TickFlyingTrailEffect() {
		return ((T (*)(PhysicsVehicleInterferenceDrone*))(Il2CppBase() + 0x1D96A90))(this);
	}
	template <typename T = void> T SimulateTakeDamage(uintptr_t damageInfo) {
		return ((T (*)(PhysicsVehicleInterferenceDrone*, uintptr_t))(Il2CppBase() + 0x1D97078))(this, damageInfo);
	}
	template <typename T = void> T BeginFlyDrone(uintptr_t pawn) {
		return ((T (*)(PhysicsVehicleInterferenceDrone*, uintptr_t))(Il2CppBase() + 0x1D971F0))(this, pawn);
	}
	template <typename T = void> T EndFlyDrone(uintptr_t pawn) {
		return ((T (*)(PhysicsVehicleInterferenceDrone*, uintptr_t))(Il2CppBase() + 0x1D95AC8))(this, pawn);
	}
	template <typename T = bool> T CheckIsControled() {
		return ((T (*)(PhysicsVehicleInterferenceDrone*))(Il2CppBase() + 0x1D97290))(this);
	}
	template <typename T = void> T ReplaceBrokenMesh() {
		return ((T (*)(PhysicsVehicleInterferenceDrone*))(Il2CppBase() + 0x1D97330))(this);
	}
	template <typename T = Il2CppVector3> T GetMoveControll() {
		return ((T (*)(PhysicsVehicleInterferenceDrone*))(Il2CppBase() + 0x1D973C8))(this);
	}
	template <typename T = void> T ShowMapInfo() {
		return ((T (*)(PhysicsVehicleInterferenceDrone*))(Il2CppBase() + 0x1D950D4))(this);
	}
	template <typename T = void> T HideMapInfo() {
		return ((T (*)(PhysicsVehicleInterferenceDrone*))(Il2CppBase() + 0x1D95840))(this);
	}
	template <typename T = void> T PlayInterfereEffect() {
		return ((T (*)(PhysicsVehicleInterferenceDrone*))(Il2CppBase() + 0x1D95E74))(this);
	}
	template <typename T = void> T PlayDestroyedEffect() {
		return ((T (*)(PhysicsVehicleInterferenceDrone*))(Il2CppBase() + 0x1D95C00))(this);
	}
	template <typename T = bool> T IsVisibleByCamera(uintptr_t camera) {
		return ((T (*)(PhysicsVehicleInterferenceDrone*, uintptr_t))(Il2CppBase() + 0x1D975D4))(this, camera);
	}
	template <typename T = void> T ShowFollowingOwnerEffect() {
		return ((T (*)(PhysicsVehicleInterferenceDrone*))(Il2CppBase() + 0x1D97748))(this);
	}
	template <typename T = void> T UpdateFollowingOwnerEffect() {
		return ((T (*)(PhysicsVehicleInterferenceDrone*))(Il2CppBase() + 0x1D97BC4))(this);
	}
	template <typename T = void> T HideFollowingOwnerEffect() {
		return ((T (*)(PhysicsVehicleInterferenceDrone*))(Il2CppBase() + 0x1D97ECC))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(PhysicsVehicleInterferenceDrone*))(Il2CppBase() + 0x1D98000))(this);
	}
	template <typename T = void> T PlayInterfereEffectm__0(uintptr_t effect) {
		return ((T (*)(PhysicsVehicleInterferenceDrone*, uintptr_t))(Il2CppBase() + 0x1D981AC))(this, effect);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetVehicleControlType() {
		return ((T (*)(PhysicsVehicleInterferenceDrone*))(Il2CppBase() + 0x1D98370))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitRigidbody() {
		return ((T (*)(PhysicsVehicleInterferenceDrone*))(Il2CppBase() + 0x1D98378))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitVehicle(uint32_t P0, uintptr_t P1) {
		return ((T (*)(PhysicsVehicleInterferenceDrone*, uint32_t, uintptr_t))(Il2CppBase() + 0x1D98380))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateMoveControll(float P0, float P1, float P2) {
		return ((T (*)(PhysicsVehicleInterferenceDrone*, float, float, float))(Il2CppBase() + 0x1D98384))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_CalcFollowCamera(uintptr_t P0, uintptr_t* P1, uintptr_t* P2) {
		return ((T (*)(PhysicsVehicleInterferenceDrone*, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x1D9839C))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_GetOnVehicle(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(PhysicsVehicleInterferenceDrone*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1D983B4))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_GetOffVehicle(uintptr_t P0, Il2CppVector3 P1) {
		return ((T (*)(PhysicsVehicleInterferenceDrone*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x1D983B8))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_SendServerMoveData() {
		return ((T (*)(PhysicsVehicleInterferenceDrone*))(Il2CppBase() + 0x1D983D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(PhysicsVehicleInterferenceDrone*, float))(Il2CppBase() + 0x1D983E0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_TickAudio(float P0) {
		return ((T (*)(PhysicsVehicleInterferenceDrone*, float))(Il2CppBase() + 0x1D983E4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SimulateTakeDamage(uintptr_t P0) {
		return ((T (*)(PhysicsVehicleInterferenceDrone*, uintptr_t))(Il2CppBase() + 0x1D983EC))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_CheckIsControled() {
		return ((T (*)(PhysicsVehicleInterferenceDrone*))(Il2CppBase() + 0x1D983F4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ReplaceBrokenMesh() {
		return ((T (*)(PhysicsVehicleInterferenceDrone*))(Il2CppBase() + 0x1D983FC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(PhysicsVehicleInterferenceDrone*))(Il2CppBase() + 0x1D98400))(this);
	}

};

}
