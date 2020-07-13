#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponDredgeLavaFiringState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponDredgeLavaFiringState"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoStopFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T DoStopFire() {
		return ((T (*)(WeaponDredgeLavaFiringState*))(Il2CppBase() + 0x1C65470))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DoStopFire() {
		return ((T (*)(WeaponDredgeLavaFiringState*))(Il2CppBase() + 0x1C655A4))(this);
	}

};

}
