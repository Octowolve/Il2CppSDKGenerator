#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class UnAttackableColliderMap
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "UnAttackableColliderMap"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& m_ColliderToUnAttackableTargetMap() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUnAttackableTargetForCollider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterUnAttackableCollider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnregisterUnAttackableCollider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T GetUnAttackableTargetForCollider(uintptr_t col) {
		return ((T (*)(UnAttackableColliderMap*, uintptr_t))(Il2CppBase() + 0x2E76EA8))(this, col);
	}
	template <typename T = void> T RegisterUnAttackableCollider(uintptr_t col, uintptr_t target) {
		return ((T (*)(UnAttackableColliderMap*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2E77020))(this, col, target);
	}
	template <typename T = void> T UnregisterUnAttackableCollider(uintptr_t col) {
		return ((T (*)(UnAttackableColliderMap*, uintptr_t))(Il2CppBase() + 0x2E7729C))(this, col);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(UnAttackableColliderMap*))(Il2CppBase() + 0x2E773D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(UnAttackableColliderMap*))(Il2CppBase() + 0x2E774B0))(this);
	}

};

}
