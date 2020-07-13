#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class IActorComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "IActorComponent"));
	}


	template <typename T = void> T SetActorRoot(uintptr_t inRoot) {
		return ((T (*)(IActorComponent*, uintptr_t))(Il2CppBase() + 0x0))(this, inRoot);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(IActorComponent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T PreInit() {
		return ((T (*)(IActorComponent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(IActorComponent*, float))(Il2CppBase() + 0x0))(this, deltaTime);
	}
	template <typename T = bool> T EnableOptimizeTransform() {
		return ((T (*)(IActorComponent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T PreTickTransformOptimize() {
		return ((T (*)(IActorComponent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T PostTickTransformOptimize() {
		return ((T (*)(IActorComponent*))(Il2CppBase() + 0x0))(this);
	}

};

}
