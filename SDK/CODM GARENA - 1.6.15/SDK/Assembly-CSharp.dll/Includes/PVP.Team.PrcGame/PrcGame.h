#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.PrcGame {

class PrcGame
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.PrcGame", "PrcGame"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T get_IsClearAllDroppedPickUpOnRoundStart() {
		return ((T (*)(PrcGame*))(Il2CppBase() + 0x348E980))(this);
	}

};

}
