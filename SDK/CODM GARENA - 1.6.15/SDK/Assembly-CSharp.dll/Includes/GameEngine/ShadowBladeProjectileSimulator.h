#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class ShadowBladeProjectileSimulator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "ShadowBladeProjectileSimulator"));
	}

	template <typename T = uintptr_t> T& mWeaponImpactComponent() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanBounceWhenHitPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T IsCanBounceWhenHitPawn() {
		return ((T (*)(ShadowBladeProjectileSimulator*))(Il2CppBase() + 0x33F2CC0))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsCanBounceWhenHitPawn() {
		return ((T (*)(ShadowBladeProjectileSimulator*))(Il2CppBase() + 0x33F2D60))(this);
	}

};

}
