#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRFenceMgr
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRFenceMgr"));
	}

	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_BRLevelFenceMap() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_BRFenceMap() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_BRFenceInfoMap() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<uint32_t, uint32_t>*> T& m_ActorIdToUID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_PendingFenceQueue() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& m_HasPendingFence() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_BreakEffectCDTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_LastBreakEffectTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& m_IsPendingUpdateShadow() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& m_FenceUpdateSpeed() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_Root() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFenceRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyFenceRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLevelObjectRegistered() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLevelObjectUnRegistered() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AsyncSpawnFence() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnFence() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnFenceInternal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AsyncRemoveFence() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveFence() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInEffectColdDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayFenceBrokenEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFenceBroken() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncFenceRelevant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncFenceStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveAllFences() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = void> T Shutdown() {
		return ((T (*)(BRFenceMgr*))(Il2CppBase() + 0x18F6FB8))(this);
	}
	template <typename T = uintptr_t> T GetFenceRoot() {
		return ((T (*)(BRFenceMgr*))(Il2CppBase() + 0x18F71C8))(this);
	}
	template <typename T = void> T DestroyFenceRoot() {
		return ((T (*)(BRFenceMgr*))(Il2CppBase() + 0x18F7328))(this);
	}
	template <typename T = void> T OnLevelObjectRegistered(uintptr_t levelObject) {
		return ((T (*)(BRFenceMgr*, uintptr_t))(Il2CppBase() + 0x18F7484))(this, levelObject);
	}
	template <typename T = void> T OnLevelObjectUnRegistered(uintptr_t levelObject) {
		return ((T (*)(BRFenceMgr*, uintptr_t))(Il2CppBase() + 0x18F7774))(this, levelObject);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(BRFenceMgr*, float))(Il2CppBase() + 0x18F7A54))(this, deltaTime);
	}
	template <typename T = bool> T AsyncSpawnFence(uint32_t uid) {
		return ((T (*)(BRFenceMgr*, uint32_t))(Il2CppBase() + 0x18F765C))(this, uid);
	}
	template <typename T = bool> T SpawnFence(uint32_t uid) {
		return ((T (*)(BRFenceMgr*, uint32_t))(Il2CppBase() + 0x18F7D28))(this, uid);
	}
	template <typename T = bool> T SpawnFenceInternal(uint32_t actorId, float health, uintptr_t levelFence) {
		return ((T (*)(BRFenceMgr*, uint32_t, float, uintptr_t))(Il2CppBase() + 0x18F8264))(this, actorId, health, levelFence);
	}
	template <typename T = bool> T AsyncRemoveFence(uint32_t uid) {
		return ((T (*)(BRFenceMgr*, uint32_t))(Il2CppBase() + 0x18F7944))(this, uid);
	}
	template <typename T = void> T RemoveFence(uint32_t uid) {
		return ((T (*)(BRFenceMgr*, uint32_t))(Il2CppBase() + 0x18F7ED4))(this, uid);
	}
	template <typename T = bool> T IsInEffectColdDown() {
		return ((T (*)(BRFenceMgr*))(Il2CppBase() + 0x18F7C58))(this);
	}
	template <typename T = void> T PlayFenceBrokenEffect(uintptr_t fence) {
		return ((T (*)(BRFenceMgr*, uintptr_t))(Il2CppBase() + 0x18F6A64))(this, fence);
	}
	template <typename T = void> T OnFenceBroken(uint32_t uid) {
		return ((T (*)(BRFenceMgr*, uint32_t))(Il2CppBase() + 0x18F85C8))(this, uid);
	}
	template <typename T = void> T SyncFenceRelevant(uint32_t actorId, bool isRelevant) {
		return ((T (*)(BRFenceMgr*, uint32_t, bool))(Il2CppBase() + 0x18F86EC))(this, actorId, isRelevant);
	}
	template <typename T = void> T SyncFenceStatus(uintptr_t recData) {
		return ((T (*)(BRFenceMgr*, uintptr_t))(Il2CppBase() + 0x18F8908))(this, recData);
	}
	template <typename T = void> T RemoveAllFences() {
		return ((T (*)(BRFenceMgr*))(Il2CppBase() + 0x18F70EC))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(BRFenceMgr*))(Il2CppBase() + 0x18F8C1C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(BRFenceMgr*))(Il2CppBase() + 0x18F8D60))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnLevelObjectRegistered(uintptr_t P0) {
		return ((T (*)(BRFenceMgr*, uintptr_t))(Il2CppBase() + 0x18F8D68))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnLevelObjectUnRegistered(uintptr_t P0) {
		return ((T (*)(BRFenceMgr*, uintptr_t))(Il2CppBase() + 0x18F8D70))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRFenceMgr*, float))(Il2CppBase() + 0x18F8D78))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(BRFenceMgr*))(Il2CppBase() + 0x18F8D80))(this);
	}

};

}
