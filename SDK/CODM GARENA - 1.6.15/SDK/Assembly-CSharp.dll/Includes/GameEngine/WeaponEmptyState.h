#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponEmptyState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponEmptyState"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponEmptyState*))(Il2CppBase() + 0x2EBA000))(this);
	}
	template <typename T = void> T EndState() {
		return ((T (*)(WeaponEmptyState*))(Il2CppBase() + 0x2EBA0A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponEmptyState*))(Il2CppBase() + 0x2EBA150))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndState() {
		return ((T (*)(WeaponEmptyState*))(Il2CppBase() + 0x2EBA158))(this);
	}

};

}
