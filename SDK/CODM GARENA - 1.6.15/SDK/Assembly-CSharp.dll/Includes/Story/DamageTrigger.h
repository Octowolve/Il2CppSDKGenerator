#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Story {

class DamageTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Story", "DamageTrigger"));
	}

	template <typename T = uintptr_t> T& fsm() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppString*> T& eventName() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& colliderShape() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TakeDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> T get_CanLockedByRPG() {
		return ((T (*)(DamageTrigger*))(Il2CppBase() + 0x3957420))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(DamageTrigger*))(Il2CppBase() + 0x3957428))(this);
	}
	template <typename T = uintptr_t> T get_FireColliderShape() {
		return ((T (*)(DamageTrigger*))(Il2CppBase() + 0x3957868))(this);
	}
	template <typename T = void> T TakeDamage(uintptr_t info) {
		return ((T (*)(DamageTrigger*, uintptr_t))(Il2CppBase() + 0x3957870))(this, info);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(DamageTrigger*))(Il2CppBase() + 0x3957990))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TakeDamage(uintptr_t P0) {
		return ((T (*)(DamageTrigger*, uintptr_t))(Il2CppBase() + 0x3957998))(this, P0);
	}

};

}
