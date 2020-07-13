#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRDoor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRDoor"));
	}

	template <typename T = Il2CppString*> static T& Sound_CloseDoorMetal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& Sound_OpenDoorMetal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppString*> static T& Sound_HalBreakenWood() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppString*> static T& Sound_WholeBrokenWood() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppString*> static T& Sound_CloseDoorWood() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppString*> static T& Sound_OpenDoorWood() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = Il2CppString*> static T& Sound_OpenDoorHospital() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppString*> static T& Sound_OpenDoorHospital_InDoor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = Il2CppString*> static T& Sound_OpenDoorBlackMarket() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = Il2CppString*> static T& Sound_CloseDoorBlackMarket() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = float> static T& AntiStuckMoveSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = float> static T& AntiStuckStopPawnMoveMinDotValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = float> static T& AntiStuckStopPawnMoveTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uint32_t> T& m_UID() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& m_AssetRoot() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& m_IsServerOnly() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = bool> T& m_IsAttackable() {
		return *(T*)((uintptr_t)this + 0x7D);
	}
	template <typename T = uintptr_t> T& m_ServerType() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& m_IsPawnInDoor() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& m_NormalAssetId() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& m_BrokenAssetId() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = float> T& m_BrokenHp() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& TriggerDoorDistance() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& m_CurrentAssetId() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& m_LoadAssetCoroutine() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& m_CurrentMesh() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& m_CurrentMeshRenderer() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& m_CurrentDoorState() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppVector3> T& m_Size() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = bool> T& m_IsMove() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> T& m_MoveTimeCount() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = float> T& m_MoveTime() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = float> T& m_InitTime() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uint32_t> T& m_BindDoorUid() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = bool> T& m_BindDoorIsMain() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> T& m_HalfWidth() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppVector3> T& m_AssetOffset() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = bool> T& m_CheckAutoOpenDoor() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = int32_t> T& m_LastCheckAutoOpenDoorFrame() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = int32_t> T& CheckAutoOpenDoorFrame() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = bool> T& m_IsPawnTouchDoor() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = float> T& AutoOpenDoorInputTime() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = float> T& AutoOpenDoorGap() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = Il2CppString*> T& m_DebugString() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uint32_t> T& m_CurrentOperatorID() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = Il2CppVector3> T& InitialPosition() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = float> T& m_Health() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = bool> static T& EnableBRDoorShowDebugHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> T& mOPPlayer() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = bool> T& m_IsLoading() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& InvisibleWallGo() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = float> T& m_MinSetWallDistSqr() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHitImpactTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanUse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitDoor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryCloseDoor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClientCtr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryGetBindDoor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ServerSetState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleDynamicShadow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnForceSetState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoTickMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TouchDoor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryOpenDoor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanBeDamagedBy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TakeDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPawnStay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadDoorAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAssetLoad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLocalPawnInDoor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseInvisibleWall() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateInvisibleWall() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSetInvisibleWall() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}

	template <typename T = uintptr_t> T get_DoorType() {
		return ((T (*)(BRDoor*))(Il2CppBase() + 0x2519C74))(this);
	}
	template <typename T = uint32_t> T get_UID() {
		return ((T (*)(BRDoor*))(Il2CppBase() + 0x2519C7C))(this);
	}
	template <typename T = uint32_t> T get_PlayerId() {
		return ((T (*)(BRDoor*))(Il2CppBase() + 0x2519C84))(this);
	}
	template <typename T = uintptr_t> T get_AssetRoot() {
		return ((T (*)(BRDoor*))(Il2CppBase() + 0x2519C94))(this);
	}
	template <typename T = uintptr_t> T get_MoveAblePartTransform() {
		return ((T (*)(BRDoor*))(Il2CppBase() + 0x2519C9C))(this);
	}
	template <typename T = bool> T get_IsPawnInDoor() {
		return ((T (*)(BRDoor*))(Il2CppBase() + 0x2519CA4))(this);
	}
	template <typename T = uintptr_t> T get_CurrentMesh() {
		return ((T (*)(BRDoor*))(Il2CppBase() + 0x2519CAC))(this);
	}
	template <typename T = uintptr_t> T get_CurrentDoorState() {
		return ((T (*)(BRDoor*))(Il2CppBase() + 0x2519CB4))(this);
	}
	template <typename T = Il2CppVector3> T get_Size() {
		return ((T (*)(BRDoor*))(Il2CppBase() + 0x2519CBC))(this);
	}
	template <typename T = Il2CppQuaternion> T get_CloseRoattion() {
		return ((T (*)(BRDoor*))(Il2CppBase() + 0x2519CD0))(this);
	}
	template <typename T = Il2CppString*> T get_OpenDoorSoundEventStr() {
		return ((T (*)(BRDoor*))(Il2CppBase() + 0x2519CE8))(this);
	}
	template <typename T = Il2CppString*> T get_CloseDoorSoundEventStr() {
		return ((T (*)(BRDoor*))(Il2CppBase() + 0x2519F90))(this);
	}
	template <typename T = float> T get_Health() {
		return ((T (*)(BRDoor*))(Il2CppBase() + 0x251A11C))(this);
	}
	template <typename T = void> T set_Health(float value) {
		return ((T (*)(BRDoor*, float))(Il2CppBase() + 0x251A124))(this, value);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(BRDoor*, float))(Il2CppBase() + 0x251A4F4))(this, deltaTime);
	}
	template <typename T = uintptr_t> T GetHitImpactTarget() {
		return ((T (*)(BRDoor*))(Il2CppBase() + 0x251AF04))(this);
	}
	template <typename T = bool> T IsCanUse() {
		return ((T (*)(BRDoor*))(Il2CppBase() + 0x251AFE8))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(BRDoor*))(Il2CppBase() + 0x251B1F4))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(BRDoor*))(Il2CppBase() + 0x251B62C))(this);
	}
	template <typename T = void> T InitDoor(uint32_t actorId, uint32_t uid, float brokenHp, uintptr_t doorInfo, uintptr_t levelDoor) {
		return ((T (*)(BRDoor*, uint32_t, uint32_t, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x251BA54))(this, actorId, uid, brokenHp, doorInfo, levelDoor);
	}
	template <typename T = void> T TryCloseDoor() {
		return ((T (*)(BRDoor*))(Il2CppBase() + 0x251C424))(this);
	}
	template <typename T = void> T OnClientCtr(uintptr_t notifyType, uintptr_t state) {
		return ((T (*)(BRDoor*, uintptr_t, uintptr_t))(Il2CppBase() + 0x251C500))(this, notifyType, state);
	}
	template <typename T = uintptr_t> T TryGetBindDoor() {
		return ((T (*)(BRDoor*))(Il2CppBase() + 0x251C734))(this);
	}
	template <typename T = void> T ServerSetState(uintptr_t state, uint32_t operatorID) {
		return ((T (*)(BRDoor*, uintptr_t, uint32_t))(Il2CppBase() + 0x251C974))(this, state, operatorID);
	}
	template <typename T = void> T SetState(uintptr_t state, bool force) {
		return ((T (*)(BRDoor*, uintptr_t, bool))(Il2CppBase() + 0x251C060))(this, state, force);
	}
	template <typename T = void> T ToggleDynamicShadow(bool open) {
		return ((T (*)(BRDoor*, bool))(Il2CppBase() + 0x251D1A0))(this, open);
	}
	template <typename T = void> T OnForceSetState(uintptr_t state) {
		return ((T (*)(BRDoor*, uintptr_t))(Il2CppBase() + 0x251D2F8))(this, state);
	}
	template <typename T = void> T StartMove() {
		return ((T (*)(BRDoor*))(Il2CppBase() + 0x251D3D0))(this);
	}
	template <typename T = void> T TickMove(float deltaTime) {
		return ((T (*)(BRDoor*, float))(Il2CppBase() + 0x251A604))(this, deltaTime);
	}
	template <typename T = void> T DoTickMove(float percent, float deltaTime) {
		return ((T (*)(BRDoor*, float, float))(Il2CppBase() + 0x251D4B8))(this, percent, deltaTime);
	}
	template <typename T = void> T EndMove() {
		return ((T (*)(BRDoor*))(Il2CppBase() + 0x251D59C))(this);
	}
	template <typename T = void> T TouchDoor() {
		return ((T (*)(BRDoor*))(Il2CppBase() + 0x251D684))(this);
	}
	template <typename T = void> T TryOpenDoor(uintptr_t pawn) {
		return ((T (*)(BRDoor*, uintptr_t))(Il2CppBase() + 0x251D894))(this, pawn);
	}
	template <typename T = bool> T CanBeDamagedBy(uintptr_t pawn) {
		return ((T (*)(BRDoor*, uintptr_t))(Il2CppBase() + 0x251D964))(this, pawn);
	}
	template <typename T = void> T TakeDamage(uintptr_t damageInfo) {
		return ((T (*)(BRDoor*, uintptr_t))(Il2CppBase() + 0x251DA44))(this, damageInfo);
	}
	template <typename T = uintptr_t> T get_ServerType() {
		return ((T (*)(BRDoor*))(Il2CppBase() + 0x251DF00))(this);
	}
	template <typename T = void> T OnTriggerEnter(uintptr_t other) {
		return ((T (*)(BRDoor*, uintptr_t))(Il2CppBase() + 0x251DF08))(this, other);
	}
	template <typename T = void> T OnTriggerExit(uintptr_t other) {
		return ((T (*)(BRDoor*, uintptr_t))(Il2CppBase() + 0x251E678))(this, other);
	}
	template <typename T = void> T OnPawnStay() {
		return ((T (*)(BRDoor*))(Il2CppBase() + 0x251A78C))(this);
	}
	template <typename T = void> T NotifyHUD() {
		return ((T (*)(BRDoor*))(Il2CppBase() + 0x251CEE8))(this);
	}
	template <typename T = void> T LoadDoorAsset(int32_t assetId) {
		return ((T (*)(BRDoor*, int32_t))(Il2CppBase() + 0x251A2CC))(this, assetId);
	}
	template <typename T = void> T OnAssetLoad(int32_t assetId, uintptr_t obj) {
		return ((T (*)(BRDoor*, int32_t, uintptr_t))(Il2CppBase() + 0x251E8F0))(this, assetId, obj);
	}
	template <typename T = bool> T IsLocalPawnInDoor() {
		return ((T (*)(BRDoor*))(Il2CppBase() + 0x251EF6C))(this);
	}
	template <typename T = void> T CloseInvisibleWall() {
		return ((T (*)(BRDoor*))(Il2CppBase() + 0x251CDA4))(this);
	}
	template <typename T = void> T CreateInvisibleWall() {
		return ((T (*)(BRDoor*))(Il2CppBase() + 0x251F1E8))(this);
	}
	template <typename T = void> T CheckSetInvisibleWall() {
		return ((T (*)(BRDoor*))(Il2CppBase() + 0x251CAA8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRDoor*, float))(Il2CppBase() + 0x251F6FC))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetHitImpactTarget() {
		return ((T (*)(BRDoor*))(Il2CppBase() + 0x251F704))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(BRDoor*))(Il2CppBase() + 0x251F70C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(BRDoor*))(Il2CppBase() + 0x251F714))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CanBeDamagedBy(uintptr_t P0) {
		return ((T (*)(BRDoor*, uintptr_t))(Il2CppBase() + 0x251F71C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_TakeDamage(uintptr_t P0) {
		return ((T (*)(BRDoor*, uintptr_t))(Il2CppBase() + 0x251F724))(this, P0);
	}

};

}
