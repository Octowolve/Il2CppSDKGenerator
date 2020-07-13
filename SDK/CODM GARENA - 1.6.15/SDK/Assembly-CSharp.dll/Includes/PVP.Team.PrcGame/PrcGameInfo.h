#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.PrcGame {

class PrcGameInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.PrcGame", "PrcGameInfo"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T get_InfiniteCarriedAmmo() {
		return ((T (*)(PrcGameInfo*))(Il2CppBase() + 0x348F288))(this);
	}

};

}
