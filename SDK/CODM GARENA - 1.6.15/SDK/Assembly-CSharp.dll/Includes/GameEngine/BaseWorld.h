#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class BaseWorld
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "BaseWorld"));
	}

	template <typename T = float> T& m_TimeScaleBeforePaused() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& m_IsPaused() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_Game() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_MapID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_PersistentRoot() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_TickGroup() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_ActorList() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_OptimizeActorList() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_PendingItems() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInitGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLeaveGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessPendingItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreTickTransformOptimize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostTickTransformOptimize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AttachActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWorldPause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePersistentRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = bool> T get_IsPaused() {
		return ((T (*)(BaseWorld*))(Il2CppBase() + 0x360F048))(this);
	}
	template <typename T = uintptr_t> T get_Game() {
		return ((T (*)(BaseWorld*))(Il2CppBase() + 0x360F050))(this);
	}
	template <typename T = int32_t> T get_MapID() {
		return ((T (*)(BaseWorld*))(Il2CppBase() + 0x360F058))(this);
	}
	template <typename T = void> T set_MapID(int32_t value) {
		return ((T (*)(BaseWorld*, int32_t))(Il2CppBase() + 0x360F060))(this, value);
	}
	template <typename T = uintptr_t> T get_PersistentRoot() {
		return ((T (*)(BaseWorld*))(Il2CppBase() + 0x360F248))(this);
	}
	template <typename T = uintptr_t> T get_PersistentRootGO() {
		return ((T (*)(BaseWorld*))(Il2CppBase() + 0x360F250))(this);
	}
	template <typename T = void*> T get_ActorList() {
		return ((T (*)(BaseWorld*))(Il2CppBase() + 0x360F330))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BaseWorld*))(Il2CppBase() + 0x360F338))(this);
	}
	template <typename T = bool> T InitGame(uintptr_t gameConstructor) {
		return ((T (*)(BaseWorld*, uintptr_t))(Il2CppBase() + 0x360F3F0))(this, gameConstructor);
	}
	template <typename T = void> T PostInitGame() {
		return ((T (*)(BaseWorld*))(Il2CppBase() + 0x360F4F4))(this);
	}
	template <typename T = void> T OnLeaveGame() {
		return ((T (*)(BaseWorld*))(Il2CppBase() + 0x360F638))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(BaseWorld*))(Il2CppBase() + 0x360F904))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(BaseWorld*, float))(Il2CppBase() + 0x360FAA0))(this, deltaTime);
	}
	template <typename T = void> T ProcessPendingItem(uintptr_t pendingItem) {
		return ((T (*)(BaseWorld*, uintptr_t))(Il2CppBase() + 0x3610188))(this, pendingItem);
	}
	template <typename T = void> T PreTickTransformOptimize() {
		return ((T (*)(BaseWorld*))(Il2CppBase() + 0x360FF28))(this);
	}
	template <typename T = void> T PostTickTransformOptimize() {
		return ((T (*)(BaseWorld*))(Il2CppBase() + 0x3610058))(this);
	}
	template <typename T = uintptr_t> T SpawnActor(uintptr_t Info, Il2CppVector3 SpawnLocation, Il2CppQuaternion SpawnRotation, void* CallbackFun) {
		return ((T (*)(BaseWorld*, uintptr_t, Il2CppVector3, Il2CppQuaternion, void*))(Il2CppBase() + 0x3610484))(this, Info, SpawnLocation, SpawnRotation, CallbackFun);
	}
	template <typename T = void> T AttachActor(uintptr_t actorRoot, Il2CppList<uintptr_t>* componentTypeList) {
		return ((T (*)(BaseWorld*, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3610A58))(this, actorRoot, componentTypeList);
	}
	template <typename T = void> T DestroyActor(uintptr_t actorRoot) {
		return ((T (*)(BaseWorld*, uintptr_t))(Il2CppBase() + 0x3610C38))(this, actorRoot);
	}
	template <typename T = void> T AddActor(uintptr_t actorRoot) {
		return ((T (*)(BaseWorld*, uintptr_t))(Il2CppBase() + 0x361094C))(this, actorRoot);
	}
	template <typename T = void> T SetWorldPause(bool paused) {
		return ((T (*)(BaseWorld*, bool))(Il2CppBase() + 0x3610E6C))(this, paused);
	}
	template <typename T = void> T UpdatePersistentRoot() {
		return ((T (*)(BaseWorld*))(Il2CppBase() + 0x360F130))(this);
	}

};

}
