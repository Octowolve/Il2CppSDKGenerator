#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class ActorRoot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "ActorRoot"));
	}

	template <typename T = int32_t> T& ActorType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& EarlyTick() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& HasInit() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_OrderedComponents() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_OptimizeComponents() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& m_HasOptimizeComponents() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& DespawnManagedAssetsOnDestroy() {
		return *(T*)((uintptr_t)this + 0x1D);
	}
	template <typename T = uintptr_t> T& PoolSpawnedFrom() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& RecycleOnDestroy() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& IsServerRelevant() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = bool> T& m_CalledDestroyAllComponent() {
		return *(T*)((uintptr_t)this + 0x26);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& sTempList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& sTempTypeList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitTransformOptimize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsTransformOptimize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AttachComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitComponents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddSimpleComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateComponents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreTickTransformOptimize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostTickTransformOptimize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyAllComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAllComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CollectManagedAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsDestroyed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroySelf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCachedComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}

	template <typename T = bool> T get_HasInit() {
		return ((T (*)(ActorRoot*))(Il2CppBase() + 0x2B3A6B0))(this);
	}
	template <typename T = void> T set_HasInit(bool value) {
		return ((T (*)(ActorRoot*, bool))(Il2CppBase() + 0x2B3A6B8))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_ActorComponents() {
		return ((T (*)(ActorRoot*))(Il2CppBase() + 0x2B3A6C0))(this);
	}
	template <typename T = void> T InitTransformOptimize() {
		return ((T (*)(ActorRoot*))(Il2CppBase() + 0x2B3A6C8))(this);
	}
	template <typename T = bool> T IsTransformOptimize() {
		return ((T (*)(ActorRoot*))(Il2CppBase() + 0x2B3A990))(this);
	}
	template <typename T = void> T AttachComponent(uintptr_t inType, uintptr_t Component) {
		return ((T (*)(ActorRoot*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2B3AA68))(this, inType, Component);
	}
	template <typename T = void> T InitComponents(Il2CppList<uintptr_t>* inTypes, Il2CppList<uintptr_t>* inSimpleTypes) {
		return ((T (*)(ActorRoot*, Il2CppList<uintptr_t>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2B3AE10))(this, inTypes, inSimpleTypes);
	}
	template <typename T = uintptr_t> T AddComponent(uintptr_t inType) {
		return ((T (*)(ActorRoot*, uintptr_t))(Il2CppBase() + 0x2B3B7FC))(this, inType);
	}
	template <typename T = uintptr_t> T AddSimpleComponent(uintptr_t inType) {
		return ((T (*)(ActorRoot*, uintptr_t))(Il2CppBase() + 0x2B3BB08))(this, inType);
	}
	template <typename T = void> T UpdateComponents(float deltaTime) {
		return ((T (*)(ActorRoot*, float))(Il2CppBase() + 0x2B3BD40))(this, deltaTime);
	}
	template <typename T = void> T PreInit() {
		return ((T (*)(ActorRoot*))(Il2CppBase() + 0x2B3BF48))(this);
	}
	template <typename T = void> T PreTickTransformOptimize() {
		return ((T (*)(ActorRoot*))(Il2CppBase() + 0x2B3C138))(this);
	}
	template <typename T = void> T PostTickTransformOptimize() {
		return ((T (*)(ActorRoot*))(Il2CppBase() + 0x2B3C320))(this);
	}
	template <typename T = void> T RemoveComponent(uintptr_t inType) {
		return ((T (*)(ActorRoot*, uintptr_t))(Il2CppBase() + 0x2B3C508))(this, inType);
	}
	template <typename T = void> T DestroyAllComponent() {
		return ((T (*)(ActorRoot*))(Il2CppBase() + 0x2B3C784))(this);
	}
	template <typename T = void> T ResetAllComponent() {
		return ((T (*)(ActorRoot*))(Il2CppBase() + 0x2B3CAC0))(this);
	}
	template <typename T = void> T CollectManagedAsset() {
		return ((T (*)(ActorRoot*))(Il2CppBase() + 0x2B3CD30))(this);
	}
	template <typename T = bool> T IsDestroyed() {
		return ((T (*)(ActorRoot*))(Il2CppBase() + 0x2B3CF00))(this);
	}
	template <typename T = void> T DestroySelf() {
		return ((T (*)(ActorRoot*))(Il2CppBase() + 0x2B3D018))(this);
	}
	template <typename T = uintptr_t> T GetCachedComponent() {
		return ((T (*)(ActorRoot*))(Il2CppBase() + 0x334D664))(this);
	}
	template <typename T = uintptr_t> T FindComponent(uintptr_t inType) {
		return ((T (*)(ActorRoot*, uintptr_t))(Il2CppBase() + 0x2B3AC90))(this, inType);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(ActorRoot*))(Il2CppBase() + 0x2B3D244))(this);
	}

};

}
