#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponScythe
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponScythe"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T InitWeapon() {
		return ((T (*)(WeaponScythe*))(Il2CppBase() + 0x3A7CBB4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitWeapon() {
		return ((T (*)(WeaponScythe*))(Il2CppBase() + 0x3A7CC5C))(this);
	}

};

}
