#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AttackableColliderMap
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AttackableColliderMap"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& m_ColliderToAttackableTargetMap() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAttackableTargetForCollider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterAttackableCollider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnregisterAttackableCollider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T GetAttackableTargetForCollider(uintptr_t col) {
		return ((T (*)(AttackableColliderMap*, uintptr_t))(Il2CppBase() + 0x35CD0EC))(this, col);
	}
	template <typename T = void> T RegisterAttackableCollider(uintptr_t col, uintptr_t target) {
		return ((T (*)(AttackableColliderMap*, uintptr_t, uintptr_t))(Il2CppBase() + 0x35CD248))(this, col, target);
	}
	template <typename T = void> T UnregisterAttackableCollider(uintptr_t col) {
		return ((T (*)(AttackableColliderMap*, uintptr_t))(Il2CppBase() + 0x35CD4C4))(this, col);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AttackableColliderMap*))(Il2CppBase() + 0x35CD5F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(AttackableColliderMap*))(Il2CppBase() + 0x35CD6D8))(this);
	}

};

}
