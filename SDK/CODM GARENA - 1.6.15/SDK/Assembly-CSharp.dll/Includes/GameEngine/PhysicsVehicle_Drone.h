#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class PhysicsVehicleDrone
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "PhysicsVehicle_Drone"));
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
	template <typename T = Il2CppVector2> T& groundHeightRange() {
		return *(T*)((uintptr_t)this + 0x4D4);
	}
	template <typename T = float> T& idealHeight() {
		return *(T*)((uintptr_t)this + 0x4DC);
	}
	template <typename T = float> T& currentIdealHeight() {
		return *(T*)((uintptr_t)this + 0x4E0);
	}
	template <typename T = float> T& manualHeightTime() {
		return *(T*)((uintptr_t)this + 0x4E4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& droneGroundObjectList() {
		return *(T*)((uintptr_t)this + 0x4E8);
	}
	template <typename T = float> T& droneGroundObjectListRefreshTime() {
		return *(T*)((uintptr_t)this + 0x4EC);
	}
	template <typename T = uintptr_t> T& m_SkillComponent() {
		return *(T*)((uintptr_t)this + 0x4F0);
	}
	template <typename T = bool> T& m_IsOnVehicle() {
		return *(T*)((uintptr_t)this + 0x4F4);
	}
	template <typename T = bool> T& m_NeedToSyncPosition() {
		return *(T*)((uintptr_t)this + 0x4F5);
	}
	template <typename T = float> T& m_LastSyncPositionTime() {
		return *(T*)((uintptr_t)this + 0x4F8);
	}
	template <typename T = bool> T& m_IsOutOfFlyingRangeOld() {
		return *(T*)((uintptr_t)this + 0x4FC);
	}
	template <typename T = bool> T& m_IsOutOfFlyingRangeNew() {
		return *(T*)((uintptr_t)this + 0x4FD);
	}
	template <typename T = Il2CppVector3> T& m_CachedOwnerPawnPosition() {
		return *(T*)((uintptr_t)this + 0x500);
	}
	template <typename T = bool> T& m_IsShowingDroneUIWhenSpectating() {
		return *(T*)((uintptr_t)this + 0x50C);
	}
	template <typename T = uintptr_t> T& m_CurrentSeatIndex() {
		return *(T*)((uintptr_t)this + 0x510);
	}
	template <typename T = bool> T& m_NeedToNotifyVehicleSeatStateChangeCountDown() {
		return *(T*)((uintptr_t)this + 0x514);
	}
	template <typename T = float> T& m_NotifyVehicleSeatStateChangeCountDown() {
		return *(T*)((uintptr_t)this + 0x518);
	}
	template <typename T = bool> T& m_HasShownDroneHUD() {
		return *(T*)((uintptr_t)this + 0x51C);
	}
	template <typename T = float> T& m_BeginActiveTime() {
		return *(T*)((uintptr_t)this + 0x520);
	}
	template <typename T = Il2CppQuaternion> T& m_CameraRotation() {
		return *(T*)((uintptr_t)this + 0x524);
	}
	template <typename T = float> T& m_CurrentServerSpeedMagnitude() {
		return *(T*)((uintptr_t)this + 0x534);
	}
	template <typename T = uintptr_t> T& netState() {
		return *(T*)((uintptr_t)this + 0x538);
	}
	template <typename T = uint32_t> T& m_ControlPlayerId() {
		return *(T*)((uintptr_t)this + 0x560);
	}
	template <typename T = uintptr_t> static T& CreateCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& DestoryCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_MeshRenderers() {
		return *(T*)((uintptr_t)this + 0x564);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ServerSyncAllFlyStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVehicleControlType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitRigidbody() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateGroundHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMoveControll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcFollowCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOnVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOffVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOffVehicleForDeadReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendServerMoveData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ServerSyncFlyStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShouldTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FixedUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateTakeDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCollisionEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CastSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSkillCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginFlyDrone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordWeaponInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndFlyDrone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckIsControled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReplaceBrokenMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMoveControll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDestroyedEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowMapInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideMapInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TacticalRadarViewSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TacticalRadarViewSpriteDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddOcclusionEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeadReplayCommonDestory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitMeshRenderers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentMeshRenderer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}

	template <typename T = bool> T get_HasShownDroneHUD() {
		return ((T (*)(PhysicsVehicleDrone*))(Il2CppBase() + 0x1D7C3F4))(this);
	}
	template <typename T = void> T set_HasShownDroneHUD(bool value) {
		return ((T (*)(PhysicsVehicleDrone*, bool))(Il2CppBase() + 0x1D7C3FC))(this, value);
	}
	template <typename T = Il2CppVector3> T get_CachedOwnerPawnPosition() {
		return ((T (*)(PhysicsVehicleDrone*))(Il2CppBase() + 0x1D7C404))(this);
	}
	template <typename T = void> T set_CachedOwnerPawnPosition(Il2CppVector3 value) {
		return ((T (*)(PhysicsVehicleDrone*, Il2CppVector3))(Il2CppBase() + 0x1D7C41C))(this, value);
	}
	template <typename T = Il2CppQuaternion> T get_CameraRotation() {
		return ((T (*)(PhysicsVehicleDrone*))(Il2CppBase() + 0x1D7C428))(this);
	}
	template <typename T = void> T set_CameraRotation(Il2CppQuaternion value) {
		return ((T (*)(PhysicsVehicleDrone*, Il2CppQuaternion))(Il2CppBase() + 0x1D7C43C))(this, value);
	}
	template <typename T = float> T get_CurrentServerSpeedMagnitude() {
		return ((T (*)(PhysicsVehicleDrone*))(Il2CppBase() + 0x1D7C454))(this);
	}
	template <typename T = void> T set_CurrentServerSpeedMagnitude(float value) {
		return ((T (*)(PhysicsVehicleDrone*, float))(Il2CppBase() + 0x1D7C45C))(this, value);
	}
	template <typename T = void> static T ServerSyncAllFlyStatus(uintptr_t status) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1D7C464))(0, status);
	}
	template <typename T = uint32_t> T get_ControlPlayerId() {
		return ((T (*)(PhysicsVehicleDrone*))(Il2CppBase() + 0x1D7D5EC))(this);
	}
	template <typename T = bool> T get_onGround() {
		return ((T (*)(PhysicsVehicleDrone*))(Il2CppBase() + 0x1D7D5F4))(this);
	}
	template <typename T = uintptr_t> T GetVehicleControlType() {
		return ((T (*)(PhysicsVehicleDrone*))(Il2CppBase() + 0x1D7D5FC))(this);
	}
	template <typename T = void> T InitRigidbody() {
		return ((T (*)(PhysicsVehicleDrone*))(Il2CppBase() + 0x1D7D6CC))(this);
	}
	template <typename T = void> T InitVehicle(uint32_t actorID, uintptr_t vehicleType) {
		return ((T (*)(PhysicsVehicleDrone*, uint32_t, uintptr_t))(Il2CppBase() + 0x1D7D7EC))(this, actorID, vehicleType);
	}
	template <typename T = void> T UpdateGroundHeight() {
		return ((T (*)(PhysicsVehicleDrone*))(Il2CppBase() + 0x1D7DCB0))(this);
	}
	template <typename T = void> T UpdateMoveControll(float throttle, float steering, float climbing) {
		return ((T (*)(PhysicsVehicleDrone*, float, float, float))(Il2CppBase() + 0x1D7DD78))(this, throttle, steering, climbing);
	}
	template <typename T = void> T CalcFollowCamera(uintptr_t camera, uintptr_t* cam_pos, uintptr_t* cam_rot) {
		return ((T (*)(PhysicsVehicleDrone*, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x1D7E00C))(this, camera, cam_pos, cam_rot);
	}
	template <typename T = void> T GetOnVehicle(uintptr_t pawn, uintptr_t seat) {
		return ((T (*)(PhysicsVehicleDrone*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1D7E420))(this, pawn, seat);
	}
	template <typename T = void> T GetOffVehicle(uintptr_t pawn, Il2CppVector3 offPosition) {
		return ((T (*)(PhysicsVehicleDrone*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x1D80294))(this, pawn, offPosition);
	}
	template <typename T = void> T GetOffVehicleForDeadReplay(uintptr_t pawn, Il2CppVector3 offPosition) {
		return ((T (*)(PhysicsVehicleDrone*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x1D8151C))(this, pawn, offPosition);
	}
	template <typename T = void> T SendServerMoveData() {
		return ((T (*)(PhysicsVehicleDrone*))(Il2CppBase() + 0x1D81C4C))(this);
	}
	template <typename T = void> T ServerSyncFlyStatus(uintptr_t status) {
		return ((T (*)(PhysicsVehicleDrone*, uintptr_t))(Il2CppBase() + 0x1D7CF58))(this, status);
	}
	template <typename T = bool> T CheckShouldTick() {
		return ((T (*)(PhysicsVehicleDrone*))(Il2CppBase() + 0x1D82460))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(PhysicsVehicleDrone*, float))(Il2CppBase() + 0x1D82698))(this, deltaTime);
	}
	template <typename T = void> T TickAudio(float deltaTime) {
		return ((T (*)(PhysicsVehicleDrone*, float))(Il2CppBase() + 0x1D832A8))(this, deltaTime);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(PhysicsVehicleDrone*))(Il2CppBase() + 0x1D83698))(this);
	}
	template <typename T = void> T SimulateTakeDamage(uintptr_t damageInfo) {
		return ((T (*)(PhysicsVehicleDrone*, uintptr_t))(Il2CppBase() + 0x1D84FA0))(this, damageInfo);
	}
	template <typename T = void> T OnCollisionEnter(uintptr_t collision) {
		return ((T (*)(PhysicsVehicleDrone*, uintptr_t))(Il2CppBase() + 0x1D85148))(this, collision);
	}
	template <typename T = void> T CastSkill() {
		return ((T (*)(PhysicsVehicleDrone*))(Il2CppBase() + 0x1D853CC))(this);
	}
	template <typename T = void> T UpdateSkillCount(int32_t count) {
		return ((T (*)(PhysicsVehicleDrone*, int32_t))(Il2CppBase() + 0x1D85540))(this, count);
	}
	template <typename T = void> T BeginFlyDrone(uintptr_t pawn) {
		return ((T (*)(PhysicsVehicleDrone*, uintptr_t))(Il2CppBase() + 0x1D7FF1C))(this, pawn);
	}
	template <typename T = void> T RecordWeaponInfo(uintptr_t pawn) {
		return ((T (*)(PhysicsVehicleDrone*, uintptr_t))(Il2CppBase() + 0x1D8563C))(this, pawn);
	}
	template <typename T = void> T EndFlyDrone(uintptr_t pawn) {
		return ((T (*)(PhysicsVehicleDrone*, uintptr_t))(Il2CppBase() + 0x1D810E8))(this, pawn);
	}
	template <typename T = bool> T CheckIsControled() {
		return ((T (*)(PhysicsVehicleDrone*))(Il2CppBase() + 0x1D85BE4))(this);
	}
	template <typename T = void> T ReplaceBrokenMesh() {
		return ((T (*)(PhysicsVehicleDrone*))(Il2CppBase() + 0x1D85CB4))(this);
	}
	template <typename T = Il2CppVector3> T GetMoveControll() {
		return ((T (*)(PhysicsVehicleDrone*))(Il2CppBase() + 0x1D85D7C))(this);
	}
	template <typename T = void> T PlayDestroyedEffect() {
		return ((T (*)(PhysicsVehicleDrone*))(Il2CppBase() + 0x1D821BC))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(PhysicsVehicleDrone*))(Il2CppBase() + 0x1D85E60))(this);
	}
	template <typename T = void> T ShowMapInfo() {
		return ((T (*)(PhysicsVehicleDrone*))(Il2CppBase() + 0x1D7FBC4))(this);
	}
	template <typename T = void> T HideMapInfo() {
		return ((T (*)(PhysicsVehicleDrone*))(Il2CppBase() + 0x1D80E30))(this);
	}
	template <typename T = Il2CppString*> T TacticalRadarViewSprite(uintptr_t spriteType) {
		return ((T (*)(PhysicsVehicleDrone*, uintptr_t))(Il2CppBase() + 0x1D860B4))(this, spriteType);
	}
	template <typename T = int32_t> T TacticalRadarViewSpriteDepth(uintptr_t spriteType) {
		return ((T (*)(PhysicsVehicleDrone*, uintptr_t))(Il2CppBase() + 0x1D861C4))(this, spriteType);
	}
	template <typename T = void> T AddOcclusionEffect() {
		return ((T (*)(PhysicsVehicleDrone*))(Il2CppBase() + 0x1D862A4))(this);
	}
	template <typename T = void> T DeadReplayCommonDestory(uint32_t actorID) {
		return ((T (*)(PhysicsVehicleDrone*, uint32_t))(Il2CppBase() + 0x1D86500))(this, actorID);
	}
	template <typename T = void> T InitMeshRenderers() {
		return ((T (*)(PhysicsVehicleDrone*))(Il2CppBase() + 0x1D8673C))(this);
	}
	template <typename T = void> T SetCurrentMeshRenderer(bool isActive) {
		return ((T (*)(PhysicsVehicleDrone*, bool))(Il2CppBase() + 0x1D86958))(this, isActive);
	}
	template <typename T = void> T SetHidden(bool isHidden) {
		return ((T (*)(PhysicsVehicleDrone*, bool))(Il2CppBase() + 0x1D86BFC))(this, isHidden);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetVehicleControlType() {
		return ((T (*)(PhysicsVehicleDrone*))(Il2CppBase() + 0x1D86CE4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitRigidbody() {
		return ((T (*)(PhysicsVehicleDrone*))(Il2CppBase() + 0x1D86CEC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitVehicle(uint32_t P0, uintptr_t P1) {
		return ((T (*)(PhysicsVehicleDrone*, uint32_t, uintptr_t))(Il2CppBase() + 0x1D86CF4))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateGroundHeight() {
		return ((T (*)(PhysicsVehicleDrone*))(Il2CppBase() + 0x1D86CF8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateMoveControll(float P0, float P1, float P2) {
		return ((T (*)(PhysicsVehicleDrone*, float, float, float))(Il2CppBase() + 0x1D87D80))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_CalcFollowCamera(uintptr_t P0, uintptr_t* P1, uintptr_t* P2) {
		return ((T (*)(PhysicsVehicleDrone*, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x1D87D98))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_GetOnVehicle(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(PhysicsVehicleDrone*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1D88660))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_GetOffVehicle(uintptr_t P0, Il2CppVector3 P1) {
		return ((T (*)(PhysicsVehicleDrone*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x1D887E4))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_SendServerMoveData() {
		return ((T (*)(PhysicsVehicleDrone*))(Il2CppBase() + 0x1D88804))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(PhysicsVehicleDrone*, float))(Il2CppBase() + 0x1D8880C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_TickAudio(float P0) {
		return ((T (*)(PhysicsVehicleDrone*, float))(Il2CppBase() + 0x1D88C38))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_FixedUpdate() {
		return ((T (*)(PhysicsVehicleDrone*))(Il2CppBase() + 0x1D88C40))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SimulateTakeDamage(uintptr_t P0) {
		return ((T (*)(PhysicsVehicleDrone*, uintptr_t))(Il2CppBase() + 0x1D89D9C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnCollisionEnter(uintptr_t P0) {
		return ((T (*)(PhysicsVehicleDrone*, uintptr_t))(Il2CppBase() + 0x1D89DA4))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_CheckIsControled() {
		return ((T (*)(PhysicsVehicleDrone*))(Il2CppBase() + 0x1D8A090))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ReplaceBrokenMesh() {
		return ((T (*)(PhysicsVehicleDrone*))(Il2CppBase() + 0x1D8A098))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(PhysicsVehicleDrone*))(Il2CppBase() + 0x1D8A79C))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_TacticalRadarViewSprite(uintptr_t P0) {
		return ((T (*)(PhysicsVehicleDrone*, uintptr_t))(Il2CppBase() + 0x1D8A7A4))(this, P0);
	}
	template <typename T = int32_t> T xLuaBaseProxy_TacticalRadarViewSpriteDepth(uintptr_t P0) {
		return ((T (*)(PhysicsVehicleDrone*, uintptr_t))(Il2CppBase() + 0x1D8A7AC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_AddOcclusionEffect() {
		return ((T (*)(PhysicsVehicleDrone*))(Il2CppBase() + 0x1D8A7B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetHidden(bool P0) {
		return ((T (*)(PhysicsVehicleDrone*, bool))(Il2CppBase() + 0x1D8A7BC))(this, P0);
	}

};

}
