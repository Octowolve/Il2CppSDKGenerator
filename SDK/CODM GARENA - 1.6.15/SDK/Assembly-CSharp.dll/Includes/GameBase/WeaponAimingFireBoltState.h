#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponAimingFireBoltState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponAimingFireBoltState"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBoltName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T StopAim() {
		return ((T (*)(WeaponAimingFireBoltState*))(Il2CppBase() + 0x1C4D8EC))(this);
	}
	template <typename T = Il2CppString*> T GetBoltName() {
		return ((T (*)(WeaponAimingFireBoltState*))(Il2CppBase() + 0x1C4DB6C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopAim() {
		return ((T (*)(WeaponAimingFireBoltState*))(Il2CppBase() + 0x1C4DC24))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetBoltName() {
		return ((T (*)(WeaponAimingFireBoltState*))(Il2CppBase() + 0x1C4DC2C))(this);
	}

};

}
