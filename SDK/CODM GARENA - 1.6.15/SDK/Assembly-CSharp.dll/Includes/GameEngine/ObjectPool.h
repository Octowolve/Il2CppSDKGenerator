#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class ObjectPool
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "ObjectPool"));
	}

	template <typename T = float> T& m_CurrentTime() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> static T& DefaultQueueCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_DestroySchedule() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& m_DestroyScheduleDic() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_QueryDestroySchedule() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Despawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Despawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_Despawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncSpawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AsyncSpawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnAndGetComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = Il2CppString*> T GetPoolName() {
		return ((T (*)(ObjectPool*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnEnterGame(int32_t mapID) {
		return ((T (*)(ObjectPool*, int32_t))(Il2CppBase() + 0x0))(this, mapID);
	}
	template <typename T = void> T OnLeaveGame() {
		return ((T (*)(ObjectPool*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T UnloadUnusedInstance() {
		return ((T (*)(ObjectPool*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Dismiss(uintptr_t gameObject) {
		return ((T (*)(ObjectPool*, uintptr_t))(Il2CppBase() + 0x0))(this, gameObject);
	}
	template <typename T = void> T Dismiss_1(int32_t assetID, uintptr_t gameObject) {
		return ((T (*)(ObjectPool*, int32_t, uintptr_t))(Il2CppBase() + 0x0))(this, assetID, gameObject);
	}
	template <typename T = void> T ApplyShift(Il2CppVector3 deltaShift) {
		return ((T (*)(ObjectPool*, Il2CppVector3))(Il2CppBase() + 0x0))(this, deltaShift);
	}
	template <typename T = void> T PrintStatus() {
		return ((T (*)(ObjectPool*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T DelayDestroy(uintptr_t obj, float delay) {
		return ((T (*)(ObjectPool*, uintptr_t, float))(Il2CppBase() + 0x271B518))(this, obj, delay);
	}
	template <typename T = void> T QueryDestroySchedule() {
		return ((T (*)(ObjectPool*))(Il2CppBase() + 0x271B714))(this);
	}
	template <typename T = void> T Despawn(uintptr_t obj) {
		return ((T (*)(ObjectPool*, uintptr_t))(Il2CppBase() + 0x0))(this, obj);
	}
	template <typename T = void> T Despawn_1(uintptr_t obj, float delay) {
		return ((T (*)(ObjectPool*, uintptr_t, float))(Il2CppBase() + 0x271BAE8))(this, obj, delay);
	}
	template <typename T = void> T Despawn_2(uintptr_t gameObject) {
		return ((T (*)(ObjectPool*, uintptr_t))(Il2CppBase() + 0x271BC80))(this, gameObject);
	}
	template <typename T = void> T Despawn_3(uintptr_t gameObject, float delay) {
		return ((T (*)(ObjectPool*, uintptr_t, float))(Il2CppBase() + 0x271BF00))(this, gameObject, delay);
	}
	template <typename T = uintptr_t> T SyncSpawn(uintptr_t prefab, Il2CppVector3 pos, Il2CppQuaternion rot, float lifeTime, uintptr_t parent) {
		return ((T (*)(ObjectPool*, uintptr_t, Il2CppVector3, Il2CppQuaternion, float, uintptr_t))(Il2CppBase() + 0x0))(this, prefab, pos, rot, lifeTime, parent);
	}
	template <typename T = uintptr_t> T SyncSpawn_1(int32_t assetID, Il2CppVector3 pos, Il2CppQuaternion rot, float lifeTime, uintptr_t parent) {
		return ((T (*)(ObjectPool*, int32_t, Il2CppVector3, Il2CppQuaternion, float, uintptr_t))(Il2CppBase() + 0x0))(this, assetID, pos, rot, lifeTime, parent);
	}
	template <typename T = uintptr_t> T SyncSpawn_2(int32_t assetID) {
		return ((T (*)(ObjectPool*, int32_t))(Il2CppBase() + 0x271C098))(this, assetID);
	}
	template <typename T = void> T AsyncSpawn(int32_t assetID, Il2CppVector3 pos, Il2CppQuaternion rot, float lifeTime, uintptr_t parent, void* callback) {
		return ((T (*)(ObjectPool*, int32_t, Il2CppVector3, Il2CppQuaternion, float, uintptr_t, void*))(Il2CppBase() + 0x0))(this, assetID, pos, rot, lifeTime, parent, callback);
	}
	template <typename T = void> T AsyncSpawn_1(int32_t assetID) {
		return ((T (*)(ObjectPool*, int32_t))(Il2CppBase() + 0x271C1B8))(this, assetID);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ObjectPool*))(Il2CppBase() + 0x271C2E4))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(ObjectPool*, float))(Il2CppBase() + 0x271C3E4))(this, deltaTime);
	}
	template <typename T = uintptr_t> T SpawnAndGetComponent(int32_t assetID, Il2CppVector3 pos, Il2CppQuaternion rot, float lifeTime, uintptr_t parent) {
		return ((T (*)(ObjectPool*, int32_t, Il2CppVector3, Il2CppQuaternion, float, uintptr_t))(Il2CppBase() + 0x3352FFC))(this, assetID, pos, rot, lifeTime, parent);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(ObjectPool*))(Il2CppBase() + 0x271C4A0))(this);
	}

};

}
