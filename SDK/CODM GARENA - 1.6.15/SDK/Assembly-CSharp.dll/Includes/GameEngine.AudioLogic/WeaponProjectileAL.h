#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine.AudioLogic {

class WeaponProjectileAL
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine.AudioLogic", "WeaponProjectileAL"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_OnProjectileStopMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__IsInRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> static T OnProjectileStopMove(uintptr_t pProjectile, Il2CppString* ProjectileType) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x35DB93C))(0, pProjectile, ProjectileType);
	}
	template <typename T = bool> static T _IsInRange(uintptr_t pProjectile, uintptr_t pCurPawn) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x35DBDB4))(0, pProjectile, pCurPawn);
	}

};

}
