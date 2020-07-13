#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponFiringStateVTOL
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponFiringState_VTOL"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponFiringStateVTOL*))(Il2CppBase() + 0x49E8F50))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponFiringStateVTOL*))(Il2CppBase() + 0x49E910C))(this);
	}

};

}
