#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.AssignedWeapon {

class BoomWeaponGameBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.AssignedWeapon", "BoomWeaponGameBuilder"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_m_GameModeType() {
		return ((T (*)(BoomWeaponGameBuilder*))(Il2CppBase() + 0x2B22AF0))(this);
	}

};

}
