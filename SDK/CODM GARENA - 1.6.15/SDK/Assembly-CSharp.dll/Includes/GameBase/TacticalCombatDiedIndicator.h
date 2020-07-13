#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalCombatDiedIndicator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalCombatDiedIndicator"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T PreInit() {
		return ((T (*)(TacticalCombatDiedIndicator*))(Il2CppBase() + 0x30C9EA4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PreInit() {
		return ((T (*)(TacticalCombatDiedIndicator*))(Il2CppBase() + 0x30C9F58))(this);
	}

};

}
