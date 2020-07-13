#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class ZombieProjectileSimulator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "ZombieProjectileSimulator"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldFilterImpact() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T ShouldFilterImpact(uintptr_t impactInfo) {
		return ((T (*)(ZombieProjectileSimulator*, uintptr_t))(Il2CppBase() + 0x4364070))(this, impactInfo);
	}
	template <typename T = bool> T xLuaBaseProxy_ShouldFilterImpact(uintptr_t P0) {
		return ((T (*)(ZombieProjectileSimulator*, uintptr_t))(Il2CppBase() + 0x4364200))(this, P0);
	}

};

}
