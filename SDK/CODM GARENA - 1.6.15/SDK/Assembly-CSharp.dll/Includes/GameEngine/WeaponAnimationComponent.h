#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponAnimationComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponAnimationComponent"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRuntimeAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetRuntimeAnimatorController(uintptr_t animatorController, bool forceSet) {
		return ((T (*)(WeaponAnimationComponent*, uintptr_t, bool))(Il2CppBase() + 0x2E9561C))(this, animatorController, forceSet);
	}
	template <typename T = void> T xLuaBaseProxy_SetRuntimeAnimatorController(uintptr_t P0, bool P1) {
		return ((T (*)(WeaponAnimationComponent*, uintptr_t, bool))(Il2CppBase() + 0x2E957E8))(this, P0, P1);
	}

};

}
