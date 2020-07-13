#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class SimpleComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "SimpleComponent"));
	}

	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& HasRecycle() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableOptimizeTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreTickTransformOptimize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostTickTransformOptimize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActorRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecycle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T get_Root() {
		return ((T (*)(SimpleComponent*))(Il2CppBase() + 0x33F2E0C))(this);
	}
	template <typename T = void> T set_Root(uintptr_t value) {
		return ((T (*)(SimpleComponent*, uintptr_t))(Il2CppBase() + 0x33F2E14))(this, value);
	}
	template <typename T = void> T PreInit() {
		return ((T (*)(SimpleComponent*))(Il2CppBase() + 0x33F2E1C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(SimpleComponent*))(Il2CppBase() + 0x33F2EB4))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(SimpleComponent*, float))(Il2CppBase() + 0x33F2F4C))(this, deltaTime);
	}
	template <typename T = bool> T EnableOptimizeTransform() {
		return ((T (*)(SimpleComponent*))(Il2CppBase() + 0x33F2FEC))(this);
	}
	template <typename T = void> T PreTickTransformOptimize() {
		return ((T (*)(SimpleComponent*))(Il2CppBase() + 0x33F308C))(this);
	}
	template <typename T = void> T PostTickTransformOptimize() {
		return ((T (*)(SimpleComponent*))(Il2CppBase() + 0x33F3124))(this);
	}
	template <typename T = void> T SetActorRoot(uintptr_t inRoot) {
		return ((T (*)(SimpleComponent*, uintptr_t))(Il2CppBase() + 0x33F31BC))(this, inRoot);
	}
	template <typename T = bool> T get_HasRecycle() {
		return ((T (*)(SimpleComponent*))(Il2CppBase() + 0x33F3264))(this);
	}
	template <typename T = void> T set_HasRecycle(bool value) {
		return ((T (*)(SimpleComponent*, bool))(Il2CppBase() + 0x33F326C))(this, value);
	}
	template <typename T = void> T OnRecycle() {
		return ((T (*)(SimpleComponent*))(Il2CppBase() + 0x33F3274))(this);
	}

};

}
