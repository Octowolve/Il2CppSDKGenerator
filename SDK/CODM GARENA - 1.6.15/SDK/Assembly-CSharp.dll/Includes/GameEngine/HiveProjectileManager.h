#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class HiveProjectileManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "HiveProjectileManager"));
	}

	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_HiveProjectileMap() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_fHiveProjectileMgrCheckIntervalTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_fHiveProjectileMgrCheckCurrTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsContainsHiveProjectile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHiveProjectile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateHiveProjectile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyHiveProjectile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HiveProjectileMgrCheck() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveHiveProjectile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T get_HiveProjectileMap() {
		return ((T (*)(HiveProjectileManager*))(Il2CppBase() + 0x36FEFD0))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(HiveProjectileManager*))(Il2CppBase() + 0x36FEFD8))(this);
	}
	template <typename T = void> T OnRoundEnd() {
		return ((T (*)(HiveProjectileManager*))(Il2CppBase() + 0x36FF144))(this);
	}
	template <typename T = bool> T IsContainsHiveProjectile(uint32_t uPlayerID) {
		return ((T (*)(HiveProjectileManager*, uint32_t))(Il2CppBase() + 0x36FF1E8))(this, uPlayerID);
	}
	template <typename T = uintptr_t> T GetHiveProjectile(uint32_t uPlayerID) {
		return ((T (*)(HiveProjectileManager*, uint32_t))(Il2CppBase() + 0x36FF2C4))(this, uPlayerID);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(HiveProjectileManager*))(Il2CppBase() + 0x36FF07C))(this);
	}
	template <typename T = void> T CreateHiveProjectile(uint32_t uPlayerID, uintptr_t parentEffect, float fDesiredReachTime) {
		return ((T (*)(HiveProjectileManager*, uint32_t, uintptr_t, float))(Il2CppBase() + 0x36FF3C0))(this, uPlayerID, parentEffect, fDesiredReachTime);
	}
	template <typename T = void> T DestroyHiveProjectile(uint32_t uPlayerID) {
		return ((T (*)(HiveProjectileManager*, uint32_t))(Il2CppBase() + 0x36FF5E4))(this, uPlayerID);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(HiveProjectileManager*, float))(Il2CppBase() + 0x36FF714))(this, deltaTime);
	}
	template <typename T = void> T HiveProjectileMgrCheck(float deltaTime) {
		return ((T (*)(HiveProjectileManager*, float))(Il2CppBase() + 0x36FF9D8))(this, deltaTime);
	}
	template <typename T = void> T RemoveHiveProjectile() {
		return ((T (*)(HiveProjectileManager*))(Il2CppBase() + 0x36FFB1C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(HiveProjectileManager*))(Il2CppBase() + 0x36FFD8C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundEnd() {
		return ((T (*)(HiveProjectileManager*))(Il2CppBase() + 0x36FFD94))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(HiveProjectileManager*, float))(Il2CppBase() + 0x36FFD9C))(this, P0);
	}

};

}
