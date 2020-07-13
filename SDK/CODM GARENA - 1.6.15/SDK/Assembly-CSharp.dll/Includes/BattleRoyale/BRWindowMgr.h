#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRWindowMgr
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRWindowMgr"));
	}

	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_BRLevelWindowMap() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_BRWindowMap() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_BrokenWindowSet() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_PendingSpawnQueue() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& m_IsPendingSpawn() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_PendingRemoveQueue() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& m_IsPendingRemove() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& m_FenceUpdateSpeed() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_ShowWindowDistanceSquare() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_LastRefreshWindowTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppVector3> T& m_LocalPlayerPosition() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppVector3> T& m_WindowPosition() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_Root() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = void*> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWindowRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyWindowRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLevelObjectRegistered() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLevelObjectUnRegistered() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshWindows() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AsyncSpawnWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnWindowInternal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AsyncRemoveWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncBrokenWindows() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncBreakWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveAllWindows() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAIBreakWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckBreakWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}

	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T get_BRWindowMap() {
		return ((T (*)(BRWindowMgr*))(Il2CppBase() + 0x2664ABC))(this);
	}
	template <typename T = uintptr_t> T GetWindowRoot() {
		return ((T (*)(BRWindowMgr*))(Il2CppBase() + 0x2664AC4))(this);
	}
	template <typename T = void> T DestroyWindowRoot() {
		return ((T (*)(BRWindowMgr*))(Il2CppBase() + 0x2664C24))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(BRWindowMgr*))(Il2CppBase() + 0x2664D80))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BRWindowMgr*))(Il2CppBase() + 0x2664F0C))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(BRWindowMgr*))(Il2CppBase() + 0x2665158))(this);
	}
	template <typename T = void> T OnLevelObjectRegistered(uintptr_t levelObject) {
		return ((T (*)(BRWindowMgr*, uintptr_t))(Il2CppBase() + 0x26652B0))(this, levelObject);
	}
	template <typename T = void> T OnLevelObjectUnRegistered(uintptr_t levelObject) {
		return ((T (*)(BRWindowMgr*, uintptr_t))(Il2CppBase() + 0x266547C))(this, levelObject);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(BRWindowMgr*, float))(Il2CppBase() + 0x2665644))(this, deltaTime);
	}
	template <typename T = void> T RefreshWindows() {
		return ((T (*)(BRWindowMgr*))(Il2CppBase() + 0x2665A38))(this);
	}
	template <typename T = void> T AsyncSpawnWindow(uint32_t uid) {
		return ((T (*)(BRWindowMgr*, uint32_t))(Il2CppBase() + 0x266624C))(this, uid);
	}
	template <typename T = bool> T SpawnWindow(uint32_t uid) {
		return ((T (*)(BRWindowMgr*, uint32_t))(Il2CppBase() + 0x2665F18))(this, uid);
	}
	template <typename T = void> T SpawnWindowInternal(uintptr_t levelWindow) {
		return ((T (*)(BRWindowMgr*, uintptr_t))(Il2CppBase() + 0x2666454))(this, levelWindow);
	}
	template <typename T = void> T AsyncRemoveWindow(uint32_t uid) {
		return ((T (*)(BRWindowMgr*, uint32_t))(Il2CppBase() + 0x266636C))(this, uid);
	}
	template <typename T = void> T RemoveWindow(uint32_t uid) {
		return ((T (*)(BRWindowMgr*, uint32_t))(Il2CppBase() + 0x266606C))(this, uid);
	}
	template <typename T = void> T SyncBrokenWindows(Il2CppArray<uintptr_t>* brokenWindowsUID) {
		return ((T (*)(BRWindowMgr*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x26667D8))(this, brokenWindowsUID);
	}
	template <typename T = void> T SyncBreakWindow(uint32_t uid, uint32_t InstigatorID, Il2CppVector3 position, Il2CppVector3 normal) {
		return ((T (*)(BRWindowMgr*, uint32_t, uint32_t, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x2663994))(this, uid, InstigatorID, position, normal);
	}
	template <typename T = void> T RemoveAllWindows() {
		return ((T (*)(BRWindowMgr*))(Il2CppBase() + 0x2664E30))(this);
	}
	template <typename T = void> static T CheckAIBreakWindow(uintptr_t pawn, uintptr_t damageInfo) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2666928))(0, pawn, damageInfo);
	}
	template <typename T = void> static T CheckBreakWindow(uint32_t InstigatorPlayerID, Il2CppVector3 startPosition, Il2CppVector3 targetPosition) {
		return ((T (*)(void *, uint32_t, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x2666AA0))(0, InstigatorPlayerID, startPosition, targetPosition);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(BRWindowMgr*))(Il2CppBase() + 0x2666DC4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRWindowMgr*))(Il2CppBase() + 0x2666DCC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(BRWindowMgr*))(Il2CppBase() + 0x2666DD4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnLevelObjectRegistered(uintptr_t P0) {
		return ((T (*)(BRWindowMgr*, uintptr_t))(Il2CppBase() + 0x2666DDC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnLevelObjectUnRegistered(uintptr_t P0) {
		return ((T (*)(BRWindowMgr*, uintptr_t))(Il2CppBase() + 0x2666DE4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRWindowMgr*, float))(Il2CppBase() + 0x2666DEC))(this, P0);
	}

};

}
