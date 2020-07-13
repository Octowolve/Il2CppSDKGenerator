#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AIWeaponLaser
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AIWeapon_Laser"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(AIWeaponLaser*))(Il2CppBase() + 0x49B9FD0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(AIWeaponLaser*))(Il2CppBase() + 0x49BA0CC))(this);
	}

};

}
