#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class DestructibleSceneObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "DestructibleSceneObject"));
	}

	template <typename T = uintptr_t> T& m_AssetRoot() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& m_Type() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uint32_t> T& m_UID() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = bool> T& m_IsInDeadReplay() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitEventProcessor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHitGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpdateHealth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncHPChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T get_AssetRoot() {
		return ((T (*)(DestructibleSceneObject*))(Il2CppBase() + 0x40E1760))(this);
	}
	template <typename T = uintptr_t> T get_Type() {
		return ((T (*)(DestructibleSceneObject*))(Il2CppBase() + 0x40E04D0))(this);
	}
	template <typename T = uint32_t> T get_UID() {
		return ((T (*)(DestructibleSceneObject*))(Il2CppBase() + 0x40DF518))(this);
	}
	template <typename T = bool> T get_IsInDeadReplay() {
		return ((T (*)(DestructibleSceneObject*))(Il2CppBase() + 0x40E1768))(this);
	}
	template <typename T = void> T set_IsInDeadReplay(bool value) {
		return ((T (*)(DestructibleSceneObject*, bool))(Il2CppBase() + 0x40E04D8))(this, value);
	}
	template <typename T = void> T set_Health(float value) {
		return ((T (*)(DestructibleSceneObject*, float))(Il2CppBase() + 0x40E1770))(this, value);
	}
	template <typename T = bool> T get_CanLockedByRPG() {
		return ((T (*)(DestructibleSceneObject*))(Il2CppBase() + 0x40E17E8))(this);
	}
	template <typename T = void> T InitEventProcessor() {
		return ((T (*)(DestructibleSceneObject*))(Il2CppBase() + 0x40E17F0))(this);
	}
	template <typename T = void> T Init(uintptr_t type, uint32_t actorid, uint32_t uid, float maxHealth, float currentHealth) {
		return ((T (*)(DestructibleSceneObject*, uintptr_t, uint32_t, uint32_t, float, float))(Il2CppBase() + 0x40E1968))(this, type, actorid, uid, maxHealth, currentHealth);
	}
	template <typename T = bool> T get_ShouldCheckDetailCollider() {
		return ((T (*)(DestructibleSceneObject*))(Il2CppBase() + 0x40E1D44))(this);
	}
	template <typename T = uintptr_t> T GetHitGroup(uintptr_t hitObject) {
		return ((T (*)(DestructibleSceneObject*, uintptr_t))(Il2CppBase() + 0x40E1D4C))(this, hitObject);
	}
	template <typename T = uintptr_t> T get_ServerType() {
		return ((T (*)(DestructibleSceneObject*))(Il2CppBase() + 0x40E1DF4))(this);
	}
	template <typename T = void> T SyncStatus(float hp, uint32_t status_1, uint32_t status_2) {
		return ((T (*)(DestructibleSceneObject*, float, uint32_t, uint32_t))(Il2CppBase() + 0x40E1DFC))(this, hp, status_1, status_2);
	}
	template <typename T = void> T OnUpdateHealth(float newVal, float oldVal) {
		return ((T (*)(DestructibleSceneObject*, float, float))(Il2CppBase() + 0x40E1EB8))(this, newVal, oldVal);
	}
	template <typename T = void> T OnSyncHPChange(int32_t newHP, int32_t maxHP) {
		return ((T (*)(DestructibleSceneObject*, int32_t, int32_t))(Il2CppBase() + 0x40E1F6C))(this, newHP, maxHP);
	}
	template <typename T = void> T xLuaBaseProxy_InitEventProcessor() {
		return ((T (*)(DestructibleSceneObject*))(Il2CppBase() + 0x40E2020))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetHitGroup(uintptr_t P0) {
		return ((T (*)(DestructibleSceneObject*, uintptr_t))(Il2CppBase() + 0x40E2028))(this, P0);
	}

};

}
