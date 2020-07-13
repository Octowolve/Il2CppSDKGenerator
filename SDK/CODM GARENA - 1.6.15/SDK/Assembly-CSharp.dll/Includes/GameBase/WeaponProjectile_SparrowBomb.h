#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponProjectileSparrowBomb
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponProjectile_SparrowBomb"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessHitInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitFlightEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T ProcessHitInfo(uintptr_t info) {
		return ((T (*)(WeaponProjectileSparrowBomb*, uintptr_t))(Il2CppBase() + 0x3A676DC))(this, info);
	}
	template <typename T = void> T InitFlightEffect() {
		return ((T (*)(WeaponProjectileSparrowBomb*))(Il2CppBase() + 0x3A67A5C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ProcessHitInfo(uintptr_t P0) {
		return ((T (*)(WeaponProjectileSparrowBomb*, uintptr_t))(Il2CppBase() + 0x3A68410))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_InitFlightEffect() {
		return ((T (*)(WeaponProjectileSparrowBomb*))(Il2CppBase() + 0x3A68418))(this);
	}

};

}
