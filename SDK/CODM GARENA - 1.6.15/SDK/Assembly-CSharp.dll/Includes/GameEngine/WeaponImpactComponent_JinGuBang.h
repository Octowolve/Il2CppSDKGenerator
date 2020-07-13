#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponImpactComponentJinGuBang
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponImpactComponent_JinGuBang"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitImpactEffects() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T InitImpactEffects() {
		return ((T (*)(WeaponImpactComponentJinGuBang*))(Il2CppBase() + 0x240A7FC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitImpactEffects() {
		return ((T (*)(WeaponImpactComponentJinGuBang*))(Il2CppBase() + 0x240AB50))(this);
	}

};

}
