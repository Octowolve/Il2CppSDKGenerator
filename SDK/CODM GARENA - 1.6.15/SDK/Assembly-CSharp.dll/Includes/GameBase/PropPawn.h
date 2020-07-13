#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PropPawn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PropPawn"));
	}

	template <typename T = Il2CppVector3> T& m_FinalNormal() {
		return *(T*)((uintptr_t)this + 0x9AC);
	}
	template <typename T = Il2CppVector3> T& m_SpawnNormal() {
		return *(T*)((uintptr_t)this + 0x9B8);
	}
	template <typename T = float> T& m_LifeTime() {
		return *(T*)((uintptr_t)this + 0x9C4);
	}
	template <typename T = float> T& m_LeftLifeTime() {
		return *(T*)((uintptr_t)this + 0x9C8);
	}
	template <typename T = bool> T& m_FakeDestory() {
		return *(T*)((uintptr_t)this + 0x9CC);
	}
	template <typename T = Il2CppString*> T& RootSocketName() {
		return *(T*)((uintptr_t)this + 0x9D0);
	}
	template <typename T = uintptr_t> T& HitCollider() {
		return *(T*)((uintptr_t)this + 0x9D4);
	}
	template <typename T = uint32_t> T& m_OwnerPlayerID() {
		return *(T*)((uintptr_t)this + 0x9D8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CacheColliders() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanBeDamagedBy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Active() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deactive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFinalNormal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFakeDestory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadPropModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTakeDamageComponentType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateLogicalComponents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayHitBloodEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateInventoryManager() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitEventProcessor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Die() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillExplode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPawnEventProcessor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}

	template <typename T = uintptr_t> T get_LogicType() {
		return ((T (*)(PropPawn*))(Il2CppBase() + 0x2DBED24))(this);
	}
	template <typename T = uint32_t> T get_PlayerID() {
		return ((T (*)(PropPawn*))(Il2CppBase() + 0x2DBED2C))(this);
	}
	template <typename T = uint32_t> T get_OwnerPlayerID() {
		return ((T (*)(PropPawn*))(Il2CppBase() + 0x2DBED3C))(this);
	}
	template <typename T = bool> T get_ShouldCheckDetailCollider() {
		return ((T (*)(PropPawn*))(Il2CppBase() + 0x2DBED44))(this);
	}
	template <typename T = uintptr_t> T get_ServerType() {
		return ((T (*)(PropPawn*))(Il2CppBase() + 0x2DBED4C))(this);
	}
	template <typename T = Il2CppVector3> T get_FinalNormal() {
		return ((T (*)(PropPawn*))(Il2CppBase() + 0x2DBED54))(this);
	}
	template <typename T = void> T set_FinalNormal(Il2CppVector3 value) {
		return ((T (*)(PropPawn*, Il2CppVector3))(Il2CppBase() + 0x2DBED70))(this, value);
	}
	template <typename T = Il2CppVector3> T get_SpawnNormal() {
		return ((T (*)(PropPawn*))(Il2CppBase() + 0x2DBED80))(this);
	}
	template <typename T = void> T set_SpawnNormal(Il2CppVector3 value) {
		return ((T (*)(PropPawn*, Il2CppVector3))(Il2CppBase() + 0x2DBED9C))(this, value);
	}
	template <typename T = float> T get_LifeTime() {
		return ((T (*)(PropPawn*))(Il2CppBase() + 0x2DBEDAC))(this);
	}
	template <typename T = void> T set_LifeTime(float value) {
		return ((T (*)(PropPawn*, float))(Il2CppBase() + 0x2DBEDB4))(this, value);
	}
	template <typename T = float> T get_LeftLifeTime() {
		return ((T (*)(PropPawn*))(Il2CppBase() + 0x2DBEDBC))(this);
	}
	template <typename T = void> T set_LeftLifeTime(float value) {
		return ((T (*)(PropPawn*, float))(Il2CppBase() + 0x2DBEDC4))(this, value);
	}
	template <typename T = bool> T get_FakeDestory() {
		return ((T (*)(PropPawn*))(Il2CppBase() + 0x2DBEDCC))(this);
	}
	template <typename T = void> T set_FakeDestory(bool value) {
		return ((T (*)(PropPawn*, bool))(Il2CppBase() + 0x2DBEDD4))(this, value);
	}
	template <typename T = void> T InitPawn(uintptr_t info) {
		return ((T (*)(PropPawn*, uintptr_t))(Il2CppBase() + 0x2DBEDDC))(this, info);
	}
	template <typename T = void> T CacheColliders(uintptr_t go, bool clearCache) {
		return ((T (*)(PropPawn*, uintptr_t, bool))(Il2CppBase() + 0x2DBEFF4))(this, go, clearCache);
	}
	template <typename T = void> T InitPlayerInfo(uintptr_t info) {
		return ((T (*)(PropPawn*, uintptr_t))(Il2CppBase() + 0x2DBF400))(this, info);
	}
	template <typename T = bool> T CanBeDamagedBy(uintptr_t pawn) {
		return ((T (*)(PropPawn*, uintptr_t))(Il2CppBase() + 0x2DBF4B4))(this, pawn);
	}
	template <typename T = void> T Active() {
		return ((T (*)(PropPawn*))(Il2CppBase() + 0x2DBF55C))(this);
	}
	template <typename T = void> T Deactive() {
		return ((T (*)(PropPawn*))(Il2CppBase() + 0x2DBF718))(this);
	}
	template <typename T = Il2CppVector3> T GetFinalNormal() {
		return ((T (*)(PropPawn*))(Il2CppBase() + 0x2DBF8D0))(this);
	}
	template <typename T = void> T OnFakeDestory() {
		return ((T (*)(PropPawn*))(Il2CppBase() + 0x2DBF980))(this);
	}
	template <typename T = void> T LoadPropModel() {
		return ((T (*)(PropPawn*))(Il2CppBase() + 0x2DBEF5C))(this);
	}
	template <typename T = void> T DestroyModel() {
		return ((T (*)(PropPawn*))(Il2CppBase() + 0x2DBFA38))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(PropPawn*))(Il2CppBase() + 0x2DBFAD0))(this);
	}
	template <typename T = uintptr_t> T GetTakeDamageComponentType() {
		return ((T (*)(PropPawn*))(Il2CppBase() + 0x2DBFB94))(this);
	}
	template <typename T = void> T CreateLogicalComponents() {
		return ((T (*)(PropPawn*))(Il2CppBase() + 0x2DBFC90))(this);
	}
	template <typename T = void> T PlayHitBloodEffect(Il2CppVector3 pos, uintptr_t info) {
		return ((T (*)(PropPawn*, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x2DBFDB0))(this, pos, info);
	}
	template <typename T = void> T CreateInventoryManager() {
		return ((T (*)(PropPawn*))(Il2CppBase() + 0x2DBFE70))(this);
	}
	template <typename T = void> T InitEventProcessor() {
		return ((T (*)(PropPawn*))(Il2CppBase() + 0x2DBFF08))(this);
	}
	template <typename T = void> T Die(bool isHeadShot, uintptr_t damageType) {
		return ((T (*)(PropPawn*, bool, uintptr_t))(Il2CppBase() + 0x2DBFFA0))(this, isHeadShot, damageType);
	}
	template <typename T = void> T DoDestroy() {
		return ((T (*)(PropPawn*))(Il2CppBase() + 0x2DC0064))(this);
	}
	template <typename T = void> T DestroyPawn() {
		return ((T (*)(PropPawn*))(Il2CppBase() + 0x2DC0114))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(PropPawn*))(Il2CppBase() + 0x2DC01AC))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(PropPawn*, float))(Il2CppBase() + 0x2DC0244))(this, deltaTime);
	}
	template <typename T = void> T WillExplode() {
		return ((T (*)(PropPawn*))(Il2CppBase() + 0x2DC02F8))(this);
	}
	template <typename T = uintptr_t> T GetPawnEventProcessor() {
		return ((T (*)(PropPawn*))(Il2CppBase() + 0x2DC0390))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(PropPawn*))(Il2CppBase() + 0x2DC0484))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitPawn(uintptr_t P0) {
		return ((T (*)(PropPawn*, uintptr_t))(Il2CppBase() + 0x2DC051C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_CacheColliders(uintptr_t P0, bool P1) {
		return ((T (*)(PropPawn*, uintptr_t, bool))(Il2CppBase() + 0x2DC0524))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_InitPlayerInfo(uintptr_t P0) {
		return ((T (*)(PropPawn*, uintptr_t))(Il2CppBase() + 0x2DC052C))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_CanBeDamagedBy(uintptr_t P0) {
		return ((T (*)(PropPawn*, uintptr_t))(Il2CppBase() + 0x2DC0534))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(PropPawn*))(Il2CppBase() + 0x2DC053C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetTakeDamageComponentType() {
		return ((T (*)(PropPawn*))(Il2CppBase() + 0x2DC0544))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CreateLogicalComponents() {
		return ((T (*)(PropPawn*))(Il2CppBase() + 0x2DC054C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayHitBloodEffect(Il2CppVector3 P0, uintptr_t P1) {
		return ((T (*)(PropPawn*, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x2DC0554))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_CreateInventoryManager() {
		return ((T (*)(PropPawn*))(Il2CppBase() + 0x2DC0578))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitEventProcessor() {
		return ((T (*)(PropPawn*))(Il2CppBase() + 0x2DC0580))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Die(bool P0, uintptr_t P1) {
		return ((T (*)(PropPawn*, bool, uintptr_t))(Il2CppBase() + 0x2DC0588))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_DestroyPawn() {
		return ((T (*)(PropPawn*))(Il2CppBase() + 0x2DC0590))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(PropPawn*))(Il2CppBase() + 0x2DC0598))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(PropPawn*, float))(Il2CppBase() + 0x2DC05A0))(this, P0);
	}

};

}
