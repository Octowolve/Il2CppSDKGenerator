#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PoolSystemService
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PoolSystemService"));
	}

	template <typename T = uintptr_t> T& GeneralPool() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ObjectPools() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& m_SpawnPools() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateSpawnPool() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroySpawnPool() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveSpawnPool() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLeaveGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnterGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnloadUnusedInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrintStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = uintptr_t> T get_GeneralPool() {
		return ((T (*)(PoolSystemService*))(Il2CppBase() + 0x16469A4))(this);
	}
	template <typename T = void> T set_GeneralPool(uintptr_t value) {
		return ((T (*)(PoolSystemService*, uintptr_t))(Il2CppBase() + 0x170A6B8))(this, value);
	}
	template <typename T = uintptr_t> T CreateSpawnPool(Il2CppString* poolName, bool dontDestroyOnLoad) {
		return ((T (*)(PoolSystemService*, Il2CppString*, bool))(Il2CppBase() + 0x170A6C0))(this, poolName, dontDestroyOnLoad);
	}
	template <typename T = void> T DestroySpawnPool(Il2CppString* poolName) {
		return ((T (*)(PoolSystemService*, Il2CppString*))(Il2CppBase() + 0x170AA0C))(this, poolName);
	}
	template <typename T = void> T RemoveSpawnPool(Il2CppString* poolName) {
		return ((T (*)(PoolSystemService*, Il2CppString*))(Il2CppBase() + 0x170AC0C))(this, poolName);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PoolSystemService*))(Il2CppBase() + 0x170AD44))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(PoolSystemService*, float))(Il2CppBase() + 0x170AFA0))(this, deltaTime);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(PoolSystemService*))(Il2CppBase() + 0x170B184))(this);
	}
	template <typename T = void> T OnLeaveGame() {
		return ((T (*)(PoolSystemService*))(Il2CppBase() + 0x170B35C))(this);
	}
	template <typename T = void> T OnEnterGame(int32_t mapID) {
		return ((T (*)(PoolSystemService*, int32_t))(Il2CppBase() + 0x170B4F4))(this, mapID);
	}
	template <typename T = void> T UnloadUnusedInstance() {
		return ((T (*)(PoolSystemService*))(Il2CppBase() + 0x170B6C8))(this);
	}
	template <typename T = void> T ApplyShift(Il2CppVector3 deltaShift) {
		return ((T (*)(PoolSystemService*, Il2CppVector3))(Il2CppBase() + 0x170B93C))(this, deltaShift);
	}
	template <typename T = void> T PrintStatus() {
		return ((T (*)(PoolSystemService*))(Il2CppBase() + 0x170B8A4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PoolSystemService*))(Il2CppBase() + 0x170BB3C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(PoolSystemService*, float))(Il2CppBase() + 0x170BB44))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(PoolSystemService*))(Il2CppBase() + 0x170BB4C))(this);
	}

};

}
