#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class RagdollCollider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "RagdollCollider"));
	}

	template <typename T = uintptr_t> T& Master() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& PhysicsCallback() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_nullFuction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerStay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> static T nullFuction() {
		return ((T (*)(void *))(Il2CppBase() + 0x2DD7CB0))(0);
	}
	template <typename T = void> T OnTriggerStay(uintptr_t other) {
		return ((T (*)(RagdollCollider*, uintptr_t))(Il2CppBase() + 0x2DD7D40))(this, other);
	}

};

}
