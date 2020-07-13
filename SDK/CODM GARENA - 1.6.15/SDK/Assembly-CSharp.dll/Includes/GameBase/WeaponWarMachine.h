#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponWarMachine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponWarMachine"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsUseWeaponCheckFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Activate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareInputParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T InitWeapon() {
		return ((T (*)(WeaponWarMachine*))(Il2CppBase() + 0x458DDF0))(this);
	}
	template <typename T = bool> T IsUseWeaponCheckFire() {
		return ((T (*)(WeaponWarMachine*))(Il2CppBase() + 0x458DE98))(this);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(WeaponWarMachine*))(Il2CppBase() + 0x458DF38))(this);
	}
	template <typename T = void> T PrepareInputParam(uintptr_t param) {
		return ((T (*)(WeaponWarMachine*, uintptr_t))(Il2CppBase() + 0x458E140))(this, param);
	}
	template <typename T = void> T xLuaBaseProxy_InitWeapon() {
		return ((T (*)(WeaponWarMachine*))(Il2CppBase() + 0x458E20C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsUseWeaponCheckFire() {
		return ((T (*)(WeaponWarMachine*))(Il2CppBase() + 0x458E214))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Activate() {
		return ((T (*)(WeaponWarMachine*))(Il2CppBase() + 0x458E21C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PrepareInputParam(uintptr_t P0) {
		return ((T (*)(WeaponWarMachine*, uintptr_t))(Il2CppBase() + 0x458E224))(this, P0);
	}

};

}
