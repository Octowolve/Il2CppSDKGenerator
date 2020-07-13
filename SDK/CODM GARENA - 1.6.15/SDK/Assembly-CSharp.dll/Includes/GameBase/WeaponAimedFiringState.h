#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponAimedFiringState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponAimedFiringState"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoStopFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T DoStopFire() {
		return ((T (*)(WeaponAimedFiringState*))(Il2CppBase() + 0x1C4AE38))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DoStopFire() {
		return ((T (*)(WeaponAimedFiringState*))(Il2CppBase() + 0x1C4B12C))(this);
	}

};

}
