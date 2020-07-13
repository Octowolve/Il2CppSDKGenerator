#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.AssignedWeapon {

class AssignedWeaponGameInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.AssignedWeapon", "AssignedWeaponGameInfo"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T get_InfiniteCarriedAmmo() {
		return ((T (*)(AssignedWeaponGameInfo*))(Il2CppBase() + 0x2B22294))(this);
	}
	template <typename T = bool> T get_CanAutoPickUpWeapon() {
		return ((T (*)(AssignedWeaponGameInfo*))(Il2CppBase() + 0x2B2229C))(this);
	}
	template <typename T = bool> T get_IsShowPvpLoadout() {
		return ((T (*)(AssignedWeaponGameInfo*))(Il2CppBase() + 0x2B222A4))(this);
	}
	template <typename T = uintptr_t> T get_PvpWeaponViewType() {
		return ((T (*)(AssignedWeaponGameInfo*))(Il2CppBase() + 0x2B222CC))(this);
	}

};

}
