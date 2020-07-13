#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponInactiveStateHelicopter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponInactiveState_Helicopter"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponInactiveStateHelicopter*))(Il2CppBase() + 0x45A3AF0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponInactiveStateHelicopter*))(Il2CppBase() + 0x45A3D84))(this);
	}

};

}
