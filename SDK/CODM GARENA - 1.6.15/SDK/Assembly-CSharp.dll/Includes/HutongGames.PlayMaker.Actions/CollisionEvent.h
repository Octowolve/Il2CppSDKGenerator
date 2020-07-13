#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class CollisionEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "CollisionEvent"));
	}

	template <typename T = uintptr_t> T& collision() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& collideTag() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& sendEvent() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& storeCollider() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& storeForce() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(CollisionEvent*))(Il2CppBase() + 0x4F3A9A4))(this);
	}
	template <typename T = void> T OnPreprocess() {
		return ((T (*)(CollisionEvent*))(Il2CppBase() + 0x4F3AA44))(this);
	}
	template <typename T = void> T StoreCollisionInfo(uintptr_t collisionInfo) {
		return ((T (*)(CollisionEvent*, uintptr_t))(Il2CppBase() + 0x4F3AB28))(this, collisionInfo);
	}
	template <typename T = void> T DoCollisionEnter(uintptr_t collisionInfo) {
		return ((T (*)(CollisionEvent*, uintptr_t))(Il2CppBase() + 0x4F3ABD8))(this, collisionInfo);
	}
	template <typename T = void> T DoCollisionStay(uintptr_t collisionInfo) {
		return ((T (*)(CollisionEvent*, uintptr_t))(Il2CppBase() + 0x4F3AD28))(this, collisionInfo);
	}
	template <typename T = void> T DoCollisionExit(uintptr_t collisionInfo) {
		return ((T (*)(CollisionEvent*, uintptr_t))(Il2CppBase() + 0x4F3AE78))(this, collisionInfo);
	}
	template <typename T = void> T DoControllerColliderHit(uintptr_t collisionInfo) {
		return ((T (*)(CollisionEvent*, uintptr_t))(Il2CppBase() + 0x4F3AFC8))(this, collisionInfo);
	}
	template <typename T = void> T DoParticleCollision(uintptr_t other) {
		return ((T (*)(CollisionEvent*, uintptr_t))(Il2CppBase() + 0x4F3B14C))(this, other);
	}
	template <typename T = Il2CppString*> T ErrorCheck() {
		return ((T (*)(CollisionEvent*))(Il2CppBase() + 0x4F3B2A0))(this);
	}

};

}
