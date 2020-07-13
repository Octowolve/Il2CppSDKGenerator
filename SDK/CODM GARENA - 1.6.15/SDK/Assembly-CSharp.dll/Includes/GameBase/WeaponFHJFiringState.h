#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponFHJFiringState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponFHJFiringState"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoStopFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T DoStopFire() {
		return ((T (*)(WeaponFHJFiringState*))(Il2CppBase() + 0x1C678CC))(this);
	}
	template <typename T = void> T StopAim() {
		return ((T (*)(WeaponFHJFiringState*))(Il2CppBase() + 0x1C67A74))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DoStopFire() {
		return ((T (*)(WeaponFHJFiringState*))(Il2CppBase() + 0x1C67B3C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopAim() {
		return ((T (*)(WeaponFHJFiringState*))(Il2CppBase() + 0x1C67B40))(this);
	}

};

}
