#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class DestructibleManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "DestructibleManager"));
	}

	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_ConfigSceneObjectMap() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_SceneObjectMap() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_DeadReplaySceneObjectMap() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_MatchGame() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> static T& EnableDestructibleSceneObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStartMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLevelObjectRegistered() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLevelObjectUnRegistered() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConfigObjectRegister() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConfigObjectUnRegister() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnDestructibleSceneObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SpawnDestructibleSceneObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncDestructibleSceneObjectStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDestructibleSceneObjectByUID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateDeadReplayDestructibleSceneObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveDeadReplayDestructibleSceneObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateDeadReplayCarBomb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetConfigDestructibleSceneObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveDestructibleSceneObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnAllDestructibleSceneObjects() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveAllDestructibleSceneObjects() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowDebugInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideDebugInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideAllCarBomb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCarPVSBrief() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEnableCarPVS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}

	template <typename T = void> T Init() {
		return ((T (*)(DestructibleManager*))(Il2CppBase() + 0x40DE3A8))(this);
	}
	template <typename T = void> T OnStartMatch() {
		return ((T (*)(DestructibleManager*))(Il2CppBase() + 0x40DE4D0))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(DestructibleManager*))(Il2CppBase() + 0x40DE598))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(DestructibleManager*))(Il2CppBase() + 0x40DE6D0))(this);
	}
	template <typename T = void> T OnLevelObjectRegistered(uintptr_t levelObject) {
		return ((T (*)(DestructibleManager*, uintptr_t))(Il2CppBase() + 0x40DE97C))(this, levelObject);
	}
	template <typename T = void> T OnLevelObjectUnRegistered(uintptr_t levelObject) {
		return ((T (*)(DestructibleManager*, uintptr_t))(Il2CppBase() + 0x40DEC9C))(this, levelObject);
	}
	template <typename T = void> T OnConfigObjectRegister(uintptr_t ConfigSceneObject) {
		return ((T (*)(DestructibleManager*, uintptr_t))(Il2CppBase() + 0x40DEB04))(this, ConfigSceneObject);
	}
	template <typename T = void> T OnConfigObjectUnRegister(uintptr_t ConfigSceneObject) {
		return ((T (*)(DestructibleManager*, uintptr_t))(Il2CppBase() + 0x40DEE24))(this, ConfigSceneObject);
	}
	template <typename T = void> T SpawnDestructibleSceneObject(uint32_t ActorId, uintptr_t ConfigSceneObject) {
		return ((T (*)(DestructibleManager*, uint32_t, uintptr_t))(Il2CppBase() + 0x40DF284))(this, ActorId, ConfigSceneObject);
	}
	template <typename T = void> T SpawnDestructibleSceneObject_1(uintptr_t ConfigSceneObject, uintptr_t Status) {
		return ((T (*)(DestructibleManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x40DF520))(this, ConfigSceneObject, Status);
	}
	template <typename T = void> T SyncDestructibleSceneObjectStatus(uintptr_t recData) {
		return ((T (*)(DestructibleManager*, uintptr_t))(Il2CppBase() + 0x40DF818))(this, recData);
	}
	template <typename T = uintptr_t> T GetDestructibleSceneObjectByUID(uint32_t uid) {
		return ((T (*)(DestructibleManager*, uint32_t))(Il2CppBase() + 0x40DFB58))(this, uid);
	}
	template <typename T = void> T CreateDeadReplayDestructibleSceneObject(uintptr_t destructibleSceneObjectInfo) {
		return ((T (*)(DestructibleManager*, uintptr_t))(Il2CppBase() + 0x40DFC68))(this, destructibleSceneObjectInfo);
	}
	template <typename T = void> T RemoveDeadReplayDestructibleSceneObject(uint32_t uid) {
		return ((T (*)(DestructibleManager*, uint32_t))(Il2CppBase() + 0x40E0174))(this, uid);
	}
	template <typename T = void> T CreateDeadReplayCarBomb(uint32_t actorId, uint32_t uid, float hp, uint32_t status1, uint32_t status2) {
		return ((T (*)(DestructibleManager*, uint32_t, uint32_t, float, uint32_t, uint32_t))(Il2CppBase() + 0x40DFDF0))(this, actorId, uid, hp, status1, status2);
	}
	template <typename T = uintptr_t> T GetConfigDestructibleSceneObject(uint32_t uid) {
		return ((T (*)(DestructibleManager*, uint32_t))(Il2CppBase() + 0x40E04E0))(this, uid);
	}
	template <typename T = void> T RemoveDestructibleSceneObject(uint32_t uid) {
		return ((T (*)(DestructibleManager*, uint32_t))(Il2CppBase() + 0x40DEF7C))(this, uid);
	}
	template <typename T = void> T SpawnAllDestructibleSceneObjects() {
		return ((T (*)(DestructibleManager*))(Il2CppBase() + 0x40E0614))(this);
	}
	template <typename T = void> T RemoveAllDestructibleSceneObjects() {
		return ((T (*)(DestructibleManager*))(Il2CppBase() + 0x40E08A8))(this);
	}
	template <typename T = void> T ShowDebugInfo() {
		return ((T (*)(DestructibleManager*))(Il2CppBase() + 0x40E0ADC))(this);
	}
	template <typename T = void> T HideDebugInfo() {
		return ((T (*)(DestructibleManager*))(Il2CppBase() + 0x40E0DF8))(this);
	}
	template <typename T = void> T HideAllCarBomb() {
		return ((T (*)(DestructibleManager*))(Il2CppBase() + 0x40E1114))(this);
	}
	template <typename T = void> T GetCarPVSBrief(uintptr_t* visibleCount, uintptr_t* totalCount) {
		return ((T (*)(DestructibleManager*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x40E13F4))(this, visibleCount, totalCount);
	}
	template <typename T = void> T SetEnableCarPVS(bool enable) {
		return ((T (*)(DestructibleManager*, bool))(Il2CppBase() + 0x40E14EC))(this, enable);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(DestructibleManager*))(Il2CppBase() + 0x40E168C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnStartMatch() {
		return ((T (*)(DestructibleManager*))(Il2CppBase() + 0x40E1694))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(DestructibleManager*))(Il2CppBase() + 0x40E169C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(DestructibleManager*))(Il2CppBase() + 0x40E16A4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnLevelObjectRegistered(uintptr_t P0) {
		return ((T (*)(DestructibleManager*, uintptr_t))(Il2CppBase() + 0x40E16AC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnLevelObjectUnRegistered(uintptr_t P0) {
		return ((T (*)(DestructibleManager*, uintptr_t))(Il2CppBase() + 0x40E16B4))(this, P0);
	}

};

}
