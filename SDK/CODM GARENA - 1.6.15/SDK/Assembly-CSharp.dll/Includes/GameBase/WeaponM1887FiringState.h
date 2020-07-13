#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponM1887FiringState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponM1887FiringState"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WeaponFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T WeaponFire() {
		return ((T (*)(WeaponM1887FiringState*))(Il2CppBase() + 0x3A58B30))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponM1887FiringState*, float))(Il2CppBase() + 0x3A58E64))(this, DeltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_WeaponFire() {
		return ((T (*)(WeaponM1887FiringState*))(Il2CppBase() + 0x3A58F88))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponM1887FiringState*, float))(Il2CppBase() + 0x3A58F90))(this, P0);
	}

};

}
