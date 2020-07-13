#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponFireComponentInstantVehicleGun
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponFireComponent_InstantVehicleGun"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPreAdjustAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppQuaternion> T GetPreAdjustAim() {
		return ((T (*)(WeaponFireComponentInstantVehicleGun*))(Il2CppBase() + 0x23ECE54))(this);
	}
	template <typename T = Il2CppQuaternion> T xLuaBaseProxy_GetPreAdjustAim() {
		return ((T (*)(WeaponFireComponentInstantVehicleGun*))(Il2CppBase() + 0x23ECF90))(this);
	}

};

}
