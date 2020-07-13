#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Story {

class DamageTriggerTutorial
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Story", "DamageTriggerTutorial"));
	}

	template <typename T = Il2CppString*> T& eventName() {
		return *(T*)((uintptr_t)this + 0x74);
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
		return ((T (*)(DamageTriggerTutorial*))(Il2CppBase() + 0x3957A44))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(DamageTriggerTutorial*))(Il2CppBase() + 0x3957A4C))(this);
	}
	template <typename T = void> T TakeDamage(uintptr_t info) {
		return ((T (*)(DamageTriggerTutorial*, uintptr_t))(Il2CppBase() + 0x3957B28))(this, info);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(DamageTriggerTutorial*))(Il2CppBase() + 0x3957C88))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TakeDamage(uintptr_t P0) {
		return ((T (*)(DamageTriggerTutorial*, uintptr_t))(Il2CppBase() + 0x3957C90))(this, P0);
	}

};

}
