#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine.AudioLogic {

class WeaponProjectileSoundLogic
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine.AudioLogic", "WeaponProjectileSoundLogic"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayExplodeSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> static T PlayExplodeSound(float fDelayTime, float fDuration, int32_t iWeaponID, Il2CppVector3 position) {
		return ((T (*)(void *, float, float, int32_t, Il2CppVector3))(Il2CppBase() + 0x35DC14C))(0, fDelayTime, fDuration, iWeaponID, position);
	}

};

}
