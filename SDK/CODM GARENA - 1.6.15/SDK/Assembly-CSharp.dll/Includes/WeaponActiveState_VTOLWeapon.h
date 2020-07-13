#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponActiveStateVTOLWeapon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponActiveState_VTOLWeapon"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponActiveStateVTOLWeapon*, float))(Il2CppBase() + 0x4587134))(this, DeltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponActiveStateVTOLWeapon*, float))(Il2CppBase() + 0x4587268))(this, P0);
	}

};

}
