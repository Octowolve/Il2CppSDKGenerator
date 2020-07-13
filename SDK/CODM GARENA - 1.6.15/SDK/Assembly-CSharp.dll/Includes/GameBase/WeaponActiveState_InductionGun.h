#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponActiveStateInductionGun
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponActiveState_InductionGun"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryChangeToLastWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponActiveStateInductionGun*))(Il2CppBase() + 0x1C4A8A0))(this);
	}
	template <typename T = void> T TryChangeToLastWeapon() {
		return ((T (*)(WeaponActiveStateInductionGun*))(Il2CppBase() + 0x1C4AA3C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponActiveStateInductionGun*))(Il2CppBase() + 0x1C4ABE4))(this);
	}

};

}
