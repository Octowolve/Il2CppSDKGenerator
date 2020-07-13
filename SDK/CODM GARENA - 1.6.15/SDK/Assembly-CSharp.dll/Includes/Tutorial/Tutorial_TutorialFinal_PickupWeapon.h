#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Tutorial {

class TutorialTutorialFinalPickupWeapon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Tutorial", "Tutorial_TutorialFinal_PickupWeapon"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T CanTrigger(uintptr_t e) {
		return ((T (*)(TutorialTutorialFinalPickupWeapon*, uintptr_t))(Il2CppBase() + 0x4B19900))(this, e);
	}
	template <typename T = bool> T xLuaBaseProxy_CanTrigger(uintptr_t P0) {
		return ((T (*)(TutorialTutorialFinalPickupWeapon*, uintptr_t))(Il2CppBase() + 0x4B199D0))(this, P0);
	}

};

}
