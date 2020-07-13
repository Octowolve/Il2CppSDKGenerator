#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponProjectileMolotov
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponProjectile_Molotov"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanExplode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T CanExplode(uintptr_t impactInfo) {
		return ((T (*)(WeaponProjectileMolotov*, uintptr_t))(Il2CppBase() + 0x243A18C))(this, impactInfo);
	}
	template <typename T = bool> T xLuaBaseProxy_CanExplode(uintptr_t P0) {
		return ((T (*)(WeaponProjectileMolotov*, uintptr_t))(Il2CppBase() + 0x243A234))(this, P0);
	}

};

}
