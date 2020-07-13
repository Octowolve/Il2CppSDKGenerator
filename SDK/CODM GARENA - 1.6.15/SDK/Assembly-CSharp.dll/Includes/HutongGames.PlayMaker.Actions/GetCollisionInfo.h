#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetCollisionInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetCollisionInfo"));
	}

	template <typename T = uintptr_t> T& gameObjectHit() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& relativeVelocity() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& relativeSpeed() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& contactPoint() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& contactNormal() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& physicsMaterialName() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetCollisionInfo*))(Il2CppBase() + 0x50874EC))(this);
	}
	template <typename T = void> T StoreCollisionInfo() {
		return ((T (*)(GetCollisionInfo*))(Il2CppBase() + 0x5087508))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetCollisionInfo*))(Il2CppBase() + 0x5087848))(this);
	}

};

}
