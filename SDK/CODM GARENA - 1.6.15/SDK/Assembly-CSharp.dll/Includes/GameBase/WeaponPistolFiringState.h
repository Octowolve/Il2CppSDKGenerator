#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponPistolFiringState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponPistolFiringState"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WeaponFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T WeaponFire() {
		return ((T (*)(WeaponPistolFiringState*))(Il2CppBase() + 0x3A62538))(this);
	}
	template <typename T = void> T BeginFire() {
		return ((T (*)(WeaponPistolFiringState*))(Il2CppBase() + 0x3A625E8))(this);
	}
	template <typename T = void> T StopFire() {
		return ((T (*)(WeaponPistolFiringState*))(Il2CppBase() + 0x3A6268C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WeaponFire() {
		return ((T (*)(WeaponPistolFiringState*))(Il2CppBase() + 0x3A62724))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginFire() {
		return ((T (*)(WeaponPistolFiringState*))(Il2CppBase() + 0x3A6272C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopFire() {
		return ((T (*)(WeaponPistolFiringState*))(Il2CppBase() + 0x3A62734))(this);
	}

};

}
