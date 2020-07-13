#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRChristmasTreeMgr
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRChristmasTreeMgr"));
	}

	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_BRLevelChristmasTreeMap() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_BRChristmasTreeMap() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppDictionary<uint32_t, uint32_t>*> T& m_ActorIdToUID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_BRLevelChristmasTree() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_BRChristmasTree() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_BRGame() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_LightTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& hasLight() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& m_HasPlayFireWorkEffect() {
		return *(T*)((uintptr_t)this + 0x2D);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLevelObjectRegistered() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLevelObjectUnRegistered() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveChristmasTree() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnChristmasTree() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnChristmasTreeInternal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBRLevelChristmasTreeRegister() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBRLevelChristmasTreeUnRegister() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncChristmasTreeStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncChristmasTreeRelevant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryPlayFireWorkEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = void> T Init() {
		return ((T (*)(BRChristmasTreeMgr*))(Il2CppBase() + 0x25021A8))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(BRChristmasTreeMgr*, float))(Il2CppBase() + 0x25022A0))(this, deltaTime);
	}
	template <typename T = void> T OnLevelObjectRegistered(uintptr_t levelObject) {
		return ((T (*)(BRChristmasTreeMgr*, uintptr_t))(Il2CppBase() + 0x2502340))(this, levelObject);
	}
	template <typename T = void> T OnLevelObjectUnRegistered(uintptr_t levelObject) {
		return ((T (*)(BRChristmasTreeMgr*, uintptr_t))(Il2CppBase() + 0x250261C))(this, levelObject);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(BRChristmasTreeMgr*))(Il2CppBase() + 0x250289C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(BRChristmasTreeMgr*))(Il2CppBase() + 0x25029A4))(this);
	}
	template <typename T = void> T RemoveChristmasTree(uint32_t uid) {
		return ((T (*)(BRChristmasTreeMgr*, uint32_t))(Il2CppBase() + 0x2502AA4))(this, uid);
	}
	template <typename T = bool> T SpawnChristmasTree(uint32_t uID) {
		return ((T (*)(BRChristmasTreeMgr*, uint32_t))(Il2CppBase() + 0x2502D90))(this, uID);
	}
	template <typename T = bool> T SpawnChristmasTreeInternal(uint32_t actorId, uintptr_t levelChristmasTree) {
		return ((T (*)(BRChristmasTreeMgr*, uint32_t, uintptr_t))(Il2CppBase() + 0x25030C4))(this, actorId, levelChristmasTree);
	}
	template <typename T = void> T OnBRLevelChristmasTreeRegister(uintptr_t levelTree) {
		return ((T (*)(BRChristmasTreeMgr*, uintptr_t))(Il2CppBase() + 0x2502498))(this, levelTree);
	}
	template <typename T = void> T OnBRLevelChristmasTreeUnRegister(uintptr_t levelTree) {
		return ((T (*)(BRChristmasTreeMgr*, uintptr_t))(Il2CppBase() + 0x2502774))(this, levelTree);
	}
	template <typename T = void> T SyncChristmasTreeStatus(uintptr_t recData) {
		return ((T (*)(BRChristmasTreeMgr*, uintptr_t))(Il2CppBase() + 0x250357C))(this, recData);
	}
	template <typename T = bool> T SyncChristmasTreeRelevant(uint32_t actorId, bool isRelevant) {
		return ((T (*)(BRChristmasTreeMgr*, uint32_t, bool))(Il2CppBase() + 0x2503A48))(this, actorId, isRelevant);
	}
	template <typename T = void> T TryPlayFireWorkEffect() {
		return ((T (*)(BRChristmasTreeMgr*))(Il2CppBase() + 0x25036C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRChristmasTreeMgr*))(Il2CppBase() + 0x2503B9C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRChristmasTreeMgr*, float))(Il2CppBase() + 0x2503BA4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnLevelObjectRegistered(uintptr_t P0) {
		return ((T (*)(BRChristmasTreeMgr*, uintptr_t))(Il2CppBase() + 0x2503BAC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnLevelObjectUnRegistered(uintptr_t P0) {
		return ((T (*)(BRChristmasTreeMgr*, uintptr_t))(Il2CppBase() + 0x2503BB4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(BRChristmasTreeMgr*))(Il2CppBase() + 0x2503BBC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(BRChristmasTreeMgr*))(Il2CppBase() + 0x2503BC4))(this);
	}

};

}
