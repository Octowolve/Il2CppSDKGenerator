#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.URF {

class URFGameInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.URF", "URFGameInfo"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T get_InfiniteCarriedAmmo() {
		return ((T (*)(URFGameInfo*))(Il2CppBase() + 0x3D943C0))(this);
	}
	template <typename T = bool> T get_CanGrenadeReload() {
		return ((T (*)(URFGameInfo*))(Il2CppBase() + 0x3D943C8))(this);
	}

};

}
