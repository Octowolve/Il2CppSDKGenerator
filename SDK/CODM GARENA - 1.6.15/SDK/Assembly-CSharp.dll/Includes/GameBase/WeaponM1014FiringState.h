#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponM1014FiringState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponM1014FiringState"));
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
		return ((T (*)(WeaponM1014FiringState*))(Il2CppBase() + 0x3A574A0))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponM1014FiringState*, float))(Il2CppBase() + 0x3A57790))(this, DeltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_WeaponFire() {
		return ((T (*)(WeaponM1014FiringState*))(Il2CppBase() + 0x3A578B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponM1014FiringState*, float))(Il2CppBase() + 0x3A578BC))(this, P0);
	}

};

}
