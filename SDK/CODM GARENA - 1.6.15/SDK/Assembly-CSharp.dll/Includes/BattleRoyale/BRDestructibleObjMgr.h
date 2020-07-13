#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRDestructibleObjMgr
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRDestructibleObjMgr"));
	}

	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_LevelObjMap() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_CreatObjMap() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_InfoMap() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<uint32_t, uint32_t>*> T& m_ActorIdToUID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppDictionary<uint32_t, bool>*> T& m_ActorIdToRelevant() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_BRGame() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& m_HasPreload() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLevelObjectRegistered() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLevelObjectUnRegistered() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreloadDesObjParentAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnObj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnObjInternal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveObj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrokenDisappear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TmpSaveObjRelevant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncObjRelevant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncObjStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveAllObjs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = int32_t> static T get_DesObjParentAssetID() {
		return ((T (*)(void *))(Il2CppBase() + 0x2517E14))(0);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BRDestructibleObjMgr*))(Il2CppBase() + 0x2517E20))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(BRDestructibleObjMgr*))(Il2CppBase() + 0x2517F24))(this);
	}
	template <typename T = void> T OnLevelObjectRegistered(uintptr_t levelObject) {
		return ((T (*)(BRDestructibleObjMgr*, uintptr_t))(Il2CppBase() + 0x25183B4))(this, levelObject);
	}
	template <typename T = void> T OnLevelObjectUnRegistered(uintptr_t levelObject) {
		return ((T (*)(BRDestructibleObjMgr*, uintptr_t))(Il2CppBase() + 0x2518890))(this, levelObject);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(BRDestructibleObjMgr*, float))(Il2CppBase() + 0x2518C90))(this, deltaTime);
	}
	template <typename T = void> T PreloadDesObjParentAsset() {
		return ((T (*)(BRDestructibleObjMgr*))(Il2CppBase() + 0x2518594))(this);
	}
	template <typename T = bool> T SpawnObj(uint32_t uid) {
		return ((T (*)(BRDestructibleObjMgr*, uint32_t))(Il2CppBase() + 0x25186C4))(this, uid);
	}
	template <typename T = bool> T SpawnObjInternal(uint32_t actorId, float health, uintptr_t levelObj) {
		return ((T (*)(BRDestructibleObjMgr*, uint32_t, float, uintptr_t))(Il2CppBase() + 0x2518D30))(this, actorId, health, levelObj);
	}
	template <typename T = void> T RemoveObj(uint32_t uid) {
		return ((T (*)(BRDestructibleObjMgr*, uint32_t))(Il2CppBase() + 0x2518A60))(this, uid);
	}
	template <typename T = void> T OnBrokenDisappear(uint32_t uid) {
		return ((T (*)(BRDestructibleObjMgr*, uint32_t))(Il2CppBase() + 0x24B4408))(this, uid);
	}
	template <typename T = void> T TmpSaveObjRelevant(uint32_t actorId, bool isRelevant) {
		return ((T (*)(BRDestructibleObjMgr*, uint32_t, bool))(Il2CppBase() + 0x25191C0))(this, actorId, isRelevant);
	}
	template <typename T = bool> T SyncObjRelevant(uint32_t actorId, bool isRelevant) {
		return ((T (*)(BRDestructibleObjMgr*, uint32_t, bool))(Il2CppBase() + 0x251933C))(this, actorId, isRelevant);
	}
	template <typename T = void> T SyncObjStatus(uintptr_t recData) {
		return ((T (*)(BRDestructibleObjMgr*, uintptr_t))(Il2CppBase() + 0x251959C))(this, recData);
	}
	template <typename T = void> T RemoveAllObjs() {
		return ((T (*)(BRDestructibleObjMgr*))(Il2CppBase() + 0x2518060))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(BRDestructibleObjMgr*))(Il2CppBase() + 0x2519954))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRDestructibleObjMgr*))(Il2CppBase() + 0x2519A88))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(BRDestructibleObjMgr*))(Il2CppBase() + 0x2519A90))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnLevelObjectRegistered(uintptr_t P0) {
		return ((T (*)(BRDestructibleObjMgr*, uintptr_t))(Il2CppBase() + 0x2519A98))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnLevelObjectUnRegistered(uintptr_t P0) {
		return ((T (*)(BRDestructibleObjMgr*, uintptr_t))(Il2CppBase() + 0x2519AA0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRDestructibleObjMgr*, float))(Il2CppBase() + 0x2519AA8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(BRDestructibleObjMgr*))(Il2CppBase() + 0x2519AB0))(this);
	}

};

}
