#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Story {

class LocalCombatVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Story", "LocalCombatVolume"));
	}

	template <typename T = uintptr_t> T& m_Manager() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetManager() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T SetManager(uintptr_t manager) {
		return ((T (*)(LocalCombatVolume*, uintptr_t))(Il2CppBase() + 0x395AB7C))(this, manager);
	}
	template <typename T = void> T OnTriggerEnter(uintptr_t other) {
		return ((T (*)(LocalCombatVolume*, uintptr_t))(Il2CppBase() + 0x395AC24))(this, other);
	}
	template <typename T = void> T OnTriggerExit(uintptr_t other) {
		return ((T (*)(LocalCombatVolume*, uintptr_t))(Il2CppBase() + 0x395AFD0))(this, other);
	}
	template <typename T = void> T xLuaBaseProxy_OnTriggerEnter(uintptr_t P0) {
		return ((T (*)(LocalCombatVolume*, uintptr_t))(Il2CppBase() + 0x395B298))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnTriggerExit(uintptr_t P0) {
		return ((T (*)(LocalCombatVolume*, uintptr_t))(Il2CppBase() + 0x395B2A0))(this, P0);
	}

};

}
